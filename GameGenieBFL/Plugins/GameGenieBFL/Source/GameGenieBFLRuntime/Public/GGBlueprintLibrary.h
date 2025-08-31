// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/GGBlueprintLibrary.h
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GGBlueprintLibrary.generated.h"

/** Comparison result for Branch on Integer */
UENUM(BlueprintType)
enum class EIntegerComparison : uint8
{
	GreaterThan UMETA(DisplayName="Greater Than"),
	LessThan    UMETA(DisplayName="Less Than"),
	EqualTo     UMETA(DisplayName="Equal To")
};

/**
 * Core Blueprint utility library (Phase 0 + Flow Control additions)
 */
UCLASS()
class GAMEGENIEBFLRUNTIME_API UGameGenieBFLLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/**
	 * Snaps a 3D location vector to the nearest point on a defined grid size.
	 * @param Location The original location vector to snap.
	 * @param GridSize The size of the grid to snap to. Affects all axes.
	 * @return The new, snapped location vector.
	 */
	UFUNCTION(BlueprintPure, Category="Game Genie BFL|Math & Transforms", meta=(DisplayName="Snap Vector to Grid", Keywords="snap grid vector round"))
	static FVector SnapVectorToGrid(const FVector& Location, float GridSize = 100.0f);

	/**
	 * Compares two integers and branches execution based on the result.
	 * \nA > B → GreaterThan; A < B → LessThan; A == B → EqualTo.
	 */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Flow Control",
		meta=(DisplayName="Branch on Integer",
			  Keywords="compare int integer branch greater less equal",
			  ExpandEnumAsExecs="Branches",
			  ToolTip="Compares two integers and routes execution:\nA > B → Greater Than\nA < B → Less Than\nA == B → Equal To"))
	static void BranchOnInteger(int32 A, int32 B, EIntegerComparison& Branches);
};
