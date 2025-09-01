// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Variant_TimeTrial/UI/TimeTrialStartUI.h"

#ifdef CPP_VEHICLE_TimeTrialStartUI_generated_h
#error "TimeTrialStartUI.generated.h already included, missing '#pragma once' in TimeTrialStartUI.h"
#endif
#define CPP_VEHICLE_TimeTrialStartUI_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Delegate FCountdownFinishedDelegate ********************************************
#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialStartUI_h_9_DELEGATE \
CPP_VEHICLE_API void FCountdownFinishedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CountdownFinishedDelegate);


// ********** End Delegate FCountdownFinishedDelegate **********************************************

// ********** Begin Class UTimeTrialStartUI ********************************************************
#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialStartUI_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execFinishCountdown);


#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialStartUI_h_19_CALLBACK_WRAPPERS
CPP_VEHICLE_API UClass* Z_Construct_UClass_UTimeTrialStartUI_NoRegister();

#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialStartUI_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimeTrialStartUI(); \
	friend struct Z_Construct_UClass_UTimeTrialStartUI_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend CPP_VEHICLE_API UClass* Z_Construct_UClass_UTimeTrialStartUI_NoRegister(); \
public: \
	DECLARE_CLASS2(UTimeTrialStartUI, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/CPP_Vehicle"), Z_Construct_UClass_UTimeTrialStartUI_NoRegister) \
	DECLARE_SERIALIZER(UTimeTrialStartUI)


#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialStartUI_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimeTrialStartUI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTimeTrialStartUI(UTimeTrialStartUI&&) = delete; \
	UTimeTrialStartUI(const UTimeTrialStartUI&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeTrialStartUI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeTrialStartUI); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTimeTrialStartUI) \
	NO_API virtual ~UTimeTrialStartUI();


#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialStartUI_h_16_PROLOG
#define FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialStartUI_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialStartUI_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialStartUI_h_19_CALLBACK_WRAPPERS \
	FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialStartUI_h_19_INCLASS_NO_PURE_DECLS \
	FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialStartUI_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTimeTrialStartUI;

// ********** End Class UTimeTrialStartUI **********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialStartUI_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
