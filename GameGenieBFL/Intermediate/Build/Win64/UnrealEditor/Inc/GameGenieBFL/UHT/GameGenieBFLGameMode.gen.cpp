// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameGenieBFLGameMode.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameGenieBFLGameMode() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GAMEGENIEBFL_API UClass* Z_Construct_UClass_AGameGenieBFLGameMode();
GAMEGENIEBFL_API UClass* Z_Construct_UClass_AGameGenieBFLGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameGenieBFL();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGameGenieBFLGameMode ****************************************************
void AGameGenieBFLGameMode::StaticRegisterNativesAGameGenieBFLGameMode()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGameGenieBFLGameMode;
UClass* AGameGenieBFLGameMode::GetPrivateStaticClass()
{
	using TClass = AGameGenieBFLGameMode;
	if (!Z_Registration_Info_UClass_AGameGenieBFLGameMode.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameGenieBFLGameMode"),
			Z_Registration_Info_UClass_AGameGenieBFLGameMode.InnerSingleton,
			StaticRegisterNativesAGameGenieBFLGameMode,
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
	return Z_Registration_Info_UClass_AGameGenieBFLGameMode.InnerSingleton;
}
UClass* Z_Construct_UClass_AGameGenieBFLGameMode_NoRegister()
{
	return AGameGenieBFLGameMode::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGameGenieBFLGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple GameMode for a first person game\n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "GameGenieBFLGameMode.h" },
		{ "ModuleRelativePath", "GameGenieBFLGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple GameMode for a first person game" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameGenieBFLGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGameGenieBFLGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_GameGenieBFL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameGenieBFLGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameGenieBFLGameMode_Statics::ClassParams = {
	&AGameGenieBFLGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ADu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameGenieBFLGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameGenieBFLGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameGenieBFLGameMode()
{
	if (!Z_Registration_Info_UClass_AGameGenieBFLGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameGenieBFLGameMode.OuterSingleton, Z_Construct_UClass_AGameGenieBFLGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameGenieBFLGameMode.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameGenieBFLGameMode);
AGameGenieBFLGameMode::~AGameGenieBFLGameMode() {}
// ********** End Class AGameGenieBFLGameMode ******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLGameMode_h__Script_GameGenieBFL_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameGenieBFLGameMode, AGameGenieBFLGameMode::StaticClass, TEXT("AGameGenieBFLGameMode"), &Z_Registration_Info_UClass_AGameGenieBFLGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameGenieBFLGameMode), 2317181369U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLGameMode_h__Script_GameGenieBFL_2966792983(TEXT("/Script/GameGenieBFL"),
	Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLGameMode_h__Script_GameGenieBFL_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLGameMode_h__Script_GameGenieBFL_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
