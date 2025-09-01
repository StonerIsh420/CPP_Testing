// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_VehicleGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_VehicleGameMode() {}

// ********** Begin Cross Module References ********************************************************
CPP_VEHICLE_API UClass* Z_Construct_UClass_ACPP_VehicleGameMode();
CPP_VEHICLE_API UClass* Z_Construct_UClass_ACPP_VehicleGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CPP_Vehicle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACPP_VehicleGameMode *****************************************************
void ACPP_VehicleGameMode::StaticRegisterNativesACPP_VehicleGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACPP_VehicleGameMode;
UClass* ACPP_VehicleGameMode::GetPrivateStaticClass()
{
	using TClass = ACPP_VehicleGameMode;
	if (!Z_Registration_Info_UClass_ACPP_VehicleGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_VehicleGameMode"),
			Z_Registration_Info_UClass_ACPP_VehicleGameMode.InnerSingleton,
			StaticRegisterNativesACPP_VehicleGameMode,
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
	return Z_Registration_Info_UClass_ACPP_VehicleGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_ACPP_VehicleGameMode_NoRegister()
{
	return ACPP_VehicleGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACPP_VehicleGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CPP_VehicleGameMode.h" },
		{ "ModuleRelativePath", "CPP_VehicleGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_VehicleGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACPP_VehicleGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_Vehicle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_VehicleGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_VehicleGameMode_Statics::ClassParams = {
	&ACPP_VehicleGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_VehicleGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_VehicleGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_VehicleGameMode()
{
	if (!Z_Registration_Info_UClass_ACPP_VehicleGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_VehicleGameMode.OuterSingleton, Z_Construct_UClass_ACPP_VehicleGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_VehicleGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_VehicleGameMode);
ACPP_VehicleGameMode::~ACPP_VehicleGameMode() {}
// ********** End Class ACPP_VehicleGameMode *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehicleGameMode_h__Script_CPP_Vehicle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_VehicleGameMode, ACPP_VehicleGameMode::StaticClass, TEXT("ACPP_VehicleGameMode"), &Z_Registration_Info_UClass_ACPP_VehicleGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_VehicleGameMode), 81461092U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehicleGameMode_h__Script_CPP_Vehicle_3679322246(TEXT("/Script/CPP_Vehicle"),
	Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehicleGameMode_h__Script_CPP_Vehicle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehicleGameMode_h__Script_CPP_Vehicle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
