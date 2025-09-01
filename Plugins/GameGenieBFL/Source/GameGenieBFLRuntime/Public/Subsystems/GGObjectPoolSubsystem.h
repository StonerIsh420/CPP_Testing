// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Subsystems/GGObjectPoolSubsystem.h
#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Engine/EngineTypes.h"
#include "GGObjectPoolSubsystem.generated.h"

UCLASS()
class GAMEGENIEBFLRUNTIME_API UGGObjectPoolSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	/** Acquire an actor of Class at Transform, activating if reused or spawning if pool empty. */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Game Genie BFL|Pooling",
		meta=(WorldContext="WorldContextObject", DisplayName="Acquire/Spawn Pooled Actor"))
	AActor* Acquire(UObject* WorldContextObject, TSubclassOf<AActor> Class, const FTransform& Transform,
		ESpawnActorCollisionHandlingMethod CollisionHandling = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn,
		AActor* Owner = nullptr);

	/** Release an actor back to its class pool (hides, disables collision/tick). */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Game Genie BFL|Pooling",
		meta=(DisplayName="Release Pooled Actor"))
	void Release(AActor* Actor);

private:
	// Per-class inactive lists
	TMap<TSubclassOf<AActor>, TArray<TWeakObjectPtr<AActor>>> Inactive_;
};
