// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_VehicleSportsWheelRear.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_VehicleSportsWheelRear() {}

// ********** Begin Cross Module References ********************************************************
CPP_VEHICLE_API UClass* Z_Construct_UClass_UCPP_VehicleSportsWheelRear();
CPP_VEHICLE_API UClass* Z_Construct_UClass_UCPP_VehicleSportsWheelRear_NoRegister();
CPP_VEHICLE_API UClass* Z_Construct_UClass_UCPP_VehicleWheelRear();
UPackage* Z_Construct_UPackage__Script_CPP_Vehicle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCPP_VehicleSportsWheelRear **********************************************
void UCPP_VehicleSportsWheelRear::StaticRegisterNativesUCPP_VehicleSportsWheelRear()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCPP_VehicleSportsWheelRear;
UClass* UCPP_VehicleSportsWheelRear::GetPrivateStaticClass()
{
	using TClass = UCPP_VehicleSportsWheelRear;
	if (!Z_Registration_Info_UClass_UCPP_VehicleSportsWheelRear.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_VehicleSportsWheelRear"),
			Z_Registration_Info_UClass_UCPP_VehicleSportsWheelRear.InnerSingleton,
			StaticRegisterNativesUCPP_VehicleSportsWheelRear,
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
	return Z_Registration_Info_UClass_UCPP_VehicleSportsWheelRear.InnerSingleton;
}
UClass* Z_Construct_UClass_UCPP_VehicleSportsWheelRear_NoRegister()
{
	return UCPP_VehicleSportsWheelRear::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCPP_VehicleSportsWheelRear_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Rear wheel definition for Sports Car.\n */" },
#endif
		{ "IncludePath", "SportsCar/CPP_VehicleSportsWheelRear.h" },
		{ "ModuleRelativePath", "SportsCar/CPP_VehicleSportsWheelRear.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rear wheel definition for Sports Car." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_VehicleSportsWheelRear>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UCPP_VehicleSportsWheelRear_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UCPP_VehicleWheelRear,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_Vehicle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_VehicleSportsWheelRear_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_VehicleSportsWheelRear_Statics::ClassParams = {
	&UCPP_VehicleSportsWheelRear::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_VehicleSportsWheelRear_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_VehicleSportsWheelRear_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_VehicleSportsWheelRear()
{
	if (!Z_Registration_Info_UClass_UCPP_VehicleSportsWheelRear.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_VehicleSportsWheelRear.OuterSingleton, Z_Construct_UClass_UCPP_VehicleSportsWheelRear_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_VehicleSportsWheelRear.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_VehicleSportsWheelRear);
UCPP_VehicleSportsWheelRear::~UCPP_VehicleSportsWheelRear() {}
// ********** End Class UCPP_VehicleSportsWheelRear ************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_SportsCar_CPP_VehicleSportsWheelRear_h__Script_CPP_Vehicle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_VehicleSportsWheelRear, UCPP_VehicleSportsWheelRear::StaticClass, TEXT("UCPP_VehicleSportsWheelRear"), &Z_Registration_Info_UClass_UCPP_VehicleSportsWheelRear, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_VehicleSportsWheelRear), 2952611107U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_SportsCar_CPP_VehicleSportsWheelRear_h__Script_CPP_Vehicle_3275907711(TEXT("/Script/CPP_Vehicle"),
	Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_SportsCar_CPP_VehicleSportsWheelRear_h__Script_CPP_Vehicle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_SportsCar_CPP_VehicleSportsWheelRear_h__Script_CPP_Vehicle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
