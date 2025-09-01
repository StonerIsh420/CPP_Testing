// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_VehicleOffroadWheelFront.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_VehicleOffroadWheelFront() {}

// ********** Begin Cross Module References ********************************************************
CPP_VEHICLE_API UClass* Z_Construct_UClass_UCPP_VehicleOffroadWheelFront();
CPP_VEHICLE_API UClass* Z_Construct_UClass_UCPP_VehicleOffroadWheelFront_NoRegister();
CPP_VEHICLE_API UClass* Z_Construct_UClass_UCPP_VehicleWheelFront();
UPackage* Z_Construct_UPackage__Script_CPP_Vehicle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCPP_VehicleOffroadWheelFront ********************************************
void UCPP_VehicleOffroadWheelFront::StaticRegisterNativesUCPP_VehicleOffroadWheelFront()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCPP_VehicleOffroadWheelFront;
UClass* UCPP_VehicleOffroadWheelFront::GetPrivateStaticClass()
{
	using TClass = UCPP_VehicleOffroadWheelFront;
	if (!Z_Registration_Info_UClass_UCPP_VehicleOffroadWheelFront.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_VehicleOffroadWheelFront"),
			Z_Registration_Info_UClass_UCPP_VehicleOffroadWheelFront.InnerSingleton,
			StaticRegisterNativesUCPP_VehicleOffroadWheelFront,
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
	return Z_Registration_Info_UClass_UCPP_VehicleOffroadWheelFront.InnerSingleton;
}
UClass* Z_Construct_UClass_UCPP_VehicleOffroadWheelFront_NoRegister()
{
	return UCPP_VehicleOffroadWheelFront::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCPP_VehicleOffroadWheelFront_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Front wheel definition for Offroad Car.\n */" },
#endif
		{ "IncludePath", "OffroadCar/CPP_VehicleOffroadWheelFront.h" },
		{ "ModuleRelativePath", "OffroadCar/CPP_VehicleOffroadWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Front wheel definition for Offroad Car." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_VehicleOffroadWheelFront>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCPP_VehicleOffroadWheelFront_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCPP_VehicleWheelFront,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_Vehicle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_VehicleOffroadWheelFront_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_VehicleOffroadWheelFront_Statics::ClassParams = {
	&UCPP_VehicleOffroadWheelFront::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_VehicleOffroadWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_VehicleOffroadWheelFront_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_VehicleOffroadWheelFront()
{
	if (!Z_Registration_Info_UClass_UCPP_VehicleOffroadWheelFront.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_VehicleOffroadWheelFront.OuterSingleton, Z_Construct_UClass_UCPP_VehicleOffroadWheelFront_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_VehicleOffroadWheelFront.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_VehicleOffroadWheelFront);
UCPP_VehicleOffroadWheelFront::~UCPP_VehicleOffroadWheelFront() {}
// ********** End Class UCPP_VehicleOffroadWheelFront **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_OffroadCar_CPP_VehicleOffroadWheelFront_h__Script_CPP_Vehicle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_VehicleOffroadWheelFront, UCPP_VehicleOffroadWheelFront::StaticClass, TEXT("UCPP_VehicleOffroadWheelFront"), &Z_Registration_Info_UClass_UCPP_VehicleOffroadWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_VehicleOffroadWheelFront), 4047987833U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_OffroadCar_CPP_VehicleOffroadWheelFront_h__Script_CPP_Vehicle_2899484734(TEXT("/Script/CPP_Vehicle"),
	Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_OffroadCar_CPP_VehicleOffroadWheelFront_h__Script_CPP_Vehicle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_OffroadCar_CPP_VehicleOffroadWheelFront_h__Script_CPP_Vehicle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
