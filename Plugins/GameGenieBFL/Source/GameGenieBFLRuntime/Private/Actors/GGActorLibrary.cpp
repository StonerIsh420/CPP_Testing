// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Private/Actors/GGActorLibrary.cpp
#include "Actors/GGActorLibrary.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Components/MeshComponent.h"
#include "Components/ChildActorComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Curves/CurveFloat.h"
#include "NavigationSystem.h"
#include "DrawDebugHelpers.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "TimerManager.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Subsystems/GGObjectPoolSubsystem.h"
#include "Interfaces/GGPoolable.h"

AActor* UGGActorLibrary::GetClosestActorWithSightCheck(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass,
	const FVector& FromLocation, float MaxDistance, float& OutDistance, ECollisionChannel TraceChannel, AActor* ActorToIgnore)
{
	OutDistance = -1.f;

	UWorld* World = GEngine ? GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull) : nullptr;
	if (!World || !*ActorClass) { return nullptr; }

	AActor* Best = nullptr;
	float BestDistSq = FLT_MAX;

	FCollisionQueryParams Params(SCENE_QUERY_STAT(GG_ClosestSight), false, ActorToIgnore);

	for (TActorIterator<AActor> It(World, ActorClass); It; ++It)
	{
		AActor* Candidate = *It;
		if (!IsValid(Candidate) || Candidate == ActorToIgnore) { continue; }

		const float DistSq = FVector::DistSquared(FromLocation, Candidate->GetActorLocation());
		if (MaxDistance > 0.f && DistSq > FMath::Square(MaxDistance)) { continue; }

		FHitResult Hit;
		const FVector Start = FromLocation;
		const FVector End = Candidate->GetActorLocation();
		const bool bBlocked = World->LineTraceSingleByChannel(Hit, Start, End, TraceChannel, Params);
		if (bBlocked && Hit.GetActor() != Candidate) { continue; }

		if (DistSq < BestDistSq)
		{
			BestDistSq = DistSq;
			Best = Candidate;
		}
	}

	if (Best)
	{
		OutDistance = FMath::Sqrt(BestDistSq);
	}
	return Best;
}

UActorComponent* UGGActorLibrary::FindComponentByTag(AActor* Owner, FName Tag, TSubclassOf<UActorComponent> OptionalClassFilter)
{
	if (!Owner) { return nullptr; }

	TArray<UActorComponent*> Components = Owner->GetComponents().Array();
	for (UActorComponent* C : Components)
	{
		if (!IsValid(C)) { continue; }
		if (OptionalClassFilter && !C->IsA(OptionalClassFilter)) { continue; }
		if (C->ComponentTags.Contains(Tag))
		{
			return C;
		}
	}
	return nullptr;
}

static void GG_CollectChildrenRecursive(AActor* Root, TSubclassOf<AActor> Class, bool bIncludeSelf, TArray<AActor*>& Out)
{
	if (!Root) { return; }

	if (bIncludeSelf && (!Class || Root->IsA(Class)))
	{
		Out.AddUnique(Root);
	}

	// Attached actors
	TArray<AActor*> Attached;
	Root->GetAttachedActors(Attached);
	for (AActor* Child : Attached)
	{
		if (!IsValid(Child)) { continue; }
		if (!Class || Child->IsA(Class))
		{
			Out.AddUnique(Child);
		}
		GG_CollectChildrenRecursive(Child, Class, false, Out);
	}

	// ChildActorComponents
	TArray<UChildActorComponent*> ChildComps;
	Root->GetComponents(ChildComps);
	for (UChildActorComponent* CAC : ChildComps)
	{
		if (AActor* ChildActor = CAC->GetChildActor())
		{
			if (!Class || ChildActor->IsA(Class))
			{
				Out.AddUnique(ChildActor);
			}
			GG_CollectChildrenRecursive(ChildActor, Class, false, Out);
		}
	}
}

void UGGActorLibrary::GetAllChildActorsOfClassRecursive(AActor* Root, TSubclassOf<AActor> ActorClass, bool bIncludeSelf, TArray<AActor*>& OutActors)
{
	OutActors.Reset();
	if (!Root) { return; }
	GG_CollectChildrenRecursive(Root, ActorClass, bIncludeSelf, OutActors);
}

bool UGGActorLibrary::IsActorOnNavMesh(UObject* WorldContextObject, AActor* Actor)
{
	if (!Actor) { return false; }
	return IsLocationOnNavMesh(WorldContextObject, Actor->GetActorLocation());
}

bool UGGActorLibrary::IsLocationOnNavMesh(UObject* WorldContextObject, const FVector& Location)
{
	UWorld* World = GEngine ? GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull) : nullptr;
	if (!World) { return false; }
	UNavigationSystemV1* Nav = FNavigationSystem::GetCurrent<UNavigationSystemV1>(World);
	if (!Nav) { return false; }

	FNavLocation Projected;
	return Nav->ProjectPointToNavigation(Location, Projected);
}

void UGGActorLibrary::GetAllActorsInViewFrustum(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors)
{
	OutActors.Reset();

	UWorld* World = GEngine ? GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull) : nullptr;
	if (!World || !*ActorClass) { return; }

	APlayerController* PC = UGameplayStatics::GetPlayerController(World, 0);
	if (!PC) { return; }

	int32 SizeX = 0, SizeY = 0;
	PC->GetViewportSize(SizeX, SizeY);
	if (SizeX <= 0 || SizeY <= 0) { return; }

	auto IsPointOnScreen = [&](const FVector& P)->bool
	{
		FVector2D Screen;
		bool bOnScreen = UGameplayStatics::ProjectWorldToScreen(PC, P, Screen, false);
		return bOnScreen && Screen.X >= 0 && Screen.Y >= 0 && Screen.X <= SizeX && Screen.Y <= SizeY;
	};

	for (TActorIterator<AActor> It(World, ActorClass); It; ++It)
	{
		AActor* A = *It;
		if (!IsValid(A)) { continue; }

		FVector Origin, Extent;
		A->GetActorBounds(true, Origin, Extent);

		// 8 corners of AABB
		const FVector E = Extent;
		const FVector Corners[8] =
		{
			Origin + FVector(+E.X, +E.Y, +E.Z),
			Origin + FVector(+E.X, +E.Y, -E.Z),
			Origin + FVector(+E.X, -E.Y, +E.Z),
			Origin + FVector(+E.X, -E.Y, -E.Z),
			Origin + FVector(-E.X, +E.Y, +E.Z),
			Origin + FVector(-E.X, +E.Y, -E.Z),
			Origin + FVector(-E.X, -E.Y, +E.Z),
			Origin + FVector(-E.X, -E.Y, -E.Z),
		};

		bool bAnyVisible = false;
		for (const FVector& C : Corners)
		{
			if (IsPointOnScreen(C))
			{
				bAnyVisible = true;
				break;
			}
		}
		if (bAnyVisible)
		{
			OutActors.Add(A);
		}
	}
}

void UGGActorLibrary::GetActorBoundsCornerPoints(AActor* Actor, TArray<FVector>& OutCorners)
{
	OutCorners.Reset();
	if (!Actor) { return; }

	FVector Origin, Extent;
	Actor->GetActorBounds(true, Origin, Extent);

	const FVector E = Extent;
	const FVector Corners[8] =
	{
		Origin + FVector(+E.X, +E.Y, +E.Z),
		Origin + FVector(+E.X, +E.Y, -E.Z),
		Origin + FVector(+E.X, -E.Y, +E.Z),
		Origin + FVector(+E.X, -E.Y, -E.Z),
		Origin + FVector(-E.X, +E.Y, +E.Z),
		Origin + FVector(-E.X, +E.Y, -E.Z),
		Origin + FVector(-E.X, -E.Y, +E.Z),
		Origin + FVector(-E.X, -E.Y, -E.Z),
	};
	OutCorners.Append(Corners, UE_ARRAY_COUNT(Corners));
}

UMaterialInstanceDynamic* UGGActorLibrary::CreateDynamicMaterialInstanceSafe(UMeshComponent* Mesh, int32 MaterialIndex)
{
	if (!Mesh || MaterialIndex < 0) { return nullptr; }

	UMaterialInterface* MI = Mesh->GetMaterial(MaterialIndex);
	if (!MI) { return nullptr; }

	if (UMaterialInstanceDynamic* ExistingMID = Cast<UMaterialInstanceDynamic>(MI))
	{
		return ExistingMID;
	}

	UMaterialInstanceDynamic* MID = UMaterialInstanceDynamic::Create(MI, Mesh);
	if (MID)
	{
		Mesh->SetMaterial(MaterialIndex, MID);
	}
	return MID;
}

void UGGActorLibrary::FireImpulseInDirection(AActor* Actor, const FVector& Direction, float Strength, bool bScaleByMass)
{
	if (!Actor) { return; }
	FVector Dir = Direction.GetSafeNormal();
	if (Dir.IsNearlyZero()) { return; }

	TArray<UPrimitiveComponent*> Comps;
	Actor->GetComponents<UPrimitiveComponent>(Comps);
	for (UPrimitiveComponent* P : Comps)
	{
		if (!IsValid(P) || !P->IsSimulatingPhysics()) { continue; }
		float Scale = bScaleByMass ? P->GetMass() : 1.f;
		P->AddImpulse(Dir * Strength * Scale);
	}
}

void UGGActorLibrary::ApplyRadialDamageWithCurve(UObject* WorldContextObject, const FVector& Origin, float Radius, float MaxDamage, UCurveFloat* Curve,
	TSubclassOf<UDamageType> DamageTypeClass, AController* Instigator, AActor* DamageCauser,
	const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutAffected)
{
	OutAffected.Reset();

	if (Radius <= 0.f || MaxDamage <= 0.f || !Curve) { return; }

	UWorld* World = GEngine ? GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull) : nullptr;
	if (!World) { return; }

	TArray<AActor*> Overlaps;
	// Overlap all pawns + physics bodies
	TArray<TEnumAsByte<EObjectTypeQuery>> ObjTypes;
	ObjTypes.Add(UEngineTypes::ConvertToObjectType(ECC_Pawn));
	ObjTypes.Add(UEngineTypes::ConvertToObjectType(ECC_PhysicsBody));

	TArray<AActor*> Ignores = ActorsToIgnore;
	UKismetSystemLibrary::SphereOverlapActors(WorldContextObject, Origin, Radius, ObjTypes, AActor::StaticClass(), Ignores, Overlaps);

	for (AActor* A : Overlaps)
	{
		if (!IsValid(A) || Ignores.Contains(A)) { continue; }
		const float Dist = FVector::Distance(Origin, A->GetActorLocation());
		const float Alpha = FMath::Clamp(Dist / FMath::Max(Radius, 1.f), 0.f, 1.f);
		const float Scale = Curve->GetFloatValue(Alpha);
		const float Dmg = FMath::Max(0.f, MaxDamage * Scale);

		if (Dmg > 0.f)
		{
			UGameplayStatics::ApplyDamage(A, Dmg, Instigator, DamageCauser, DamageTypeClass ? *DamageTypeClass : nullptr);
			OutAffected.Add(A);
		}
	}
}

void UGGActorLibrary::WeldAttachedPhysicsActors(UObject* WorldContextObject, AActor* Parent, float DelaySeconds)
{
	if (!Parent) { return; }

	UWorld* World = GEngine ? GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull) : nullptr;
	if (!World) { return; }

	FTimerHandle Handle;
	TWeakObjectPtr<AActor> ParentWeak = Parent;

	World->GetTimerManager().SetTimer(Handle, [ParentWeak]()
	{
		if (!ParentWeak.IsValid()) { return; }

		AActor* P = ParentWeak.Get();
		USceneComponent* ParentRoot = P->GetRootComponent();

		TArray<AActor*> Children;
		P->GetAttachedActors(Children);

		for (AActor* Child : Children)
		{
			if (!IsValid(Child)) { continue; }

			TArray<UPrimitiveComponent*> Prims;
			Child->GetComponents<UPrimitiveComponent>(Prims);
			for (UPrimitiveComponent* PC : Prims)
			{
				if (!IsValid(PC)) { continue; }
				PC->SetSimulatePhysics(false);
				if (ParentRoot)
				{
					PC->AttachToComponent(ParentRoot, FAttachmentTransformRules::KeepWorldTransform);
				}
				PC->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			}
		}
	}, FMath::Max(0.f, DelaySeconds), false);
}

void UGGActorLibrary::BatchSetActorProperties(const TArray<AActor*>& Actors,
	bool bSetVisibility, bool bNewVisibility,
	bool bSetHiddenInGame, bool bNewHiddenInGame,
	bool bSetCollisionEnabled, ECollisionEnabled::Type NewCollisionEnabled)
{
	for (AActor* A : Actors)
	{
		if (!IsValid(A)) { continue; }

		TArray<UActorComponent*> Comps = A->GetComponents().Array();
		for (UActorComponent* C : Comps)
		{
			if (UPrimitiveComponent* P = Cast<UPrimitiveComponent>(C))
			{
				if (bSetVisibility)       { P->SetVisibility(bNewVisibility, true); }
				if (bSetHiddenInGame)     { P->SetHiddenInGame(bNewHiddenInGame); }
				if (bSetCollisionEnabled) { P->SetCollisionEnabled(NewCollisionEnabled); }
			}
		}
	}
}

static void GG_SetTimeDilationRecursive(AActor* Root, float Dilation)
{
	if (!IsValid(Root)) { return; }
	Root->CustomTimeDilation = Dilation;

	TArray<AActor*> Children;
	Root->GetAttachedActors(Children);
	for (AActor* Child : Children)
	{
		GG_SetTimeDilationRecursive(Child, Dilation);
	}
}

void UGGActorLibrary::SetCustomTimeDilationRecursive(AActor* Root, float NewCustomTimeDilation)
{
	if (!Root) { return; }
	GG_SetTimeDilationRecursive(Root, FMath::Max(0.f, NewCustomTimeDilation));
}

AActor* UGGActorLibrary::SpawnActorFromPool(UObject* WorldContextObject, TSubclassOf<AActor> Class, const FTransform& Transform,
	ESpawnActorCollisionHandlingMethod CollisionHandling, AActor* Owner)
{
	if (!*Class) { return nullptr; }
	if (!WorldContextObject) { return nullptr; }

	UGameInstance* GI = UGameplayStatics::GetGameInstance(WorldContextObject);
	if (!GI) { return nullptr; }

	UGGObjectPoolSubsystem* Pool = GI->GetSubsystem<UGGObjectPoolSubsystem>();
	if (!Pool) { return nullptr; }

	return Pool->Acquire(WorldContextObject, Class, Transform, CollisionHandling, Owner);
}
