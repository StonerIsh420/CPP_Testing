// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_VehicleSportsWheelFront.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_VehicleSportsWheelFront() {}

// ********** Begin Cross Module References ********************************************************
CPP_VEHICLE_API UClass* Z_Construct_UClass_UCPP_VehicleSportsWheelFront();
CPP_VEHICLE_API UClass* Z_Construct_UClass_UCPP_VehicleSportsWheelFront_NoRegister();
CPP_VEHICLE_API UClass* Z_Construct_UClass_UCPP_VehicleWheelFront();
UPackage* Z_Construct_UPackage__Script_CPP_Vehicle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCPP_VehicleSportsWheelFront *********************************************
void UCPP_VehicleSportsWheelFront::StaticRegisterNativesUCPP_VehicleSportsWheelFront()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCPP_VehicleSportsWheelFront;
UClass* UCPP_VehicleSportsWheelFront::GetPrivateStaticClass()
{
	using TClass = UCPP_VehicleSportsWheelFront;
	if (!Z_Registration_Info_UClass_UCPP_VehicleSportsWheelFront.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_VehicleSportsWheelFront"),
			Z_Registration_Info_UClass_UCPP_VehicleSportsWheelFront.InnerSingleton,
			StaticRegisterNativesUCPP_VehicleSportsWheelFront,
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
	return Z_Registration_Info_UClass_UCPP_VehicleSportsWheelFront.InnerSingleton;
}
UClass* Z_Construct_UClass_UCPP_VehicleSportsWheelFront_NoRegister()
{
	return UCPP_VehicleSportsWheelFront::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCPP_VehicleSportsWheelFront_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Front wheel definition for Sports Car.\n */" },
#endif
		{ "IncludePath", "SportsCar/CPP_VehicleSportsWheelFront.h" },
		{ "ModuleRelativePath", "SportsCar/CPP_VehicleSportsWheelFront.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Front wheel definition for Sports Car." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_VehicleSportsWheelFront>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCPP_VehicleSportsWheelFront_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCPP_VehicleWheelFront,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_Vehicle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_VehicleSportsWheelFront_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_VehicleSportsWheelFront_Statics::ClassParams = {
	&UCPP_VehicleSportsWheelFront::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_VehicleSportsWheelFront_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_VehicleSportsWheelFront_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_VehicleSportsWheelFront()
{
	if (!Z_Registration_Info_UClass_UCPP_VehicleSportsWheelFront.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_VehicleSportsWheelFront.OuterSingleton, Z_Construct_UClass_UCPP_VehicleSportsWheelFront_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_VehicleSportsWheelFront.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_VehicleSportsWheelFront);
UCPP_VehicleSportsWheelFront::~UCPP_VehicleSportsWheelFront() {}
// ********** End Class UCPP_VehicleSportsWheelFront ***********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_SportsCar_CPP_VehicleSportsWheelFront_h__Script_CPP_Vehicle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_VehicleSportsWheelFront, UCPP_VehicleSportsWheelFront::StaticClass, TEXT("UCPP_VehicleSportsWheelFront"), &Z_Registration_Info_UClass_UCPP_VehicleSportsWheelFront, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_VehicleSportsWheelFront), 754122922U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_SportsCar_CPP_VehicleSportsWheelFront_h__Script_CPP_Vehicle_3188479506(TEXT("/Script/CPP_Vehicle"),
	Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_SportsCar_CPP_VehicleSportsWheelFront_h__Script_CPP_Vehicle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_SportsCar_CPP_VehicleSportsWheelFront_h__Script_CPP_Vehicle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
