// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Subsystems/GGCooldownSubsystem.h
#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GGCooldownSubsystem.generated.h"

UCLASS()
class GAMEGENIEBFLRUNTIME_API UGGCooldownSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	/** Returns true and starts cooldown if ready; otherwise returns false and Remaining holds seconds left. */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Data & Gameplay|Cooldowns")
	bool CheckAndStartCooldown(FName Id, float Duration, float& Remaining);

	/** Remaining time; 0 if ready or unknown. */
	UFUNCTION(BlueprintPure, Category="Game Genie BFL|Data & Gameplay|Cooldowns")
	float GetCooldownRemaining(FName Id) const;

	/** Start/override cooldown explicitly. */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Data & Gameplay|Cooldowns")
	void StartCooldown(FName Id, float Duration);

	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Data & Gameplay|Cooldowns")
	void ClearCooldown(FName Id);

	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Data & Gameplay|Cooldowns")
	void ClearAll();

private:
	/** End-time in world seconds. */
	UPROPERTY()
	TMap<FName, double> EndTimes_;
};
