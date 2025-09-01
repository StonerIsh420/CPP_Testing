// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Data/GGDataLibrary.h
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "GGDataLibrary.generated.h"

USTRUCT(BlueprintType)
struct FGGSaveSlotInfo
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly, Category="Save")
	FString SlotName;

	UPROPERTY(BlueprintReadOnly, Category="Save")
	int64 FileSize = 0;

	/** ISO timestamp string (UTC). */
	UPROPERTY(BlueprintReadOnly, Category="Save")
	FString Timestamp;
};

UCLASS()
class GAMEGENIEBFLRUNTIME_API UGGDataLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	/** Pulls a random row using WeightField (float/int). Luck scales weights (>1 favors higher). */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Data & Gameplay|Data Tables",
		meta=(DisplayName="Get Weighted Random Row from Data Table"))
	static bool GetWeightedRandomRowFromDataTable(const UDataTable* Table, FName WeightField, float Luck, FName& OutRowName);

	/** Lists existing save game slot files (.sav) under Saved/SaveGames. */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Data & Gameplay|Save/Load",
		meta=(DisplayName="Find Save Game Slots"))
	static void FindSaveGameSlots(TArray<FGGSaveSlotInfo>& OutSlots);

	/** Parse a JSON string into a struct (StructType must be a BP struct). */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Data & Gameplay|JSON",
		meta=(DisplayName="Parse JSON To Struct", AutoCreateRefTerm="JsonString"))
	static bool ParseJsonToStruct(const FString& JsonString, UScriptStruct* StructType, UPARAM(ref) uint8& OutStruct);
};
