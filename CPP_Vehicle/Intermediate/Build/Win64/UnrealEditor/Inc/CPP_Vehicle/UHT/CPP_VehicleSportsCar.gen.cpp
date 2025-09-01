// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_VehicleSportsCar.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_VehicleSportsCar() {}

// ********** Begin Cross Module References ********************************************************
CPP_VEHICLE_API UClass* Z_Construct_UClass_ACPP_VehiclePawn();
CPP_VEHICLE_API UClass* Z_Construct_UClass_ACPP_VehicleSportsCar();
CPP_VEHICLE_API UClass* Z_Construct_UClass_ACPP_VehicleSportsCar_NoRegister();
UPackage* Z_Construct_UPackage__Script_CPP_Vehicle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACPP_VehicleSportsCar ****************************************************
void ACPP_VehicleSportsCar::StaticRegisterNativesACPP_VehicleSportsCar()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACPP_VehicleSportsCar;
UClass* ACPP_VehicleSportsCar::GetPrivateStaticClass()
{
	using TClass = ACPP_VehicleSportsCar;
	if (!Z_Registration_Info_UClass_ACPP_VehicleSportsCar.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_VehicleSportsCar"),
			Z_Registration_Info_UClass_ACPP_VehicleSportsCar.InnerSingleton,
			StaticRegisterNativesACPP_VehicleSportsCar,
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
	return Z_Registration_Info_UClass_ACPP_VehicleSportsCar.InnerSingleton;
}
UClass* Z_Construct_UClass_ACPP_VehicleSportsCar_NoRegister()
{
	return ACPP_VehicleSportsCar::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACPP_VehicleSportsCar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Sports car wheeled vehicle implementation\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "SportsCar/CPP_VehicleSportsCar.h" },
		{ "ModuleRelativePath", "SportsCar/CPP_VehicleSportsCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sports car wheeled vehicle implementation" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_VehicleSportsCar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACPP_VehicleSportsCar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACPP_VehiclePawn,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_Vehicle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_VehicleSportsCar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_VehicleSportsCar_Statics::ClassParams = {
	&ACPP_VehicleSportsCar::StaticClass,
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
	0x008001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_VehicleSportsCar_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_VehicleSportsCar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_VehicleSportsCar()
{
	if (!Z_Registration_Info_UClass_ACPP_VehicleSportsCar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_VehicleSportsCar.OuterSingleton, Z_Construct_UClass_ACPP_VehicleSportsCar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_VehicleSportsCar.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_VehicleSportsCar);
ACPP_VehicleSportsCar::~ACPP_VehicleSportsCar() {}
// ********** End Class ACPP_VehicleSportsCar ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_SportsCar_CPP_VehicleSportsCar_h__Script_CPP_Vehicle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_VehicleSportsCar, ACPP_VehicleSportsCar::StaticClass, TEXT("ACPP_VehicleSportsCar"), &Z_Registration_Info_UClass_ACPP_VehicleSportsCar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_VehicleSportsCar), 1979068072U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_SportsCar_CPP_VehicleSportsCar_h__Script_CPP_Vehicle_1494439456(TEXT("/Script/CPP_Vehicle"),
	Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_SportsCar_CPP_VehicleSportsCar_h__Script_CPP_Vehicle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_SportsCar_CPP_VehicleSportsCar_h__Script_CPP_Vehicle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
