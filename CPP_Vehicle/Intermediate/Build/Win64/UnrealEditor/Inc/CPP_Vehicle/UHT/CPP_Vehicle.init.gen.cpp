// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Vehicle_init() {}
	CPP_VEHICLE_API UFunction* Z_Construct_UDelegateFunction_CPP_Vehicle_CountdownFinishedDelegate__DelegateSignature();
	CPP_VEHICLE_API UFunction* Z_Construct_UDelegateFunction_CPP_Vehicle_StartRaceDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_CPP_Vehicle;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_CPP_Vehicle()
	{
		if (!Z_Registration_Info_UPackage__Script_CPP_Vehicle.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_CPP_Vehicle_CountdownFinishedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_CPP_Vehicle_StartRaceDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/CPP_Vehicle",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x1A943F74,
				0x508E91A4,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_CPP_Vehicle.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_CPP_Vehicle.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_CPP_Vehicle(Z_Construct_UPackage__Script_CPP_Vehicle, TEXT("/Script/CPP_Vehicle"), Z_Registration_Info_UPackage__Script_CPP_Vehicle, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x1A943F74, 0x508E91A4));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
