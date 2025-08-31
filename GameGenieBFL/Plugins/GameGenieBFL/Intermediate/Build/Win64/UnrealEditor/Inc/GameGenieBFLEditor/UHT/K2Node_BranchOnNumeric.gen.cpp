// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Nodes/K2Node_BranchOnNumeric.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeK2Node_BranchOnNumeric() {}

// ********** Begin Cross Module References ********************************************************
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node();
GAMEGENIEBFLEDITOR_API UClass* Z_Construct_UClass_UK2Node_BranchOnNumeric();
GAMEGENIEBFLEDITOR_API UClass* Z_Construct_UClass_UK2Node_BranchOnNumeric_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameGenieBFLEditor();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UK2Node_BranchOnNumeric **************************************************
void UK2Node_BranchOnNumeric::StaticRegisterNativesUK2Node_BranchOnNumeric()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UK2Node_BranchOnNumeric;
UClass* UK2Node_BranchOnNumeric::GetPrivateStaticClass()
{
	using TClass = UK2Node_BranchOnNumeric;
	if (!Z_Registration_Info_UClass_UK2Node_BranchOnNumeric.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("K2Node_BranchOnNumeric"),
			Z_Registration_Info_UClass_UK2Node_BranchOnNumeric.InnerSingleton,
			StaticRegisterNativesUK2Node_BranchOnNumeric,
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
	return Z_Registration_Info_UClass_UK2Node_BranchOnNumeric.InnerSingleton;
}
UClass* Z_Construct_UClass_UK2Node_BranchOnNumeric_NoRegister()
{
	return UK2Node_BranchOnNumeric::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UK2Node_BranchOnNumeric_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Wildcard Branch (Numeric): A ? B  -> Less / Equal / Greater\n * Accepts any numeric or enum type on A/B (auto-typed wildcards).\n */" },
#endif
		{ "IncludePath", "Nodes/K2Node_BranchOnNumeric.h" },
		{ "ModuleRelativePath", "Public/Nodes/K2Node_BranchOnNumeric.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Wildcard Branch (Numeric): A ? B  -> Less / Equal / Greater\nAccepts any numeric or enum type on A/B (auto-typed wildcards)." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_BranchOnNumeric>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UK2Node_BranchOnNumeric_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node,
	(UObject* (*)())Z_Construct_UPackage__Script_GameGenieBFLEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_BranchOnNumeric_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_BranchOnNumeric_Statics::ClassParams = {
	&UK2Node_BranchOnNumeric::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_BranchOnNumeric_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_BranchOnNumeric_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UK2Node_BranchOnNumeric()
{
	if (!Z_Registration_Info_UClass_UK2Node_BranchOnNumeric.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_BranchOnNumeric.OuterSingleton, Z_Construct_UClass_UK2Node_BranchOnNumeric_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_BranchOnNumeric.OuterSingleton;
}
UK2Node_BranchOnNumeric::UK2Node_BranchOnNumeric(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_BranchOnNumeric);
UK2Node_BranchOnNumeric::~UK2Node_BranchOnNumeric() {}
// ********** End Class UK2Node_BranchOnNumeric ****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLEditor_Public_Nodes_K2Node_BranchOnNumeric_h__Script_GameGenieBFLEditor_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_BranchOnNumeric, UK2Node_BranchOnNumeric::StaticClass, TEXT("UK2Node_BranchOnNumeric"), &Z_Registration_Info_UClass_UK2Node_BranchOnNumeric, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_BranchOnNumeric), 2730627518U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLEditor_Public_Nodes_K2Node_BranchOnNumeric_h__Script_GameGenieBFLEditor_120102754(TEXT("/Script/GameGenieBFLEditor"),
	Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLEditor_Public_Nodes_K2Node_BranchOnNumeric_h__Script_GameGenieBFLEditor_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLEditor_Public_Nodes_K2Node_BranchOnNumeric_h__Script_GameGenieBFLEditor_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
