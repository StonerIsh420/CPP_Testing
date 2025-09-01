// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Interfaces/GGEffectReceiver.h
#pragma once

#include "UObject/Interface.h"
#include "Data/GGEffectAsset.h"
#include "GGEffectReceiver.generated.h"

UINTERFACE(BlueprintType)
class GAMEGENIEBFLRUNTIME_API UGGEffectReceiver : public UInterface
{
	GENERATED_BODY()
};

class GAMEGENIEBFLRUNTIME_API IGGEffectReceiver
{
	GENERATED_BODY()
public:
	/** Called when an effect is applied. */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Game Genie BFL|Effects")
	void OnEffectApplied(UGGEffectAsset* Effect, const FGuid& Handle);

	/** Called when the effect is removed/expired. */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Game Genie BFL|Effects")
	void OnEffectRemoved(UGGEffectAsset* Effect, const FGuid& Handle);
};
