// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPP_VehicleGameMode.h"
#include "CPP_VehiclePlayerController.h"

ACPP_VehicleGameMode::ACPP_VehicleGameMode()
{
	PlayerControllerClass = ACPP_VehiclePlayerController::StaticClass();
}
