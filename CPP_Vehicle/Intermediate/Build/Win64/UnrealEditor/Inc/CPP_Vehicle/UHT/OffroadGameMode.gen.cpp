// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Variant_OffRoad/OffroadGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeOffroadGameMode() {}

// ********** Begin Cross Module References ********************************************************
CPP_VEHICLE_API UClass* Z_Construct_UClass_AOffroadGameMode();
CPP_VEHICLE_API UClass* Z_Construct_UClass_AOffroadGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CPP_Vehicle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AOffroadGameMode *********************************************************
void AOffroadGameMode::StaticRegisterNativesAOffroadGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AOffroadGameMode;
UClass* AOffroadGameMode::GetPrivateStaticClass()
{
	using TClass = AOffroadGameMode;
	if (!Z_Registration_Info_UClass_AOffroadGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("OffroadGameMode"),
			Z_Registration_Info_UClass_AOffroadGameMode.InnerSingleton,
			StaticRegisterNativesAOffroadGameMode,
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
	return Z_Registration_Info_UClass_AOffroadGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AOffroadGameMode_NoRegister()
{
	return AOffroadGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AOffroadGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for an offroad vehicle game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Variant_OffRoad/OffroadGameMode.h" },
		{ "ModuleRelativePath", "Variant_OffRoad/OffroadGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for an offroad vehicle game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AOffroadGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AOffroadGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_Vehicle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AOffroadGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AOffroadGameMode_Statics::ClassParams = {
	&AOffroadGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AOffroadGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AOffroadGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AOffroadGameMode()
{
	if (!Z_Registration_Info_UClass_AOffroadGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AOffroadGameMode.OuterSingleton, Z_Construct_UClass_AOffroadGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AOffroadGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AOffroadGameMode);
AOffroadGameMode::~AOffroadGameMode() {}
// ********** End Class AOffroadGameMode ***********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_OffRoad_OffroadGameMode_h__Script_CPP_Vehicle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AOffroadGameMode, AOffroadGameMode::StaticClass, TEXT("AOffroadGameMode"), &Z_Registration_Info_UClass_AOffroadGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AOffroadGameMode), 2321803752U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_OffRoad_OffroadGameMode_h__Script_CPP_Vehicle_2140409322(TEXT("/Script/CPP_Vehicle"),
	Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_OffRoad_OffroadGameMode_h__Script_CPP_Vehicle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_OffRoad_OffroadGameMode_h__Script_CPP_Vehicle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
