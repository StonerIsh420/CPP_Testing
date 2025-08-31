// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Math/GGMathLibrary.h"
#include "Engine/HitResult.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGGMathLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETeleportType();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
GAMEGENIEBFLRUNTIME_API UClass* Z_Construct_UClass_UGGMathLibrary();
GAMEGENIEBFLRUNTIME_API UClass* Z_Construct_UClass_UGGMathLibrary_NoRegister();
GAMEGENIEBFLRUNTIME_API UEnum* Z_Construct_UEnum_GameGenieBFLRuntime_EGGCompareResult();
UPackage* Z_Construct_UPackage__Script_GameGenieBFLRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EGGCompareResult **********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGGCompareResult;
static UEnum* EGGCompareResult_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGGCompareResult.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGGCompareResult.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameGenieBFLRuntime_EGGCompareResult, (UObject*)Z_Construct_UPackage__Script_GameGenieBFLRuntime(), TEXT("EGGCompareResult"));
	}
	return Z_Registration_Info_UEnum_EGGCompareResult.OuterSingleton;
}
template<> GAMEGENIEBFLRUNTIME_API UEnum* StaticEnum<EGGCompareResult>()
{
	return EGGCompareResult_StaticEnum();
}
struct Z_Construct_UEnum_GameGenieBFLRuntime_EGGCompareResult_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Better.Name", "EGGCompareResult::Better" },
		{ "BlueprintType", "true" },
		{ "Equal.Name", "EGGCompareResult::Equal" },
		{ "ModuleRelativePath", "Public/Math/GGMathLibrary.h" },
		{ "Worse.Name", "EGGCompareResult::Worse" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGGCompareResult::Better", (int64)EGGCompareResult::Better },
		{ "EGGCompareResult::Worse", (int64)EGGCompareResult::Worse },
		{ "EGGCompareResult::Equal", (int64)EGGCompareResult::Equal },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameGenieBFLRuntime_EGGCompareResult_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameGenieBFLRuntime,
	nullptr,
	"EGGCompareResult",
	"EGGCompareResult",
	Z_Construct_UEnum_GameGenieBFLRuntime_EGGCompareResult_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameGenieBFLRuntime_EGGCompareResult_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameGenieBFLRuntime_EGGCompareResult_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameGenieBFLRuntime_EGGCompareResult_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameGenieBFLRuntime_EGGCompareResult()
{
	if (!Z_Registration_Info_UEnum_EGGCompareResult.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGGCompareResult.InnerSingleton, Z_Construct_UEnum_GameGenieBFLRuntime_EGGCompareResult_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGGCompareResult.InnerSingleton;
}
// ********** End Enum EGGCompareResult ************************************************************

// ********** Begin Class UGGMathLibrary Function CalculateArcTrajectoryPoints *********************
struct Z_Construct_UFunction_UGGMathLibrary_CalculateArcTrajectoryPoints_Statics
{
	struct GGMathLibrary_eventCalculateArcTrajectoryPoints_Parms
	{
		FVector Start;
		FVector End;
		float ApexHeight;
		int32 NumPoints;
		TArray<FVector> OutPoints;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Genie BFL|Math & Transforms" },
		{ "DisplayName", "Calculate Arc Trajectory Points" },
		{ "ModuleRelativePath", "Public/Math/GGMathLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generates a simple parabola from Start to End with a chosen apex height.\nReturns NumPoints along the arc.\nPure; does not simulate physics." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Start_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_End_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Start;
	static const UECodeGen_Private::FStructPropertyParams NewProp_End;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ApexHeight;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPoints;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutPoints_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutPoints;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_CalculateArcTrajectoryPoints_Statics::NewProp_Start = { "Start", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventCalculateArcTrajectoryPoints_Parms, Start), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Start_MetaData), NewProp_Start_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_CalculateArcTrajectoryPoints_Statics::NewProp_End = { "End", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventCalculateArcTrajectoryPoints_Parms, End), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_End_MetaData), NewProp_End_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGMathLibrary_CalculateArcTrajectoryPoints_Statics::NewProp_ApexHeight = { "ApexHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventCalculateArcTrajectoryPoints_Parms, ApexHeight), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGGMathLibrary_CalculateArcTrajectoryPoints_Statics::NewProp_NumPoints = { "NumPoints", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventCalculateArcTrajectoryPoints_Parms, NumPoints), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_CalculateArcTrajectoryPoints_Statics::NewProp_OutPoints_Inner = { "OutPoints", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UGGMathLibrary_CalculateArcTrajectoryPoints_Statics::NewProp_OutPoints = { "OutPoints", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventCalculateArcTrajectoryPoints_Parms, OutPoints), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGGMathLibrary_CalculateArcTrajectoryPoints_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_CalculateArcTrajectoryPoints_Statics::NewProp_Start,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_CalculateArcTrajectoryPoints_Statics::NewProp_End,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_CalculateArcTrajectoryPoints_Statics::NewProp_ApexHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_CalculateArcTrajectoryPoints_Statics::NewProp_NumPoints,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_CalculateArcTrajectoryPoints_Statics::NewProp_OutPoints_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_CalculateArcTrajectoryPoints_Statics::NewProp_OutPoints,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_CalculateArcTrajectoryPoints_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGMathLibrary_CalculateArcTrajectoryPoints_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGGMathLibrary, nullptr, "CalculateArcTrajectoryPoints", Z_Construct_UFunction_UGGMathLibrary_CalculateArcTrajectoryPoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_CalculateArcTrajectoryPoints_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGGMathLibrary_CalculateArcTrajectoryPoints_Statics::GGMathLibrary_eventCalculateArcTrajectoryPoints_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_CalculateArcTrajectoryPoints_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGGMathLibrary_CalculateArcTrajectoryPoints_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGGMathLibrary_CalculateArcTrajectoryPoints_Statics::GGMathLibrary_eventCalculateArcTrajectoryPoints_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGGMathLibrary_CalculateArcTrajectoryPoints()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGMathLibrary_CalculateArcTrajectoryPoints_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGGMathLibrary::execCalculateArcTrajectoryPoints)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Start);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_End);
	P_GET_PROPERTY(FFloatProperty,Z_Param_ApexHeight);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumPoints);
	P_GET_TARRAY_REF(FVector,Z_Param_Out_OutPoints);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGGMathLibrary::CalculateArcTrajectoryPoints(Z_Param_Out_Start,Z_Param_Out_End,Z_Param_ApexHeight,Z_Param_NumPoints,Z_Param_Out_OutPoints);
	P_NATIVE_END;
}
// ********** End Class UGGMathLibrary Function CalculateArcTrajectoryPoints ***********************

// ********** Begin Class UGGMathLibrary Function CalculateDeflectionVector ************************
struct Z_Construct_UFunction_UGGMathLibrary_CalculateDeflectionVector_Statics
{
	struct GGMathLibrary_eventCalculateDeflectionVector_Parms
	{
		FVector IncomingDir;
		FVector SurfaceNormal;
		float Restitution;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Genie BFL|Math & Transforms" },
		{ "CPP_Default_Restitution", "1.000000" },
		{ "DisplayName", "Calculate Deflection Vector" },
		{ "ModuleRelativePath", "Public/Math/GGMathLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Reflects IncomingDir around SurfaceNormal.\nPreserves speed; scales by Restitution for bounciness." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IncomingDir_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SurfaceNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_IncomingDir;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SurfaceNormal;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Restitution;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_CalculateDeflectionVector_Statics::NewProp_IncomingDir = { "IncomingDir", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventCalculateDeflectionVector_Parms, IncomingDir), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IncomingDir_MetaData), NewProp_IncomingDir_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_CalculateDeflectionVector_Statics::NewProp_SurfaceNormal = { "SurfaceNormal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventCalculateDeflectionVector_Parms, SurfaceNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SurfaceNormal_MetaData), NewProp_SurfaceNormal_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGMathLibrary_CalculateDeflectionVector_Statics::NewProp_Restitution = { "Restitution", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventCalculateDeflectionVector_Parms, Restitution), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_CalculateDeflectionVector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventCalculateDeflectionVector_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGGMathLibrary_CalculateDeflectionVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_CalculateDeflectionVector_Statics::NewProp_IncomingDir,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_CalculateDeflectionVector_Statics::NewProp_SurfaceNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_CalculateDeflectionVector_Statics::NewProp_Restitution,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_CalculateDeflectionVector_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_CalculateDeflectionVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGMathLibrary_CalculateDeflectionVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGGMathLibrary, nullptr, "CalculateDeflectionVector", Z_Construct_UFunction_UGGMathLibrary_CalculateDeflectionVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_CalculateDeflectionVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGGMathLibrary_CalculateDeflectionVector_Statics::GGMathLibrary_eventCalculateDeflectionVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_CalculateDeflectionVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGGMathLibrary_CalculateDeflectionVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGGMathLibrary_CalculateDeflectionVector_Statics::GGMathLibrary_eventCalculateDeflectionVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGGMathLibrary_CalculateDeflectionVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGMathLibrary_CalculateDeflectionVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGGMathLibrary::execCalculateDeflectionVector)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_IncomingDir);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_SurfaceNormal);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Restitution);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UGGMathLibrary::CalculateDeflectionVector(Z_Param_Out_IncomingDir,Z_Param_Out_SurfaceNormal,Z_Param_Restitution);
	P_NATIVE_END;
}
// ********** End Class UGGMathLibrary Function CalculateDeflectionVector **************************

// ********** Begin Class UGGMathLibrary Function GetClosestPointOnSpline **************************
struct Z_Construct_UFunction_UGGMathLibrary_GetClosestPointOnSpline_Statics
{
	struct GGMathLibrary_eventGetClosestPointOnSpline_Parms
	{
		USplineComponent* Spline;
		FVector WorldLocation;
		float OutDistanceAlongSpline;
		float OutInputKey;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Genie BFL|Math & Transforms" },
		{ "DisplayName", "Get Closest Point on Spline" },
		{ "ModuleRelativePath", "Public/Math/GGMathLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds the closest point to WorldLocation on Spline.\nAlso outputs distance along spline and the input key." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutDistanceAlongSpline;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutInputKey;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGGMathLibrary_GetClosestPointOnSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventGetClosestPointOnSpline_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_GetClosestPointOnSpline_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventGetClosestPointOnSpline_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldLocation_MetaData), NewProp_WorldLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGMathLibrary_GetClosestPointOnSpline_Statics::NewProp_OutDistanceAlongSpline = { "OutDistanceAlongSpline", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventGetClosestPointOnSpline_Parms, OutDistanceAlongSpline), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGMathLibrary_GetClosestPointOnSpline_Statics::NewProp_OutInputKey = { "OutInputKey", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventGetClosestPointOnSpline_Parms, OutInputKey), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_GetClosestPointOnSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventGetClosestPointOnSpline_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGGMathLibrary_GetClosestPointOnSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_GetClosestPointOnSpline_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_GetClosestPointOnSpline_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_GetClosestPointOnSpline_Statics::NewProp_OutDistanceAlongSpline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_GetClosestPointOnSpline_Statics::NewProp_OutInputKey,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_GetClosestPointOnSpline_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_GetClosestPointOnSpline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGMathLibrary_GetClosestPointOnSpline_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGGMathLibrary, nullptr, "GetClosestPointOnSpline", Z_Construct_UFunction_UGGMathLibrary_GetClosestPointOnSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_GetClosestPointOnSpline_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGGMathLibrary_GetClosestPointOnSpline_Statics::GGMathLibrary_eventGetClosestPointOnSpline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_GetClosestPointOnSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGGMathLibrary_GetClosestPointOnSpline_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGGMathLibrary_GetClosestPointOnSpline_Statics::GGMathLibrary_eventGetClosestPointOnSpline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGGMathLibrary_GetClosestPointOnSpline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGMathLibrary_GetClosestPointOnSpline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGGMathLibrary::execGetClosestPointOnSpline)
{
	P_GET_OBJECT(USplineComponent,Z_Param_Spline);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutDistanceAlongSpline);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutInputKey);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UGGMathLibrary::GetClosestPointOnSpline(Z_Param_Spline,Z_Param_Out_WorldLocation,Z_Param_Out_OutDistanceAlongSpline,Z_Param_Out_OutInputKey);
	P_NATIVE_END;
}
// ********** End Class UGGMathLibrary Function GetClosestPointOnSpline ****************************

// ********** Begin Class UGGMathLibrary Function GetHelixPoint ************************************
struct Z_Construct_UFunction_UGGMathLibrary_GetHelixPoint_Statics
{
	struct GGMathLibrary_eventGetHelixPoint_Parms
	{
		FVector Center;
		FVector Axis;
		float Radius;
		float PitchPerTurn;
		float AngleDegrees;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Genie BFL|Math & Transforms" },
		{ "DisplayName", "Get Helix Point" },
		{ "ModuleRelativePath", "Public/Math/GGMathLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculates a point on a helix about Axis with given Radius and PitchPerTurn at AngleDegrees.\nUseful for spiral paths and VFX." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Center_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Axis_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Center;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Axis;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PitchPerTurn;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AngleDegrees;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_GetHelixPoint_Statics::NewProp_Center = { "Center", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventGetHelixPoint_Parms, Center), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Center_MetaData), NewProp_Center_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_GetHelixPoint_Statics::NewProp_Axis = { "Axis", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventGetHelixPoint_Parms, Axis), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Axis_MetaData), NewProp_Axis_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGMathLibrary_GetHelixPoint_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventGetHelixPoint_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGMathLibrary_GetHelixPoint_Statics::NewProp_PitchPerTurn = { "PitchPerTurn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventGetHelixPoint_Parms, PitchPerTurn), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGMathLibrary_GetHelixPoint_Statics::NewProp_AngleDegrees = { "AngleDegrees", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventGetHelixPoint_Parms, AngleDegrees), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_GetHelixPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventGetHelixPoint_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGGMathLibrary_GetHelixPoint_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_GetHelixPoint_Statics::NewProp_Center,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_GetHelixPoint_Statics::NewProp_Axis,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_GetHelixPoint_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_GetHelixPoint_Statics::NewProp_PitchPerTurn,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_GetHelixPoint_Statics::NewProp_AngleDegrees,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_GetHelixPoint_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_GetHelixPoint_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGMathLibrary_GetHelixPoint_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGGMathLibrary, nullptr, "GetHelixPoint", Z_Construct_UFunction_UGGMathLibrary_GetHelixPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_GetHelixPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGGMathLibrary_GetHelixPoint_Statics::GGMathLibrary_eventGetHelixPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_GetHelixPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGGMathLibrary_GetHelixPoint_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGGMathLibrary_GetHelixPoint_Statics::GGMathLibrary_eventGetHelixPoint_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGGMathLibrary_GetHelixPoint()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGMathLibrary_GetHelixPoint_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGGMathLibrary::execGetHelixPoint)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Center);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Axis);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_PROPERTY(FFloatProperty,Z_Param_PitchPerTurn);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AngleDegrees);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UGGMathLibrary::GetHelixPoint(Z_Param_Out_Center,Z_Param_Out_Axis,Z_Param_Radius,Z_Param_PitchPerTurn,Z_Param_AngleDegrees);
	P_NATIVE_END;
}
// ********** End Class UGGMathLibrary Function GetHelixPoint **************************************

// ********** Begin Class UGGMathLibrary Function GetMirroredLocation ******************************
struct Z_Construct_UFunction_UGGMathLibrary_GetMirroredLocation_Statics
{
	struct GGMathLibrary_eventGetMirroredLocation_Parms
	{
		FVector Point;
		FVector PlaneOrigin;
		FVector PlaneNormal;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Genie BFL|Math & Transforms" },
		{ "DisplayName", "Get Mirrored Location" },
		{ "ModuleRelativePath", "Public/Math/GGMathLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mirrors Point across the plane defined by PlaneOrigin and PlaneNormal." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaneNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Point;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneOrigin;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlaneNormal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_GetMirroredLocation_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventGetMirroredLocation_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Point_MetaData), NewProp_Point_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_GetMirroredLocation_Statics::NewProp_PlaneOrigin = { "PlaneOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventGetMirroredLocation_Parms, PlaneOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneOrigin_MetaData), NewProp_PlaneOrigin_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_GetMirroredLocation_Statics::NewProp_PlaneNormal = { "PlaneNormal", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventGetMirroredLocation_Parms, PlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaneNormal_MetaData), NewProp_PlaneNormal_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_GetMirroredLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventGetMirroredLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGGMathLibrary_GetMirroredLocation_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_GetMirroredLocation_Statics::NewProp_Point,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_GetMirroredLocation_Statics::NewProp_PlaneOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_GetMirroredLocation_Statics::NewProp_PlaneNormal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_GetMirroredLocation_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_GetMirroredLocation_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGMathLibrary_GetMirroredLocation_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGGMathLibrary, nullptr, "GetMirroredLocation", Z_Construct_UFunction_UGGMathLibrary_GetMirroredLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_GetMirroredLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGGMathLibrary_GetMirroredLocation_Statics::GGMathLibrary_eventGetMirroredLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_GetMirroredLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGGMathLibrary_GetMirroredLocation_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGGMathLibrary_GetMirroredLocation_Statics::GGMathLibrary_eventGetMirroredLocation_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGGMathLibrary_GetMirroredLocation()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGMathLibrary_GetMirroredLocation_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGGMathLibrary::execGetMirroredLocation)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Point);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_PlaneOrigin);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_PlaneNormal);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UGGMathLibrary::GetMirroredLocation(Z_Param_Out_Point,Z_Param_Out_PlaneOrigin,Z_Param_Out_PlaneNormal);
	P_NATIVE_END;
}
// ********** End Class UGGMathLibrary Function GetMirroredLocation ********************************

// ********** Begin Class UGGMathLibrary Function GetPercentageAlongSpline *************************
struct Z_Construct_UFunction_UGGMathLibrary_GetPercentageAlongSpline_Statics
{
	struct GGMathLibrary_eventGetPercentageAlongSpline_Parms
	{
		USplineComponent* Spline;
		FVector WorldLocation;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Genie BFL|Math & Transforms" },
		{ "DisplayName", "Get Percentage Along Spline" },
		{ "ModuleRelativePath", "Public/Math/GGMathLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns 0\xe2\x80\x93""1 percentage along Spline for the closest point to WorldLocation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Spline;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WorldLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGGMathLibrary_GetPercentageAlongSpline_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventGetPercentageAlongSpline_Parms, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Spline_MetaData), NewProp_Spline_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_GetPercentageAlongSpline_Statics::NewProp_WorldLocation = { "WorldLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventGetPercentageAlongSpline_Parms, WorldLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldLocation_MetaData), NewProp_WorldLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGMathLibrary_GetPercentageAlongSpline_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventGetPercentageAlongSpline_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGGMathLibrary_GetPercentageAlongSpline_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_GetPercentageAlongSpline_Statics::NewProp_Spline,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_GetPercentageAlongSpline_Statics::NewProp_WorldLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_GetPercentageAlongSpline_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_GetPercentageAlongSpline_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGMathLibrary_GetPercentageAlongSpline_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGGMathLibrary, nullptr, "GetPercentageAlongSpline", Z_Construct_UFunction_UGGMathLibrary_GetPercentageAlongSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_GetPercentageAlongSpline_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGGMathLibrary_GetPercentageAlongSpline_Statics::GGMathLibrary_eventGetPercentageAlongSpline_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_GetPercentageAlongSpline_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGGMathLibrary_GetPercentageAlongSpline_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGGMathLibrary_GetPercentageAlongSpline_Statics::GGMathLibrary_eventGetPercentageAlongSpline_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGGMathLibrary_GetPercentageAlongSpline()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGMathLibrary_GetPercentageAlongSpline_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGGMathLibrary::execGetPercentageAlongSpline)
{
	P_GET_OBJECT(USplineComponent,Z_Param_Spline);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_WorldLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UGGMathLibrary::GetPercentageAlongSpline(Z_Param_Spline,Z_Param_Out_WorldLocation);
	P_NATIVE_END;
}
// ********** End Class UGGMathLibrary Function GetPercentageAlongSpline ***************************

// ********** Begin Class UGGMathLibrary Function GetRandomPointInNavMeshRadius ********************
struct Z_Construct_UFunction_UGGMathLibrary_GetRandomPointInNavMeshRadius_Statics
{
	struct GGMathLibrary_eventGetRandomPointInNavMeshRadius_Parms
	{
		UObject* WorldContextObject;
		FVector Origin;
		float Radius;
		FVector OutLocation;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Genie BFL|Math & Transforms" },
		{ "DisplayName", "Get Random Point in NavMesh Radius" },
		{ "ModuleRelativePath", "Public/Math/GGMathLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets a random REACHABLE point on the NavMesh within Radius of Origin.\nReturns false if no valid point is found." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Origin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Origin;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Radius;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutLocation;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGGMathLibrary_GetRandomPointInNavMeshRadius_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventGetRandomPointInNavMeshRadius_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_GetRandomPointInNavMeshRadius_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventGetRandomPointInNavMeshRadius_Parms, Origin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Origin_MetaData), NewProp_Origin_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGMathLibrary_GetRandomPointInNavMeshRadius_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventGetRandomPointInNavMeshRadius_Parms, Radius), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_GetRandomPointInNavMeshRadius_Statics::NewProp_OutLocation = { "OutLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventGetRandomPointInNavMeshRadius_Parms, OutLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGGMathLibrary_GetRandomPointInNavMeshRadius_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GGMathLibrary_eventGetRandomPointInNavMeshRadius_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGGMathLibrary_GetRandomPointInNavMeshRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GGMathLibrary_eventGetRandomPointInNavMeshRadius_Parms), &Z_Construct_UFunction_UGGMathLibrary_GetRandomPointInNavMeshRadius_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGGMathLibrary_GetRandomPointInNavMeshRadius_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_GetRandomPointInNavMeshRadius_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_GetRandomPointInNavMeshRadius_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_GetRandomPointInNavMeshRadius_Statics::NewProp_Radius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_GetRandomPointInNavMeshRadius_Statics::NewProp_OutLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_GetRandomPointInNavMeshRadius_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_GetRandomPointInNavMeshRadius_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGMathLibrary_GetRandomPointInNavMeshRadius_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGGMathLibrary, nullptr, "GetRandomPointInNavMeshRadius", Z_Construct_UFunction_UGGMathLibrary_GetRandomPointInNavMeshRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_GetRandomPointInNavMeshRadius_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGGMathLibrary_GetRandomPointInNavMeshRadius_Statics::GGMathLibrary_eventGetRandomPointInNavMeshRadius_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_GetRandomPointInNavMeshRadius_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGGMathLibrary_GetRandomPointInNavMeshRadius_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGGMathLibrary_GetRandomPointInNavMeshRadius_Statics::GGMathLibrary_eventGetRandomPointInNavMeshRadius_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGGMathLibrary_GetRandomPointInNavMeshRadius()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGMathLibrary_GetRandomPointInNavMeshRadius_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGGMathLibrary::execGetRandomPointInNavMeshRadius)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Origin);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Radius);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutLocation);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGGMathLibrary::GetRandomPointInNavMeshRadius(Z_Param_WorldContextObject,Z_Param_Out_Origin,Z_Param_Radius,Z_Param_Out_OutLocation);
	P_NATIVE_END;
}
// ********** End Class UGGMathLibrary Function GetRandomPointInNavMeshRadius **********************

// ********** Begin Class UGGMathLibrary Function LookAtWithDampening ******************************
struct Z_Construct_UFunction_UGGMathLibrary_LookAtWithDampening_Statics
{
	struct GGMathLibrary_eventLookAtWithDampening_Parms
	{
		AActor* Actor;
		FVector TargetLocation;
		float InterpSpeed;
		float DeltaTime;
		bool bYawOnly;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Genie BFL|Math & Transforms" },
		{ "CPP_Default_bYawOnly", "true" },
		{ "CPP_Default_DeltaTime", "0.000000" },
		{ "CPP_Default_InterpSpeed", "6.000000" },
		{ "DisplayName", "Look At with Dampening" },
		{ "ModuleRelativePath", "Public/Math/GGMathLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Smoothly rotates an Actor to face TargetLocation.\nUse bYawOnly to preserve Pitch/Roll (e.g., characters).\nPass DeltaTime from Tick for frame-rate independent results." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static void NewProp_bYawOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bYawOnly;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGGMathLibrary_LookAtWithDampening_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventLookAtWithDampening_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_LookAtWithDampening_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventLookAtWithDampening_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGMathLibrary_LookAtWithDampening_Statics::NewProp_InterpSpeed = { "InterpSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventLookAtWithDampening_Parms, InterpSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGMathLibrary_LookAtWithDampening_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventLookAtWithDampening_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGGMathLibrary_LookAtWithDampening_Statics::NewProp_bYawOnly_SetBit(void* Obj)
{
	((GGMathLibrary_eventLookAtWithDampening_Parms*)Obj)->bYawOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGGMathLibrary_LookAtWithDampening_Statics::NewProp_bYawOnly = { "bYawOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GGMathLibrary_eventLookAtWithDampening_Parms), &Z_Construct_UFunction_UGGMathLibrary_LookAtWithDampening_Statics::NewProp_bYawOnly_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGGMathLibrary_LookAtWithDampening_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_LookAtWithDampening_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_LookAtWithDampening_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_LookAtWithDampening_Statics::NewProp_InterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_LookAtWithDampening_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_LookAtWithDampening_Statics::NewProp_bYawOnly,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_LookAtWithDampening_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGMathLibrary_LookAtWithDampening_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGGMathLibrary, nullptr, "LookAtWithDampening", Z_Construct_UFunction_UGGMathLibrary_LookAtWithDampening_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_LookAtWithDampening_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGGMathLibrary_LookAtWithDampening_Statics::GGMathLibrary_eventLookAtWithDampening_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_LookAtWithDampening_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGGMathLibrary_LookAtWithDampening_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGGMathLibrary_LookAtWithDampening_Statics::GGMathLibrary_eventLookAtWithDampening_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGGMathLibrary_LookAtWithDampening()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGMathLibrary_LookAtWithDampening_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGGMathLibrary::execLookAtWithDampening)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_InterpSpeed);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_UBOOL(Z_Param_bYawOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGGMathLibrary::LookAtWithDampening(Z_Param_Actor,Z_Param_Out_TargetLocation,Z_Param_InterpSpeed,Z_Param_DeltaTime,Z_Param_bYawOnly);
	P_NATIVE_END;
}
// ********** End Class UGGMathLibrary Function LookAtWithDampening ********************************

// ********** Begin Class UGGMathLibrary Function MaintainDistanceFromTarget ***********************
struct Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics
{
	struct GGMathLibrary_eventMaintainDistanceFromTarget_Parms
	{
		FVector OwnerLocation;
		FVector OwnerVelocity;
		FVector TargetLocation;
		FVector TargetVelocity;
		float DesiredDistance;
		float Stiffness;
		float Damping;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Genie BFL|Math & Transforms" },
		{ "CPP_Default_Damping", "2.000000" },
		{ "CPP_Default_Stiffness", "10.000000" },
		{ "DisplayName", "Maintain Distance from Target" },
		{ "ModuleRelativePath", "Public/Math/GGMathLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns an acceleration vector to maintain DesiredDistance from Target using a damped spring.\nProvide Owner/Target velocity for better damping." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetVelocity_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerVelocity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TargetVelocity;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DesiredDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Stiffness;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damping;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics::NewProp_OwnerLocation = { "OwnerLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventMaintainDistanceFromTarget_Parms, OwnerLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerLocation_MetaData), NewProp_OwnerLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics::NewProp_OwnerVelocity = { "OwnerVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventMaintainDistanceFromTarget_Parms, OwnerVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerVelocity_MetaData), NewProp_OwnerVelocity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventMaintainDistanceFromTarget_Parms, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetLocation_MetaData), NewProp_TargetLocation_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics::NewProp_TargetVelocity = { "TargetVelocity", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventMaintainDistanceFromTarget_Parms, TargetVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetVelocity_MetaData), NewProp_TargetVelocity_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics::NewProp_DesiredDistance = { "DesiredDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventMaintainDistanceFromTarget_Parms, DesiredDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics::NewProp_Stiffness = { "Stiffness", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventMaintainDistanceFromTarget_Parms, Stiffness), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics::NewProp_Damping = { "Damping", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventMaintainDistanceFromTarget_Parms, Damping), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventMaintainDistanceFromTarget_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics::NewProp_OwnerLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics::NewProp_OwnerVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics::NewProp_TargetLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics::NewProp_TargetVelocity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics::NewProp_DesiredDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics::NewProp_Stiffness,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics::NewProp_Damping,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGGMathLibrary, nullptr, "MaintainDistanceFromTarget", Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics::GGMathLibrary_eventMaintainDistanceFromTarget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics::GGMathLibrary_eventMaintainDistanceFromTarget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGGMathLibrary::execMaintainDistanceFromTarget)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OwnerLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OwnerVelocity);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetLocation);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_TargetVelocity);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DesiredDistance);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Stiffness);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damping);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UGGMathLibrary::MaintainDistanceFromTarget(Z_Param_Out_OwnerLocation,Z_Param_Out_OwnerVelocity,Z_Param_Out_TargetLocation,Z_Param_Out_TargetVelocity,Z_Param_DesiredDistance,Z_Param_Stiffness,Z_Param_Damping);
	P_NATIVE_END;
}
// ********** End Class UGGMathLibrary Function MaintainDistanceFromTarget *************************

// ********** Begin Class UGGMathLibrary Function SpringDampedFloat ********************************
struct Z_Construct_UFunction_UGGMathLibrary_SpringDampedFloat_Statics
{
	struct GGMathLibrary_eventSpringDampedFloat_Parms
	{
		float Current;
		float Target;
		float VelocityInOut;
		float DeltaTime;
		float SmoothTime;
		float OutValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Genie BFL|Math & Transforms" },
		{ "DisplayName", "Get Spring-Damped Float" },
		{ "ModuleRelativePath", "Public/Math/GGMathLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Critically damped step from Current to Target.\nUpdates VelocityInOut; returns OutValue.\nUse SmoothTime to control responsiveness." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Current;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Target;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_VelocityInOut;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGMathLibrary_SpringDampedFloat_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventSpringDampedFloat_Parms, Current), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGMathLibrary_SpringDampedFloat_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventSpringDampedFloat_Parms, Target), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGMathLibrary_SpringDampedFloat_Statics::NewProp_VelocityInOut = { "VelocityInOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventSpringDampedFloat_Parms, VelocityInOut), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGMathLibrary_SpringDampedFloat_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventSpringDampedFloat_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGMathLibrary_SpringDampedFloat_Statics::NewProp_SmoothTime = { "SmoothTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventSpringDampedFloat_Parms, SmoothTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGMathLibrary_SpringDampedFloat_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventSpringDampedFloat_Parms, OutValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGGMathLibrary_SpringDampedFloat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_SpringDampedFloat_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_SpringDampedFloat_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_SpringDampedFloat_Statics::NewProp_VelocityInOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_SpringDampedFloat_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_SpringDampedFloat_Statics::NewProp_SmoothTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_SpringDampedFloat_Statics::NewProp_OutValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_SpringDampedFloat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGMathLibrary_SpringDampedFloat_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGGMathLibrary, nullptr, "SpringDampedFloat", Z_Construct_UFunction_UGGMathLibrary_SpringDampedFloat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_SpringDampedFloat_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGGMathLibrary_SpringDampedFloat_Statics::GGMathLibrary_eventSpringDampedFloat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_SpringDampedFloat_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGGMathLibrary_SpringDampedFloat_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGGMathLibrary_SpringDampedFloat_Statics::GGMathLibrary_eventSpringDampedFloat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGGMathLibrary_SpringDampedFloat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGMathLibrary_SpringDampedFloat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGGMathLibrary::execSpringDampedFloat)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Current);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Target);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_VelocityInOut);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SmoothTime);
	P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGGMathLibrary::SpringDampedFloat(Z_Param_Current,Z_Param_Target,Z_Param_Out_VelocityInOut,Z_Param_DeltaTime,Z_Param_SmoothTime,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UGGMathLibrary Function SpringDampedFloat **********************************

// ********** Begin Class UGGMathLibrary Function SpringDampedVector *******************************
struct Z_Construct_UFunction_UGGMathLibrary_SpringDampedVector_Statics
{
	struct GGMathLibrary_eventSpringDampedVector_Parms
	{
		FVector Current;
		FVector Target;
		FVector VelocityInOut;
		float DeltaTime;
		float SmoothTime;
		FVector OutValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Genie BFL|Math & Transforms" },
		{ "DisplayName", "Get Spring-Damped Vector" },
		{ "ModuleRelativePath", "Public/Math/GGMathLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vector version of SmoothDamp.\nUpdates VelocityInOut per-component; returns OutValue." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Current_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Current;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_VelocityInOut;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SmoothTime;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_SpringDampedVector_Statics::NewProp_Current = { "Current", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventSpringDampedVector_Parms, Current), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Current_MetaData), NewProp_Current_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_SpringDampedVector_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventSpringDampedVector_Parms, Target), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_SpringDampedVector_Statics::NewProp_VelocityInOut = { "VelocityInOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventSpringDampedVector_Parms, VelocityInOut), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGMathLibrary_SpringDampedVector_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventSpringDampedVector_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGMathLibrary_SpringDampedVector_Statics::NewProp_SmoothTime = { "SmoothTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventSpringDampedVector_Parms, SmoothTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_SpringDampedVector_Statics::NewProp_OutValue = { "OutValue", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventSpringDampedVector_Parms, OutValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGGMathLibrary_SpringDampedVector_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_SpringDampedVector_Statics::NewProp_Current,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_SpringDampedVector_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_SpringDampedVector_Statics::NewProp_VelocityInOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_SpringDampedVector_Statics::NewProp_DeltaTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_SpringDampedVector_Statics::NewProp_SmoothTime,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_SpringDampedVector_Statics::NewProp_OutValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_SpringDampedVector_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGMathLibrary_SpringDampedVector_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGGMathLibrary, nullptr, "SpringDampedVector", Z_Construct_UFunction_UGGMathLibrary_SpringDampedVector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_SpringDampedVector_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGGMathLibrary_SpringDampedVector_Statics::GGMathLibrary_eventSpringDampedVector_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_SpringDampedVector_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGGMathLibrary_SpringDampedVector_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGGMathLibrary_SpringDampedVector_Statics::GGMathLibrary_eventSpringDampedVector_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGGMathLibrary_SpringDampedVector()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGMathLibrary_SpringDampedVector_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGGMathLibrary::execSpringDampedVector)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Current);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Target);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_VelocityInOut);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_GET_PROPERTY(FFloatProperty,Z_Param_SmoothTime);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGGMathLibrary::SpringDampedVector(Z_Param_Out_Current,Z_Param_Out_Target,Z_Param_Out_VelocityInOut,Z_Param_DeltaTime,Z_Param_SmoothTime,Z_Param_Out_OutValue);
	P_NATIVE_END;
}
// ********** End Class UGGMathLibrary Function SpringDampedVector *********************************

// ********** Begin Class UGGMathLibrary Function TeleportWithGroundSnap ***************************
struct Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics
{
	struct GGMathLibrary_eventTeleportWithGroundSnap_Parms
	{
		UObject* WorldContextObject;
		AActor* Actor;
		FVector NewLocation;
		float DownTraceDistance;
		TEnumAsByte<ECollisionChannel> TraceChannel;
		bool bSweep;
		ETeleportType TeleportType;
		FVector OutFinalLocation;
		FHitResult OutHit;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Genie BFL|Math & Transforms" },
		{ "DisplayName", "Teleport with Ground Snap" },
		{ "ModuleRelativePath", "Public/Math/GGMathLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Teleports Actor to NewLocation, then traces down by DownTraceDistance and snaps to the ground if hit.\nOptional sweep on placement; returns whether ground was found.\nAuthority Only: executes on the server for replicated actors." },
#endif
		{ "WorldContext", "WorldContextObject" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewLocation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DownTraceDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TraceChannel;
	static void NewProp_bSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSweep;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TeleportType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TeleportType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutFinalLocation;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutHit;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventTeleportWithGroundSnap_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventTeleportWithGroundSnap_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::NewProp_NewLocation = { "NewLocation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventTeleportWithGroundSnap_Parms, NewLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewLocation_MetaData), NewProp_NewLocation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::NewProp_DownTraceDistance = { "DownTraceDistance", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventTeleportWithGroundSnap_Parms, DownTraceDistance), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::NewProp_TraceChannel = { "TraceChannel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventTeleportWithGroundSnap_Parms, TraceChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(0, nullptr) }; // 756624936
void Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::NewProp_bSweep_SetBit(void* Obj)
{
	((GGMathLibrary_eventTeleportWithGroundSnap_Parms*)Obj)->bSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::NewProp_bSweep = { "bSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GGMathLibrary_eventTeleportWithGroundSnap_Parms), &Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::NewProp_bSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::NewProp_TeleportType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::NewProp_TeleportType = { "TeleportType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventTeleportWithGroundSnap_Parms, TeleportType), Z_Construct_UEnum_Engine_ETeleportType, METADATA_PARAMS(0, nullptr) }; // 1982391065
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::NewProp_OutFinalLocation = { "OutFinalLocation", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventTeleportWithGroundSnap_Parms, OutFinalLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::NewProp_OutHit = { "OutHit", nullptr, (EPropertyFlags)0x0010008000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventTeleportWithGroundSnap_Parms, OutHit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(0, nullptr) }; // 267591329
void Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GGMathLibrary_eventTeleportWithGroundSnap_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GGMathLibrary_eventTeleportWithGroundSnap_Parms), &Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::NewProp_Actor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::NewProp_NewLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::NewProp_DownTraceDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::NewProp_TraceChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::NewProp_bSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::NewProp_TeleportType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::NewProp_TeleportType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::NewProp_OutFinalLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::NewProp_OutHit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGGMathLibrary, nullptr, "TeleportWithGroundSnap", Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::GGMathLibrary_eventTeleportWithGroundSnap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::GGMathLibrary_eventTeleportWithGroundSnap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGGMathLibrary::execTeleportWithGroundSnap)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_NewLocation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DownTraceDistance);
	P_GET_PROPERTY(FByteProperty,Z_Param_TraceChannel);
	P_GET_UBOOL(Z_Param_bSweep);
	P_GET_ENUM(ETeleportType,Z_Param_TeleportType);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_OutFinalLocation);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_OutHit);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UGGMathLibrary::TeleportWithGroundSnap(Z_Param_WorldContextObject,Z_Param_Actor,Z_Param_Out_NewLocation,Z_Param_DownTraceDistance,ECollisionChannel(Z_Param_TraceChannel),Z_Param_bSweep,ETeleportType(Z_Param_TeleportType),Z_Param_Out_OutFinalLocation,Z_Param_Out_OutHit);
	P_NATIVE_END;
}
// ********** End Class UGGMathLibrary Function TeleportWithGroundSnap *****************************

// ********** Begin Class UGGMathLibrary Function VectorInputToWorldAcceleration *******************
struct Z_Construct_UFunction_UGGMathLibrary_VectorInputToWorldAcceleration_Statics
{
	struct GGMathLibrary_eventVectorInputToWorldAcceleration_Parms
	{
		FVector2D Input;
		FRotator CameraRotation;
		float AccelMagnitude;
		bool bIgnorePitch;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Genie BFL|Math & Transforms" },
		{ "CPP_Default_AccelMagnitude", "2048.000000" },
		{ "CPP_Default_bIgnorePitch", "true" },
		{ "DisplayName", "Vector Input to World Acceleration" },
		{ "ModuleRelativePath", "Public/Math/GGMathLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maps input X/Y into world-space using CameraRotation.\nSet bIgnorePitch for planar movement.\nAccelMagnitude is the resulting vector length." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraRotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Input;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CameraRotation;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AccelMagnitude;
	static void NewProp_bIgnorePitch_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIgnorePitch;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_VectorInputToWorldAcceleration_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventVectorInputToWorldAcceleration_Parms, Input), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_VectorInputToWorldAcceleration_Statics::NewProp_CameraRotation = { "CameraRotation", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventVectorInputToWorldAcceleration_Parms, CameraRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraRotation_MetaData), NewProp_CameraRotation_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGGMathLibrary_VectorInputToWorldAcceleration_Statics::NewProp_AccelMagnitude = { "AccelMagnitude", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventVectorInputToWorldAcceleration_Parms, AccelMagnitude), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UGGMathLibrary_VectorInputToWorldAcceleration_Statics::NewProp_bIgnorePitch_SetBit(void* Obj)
{
	((GGMathLibrary_eventVectorInputToWorldAcceleration_Parms*)Obj)->bIgnorePitch = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGGMathLibrary_VectorInputToWorldAcceleration_Statics::NewProp_bIgnorePitch = { "bIgnorePitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GGMathLibrary_eventVectorInputToWorldAcceleration_Parms), &Z_Construct_UFunction_UGGMathLibrary_VectorInputToWorldAcceleration_Statics::NewProp_bIgnorePitch_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGGMathLibrary_VectorInputToWorldAcceleration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GGMathLibrary_eventVectorInputToWorldAcceleration_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGGMathLibrary_VectorInputToWorldAcceleration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_VectorInputToWorldAcceleration_Statics::NewProp_Input,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_VectorInputToWorldAcceleration_Statics::NewProp_CameraRotation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_VectorInputToWorldAcceleration_Statics::NewProp_AccelMagnitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_VectorInputToWorldAcceleration_Statics::NewProp_bIgnorePitch,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGGMathLibrary_VectorInputToWorldAcceleration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_VectorInputToWorldAcceleration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGGMathLibrary_VectorInputToWorldAcceleration_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGGMathLibrary, nullptr, "VectorInputToWorldAcceleration", Z_Construct_UFunction_UGGMathLibrary_VectorInputToWorldAcceleration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_VectorInputToWorldAcceleration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGGMathLibrary_VectorInputToWorldAcceleration_Statics::GGMathLibrary_eventVectorInputToWorldAcceleration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGGMathLibrary_VectorInputToWorldAcceleration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGGMathLibrary_VectorInputToWorldAcceleration_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGGMathLibrary_VectorInputToWorldAcceleration_Statics::GGMathLibrary_eventVectorInputToWorldAcceleration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGGMathLibrary_VectorInputToWorldAcceleration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGGMathLibrary_VectorInputToWorldAcceleration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGGMathLibrary::execVectorInputToWorldAcceleration)
{
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Input);
	P_GET_STRUCT_REF(FRotator,Z_Param_Out_CameraRotation);
	P_GET_PROPERTY(FFloatProperty,Z_Param_AccelMagnitude);
	P_GET_UBOOL(Z_Param_bIgnorePitch);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UGGMathLibrary::VectorInputToWorldAcceleration(Z_Param_Out_Input,Z_Param_Out_CameraRotation,Z_Param_AccelMagnitude,Z_Param_bIgnorePitch);
	P_NATIVE_END;
}
// ********** End Class UGGMathLibrary Function VectorInputToWorldAcceleration *********************

// ********** Begin Class UGGMathLibrary ***********************************************************
void UGGMathLibrary::StaticRegisterNativesUGGMathLibrary()
{
	UClass* Class = UGGMathLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CalculateArcTrajectoryPoints", &UGGMathLibrary::execCalculateArcTrajectoryPoints },
		{ "CalculateDeflectionVector", &UGGMathLibrary::execCalculateDeflectionVector },
		{ "GetClosestPointOnSpline", &UGGMathLibrary::execGetClosestPointOnSpline },
		{ "GetHelixPoint", &UGGMathLibrary::execGetHelixPoint },
		{ "GetMirroredLocation", &UGGMathLibrary::execGetMirroredLocation },
		{ "GetPercentageAlongSpline", &UGGMathLibrary::execGetPercentageAlongSpline },
		{ "GetRandomPointInNavMeshRadius", &UGGMathLibrary::execGetRandomPointInNavMeshRadius },
		{ "LookAtWithDampening", &UGGMathLibrary::execLookAtWithDampening },
		{ "MaintainDistanceFromTarget", &UGGMathLibrary::execMaintainDistanceFromTarget },
		{ "SpringDampedFloat", &UGGMathLibrary::execSpringDampedFloat },
		{ "SpringDampedVector", &UGGMathLibrary::execSpringDampedVector },
		{ "TeleportWithGroundSnap", &UGGMathLibrary::execTeleportWithGroundSnap },
		{ "VectorInputToWorldAcceleration", &UGGMathLibrary::execVectorInputToWorldAcceleration },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGGMathLibrary;
UClass* UGGMathLibrary::GetPrivateStaticClass()
{
	using TClass = UGGMathLibrary;
	if (!Z_Registration_Info_UClass_UGGMathLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GGMathLibrary"),
			Z_Registration_Info_UClass_UGGMathLibrary.InnerSingleton,
			StaticRegisterNativesUGGMathLibrary,
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
	return Z_Registration_Info_UClass_UGGMathLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UGGMathLibrary_NoRegister()
{
	return UGGMathLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGGMathLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Math/GGMathLibrary.h" },
		{ "ModuleRelativePath", "Public/Math/GGMathLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGGMathLibrary_CalculateArcTrajectoryPoints, "CalculateArcTrajectoryPoints" }, // 3653922514
		{ &Z_Construct_UFunction_UGGMathLibrary_CalculateDeflectionVector, "CalculateDeflectionVector" }, // 1783462821
		{ &Z_Construct_UFunction_UGGMathLibrary_GetClosestPointOnSpline, "GetClosestPointOnSpline" }, // 1657426758
		{ &Z_Construct_UFunction_UGGMathLibrary_GetHelixPoint, "GetHelixPoint" }, // 939834113
		{ &Z_Construct_UFunction_UGGMathLibrary_GetMirroredLocation, "GetMirroredLocation" }, // 4264821094
		{ &Z_Construct_UFunction_UGGMathLibrary_GetPercentageAlongSpline, "GetPercentageAlongSpline" }, // 3319472279
		{ &Z_Construct_UFunction_UGGMathLibrary_GetRandomPointInNavMeshRadius, "GetRandomPointInNavMeshRadius" }, // 2227994829
		{ &Z_Construct_UFunction_UGGMathLibrary_LookAtWithDampening, "LookAtWithDampening" }, // 1039541440
		{ &Z_Construct_UFunction_UGGMathLibrary_MaintainDistanceFromTarget, "MaintainDistanceFromTarget" }, // 2411178989
		{ &Z_Construct_UFunction_UGGMathLibrary_SpringDampedFloat, "SpringDampedFloat" }, // 1102894230
		{ &Z_Construct_UFunction_UGGMathLibrary_SpringDampedVector, "SpringDampedVector" }, // 3501023801
		{ &Z_Construct_UFunction_UGGMathLibrary_TeleportWithGroundSnap, "TeleportWithGroundSnap" }, // 952667887
		{ &Z_Construct_UFunction_UGGMathLibrary_VectorInputToWorldAcceleration, "VectorInputToWorldAcceleration" }, // 2160376935
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGGMathLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGGMathLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GameGenieBFLRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGGMathLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGGMathLibrary_Statics::ClassParams = {
	&UGGMathLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGGMathLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UGGMathLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGGMathLibrary()
{
	if (!Z_Registration_Info_UClass_UGGMathLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGGMathLibrary.OuterSingleton, Z_Construct_UClass_UGGMathLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGGMathLibrary.OuterSingleton;
}
UGGMathLibrary::UGGMathLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGGMathLibrary);
UGGMathLibrary::~UGGMathLibrary() {}
// ********** End Class UGGMathLibrary *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Math_GGMathLibrary_h__Script_GameGenieBFLRuntime_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGGCompareResult_StaticEnum, TEXT("EGGCompareResult"), &Z_Registration_Info_UEnum_EGGCompareResult, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2508601922U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGGMathLibrary, UGGMathLibrary::StaticClass, TEXT("UGGMathLibrary"), &Z_Registration_Info_UClass_UGGMathLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGGMathLibrary), 3678194236U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Math_GGMathLibrary_h__Script_GameGenieBFLRuntime_3964044760(TEXT("/Script/GameGenieBFLRuntime"),
	Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Math_GGMathLibrary_h__Script_GameGenieBFLRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Math_GGMathLibrary_h__Script_GameGenieBFLRuntime_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Math_GGMathLibrary_h__Script_GameGenieBFLRuntime_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Math_GGMathLibrary_h__Script_GameGenieBFLRuntime_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
