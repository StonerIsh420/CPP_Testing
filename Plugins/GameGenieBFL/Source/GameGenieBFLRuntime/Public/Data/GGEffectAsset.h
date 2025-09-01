// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Data/GGEffectAsset.h
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "GGEffectAsset.generated.h"

/** Minimal gameplay effect asset for non-GAS workflows. */
UCLASS(BlueprintType)
class GAMEGENIEBFLRUNTIME_API UGGEffectAsset : public UDataAsset
{
	GENERATED_BODY()
public:
	/** Id for UI/logs. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Effect")
	FName EffectId = NAME_None;

	/** Duration in seconds; <=0 treated as instant (apply/remove immediately). */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Effect", meta=(ClampMin="0.0"))
	float Duration = 5.f;

	/** Magnitude scalar (game-specific use). */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Effect")
	float Magnitude = 1.f;

	/** Tags applied while active. */
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category="Effect")
	FGameplayTagContainer Tags;
};
