// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_TimeTrial/UI/TimeTrialUI.h"

#ifdef CPP_VEHICLE_TimeTrialUI_generated_h
#error "TimeTrialUI.generated.h already included, missing '#pragma once' in TimeTrialUI.h"
#endif
#define CPP_VEHICLE_TimeTrialUI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FStartRaceDelegate ****************************************************
#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialUI_h_11_DELEGATE \
CPP_VEHICLE_API void FStartRaceDelegate_DelegateWrapper(const FMulticastScriptDelegate& StartRaceDelegate);


// ********** End Delegate FStartRaceDelegate ******************************************************

// ********** Begin Class UTimeTrialUI *************************************************************
#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialUI_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetLapStartTime); \
	DECLARE_FUNCTION(execGetBestLapTime); \
	DECLARE_FUNCTION(execGetCurrentLap); \
	DECLARE_FUNCTION(execStartRace);


#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialUI_h_21_CALLBACK_WRAPPERS
CPP_VEHICLE_API UClass* Z_Construct_UClass_UTimeTrialUI_NoRegister();

#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialUI_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimeTrialUI(); \
	friend struct Z_Construct_UClass_UTimeTrialUI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CPP_VEHICLE_API UClass* Z_Construct_UClass_UTimeTrialUI_NoRegister(); \
public: \
	DECLARE_CLASS2(UTimeTrialUI, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CPP_Vehicle"), Z_Construct_UClass_UTimeTrialUI_NoRegister) \
	DECLARE_SERIALIZER(UTimeTrialUI)


#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialUI_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimeTrialUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTimeTrialUI(UTimeTrialUI&&) = delete; \
	UTimeTrialUI(const UTimeTrialUI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeTrialUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeTrialUI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimeTrialUI) \
	NO_API virtual ~UTimeTrialUI();


#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialUI_h_18_PROLOG
#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialUI_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialUI_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialUI_h_21_CALLBACK_WRAPPERS \
	FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialUI_h_21_INCLASS_NO_PURE_DECLS \
	FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialUI_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTimeTrialUI;

// ********** End Class UTimeTrialUI ***************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialUI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
