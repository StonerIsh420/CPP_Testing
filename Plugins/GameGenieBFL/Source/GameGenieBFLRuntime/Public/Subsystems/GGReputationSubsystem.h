// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Subsystems/GGReputationSubsystem.h
#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GGReputationSubsystem.generated.h"

UCLASS()
class GAMEGENIEBFLRUNTIME_API UGGReputationSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Data & Gameplay|Reputation")
	float AddReputation(FName Faction, float Delta);

	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Data & Gameplay|Reputation")
	void SetReputation(FName Faction, float Value);

	UFUNCTION(BlueprintPure, Category="Game Genie BFL|Data & Gameplay|Reputation")
	float GetReputation(FName Faction) const;

private:
	UPROPERTY()
	TMap<FName, float> Rep_;
};
