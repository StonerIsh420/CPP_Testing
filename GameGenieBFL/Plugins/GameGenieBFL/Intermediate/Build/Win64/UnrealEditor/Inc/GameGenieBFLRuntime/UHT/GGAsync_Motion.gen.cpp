// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Async/GGAsync_Motion.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGGAsync_Motion() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEasingFunc();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETeleportType();
GAMEGENIEBFLRUNTIME_API UClass* Z_Construct_UClass_UGGAsync_RotateAroundPoint();
GAMEGENIEBFLRUNTIME_API UClass* Z_Construct_UClass_UGGAsync_RotateAroundPoint_NoRegister();
GAMEGENIEBFLRUNTIME_API UClass* Z_Construct_UClass_UGGAsync_SmoothInterpTransform();
GAMEGENIEBFLRUNTIME_API UClass* Z_Construct_UClass_UGGAsync_SmoothInterpTransform_NoRegister();
GAMEGENIEBFLRUNTIME_API UFunction* Z_Construct_UDelegateFunction_GameGenieBFLRuntime_GGSimpleAsyncDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_GameGenieBFLRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FGGSimpleAsyncDelegate ************************************************
struct Z_Construct_UDelegateFunction_GameGenieBFLRuntime_GGSimpleAsyncDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Async/GGAsync_Motion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_GameGenieBFLRuntime_GGSimpleAsyncDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_GameGenieBFLRuntime, nullptr, "GGSimpleAsyncDelegate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_GameGenieBFLRuntime_GGSimpleAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_GameGenieBFLRuntime_GGSimpleAsyncDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_GameGenieBFLRuntime_GGSimpleAsyncDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_GameGenieBFLRuntime_GGSimpleAsyncDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FGGSimpleAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& GGSimpleAsyncDelegate)
{
	GGSimpleAsyncDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FGGSimpleAsyncDelegate **************************************************

// ********** Begin Class UGGAsync_SmoothInterpTransform Function Cancel ***************************
struct Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_Cancel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Genie BFL|Math & Transforms" },
		{ "ModuleRelativePath", "Public/Async/GGAsync_Motion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cancels the interpolation and fires Cancelled." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_Cancel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGGAsync_SmoothInterpTransform, nullptr, "Cancel", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_Cancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_Cancel_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_Cancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_Cancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGGAsync_SmoothInterpTransform::execCancel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Cancel();
	P_NATIVE_END;
}
// ********** End Class UGGAsync_SmoothInterpTransform Function Cancel *****************************

// ********** Begin Class UGGAsync_SmoothInterpTransform Function SmoothInterpolateTransform *******
struct Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics
{
	struct GGAsync_SmoothInterpTransform_eventSmoothInterpolateTransform_Parms
	{
		UObject* WorldContextObject;
		AActor* Actor;
		FTransform Target;
		float Duration;
		TEnumAsByte<EEasingFunc::Type> Easing;
		float BlendExp;
		bool bUpdateLocation;
		bool bUpdateRotation;
		bool bUpdateScale;
		bool bSweep;
		ETeleportType TeleportType;
		UGGAsync_SmoothInterpTransform* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "Easing,BlendExp,bUpdateLocation,bUpdateRotation,bUpdateScale,bSweep,TeleportType" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Game Genie BFL|Math & Transforms" },
		{ "CPP_Default_BlendExp", "2.000000" },
		{ "CPP_Default_bSweep", "false" },
		{ "CPP_Default_bUpdateLocation", "true" },
		{ "CPP_Default_bUpdateRotation", "true" },
		{ "CPP_Default_bUpdateScale", "false" },
		{ "CPP_Default_Duration", "0.500000" },
		{ "CPP_Default_Easing", "Linear" },
		{ "CPP_Default_TeleportType", "None" },
		{ "DisplayName", "Smooth Interpolate Transform" },
		{ "ModuleRelativePath", "Public/Async/GGAsync_Motion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Interpolates an Actor from its current transform to Target over Duration using Easing.\nOptional location/rotation/scale channels and sweep.\nAuthority Only for replicated actors." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Easing;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BlendExp;
	static void NewProp_bUpdateLocation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateLocation;
	static void NewProp_bUpdateRotation_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateRotation;
	static void NewProp_bUpdateScale_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUpdateScale;
	static void NewProp_bSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TeleportType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TeleportType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGAsync_SmoothInterpTransform_eventSmoothInterpolateTransform_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGAsync_SmoothInterpTransform_eventSmoothInterpolateTransform_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGAsync_SmoothInterpTransform_eventSmoothInterpolateTransform_Parms, Target), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGAsync_SmoothInterpTransform_eventSmoothInterpolateTransform_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_Easing = { "Easing", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGAsync_SmoothInterpTransform_eventSmoothInterpolateTransform_Parms, Easing), Z_Construct_UEnum_Engine_EEasingFunc, METADATA_PARAMS(0, nullptr) }; // 1955521276
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_BlendExp = { "BlendExp", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGAsync_SmoothInterpTransform_eventSmoothInterpolateTransform_Parms, BlendExp), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_bUpdateLocation_SetBit(void* Obj)
{
	((GGAsync_SmoothInterpTransform_eventSmoothInterpolateTransform_Parms*)Obj)->bUpdateLocation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_bUpdateLocation = { "bUpdateLocation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GGAsync_SmoothInterpTransform_eventSmoothInterpolateTransform_Parms), &Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_bUpdateLocation_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_bUpdateRotation_SetBit(void* Obj)
{
	((GGAsync_SmoothInterpTransform_eventSmoothInterpolateTransform_Parms*)Obj)->bUpdateRotation = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_bUpdateRotation = { "bUpdateRotation", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GGAsync_SmoothInterpTransform_eventSmoothInterpolateTransform_Parms), &Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_bUpdateRotation_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_bUpdateScale_SetBit(void* Obj)
{
	((GGAsync_SmoothInterpTransform_eventSmoothInterpolateTransform_Parms*)Obj)->bUpdateScale = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_bUpdateScale = { "bUpdateScale", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GGAsync_SmoothInterpTransform_eventSmoothInterpolateTransform_Parms), &Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_bUpdateScale_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_bSweep_SetBit(void* Obj)
{
	((GGAsync_SmoothInterpTransform_eventSmoothInterpolateTransform_Parms*)Obj)->bSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GGAsync_SmoothInterpTransform_eventSmoothInterpolateTransform_Parms), &Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_TeleportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_TeleportType = { "TeleportType", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGAsync_SmoothInterpTransform_eventSmoothInterpolateTransform_Parms, TeleportType), Z_Construct_UEnum_Engine_ETeleportType, METADATA_PARAMS(0, nullptr) }; // 1982391065
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGAsync_SmoothInterpTransform_eventSmoothInterpolateTransform_Parms, ReturnValue), Z_Construct_UClass_UGGAsync_SmoothInterpTransform_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_Easing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_BlendExp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_bUpdateLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_bUpdateRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_bUpdateScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_bSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_TeleportType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_TeleportType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGGAsync_SmoothInterpTransform, nullptr, "SmoothInterpolateTransform", Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::GGAsync_SmoothInterpTransform_eventSmoothInterpolateTransform_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::GGAsync_SmoothInterpTransform_eventSmoothInterpolateTransform_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGGAsync_SmoothInterpTransform::execSmoothInterpolateTransform)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT_REF(FTransform,Z_Param_Out_Target);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_PROPERTY(FByteProperty,Z_Param_Easing);
	P_GET_PROPERTY(FFloatProperty,Z_Param_BlendExp);
	P_GET_UBOOL(Z_Param_bUpdateLocation);
	P_GET_UBOOL(Z_Param_bUpdateRotation);
	P_GET_UBOOL(Z_Param_bUpdateScale);
	P_GET_UBOOL(Z_Param_bSweep);
	P_GET_ENUM(ETeleportType,Z_Param_TeleportType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGGAsync_SmoothInterpTransform**)Z_Param__Result=UGGAsync_SmoothInterpTransform::SmoothInterpolateTransform(Z_Param_WorldContextObject,Z_Param_Actor,Z_Param_Out_Target,Z_Param_Duration,EEasingFunc::Type(Z_Param_Easing),Z_Param_BlendExp,Z_Param_bUpdateLocation,Z_Param_bUpdateRotation,Z_Param_bUpdateScale,Z_Param_bSweep,ETeleportType(Z_Param_TeleportType));
	P_NATIVE_END;
}
// ********** End Class UGGAsync_SmoothInterpTransform Function SmoothInterpolateTransform *********

// ********** Begin Class UGGAsync_SmoothInterpTransform *******************************************
void UGGAsync_SmoothInterpTransform::StaticRegisterNativesUGGAsync_SmoothInterpTransform()
{
	UClass* Class = UGGAsync_SmoothInterpTransform::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Cancel", &UGGAsync_SmoothInterpTransform::execCancel },
		{ "SmoothInterpolateTransform", &UGGAsync_SmoothInterpTransform::execSmoothInterpolateTransform },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGGAsync_SmoothInterpTransform;
UClass* UGGAsync_SmoothInterpTransform::GetPrivateStaticClass()
{
	using TClass = UGGAsync_SmoothInterpTransform;
	if (!Z_Registration_Info_UClass_UGGAsync_SmoothInterpTransform.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GGAsync_SmoothInterpTransform"),
			Z_Registration_Info_UClass_UGGAsync_SmoothInterpTransform.InnerSingleton,
			StaticRegisterNativesUGGAsync_SmoothInterpTransform,
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
	return Z_Registration_Info_UClass_UGGAsync_SmoothInterpTransform.InnerSingleton;
}
UClass* Z_Construct_UClass_UGGAsync_SmoothInterpTransform_NoRegister()
{
	return UGGAsync_SmoothInterpTransform::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGGAsync_SmoothInterpTransform_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Smoothly interpolates an Actor to a target transform over time using an easing curve.\n * \\nAuthority Only: this changes replicated world state; run on the server for networked actors.\n */" },
#endif
		{ "IncludePath", "Async/GGAsync_Motion.h" },
		{ "ModuleRelativePath", "Public/Async/GGAsync_Motion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Smoothly interpolates an Actor to a target transform over time using an easing curve.\n\\nAuthority Only: this changes replicated world state; run on the server for networked actors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[] = {
		{ "Category", "Game Genie BFL|Math & Transforms" },
		{ "ModuleRelativePath", "Public/Async/GGAsync_Motion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cancelled_MetaData[] = {
		{ "Category", "Game Genie BFL|Math & Transforms" },
		{ "ModuleRelativePath", "Public/Async/GGAsync_Motion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Cancelled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_Cancel, "Cancel" }, // 1493254710
		{ &Z_Construct_UFunction_UGGAsync_SmoothInterpTransform_SmoothInterpolateTransform, "SmoothInterpolateTransform" }, // 2200367231
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGGAsync_SmoothInterpTransform>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGGAsync_SmoothInterpTransform_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGGAsync_SmoothInterpTransform, Completed), Z_Construct_UDelegateFunction_GameGenieBFLRuntime_GGSimpleAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Completed_MetaData), NewProp_Completed_MetaData) }; // 4202939354
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGGAsync_SmoothInterpTransform_Statics::NewProp_Cancelled = { "Cancelled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGGAsync_SmoothInterpTransform, Cancelled), Z_Construct_UDelegateFunction_GameGenieBFLRuntime_GGSimpleAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cancelled_MetaData), NewProp_Cancelled_MetaData) }; // 4202939354
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGGAsync_SmoothInterpTransform_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGAsync_SmoothInterpTransform_Statics::NewProp_Completed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGAsync_SmoothInterpTransform_Statics::NewProp_Cancelled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGGAsync_SmoothInterpTransform_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGGAsync_SmoothInterpTransform_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GameGenieBFLRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGGAsync_SmoothInterpTransform_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGGAsync_SmoothInterpTransform_Statics::ClassParams = {
	&UGGAsync_SmoothInterpTransform::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGGAsync_SmoothInterpTransform_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGGAsync_SmoothInterpTransform_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGGAsync_SmoothInterpTransform_Statics::Class_MetaDataParams), Z_Construct_UClass_UGGAsync_SmoothInterpTransform_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGGAsync_SmoothInterpTransform()
{
	if (!Z_Registration_Info_UClass_UGGAsync_SmoothInterpTransform.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGGAsync_SmoothInterpTransform.OuterSingleton, Z_Construct_UClass_UGGAsync_SmoothInterpTransform_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGGAsync_SmoothInterpTransform.OuterSingleton;
}
UGGAsync_SmoothInterpTransform::UGGAsync_SmoothInterpTransform(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGGAsync_SmoothInterpTransform);
UGGAsync_SmoothInterpTransform::~UGGAsync_SmoothInterpTransform() {}
// ********** End Class UGGAsync_SmoothInterpTransform *********************************************

// ********** Begin Class UGGAsync_RotateAroundPoint Function Cancel *******************************
struct Z_Construct_UFunction_UGGAsync_RotateAroundPoint_Cancel_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Genie BFL|Math & Transforms" },
		{ "ModuleRelativePath", "Public/Async/GGAsync_Motion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cancels the orbit and fires Cancelled." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGAsync_RotateAroundPoint_Cancel_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGGAsync_RotateAroundPoint, nullptr, "Cancel", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGAsync_RotateAroundPoint_Cancel_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGGAsync_RotateAroundPoint_Cancel_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UGGAsync_RotateAroundPoint_Cancel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGAsync_RotateAroundPoint_Cancel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGGAsync_RotateAroundPoint::execCancel)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Cancel();
	P_NATIVE_END;
}
// ********** End Class UGGAsync_RotateAroundPoint Function Cancel *********************************

// ********** Begin Class UGGAsync_RotateAroundPoint Function RotateActorAroundPoint ***************
struct Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics
{
	struct GGAsync_RotateAroundPoint_eventRotateActorAroundPoint_Parms
	{
		UObject* WorldContextObject;
		AActor* Actor;
		FVector Center;
		FVector Axis;
		float AngularSpeedDegPerSec;
		float Duration;
		bool bSweep;
		ETeleportType TeleportType;
		UGGAsync_RotateAroundPoint* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "bSweep,TeleportType" },
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Game Genie BFL|Math & Transforms" },
		{ "CPP_Default_AngularSpeedDegPerSec", "90.000000" },
		{ "CPP_Default_bSweep", "false" },
		{ "CPP_Default_Duration", "1.000000" },
		{ "CPP_Default_TeleportType", "None" },
		{ "DisplayName", "Rotate Actor Around Point" },
		{ "ModuleRelativePath", "Public/Async/GGAsync_Motion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Orbits Actor around Center along Axis at AngularSpeed (deg/sec) for Duration.\nUseful for simple orbit cams and gameplay setpieces.\nAuthority Only for replicated actors." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Axis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngularSpeedDegPerSec;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static void NewProp_bSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TeleportType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TeleportType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGAsync_RotateAroundPoint_eventRotateActorAroundPoint_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGAsync_RotateAroundPoint_eventRotateActorAroundPoint_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGAsync_RotateAroundPoint_eventRotateActorAroundPoint_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGAsync_RotateAroundPoint_eventRotateActorAroundPoint_Parms, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axis_MetaData), NewProp_Axis_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::NewProp_AngularSpeedDegPerSec = { "AngularSpeedDegPerSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGAsync_RotateAroundPoint_eventRotateActorAroundPoint_Parms, AngularSpeedDegPerSec), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGAsync_RotateAroundPoint_eventRotateActorAroundPoint_Parms, Duration), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::NewProp_bSweep_SetBit(void* Obj)
{
	((GGAsync_RotateAroundPoint_eventRotateActorAroundPoint_Parms*)Obj)->bSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GGAsync_RotateAroundPoint_eventRotateActorAroundPoint_Parms), &Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::NewProp_TeleportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::NewProp_TeleportType = { "TeleportType", nullptr, (EPropertyFlags)0x0010040000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGAsync_RotateAroundPoint_eventRotateActorAroundPoint_Parms, TeleportType), Z_Construct_UEnum_Engine_ETeleportType, METADATA_PARAMS(0, nullptr) }; // 1982391065
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGAsync_RotateAroundPoint_eventRotateActorAroundPoint_Parms, ReturnValue), Z_Construct_UClass_UGGAsync_RotateAroundPoint_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::NewProp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::NewProp_AngularSpeedDegPerSec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::NewProp_Duration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::NewProp_bSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::NewProp_TeleportType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::NewProp_TeleportType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGGAsync_RotateAroundPoint, nullptr, "RotateActorAroundPoint", Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::GGAsync_RotateAroundPoint_eventRotateActorAroundPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::GGAsync_RotateAroundPoint_eventRotateActorAroundPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGGAsync_RotateAroundPoint::execRotateActorAroundPoint)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Center);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Axis);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AngularSpeedDegPerSec);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_GET_UBOOL(Z_Param_bSweep);
	P_GET_ENUM(ETeleportType,Z_Param_TeleportType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UGGAsync_RotateAroundPoint**)Z_Param__Result=UGGAsync_RotateAroundPoint::RotateActorAroundPoint(Z_Param_WorldContextObject,Z_Param_Actor,Z_Param_Out_Center,Z_Param_Out_Axis,Z_Param_AngularSpeedDegPerSec,Z_Param_Duration,Z_Param_bSweep,ETeleportType(Z_Param_TeleportType));
	P_NATIVE_END;
}
// ********** End Class UGGAsync_RotateAroundPoint Function RotateActorAroundPoint *****************

// ********** Begin Class UGGAsync_RotateAroundPoint ***********************************************
void UGGAsync_RotateAroundPoint::StaticRegisterNativesUGGAsync_RotateAroundPoint()
{
	UClass* Class = UGGAsync_RotateAroundPoint::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Cancel", &UGGAsync_RotateAroundPoint::execCancel },
		{ "RotateActorAroundPoint", &UGGAsync_RotateAroundPoint::execRotateActorAroundPoint },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGGAsync_RotateAroundPoint;
UClass* UGGAsync_RotateAroundPoint::GetPrivateStaticClass()
{
	using TClass = UGGAsync_RotateAroundPoint;
	if (!Z_Registration_Info_UClass_UGGAsync_RotateAroundPoint.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GGAsync_RotateAroundPoint"),
			Z_Registration_Info_UClass_UGGAsync_RotateAroundPoint.InnerSingleton,
			StaticRegisterNativesUGGAsync_RotateAroundPoint,
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
	return Z_Registration_Info_UClass_UGGAsync_RotateAroundPoint.InnerSingleton;
}
UClass* Z_Construct_UClass_UGGAsync_RotateAroundPoint_NoRegister()
{
	return UGGAsync_RotateAroundPoint::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGGAsync_RotateAroundPoint_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Rotates/moves an Actor around a world-space point along an axis at a constant angular speed.\n * \\nAuthority Only: this changes replicated world state; run on the server for networked actors.\n */" },
#endif
		{ "IncludePath", "Async/GGAsync_Motion.h" },
		{ "ModuleRelativePath", "Public/Async/GGAsync_Motion.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Rotates/moves an Actor around a world-space point along an axis at a constant angular speed.\n\\nAuthority Only: this changes replicated world state; run on the server for networked actors." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[] = {
		{ "Category", "Game Genie BFL|Math & Transforms" },
		{ "ModuleRelativePath", "Public/Async/GGAsync_Motion.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cancelled_MetaData[] = {
		{ "Category", "Game Genie BFL|Math & Transforms" },
		{ "ModuleRelativePath", "Public/Async/GGAsync_Motion.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Completed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_Cancelled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGGAsync_RotateAroundPoint_Cancel, "Cancel" }, // 2214651021
		{ &Z_Construct_UFunction_UGGAsync_RotateAroundPoint_RotateActorAroundPoint, "RotateActorAroundPoint" }, // 3209758575
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGGAsync_RotateAroundPoint>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGGAsync_RotateAroundPoint_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGGAsync_RotateAroundPoint, Completed), Z_Construct_UDelegateFunction_GameGenieBFLRuntime_GGSimpleAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Completed_MetaData), NewProp_Completed_MetaData) }; // 4202939354
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGGAsync_RotateAroundPoint_Statics::NewProp_Cancelled = { "Cancelled", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGGAsync_RotateAroundPoint, Cancelled), Z_Construct_UDelegateFunction_GameGenieBFLRuntime_GGSimpleAsyncDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cancelled_MetaData), NewProp_Cancelled_MetaData) }; // 4202939354
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGGAsync_RotateAroundPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGAsync_RotateAroundPoint_Statics::NewProp_Completed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGGAsync_RotateAroundPoint_Statics::NewProp_Cancelled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGGAsync_RotateAroundPoint_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGGAsync_RotateAroundPoint_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GameGenieBFLRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGGAsync_RotateAroundPoint_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGGAsync_RotateAroundPoint_Statics::ClassParams = {
	&UGGAsync_RotateAroundPoint::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGGAsync_RotateAroundPoint_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGGAsync_RotateAroundPoint_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGGAsync_RotateAroundPoint_Statics::Class_MetaDataParams), Z_Construct_UClass_UGGAsync_RotateAroundPoint_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGGAsync_RotateAroundPoint()
{
	if (!Z_Registration_Info_UClass_UGGAsync_RotateAroundPoint.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGGAsync_RotateAroundPoint.OuterSingleton, Z_Construct_UClass_UGGAsync_RotateAroundPoint_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGGAsync_RotateAroundPoint.OuterSingleton;
}
UGGAsync_RotateAroundPoint::UGGAsync_RotateAroundPoint(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGGAsync_RotateAroundPoint);
UGGAsync_RotateAroundPoint::~UGGAsync_RotateAroundPoint() {}
// ********** End Class UGGAsync_RotateAroundPoint *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Async_GGAsync_Motion_h__Script_GameGenieBFLRuntime_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGGAsync_SmoothInterpTransform, UGGAsync_SmoothInterpTransform::StaticClass, TEXT("UGGAsync_SmoothInterpTransform"), &Z_Registration_Info_UClass_UGGAsync_SmoothInterpTransform, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGGAsync_SmoothInterpTransform), 1308094923U) },
		{ Z_Construct_UClass_UGGAsync_RotateAroundPoint, UGGAsync_RotateAroundPoint::StaticClass, TEXT("UGGAsync_RotateAroundPoint"), &Z_Registration_Info_UClass_UGGAsync_RotateAroundPoint, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGGAsync_RotateAroundPoint), 1160042580U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Async_GGAsync_Motion_h__Script_GameGenieBFLRuntime_473307777(TEXT("/Script/GameGenieBFLRuntime"),
	Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Async_GGAsync_Motion_h__Script_GameGenieBFLRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Async_GGAsync_Motion_h__Script_GameGenieBFLRuntime_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
