// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Private/Inventory/GGInventoryLibrary.cpp
#include "Inventory/GGInventoryLibrary.h"
#include "Interfaces/GGEquipable.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"
#include "Containers/Array.h"

bool UGGInventoryLibrary::GetItemDef(const UDataTable* Table, FName Row, FGGItemDefinitionRow& OutDef)
{
	if (!Table || Row == NAME_None)
	{
		return false;
	}
	const FGGItemDefinitionRow* Found = Table->FindRow<FGGItemDefinitionRow>(Row, TEXT("GG:GetItemDef"));
	if (!Found) { return false; }
	OutDef = *Found;
	return true;
}

bool UGGInventoryLibrary::GetItemDefinition(const UDataTable* ItemDefTable, FName Row, FGGItemDefinitionRow& OutDef)
{
	return GetItemDef(ItemDefTable, Row, OutDef);
}

int32 UGGInventoryLibrary::GetInstanceValue(const UDataTable* Table, const FGGItemInstance& I)
{
	if (I.ValueOverride >= 0)
	{
		return I.ValueOverride * FMath::Max(0, I.Quantity);
	}
	FGGItemDefinitionRow D;
	if (GetItemDef(Table, I.DefRow, D))
	{
		return D.BaseValue * FMath::Max(0, I.Quantity);
	}
	return 0;
}

int32 UGGInventoryLibrary::GetMaxStack(const UDataTable* Table, FName Row)
{
	FGGItemDefinitionRow D;
	return GetItemDef(Table, Row, D) ? FMath::Max(1, D.MaxStack) : 1;
}

void UGGInventoryLibrary::AddStack(TArray<FGGItemInstance>& Inventory, const FGGItemDefinitionRow& Def, FName Row, int32 Quantity, EGGAddItemResult& Result, FGGItemKey& OutKey)
{
	Result = EGGAddItemResult::Failed;
	OutKey = FGGItemKey();

	if (Quantity <= 0) { return; }

	// Try stacking into existing stacks that are identical (same def, no per-instance uniqueness).
	for (FGGItemInstance& It : Inventory)
	{
		if (It.DefRow == Row && It.InstanceTags.IsEmpty())
		{
			const int32 MaxStack = FMath::Max(1, Def.MaxStack);
			if (MaxStack <= 1) { break; }

			const int32 Space = MaxStack - It.Quantity;
			if (Space <= 0) { continue; }

			const int32 ToAdd = FMath::Min(Space, Quantity);
			It.Quantity += ToAdd;
			Quantity -= ToAdd;
			Result = (Quantity > 0) ? EGGAddItemResult::Stacked : EGGAddItemResult::CompletedStack;
			OutKey = It.Key;
			if (Quantity <= 0) { return; }
		}
	}

	// Add new stacks while quantity remains
	while (Quantity > 0)
	{
		const int32 MaxStack = FMath::Max(1, Def.MaxStack);
		const int32 ThisQty = FMath::Min(MaxStack, Quantity);

		FGGItemInstance NewI;
		NewI.Key = FGGItemKey::NewKey();
		NewI.DefRow = Row;
		NewI.Quantity = ThisQty;
		NewI.Durability = 1.f;

		Inventory.Add(NewI);
		OutKey = NewI.Key;
		Result = EGGAddItemResult::AddedNew;

		Quantity -= ThisQty;
	}
}

void UGGInventoryLibrary::AddItemWithFeedback(const UDataTable* ItemDefTable, TArray<FGGItemInstance>& Inventory, FName DefRow, int32 Quantity, EGGAddItemResult& Result, FGGItemKey& OutItemKey)
{
	Result = EGGAddItemResult::Failed;
	OutItemKey = FGGItemKey();

	if (!ItemDefTable || DefRow == NAME_None || Quantity <= 0) { return; }

	FGGItemDefinitionRow Def;
	if (!GetItemDef(ItemDefTable, DefRow, Def)) { return; }

	AddStack(Inventory, Def, DefRow, Quantity, Result, OutItemKey);
}

bool UGGInventoryLibrary::TransferItemBetweenInventories(const UDataTable* ItemDefTable, TArray<FGGItemInstance>& From, TArray<FGGItemInstance>& To, FGGItemKey Key, int32 Quantity, EGGAddItemResult& OutAddResult, FGGItemKey& OutNewKey)
{
	OutAddResult = EGGAddItemResult::Failed;
	OutNewKey = FGGItemKey();

	if (!ItemDefTable || Quantity <= 0) { return false; }

	for (int32 Index = 0; Index < From.Num(); ++Index)
	{
		FGGItemInstance& Slot = From[Index];
		if (Slot.Key == Key && Slot.Quantity > 0)
		{
			const int32 MoveQty = FMath::Clamp(Quantity, 1, Slot.Quantity);

			FGGItemDefinitionRow Def;
			if (!GetItemDef(ItemDefTable, Slot.DefRow, Def)) { return false; }

			// Try to add to To (stack/new)
			AddStack(To, Def, Slot.DefRow, MoveQty, OutAddResult, OutNewKey);

			// Remove from From
			Slot.Quantity -= MoveQty;
			if (Slot.Quantity <= 0)
			{
				From.RemoveAt(Index);
			}
			return true;
		}
	}
	return false;
}

void UGGInventoryLibrary::GenerateLoot(const UDataTable* ItemDefTable, const TArray<FGGWeightedLootEntry>& LootTable, int32 Rolls, float Luck, TArray<FGGItemInstance>& OutLoot)
{
	OutLoot.Reset();
	if (!ItemDefTable || LootTable.Num() == 0 || Rolls <= 0) { return; }

	// Precompute adjusted cumulative weights
	TArray<float> Cum;
	Cum.Reserve(LootTable.Num());
	float Total = 0.f;

	for (const FGGWeightedLootEntry& E : LootTable)
	{
		FGGItemDefinitionRow D;
		if (GetItemDef(ItemDefTable, E.Row, D))
		{
			// Simple luck scaling: higher base weight scales up by Luck
			const float W = FMath::Max(0.f, E.Weight) * FMath::Max(0.f, Luck);
			Total += W;
			Cum.Add(Total);
		}
		else
		{
			Cum.Add(Total); // keep length consistent
		}
	}
	if (Total <= 0.f) { return; }

	auto PickIndex = [&]()->int32
	{
		const float R = FMath::FRandRange(0.f, Total);
		const int32 Idx = Algo::UpperBound(Cum, R);
		return FMath::Clamp(Idx, 0, LootTable.Num() - 1);
	};

	for (int32 i = 0; i < Rolls; ++i)
	{
		const int32 Idx = PickIndex();
		const FGGWeightedLootEntry& E = LootTable[Idx];

		FGGItemDefinitionRow D;
		if (!GetItemDef(ItemDefTable, E.Row, D)) { continue; }

		// Optional tag filter
		if (!E.RequiredTags.IsEmpty() && !D.Tags.HasAll(E.RequiredTags))
		{
			continue;
		}

		const int32 Qty = FMath::RandRange(FMath::Max(1, E.MinQty), FMath::Max(E.MinQty, E.MaxQty));

		EGGAddItemResult Dummy;
		FGGItemKey DummyKey;
		AddStack(OutLoot, D, E.Row, Qty, Dummy, DummyKey);
	}
}

static bool GG_ComposeCountMap(const TArray<FGGItemInstance>& Inventory, TMap<FName, int32>& Out)
{
	Out.Reset();
	for (const FGGItemInstance& I : Inventory)
	{
		if (I.DefRow != NAME_None && I.Quantity > 0)
		{
			Out.FindOrAdd(I.DefRow) += I.Quantity;
		}
	}
	return true;
}

bool UGGInventoryLibrary::IsRecipeCraftable(const UDataTable* ItemDefTable, const UDataTable* RecipeTable, FName RecipeRow, const TArray<FGGItemInstance>& Inventory, TArray<FName>& OutMissingRows, TArray<int32>& OutMissingCounts)
{
	OutMissingRows.Reset();
	OutMissingCounts.Reset();

	if (!RecipeTable || RecipeRow == NAME_None) { return false; }

	const FGGRecipeRow* Recipe = RecipeTable->FindRow<FGGRecipeRow>(RecipeRow, TEXT("GG:IsRecipeCraftable"));
	if (!Recipe) { return false; }

	TMap<FName, int32> Have;
	GG_ComposeCountMap(Inventory, Have);

	bool bOk = true;
	for (int32 i = 0; i < Recipe->IngredientRows.Num(); ++i)
	{
		const FName Row = Recipe->IngredientRows[i];
		const int32 Need = Recipe->IngredientCounts.IsValidIndex(i) ? FMath::Max(0, Recipe->IngredientCounts[i]) : 0;

		const int32 HaveQty = Have.FindRef(Row);
		if (HaveQty < Need)
		{
			bOk = false;
			OutMissingRows.Add(Row);
			OutMissingCounts.Add(Need - HaveQty);
		}
	}
	return bOk;
}

int32 UGGInventoryLibrary::CountInventoryRow(const TArray<FGGItemInstance>& Inventory, FName Row)
{
	int32 Total = 0;
	for (const FGGItemInstance& I : Inventory)
	{
		if (I.DefRow == Row)
		{
			Total += FMath::Max(0, I.Quantity);
		}
	}
	return Total;
}

void UGGInventoryLibrary::ConsumeInventoryRow(TArray<FGGItemInstance>& Inventory, FName Row, int32 Quantity)
{
	if (Quantity <= 0) { return; }

	for (int32 i = 0; i < Inventory.Num() && Quantity > 0; )
	{
		FGGItemInstance& I = Inventory[i];
		if (I.DefRow == Row && I.Quantity > 0)
		{
			const int32 Take = FMath::Min(I.Quantity, Quantity);
			I.Quantity -= Take;
			Quantity -= Take;

			if (I.Quantity <= 0)
			{
				Inventory.RemoveAt(i);
				continue;
			}
		}
		++i;
	}
}

bool UGGInventoryLibrary::CraftItem(const UDataTable* ItemDefTable, const UDataTable* RecipeTable, FName RecipeRow, TArray<FGGItemInstance>& Inventory)
{
	if (!RecipeTable || RecipeRow == NAME_None) { return false; }

	const FGGRecipeRow* Recipe = RecipeTable->FindRow<FGGRecipeRow>(RecipeRow, TEXT("GG:CraftItem"));
	if (!Recipe) { return false; }

	// Verify craftable
	TArray<FName> MissingR;
	TArray<int32> MissingC;
	if (!IsRecipeCraftable(ItemDefTable, RecipeTable, RecipeRow, Inventory, MissingR, MissingC))
	{
		return false;
	}

	// Consume ingredients
	for (int32 i = 0; i < Recipe->IngredientRows.Num(); ++i)
	{
		const FName Row = Recipe->IngredientRows[i];
		const int32 Need = Recipe->IngredientCounts.IsValidIndex(i) ? FMath::Max(0, Recipe->IngredientCounts[i]) : 0;
		ConsumeInventoryRow(Inventory, Row, Need);
	}

	// Add outputs
	for (int32 i = 0; i < Recipe->OutputRows.Num(); ++i)
	{
		const FName Row = Recipe->OutputRows[i];
		const int32 Qty = Recipe->OutputCounts.IsValidIndex(i) ? FMath::Max(0, Recipe->OutputCounts[i]) : 0;

		FGGItemDefinitionRow Def;
		if (!GetItemDef(ItemDefTable, Row, Def) || Qty <= 0) { continue; }

		EGGAddItemResult Dummy; FGGItemKey DummyKey;
		AddStack(Inventory, Def, Row, Qty, Dummy, DummyKey);
	}

	return true;
}

bool UGGInventoryLibrary::DisassembleItem(const UDataTable* ItemDefTable, const UDataTable* DisassemblyTable, TArray<FGGItemInstance>& Inventory, FGGItemKey Key, TArray<FGGItemInstance>& OutComponents)
{
	OutComponents.Reset();

	if (!DisassemblyTable || !ItemDefTable) { return false; }

	// Find the slot
	int32 Index = INDEX_NONE;
	for (int32 i = 0; i < Inventory.Num(); ++i)
	{
		if (Inventory[i].Key == Key)
		{
			Index = i;
			break;
		}
	}
	if (Index == INDEX_NONE) { return false; }

	FGGItemInstance Slot = Inventory[Index];
	if (Slot.Quantity <= 0) { return false; }

	// Look up disassembly row by source RowName (RowName == Slot.DefRow)
	const FGGDisassemblyRow* Row = DisassemblyTable->FindRow<FGGDisassemblyRow>(Slot.DefRow, TEXT("GG:Disassemble"));
	if (!Row) { return false; }

	// Consume 1
	Inventory[Index].Quantity -= 1;
	if (Inventory[Index].Quantity <= 0)
	{
		Inventory.RemoveAt(Index);
	}

	// Add components
	for (int32 i = 0; i < Row->ComponentRows.Num(); ++i)
	{
		const FName OutRow = Row->ComponentRows[i];
		const int32 Qty = Row->ComponentCounts.IsValidIndex(i) ? FMath::Max(0, Row->ComponentCounts[i]) : 0;

		FGGItemDefinitionRow Def;
		if (!GetItemDef(ItemDefTable, OutRow, Def) || Qty <= 0) { continue; }

		EGGAddItemResult Dummy; FGGItemKey NewKey;
		AddStack(Inventory, Def, OutRow, Qty, Dummy, NewKey);

		// Add a snapshot to OutComponents
		FGGItemInstance Snapshot;
		Snapshot.Key = NewKey;
		Snapshot.DefRow = OutRow;
		Snapshot.Quantity = Qty;
		OutComponents.Add(Snapshot);
	}
	return true;
}

bool UGGInventoryLibrary::FindAndModifyItem(TArray<FGGItemInstance>& Inventory, FGGItemKey Key, int32 NewQuantity, float DeltaDurability, const FGameplayTagContainer& TagsToAdd, const FGameplayTagContainer& TagsToRemove)
{
	for (FGGItemInstance& I : Inventory)
	{
		if (I.Key == Key)
		{
			if (NewQuantity >= 0) { I.Quantity = NewQuantity; }
			if (!FMath::IsNearlyZero(DeltaDurability))
			{
				I.Durability = FMath::Clamp(I.Durability + DeltaDurability, 0.f, 1.f);
			}
			for (const FGameplayTag& T : TagsToAdd)
			{
				I.InstanceTags.AddTag(T);
			}
			for (const FGameplayTag& T : TagsToRemove)
			{
				I.InstanceTags.RemoveTag(T);
			}
			return true;
		}
	}
	return false;
}

int32 UGGInventoryLibrary::GetTotalInventoryValue(const UDataTable* ItemDefTable, const TArray<FGGItemInstance>& Inventory)
{
	int32 Sum = 0;
	for (const FGGItemInstance& I : Inventory)
	{
		Sum += GetInstanceValue(ItemDefTable, I);
	}
	return Sum;
}

AActor* UGGInventoryLibrary::DropItemInWorld(UObject* WorldContextObject, AActor* Owner, const UDataTable* ItemDefTable, TArray<FGGItemInstance>& Inventory, FGGItemKey Key, int32 Quantity, float Distance)
{
	if (!WorldContextObject || !Owner || !ItemDefTable || Quantity <= 0) { return nullptr; }

	UWorld* World = GEngine ? GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull) : nullptr;
	if (!World) { return nullptr; }

	// Find item by key
	int32 Index = Inventory.IndexOfByPredicate([&](const FGGItemInstance& I){ return I.Key == Key; });
	if (Index == INDEX_NONE) { return nullptr; }

	FGGItemInstance& Slot = Inventory[Index];
	if (Slot.Quantity <= 0) { return nullptr; }

	FGGItemDefinitionRow Def;
	if (!GetItemDef(ItemDefTable, Slot.DefRow, Def) || !Def.DropClass) { return nullptr; }

	const int32 ToDrop = FMath::Clamp(Quantity, 1, Slot.Quantity);

	// Decrement inventory
	Slot.Quantity -= ToDrop;
	if (Slot.Quantity <= 0) { Inventory.RemoveAt(Index); }

	// Spawn actor in front
	const FVector Forward = Owner->GetActorForwardVector();
	const FVector Loc = Owner->GetActorLocation() + Forward * Distance;
	const FRotator Rot = Owner->GetActorRotation();

	FActorSpawnParameters Params;
	Params.Owner = Owner;
	Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn;

	AActor* Spawned = World->SpawnActor<AActor>(Def.DropClass, Loc, Rot, Params);
	return Spawned;
}

void UGGInventoryLibrary::SortInventory(const UDataTable* ItemDefTable, TArray<FGGItemInstance>& Inventory, EGGSortKey Key, bool bAscending)
{
	auto CmpText = [](const FText& A, const FText& B){ return A.ToString().Compare(B.ToString()); };

	Inventory.StableSort([&](const FGGItemInstance& L, const FGGItemInstance& R)
	{
		FGGItemDefinitionRow DL, DR;
		GetItemDef(ItemDefTable, L.DefRow, DL);
		GetItemDef(ItemDefTable, R.DefRow, DR);

		int32 Sign = 0;
		switch (Key)
		{
		case EGGSortKey::Name:        Sign = CmpText(DL.DisplayName, DR.DisplayName); break;
		case EGGSortKey::Value:       Sign = GetInstanceValue(ItemDefTable, L) - GetInstanceValue(ItemDefTable, R); break;
		case EGGSortKey::Type:        Sign = (int32)DL.Type - (int32)DR.Type; break;
		case EGGSortKey::Rarity:      Sign = (int32)DL.Rarity - (int32)DR.Rarity; break;
		case EGGSortKey::PrimaryStat: Sign = (DL.PrimaryStat < DR.PrimaryStat) ? -1 : (DL.PrimaryStat > DR.PrimaryStat ? 1 : 0); break;
		case EGGSortKey::Quantity:    Sign = L.Quantity - R.Quantity; break;
		default:                      Sign = 0; break;
		}

		return bAscending ? (Sign < 0) : (Sign > 0);
	});
}

void UGGInventoryLibrary::CompareItemStats(const UDataTable* ItemDefTable, const FGGItemInstance& A, const FGGItemInstance& B, EGGItemCompareResult& OutResult)
{
	OutResult = EGGItemCompareResult::Equal;

	FGGItemDefinitionRow DA, DB;
	GetItemDef(ItemDefTable, A.DefRow, DA);
	GetItemDef(ItemDefTable, B.DefRow, DB);

	// Primary stat first
	if (DA.PrimaryStat != DB.PrimaryStat)
	{
		OutResult = (DA.PrimaryStat > DB.PrimaryStat) ? EGGItemCompareResult::Better : EGGItemCompareResult::Worse;
		return;
	}
	// Fallback: value
	const int32 VA = GetInstanceValue(ItemDefTable, A);
	const int32 VB = GetInstanceValue(ItemDefTable, B);
	if (VA != VB)
	{
		OutResult = (VA > VB) ? EGGItemCompareResult::Better : EGGItemCompareResult::Worse;
		return;
	}
	// Final: rarity
	if ((int32)DA.Rarity != (int32)DB.Rarity)
	{
		OutResult = ((int32)DA.Rarity > (int32)DB.Rarity) ? EGGItemCompareResult::Better : EGGItemCompareResult::Worse;
		return;
	}
}

FGGItemKey UGGInventoryLibrary::GetRandomItemWithTag(const UDataTable* ItemDefTable, const TArray<FGGItemInstance>& Inventory, FGameplayTag Tag)
{
	TArray<int32> Candidates;
	for (int32 i = 0; i < Inventory.Num(); ++i)
	{
		const FGGItemInstance& I = Inventory[i];

		FGGItemDefinitionRow D;
		GetItemDef(ItemDefTable, I.DefRow, D);

		if (HasTag(I.InstanceTags, Tag) || HasTag(D.Tags, Tag))
		{
			Candidates.Add(i);
		}
	}
	if (Candidates.Num() == 0) { return FGGItemKey(); }

	const int32 Pick = Candidates[FMath::RandRange(0, Candidates.Num() - 1)];
	return Inventory[Pick].Key;
}

bool UGGInventoryLibrary::AutoEquipBestItem(UObject* EquipTarget, const UDataTable* ItemDefTable, const TArray<FGGItemInstance>& Inventory, EGGItemType Type)
{
	if (!EquipTarget || !EquipTarget->GetClass()->ImplementsInterface(UGGEquipable::StaticClass())) { return false; }

	const FGGItemInstance* BestInst = nullptr;
	FGGItemDefinitionRow BestDef;

	for (const FGGItemInstance& I : Inventory)
	{
		FGGItemDefinitionRow D;
		if (!GetItemDef(ItemDefTable, I.DefRow, D)) { continue; }
		if (D.Type != Type) { continue; }

		if (!BestInst)
		{
			BestInst = &I; BestDef = D; continue;
		}

		// Compare primary stat, value, rarity
		if (D.PrimaryStat > BestDef.PrimaryStat
			|| (D.PrimaryStat == BestDef.PrimaryStat && GetInstanceValue(ItemDefTable, I) > GetInstanceValue(ItemDefTable, *BestInst))
			|| (D.PrimaryStat == BestDef.PrimaryStat && GetInstanceValue(ItemDefTable, I) == GetInstanceValue(ItemDefTable, *BestInst) && (int32)D.Rarity > (int32)BestDef.Rarity))
		{
			BestInst = &I; BestDef = D;
		}
	}

	if (!BestInst) { return false; }

	IGGEquipable::Execute_EquipItem(EquipTarget, *BestInst);
	return true;
}

void UGGInventoryLibrary::LockInventorySlot(TArray<FGGItemKey>& LockedSlots, FGGItemKey Key)
{
	if (Key.IsValid())
	{
		LockedSlots.AddUnique(Key);
	}
}

void UGGInventoryLibrary::UnlockInventorySlot(TArray<FGGItemKey>& LockedSlots, FGGItemKey Key)
{
	LockedSlots.Remove(Key);
}

bool UGGInventoryLibrary::IsInventorySlotLocked(const TArray<FGGItemKey>& LockedSlots, FGGItemKey Key)
{
	return LockedSlots.Contains(Key);
}
