// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Core/GGDeveloperSettings.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGGDeveloperSettings() {}

// ********** Begin Cross Module References ********************************************************
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
GAMEGENIEBFLRUNTIME_API UClass* Z_Construct_UClass_UGGDeveloperSettings();
GAMEGENIEBFLRUNTIME_API UClass* Z_Construct_UClass_UGGDeveloperSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameGenieBFLRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UGGDeveloperSettings *****************************************************
void UGGDeveloperSettings::StaticRegisterNativesUGGDeveloperSettings()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGGDeveloperSettings;
UClass* UGGDeveloperSettings::GetPrivateStaticClass()
{
	using TClass = UGGDeveloperSettings;
	if (!Z_Registration_Info_UClass_UGGDeveloperSettings.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GGDeveloperSettings"),
			Z_Registration_Info_UClass_UGGDeveloperSettings.InnerSingleton,
			StaticRegisterNativesUGGDeveloperSettings,
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
	return Z_Registration_Info_UClass_UGGDeveloperSettings.InnerSingleton;
}
UClass* Z_Construct_UClass_UGGDeveloperSettings_NoRegister()
{
	return UGGDeveloperSettings::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGGDeveloperSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Game Genie BFL Developer Settings\n */" },
#endif
		{ "DisplayName", "Game Genie BFL" },
		{ "IncludePath", "Core/GGDeveloperSettings.h" },
		{ "ModuleRelativePath", "Public/Core/GGDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Game Genie BFL Developer Settings" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableOnScreenDebug_MetaData[] = {
		{ "Category", "Debug" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Toggle default for on-screen debug (mirrored to CVar gg.Debug on startup). */" },
#endif
		{ "ModuleRelativePath", "Public/Core/GGDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Toggle default for on-screen debug (mirrored to CVar gg.Debug on startup)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultOnScreenDebugTime_MetaData[] = {
		{ "Category", "Debug" },
		{ "ClampMax", "30.0" },
		{ "ClampMin", "0.1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Default display time for on-screen debug messages. */" },
#endif
		{ "ModuleRelativePath", "Public/Core/GGDeveloperSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default display time for on-screen debug messages." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnableOnScreenDebug_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableOnScreenDebug;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultOnScreenDebugTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGGDeveloperSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UGGDeveloperSettings_Statics::NewProp_bEnableOnScreenDebug_SetBit(void* Obj)
{
	((UGGDeveloperSettings*)Obj)->bEnableOnScreenDebug = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGGDeveloperSettings_Statics::NewProp_bEnableOnScreenDebug = { "bEnableOnScreenDebug", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UGGDeveloperSettings), &Z_Construct_UClass_UGGDeveloperSettings_Statics::NewProp_bEnableOnScreenDebug_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableOnScreenDebug_MetaData), NewProp_bEnableOnScreenDebug_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGGDeveloperSettings_Statics::NewProp_DefaultOnScreenDebugTime = { "DefaultOnScreenDebugTime", nullptr, (EPropertyFlags)0x0010000000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGGDeveloperSettings, DefaultOnScreenDebugTime), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultOnScreenDebugTime_MetaData), NewProp_DefaultOnScreenDebugTime_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGGDeveloperSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGDeveloperSettings_Statics::NewProp_bEnableOnScreenDebug,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGDeveloperSettings_Statics::NewProp_DefaultOnScreenDebugTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGGDeveloperSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGGDeveloperSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_GameGenieBFLRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGGDeveloperSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGGDeveloperSettings_Statics::ClassParams = {
	&UGGDeveloperSettings::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UGGDeveloperSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UGGDeveloperSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGGDeveloperSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UGGDeveloperSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGGDeveloperSettings()
{
	if (!Z_Registration_Info_UClass_UGGDeveloperSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGGDeveloperSettings.OuterSingleton, Z_Construct_UClass_UGGDeveloperSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGGDeveloperSettings.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGGDeveloperSettings);
UGGDeveloperSettings::~UGGDeveloperSettings() {}
// ********** End Class UGGDeveloperSettings *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Core_GGDeveloperSettings_h__Script_GameGenieBFLRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGGDeveloperSettings, UGGDeveloperSettings::StaticClass, TEXT("UGGDeveloperSettings"), &Z_Registration_Info_UClass_UGGDeveloperSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGGDeveloperSettings), 1175711786U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Core_GGDeveloperSettings_h__Script_GameGenieBFLRuntime_1534217702(TEXT("/Script/GameGenieBFLRuntime"),
	Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Core_GGDeveloperSettings_h__Script_GameGenieBFLRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Core_GGDeveloperSettings_h__Script_GameGenieBFLRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
