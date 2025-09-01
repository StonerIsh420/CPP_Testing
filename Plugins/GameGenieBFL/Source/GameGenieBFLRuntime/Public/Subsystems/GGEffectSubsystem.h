// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Subsystems/GGEffectSubsystem.h
#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Data/GGEffectAsset.h"
#include "Interfaces/GGEffectReceiver.h"
#include "GGEffectSubsystem.generated.h"

// Forward declare to avoid pulling TimerManager into the header.
struct FTimerHandle;

/**
 * Lightweight effect manager for non-GAS workflows.
 * Stores weak refs and expires effects via timers.
 */
UCLASS()
class GAMEGENIEBFLRUNTIME_API UGGEffectSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	/** Applies Effect to Target; returns a handle. If duration <= 0, apply+remove immediately. */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Data & Gameplay|Effects")
	FGuid ApplyGameplayEffect(UObject* Target, UGGEffectAsset* Effect);

	/** Removes an active effect by handle (fires OnEffectRemoved). */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Data & Gameplay|Effects")
	bool RemoveGameplayEffect(const FGuid& Handle);

private:
	// Internal record (not reflected).
	struct FActive
	{
		TWeakObjectPtr<UObject> Target;
		TWeakObjectPtr<UGGEffectAsset> Effect;
		FTimerHandle* TimerPtr = nullptr; // allocated in cpp to keep header lean
	};

	// Not a UPROPERTY: FActive is not a USTRUCT; we only keep weak refs.
	TMap<FGuid, FActive> Active_;

	void RemoveInternal(const FGuid& Handle, bool bBroadcast);
};
