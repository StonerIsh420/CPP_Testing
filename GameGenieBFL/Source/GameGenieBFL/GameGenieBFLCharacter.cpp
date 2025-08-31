// Source/{{PROJECT_NAME}}/GameGenieBFLCharacter.cpp
#include "GameGenieBFLCharacter.h"

#include "Animation/AnimInstance.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "EnhancedInputComponent.h"
#include "InputActionValue.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameGenieBFL.h"

DEFINE_LOG_CATEGORY(LogTemplateCharacter);

AGameGenieBFLCharacter::AGameGenieBFLCharacter()
{
	// Collision capsule
	GetCapsuleComponent()->InitCapsuleSize(55.f, 96.0f);
	GetCapsuleComponent()->SetCapsuleSize(34.0f, 96.0f);

	// First-person arms mesh
	FirstPersonMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("First Person Mesh"));
	FirstPersonMesh->SetupAttachment(GetMesh());
	FirstPersonMesh->SetOnlyOwnerSee(true);
	FirstPersonMesh->FirstPersonPrimitiveType = EFirstPersonPrimitiveType::FirstPerson;
	FirstPersonMesh->SetCollisionProfileName(FName("NoCollision"));

	// Camera
	FirstPersonCameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("First Person Camera"));
	FirstPersonCameraComponent->SetupAttachment(FirstPersonMesh, FName("head"));
	FirstPersonCameraComponent->SetRelativeLocationAndRotation(FVector(-2.8f, 5.89f, 0.0f), FRotator(0.0f, 90.0f, -90.0f));
	FirstPersonCameraComponent->bUsePawnControlRotation = true;
	FirstPersonCameraComponent->bEnableFirstPersonFieldOfView = true;
	FirstPersonCameraComponent->bEnableFirstPersonScale = true;
	FirstPersonCameraComponent->FirstPersonFieldOfView = 70.0f;
	FirstPersonCameraComponent->FirstPersonScale = 0.6f;

	// Hide third-person mesh in FP
	GetMesh()->SetOwnerNoSee(true);
	GetMesh()->FirstPersonPrimitiveType = EFirstPersonPrimitiveType::WorldSpaceRepresentation;

	// Movement baseline
	UCharacterMovementComponent* Move = GetCharacterMovement();
	Move->bOrientRotationToMovement = false;
	Move->RotationRate = FRotator(0.f, 540.f, 0.f);
	Move->BrakingDecelerationFalling = 1500.0f;
	Move->AirControl = AirControl;

	// Crouch support
	Move->GetNavAgentPropertiesRef().bCanCrouch = true;
	Move->SetCrouchedHalfHeight(CrouchedHalfHeight);

	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
}

void AGameGenieBFLCharacter::BeginPlay()
{
	Super::BeginPlay();

	if (ensure(FirstPersonCameraComponent))
	{
		DefaultFOV_   = FirstPersonCameraComponent->FieldOfView;
		DefaultFPFOV_ = FirstPersonCameraComponent->FirstPersonFieldOfView;

		StandingCameraBaseRelativeLoc_ = FirstPersonCameraComponent->GetRelativeLocation();
		CameraBaseRelativeLoc_         = StandingCameraBaseRelativeLoc_;
	}

	ApplySpeedSettings();
}

void AGameGenieBFLCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	UpdateCameraEffects(DeltaSeconds);
}

void AGameGenieBFLCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	if (UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (JumpAction)
		{
			EIC->BindAction(JumpAction, ETriggerEvent::Started,   this, &AGameGenieBFLCharacter::DoJumpStart);
			EIC->BindAction(JumpAction, ETriggerEvent::Completed, this, &AGameGenieBFLCharacter::DoJumpEnd);
		}
		if (MoveAction)
		{
			EIC->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AGameGenieBFLCharacter::MoveInput);
		}
		// Look: split mouse vs stick so we can invert only mouse by default
		if (LookAction)
		{
			EIC->BindAction(LookAction, ETriggerEvent::Triggered, this, &AGameGenieBFLCharacter::LookInput_Gamepad);
		}
		if (MouseLookAction)
		{
			EIC->BindAction(MouseLookAction, ETriggerEvent::Triggered, this, &AGameGenieBFLCharacter::LookInput_Mouse);
		}
		if (SprintAction)
		{
			EIC->BindAction(SprintAction, ETriggerEvent::Started,   this, &AGameGenieBFLCharacter::OnSprintPressed);
			EIC->BindAction(SprintAction, ETriggerEvent::Completed, this, &AGameGenieBFLCharacter::OnSprintReleased);
		}
		if (CrouchAction)
		{
			EIC->BindAction(CrouchAction, ETriggerEvent::Started,   this, &AGameGenieBFLCharacter::OnCrouchPressed);
			EIC->BindAction(CrouchAction, ETriggerEvent::Completed, this, &AGameGenieBFLCharacter::OnCrouchReleased);
		}
	}
	else
	{
		UE_LOG(LogGameGenieBFL, Error, TEXT("'%s' Failed to find an Enhanced Input Component!"), *GetNameSafe(this));
	}
}

void AGameGenieBFLCharacter::MoveInput(const FInputActionValue& Value)
{
	const FVector2D Axis = Value.Get<FVector2D>();
	DoMove(Axis.X, Axis.Y);
}

void AGameGenieBFLCharacter::LookInput_Gamepad(const FInputActionValue& Value)
{
	const FVector2D Axis = Value.Get<FVector2D>();
	const float Yaw   = Axis.X * LookYawScale;
	const float Pitch = (bInvertGamepadY ? -Axis.Y : Axis.Y) * LookPitchScale;
	DoAim(Yaw, Pitch);
}

void AGameGenieBFLCharacter::LookInput_Mouse(const FInputActionValue& Value)
{
	const FVector2D Axis = Value.Get<FVector2D>();
	const float Yaw   = Axis.X * LookYawScale;
	const float Pitch = (bInvertMouseY ? -Axis.Y : Axis.Y) * LookPitchScale;
	DoAim(Yaw, Pitch);
}

void AGameGenieBFLCharacter::DoAim(float YawDelta, float PitchDelta)
{
	if (!Controller) { return; }

	const FRotator Cur = Controller->GetControlRotation();
	const float NewYaw   = FMath::UnwindDegrees(Cur.Yaw + YawDelta);
	const float NewPitch = FMath::ClampAngle(Cur.Pitch + PitchDelta, MinPitchDeg, MaxPitchDeg);

	Controller->SetControlRotation(FRotator(NewPitch, NewYaw, Cur.Roll));
}

void AGameGenieBFLCharacter::DoMove(float Right, float Forward)
{
	if (!Controller) { return; }
	AddMovementInput(GetActorRightVector(),   Right);
	AddMovementInput(GetActorForwardVector(), Forward);
}

void AGameGenieBFLCharacter::DoJumpStart() { Jump(); }
void AGameGenieBFLCharacter::DoJumpEnd()   { StopJumping(); }

// ===== Sprint / Crouch =====
void AGameGenieBFLCharacter::OnSprintPressed()
{
	if (bSprintIsToggle) { ToggleSprinting(); }
	else                 { StartSprinting();  }
}
void AGameGenieBFLCharacter::OnSprintReleased()
{
	if (!bSprintIsToggle) { StopSprinting(); }
}
void AGameGenieBFLCharacter::OnCrouchPressed()
{
	if (bCrouchIsToggle) { bIsCrouched ? UnCrouch() : Crouch(); }
	else                 { Crouch(); }
}
void AGameGenieBFLCharacter::OnCrouchReleased()
{
	if (!bCrouchIsToggle) { UnCrouch(); }
}
void AGameGenieBFLCharacter::StartSprinting()
{
	if (bIsCrouched) { UnCrouch(); }
	bIsSprinting_ = true;
	ApplySpeedSettings();
}
void AGameGenieBFLCharacter::StopSprinting()
{
	bIsSprinting_ = false;
	ApplySpeedSettings();
}
void AGameGenieBFLCharacter::ToggleSprinting()
{
	bIsSprinting_ = !bIsSprinting_;
	if (bIsSprinting_ && bIsCrouched) { UnCrouch(); }
	ApplySpeedSettings();
}

void AGameGenieBFLCharacter::OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	Super::OnStartCrouch(HalfHeightAdjust, ScaledHalfHeightAdjust);
	bIsSprinting_ = false;
	ApplySpeedSettings();

	// Drop camera base smoothly by offset while crouched
	CameraBaseRelativeLoc_ = StandingCameraBaseRelativeLoc_ + FVector(0.f, 0.f, -CrouchCameraZOffset);
}
void AGameGenieBFLCharacter::OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	Super::OnEndCrouch(HalfHeightAdjust, ScaledHalfHeightAdjust);
	ApplySpeedSettings();

	// Restore standing camera base
	CameraBaseRelativeLoc_ = StandingCameraBaseRelativeLoc_;
}

void AGameGenieBFLCharacter::ApplySpeedSettings()
{
	if (UCharacterMovementComponent* Move = GetCharacterMovement())
	{
		Move->MaxWalkSpeed         = bIsCrouched ? CrouchSpeed : (bIsSprinting_ ? SprintSpeed : WalkSpeed);
		Move->MaxWalkSpeedCrouched = CrouchSpeed;
		Move->MaxAcceleration      = GroundAcceleration;
		Move->GroundFriction       = GroundFriction;
		Move->AirControl           = AirControl;
	}
}

// ===== Camera helpers =====
float AGameGenieBFLCharacter::GetEffectiveCameraFOV() const
{
	if (!FirstPersonCameraComponent) return 90.f;
	// If FP FOV scaling is enabled, prefer that value; otherwise use standard FOV.
	return FirstPersonCameraComponent->bEnableFirstPersonFieldOfView
		? FirstPersonCameraComponent->FirstPersonFieldOfView
		: FirstPersonCameraComponent->FieldOfView;
}

void AGameGenieBFLCharacter::SetEffectiveCameraFOV(float NewFOV)
{
	if (!FirstPersonCameraComponent) return;
	// Drive actual render FOV (UE API)
	FirstPersonCameraComponent->SetFieldOfView(NewFOV);
	if (FirstPersonCameraComponent->bEnableFirstPersonFieldOfView)
	{
		FirstPersonCameraComponent->FirstPersonFieldOfView = NewFOV;
	}
}

void AGameGenieBFLCharacter::UpdateCameraEffects(float DeltaSeconds)
{
	if (!FirstPersonCameraComponent) { return; }

	const FVector Vel = GetVelocity();
	const float Speed2D = FVector(Vel.X, Vel.Y, 0.f).Size();

	// Smooth the measured speed to avoid jittery bob/FOV
	SmoothedSpeed2D_ = FMath::FInterpTo(SmoothedSpeed2D_, Speed2D, DeltaSeconds, 6.f);

	// ---------- Head-bob (Z + subtle Y sway) ----------
	const bool bDoBob = bEnableHeadBob && GetCharacterMovement() && GetCharacterMovement()->IsMovingOnGround() && SmoothedSpeed2D_ > HeadBobMinSpeed;

	if (bDoBob)
	{
		// Normalize amplitude & frequency by speed (walk → sprint)
		const float SpeedFrac = FMath::Clamp(SmoothedSpeed2D_ / FMath::Max(1.f, SprintSpeed), 0.f, 1.f);
		const float Freq = FMath::Lerp(HeadBobFrequency, SprintBobFrequency, SpeedFrac);

		BobTime_ += DeltaSeconds * Freq;

		const float Phase = BobTime_ * 2.f * PI;
		const float AmpScale = (0.7f + 0.3f * SpeedFrac); // slightly stronger when sprinting

		const float OffsetZ = FMath::Sin(Phase) * HeadBobAmplitude * AmpScale;
		const float OffsetY = FMath::Sin(Phase * 0.5f) * HeadBobSway      * AmpScale;

		const FVector TargetRel = CameraBaseRelativeLoc_ + FVector(0.f, OffsetY, OffsetZ);
		FirstPersonCameraComponent->SetRelativeLocation(
			FMath::VInterpTo(FirstPersonCameraComponent->GetRelativeLocation(), TargetRel, DeltaSeconds, 12.f));
	}
	else
	{
		// Reset smoothly when idle/airborne
		FirstPersonCameraComponent->SetRelativeLocation(
			FMath::VInterpTo(FirstPersonCameraComponent->GetRelativeLocation(), CameraBaseRelativeLoc_, DeltaSeconds, 12.f));
		BobTime_ = 0.f;
	}

	// ---------- FOV kick (additive; speed-scaled; clamped) ----------
	if (bEnableFOVKick)
	{
		const float BaseFOV = DefaultFOV_;
		float TargetFOV = BaseFOV;

		if (bIsSprinting_)
		{
			const float SpeedFrac = FMath::Clamp(SmoothedSpeed2D_ / FMath::Max(1.f, SprintSpeed), 0.f, 1.f);

			if (FOVKickAdd > KINDA_SMALL_NUMBER)
			{
				// Additive and speed-proportional
				TargetFOV = FMath::Min(BaseFOV + FOVKickAdd * SpeedFrac, MaxSprintFOV);
			}
			else
			{
				// Fallback to absolute target if additive is zero
				TargetFOV = FMath::Clamp(SprintFirstPersonFOV, BaseFOV - 10.f, MaxSprintFOV);
			}
		}

		const float Current = GetEffectiveCameraFOV();
		const float NewFOV  = FMath::FInterpTo(Current, TargetFOV, DeltaSeconds, FOVInterpSpeed);
		SetEffectiveCameraFOV(NewFOV);
	}
}
