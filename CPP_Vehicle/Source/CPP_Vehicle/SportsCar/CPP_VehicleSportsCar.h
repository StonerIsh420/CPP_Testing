// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "CPP_VehiclePawn.h"
#include "CPP_VehicleSportsCar.generated.h"

/**
 *  Sports car wheeled vehicle implementation
 */
UCLASS(abstract)
class ACPP_VehicleSportsCar : public ACPP_VehiclePawn
{
	GENERATED_BODY()
	
public:

	ACPP_VehicleSportsCar();
};
