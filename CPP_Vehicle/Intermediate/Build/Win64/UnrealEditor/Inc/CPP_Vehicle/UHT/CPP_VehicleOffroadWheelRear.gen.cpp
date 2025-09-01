// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_VehicleOffroadWheelRear.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_VehicleOffroadWheelRear() {}

// ********** Begin Cross Module References ********************************************************
CPP_VEHICLE_API UClass* Z_Construct_UClass_UCPP_VehicleOffroadWheelRear();
CPP_VEHICLE_API UClass* Z_Construct_UClass_UCPP_VehicleOffroadWheelRear_NoRegister();
CPP_VEHICLE_API UClass* Z_Construct_UClass_UCPP_VehicleWheelRear();
UPackage* Z_Construct_UPackage__Script_CPP_Vehicle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCPP_VehicleOffroadWheelRear *********************************************
void UCPP_VehicleOffroadWheelRear::StaticRegisterNativesUCPP_VehicleOffroadWheelRear()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCPP_VehicleOffroadWheelRear;
UClass* UCPP_VehicleOffroadWheelRear::GetPrivateStaticClass()
{
	using TClass = UCPP_VehicleOffroadWheelRear;
	if (!Z_Registration_Info_UClass_UCPP_VehicleOffroadWheelRear.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_VehicleOffroadWheelRear"),
			Z_Registration_Info_UClass_UCPP_VehicleOffroadWheelRear.InnerSingleton,
			StaticRegisterNativesUCPP_VehicleOffroadWheelRear,
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
	return Z_Registration_Info_UClass_UCPP_VehicleOffroadWheelRear.InnerSingleton;
}
UClass* Z_Construct_UClass_UCPP_VehicleOffroadWheelRear_NoRegister()
{
	return UCPP_VehicleOffroadWheelRear::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCPP_VehicleOffroadWheelRear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Rear wheel definition for Offroad Car.\n */" },
#endif
		{ "IncludePath", "OffroadCar/CPP_VehicleOffroadWheelRear.h" },
		{ "ModuleRelativePath", "OffroadCar/CPP_VehicleOffroadWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rear wheel definition for Offroad Car." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_VehicleOffroadWheelRear>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCPP_VehicleOffroadWheelRear_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCPP_VehicleWheelRear,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_Vehicle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_VehicleOffroadWheelRear_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_VehicleOffroadWheelRear_Statics::ClassParams = {
	&UCPP_VehicleOffroadWheelRear::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_VehicleOffroadWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_VehicleOffroadWheelRear_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_VehicleOffroadWheelRear()
{
	if (!Z_Registration_Info_UClass_UCPP_VehicleOffroadWheelRear.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_VehicleOffroadWheelRear.OuterSingleton, Z_Construct_UClass_UCPP_VehicleOffroadWheelRear_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_VehicleOffroadWheelRear.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_VehicleOffroadWheelRear);
UCPP_VehicleOffroadWheelRear::~UCPP_VehicleOffroadWheelRear() {}
// ********** End Class UCPP_VehicleOffroadWheelRear ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_OffroadCar_CPP_VehicleOffroadWheelRear_h__Script_CPP_Vehicle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_VehicleOffroadWheelRear, UCPP_VehicleOffroadWheelRear::StaticClass, TEXT("UCPP_VehicleOffroadWheelRear"), &Z_Registration_Info_UClass_UCPP_VehicleOffroadWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_VehicleOffroadWheelRear), 2219262973U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_OffroadCar_CPP_VehicleOffroadWheelRear_h__Script_CPP_Vehicle_849244967(TEXT("/Script/CPP_Vehicle"),
	Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_OffroadCar_CPP_VehicleOffroadWheelRear_h__Script_CPP_Vehicle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_OffroadCar_CPP_VehicleOffroadWheelRear_h__Script_CPP_Vehicle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
