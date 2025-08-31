// Source/GameGenieBFL/Variant_Horror/HorrorCharacter.cpp
#include "Variant_Horror/HorrorCharacter.h"

#include "Camera/CameraComponent.h"
#include "Components/SpotLightComponent.h"
#include "EnhancedInputComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "InputAction.h"
#include "TimerManager.h"
#include "Engine/World.h"

AHorrorCharacter::AHorrorCharacter()
{
	// Spotlight attached to FP camera
	SpotLight = CreateDefaultSubobject<USpotLightComponent>(TEXT("SpotLight"));
	SpotLight->SetupAttachment(GetFirstPersonCameraComponent());
	SpotLight->SetRelativeLocationAndRotation(FVector(30.0f, 17.5f, -5.0f), FRotator(-18.6f, -1.3f, 5.26f));
	SpotLight->SetIntensityUnits(ELightUnits::Lumens);
	SpotLight->SetIntensity(50.f); // modest default
	SpotLight->AttenuationRadius = 1050.0f;
	SpotLight->InnerConeAngle = 18.7f;
	SpotLight->OuterConeAngle = 45.24f;

	// Variant feel (optional): subtler camera effects
	bEnableHeadBob = false;
	bEnableFOVKick = false;
}

void AHorrorCharacter::BeginPlay()
{
	Super::BeginPlay();

	// Initialize stamina to full
	SprintMeter_ = SprintTime;

	// Ensure default walk speed is applied from base property
	if (UCharacterMovementComponent* Move = GetCharacterMovement())
	{
		Move->MaxWalkSpeed = WalkSpeed;
	}

	// Start fixed sprint timer
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().SetTimer(SprintTimer_, this, &AHorrorCharacter::SprintFixedTick, SprintFixedTickTime, true);
	}

	// Initialize edge detector
	bPrevSprinting_ = IsSprinting();
}

void AHorrorCharacter::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// Clear sprint timer
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(SprintTimer_);
	}
	Super::EndPlay(EndPlayReason);
}

void AHorrorCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	// Add light-touch binds to observe sprint button state; base class already binds sprint behavior.
	if (UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (SprintAction)
		{
			EIC->BindAction(SprintAction, ETriggerEvent::Started,   this, &AHorrorCharacter::OnSprintHoldStarted);
			EIC->BindAction(SprintAction, ETriggerEvent::Completed, this, &AHorrorCharacter::OnSprintHoldCompleted);
		}
	}
}

void AHorrorCharacter::OnSprintHoldStarted()
{
	bSprintHeld_ = true;
	// No direct broadcast here—let the fixed tick detect edge after base toggles sprint.
}

void AHorrorCharacter::OnSprintHoldCompleted()
{
	bSprintHeld_ = false;
	// No direct broadcast here—fixed tick will see the edge after base stops sprint.
}

void AHorrorCharacter::SprintFixedTick()
{
	UCharacterMovementComponent* Move = GetCharacterMovement();
	if (!Move)
	{
		return;
	}

	// Current horizontal speed for gating; ignore vertical
	const float Speed2D = FVector(GetVelocity().X, GetVelocity().Y, 0.f).Size();

	const bool bCurrentlySprinting = IsSprinting();

	// Drain while sprinting and not in enforced recovery, only if actually moving faster than walk
	if (bCurrentlySprinting && !bRecovering_ && Speed2D > WalkSpeed)
	{
		if (SprintMeter_ > 0.0f)
		{
			SprintMeter_ = FMath::Max(SprintMeter_ - SprintFixedTickTime, 0.0f);

			// Out of stamina → force stop sprint and enter recovery
			if (SprintMeter_ <= 0.0f)
			{
				bRecovering_ = true;

				// Force stop sprint via base (also restores base walk speed & FOV)
				StopSprinting();

				// Clamp recovery walk speed
				Move->MaxWalkSpeed = RecoveringWalkSpeed;
			}
		}
	}
	else
	{
		// Recover stamina when not actively sprinting or while recovering
		SprintMeter_ = FMath::Min(SprintMeter_ + SprintFixedTickTime, SprintTime);

		if (SprintMeter_ >= SprintTime && bRecovering_)
		{
			// Exit recovery
			bRecovering_ = false;

			// Restore base speed depending on sprint input state
			if (bSprintHeld_)
			{
				// Auto-resume sprint when fully recovered and key is still held
				StartSprinting();
			}
			else
			{
				Move->MaxWalkSpeed = WalkSpeed; // base would set this on StopSprinting, but ensure here
			}
		}
	}

	// Broadcast meter update [0..1]
	const float Normalized = (SprintTime > 0.f) ? (SprintMeter_ / SprintTime) : 1.f;
	OnSprintMeterUpdated.Broadcast(Normalized);

	// Edge-based sprint state broadcast (includes forced stop on stamina exhaustion)
	if (bCurrentlySprinting != bPrevSprinting_)
	{
		OnSprintStateChanged.Broadcast(bCurrentlySprinting);
		bPrevSprinting_ = bCurrentlySprinting;
	}
}
