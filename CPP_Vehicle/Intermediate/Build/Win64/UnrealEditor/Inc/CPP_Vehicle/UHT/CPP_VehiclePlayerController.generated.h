// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CPP_VehiclePlayerController.h"

#ifdef CPP_VEHICLE_CPP_VehiclePlayerController_generated_h
#error "CPP_VehiclePlayerController.generated.h already included, missing '#pragma once' in CPP_VehiclePlayerController.h"
#endif
#define CPP_VEHICLE_CPP_VehiclePlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class ACPP_VehiclePlayerController *********************************************
#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehiclePlayerController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPawnDestroyed);


CPP_VEHICLE_API UClass* Z_Construct_UClass_ACPP_VehiclePlayerController_NoRegister();

#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehiclePlayerController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACPP_VehiclePlayerController(); \
	friend struct Z_Construct_UClass_ACPP_VehiclePlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CPP_VEHICLE_API UClass* Z_Construct_UClass_ACPP_VehiclePlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ACPP_VehiclePlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPP_Vehicle"), Z_Construct_UClass_ACPP_VehiclePlayerController_NoRegister) \
	DECLARE_SERIALIZER(ACPP_VehiclePlayerController)


#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehiclePlayerController_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACPP_VehiclePlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ACPP_VehiclePlayerController(ACPP_VehiclePlayerController&&) = delete; \
	ACPP_VehiclePlayerController(const ACPP_VehiclePlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACPP_VehiclePlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACPP_VehiclePlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACPP_VehiclePlayerController) \
	NO_API virtual ~ACPP_VehiclePlayerController();


#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehiclePlayerController_h_17_PROLOG
#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehiclePlayerController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehiclePlayerController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehiclePlayerController_h_20_INCLASS_NO_PURE_DECLS \
	FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehiclePlayerController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ACPP_VehiclePlayerController;

// ********** End Class ACPP_VehiclePlayerController ***********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehiclePlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
