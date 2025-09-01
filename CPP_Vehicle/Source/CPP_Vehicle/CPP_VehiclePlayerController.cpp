// Copyright Epic Games, Inc. All Rights Reserved.


#include "CPP_VehiclePlayerController.h"
#include "CPP_VehiclePawn.h"
#include "CPP_VehicleUI.h"
#include "EnhancedInputSubsystems.h"
#include "ChaosWheeledVehicleMovementComponent.h"
#include "Blueprint/UserWidget.h"
#include "CPP_Vehicle.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/PlayerStart.h"
#include "Widgets/Input/SVirtualJoystick.h"

void ACPP_VehiclePlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	// only spawn UI on local player controllers
	if (IsLocalPlayerController())
	{
		if (SVirtualJoystick::ShouldDisplayTouchInterface())
		{
			// spawn the mobile controls widget
			MobileControlsWidget = CreateWidget<UUserWidget>(this, MobileControlsWidgetClass);

			if (MobileControlsWidget)
			{
				// add the controls to the player screen
				MobileControlsWidget->AddToPlayerScreen(0);

			} else {

				UE_LOG(LogCPP_Vehicle, Error, TEXT("Could not spawn mobile controls widget."));

			}
		}
		

		// spawn the UI widget and add it to the viewport
		VehicleUI = CreateWidget<UCPP_VehicleUI>(this, VehicleUIClass);

		if (VehicleUI)
		{
			VehicleUI->AddToViewport();

		} else {

			UE_LOG(LogCPP_Vehicle, Error, TEXT("Could not spawn vehicle UI widget."));

		}
	}
}

void ACPP_VehiclePlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	
	// only add IMCs for local player controllers
	if (IsLocalPlayerController())
	{
		// Add Input Mapping Contexts
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
		{
			for (UInputMappingContext* CurrentContext : DefaultMappingContexts)
			{
				Subsystem->AddMappingContext(CurrentContext, 0);
			}

			// only add these IMCs if we're not using mobile touch input
			if (!SVirtualJoystick::ShouldDisplayTouchInterface())
			{
				for (UInputMappingContext* CurrentContext : MobileExcludedMappingContexts)
				{
					Subsystem->AddMappingContext(CurrentContext, 0);
				}
			}
		}
	}
}

void ACPP_VehiclePlayerController::Tick(float Delta)
{
	Super::Tick(Delta);

	if (IsValid(VehiclePawn) && IsValid(VehicleUI))
	{
		VehicleUI->UpdateSpeed(VehiclePawn->GetChaosVehicleMovement()->GetForwardSpeed());
		VehicleUI->UpdateGear(VehiclePawn->GetChaosVehicleMovement()->GetCurrentGear());
	}
}

void ACPP_VehiclePlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	// get a pointer to the controlled pawn
	VehiclePawn = CastChecked<ACPP_VehiclePawn>(InPawn);

	// subscribe to the pawn's OnDestroyed delegate
	VehiclePawn->OnDestroyed.AddDynamic(this, &ACPP_VehiclePlayerController::OnPawnDestroyed);
}

void ACPP_VehiclePlayerController::OnPawnDestroyed(AActor* DestroyedPawn)
{
	// find the player start
	TArray<AActor*> ActorList;
	UGameplayStatics::GetAllActorsOfClass(GetWorld(), APlayerStart::StaticClass(), ActorList);

	if (ActorList.Num() > 0)
	{
		// spawn a vehicle at the player start
		const FTransform SpawnTransform = ActorList[0]->GetActorTransform();

		if (ACPP_VehiclePawn* RespawnedVehicle = GetWorld()->SpawnActor<ACPP_VehiclePawn>(VehiclePawnClass, SpawnTransform))
		{
			// possess the vehicle
			Possess(RespawnedVehicle);
		}
	}
}
