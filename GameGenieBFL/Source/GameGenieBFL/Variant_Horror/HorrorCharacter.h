// Source/GameGenieBFL/Variant_Horror/HorrorCharacter.h
#pragma once

#include "CoreMinimal.h"
#include "GameGenieBFLCharacter.h"
#include "HorrorCharacter.generated.h"

class USpotLightComponent;
class UInputAction;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FUpdateSprintMeterDelegate, float, Percentage);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSprintStateChangedDelegate, bool, bSprinting);

/**
 * Simple first-person horror character:
 * - Uses base character sprint/crouch, pitch clamp, etc.
 * - Adds stamina-based sprint gating + UI delegates.
 * NOTE: Do NOT duplicate properties that exist in AGameGenieBFLCharacter (no shadowing).
 */
UCLASS()
class GAMEGENIEBFL_API AHorrorCharacter : public AGameGenieBFLCharacter
{
	GENERATED_BODY()

	/** Player light source mounted on the FP camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta=(AllowPrivateAccess="true"))
	USpotLightComponent* SpotLight;

public:
	AHorrorCharacter();

	/** Delegate fired with normalized [0..1] stamina after each fixed tick */
	UPROPERTY(BlueprintAssignable, Category="Sprint")
	FUpdateSprintMeterDelegate OnSprintMeterUpdated;

	/** Delegate fired when sprint state flips (pressed/released or forced stop) */
	UPROPERTY(BlueprintAssignable, Category="Sprint")
	FSprintStateChangedDelegate OnSprintStateChanged;

protected:
	// ~AActor
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	// ~AActor

	/** Add our auxiliary input binds (we still call Super to keep base binds) */
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;

	/** Called at a fixed cadence to drain/recover stamina and gate sprint */
	void SprintFixedTick();

	/** Track whether the sprint input is held (for auto-resume after recovery) */
	void OnSprintHoldStarted();
	void OnSprintHoldCompleted();

protected:
	/** Fixed tick interval for stamina sim (seconds) */
	UPROPERTY(EditAnywhere, Category="Sprint", meta=(ClampMin="0.01", ClampMax="0.5", Units="s"))
	float SprintFixedTickTime = 0.03333f;

	/** Max stamina duration while sprinting (seconds) */
	UPROPERTY(EditAnywhere, Category="Sprint", meta=(ClampMin="0.1", ClampMax="10.0", Units="s"))
	float SprintTime = 3.0f;

	/** Walk speed while recovering stamina (cm/s) */
	UPROPERTY(EditAnywhere, Category="Recovery", meta=(ClampMin="50.0", ClampMax="600.0", Units="cm/s"))
	float RecoveringWalkSpeed = 150.0f;

	/** (Optional) Time to fully recover from 0→full (unused in fixed-step model; reserved for future curve-based recovery) */
	UPROPERTY(EditAnywhere, Category="Recovery", meta=(ClampMin="0.0", ClampMax="10.0", Units="s"))
	float RecoveryTime = 0.0f;

private:
	/** Sprint stamina amount in seconds (0..SprintTime) */
	float SprintMeter_ = 0.0f;

	/** True while we are throttling player during stamina recovery */
	bool bRecovering_ = false;

	/** True while the sprint key is physically held down */
	bool bSprintHeld_ = false;

	/** Previous frame's sprint state to raise OnSprintStateChanged only on edges */
	bool bPrevSprinting_ = false;

	/** Fixed sprint tick timer handle */
	FTimerHandle SprintTimer_;
};
