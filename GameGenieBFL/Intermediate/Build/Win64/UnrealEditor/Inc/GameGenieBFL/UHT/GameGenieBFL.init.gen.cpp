// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameGenieBFL_init() {}
	GAMEGENIEBFL_API UFunction* Z_Construct_UDelegateFunction_GameGenieBFL_BulletCountUpdatedDelegate__DelegateSignature();
	GAMEGENIEBFL_API UFunction* Z_Construct_UDelegateFunction_GameGenieBFL_DamagedDelegate__DelegateSignature();
	GAMEGENIEBFL_API UFunction* Z_Construct_UDelegateFunction_GameGenieBFL_PawnDeathDelegate__DelegateSignature();
	GAMEGENIEBFL_API UFunction* Z_Construct_UDelegateFunction_GameGenieBFL_SprintStateChangedDelegate__DelegateSignature();
	GAMEGENIEBFL_API UFunction* Z_Construct_UDelegateFunction_GameGenieBFL_UpdateSprintMeterDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_GameGenieBFL;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_GameGenieBFL()
	{
		if (!Z_Registration_Info_UPackage__Script_GameGenieBFL.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_GameGenieBFL_BulletCountUpdatedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GameGenieBFL_DamagedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GameGenieBFL_PawnDeathDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GameGenieBFL_SprintStateChangedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_GameGenieBFL_UpdateSprintMeterDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/GameGenieBFL",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x167E93B4,
				0x8E2C1ADC,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_GameGenieBFL.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_GameGenieBFL.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_GameGenieBFL(Z_Construct_UPackage__Script_GameGenieBFL, TEXT("/Script/GameGenieBFL"), Z_Registration_Info_UPackage__Script_GameGenieBFL, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x167E93B4, 0x8E2C1ADC));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
