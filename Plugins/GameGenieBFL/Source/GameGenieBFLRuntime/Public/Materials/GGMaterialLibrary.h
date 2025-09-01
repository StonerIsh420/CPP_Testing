// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Materials/GGMaterialLibrary.h
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GGMaterialLibrary.generated.h"

class UMeshComponent;
class UMaterialInstanceDynamic;

/** Utility helpers for materials. */
UCLASS()
class GAMEGENIEBFLRUNTIME_API UGGMaterialLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	/** Creates/returns a MID and assigns it to the mesh slot. Same as UGGActorLibrary version; provided for category grouping. */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Materials",
		meta=(DisplayName="Create Dynamic Material Instance (Safe)"))
	static UMaterialInstanceDynamic* CreateDynamicMaterialInstanceSafe(UMeshComponent* Mesh, int32 MaterialIndex);
};
