// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPP_VehiclePawn.h"

#ifdef CPP_VEHICLE_CPP_VehiclePawn_generated_h
#error "CPP_VehiclePawn.generated.h already included, missing '#pragma once' in CPP_VehiclePawn.h"
#endif
#define CPP_VEHICLE_CPP_VehiclePawn_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class ACPP_VehiclePawn *********************************************************
#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehiclePawn_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDoResetVehicle); \
	DECLARE_FUNCTION(execDoToggleCamera); \
	DECLARE_FUNCTION(execDoLookAround); \
	DECLARE_FUNCTION(execDoHandbrakeStop); \
	DECLARE_FUNCTION(execDoHandbrakeStart); \
	DECLARE_FUNCTION(execDoBrakeStop); \
	DECLARE_FUNCTION(execDoBrakeStart); \
	DECLARE_FUNCTION(execDoBrake); \
	DECLARE_FUNCTION(execDoThrottle); \
	DECLARE_FUNCTION(execDoSteering);


#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehiclePawn_h_25_CALLBACK_WRAPPERS
CPP_VEHICLE_API UClass* Z_Construct_UClass_ACPP_VehiclePawn_NoRegister();

#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehiclePawn_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPP_VehiclePawn(); \
	friend struct Z_Construct_UClass_ACPP_VehiclePawn_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CPP_VEHICLE_API UClass* Z_Construct_UClass_ACPP_VehiclePawn_NoRegister(); \
public: \
	DECLARE_CLASS2(ACPP_VehiclePawn, AWheeledVehiclePawn, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPP_Vehicle"), Z_Construct_UClass_ACPP_VehiclePawn_NoRegister) \
	DECLARE_SERIALIZER(ACPP_VehiclePawn)


#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehiclePawn_h_25_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACPP_VehiclePawn(ACPP_VehiclePawn&&) = delete; \
	ACPP_VehiclePawn(const ACPP_VehiclePawn&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_VehiclePawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_VehiclePawn); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(ACPP_VehiclePawn) \
	NO_API virtual ~ACPP_VehiclePawn();


#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehiclePawn_h_22_PROLOG
#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehiclePawn_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehiclePawn_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehiclePawn_h_25_CALLBACK_WRAPPERS \
	FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehiclePawn_h_25_INCLASS_NO_PURE_DECLS \
	FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehiclePawn_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACPP_VehiclePawn;

// ********** End Class ACPP_VehiclePawn ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehiclePawn_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
