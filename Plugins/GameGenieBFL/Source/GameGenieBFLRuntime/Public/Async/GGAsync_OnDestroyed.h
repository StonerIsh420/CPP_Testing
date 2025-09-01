// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Async/GGAsync_OnDestroyed.h
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GGAsync_OnDestroyed.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGGOnActorDestroyed, AActor*, Actor);

UCLASS()
class GAMEGENIEBFLRUNTIME_API UGGAsync_OnDestroyed : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable) FGGOnActorDestroyed Destroyed;

	/** Bind to Target->OnDestroyed and fire when it happens. */
	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", DisplayName="Bind Event to ActorDeath"), Category="Game Genie BFL|Data & Gameplay|Async")
	static UGGAsync_OnDestroyed* BindOnDestroyed(AActor* Target);

	virtual void Activate() override;

private:
	UPROPERTY() TWeakObjectPtr<AActor> Target_;

	/** Must be UFUNCTION to bind via AddDynamic to a dynamic multicast delegate. */
	UFUNCTION()
	void OnTargetDestroyed(AActor* A);
};
