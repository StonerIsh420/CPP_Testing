// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Private/Async/GGAsync_FadeMaterial.cpp
#include "Async/GGAsync_FadeMaterial.h"
#include "Components/MeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/World.h"
#include "TimerManager.h"

UGGAsync_FadeMaterial* UGGAsync_FadeMaterial::FadeActorMaterialScalar(UObject* WorldContextObject, AActor* Actor,
	FName ScalarParameter, float From, float To, float Duration, TEnumAsByte<EEasingFunc::Type> Easing, float BlendExp)
{
	UGGAsync_FadeMaterial* Node = NewObject<UGGAsync_FadeMaterial>();
	Node->World_    = GEngine ? GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull) : nullptr;
	Node->Actor_    = Actor;
	Node->Param_    = ScalarParameter;
	Node->From_     = From;
	Node->To_       = To;
	Node->Duration_ = FMath::Max(Duration, 0.f);
	Node->Easing_   = Easing;
	Node->BlendExp_ = FMath::Max(BlendExp, 0.f);
	Node->RegisterWithGameInstance(WorldContextObject);
	return Node;
}

void UGGAsync_FadeMaterial::Activate()
{
	if (!World_.IsValid() || !Actor_.IsValid())
	{
		Finish(true);
		return;
	}

	GatherMIDs();
	SetAll(From_);

	if (Duration_ <= 0.f)
	{
		SetAll(To_);
		Finish(false);
		return;
	}

	Elapsed_ = 0.f;
	TickHandle_ = World_->GetTimerManager().SetTimerForNextTick(this, &UGGAsync_FadeMaterial::Tick); // <-- store handle
}
void UGGAsync_FadeMaterial::GatherMIDs()
{
	MIDs_.Reset();

	if (!Actor_.IsValid()) { return; }

	TArray<UMeshComponent*> Meshes;
	Actor_->GetComponents<UMeshComponent>(Meshes);

	for (UMeshComponent* Mesh : Meshes)
	{
		if (!IsValid(Mesh)) { continue; }
		const int32 Num = Mesh->GetNumMaterials();
		for (int32 i = 0; i < Num; ++i)
		{
			UMaterialInterface* MI = Mesh->GetMaterial(i);
			if (!MI) { continue; }

			UMaterialInstanceDynamic* MID = Cast<UMaterialInstanceDynamic>(MI);
			if (!MID)
			{
				MID = UMaterialInstanceDynamic::Create(MI, Mesh);
				if (MID)
				{
					Mesh->SetMaterial(i, MID);
				}
			}
			if (MID)
			{
				MIDs_.Add(MID);
			}
		}
	}
}

void UGGAsync_FadeMaterial::SetAll(float Value)
{
	for (const TWeakObjectPtr<UMaterialInstanceDynamic>& MIDWeak : MIDs_)
	{
		if (UMaterialInstanceDynamic* MID = MIDWeak.Get())
		{
			MID->SetScalarParameterValue(Param_, Value);
		}
	}
}

void UGGAsync_FadeMaterial::Tick()
{
	if (!World_.IsValid() || !Actor_.IsValid() || bCancelled_)
	{
		Finish(true);
		return;
	}

	Elapsed_ += World_->GetDeltaSeconds();
	const float Alpha = FMath::Clamp(Elapsed_ / FMath::Max(Duration_, KINDA_SMALL_NUMBER), 0.f, 1.f);
	const float Eased = UKismetMathLibrary::Ease(From_, To_, Alpha, (EEasingFunc::Type)Easing_, BlendExp_, 0);

	SetAll(Eased);

	if (Alpha >= 1.f)
	{
		Finish(false);
		return;
	}

	World_->GetTimerManager().SetTimerForNextTick(this, &UGGAsync_FadeMaterial::Tick);
}

void UGGAsync_FadeMaterial::Cancel()
{
	bCancelled_ = true;
}

void UGGAsync_FadeMaterial::Finish(bool bWasCancelled)
{
	if (World_.IsValid())
	{
		World_->GetTimerManager().ClearTimer(TickHandle_);
	}
	if (bWasCancelled) { Cancelled.Broadcast(); }
	else               { Completed.Broadcast(); }

	SetReadyToDestroy();
	MarkAsGarbage();
}
