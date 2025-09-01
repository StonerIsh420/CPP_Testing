// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Data/GGQuestTypes.h
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GGQuestTypes.generated.h"

/** Minimal quest row: current step points to next step row name. */
USTRUCT(BlueprintType)
struct FGGQuestRow : public FTableRowBase
{
	GENERATED_BODY()

	/** Display title/name for UI. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Quest")
	FText StepDisplayName;

	/** The next step's RowName, or None if this is terminal. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Quest")
	FName NextStep;

	/** Optional objective text for this step. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Quest")
	FText ObjectiveText;
};
