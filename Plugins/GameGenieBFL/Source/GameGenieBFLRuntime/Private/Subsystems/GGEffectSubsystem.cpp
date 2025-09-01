// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Private/Subsystems/GGEffectSubsystem.cpp
#include "Subsystems/GGEffectSubsystem.h"
#include "Engine/World.h"
#include "TimerManager.h"

FGuid UGGEffectSubsystem::ApplyGameplayEffect(UObject* Target, UGGEffectAsset* Effect)
{
	FGuid Handle;
	if (!IsValid(Target) || !IsValid(Effect)) { return Handle; }

	Handle = FGuid::NewGuid();
	FActive& A = Active_.Add(Handle);
	A.Target = Target;
	A.Effect = Effect;
	A.TimerPtr = new FTimerHandle(); // freed on removal

	// Notify apply if receiver
	if (Target->GetClass()->ImplementsInterface(UGGEffectReceiver::StaticClass()))
	{
		IGGEffectReceiver::Execute_OnEffectApplied(Target, Effect, Handle);
	}

	// Immediate removal if non-positive duration
	if (Effect->Duration <= 0.f)
	{
		RemoveInternal(Handle, /*bBroadcast*/true);
		return Handle;
	}

	// Schedule expiry
	if (UWorld* W = GetWorld())
	{
		W->GetTimerManager().SetTimer(*A.TimerPtr, [this, Handle]()
		{
			RemoveInternal(Handle, /*bBroadcast*/true);
		}, Effect->Duration, false);
	}
	return Handle;
}

bool UGGEffectSubsystem::RemoveGameplayEffect(const FGuid& Handle)
{
	if (!Active_.Contains(Handle)) { return false; }
	RemoveInternal(Handle, /*bBroadcast*/true);
	return true;
}

void UGGEffectSubsystem::RemoveInternal(const FGuid& Handle, bool bBroadcast)
{
	if (FActive* Found = Active_.Find(Handle))
	{
		if (UWorld* W = GetWorld())
		{
			if (Found->TimerPtr)
			{
				W->GetTimerManager().ClearTimer(*Found->TimerPtr);
			}
		}
		if (bBroadcast && Found->Target.IsValid() && Found->Effect.IsValid())
		{
			UObject* T = Found->Target.Get();
			if (T->GetClass()->ImplementsInterface(UGGEffectReceiver::StaticClass()))
			{
				IGGEffectReceiver::Execute_OnEffectRemoved(T, Found->Effect.Get(), Handle);
			}
		}
		// cleanup
		if (Found->TimerPtr)
		{
			delete Found->TimerPtr;
			Found->TimerPtr = nullptr;
		}
		Active_.Remove(Handle);
	}
}
