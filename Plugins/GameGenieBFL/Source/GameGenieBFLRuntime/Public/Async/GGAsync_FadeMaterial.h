// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Async/GGAsync_FadeMaterial.h
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Kismet/KismetMathLibrary.h"
#include "GGAsync_FadeMaterial.generated.h"

class UMeshComponent;
class UMaterialInstanceDynamic;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGGFadeSimple);

UCLASS()
class GAMEGENIEBFLRUNTIME_API UGGAsync_FadeMaterial : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable, Category="Game Genie BFL|Materials")
	FGGFadeSimple Completed;
	UPROPERTY(BlueprintAssignable, Category="Game Genie BFL|Materials")
	FGGFadeSimple Cancelled;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, meta = (
		WorldContext="WorldContextObject",
		BlueprintInternalUseOnly="true",
		DisplayName="Fade Actor In/Out (Material)",
		AdvancedDisplay="Easing,BlendExp"),
		Category="Game Genie BFL|Materials")
	static UGGAsync_FadeMaterial* FadeActorMaterialScalar(UObject* WorldContextObject, AActor* Actor,
		FName ScalarParameter = FName("Opacity"),
		float From = 0.f, float To = 1.f,
		float Duration = 0.5f,
		TEnumAsByte<EEasingFunc::Type> Easing = EEasingFunc::Linear,
		float BlendExp = 2.f);

	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Materials")
	void Cancel();

	// UBlueprintAsyncActionBase
	virtual void Activate() override;

private:
	// Params
	TWeakObjectPtr<UWorld> World_;
	TWeakObjectPtr<AActor> Actor_;
	FName Param_ = FName("Opacity");
	float From_ = 0.f;
	float To_ = 1.f;
	float Duration_ = 0.5f;
	TEnumAsByte<EEasingFunc::Type> Easing_ = EEasingFunc::Linear;
	float BlendExp_ = 2.f;

	// State
	TArray<TWeakObjectPtr<UMaterialInstanceDynamic>> MIDs_;
	float Elapsed_ = 0.f;
	FTimerHandle TickHandle_;
	bool bCancelled_ = false;

	void Tick();
	void Finish(bool bWasCancelled);
	void GatherMIDs();
	void SetAll(float Value);
};
