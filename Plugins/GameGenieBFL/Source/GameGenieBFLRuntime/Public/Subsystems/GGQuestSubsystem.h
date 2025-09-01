// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Subsystems/GGQuestSubsystem.h
#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Data/GGQuestTypes.h"
#include "GGQuestSubsystem.generated.h"

UCLASS()
class GAMEGENIEBFLRUNTIME_API UGGQuestSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	/** Completes CurrentStep and activates Next from the table. Returns true if advanced. */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Data & Gameplay|Quests")
	bool AdvanceQuestline(const UDataTable* QuestTable, FName CurrentStep, FName& OutNextStep);

	/** Returns current/goal for ObjectiveId (0/0 if unknown). */
	UFUNCTION(BlueprintPure, Category="Game Genie BFL|Data & Gameplay|Quests")
	void GetQuestObjectiveProgress(FName ObjectiveId, int32& OutCurrent, int32& OutGoal) const;

	/** Helper to set objective progress (for games to drive). */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Data & Gameplay|Quests")
	void SetQuestObjectiveProgress(FName ObjectiveId, int32 Current, int32 Goal);

private:
	UPROPERTY()
	TMap<FName, FIntPoint> ObjectiveProgress_; // X=current, Y=goal
};
