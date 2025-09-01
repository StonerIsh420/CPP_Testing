// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Async/GGAsync_InputAction.h
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GGAsync_InputAction.generated.h"

class APlayerController;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGGOnInputActionTriggered);

/**
 * Optional binder for Enhanced Input.
 * Pass a UInputAction as the 'Action' UObject when GG_WITH_ENHANCED_INPUT=1 and the EnhancedInput module is enabled.
 * When disabled, this node immediately broadcasts once so graphs don't hang.
 */
UCLASS()
class GAMEGENIEBFLRUNTIME_API UGGAsync_InputAction : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable) FGGOnInputActionTriggered Triggered;

	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", WorldContext="WorldContextObject", DisplayName="Bind Event to Input Action"), Category="Game Genie BFL|Data & Gameplay|Async")
	static UGGAsync_InputAction* BindToInputAction(UObject* WorldContextObject, APlayerController* PC, UObject* Action);

	virtual void Activate() override;

private:
	UPROPERTY() TWeakObjectPtr<APlayerController> PC_;
	UPROPERTY() TWeakObjectPtr<UObject> ActionObj_; // Holds UInputAction when Enhanced Input is enabled

#if GG_WITH_ENHANCED_INPUT
	void OnTriggeredInternal();
#endif
};
