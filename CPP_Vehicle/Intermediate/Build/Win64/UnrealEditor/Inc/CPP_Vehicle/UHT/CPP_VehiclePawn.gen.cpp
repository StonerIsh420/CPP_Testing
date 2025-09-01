// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_VehiclePawn.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_VehiclePawn() {}

// ********** Begin Cross Module References ********************************************************
CHAOSVEHICLES_API UClass* Z_Construct_UClass_AWheeledVehiclePawn();
CPP_VEHICLE_API UClass* Z_Construct_UClass_ACPP_VehiclePawn();
CPP_VEHICLE_API UClass* Z_Construct_UClass_ACPP_VehiclePawn_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
UPackage* Z_Construct_UPackage__Script_CPP_Vehicle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACPP_VehiclePawn Function BrakeLights ************************************
struct CPP_VehiclePawn_eventBrakeLights_Parms
{
	bool bBraking;
};
static FName NAME_ACPP_VehiclePawn_BrakeLights = FName(TEXT("BrakeLights"));
void ACPP_VehiclePawn::BrakeLights(bool bBraking)
{
	CPP_VehiclePawn_eventBrakeLights_Parms Parms;
	Parms.bBraking=bBraking ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_ACPP_VehiclePawn_BrakeLights);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_ACPP_VehiclePawn_BrakeLights_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called when the brake lights are turned on or off */" },
#endif
		{ "ModuleRelativePath", "CPP_VehiclePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the brake lights are turned on or off" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bBraking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bBraking;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACPP_VehiclePawn_BrakeLights_Statics::NewProp_bBraking_SetBit(void* Obj)
{
	((CPP_VehiclePawn_eventBrakeLights_Parms*)Obj)->bBraking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACPP_VehiclePawn_BrakeLights_Statics::NewProp_bBraking = { "bBraking", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CPP_VehiclePawn_eventBrakeLights_Parms), &Z_Construct_UFunction_ACPP_VehiclePawn_BrakeLights_Statics::NewProp_bBraking_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_VehiclePawn_BrakeLights_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_VehiclePawn_BrakeLights_Statics::NewProp_bBraking,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_VehiclePawn_BrakeLights_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_VehiclePawn_BrakeLights_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACPP_VehiclePawn, nullptr, "BrakeLights", Z_Construct_UFunction_ACPP_VehiclePawn_BrakeLights_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_VehiclePawn_BrakeLights_Statics::PropPointers), sizeof(CPP_VehiclePawn_eventBrakeLights_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_VehiclePawn_BrakeLights_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_VehiclePawn_BrakeLights_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CPP_VehiclePawn_eventBrakeLights_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_VehiclePawn_BrakeLights()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_VehiclePawn_BrakeLights_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class ACPP_VehiclePawn Function BrakeLights **************************************

// ********** Begin Class ACPP_VehiclePawn Function DoBrake ****************************************
struct Z_Construct_UFunction_ACPP_VehiclePawn_DoBrake_Statics
{
	struct CPP_VehiclePawn_eventDoBrake_Parms
	{
		float BrakeValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle brake input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "CPP_VehiclePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle brake input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BrakeValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACPP_VehiclePawn_DoBrake_Statics::NewProp_BrakeValue = { "BrakeValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_VehiclePawn_eventDoBrake_Parms, BrakeValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_VehiclePawn_DoBrake_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_VehiclePawn_DoBrake_Statics::NewProp_BrakeValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_VehiclePawn_DoBrake_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_VehiclePawn_DoBrake_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACPP_VehiclePawn, nullptr, "DoBrake", Z_Construct_UFunction_ACPP_VehiclePawn_DoBrake_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_VehiclePawn_DoBrake_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_VehiclePawn_DoBrake_Statics::CPP_VehiclePawn_eventDoBrake_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_VehiclePawn_DoBrake_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_VehiclePawn_DoBrake_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACPP_VehiclePawn_DoBrake_Statics::CPP_VehiclePawn_eventDoBrake_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_VehiclePawn_DoBrake()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_VehiclePawn_DoBrake_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_VehiclePawn::execDoBrake)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_BrakeValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoBrake(Z_Param_BrakeValue);
	P_NATIVE_END;
}
// ********** End Class ACPP_VehiclePawn Function DoBrake ******************************************

// ********** Begin Class ACPP_VehiclePawn Function DoBrakeStart ***********************************
struct Z_Construct_UFunction_ACPP_VehiclePawn_DoBrakeStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle brake start input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "CPP_VehiclePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle brake start input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_VehiclePawn_DoBrakeStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACPP_VehiclePawn, nullptr, "DoBrakeStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_VehiclePawn_DoBrakeStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_VehiclePawn_DoBrakeStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACPP_VehiclePawn_DoBrakeStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_VehiclePawn_DoBrakeStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_VehiclePawn::execDoBrakeStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoBrakeStart();
	P_NATIVE_END;
}
// ********** End Class ACPP_VehiclePawn Function DoBrakeStart *************************************

// ********** Begin Class ACPP_VehiclePawn Function DoBrakeStop ************************************
struct Z_Construct_UFunction_ACPP_VehiclePawn_DoBrakeStop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle brake stop input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "CPP_VehiclePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle brake stop input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_VehiclePawn_DoBrakeStop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACPP_VehiclePawn, nullptr, "DoBrakeStop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_VehiclePawn_DoBrakeStop_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_VehiclePawn_DoBrakeStop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACPP_VehiclePawn_DoBrakeStop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_VehiclePawn_DoBrakeStop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_VehiclePawn::execDoBrakeStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoBrakeStop();
	P_NATIVE_END;
}
// ********** End Class ACPP_VehiclePawn Function DoBrakeStop **************************************

// ********** Begin Class ACPP_VehiclePawn Function DoHandbrakeStart *******************************
struct Z_Construct_UFunction_ACPP_VehiclePawn_DoHandbrakeStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle handbrake start input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "CPP_VehiclePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle handbrake start input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_VehiclePawn_DoHandbrakeStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACPP_VehiclePawn, nullptr, "DoHandbrakeStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_VehiclePawn_DoHandbrakeStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_VehiclePawn_DoHandbrakeStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACPP_VehiclePawn_DoHandbrakeStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_VehiclePawn_DoHandbrakeStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_VehiclePawn::execDoHandbrakeStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoHandbrakeStart();
	P_NATIVE_END;
}
// ********** End Class ACPP_VehiclePawn Function DoHandbrakeStart *********************************

// ********** Begin Class ACPP_VehiclePawn Function DoHandbrakeStop ********************************
struct Z_Construct_UFunction_ACPP_VehiclePawn_DoHandbrakeStop_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle handbrake stop input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "CPP_VehiclePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle handbrake stop input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_VehiclePawn_DoHandbrakeStop_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACPP_VehiclePawn, nullptr, "DoHandbrakeStop", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_VehiclePawn_DoHandbrakeStop_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_VehiclePawn_DoHandbrakeStop_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACPP_VehiclePawn_DoHandbrakeStop()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_VehiclePawn_DoHandbrakeStop_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_VehiclePawn::execDoHandbrakeStop)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoHandbrakeStop();
	P_NATIVE_END;
}
// ********** End Class ACPP_VehiclePawn Function DoHandbrakeStop **********************************

// ********** Begin Class ACPP_VehiclePawn Function DoLookAround ***********************************
struct Z_Construct_UFunction_ACPP_VehiclePawn_DoLookAround_Statics
{
	struct CPP_VehiclePawn_eventDoLookAround_Parms
	{
		float YawDelta;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle look input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "CPP_VehiclePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle look input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_YawDelta;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACPP_VehiclePawn_DoLookAround_Statics::NewProp_YawDelta = { "YawDelta", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_VehiclePawn_eventDoLookAround_Parms, YawDelta), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_VehiclePawn_DoLookAround_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_VehiclePawn_DoLookAround_Statics::NewProp_YawDelta,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_VehiclePawn_DoLookAround_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_VehiclePawn_DoLookAround_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACPP_VehiclePawn, nullptr, "DoLookAround", Z_Construct_UFunction_ACPP_VehiclePawn_DoLookAround_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_VehiclePawn_DoLookAround_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_VehiclePawn_DoLookAround_Statics::CPP_VehiclePawn_eventDoLookAround_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_VehiclePawn_DoLookAround_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_VehiclePawn_DoLookAround_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACPP_VehiclePawn_DoLookAround_Statics::CPP_VehiclePawn_eventDoLookAround_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_VehiclePawn_DoLookAround()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_VehiclePawn_DoLookAround_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_VehiclePawn::execDoLookAround)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_YawDelta);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoLookAround(Z_Param_YawDelta);
	P_NATIVE_END;
}
// ********** End Class ACPP_VehiclePawn Function DoLookAround *************************************

// ********** Begin Class ACPP_VehiclePawn Function DoResetVehicle *********************************
struct Z_Construct_UFunction_ACPP_VehiclePawn_DoResetVehicle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle reset vehicle input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "CPP_VehiclePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle reset vehicle input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_VehiclePawn_DoResetVehicle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACPP_VehiclePawn, nullptr, "DoResetVehicle", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_VehiclePawn_DoResetVehicle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_VehiclePawn_DoResetVehicle_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACPP_VehiclePawn_DoResetVehicle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_VehiclePawn_DoResetVehicle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_VehiclePawn::execDoResetVehicle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoResetVehicle();
	P_NATIVE_END;
}
// ********** End Class ACPP_VehiclePawn Function DoResetVehicle ***********************************

// ********** Begin Class ACPP_VehiclePawn Function DoSteering *************************************
struct Z_Construct_UFunction_ACPP_VehiclePawn_DoSteering_Statics
{
	struct CPP_VehiclePawn_eventDoSteering_Parms
	{
		float SteeringValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle steering input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "CPP_VehiclePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle steering input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SteeringValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACPP_VehiclePawn_DoSteering_Statics::NewProp_SteeringValue = { "SteeringValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_VehiclePawn_eventDoSteering_Parms, SteeringValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_VehiclePawn_DoSteering_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_VehiclePawn_DoSteering_Statics::NewProp_SteeringValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_VehiclePawn_DoSteering_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_VehiclePawn_DoSteering_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACPP_VehiclePawn, nullptr, "DoSteering", Z_Construct_UFunction_ACPP_VehiclePawn_DoSteering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_VehiclePawn_DoSteering_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_VehiclePawn_DoSteering_Statics::CPP_VehiclePawn_eventDoSteering_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_VehiclePawn_DoSteering_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_VehiclePawn_DoSteering_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACPP_VehiclePawn_DoSteering_Statics::CPP_VehiclePawn_eventDoSteering_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_VehiclePawn_DoSteering()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_VehiclePawn_DoSteering_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_VehiclePawn::execDoSteering)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_SteeringValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoSteering(Z_Param_SteeringValue);
	P_NATIVE_END;
}
// ********** End Class ACPP_VehiclePawn Function DoSteering ***************************************

// ********** Begin Class ACPP_VehiclePawn Function DoThrottle *************************************
struct Z_Construct_UFunction_ACPP_VehiclePawn_DoThrottle_Statics
{
	struct CPP_VehiclePawn_eventDoThrottle_Parms
	{
		float ThrottleValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle throttle input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "CPP_VehiclePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle throttle input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ThrottleValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACPP_VehiclePawn_DoThrottle_Statics::NewProp_ThrottleValue = { "ThrottleValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_VehiclePawn_eventDoThrottle_Parms, ThrottleValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_VehiclePawn_DoThrottle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_VehiclePawn_DoThrottle_Statics::NewProp_ThrottleValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_VehiclePawn_DoThrottle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_VehiclePawn_DoThrottle_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACPP_VehiclePawn, nullptr, "DoThrottle", Z_Construct_UFunction_ACPP_VehiclePawn_DoThrottle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_VehiclePawn_DoThrottle_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACPP_VehiclePawn_DoThrottle_Statics::CPP_VehiclePawn_eventDoThrottle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_VehiclePawn_DoThrottle_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_VehiclePawn_DoThrottle_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ACPP_VehiclePawn_DoThrottle_Statics::CPP_VehiclePawn_eventDoThrottle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACPP_VehiclePawn_DoThrottle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_VehiclePawn_DoThrottle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_VehiclePawn::execDoThrottle)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_ThrottleValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoThrottle(Z_Param_ThrottleValue);
	P_NATIVE_END;
}
// ********** End Class ACPP_VehiclePawn Function DoThrottle ***************************************

// ********** Begin Class ACPP_VehiclePawn Function DoToggleCamera *********************************
struct Z_Construct_UFunction_ACPP_VehiclePawn_DoToggleCamera_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handle toggle camera input by input actions or mobile interface */" },
#endif
		{ "ModuleRelativePath", "CPP_VehiclePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handle toggle camera input by input actions or mobile interface" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_VehiclePawn_DoToggleCamera_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ACPP_VehiclePawn, nullptr, "DoToggleCamera", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_VehiclePawn_DoToggleCamera_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACPP_VehiclePawn_DoToggleCamera_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ACPP_VehiclePawn_DoToggleCamera()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_VehiclePawn_DoToggleCamera_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACPP_VehiclePawn::execDoToggleCamera)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoToggleCamera();
	P_NATIVE_END;
}
// ********** End Class ACPP_VehiclePawn Function DoToggleCamera ***********************************

// ********** Begin Class ACPP_VehiclePawn *********************************************************
void ACPP_VehiclePawn::StaticRegisterNativesACPP_VehiclePawn()
{
	UClass* Class = ACPP_VehiclePawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoBrake", &ACPP_VehiclePawn::execDoBrake },
		{ "DoBrakeStart", &ACPP_VehiclePawn::execDoBrakeStart },
		{ "DoBrakeStop", &ACPP_VehiclePawn::execDoBrakeStop },
		{ "DoHandbrakeStart", &ACPP_VehiclePawn::execDoHandbrakeStart },
		{ "DoHandbrakeStop", &ACPP_VehiclePawn::execDoHandbrakeStop },
		{ "DoLookAround", &ACPP_VehiclePawn::execDoLookAround },
		{ "DoResetVehicle", &ACPP_VehiclePawn::execDoResetVehicle },
		{ "DoSteering", &ACPP_VehiclePawn::execDoSteering },
		{ "DoThrottle", &ACPP_VehiclePawn::execDoThrottle },
		{ "DoToggleCamera", &ACPP_VehiclePawn::execDoToggleCamera },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACPP_VehiclePawn;
UClass* ACPP_VehiclePawn::GetPrivateStaticClass()
{
	using TClass = ACPP_VehiclePawn;
	if (!Z_Registration_Info_UClass_ACPP_VehiclePawn.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_VehiclePawn"),
			Z_Registration_Info_UClass_ACPP_VehiclePawn.InnerSingleton,
			StaticRegisterNativesACPP_VehiclePawn,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_ACPP_VehiclePawn.InnerSingleton;
}
UClass* Z_Construct_UClass_ACPP_VehiclePawn_NoRegister()
{
	return ACPP_VehiclePawn::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACPP_VehiclePawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Vehicle Pawn class\n *  Handles common functionality for all vehicle types,\n *  including input handling and camera management.\n *  \n *  Specific vehicle configurations are handled in subclasses.\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CPP_VehiclePawn.h" },
		{ "ModuleRelativePath", "CPP_VehiclePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vehicle Pawn class\nHandles common functionality for all vehicle types,\nincluding input handling and camera management.\n\nSpecific vehicle configurations are handled in subclasses." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontSpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spring Arm for the front camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_VehiclePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spring Arm for the front camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FrontCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Front Camera component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_VehiclePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Front Camera component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackSpringArm_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Spring Arm for the back camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_VehiclePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Spring Arm for the back camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Back Camera component */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_VehiclePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Back Camera component" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Steering Action */" },
#endif
		{ "ModuleRelativePath", "CPP_VehiclePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Steering Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ThrottleAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Throttle Action */" },
#endif
		{ "ModuleRelativePath", "CPP_VehiclePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Throttle Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BrakeAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Brake Action */" },
#endif
		{ "ModuleRelativePath", "CPP_VehiclePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Brake Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HandbrakeAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handbrake Action */" },
#endif
		{ "ModuleRelativePath", "CPP_VehiclePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handbrake Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAroundAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look Around Action */" },
#endif
		{ "ModuleRelativePath", "CPP_VehiclePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look Around Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToggleCameraAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Toggle Camera Action */" },
#endif
		{ "ModuleRelativePath", "CPP_VehiclePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggle Camera Action" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResetVehicleAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Reset Vehicle Action */" },
#endif
		{ "ModuleRelativePath", "CPP_VehiclePawn.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reset Vehicle Action" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontSpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FrontCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackSpringArm;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackCamera;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SteeringAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ThrottleAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BrakeAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HandbrakeAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAroundAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToggleCameraAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ResetVehicleAction;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_VehiclePawn_BrakeLights, "BrakeLights" }, // 2351042901
		{ &Z_Construct_UFunction_ACPP_VehiclePawn_DoBrake, "DoBrake" }, // 524723653
		{ &Z_Construct_UFunction_ACPP_VehiclePawn_DoBrakeStart, "DoBrakeStart" }, // 4067375066
		{ &Z_Construct_UFunction_ACPP_VehiclePawn_DoBrakeStop, "DoBrakeStop" }, // 3783849923
		{ &Z_Construct_UFunction_ACPP_VehiclePawn_DoHandbrakeStart, "DoHandbrakeStart" }, // 4101017136
		{ &Z_Construct_UFunction_ACPP_VehiclePawn_DoHandbrakeStop, "DoHandbrakeStop" }, // 3741955696
		{ &Z_Construct_UFunction_ACPP_VehiclePawn_DoLookAround, "DoLookAround" }, // 2266492511
		{ &Z_Construct_UFunction_ACPP_VehiclePawn_DoResetVehicle, "DoResetVehicle" }, // 3849260214
		{ &Z_Construct_UFunction_ACPP_VehiclePawn_DoSteering, "DoSteering" }, // 1071062245
		{ &Z_Construct_UFunction_ACPP_VehiclePawn_DoThrottle, "DoThrottle" }, // 3811195697
		{ &Z_Construct_UFunction_ACPP_VehiclePawn_DoToggleCamera, "DoToggleCamera" }, // 1974559301
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_VehiclePawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_VehiclePawn_Statics::NewProp_FrontSpringArm = { "FrontSpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_VehiclePawn, FrontSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontSpringArm_MetaData), NewProp_FrontSpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_VehiclePawn_Statics::NewProp_FrontCamera = { "FrontCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_VehiclePawn, FrontCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FrontCamera_MetaData), NewProp_FrontCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_VehiclePawn_Statics::NewProp_BackSpringArm = { "BackSpringArm", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_VehiclePawn, BackSpringArm), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackSpringArm_MetaData), NewProp_BackSpringArm_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_VehiclePawn_Statics::NewProp_BackCamera = { "BackCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_VehiclePawn, BackCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackCamera_MetaData), NewProp_BackCamera_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_VehiclePawn_Statics::NewProp_SteeringAction = { "SteeringAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_VehiclePawn, SteeringAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringAction_MetaData), NewProp_SteeringAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_VehiclePawn_Statics::NewProp_ThrottleAction = { "ThrottleAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_VehiclePawn, ThrottleAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ThrottleAction_MetaData), NewProp_ThrottleAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_VehiclePawn_Statics::NewProp_BrakeAction = { "BrakeAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_VehiclePawn, BrakeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BrakeAction_MetaData), NewProp_BrakeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_VehiclePawn_Statics::NewProp_HandbrakeAction = { "HandbrakeAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_VehiclePawn, HandbrakeAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HandbrakeAction_MetaData), NewProp_HandbrakeAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_VehiclePawn_Statics::NewProp_LookAroundAction = { "LookAroundAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_VehiclePawn, LookAroundAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAroundAction_MetaData), NewProp_LookAroundAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_VehiclePawn_Statics::NewProp_ToggleCameraAction = { "ToggleCameraAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_VehiclePawn, ToggleCameraAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToggleCameraAction_MetaData), NewProp_ToggleCameraAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_VehiclePawn_Statics::NewProp_ResetVehicleAction = { "ResetVehicleAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_VehiclePawn, ResetVehicleAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResetVehicleAction_MetaData), NewProp_ResetVehicleAction_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_VehiclePawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_VehiclePawn_Statics::NewProp_FrontSpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_VehiclePawn_Statics::NewProp_FrontCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_VehiclePawn_Statics::NewProp_BackSpringArm,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_VehiclePawn_Statics::NewProp_BackCamera,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_VehiclePawn_Statics::NewProp_SteeringAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_VehiclePawn_Statics::NewProp_ThrottleAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_VehiclePawn_Statics::NewProp_BrakeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_VehiclePawn_Statics::NewProp_HandbrakeAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_VehiclePawn_Statics::NewProp_LookAroundAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_VehiclePawn_Statics::NewProp_ToggleCameraAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_VehiclePawn_Statics::NewProp_ResetVehicleAction,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_VehiclePawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACPP_VehiclePawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AWheeledVehiclePawn,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_Vehicle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_VehiclePawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_VehiclePawn_Statics::ClassParams = {
	&ACPP_VehiclePawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACPP_VehiclePawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_VehiclePawn_Statics::PropPointers),
	0,
	0x008001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_VehiclePawn_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_VehiclePawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_VehiclePawn()
{
	if (!Z_Registration_Info_UClass_ACPP_VehiclePawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_VehiclePawn.OuterSingleton, Z_Construct_UClass_ACPP_VehiclePawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_VehiclePawn.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_VehiclePawn);
ACPP_VehiclePawn::~ACPP_VehiclePawn() {}
// ********** End Class ACPP_VehiclePawn ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehiclePawn_h__Script_CPP_Vehicle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_VehiclePawn, ACPP_VehiclePawn::StaticClass, TEXT("ACPP_VehiclePawn"), &Z_Registration_Info_UClass_ACPP_VehiclePawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_VehiclePawn), 1466568904U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehiclePawn_h__Script_CPP_Vehicle_970447908(TEXT("/Script/CPP_Vehicle"),
	Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehiclePawn_h__Script_CPP_Vehicle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehiclePawn_h__Script_CPP_Vehicle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
