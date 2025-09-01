// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeTrialPlayerController.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTimeTrialPlayerController() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
CPP_VEHICLE_API UClass* Z_Construct_UClass_ACPP_VehiclePawn_NoRegister();
CPP_VEHICLE_API UClass* Z_Construct_UClass_ATimeTrialPlayerController();
CPP_VEHICLE_API UClass* Z_Construct_UClass_ATimeTrialPlayerController_NoRegister();
CPP_VEHICLE_API UClass* Z_Construct_UClass_UCPP_VehicleUI_NoRegister();
CPP_VEHICLE_API UClass* Z_Construct_UClass_UTimeTrialUI_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APlayerController();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_CPP_Vehicle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class ATimeTrialPlayerController Function OnPawnDestroyed **********************
struct Z_Construct_UFunction_ATimeTrialPlayerController_OnPawnDestroyed_Statics
{
	struct TimeTrialPlayerController_eventOnPawnDestroyed_Parms
	{
		AActor* DestroyedPawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles pawn destruction and respawning */" },
#endif
		{ "ModuleRelativePath", "Variant_TimeTrial/TimeTrialPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles pawn destruction and respawning" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DestroyedPawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATimeTrialPlayerController_OnPawnDestroyed_Statics::NewProp_DestroyedPawn = { "DestroyedPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimeTrialPlayerController_eventOnPawnDestroyed_Parms, DestroyedPawn), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATimeTrialPlayerController_OnPawnDestroyed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATimeTrialPlayerController_OnPawnDestroyed_Statics::NewProp_DestroyedPawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeTrialPlayerController_OnPawnDestroyed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeTrialPlayerController_OnPawnDestroyed_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATimeTrialPlayerController, nullptr, "OnPawnDestroyed", Z_Construct_UFunction_ATimeTrialPlayerController_OnPawnDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeTrialPlayerController_OnPawnDestroyed_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATimeTrialPlayerController_OnPawnDestroyed_Statics::TimeTrialPlayerController_eventOnPawnDestroyed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeTrialPlayerController_OnPawnDestroyed_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeTrialPlayerController_OnPawnDestroyed_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_ATimeTrialPlayerController_OnPawnDestroyed_Statics::TimeTrialPlayerController_eventOnPawnDestroyed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATimeTrialPlayerController_OnPawnDestroyed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeTrialPlayerController_OnPawnDestroyed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATimeTrialPlayerController::execOnPawnDestroyed)
{
	P_GET_OBJECT(AActor,Z_Param_DestroyedPawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnPawnDestroyed(Z_Param_DestroyedPawn);
	P_NATIVE_END;
}
// ********** End Class ATimeTrialPlayerController Function OnPawnDestroyed ************************

// ********** Begin Class ATimeTrialPlayerController Function StartRace ****************************
struct Z_Construct_UFunction_ATimeTrialPlayerController_StartRace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sets up the race start */" },
#endif
		{ "ModuleRelativePath", "Variant_TimeTrial/TimeTrialPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets up the race start" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATimeTrialPlayerController_StartRace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_ATimeTrialPlayerController, nullptr, "StartRace", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATimeTrialPlayerController_StartRace_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATimeTrialPlayerController_StartRace_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_ATimeTrialPlayerController_StartRace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATimeTrialPlayerController_StartRace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATimeTrialPlayerController::execStartRace)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartRace();
	P_NATIVE_END;
}
// ********** End Class ATimeTrialPlayerController Function StartRace ******************************

// ********** Begin Class ATimeTrialPlayerController ***********************************************
void ATimeTrialPlayerController::StaticRegisterNativesATimeTrialPlayerController()
{
	UClass* Class = ATimeTrialPlayerController::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnPawnDestroyed", &ATimeTrialPlayerController::execOnPawnDestroyed },
		{ "StartRace", &ATimeTrialPlayerController::execStartRace },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_ATimeTrialPlayerController;
UClass* ATimeTrialPlayerController::GetPrivateStaticClass()
{
	using TClass = ATimeTrialPlayerController;
	if (!Z_Registration_Info_UClass_ATimeTrialPlayerController.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TimeTrialPlayerController"),
			Z_Registration_Info_UClass_ATimeTrialPlayerController.InnerSingleton,
			StaticRegisterNativesATimeTrialPlayerController,
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
	return Z_Registration_Info_UClass_ATimeTrialPlayerController.InnerSingleton;
}
UClass* Z_Construct_UClass_ATimeTrialPlayerController_NoRegister()
{
	return ATimeTrialPlayerController::GetPrivateStaticClass();
}
struct Z_Construct_UClass_ATimeTrialPlayerController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A simple PlayerController for a Time Trial racing game\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Variant_TimeTrial/TimeTrialPlayerController.h" },
		{ "ModuleRelativePath", "Variant_TimeTrial/TimeTrialPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A simple PlayerController for a Time Trial racing game" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "Variant_TimeTrial/TimeTrialPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileExcludedMappingContexts_MetaData[] = {
		{ "Category", "Input|Input Mappings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Contexts */" },
#endif
		{ "ModuleRelativePath", "Variant_TimeTrial/TimeTrialPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Contexts" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MobileControlsWidgetClass_MetaData[] = {
		{ "Category", "Input|Touch Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mobile controls widget to spawn */" },
#endif
		{ "ModuleRelativePath", "Variant_TimeTrial/TimeTrialPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mobile controls widget to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseSteeringWheelControls_MetaData[] = {
		{ "Category", "Input|Steering Wheel Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** If true, the optional steering wheel input mapping context will be registered */" },
#endif
		{ "ModuleRelativePath", "Variant_TimeTrial/TimeTrialPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If true, the optional steering wheel input mapping context will be registered" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteeringWheelInputMappingContext_MetaData[] = {
		{ "Category", "Input|Steering Wheel Controls" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Optional Input Mapping Context to be used for steering wheel input.\n\x09 *  This is added alongside the default Input Mapping Context and does not block other forms of input.\n\x09 */" },
#endif
		{ "EditCondition", "bUseSteeringWheelControls" },
		{ "ModuleRelativePath", "Variant_TimeTrial/TimeTrialPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional Input Mapping Context to be used for steering wheel input.\nThis is added alongside the default Input Mapping Context and does not block other forms of input." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIWidgetClass_MetaData[] = {
		{ "Category", "Time Trial|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of UI widget to spawn*/" },
#endif
		{ "ModuleRelativePath", "Variant_TimeTrial/TimeTrialPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of UI widget to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehicleUIClass_MetaData[] = {
		{ "Category", "Vehicle|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of the UI to spawn */" },
#endif
		{ "ModuleRelativePath", "Variant_TimeTrial/TimeTrialPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of the UI to spawn" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VehiclePawnClass_MetaData[] = {
		{ "Category", "Vehicle|Respawn" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of vehicle to automatically respawn when it's destroyed */" },
#endif
		{ "ModuleRelativePath", "Variant_TimeTrial/TimeTrialPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of vehicle to automatically respawn when it's destroyed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultMappingContexts;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MobileExcludedMappingContexts_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MobileExcludedMappingContexts;
	static const UECodeGen_Private::FClassPropertyParams NewProp_MobileControlsWidgetClass;
	static void NewProp_bUseSteeringWheelControls_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseSteeringWheelControls;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SteeringWheelInputMappingContext;
	static const UECodeGen_Private::FClassPropertyParams NewProp_UIWidgetClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_VehicleUIClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_VehiclePawnClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATimeTrialPlayerController_OnPawnDestroyed, "OnPawnDestroyed" }, // 3616666757
		{ &Z_Construct_UFunction_ATimeTrialPlayerController_StartRace, "StartRace" }, // 4276899561
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATimeTrialPlayerController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeTrialPlayerController_Statics::NewProp_DefaultMappingContexts_Inner = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATimeTrialPlayerController_Statics::NewProp_DefaultMappingContexts = { "DefaultMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeTrialPlayerController, DefaultMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultMappingContexts_MetaData), NewProp_DefaultMappingContexts_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeTrialPlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATimeTrialPlayerController_Statics::NewProp_MobileExcludedMappingContexts = { "MobileExcludedMappingContexts", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeTrialPlayerController, MobileExcludedMappingContexts), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileExcludedMappingContexts_MetaData), NewProp_MobileExcludedMappingContexts_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATimeTrialPlayerController_Statics::NewProp_MobileControlsWidgetClass = { "MobileControlsWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeTrialPlayerController, MobileControlsWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MobileControlsWidgetClass_MetaData), NewProp_MobileControlsWidgetClass_MetaData) };
void Z_Construct_UClass_ATimeTrialPlayerController_Statics::NewProp_bUseSteeringWheelControls_SetBit(void* Obj)
{
	((ATimeTrialPlayerController*)Obj)->bUseSteeringWheelControls = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ATimeTrialPlayerController_Statics::NewProp_bUseSteeringWheelControls = { "bUseSteeringWheelControls", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ATimeTrialPlayerController), &Z_Construct_UClass_ATimeTrialPlayerController_Statics::NewProp_bUseSteeringWheelControls_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseSteeringWheelControls_MetaData), NewProp_bUseSteeringWheelControls_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATimeTrialPlayerController_Statics::NewProp_SteeringWheelInputMappingContext = { "SteeringWheelInputMappingContext", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeTrialPlayerController, SteeringWheelInputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteeringWheelInputMappingContext_MetaData), NewProp_SteeringWheelInputMappingContext_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATimeTrialPlayerController_Statics::NewProp_UIWidgetClass = { "UIWidgetClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeTrialPlayerController, UIWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UTimeTrialUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIWidgetClass_MetaData), NewProp_UIWidgetClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATimeTrialPlayerController_Statics::NewProp_VehicleUIClass = { "VehicleUIClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeTrialPlayerController, VehicleUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UCPP_VehicleUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehicleUIClass_MetaData), NewProp_VehicleUIClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATimeTrialPlayerController_Statics::NewProp_VehiclePawnClass = { "VehiclePawnClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATimeTrialPlayerController, VehiclePawnClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ACPP_VehiclePawn_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VehiclePawnClass_MetaData), NewProp_VehiclePawnClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATimeTrialPlayerController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTrialPlayerController_Statics::NewProp_DefaultMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTrialPlayerController_Statics::NewProp_DefaultMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTrialPlayerController_Statics::NewProp_MobileExcludedMappingContexts_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTrialPlayerController_Statics::NewProp_MobileExcludedMappingContexts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTrialPlayerController_Statics::NewProp_MobileControlsWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTrialPlayerController_Statics::NewProp_bUseSteeringWheelControls,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTrialPlayerController_Statics::NewProp_SteeringWheelInputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTrialPlayerController_Statics::NewProp_UIWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTrialPlayerController_Statics::NewProp_VehicleUIClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATimeTrialPlayerController_Statics::NewProp_VehiclePawnClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeTrialPlayerController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATimeTrialPlayerController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerController,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_Vehicle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeTrialPlayerController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATimeTrialPlayerController_Statics::ClassParams = {
	&ATimeTrialPlayerController::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATimeTrialPlayerController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATimeTrialPlayerController_Statics::PropPointers),
	0,
	0x008003A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATimeTrialPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ATimeTrialPlayerController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATimeTrialPlayerController()
{
	if (!Z_Registration_Info_UClass_ATimeTrialPlayerController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATimeTrialPlayerController.OuterSingleton, Z_Construct_UClass_ATimeTrialPlayerController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATimeTrialPlayerController.OuterSingleton;
}
ATimeTrialPlayerController::ATimeTrialPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATimeTrialPlayerController);
ATimeTrialPlayerController::~ATimeTrialPlayerController() {}
// ********** End Class ATimeTrialPlayerController *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_TimeTrialPlayerController_h__Script_CPP_Vehicle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATimeTrialPlayerController, ATimeTrialPlayerController::StaticClass, TEXT("ATimeTrialPlayerController"), &Z_Registration_Info_UClass_ATimeTrialPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATimeTrialPlayerController), 2812129733U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_TimeTrialPlayerController_h__Script_CPP_Vehicle_1273137894(TEXT("/Script/CPP_Vehicle"),
	Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_TimeTrialPlayerController_h__Script_CPP_Vehicle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_TimeTrialPlayerController_h__Script_CPP_Vehicle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
