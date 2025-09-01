// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Private/GGBlueprintLibrary.cpp
#include "GGBlueprintLibrary.h"
#include "Core/GGLog.h"

FVector UGameGenieBFLLibrary::SnapVectorToGrid(const FVector& Location, float GridSize)
{
	if (FMath::IsNearlyZero(GridSize))
	{
#if !UE_BUILD_SHIPPING
		if (GIsEditor)
		{
			if (UWorld* World = GEngine ? GEngine->GetCurrentPlayWorld() : nullptr)
			{
				GGDebug::Screen(World, TEXT("SnapVectorToGrid: GridSize is nearly zero; returning original vector."), 2.0f, FColor::Yellow);
			}
		}
#endif
		return Location;
	}

	return FVector(
		FMath::GridSnap(Location.X, GridSize),
		FMath::GridSnap(Location.Y, GridSize),
		FMath::GridSnap(Location.Z, GridSize));
}

void UGameGenieBFLLibrary::BranchOnInteger(const int32 A, const int32 B, EIntegerComparison& Branches)
{
	if (A > B)
	{
		Branches = EIntegerComparison::GreaterThan;
	}
	else if (A < B)
	{
		Branches = EIntegerComparison::LessThan;
	}
	else
	{
		Branches = EIntegerComparison::EqualTo;
	}
}
