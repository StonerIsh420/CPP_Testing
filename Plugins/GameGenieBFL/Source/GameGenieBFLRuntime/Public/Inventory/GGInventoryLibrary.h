// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Inventory/GGInventoryLibrary.h
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/DataTable.h"
#include "Data/GGItemTypes.h"
#include "GGInventoryLibrary.generated.h"

UCLASS()
class GAMEGENIEBFLRUNTIME_API UGGInventoryLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/** Safe DataTable lookup. Returns true on success. */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Data",
		meta=(DisplayName="Get Item Definition", ExpandBoolAsExecs="ReturnValue"))
	static bool GetItemDefinition(const UDataTable* ItemDefTable, FName Row, FGGItemDefinitionRow& OutDef);

	/** Tries to add quantity of an item to inventory; returns feedback (AddedNew/Stacked/CompletedStack/Failed). */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Inventory & Items",
		meta=(DisplayName="Add Item With Feedback"))
	static void AddItemWithFeedback(const UDataTable* ItemDefTable,
		UPARAM(ref) TArray<FGGItemInstance>& Inventory,
		FName DefRow, int32 Quantity,
		EGGAddItemResult& Result,
		FGGItemKey& OutItemKey);

	/** Transfers quantity of a specific slot (by Key) to another inventory. */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Inventory & Items",
		meta=(DisplayName="Transfer Item Between Inventories"))
	static bool TransferItemBetweenInventories(const UDataTable* ItemDefTable,
		UPARAM(ref) TArray<FGGItemInstance>& From, UPARAM(ref) TArray<FGGItemInstance>& To,
		FGGItemKey Key, int32 Quantity,
		EGGAddItemResult& OutAddResult, FGGItemKey& OutNewKey);

	/** Generates loot from weighted entries; Luck scales weights (>1 favors higher weights). */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Inventory & Items",
		meta=(DisplayName="Generate Loot"))
	static void GenerateLoot(const UDataTable* ItemDefTable,
		const TArray<FGGWeightedLootEntry>& LootTable,
		int32 Rolls, float Luck,
		TArray<FGGItemInstance>& OutLoot);

	/** Checks a recipe row against an inventory. Returns true if craftable; OutMissing shows deficits. */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Inventory & Items",
		meta=(DisplayName="Is Recipe Craftable"))
	static bool IsRecipeCraftable(const UDataTable* ItemDefTable, const UDataTable* RecipeTable, FName RecipeRow,
		const TArray<FGGItemInstance>& Inventory,
		TArray<FName>& OutMissingRows, TArray<int32>& OutMissingCounts);

	/** Crafts a recipe: consumes ingredients; adds outputs; returns success. */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Inventory & Items",
		meta=(DisplayName="Craft Item"))
	static bool CraftItem(const UDataTable* ItemDefTable, const UDataTable* RecipeTable, FName RecipeRow,
		UPARAM(ref) TArray<FGGItemInstance>& Inventory);

	/** Disassembles an item stack by Key (1 unit) into components, adding them to inventory. */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Inventory & Items",
		meta=(DisplayName="Disassemble Item"))
	static bool DisassembleItem(const UDataTable* ItemDefTable, const UDataTable* DisassemblyTable,
		UPARAM(ref) TArray<FGGItemInstance>& Inventory, FGGItemKey Key, TArray<FGGItemInstance>& OutComponents);

	/** Finds an item by Key and modifies fields. Pass negatives/empty to keep unchanged. */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Inventory & Items",
		meta=(DisplayName="Find And Modify Item"))
	static bool FindAndModifyItem(UPARAM(ref) TArray<FGGItemInstance>& Inventory, FGGItemKey Key,
		int32 NewQuantity /*-1 to keep*/, float DeltaDurability, const FGameplayTagContainer& TagsToAdd, const FGameplayTagContainer& TagsToRemove);

	/** Sums total value using overrides or base values from the table. */
	UFUNCTION(BlueprintPure, Category="Game Genie BFL|Inventory & Items",
		meta=(DisplayName="Get Total Inventory Value"))
	static int32 GetTotalInventoryValue(const UDataTable* ItemDefTable, const TArray<FGGItemInstance>& Inventory);

	/** Removes quantity from a stack and spawns the item's DropClass in front of Owner. */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Game Genie BFL|Inventory & Items",
		meta=(WorldContext="WorldContextObject", DisplayName="Drop Item In World"))
	static AActor* DropItemInWorld(UObject* WorldContextObject, AActor* Owner, const UDataTable* ItemDefTable,
		UPARAM(ref) TArray<FGGItemInstance>& Inventory, FGGItemKey Key, int32 Quantity = 1, float Distance = 150.f);

	/** Stable sort of the inventory by key; ascending optional. */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Inventory & Items",
		meta=(DisplayName="Sort Inventory"))
	static void SortInventory(const UDataTable* ItemDefTable, UPARAM(ref) TArray<FGGItemInstance>& Inventory, EGGSortKey Key, bool bAscending);

	/** Compares two items by PrimaryStat (fallback: BaseValue; then Rarity). */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Inventory & Items",
		meta=(DisplayName="Compare Item Stats"))
	static void CompareItemStats(const UDataTable* ItemDefTable, const FGGItemInstance& A, const FGGItemInstance& B, EGGItemCompareResult& OutResult);

	/** Picks a random item instance that has Tag (searches InstanceTags and Def.Tags). Returns Key (invalid if none). */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Inventory & Items",
		meta=(DisplayName="Get Random Item With Tag"))
	static FGGItemKey GetRandomItemWithTag(const UDataTable* ItemDefTable, const TArray<FGGItemInstance>& Inventory, FGameplayTag Tag);

	/** Scans inventory for best item of Type and asks EquipTarget (IGGEquipable) to equip it. Returns true if called. */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Inventory & Items",
		meta=(DisplayName="Auto Equip Best Item"))
	static bool AutoEquipBestItem(UObject* EquipTarget, const UDataTable* ItemDefTable, const TArray<FGGItemInstance>& Inventory, EGGItemType Type);

	/** Adds a Key to the locked-slots list (no duplicates). */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Inventory & Items",
		meta=(DisplayName="Lock Inventory Slot"))
	static void LockInventorySlot(UPARAM(ref) TArray<FGGItemKey>& LockedSlots, FGGItemKey Key);

	/** Removes a Key from the locked-slots list. */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Inventory & Items",
		meta=(DisplayName="Unlock Inventory Slot"))
	static void UnlockInventorySlot(UPARAM(ref) TArray<FGGItemKey>& LockedSlots, FGGItemKey Key);

	/** True if Key is present in LockedSlots. */
	UFUNCTION(BlueprintPure, Category="Game Genie BFL|Inventory & Items",
		meta=(DisplayName="Is Inventory Slot Locked"))
	static bool IsInventorySlotLocked(const TArray<FGGItemKey>& LockedSlots, FGGItemKey Key);

private:
	static bool GetItemDef(const UDataTable* Table, FName Row, FGGItemDefinitionRow& OutDef);
	static int32 GetInstanceValue(const UDataTable* Table, const FGGItemInstance& I);
	static int32 GetMaxStack(const UDataTable* Table, FName Row);
	static void AddStack(TArray<FGGItemInstance>& Inventory, const FGGItemDefinitionRow& Def, FName Row, int32 Quantity, EGGAddItemResult& Result, FGGItemKey& OutKey);
	static int32 CountInventoryRow(const TArray<FGGItemInstance>& Inventory, FName Row);
	static void ConsumeInventoryRow(TArray<FGGItemInstance>& Inventory, FName Row, int32 Quantity);
	static bool HasTag(const FGameplayTagContainer& C, FGameplayTag T) { return T.IsValid() && C.HasTag(T); }
};
