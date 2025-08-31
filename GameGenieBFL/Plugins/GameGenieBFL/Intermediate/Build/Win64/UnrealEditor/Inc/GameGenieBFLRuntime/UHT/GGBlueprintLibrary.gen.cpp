// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GGBlueprintLibrary.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGGBlueprintLibrary() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
GAMEGENIEBFLRUNTIME_API UClass* Z_Construct_UClass_UGameGenieBFLLibrary();
GAMEGENIEBFLRUNTIME_API UClass* Z_Construct_UClass_UGameGenieBFLLibrary_NoRegister();
GAMEGENIEBFLRUNTIME_API UEnum* Z_Construct_UEnum_GameGenieBFLRuntime_EIntegerComparison();
UPackage* Z_Construct_UPackage__Script_GameGenieBFLRuntime();
// ********** End Cross Module References **********************************************************

// ********** Begin Enum EIntegerComparison ********************************************************
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EIntegerComparison;
static UEnum* EIntegerComparison_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EIntegerComparison.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EIntegerComparison.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameGenieBFLRuntime_EIntegerComparison, (UObject*)Z_Construct_UPackage__Script_GameGenieBFLRuntime(), TEXT("EIntegerComparison"));
	}
	return Z_Registration_Info_UEnum_EIntegerComparison.OuterSingleton;
}
template<> GAMEGENIEBFLRUNTIME_API UEnum* StaticEnum<EIntegerComparison>()
{
	return EIntegerComparison_StaticEnum();
}
struct Z_Construct_UEnum_GameGenieBFLRuntime_EIntegerComparison_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Comparison result for Branch on Integer */" },
#endif
		{ "EqualTo.DisplayName", "Equal To" },
		{ "EqualTo.Name", "EIntegerComparison::EqualTo" },
		{ "GreaterThan.DisplayName", "Greater Than" },
		{ "GreaterThan.Name", "EIntegerComparison::GreaterThan" },
		{ "LessThan.DisplayName", "Less Than" },
		{ "LessThan.Name", "EIntegerComparison::LessThan" },
		{ "ModuleRelativePath", "Public/GGBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Comparison result for Branch on Integer" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EIntegerComparison::GreaterThan", (int64)EIntegerComparison::GreaterThan },
		{ "EIntegerComparison::LessThan", (int64)EIntegerComparison::LessThan },
		{ "EIntegerComparison::EqualTo", (int64)EIntegerComparison::EqualTo },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameGenieBFLRuntime_EIntegerComparison_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_GameGenieBFLRuntime,
	nullptr,
	"EIntegerComparison",
	"EIntegerComparison",
	Z_Construct_UEnum_GameGenieBFLRuntime_EIntegerComparison_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_GameGenieBFLRuntime_EIntegerComparison_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameGenieBFLRuntime_EIntegerComparison_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameGenieBFLRuntime_EIntegerComparison_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_GameGenieBFLRuntime_EIntegerComparison()
{
	if (!Z_Registration_Info_UEnum_EIntegerComparison.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EIntegerComparison.InnerSingleton, Z_Construct_UEnum_GameGenieBFLRuntime_EIntegerComparison_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EIntegerComparison.InnerSingleton;
}
// ********** End Enum EIntegerComparison **********************************************************

// ********** Begin Class UGameGenieBFLLibrary Function BranchOnInteger ****************************
struct Z_Construct_UFunction_UGameGenieBFLLibrary_BranchOnInteger_Statics
{
	struct GameGenieBFLLibrary_eventBranchOnInteger_Parms
	{
		int32 A;
		int32 B;
		EIntegerComparison Branches;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Genie BFL|Flow Control" },
		{ "DisplayName", "Branch on Integer" },
		{ "ExpandEnumAsExecs", "Branches" },
		{ "Keywords", "compare int integer branch greater less equal" },
		{ "ModuleRelativePath", "Public/GGBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Compares two integers and routes execution:\nA > B \xe2\x86\x92 Greater Than\nA < B \xe2\x86\x92 Less Than\nA == B \xe2\x86\x92 Equal To" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_A;
	static const UECodeGen_Private::FIntPropertyParams NewProp_B;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Branches_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Branches;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameGenieBFLLibrary_BranchOnInteger_Statics::NewProp_A = { "A", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameGenieBFLLibrary_eventBranchOnInteger_Parms, A), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameGenieBFLLibrary_BranchOnInteger_Statics::NewProp_B = { "B", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameGenieBFLLibrary_eventBranchOnInteger_Parms, B), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameGenieBFLLibrary_BranchOnInteger_Statics::NewProp_Branches_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameGenieBFLLibrary_BranchOnInteger_Statics::NewProp_Branches = { "Branches", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameGenieBFLLibrary_eventBranchOnInteger_Parms, Branches), Z_Construct_UEnum_GameGenieBFLRuntime_EIntegerComparison, METADATA_PARAMS(0, nullptr) }; // 1654479005
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameGenieBFLLibrary_BranchOnInteger_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameGenieBFLLibrary_BranchOnInteger_Statics::NewProp_A,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameGenieBFLLibrary_BranchOnInteger_Statics::NewProp_B,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameGenieBFLLibrary_BranchOnInteger_Statics::NewProp_Branches_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameGenieBFLLibrary_BranchOnInteger_Statics::NewProp_Branches,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameGenieBFLLibrary_BranchOnInteger_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameGenieBFLLibrary_BranchOnInteger_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameGenieBFLLibrary, nullptr, "BranchOnInteger", Z_Construct_UFunction_UGameGenieBFLLibrary_BranchOnInteger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameGenieBFLLibrary_BranchOnInteger_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameGenieBFLLibrary_BranchOnInteger_Statics::GameGenieBFLLibrary_eventBranchOnInteger_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameGenieBFLLibrary_BranchOnInteger_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameGenieBFLLibrary_BranchOnInteger_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameGenieBFLLibrary_BranchOnInteger_Statics::GameGenieBFLLibrary_eventBranchOnInteger_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameGenieBFLLibrary_BranchOnInteger()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameGenieBFLLibrary_BranchOnInteger_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameGenieBFLLibrary::execBranchOnInteger)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_A);
	P_GET_PROPERTY(FIntProperty,Z_Param_B);
	P_GET_ENUM_REF(EIntegerComparison,Z_Param_Out_Branches);
	P_FINISH;
	P_NATIVE_BEGIN;
	UGameGenieBFLLibrary::BranchOnInteger(Z_Param_A,Z_Param_B,(EIntegerComparison&)(Z_Param_Out_Branches));
	P_NATIVE_END;
}
// ********** End Class UGameGenieBFLLibrary Function BranchOnInteger ******************************

// ********** Begin Class UGameGenieBFLLibrary Function SnapVectorToGrid ***************************
struct Z_Construct_UFunction_UGameGenieBFLLibrary_SnapVectorToGrid_Statics
{
	struct GameGenieBFLLibrary_eventSnapVectorToGrid_Parms
	{
		FVector Location;
		float GridSize;
		FVector ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game Genie BFL|Math & Transforms" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Snaps a 3D location vector to the nearest point on a defined grid size.\n\x09 * @param Location The original location vector to snap.\n\x09 * @param GridSize The size of the grid to snap to. Affects all axes.\n\x09 * @return The new, snapped location vector.\n\x09 */" },
#endif
		{ "CPP_Default_GridSize", "100.000000" },
		{ "DisplayName", "Snap Vector to Grid" },
		{ "Keywords", "snap grid vector round" },
		{ "ModuleRelativePath", "Public/GGBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Snaps a 3D location vector to the nearest point on a defined grid size.\n@param Location The original location vector to snap.\n@param GridSize The size of the grid to snap to. Affects all axes.\n@return The new, snapped location vector." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GridSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameGenieBFLLibrary_SnapVectorToGrid_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameGenieBFLLibrary_eventSnapVectorToGrid_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameGenieBFLLibrary_SnapVectorToGrid_Statics::NewProp_GridSize = { "GridSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameGenieBFLLibrary_eventSnapVectorToGrid_Parms, GridSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameGenieBFLLibrary_SnapVectorToGrid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameGenieBFLLibrary_eventSnapVectorToGrid_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameGenieBFLLibrary_SnapVectorToGrid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameGenieBFLLibrary_SnapVectorToGrid_Statics::NewProp_Location,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameGenieBFLLibrary_SnapVectorToGrid_Statics::NewProp_GridSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameGenieBFLLibrary_SnapVectorToGrid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameGenieBFLLibrary_SnapVectorToGrid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameGenieBFLLibrary_SnapVectorToGrid_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UGameGenieBFLLibrary, nullptr, "SnapVectorToGrid", Z_Construct_UFunction_UGameGenieBFLLibrary_SnapVectorToGrid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameGenieBFLLibrary_SnapVectorToGrid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameGenieBFLLibrary_SnapVectorToGrid_Statics::GameGenieBFLLibrary_eventSnapVectorToGrid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameGenieBFLLibrary_SnapVectorToGrid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameGenieBFLLibrary_SnapVectorToGrid_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UGameGenieBFLLibrary_SnapVectorToGrid_Statics::GameGenieBFLLibrary_eventSnapVectorToGrid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameGenieBFLLibrary_SnapVectorToGrid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameGenieBFLLibrary_SnapVectorToGrid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameGenieBFLLibrary::execSnapVectorToGrid)
{
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_GET_PROPERTY(FFloatProperty,Z_Param_GridSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FVector*)Z_Param__Result=UGameGenieBFLLibrary::SnapVectorToGrid(Z_Param_Out_Location,Z_Param_GridSize);
	P_NATIVE_END;
}
// ********** End Class UGameGenieBFLLibrary Function SnapVectorToGrid *****************************

// ********** Begin Class UGameGenieBFLLibrary *****************************************************
void UGameGenieBFLLibrary::StaticRegisterNativesUGameGenieBFLLibrary()
{
	UClass* Class = UGameGenieBFLLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "BranchOnInteger", &UGameGenieBFLLibrary::execBranchOnInteger },
		{ "SnapVectorToGrid", &UGameGenieBFLLibrary::execSnapVectorToGrid },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UGameGenieBFLLibrary;
UClass* UGameGenieBFLLibrary::GetPrivateStaticClass()
{
	using TClass = UGameGenieBFLLibrary;
	if (!Z_Registration_Info_UClass_UGameGenieBFLLibrary.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameGenieBFLLibrary"),
			Z_Registration_Info_UClass_UGameGenieBFLLibrary.InnerSingleton,
			StaticRegisterNativesUGameGenieBFLLibrary,
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
	return Z_Registration_Info_UClass_UGameGenieBFLLibrary.InnerSingleton;
}
UClass* Z_Construct_UClass_UGameGenieBFLLibrary_NoRegister()
{
	return UGameGenieBFLLibrary::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UGameGenieBFLLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Core Blueprint utility library (Phase 0 + Flow Control additions)\n */" },
#endif
		{ "IncludePath", "GGBlueprintLibrary.h" },
		{ "ModuleRelativePath", "Public/GGBlueprintLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Core Blueprint utility library (Phase 0 + Flow Control additions)" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameGenieBFLLibrary_BranchOnInteger, "BranchOnInteger" }, // 1726028333
		{ &Z_Construct_UFunction_UGameGenieBFLLibrary_SnapVectorToGrid, "SnapVectorToGrid" }, // 804561318
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameGenieBFLLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGameGenieBFLLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_GameGenieBFLRuntime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameGenieBFLLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameGenieBFLLibrary_Statics::ClassParams = {
	&UGameGenieBFLLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameGenieBFLLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameGenieBFLLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameGenieBFLLibrary()
{
	if (!Z_Registration_Info_UClass_UGameGenieBFLLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameGenieBFLLibrary.OuterSingleton, Z_Construct_UClass_UGameGenieBFLLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameGenieBFLLibrary.OuterSingleton;
}
UGameGenieBFLLibrary::UGameGenieBFLLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameGenieBFLLibrary);
UGameGenieBFLLibrary::~UGameGenieBFLLibrary() {}
// ********** End Class UGameGenieBFLLibrary *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_GGBlueprintLibrary_h__Script_GameGenieBFLRuntime_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EIntegerComparison_StaticEnum, TEXT("EIntegerComparison"), &Z_Registration_Info_UEnum_EIntegerComparison, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1654479005U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameGenieBFLLibrary, UGameGenieBFLLibrary::StaticClass, TEXT("UGameGenieBFLLibrary"), &Z_Registration_Info_UClass_UGameGenieBFLLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameGenieBFLLibrary), 738556931U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_GGBlueprintLibrary_h__Script_GameGenieBFLRuntime_1218832199(TEXT("/Script/GameGenieBFLRuntime"),
	Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_GGBlueprintLibrary_h__Script_GameGenieBFLRuntime_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_GGBlueprintLibrary_h__Script_GameGenieBFLRuntime_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_GGBlueprintLibrary_h__Script_GameGenieBFLRuntime_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_GGBlueprintLibrary_h__Script_GameGenieBFLRuntime_Statics::EnumInfo));
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
