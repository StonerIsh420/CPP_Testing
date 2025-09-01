// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Data/GGItemTypes.h
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "GGItemTypes.generated.h"

UENUM(BlueprintType)
enum class EGGItemType : uint8
{
	Weapon      UMETA(DisplayName="Weapon"),
	Armor       UMETA(DisplayName="Armor"),
	Consumable  UMETA(DisplayName="Consumable"),
	Material    UMETA(DisplayName="Material"),
	Quest       UMETA(DisplayName="Quest"),
	Misc        UMETA(DisplayName="Misc")
};

UENUM(BlueprintType)
enum class EGGItemRarity : uint8
{
	Common      UMETA(DisplayName="Common"),
	Uncommon    UMETA(DisplayName="Uncommon"),
	Rare        UMETA(DisplayName="Rare"),
	Epic        UMETA(DisplayName="Epic"),
	Legendary   UMETA(DisplayName="Legendary"),
	Mythic      UMETA(DisplayName="Mythic")
};

UENUM(BlueprintType)
enum class EGGAddItemResult : uint8
{
	Failed          UMETA(DisplayName="Failed"),
	AddedNew        UMETA(DisplayName="Added New"),
	Stacked         UMETA(DisplayName="Stacked"),
	CompletedStack  UMETA(DisplayName="Completed Stack")
};

/** Renamed to avoid clash with math enum: use EGGItemCompareResult for inventory comparisons. */
UENUM(BlueprintType)
enum class EGGItemCompareResult : uint8
{
	Worse   UMETA(DisplayName="Worse"),
	Equal   UMETA(DisplayName="Equal"),
	Better  UMETA(DisplayName="Better")
};

UENUM(BlueprintType)
enum class EGGSortKey : uint8
{
	Name,
	Value,
	Type,
	Rarity,
	PrimaryStat,
	Quantity
};

/** Unique key per inventory entry (slot-level identity). */
USTRUCT(BlueprintType)
struct FGGItemKey
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	FGuid Guid;

	static FGGItemKey NewKey()
	{
		FGGItemKey K; K.Guid = FGuid::NewGuid(); return K;
	}

	bool IsValid() const { return Guid.IsValid(); }

	friend bool operator==(const FGGItemKey& A, const FGGItemKey& B) { return A.Guid == B.Guid; }
	friend uint32 GetTypeHash(const FGGItemKey& K) { return HashCombine(GetTypeHash(K.Guid.A), GetTypeHash(K.Guid.D)); }
};

/** Static data for an item, stored in a DataTable. */
USTRUCT(BlueprintType)
struct FGGItemDefinitionRow : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Item")
	FText DisplayName;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Item")
	EGGItemType Type = EGGItemType::Misc;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Item")
	EGGItemRarity Rarity = EGGItemRarity::Common;

	/** Max items per stack. 1 = not stackable. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Item", meta=(ClampMin="1"))
	int32 MaxStack = 1;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Economy", meta=(ClampMin="0"))
	int32 BaseValue = 0;

	/** Generic primary stat for comparisons (e.g., DPS, Armor). */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Item")
	float PrimaryStat = 0.f;

	/** Optional gameplay tags for filtering. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Item")
	FGameplayTagContainer Tags;

	/** Class to spawn when dropping the item into the world (e.g., pickup). */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="World")
	TSubclassOf<AActor> DropClass = nullptr;

	/** Optional icon (soft) for UI. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="UI")
	TSoftObjectPtr<class UTexture2D> Icon;
};

/** Runtime inventory entry. */
USTRUCT(BlueprintType)
struct FGGItemInstance
{
	GENERATED_BODY()

	/** Unique slot key. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	FGGItemKey Key;

	/** DataTable Row for this instance. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	FName DefRow;

	/** Amount in this stack. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item", meta=(ClampMin="0"))
	int32 Quantity = 0;

	/** If >=0, overrides BaseValue from definition. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Economy")
	int32 ValueOverride = -1;

	/** Optional add/remove tags at instance level. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item")
	FGameplayTagContainer InstanceTags;

	/** 0..1 durability (optional). */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Item", meta=(ClampMin="0.0", ClampMax="1.0"))
	float Durability = 1.f;

	bool IsValid() const { return DefRow != NAME_None && Quantity > 0 && Key.IsValid(); }
};

/** Weighted loot entry pointing to an item def row. */
USTRUCT(BlueprintType)
struct FGGWeightedLootEntry
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Loot")
	FName Row;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Loot", meta=(ClampMin="0.0"))
	float Weight = 1.f;

	/** Inclusive range for quantity per roll. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Loot", meta=(ClampMin="1"))
	int32 MinQty = 1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Loot", meta=(ClampMin="1"))
	int32 MaxQty = 1;

	/** Only eligible if the item def has these tags. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Loot")
	FGameplayTagContainer RequiredTags;
};

/** Recipe: consumes ingredients, outputs items. */
USTRUCT(BlueprintType)
struct FGGRecipeRow : public FTableRowBase
{
	GENERATED_BODY()

	/** Ingredient def rows and their quantities (parallel arrays). */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Recipe")
	TArray<FName> IngredientRows;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Recipe")
	TArray<int32> IngredientCounts;

	/** Output def rows and their quantities (parallel arrays). */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Recipe")
	TArray<FName> OutputRows;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Recipe")
	TArray<int32> OutputCounts;
};

/** Disassembly: breaking a def row into outputs. RowName == Source item row. */
USTRUCT(BlueprintType)
struct FGGDisassemblyRow : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Disassembly")
	TArray<FName> ComponentRows;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Disassembly")
	TArray<int32> ComponentCounts;
};
