// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Async/GGAsync_Delayed.h
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GGAsync_Delayed.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGGDelayedSimple);

UCLASS()
class GAMEGENIEBFLRUNTIME_API UGGAsync_DelayedEvent : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable) FGGDelayedSimple Completed;

	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", WorldContext="WorldContextObject", DisplayName="Delayed Event"), Category="Game Genie BFL|Data & Gameplay|Async")
	static UGGAsync_DelayedEvent* Delayed(UObject* WorldContextObject, float DelaySeconds);

	virtual void Activate() override;

private:
	UPROPERTY() float Delay_ = 0.f;
	TWeakObjectPtr<UWorld> World_;
	FTimerHandle Handle_;
};
