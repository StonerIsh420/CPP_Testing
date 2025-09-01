// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Async/GGAsync_Motion.h
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Kismet/KismetMathLibrary.h" // EEasingFunc::Type, Ease()
#include "GGAsync_Motion.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FGGSimpleAsyncDelegate);

/**
 * Smoothly interpolates an Actor to a target transform over time using an easing curve.
 * \nAuthority Only: this changes replicated world state; run on the server for networked actors.
 */
UCLASS()
class GAMEGENIEBFLRUNTIME_API UGGAsync_SmoothInterpTransform : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable, Category="Game Genie BFL|Math & Transforms")
	FGGSimpleAsyncDelegate Completed;

	UPROPERTY(BlueprintAssignable, Category="Game Genie BFL|Math & Transforms")
	FGGSimpleAsyncDelegate Cancelled;

	/** Factory */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, meta=(
		WorldContext="WorldContextObject",
		BlueprintInternalUseOnly="true",
		DisplayName="Smooth Interpolate Transform",
		AdvancedDisplay="Easing,BlendExp,bUpdateLocation,bUpdateRotation,bUpdateScale,bSweep,TeleportType",
		ToolTip="Interpolates an Actor from its current transform to Target over Duration using Easing.\nOptional location/rotation/scale channels and sweep.\nAuthority Only for replicated actors."
		),
		Category="Game Genie BFL|Math & Transforms")
	static UGGAsync_SmoothInterpTransform* SmoothInterpolateTransform(
		UObject* WorldContextObject,
		AActor* Actor,
		const FTransform& Target,
		float Duration = 0.5f,
		TEnumAsByte<EEasingFunc::Type> Easing = EEasingFunc::Linear,
		float BlendExp = 2.0f,
		bool bUpdateLocation = true,
		bool bUpdateRotation = true,
		bool bUpdateScale = false,
		bool bSweep = false,
		ETeleportType TeleportType = ETeleportType::None);

	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Math & Transforms",
		meta=(ToolTip="Cancels the interpolation and fires Cancelled."))
	void Cancel();

	// UBlueprintAsyncActionBase
	virtual void Activate() override;

private:
	// Parameters
	TWeakObjectPtr<UWorld> World_;
	TWeakObjectPtr<AActor> Actor_;
	FTransform Start_;
	FTransform Target_;
	float Duration_ = 0.5f;
	TEnumAsByte<EEasingFunc::Type> Easing_ = EEasingFunc::Linear;
	float BlendExp_ = 2.f;
	bool bLoc_ = true;
	bool bRot_ = true;
	bool bScale_ = false;
	bool bSweep_ = false;
	ETeleportType Teleport_ = ETeleportType::None;

	// State
	float Elapsed_ = 0.f;
	FTimerHandle TickHandle_;
	bool bCancelled_ = false;

	void Tick();
	void Finish(bool bWasCancelled);
};

/**
 * Rotates/moves an Actor around a world-space point along an axis at a constant angular speed.
 * \nAuthority Only: this changes replicated world state; run on the server for networked actors.
 */
UCLASS()
class GAMEGENIEBFLRUNTIME_API UGGAsync_RotateAroundPoint : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintAssignable, Category="Game Genie BFL|Math & Transforms")
	FGGSimpleAsyncDelegate Completed;

	UPROPERTY(BlueprintAssignable, Category="Game Genie BFL|Math & Transforms")
	FGGSimpleAsyncDelegate Cancelled;

	/** Factory */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, meta=(
		WorldContext="WorldContextObject",
		BlueprintInternalUseOnly="true",
		DisplayName="Rotate Actor Around Point",
		AdvancedDisplay="bSweep,TeleportType",
		ToolTip="Orbits Actor around Center along Axis at AngularSpeed (deg/sec) for Duration.\nUseful for simple orbit cams and gameplay setpieces.\nAuthority Only for replicated actors."
		),
		Category="Game Genie BFL|Math & Transforms")
	static UGGAsync_RotateAroundPoint* RotateActorAroundPoint(
		UObject* WorldContextObject,
		AActor* Actor,
		const FVector& Center,
		const FVector& Axis,
		float AngularSpeedDegPerSec = 90.f,
		float Duration = 1.f,
		bool bSweep = false,
		ETeleportType TeleportType = ETeleportType::None);

	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Math & Transforms",
		meta=(ToolTip="Cancels the orbit and fires Cancelled."))
	void Cancel();

	// UBlueprintAsyncActionBase
	virtual void Activate() override;

private:
	TWeakObjectPtr<UWorld> World_;
	TWeakObjectPtr<AActor> Actor_;
	FVector Center_ = FVector::ZeroVector;
	FVector Axis_ = FVector::UpVector;
	float SpeedDeg_ = 90.f;
	float Duration_ = 1.f;
	bool bSweep_ = false;
	ETeleportType Teleport_ = ETeleportType::None;

	FVector InitialOffset_ = FVector::ZeroVector;
	float Elapsed_ = 0.f;
	FTimerHandle TickHandle_;
	bool bCancelled_ = false;

	void Tick();
	void Finish(bool bWasCancelled);
};
