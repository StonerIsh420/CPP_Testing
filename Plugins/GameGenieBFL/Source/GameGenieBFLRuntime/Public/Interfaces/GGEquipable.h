// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Interfaces/GGEquipable.h
#pragma once

#include "UObject/Interface.h"
#include "Data/GGItemTypes.h"
#include "GGEquipable.generated.h"

UINTERFACE(BlueprintType)
class GAMEGENIEBFLRUNTIME_API UGGEquipable : public UInterface
{
	GENERATED_BODY()
};

class GAMEGENIEBFLRUNTIME_API IGGEquipable
{
	GENERATED_BODY()
public:
	/** Implement on your character/equipment owner. Should equip the given item instance. */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Game Genie BFL|Inventory & Items")
	void EquipItem(const FGGItemInstance& Item);
};
