// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Private/Subsystems/GGObjectPoolSubsystem.cpp
#include "Subsystems/GGObjectPoolSubsystem.h"
#include "Interfaces/GGPoolable.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"

static void GG_ActivatePooledActor(AActor* A, const FTransform& T, AActor* Owner)
{
	A->SetActorTransform(T, false, nullptr, ETeleportType::TeleportPhysics);
	A->SetOwner(Owner);
	A->SetActorHiddenInGame(false);
	A->SetActorEnableCollision(true);
	A->SetActorTickEnabled(true);

	TArray<UActorComponent*> Comps = A->GetComponents().Array();
	for (UActorComponent* C : Comps)
	{
		if (UPrimitiveComponent* P = Cast<UPrimitiveComponent>(C))
		{
			P->SetCollisionEnabled(ECollisionEnabled::QueryAndPhysics);
			// Leave simulate state as-is; game can re-enable if needed post-activation.
		}
	}

	if (A->GetClass()->ImplementsInterface(UGGPoolable::StaticClass()))
	{
		IGGPoolable::Execute_OnPooledActivated(A);
	}
}

static void GG_DeactivatePooledActor(AActor* A)
{
	A->SetActorHiddenInGame(true);
	A->SetActorEnableCollision(false);
	A->SetActorTickEnabled(false);

	TArray<UActorComponent*> Comps = A->GetComponents().Array();
	for (UActorComponent* C : Comps)
	{
		if (UPrimitiveComponent* P = Cast<UPrimitiveComponent>(C))
		{
			P->SetCollisionEnabled(ECollisionEnabled::NoCollision);
			P->SetSimulatePhysics(false);
		}
	}

	if (A->GetClass()->ImplementsInterface(UGGPoolable::StaticClass()))
	{
		IGGPoolable::Execute_OnPooledDeactivated(A);
	}
}

AActor* UGGObjectPoolSubsystem::Acquire(UObject* WorldContextObject, TSubclassOf<AActor> Class, const FTransform& Transform,
	ESpawnActorCollisionHandlingMethod CollisionHandling, AActor* Owner)
{
	if (!*Class) { return nullptr; }
	UWorld* World = GEngine ? GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull) : nullptr;
	if (!World) { return nullptr; }

	// Try reuse
	if (TArray<TWeakObjectPtr<AActor>>* List = Inactive_.Find(Class))
	{
		for (int32 i = List->Num() - 1; i >= 0; --i)
		{
			if (AActor* Reuse = (*List)[i].Get())
			{
				List->RemoveAtSwap(i);
				GG_ActivatePooledActor(Reuse, Transform, Owner);
				return Reuse;
			}
			List->RemoveAtSwap(i);
		}
	}

	// Spawn new
	FActorSpawnParameters Params;
	Params.SpawnCollisionHandlingOverride = CollisionHandling;
	Params.Owner = Owner;

	AActor* Spawned = World->SpawnActor<AActor>(*Class, Transform, Params);
	if (Spawned)
	{
		GG_ActivatePooledActor(Spawned, Transform, Owner);
	}
	return Spawned;
}

void UGGObjectPoolSubsystem::Release(AActor* Actor)
{
	if (!IsValid(Actor)) { return; }
	TSubclassOf<AActor> Cls = Actor->GetClass();

	GG_DeactivatePooledActor(Actor);

	TArray<TWeakObjectPtr<AActor>>& List = Inactive_.FindOrAdd(Cls);
	List.Add(Actor);
}
