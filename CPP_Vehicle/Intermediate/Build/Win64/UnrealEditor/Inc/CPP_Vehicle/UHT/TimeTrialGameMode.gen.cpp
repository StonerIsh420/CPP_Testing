// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeTrialGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTimeTrialGameMode() {}

// ********** Begin Cross Module References ********************************************************
CPP_VEHICLE_API UClass* Z_Construct_UClass_ATimeTrialGameMode();
CPP_VEHICLE_API UClass* Z_Construct_UClass_ATimeTrialGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CPP_Vehicle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATimeTrialGameMode *******************************************************
void ATimeTrialGameMode::StaticRegisterNativesATimeTrialGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATimeTrialGameMode;
UClass* ATimeTrialGameMode::GetPrivateStaticClass()
{
	using TClass = ATimeTrialGameMode;
	if (!Z_Registration_Info_UClass_ATimeTrialGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TimeTrialGameMode"),
			Z_Registration_Info_UClass_ATimeTrialGameMode.InnerSingleton,
			StaticRegisterNativesATimeTrialGameMode,
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
	return Z_Registration_Info_UClass_ATimeTrialGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ATimeTrialGameMode_NoRegister()
{
	return ATimeTrialGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATimeTrialGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A simple GameMode for a Time Trial racing game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Variant_TimeTrial/TimeTrialGameMode.h" },
		{ "ModuleRelativePath", "Variant_TimeTrial/TimeTrialGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A simple GameMode for a Time Trial racing game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FinishTag_MetaData[] = {
		{ "Category", "Time Trial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Actor tag used to find the finish line marker on the level */" },
#endif
		{ "ModuleRelativePath", "Variant_TimeTrial/TimeTrialGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Actor tag used to find the finish line marker on the level" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Laps_MetaData[] = {
		{ "Category", "Time Trial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Number of laps for the race */" },
#endif
		{ "ModuleRelativePath", "Variant_TimeTrial/TimeTrialGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Number of laps for the race" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_FinishTag;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Laps;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimeTrialGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_ATimeTrialGameMode_Statics::NewProp_FinishTag = { "FinishTag", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeTrialGameMode, FinishTag), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FinishTag_MetaData), NewProp_FinishTag_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_ATimeTrialGameMode_Statics::NewProp_Laps = { "Laps", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeTrialGameMode, Laps), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Laps_MetaData), NewProp_Laps_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATimeTrialGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTrialGameMode_Statics::NewProp_FinishTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTrialGameMode_Statics::NewProp_Laps,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeTrialGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATimeTrialGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_Vehicle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeTrialGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATimeTrialGameMode_Statics::ClassParams = {
	&ATimeTrialGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATimeTrialGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATimeTrialGameMode_Statics::PropPointers),
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeTrialGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ATimeTrialGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATimeTrialGameMode()
{
	if (!Z_Registration_Info_UClass_ATimeTrialGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATimeTrialGameMode.OuterSingleton, Z_Construct_UClass_ATimeTrialGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATimeTrialGameMode.OuterSingleton;
}
ATimeTrialGameMode::ATimeTrialGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATimeTrialGameMode);
ATimeTrialGameMode::~ATimeTrialGameMode() {}
// ********** End Class ATimeTrialGameMode *********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_TimeTrialGameMode_h__Script_CPP_Vehicle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATimeTrialGameMode, ATimeTrialGameMode::StaticClass, TEXT("ATimeTrialGameMode"), &Z_Registration_Info_UClass_ATimeTrialGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATimeTrialGameMode), 390184477U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_TimeTrialGameMode_h__Script_CPP_Vehicle_535496162(TEXT("/Script/CPP_Vehicle"),
	Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_TimeTrialGameMode_h__Script_CPP_Vehicle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_TimeTrialGameMode_h__Script_CPP_Vehicle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
