// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_TimeTrial/TimeTrialPlayerController.h"

#ifdef CPP_VEHICLE_TimeTrialPlayerController_generated_h
#error "TimeTrialPlayerController.generated.h already included, missing '#pragma once' in TimeTrialPlayerController.h"
#endif
#define CPP_VEHICLE_TimeTrialPlayerController_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;

// ********** Begin Class ATimeTrialPlayerController ***********************************************
#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_TimeTrialPlayerController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnPawnDestroyed); \
	DECLARE_FUNCTION(execStartRace);


CPP_VEHICLE_API UClass* Z_Construct_UClass_ATimeTrialPlayerController_NoRegister();

#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_TimeTrialPlayerController_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATimeTrialPlayerController(); \
	friend struct Z_Construct_UClass_ATimeTrialPlayerController_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CPP_VEHICLE_API UClass* Z_Construct_UClass_ATimeTrialPlayerController_NoRegister(); \
public: \
	DECLARE_CLASS2(ATimeTrialPlayerController, APlayerController, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/CPP_Vehicle"), Z_Construct_UClass_ATimeTrialPlayerController_NoRegister) \
	DECLARE_SERIALIZER(ATimeTrialPlayerController)


#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_TimeTrialPlayerController_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATimeTrialPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	ATimeTrialPlayerController(ATimeTrialPlayerController&&) = delete; \
	ATimeTrialPlayerController(const ATimeTrialPlayerController&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATimeTrialPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATimeTrialPlayerController); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATimeTrialPlayerController) \
	NO_API virtual ~ATimeTrialPlayerController();


#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_TimeTrialPlayerController_h_18_PROLOG
#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_TimeTrialPlayerController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_TimeTrialPlayerController_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_TimeTrialPlayerController_h_21_INCLASS_NO_PURE_DECLS \
	FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_TimeTrialPlayerController_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class ATimeTrialPlayerController;

// ********** End Class ATimeTrialPlayerController *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_TimeTrialPlayerController_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
