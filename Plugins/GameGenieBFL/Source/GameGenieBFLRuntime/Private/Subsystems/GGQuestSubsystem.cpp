// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Private/Subsystems/GGQuestSubsystem.cpp
#include "Subsystems/GGQuestSubsystem.h"
#include "Engine/DataTable.h"

bool UGGQuestSubsystem::AdvanceQuestline(const UDataTable* QuestTable, FName CurrentStep, FName& OutNextStep)
{
	OutNextStep = NAME_None;
	if (!QuestTable || CurrentStep.IsNone()) { return false; }

	if (const FGGQuestRow* Row = QuestTable->FindRow<FGGQuestRow>(CurrentStep, TEXT("GG:AdvanceQuest")))
	{
		OutNextStep = Row->NextStep;
		return !OutNextStep.IsNone();
	}
	return false;
}

void UGGQuestSubsystem::GetQuestObjectiveProgress(FName ObjectiveId, int32& OutCurrent, int32& OutGoal) const
{
	if (const FIntPoint* P = ObjectiveProgress_.Find(ObjectiveId))
	{
		OutCurrent = P->X; OutGoal = P->Y; return;
	}
	OutCurrent = 0; OutGoal = 0;
}

void UGGQuestSubsystem::SetQuestObjectiveProgress(FName ObjectiveId, int32 Current, int32 Goal)
{
	ObjectiveProgress_.Add(ObjectiveId, FIntPoint(Current, Goal));
}
