// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_VehicleWheelFront.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_VehicleWheelFront() {}

// ********** Begin Cross Module References ********************************************************
CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel();
CPP_VEHICLE_API UClass* Z_Construct_UClass_UCPP_VehicleWheelFront();
CPP_VEHICLE_API UClass* Z_Construct_UClass_UCPP_VehicleWheelFront_NoRegister();
UPackage* Z_Construct_UPackage__Script_CPP_Vehicle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCPP_VehicleWheelFront ***************************************************
void UCPP_VehicleWheelFront::StaticRegisterNativesUCPP_VehicleWheelFront()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCPP_VehicleWheelFront;
UClass* UCPP_VehicleWheelFront::GetPrivateStaticClass()
{
	using TClass = UCPP_VehicleWheelFront;
	if (!Z_Registration_Info_UClass_UCPP_VehicleWheelFront.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_VehicleWheelFront"),
			Z_Registration_Info_UClass_UCPP_VehicleWheelFront.InnerSingleton,
			StaticRegisterNativesUCPP_VehicleWheelFront,
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
	return Z_Registration_Info_UClass_UCPP_VehicleWheelFront.InnerSingleton;
}
UClass* Z_Construct_UClass_UCPP_VehicleWheelFront_NoRegister()
{
	return UCPP_VehicleWheelFront::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCPP_VehicleWheelFront_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Base front wheel definition.\n */" },
#endif
		{ "IncludePath", "CPP_VehicleWheelFront.h" },
		{ "ModuleRelativePath", "CPP_VehicleWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base front wheel definition." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_VehicleWheelFront>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCPP_VehicleWheelFront_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UChaosVehicleWheel,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_Vehicle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_VehicleWheelFront_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_VehicleWheelFront_Statics::ClassParams = {
	&UCPP_VehicleWheelFront::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_VehicleWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_VehicleWheelFront_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_VehicleWheelFront()
{
	if (!Z_Registration_Info_UClass_UCPP_VehicleWheelFront.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_VehicleWheelFront.OuterSingleton, Z_Construct_UClass_UCPP_VehicleWheelFront_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_VehicleWheelFront.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_VehicleWheelFront);
UCPP_VehicleWheelFront::~UCPP_VehicleWheelFront() {}
// ********** End Class UCPP_VehicleWheelFront *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehicleWheelFront_h__Script_CPP_Vehicle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_VehicleWheelFront, UCPP_VehicleWheelFront::StaticClass, TEXT("UCPP_VehicleWheelFront"), &Z_Registration_Info_UClass_UCPP_VehicleWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_VehicleWheelFront), 2431270773U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehicleWheelFront_h__Script_CPP_Vehicle_56472413(TEXT("/Script/CPP_Vehicle"),
	Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehicleWheelFront_h__Script_CPP_Vehicle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehicleWheelFront_h__Script_CPP_Vehicle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
