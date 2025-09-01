// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_VehicleWheelRear.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_VehicleWheelRear() {}

// ********** Begin Cross Module References ********************************************************
CHAOSVEHICLES_API UClass* Z_Construct_UClass_UChaosVehicleWheel();
CPP_VEHICLE_API UClass* Z_Construct_UClass_UCPP_VehicleWheelRear();
CPP_VEHICLE_API UClass* Z_Construct_UClass_UCPP_VehicleWheelRear_NoRegister();
UPackage* Z_Construct_UPackage__Script_CPP_Vehicle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCPP_VehicleWheelRear ****************************************************
void UCPP_VehicleWheelRear::StaticRegisterNativesUCPP_VehicleWheelRear()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCPP_VehicleWheelRear;
UClass* UCPP_VehicleWheelRear::GetPrivateStaticClass()
{
	using TClass = UCPP_VehicleWheelRear;
	if (!Z_Registration_Info_UClass_UCPP_VehicleWheelRear.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_VehicleWheelRear"),
			Z_Registration_Info_UClass_UCPP_VehicleWheelRear.InnerSingleton,
			StaticRegisterNativesUCPP_VehicleWheelRear,
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
	return Z_Registration_Info_UClass_UCPP_VehicleWheelRear.InnerSingleton;
}
UClass* Z_Construct_UClass_UCPP_VehicleWheelRear_NoRegister()
{
	return UCPP_VehicleWheelRear::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCPP_VehicleWheelRear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Base rear wheel definition.\n */" },
#endif
		{ "IncludePath", "CPP_VehicleWheelRear.h" },
		{ "ModuleRelativePath", "CPP_VehicleWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base rear wheel definition." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_VehicleWheelRear>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCPP_VehicleWheelRear_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UChaosVehicleWheel,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_Vehicle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_VehicleWheelRear_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_VehicleWheelRear_Statics::ClassParams = {
	&UCPP_VehicleWheelRear::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_VehicleWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_VehicleWheelRear_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_VehicleWheelRear()
{
	if (!Z_Registration_Info_UClass_UCPP_VehicleWheelRear.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_VehicleWheelRear.OuterSingleton, Z_Construct_UClass_UCPP_VehicleWheelRear_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_VehicleWheelRear.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_VehicleWheelRear);
UCPP_VehicleWheelRear::~UCPP_VehicleWheelRear() {}
// ********** End Class UCPP_VehicleWheelRear ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehicleWheelRear_h__Script_CPP_Vehicle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_VehicleWheelRear, UCPP_VehicleWheelRear::StaticClass, TEXT("UCPP_VehicleWheelRear"), &Z_Registration_Info_UClass_UCPP_VehicleWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_VehicleWheelRear), 1009246914U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehicleWheelRear_h__Script_CPP_Vehicle_586286935(TEXT("/Script/CPP_Vehicle"),
	Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehicleWheelRear_h__Script_CPP_Vehicle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehicleWheelRear_h__Script_CPP_Vehicle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
