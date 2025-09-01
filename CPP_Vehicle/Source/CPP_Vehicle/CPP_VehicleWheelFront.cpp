// Copyright Epic Games, Inc. All Rights Reserved.

#include "CPP_VehicleWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UCPP_VehicleWheelFront::UCPP_VehicleWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}