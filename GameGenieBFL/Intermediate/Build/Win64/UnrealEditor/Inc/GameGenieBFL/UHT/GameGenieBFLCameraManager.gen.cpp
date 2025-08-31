// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameGenieBFLCameraManager.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameGenieBFLCameraManager() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
GAMEGENIEBFL_API UClass* Z_Construct_UClass_AGameGenieBFLCameraManager();
GAMEGENIEBFL_API UClass* Z_Construct_UClass_AGameGenieBFLCameraManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameGenieBFL();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGameGenieBFLCameraManager ***********************************************
void AGameGenieBFLCameraManager::StaticRegisterNativesAGameGenieBFLCameraManager()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGameGenieBFLCameraManager;
UClass* AGameGenieBFLCameraManager::GetPrivateStaticClass()
{
	using TClass = AGameGenieBFLCameraManager;
	if (!Z_Registration_Info_UClass_AGameGenieBFLCameraManager.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameGenieBFLCameraManager"),
			Z_Registration_Info_UClass_AGameGenieBFLCameraManager.InnerSingleton,
			StaticRegisterNativesAGameGenieBFLCameraManager,
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
	return Z_Registration_Info_UClass_AGameGenieBFLCameraManager.InnerSingleton;
}
UClass* Z_Construct_UClass_AGameGenieBFLCameraManager_NoRegister()
{
	return AGameGenieBFLCameraManager::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGameGenieBFLCameraManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Basic First Person camera manager.\n *  Limits min/max look pitch.\n */" },
#endif
		{ "IncludePath", "GameGenieBFLCameraManager.h" },
		{ "ModuleRelativePath", "GameGenieBFLCameraManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Basic First Person camera manager.\nLimits min/max look pitch." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameGenieBFLCameraManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGameGenieBFLCameraManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
	(UObject* (*)())Z_Construct_UPackage__Script_GameGenieBFL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameGenieBFLCameraManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameGenieBFLCameraManager_Statics::ClassParams = {
	&AGameGenieBFLCameraManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x008003ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameGenieBFLCameraManager_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameGenieBFLCameraManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameGenieBFLCameraManager()
{
	if (!Z_Registration_Info_UClass_AGameGenieBFLCameraManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameGenieBFLCameraManager.OuterSingleton, Z_Construct_UClass_AGameGenieBFLCameraManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameGenieBFLCameraManager.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameGenieBFLCameraManager);
AGameGenieBFLCameraManager::~AGameGenieBFLCameraManager() {}
// ********** End Class AGameGenieBFLCameraManager *************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLCameraManager_h__Script_GameGenieBFL_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameGenieBFLCameraManager, AGameGenieBFLCameraManager::StaticClass, TEXT("AGameGenieBFLCameraManager"), &Z_Registration_Info_UClass_AGameGenieBFLCameraManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameGenieBFLCameraManager), 3381569385U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLCameraManager_h__Script_GameGenieBFL_4006357779(TEXT("/Script/GameGenieBFL"),
	Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLCameraManager_h__Script_GameGenieBFL_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLCameraManager_h__Script_GameGenieBFL_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
