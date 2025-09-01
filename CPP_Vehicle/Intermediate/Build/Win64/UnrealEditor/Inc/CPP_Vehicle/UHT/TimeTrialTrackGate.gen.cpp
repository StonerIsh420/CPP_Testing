// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeTrialTrackGate.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTimeTrialTrackGate() {}

// ********** Begin Cross Module References ********************************************************
CPP_VEHICLE_API UClass* Z_Construct_UClass_ATimeTrialTrackGate();
CPP_VEHICLE_API UClass* Z_Construct_UClass_ATimeTrialTrackGate_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_CPP_Vehicle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATimeTrialTrackGate ******************************************************
void ATimeTrialTrackGate::StaticRegisterNativesATimeTrialTrackGate()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATimeTrialTrackGate;
UClass* ATimeTrialTrackGate::GetPrivateStaticClass()
{
	using TClass = ATimeTrialTrackGate;
	if (!Z_Registration_Info_UClass_ATimeTrialTrackGate.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TimeTrialTrackGate"),
			Z_Registration_Info_UClass_ATimeTrialTrackGate.InnerSingleton,
			StaticRegisterNativesATimeTrialTrackGate,
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
	return Z_Registration_Info_UClass_ATimeTrialTrackGate.InnerSingleton;
}
UClass* Z_Construct_UClass_ATimeTrialTrackGate_NoRegister()
{
	return ATimeTrialTrackGate::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATimeTrialTrackGate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A track gate volume for a Time Trial racing game.\n *  Players must pass through the track gates in order to complete a lap.\n */" },
#endif
		{ "IncludePath", "Variant_TimeTrial/TimeTrialTrackGate.h" },
		{ "ModuleRelativePath", "Variant_TimeTrial/TimeTrialTrackGate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A track gate volume for a Time Trial racing game.\nPlayers must pass through the track gates in order to complete a lap." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Collision Box */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Variant_TimeTrial/TimeTrialTrackGate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Collision Box" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsFinishLine_MetaData[] = {
		{ "Category", "Track Gate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If this is set to true, this track gate is considered the finish line and will increase the lap when passed */" },
#endif
		{ "ModuleRelativePath", "Variant_TimeTrial/TimeTrialTrackGate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If this is set to true, this track gate is considered the finish line and will increase the lap when passed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NextMarker_MetaData[] = {
		{ "Category", "Track Gate" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pointer to the next track marker in the sequence */" },
#endif
		{ "ModuleRelativePath", "Variant_TimeTrial/TimeTrialTrackGate.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the next track marker in the sequence" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
	static void NewProp_bIsFinishLine_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFinishLine;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextMarker;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimeTrialTrackGate>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeTrialTrackGate_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeTrialTrackGate, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionBox_MetaData), NewProp_CollisionBox_MetaData) };
void Z_Construct_UClass_ATimeTrialTrackGate_Statics::NewProp_bIsFinishLine_SetBit(void* Obj)
{
	((ATimeTrialTrackGate*)Obj)->bIsFinishLine = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATimeTrialTrackGate_Statics::NewProp_bIsFinishLine = { "bIsFinishLine", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATimeTrialTrackGate), &Z_Construct_UClass_ATimeTrialTrackGate_Statics::NewProp_bIsFinishLine_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsFinishLine_MetaData), NewProp_bIsFinishLine_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeTrialTrackGate_Statics::NewProp_NextMarker = { "NextMarker", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeTrialTrackGate, NextMarker), Z_Construct_UClass_ATimeTrialTrackGate_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NextMarker_MetaData), NewProp_NextMarker_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATimeTrialTrackGate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTrialTrackGate_Statics::NewProp_CollisionBox,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTrialTrackGate_Statics::NewProp_bIsFinishLine,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTrialTrackGate_Statics::NewProp_NextMarker,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeTrialTrackGate_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATimeTrialTrackGate_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_Vehicle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeTrialTrackGate_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATimeTrialTrackGate_Statics::ClassParams = {
	&ATimeTrialTrackGate::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ATimeTrialTrackGate_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ATimeTrialTrackGate_Statics::PropPointers),
	0,
	0x008001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeTrialTrackGate_Statics::Class_MetaDataParams), Z_Construct_UClass_ATimeTrialTrackGate_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATimeTrialTrackGate()
{
	if (!Z_Registration_Info_UClass_ATimeTrialTrackGate.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATimeTrialTrackGate.OuterSingleton, Z_Construct_UClass_ATimeTrialTrackGate_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATimeTrialTrackGate.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATimeTrialTrackGate);
ATimeTrialTrackGate::~ATimeTrialTrackGate() {}
// ********** End Class ATimeTrialTrackGate ********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_TimeTrialTrackGate_h__Script_CPP_Vehicle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATimeTrialTrackGate, ATimeTrialTrackGate::StaticClass, TEXT("ATimeTrialTrackGate"), &Z_Registration_Info_UClass_ATimeTrialTrackGate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATimeTrialTrackGate), 2738797141U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_TimeTrialTrackGate_h__Script_CPP_Vehicle_2017219222(TEXT("/Script/CPP_Vehicle"),
	Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_TimeTrialTrackGate_h__Script_CPP_Vehicle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_TimeTrialTrackGate_h__Script_CPP_Vehicle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
