// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPP_VehicleWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UCPP_VehicleWheelRear::UCPP_VehicleWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}