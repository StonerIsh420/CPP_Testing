// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_VehicleOffroadCar.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_VehicleOffroadCar() {}

// ********** Begin Cross Module References ********************************************************
CPP_VEHICLE_API UClass* Z_Construct_UClass_ACPP_VehicleOffroadCar();
CPP_VEHICLE_API UClass* Z_Construct_UClass_ACPP_VehicleOffroadCar_NoRegister();
CPP_VEHICLE_API UClass* Z_Construct_UClass_ACPP_VehiclePawn();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CPP_Vehicle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ACPP_VehicleOffroadCar ***************************************************
void ACPP_VehicleOffroadCar::StaticRegisterNativesACPP_VehicleOffroadCar()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ACPP_VehicleOffroadCar;
UClass* ACPP_VehicleOffroadCar::GetPrivateStaticClass()
{
	using TClass = ACPP_VehicleOffroadCar;
	if (!Z_Registration_Info_UClass_ACPP_VehicleOffroadCar.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_VehicleOffroadCar"),
			Z_Registration_Info_UClass_ACPP_VehicleOffroadCar.InnerSingleton,
			StaticRegisterNativesACPP_VehicleOffroadCar,
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
	return Z_Registration_Info_UClass_ACPP_VehicleOffroadCar.InnerSingleton;
}
UClass* Z_Construct_UClass_ACPP_VehicleOffroadCar_NoRegister()
{
	return ACPP_VehicleOffroadCar::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ACPP_VehicleOffroadCar_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Offroad car wheeled vehicle implementation\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "OffroadCar/CPP_VehicleOffroadCar.h" },
		{ "ModuleRelativePath", "OffroadCar/CPP_VehicleOffroadCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Offroad car wheeled vehicle implementation" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Chassis_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Chassis static mesh */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OffroadCar/CPP_VehicleOffroadCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Chassis static mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TireFrontLeft_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FL Tire static mesh */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OffroadCar/CPP_VehicleOffroadCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FL Tire static mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TireFrontRight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** FR Tire static mesh */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OffroadCar/CPP_VehicleOffroadCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FR Tire static mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TireRearLeft_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** RL Tire static mesh */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OffroadCar/CPP_VehicleOffroadCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RL Tire static mesh" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TireRearRight_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** RR Tire static mesh */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "OffroadCar/CPP_VehicleOffroadCar.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RR Tire static mesh" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Chassis;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TireFrontLeft;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TireFrontRight;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TireRearLeft;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TireRearRight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_VehicleOffroadCar>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_VehicleOffroadCar_Statics::NewProp_Chassis = { "Chassis", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_VehicleOffroadCar, Chassis), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Chassis_MetaData), NewProp_Chassis_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_VehicleOffroadCar_Statics::NewProp_TireFrontLeft = { "TireFrontLeft", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_VehicleOffroadCar, TireFrontLeft), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TireFrontLeft_MetaData), NewProp_TireFrontLeft_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_VehicleOffroadCar_Statics::NewProp_TireFrontRight = { "TireFrontRight", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_VehicleOffroadCar, TireFrontRight), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TireFrontRight_MetaData), NewProp_TireFrontRight_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_VehicleOffroadCar_Statics::NewProp_TireRearLeft = { "TireRearLeft", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_VehicleOffroadCar, TireRearLeft), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TireRearLeft_MetaData), NewProp_TireRearLeft_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_VehicleOffroadCar_Statics::NewProp_TireRearRight = { "TireRearRight", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACPP_VehicleOffroadCar, TireRearRight), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TireRearRight_MetaData), NewProp_TireRearRight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_VehicleOffroadCar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_VehicleOffroadCar_Statics::NewProp_Chassis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_VehicleOffroadCar_Statics::NewProp_TireFrontLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_VehicleOffroadCar_Statics::NewProp_TireFrontRight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_VehicleOffroadCar_Statics::NewProp_TireRearLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_VehicleOffroadCar_Statics::NewProp_TireRearRight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_VehicleOffroadCar_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACPP_VehicleOffroadCar_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACPP_VehiclePawn,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_Vehicle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_VehicleOffroadCar_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_VehicleOffroadCar_Statics::ClassParams = {
	&ACPP_VehicleOffroadCar::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ACPP_VehicleOffroadCar_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_VehicleOffroadCar_Statics::PropPointers),
	0,
	0x008001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_VehicleOffroadCar_Statics::Class_MetaDataParams), Z_Construct_UClass_ACPP_VehicleOffroadCar_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACPP_VehicleOffroadCar()
{
	if (!Z_Registration_Info_UClass_ACPP_VehicleOffroadCar.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_VehicleOffroadCar.OuterSingleton, Z_Construct_UClass_ACPP_VehicleOffroadCar_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACPP_VehicleOffroadCar.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_VehicleOffroadCar);
ACPP_VehicleOffroadCar::~ACPP_VehicleOffroadCar() {}
// ********** End Class ACPP_VehicleOffroadCar *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_OffroadCar_CPP_VehicleOffroadCar_h__Script_CPP_Vehicle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_VehicleOffroadCar, ACPP_VehicleOffroadCar::StaticClass, TEXT("ACPP_VehicleOffroadCar"), &Z_Registration_Info_UClass_ACPP_VehicleOffroadCar, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_VehicleOffroadCar), 2757699036U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_OffroadCar_CPP_VehicleOffroadCar_h__Script_CPP_Vehicle_1625829309(TEXT("/Script/CPP_Vehicle"),
	Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_OffroadCar_CPP_VehicleOffroadCar_h__Script_CPP_Vehicle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_OffroadCar_CPP_VehicleOffroadCar_h__Script_CPP_Vehicle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
