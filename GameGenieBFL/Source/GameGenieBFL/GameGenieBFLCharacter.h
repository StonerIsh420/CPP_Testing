// Source/{{PROJECT_NAME}}/GameGenieBFLCharacter.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Logging/LogMacros.h"
#include "GameGenieBFLCharacter.generated.h"

class UInputComponent;
class USkeletalMeshComponent;
class UCameraComponent;
class UInputAction;
struct FInputActionValue;

DECLARE_LOG_CATEGORY_EXTERN(LogTemplateCharacter, Log, All);

/**
 * First person character upgraded for survival locomotion & camera polish.
 */
UCLASS(abstract)
class AGameGenieBFLCharacter : public ACharacter
{
	GENERATED_BODY()

	/** Pawn mesh: first person view (arms; seen only by self) */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta=(AllowPrivateAccess="true"))
	USkeletalMeshComponent* FirstPersonMesh;

	/** First person camera */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category="Components", meta=(AllowPrivateAccess="true"))
	UCameraComponent* FirstPersonCameraComponent;

public:
	AGameGenieBFLCharacter();

	// ~AActor
	virtual void BeginPlay() override;
	virtual void Tick(float DeltaSeconds) override;
	// ~AActor

protected:
	/** Input Actions */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* JumpAction = nullptr;

	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* MoveAction = nullptr;

	/** Generic stick look (gamepad) */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* LookAction = nullptr;

	/** Mouse look */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* MouseLookAction = nullptr;

	/** Sprint (Digital) */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* SprintAction = nullptr;

	/** Crouch (Digital) */
	UPROPERTY(EditAnywhere, Category="Input")
	UInputAction* CrouchAction = nullptr;

	/** Movement handlers */
	void MoveInput(const FInputActionValue& Value);

	/** Look handlers (separate so we can invert mouse only) */
	void LookInput_Gamepad(const FInputActionValue& Value);
	void LookInput_Mouse  (const FInputActionValue& Value);

	/** Core aim impl (applies clamp & scaling) */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoAim(float Yaw, float Pitch);

	/** Handles move inputs from either controls or UI interfaces */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoMove(float Right, float Forward);

	/** Handles jump start/end */
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoJumpStart();
	UFUNCTION(BlueprintCallable, Category="Input")
	virtual void DoJumpEnd();

	/** Sprint press/release */
	void OnSprintPressed();
	void OnSprintReleased();

	/** Crouch press/release */
	void OnCrouchPressed();
	void OnCrouchReleased();

	/** Sprint control */
	void StartSprinting();
	void StopSprinting();
	void ToggleSprinting();

	/** Speed & camera helpers */
	void ApplySpeedSettings();
	void UpdateCameraEffects(float DeltaSeconds);

	/** Crouch hooks keep speed/camera sane */
	virtual void OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) override;
	virtual void OnEndCrouch  (float HalfHeightAdjust, float ScaledHalfHeightAdjust) override;

protected:
	/** Input bindings */
	virtual void SetupPlayerInputComponent(UInputComponent* InputComponent) override;

public:
	USkeletalMeshComponent* GetFirstPersonMesh() const { return FirstPersonMesh; }
	UCameraComponent* GetFirstPersonCameraComponent() const { return FirstPersonCameraComponent; }

	UFUNCTION(BlueprintPure, Category="Movement|Sprint")
	bool IsSprinting() const { return bIsSprinting_; }

protected:
	// ===== Movement tuning =====
	UPROPERTY(EditDefaultsOnly, Category="Movement|Speeds")
	float WalkSpeed = 450.f;

	UPROPERTY(EditDefaultsOnly, Category="Movement|Speeds")
	float SprintSpeed = 700.f;

	UPROPERTY(EditDefaultsOnly, Category="Movement|Speeds")
	float CrouchSpeed = 200.f;

	UPROPERTY(EditDefaultsOnly, Category="Movement|Speeds")
	float GroundAcceleration = 2048.f;

	UPROPERTY(EditDefaultsOnly, Category="Movement|Speeds")
	float GroundFriction = 8.f;

	UPROPERTY(EditDefaultsOnly, Category="Movement|Air")
	float AirControl = 0.5f;

	UPROPERTY(EditDefaultsOnly, Category="Movement|Sprint")
	bool bSprintIsToggle = false;

	/** Hold-to-crouch vs toggle */
	UPROPERTY(EditDefaultsOnly, Category="Movement|Crouch")
	bool bCrouchIsToggle = true;

	/** Crouched half-height (passed to CharacterMovement setter) */
	UPROPERTY(EditDefaultsOnly, Category="Movement|Crouch")
	float CrouchedHalfHeight = 60.f;

	// ===== Camera tuning =====
	/** Clamp camera pitch in degrees */
	UPROPERTY(EditDefaultsOnly, Category="Camera|Clamp")
	float MinPitchDeg = -85.f;

	UPROPERTY(EditDefaultsOnly, Category="Camera|Clamp")
	float MaxPitchDeg =  85.f;

	/** Look scaling & inversion (mouse/gamepad separated) */
	UPROPERTY(EditDefaultsOnly, Category="Camera|Look")
	float LookYawScale = 1.0f;

	UPROPERTY(EditDefaultsOnly, Category="Camera|Look")
	float LookPitchScale = 1.0f;

	UPROPERTY(EditDefaultsOnly, Category="Camera|Look")
	bool bInvertMouseY = true;

	UPROPERTY(EditDefaultsOnly, Category="Camera|Look")
	bool bInvertGamepadY = false;

	/** Head-bob (position offsets only: Z + slight Y sway) */
	UPROPERTY(EditDefaultsOnly, Category="Camera|HeadBob")
	bool bEnableHeadBob = true;

	/** Vertical amplitude in cm (at walk) */
	UPROPERTY(EditDefaultsOnly, Category="Camera|HeadBob", meta=(EditCondition="bEnableHeadBob"))
	float HeadBobAmplitude = 2.8f;

	/** Lateral sway amplitude in cm (at walk) */
	UPROPERTY(EditDefaultsOnly, Category="Camera|HeadBob", meta=(EditCondition="bEnableHeadBob"))
	float HeadBobSway = 0.9f;

	/** Base step frequency at walk in Hz (≈ human walk cadence) */
	UPROPERTY(EditDefaultsOnly, Category="Camera|HeadBob", meta=(EditCondition="bEnableHeadBob"))
	float HeadBobFrequency = 2.2f;

	/** Step frequency at sprint in Hz */
	UPROPERTY(EditDefaultsOnly, Category="Camera|HeadBob", meta=(EditCondition="bEnableHeadBob"))
	float SprintBobFrequency = 3.4f;

	/** Min speed (cm/s) before bob kicks in */
	UPROPERTY(EditDefaultsOnly, Category="Camera|HeadBob", meta=(EditCondition="bEnableHeadBob"))
	float HeadBobMinSpeed = 10.f;

	/** Sprint FOV kick (additive) */
	UPROPERTY(EditDefaultsOnly, Category="Camera|FOVKick")
	bool bEnableFOVKick = true;

	/** Absolute target FOV if additive is zero (fallback) */
	UPROPERTY(EditDefaultsOnly, Category="Camera|FOVKick", meta=(EditCondition="bEnableFOVKick"))
	float SprintFirstPersonFOV = 80.f;

	/** Additive FOV when fully at sprint speed (scaled by speed) */
	UPROPERTY(EditDefaultsOnly, Category="Camera|FOVKick", meta=(EditCondition="bEnableFOVKick"))
	float FOVKickAdd = 4.f;

	/** Clamp sprint FOV to this max */
	UPROPERTY(EditDefaultsOnly, Category="Camera|FOVKick", meta=(EditCondition="bEnableFOVKick"))
	float MaxSprintFOV = 96.f;

	UPROPERTY(EditDefaultsOnly, Category="Camera|FOVKick", meta=(EditCondition="bEnableFOVKick"))
	float FOVInterpSpeed = 8.f;

	/** Camera drop while crouched (cm) */
	UPROPERTY(EditDefaultsOnly, Category="Camera|Crouch")
	float CrouchCameraZOffset = 22.f;

private:
	// Runtime state
	bool bIsSprinting_ = false;

	/** Cached default FOVs and camera base relative locs */
	float DefaultFOV_ = 90.f;
	float DefaultFPFOV_ = 70.f;

	float BobTime_ = 0.f;

	/** Standing base; current base (may be crouched); both are relative to attach socket */
	FVector StandingCameraBaseRelativeLoc_ = FVector::ZeroVector;
	FVector CameraBaseRelativeLoc_ = FVector::ZeroVector;

	/** Smoothed planar speed for stable bob/FOV */
	float SmoothedSpeed2D_ = 0.f;

	// Helpers
	float GetEffectiveCameraFOV() const;
	void  SetEffectiveCameraFOV(float NewFOV);
};
