// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Subsystems/GGStatsSubsystem.h
#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GGStatsSubsystem.generated.h"

UCLASS()
class GAMEGENIEBFLRUNTIME_API UGGStatsSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Data & Gameplay|Stats")
	int32 AddGameStat(FName StatId, int32 Delta);

	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Data & Gameplay|Stats")
	void SetGameStat(FName StatId, int32 Value);

	UFUNCTION(BlueprintPure, Category="Game Genie BFL|Data & Gameplay|Stats")
	int32 GetGameStat(FName StatId) const;

private:
	UPROPERTY()
	TMap<FName, int32> Stats_;
};
