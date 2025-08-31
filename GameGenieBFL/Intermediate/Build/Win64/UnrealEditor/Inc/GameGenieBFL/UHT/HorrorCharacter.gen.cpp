// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "HorrorCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeHorrorCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_USpotLightComponent_NoRegister();
GAMEGENIEBFL_API UClass* Z_Construct_UClass_AGameGenieBFLCharacter();
GAMEGENIEBFL_API UClass* Z_Construct_UClass_AHorrorCharacter();
GAMEGENIEBFL_API UClass* Z_Construct_UClass_AHorrorCharacter_NoRegister();
GAMEGENIEBFL_API UFunction* Z_Construct_UDelegateFunction_GameGenieBFL_SprintStateChangedDelegate__DelegateSignature();
GAMEGENIEBFL_API UFunction* Z_Construct_UDelegateFunction_GameGenieBFL_UpdateSprintMeterDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GameGenieBFL();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FUpdateSprintMeterDelegate ********************************************
struct Z_Construct_UDelegateFunction_GameGenieBFL_UpdateSprintMeterDelegate__DelegateSignature_Statics
{
	struct _Script_GameGenieBFL_eventUpdateSprintMeterDelegate_Parms
	{
		float Percentage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Variant_Horror/HorrorCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percentage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_GameGenieBFL_UpdateSprintMeterDelegate__DelegateSignature_Statics::NewProp_Percentage = { "Percentage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_GameGenieBFL_eventUpdateSprintMeterDelegate_Parms, Percentage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameGenieBFL_UpdateSprintMeterDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameGenieBFL_UpdateSprintMeterDelegate__DelegateSignature_Statics::NewProp_Percentage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameGenieBFL_UpdateSprintMeterDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_GameGenieBFL_UpdateSprintMeterDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_GameGenieBFL, nullptr, "UpdateSprintMeterDelegate__DelegateSignature", Z_Construct_UDelegateFunction_GameGenieBFL_UpdateSprintMeterDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameGenieBFL_UpdateSprintMeterDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameGenieBFL_UpdateSprintMeterDelegate__DelegateSignature_Statics::_Script_GameGenieBFL_eventUpdateSprintMeterDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameGenieBFL_UpdateSprintMeterDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameGenieBFL_UpdateSprintMeterDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_GameGenieBFL_UpdateSprintMeterDelegate__DelegateSignature_Statics::_Script_GameGenieBFL_eventUpdateSprintMeterDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GameGenieBFL_UpdateSprintMeterDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameGenieBFL_UpdateSprintMeterDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FUpdateSprintMeterDelegate_DelegateWrapper(const FMulticastScriptDelegate& UpdateSprintMeterDelegate, float Percentage)
{
	struct _Script_GameGenieBFL_eventUpdateSprintMeterDelegate_Parms
	{
		float Percentage;
	};
	_Script_GameGenieBFL_eventUpdateSprintMeterDelegate_Parms Parms;
	Parms.Percentage=Percentage;
	UpdateSprintMeterDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FUpdateSprintMeterDelegate **********************************************

// ********** Begin Delegate FSprintStateChangedDelegate *******************************************
struct Z_Construct_UDelegateFunction_GameGenieBFL_SprintStateChangedDelegate__DelegateSignature_Statics
{
	struct _Script_GameGenieBFL_eventSprintStateChangedDelegate_Parms
	{
		bool bSprinting;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Variant_Horror/HorrorCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSprinting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSprinting;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_GameGenieBFL_SprintStateChangedDelegate__DelegateSignature_Statics::NewProp_bSprinting_SetBit(void* Obj)
{
	((_Script_GameGenieBFL_eventSprintStateChangedDelegate_Parms*)Obj)->bSprinting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_GameGenieBFL_SprintStateChangedDelegate__DelegateSignature_Statics::NewProp_bSprinting = { "bSprinting", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_GameGenieBFL_eventSprintStateChangedDelegate_Parms), &Z_Construct_UDelegateFunction_GameGenieBFL_SprintStateChangedDelegate__DelegateSignature_Statics::NewProp_bSprinting_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_GameGenieBFL_SprintStateChangedDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_GameGenieBFL_SprintStateChangedDelegate__DelegateSignature_Statics::NewProp_bSprinting,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameGenieBFL_SprintStateChangedDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_GameGenieBFL_SprintStateChangedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_GameGenieBFL, nullptr, "SprintStateChangedDelegate__DelegateSignature", Z_Construct_UDelegateFunction_GameGenieBFL_SprintStateChangedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameGenieBFL_SprintStateChangedDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_GameGenieBFL_SprintStateChangedDelegate__DelegateSignature_Statics::_Script_GameGenieBFL_eventSprintStateChangedDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameGenieBFL_SprintStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameGenieBFL_SprintStateChangedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UDelegateFunction_GameGenieBFL_SprintStateChangedDelegate__DelegateSignature_Statics::_Script_GameGenieBFL_eventSprintStateChangedDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_GameGenieBFL_SprintStateChangedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameGenieBFL_SprintStateChangedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSprintStateChangedDelegate_DelegateWrapper(const FMulticastScriptDelegate& SprintStateChangedDelegate, bool bSprinting)
{
	struct _Script_GameGenieBFL_eventSprintStateChangedDelegate_Parms
	{
		bool bSprinting;
	};
	_Script_GameGenieBFL_eventSprintStateChangedDelegate_Parms Parms;
	Parms.bSprinting=bSprinting ? true : false;
	SprintStateChangedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// ********** End Delegate FSprintStateChangedDelegate *********************************************

// ********** Begin Class AHorrorCharacter *********************************************************
void AHorrorCharacter::StaticRegisterNativesAHorrorCharacter()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AHorrorCharacter;
UClass* AHorrorCharacter::GetPrivateStaticClass()
{
	using TClass = AHorrorCharacter;
	if (!Z_Registration_Info_UClass_AHorrorCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("HorrorCharacter"),
			Z_Registration_Info_UClass_AHorrorCharacter.InnerSingleton,
			StaticRegisterNativesAHorrorCharacter,
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
	return Z_Registration_Info_UClass_AHorrorCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AHorrorCharacter_NoRegister()
{
	return AHorrorCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AHorrorCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Simple first-person horror character:\n * - Uses base character sprint/crouch, pitch clamp, etc.\n * - Adds stamina-based sprint gating + UI delegates.\n * NOTE: Do NOT duplicate properties that exist in AGameGenieBFLCharacter (no shadowing).\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Variant_Horror/HorrorCharacter.h" },
		{ "ModuleRelativePath", "Variant_Horror/HorrorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple first-person horror character:\n- Uses base character sprint/crouch, pitch clamp, etc.\n- Adds stamina-based sprint gating + UI delegates.\nNOTE: Do NOT duplicate properties that exist in AGameGenieBFLCharacter (no shadowing)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpotLight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Player light source mounted on the FP camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_Horror/HorrorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player light source mounted on the FP camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSprintMeterUpdated_MetaData[] = {
		{ "Category", "Sprint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate fired with normalized [0..1] stamina after each fixed tick */" },
#endif
		{ "ModuleRelativePath", "Variant_Horror/HorrorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate fired with normalized [0..1] stamina after each fixed tick" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSprintStateChanged_MetaData[] = {
		{ "Category", "Sprint" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Delegate fired when sprint state flips (pressed/released or forced stop) */" },
#endif
		{ "ModuleRelativePath", "Variant_Horror/HorrorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Delegate fired when sprint state flips (pressed/released or forced stop)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintFixedTickTime_MetaData[] = {
		{ "Category", "Sprint" },
		{ "ClampMax", "0.5" },
		{ "ClampMin", "0.01" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Fixed tick interval for stamina sim (seconds) */" },
#endif
		{ "ModuleRelativePath", "Variant_Horror/HorrorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Fixed tick interval for stamina sim (seconds)" },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintTime_MetaData[] = {
		{ "Category", "Sprint" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Max stamina duration while sprinting (seconds) */" },
#endif
		{ "ModuleRelativePath", "Variant_Horror/HorrorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Max stamina duration while sprinting (seconds)" },
#endif
		{ "Units", "s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoveringWalkSpeed_MetaData[] = {
		{ "Category", "Recovery" },
		{ "ClampMax", "600.0" },
		{ "ClampMin", "50.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Walk speed while recovering stamina (cm/s) */" },
#endif
		{ "ModuleRelativePath", "Variant_Horror/HorrorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Walk speed while recovering stamina (cm/s)" },
#endif
		{ "Units", "cm/s" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RecoveryTime_MetaData[] = {
		{ "Category", "Recovery" },
		{ "ClampMax", "10.0" },
		{ "ClampMin", "0.0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** (Optional) Time to fully recover from 0\xe2\x86\x92""full (unused in fixed-step model; reserved for future curve-based recovery) */" },
#endif
		{ "ModuleRelativePath", "Variant_Horror/HorrorCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "(Optional) Time to fully recover from 0\xe2\x86\x92""full (unused in fixed-step model; reserved for future curve-based recovery)" },
#endif
		{ "Units", "s" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpotLight;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSprintMeterUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSprintStateChanged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintFixedTickTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoveringWalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RecoveryTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHorrorCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_SpotLight = { "SpotLight", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHorrorCharacter, SpotLight), Z_Construct_UClass_USpotLightComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpotLight_MetaData), NewProp_SpotLight_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_OnSprintMeterUpdated = { "OnSprintMeterUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHorrorCharacter, OnSprintMeterUpdated), Z_Construct_UDelegateFunction_GameGenieBFL_UpdateSprintMeterDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSprintMeterUpdated_MetaData), NewProp_OnSprintMeterUpdated_MetaData) }; // 1742315565
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_OnSprintStateChanged = { "OnSprintStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHorrorCharacter, OnSprintStateChanged), Z_Construct_UDelegateFunction_GameGenieBFL_SprintStateChangedDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSprintStateChanged_MetaData), NewProp_OnSprintStateChanged_MetaData) }; // 157777719
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_SprintFixedTickTime = { "SprintFixedTickTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHorrorCharacter, SprintFixedTickTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintFixedTickTime_MetaData), NewProp_SprintFixedTickTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_SprintTime = { "SprintTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHorrorCharacter, SprintTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintTime_MetaData), NewProp_SprintTime_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_RecoveringWalkSpeed = { "RecoveringWalkSpeed", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHorrorCharacter, RecoveringWalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoveringWalkSpeed_MetaData), NewProp_RecoveringWalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_RecoveryTime = { "RecoveryTime", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AHorrorCharacter, RecoveryTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RecoveryTime_MetaData), NewProp_RecoveryTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHorrorCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_SpotLight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_OnSprintMeterUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_OnSprintStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_SprintFixedTickTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_SprintTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_RecoveringWalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHorrorCharacter_Statics::NewProp_RecoveryTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHorrorCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AHorrorCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameGenieBFLCharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_GameGenieBFL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AHorrorCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AHorrorCharacter_Statics::ClassParams = {
	&AHorrorCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AHorrorCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AHorrorCharacter_Statics::PropPointers),
	0,
	0x009001A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AHorrorCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AHorrorCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AHorrorCharacter()
{
	if (!Z_Registration_Info_UClass_AHorrorCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHorrorCharacter.OuterSingleton, Z_Construct_UClass_AHorrorCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AHorrorCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AHorrorCharacter);
AHorrorCharacter::~AHorrorCharacter() {}
// ********** End Class AHorrorCharacter ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_Variant_Horror_HorrorCharacter_h__Script_GameGenieBFL_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AHorrorCharacter, AHorrorCharacter::StaticClass, TEXT("AHorrorCharacter"), &Z_Registration_Info_UClass_AHorrorCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHorrorCharacter), 1734787648U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_Variant_Horror_HorrorCharacter_h__Script_GameGenieBFL_144172891(TEXT("/Script/GameGenieBFL"),
	Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_Variant_Horror_HorrorCharacter_h__Script_GameGenieBFL_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_Variant_Horror_HorrorCharacter_h__Script_GameGenieBFL_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
