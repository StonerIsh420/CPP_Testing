// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeTrialUI.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTimeTrialUI() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
CPP_VEHICLE_API UClass* Z_Construct_UClass_UTimeTrialStartUI_NoRegister();
CPP_VEHICLE_API UClass* Z_Construct_UClass_UTimeTrialUI();
CPP_VEHICLE_API UClass* Z_Construct_UClass_UTimeTrialUI_NoRegister();
CPP_VEHICLE_API UFunction* Z_Construct_UDelegateFunction_CPP_Vehicle_StartRaceDelegate__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_CPP_Vehicle();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FStartRaceDelegate ****************************************************
struct Z_Construct_UDelegateFunction_CPP_Vehicle_StartRaceDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Variant_TimeTrial/UI/TimeTrialUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CPP_Vehicle_StartRaceDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CPP_Vehicle, nullptr, "StartRaceDelegate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CPP_Vehicle_StartRaceDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CPP_Vehicle_StartRaceDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_CPP_Vehicle_StartRaceDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CPP_Vehicle_StartRaceDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FStartRaceDelegate_DelegateWrapper(const FMulticastScriptDelegate& StartRaceDelegate)
{
	StartRaceDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FStartRaceDelegate ******************************************************

// ********** Begin Class UTimeTrialUI Function BP_UpdateLaps **************************************
static FName NAME_UTimeTrialUI_BP_UpdateLaps = FName(TEXT("BP_UpdateLaps"));
void UTimeTrialUI::BP_UpdateLaps()
{
	UFunction* Func = FindFunctionChecked(NAME_UTimeTrialUI_BP_UpdateLaps);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UTimeTrialUI_BP_UpdateLaps_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Time Trial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Allows Blueprint control to update the lap tracker widgets */" },
#endif
		{ "DisplayName", "Update Laps" },
		{ "ModuleRelativePath", "Variant_TimeTrial/UI/TimeTrialUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows Blueprint control to update the lap tracker widgets" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeTrialUI_BP_UpdateLaps_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTimeTrialUI, nullptr, "BP_UpdateLaps", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeTrialUI_BP_UpdateLaps_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimeTrialUI_BP_UpdateLaps_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTimeTrialUI_BP_UpdateLaps()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimeTrialUI_BP_UpdateLaps_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UTimeTrialUI Function BP_UpdateLaps ****************************************

// ********** Begin Class UTimeTrialUI Function GetBestLapTime *************************************
struct Z_Construct_UFunction_UTimeTrialUI_GetBestLapTime_Statics
{
	struct TimeTrialUI_eventGetBestLapTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Time Trial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the best lap time saved */" },
#endif
		{ "ModuleRelativePath", "Variant_TimeTrial/UI/TimeTrialUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the best lap time saved" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimeTrialUI_GetBestLapTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimeTrialUI_eventGetBestLapTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeTrialUI_GetBestLapTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeTrialUI_GetBestLapTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeTrialUI_GetBestLapTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeTrialUI_GetBestLapTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTimeTrialUI, nullptr, "GetBestLapTime", Z_Construct_UFunction_UTimeTrialUI_GetBestLapTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeTrialUI_GetBestLapTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimeTrialUI_GetBestLapTime_Statics::TimeTrialUI_eventGetBestLapTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeTrialUI_GetBestLapTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimeTrialUI_GetBestLapTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTimeTrialUI_GetBestLapTime_Statics::TimeTrialUI_eventGetBestLapTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimeTrialUI_GetBestLapTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimeTrialUI_GetBestLapTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimeTrialUI::execGetBestLapTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetBestLapTime();
	P_NATIVE_END;
}
// ********** End Class UTimeTrialUI Function GetBestLapTime ***************************************

// ********** Begin Class UTimeTrialUI Function GetCurrentLap **************************************
struct Z_Construct_UFunction_UTimeTrialUI_GetCurrentLap_Statics
{
	struct TimeTrialUI_eventGetCurrentLap_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Time Trial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the current lap number */" },
#endif
		{ "ModuleRelativePath", "Variant_TimeTrial/UI/TimeTrialUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current lap number" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTimeTrialUI_GetCurrentLap_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimeTrialUI_eventGetCurrentLap_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeTrialUI_GetCurrentLap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeTrialUI_GetCurrentLap_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeTrialUI_GetCurrentLap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeTrialUI_GetCurrentLap_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTimeTrialUI, nullptr, "GetCurrentLap", Z_Construct_UFunction_UTimeTrialUI_GetCurrentLap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeTrialUI_GetCurrentLap_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimeTrialUI_GetCurrentLap_Statics::TimeTrialUI_eventGetCurrentLap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeTrialUI_GetCurrentLap_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimeTrialUI_GetCurrentLap_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTimeTrialUI_GetCurrentLap_Statics::TimeTrialUI_eventGetCurrentLap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimeTrialUI_GetCurrentLap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimeTrialUI_GetCurrentLap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimeTrialUI::execGetCurrentLap)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCurrentLap();
	P_NATIVE_END;
}
// ********** End Class UTimeTrialUI Function GetCurrentLap ****************************************

// ********** Begin Class UTimeTrialUI Function GetLapStartTime ************************************
struct Z_Construct_UFunction_UTimeTrialUI_GetLapStartTime_Statics
{
	struct TimeTrialUI_eventGetLapStartTime_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Time Trial" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Gets the best lap time saved */" },
#endif
		{ "ModuleRelativePath", "Variant_TimeTrial/UI/TimeTrialUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the best lap time saved" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UTimeTrialUI_GetLapStartTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimeTrialUI_eventGetLapStartTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeTrialUI_GetLapStartTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeTrialUI_GetLapStartTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeTrialUI_GetLapStartTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeTrialUI_GetLapStartTime_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTimeTrialUI, nullptr, "GetLapStartTime", Z_Construct_UFunction_UTimeTrialUI_GetLapStartTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeTrialUI_GetLapStartTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UTimeTrialUI_GetLapStartTime_Statics::TimeTrialUI_eventGetLapStartTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeTrialUI_GetLapStartTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimeTrialUI_GetLapStartTime_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTimeTrialUI_GetLapStartTime_Statics::TimeTrialUI_eventGetLapStartTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimeTrialUI_GetLapStartTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimeTrialUI_GetLapStartTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimeTrialUI::execGetLapStartTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetLapStartTime();
	P_NATIVE_END;
}
// ********** End Class UTimeTrialUI Function GetLapStartTime **************************************

// ********** Begin Class UTimeTrialUI Function StartRace ******************************************
struct Z_Construct_UFunction_UTimeTrialUI_StartRace_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Called from the countdown delegate to start the race */" },
#endif
		{ "ModuleRelativePath", "Variant_TimeTrial/UI/TimeTrialUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called from the countdown delegate to start the race" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeTrialUI_StartRace_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTimeTrialUI, nullptr, "StartRace", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeTrialUI_StartRace_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimeTrialUI_StartRace_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTimeTrialUI_StartRace()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimeTrialUI_StartRace_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimeTrialUI::execStartRace)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartRace();
	P_NATIVE_END;
}
// ********** End Class UTimeTrialUI Function StartRace ********************************************

// ********** Begin Class UTimeTrialUI *************************************************************
void UTimeTrialUI::StaticRegisterNativesUTimeTrialUI()
{
	UClass* Class = UTimeTrialUI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetBestLapTime", &UTimeTrialUI::execGetBestLapTime },
		{ "GetCurrentLap", &UTimeTrialUI::execGetCurrentLap },
		{ "GetLapStartTime", &UTimeTrialUI::execGetLapStartTime },
		{ "StartRace", &UTimeTrialUI::execStartRace },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTimeTrialUI;
UClass* UTimeTrialUI::GetPrivateStaticClass()
{
	using TClass = UTimeTrialUI;
	if (!Z_Registration_Info_UClass_UTimeTrialUI.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TimeTrialUI"),
			Z_Registration_Info_UClass_UTimeTrialUI.InnerSingleton,
			StaticRegisterNativesUTimeTrialUI,
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
	return Z_Registration_Info_UClass_UTimeTrialUI.InnerSingleton;
}
UClass* Z_Construct_UClass_UTimeTrialUI_NoRegister()
{
	return UTimeTrialUI::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTimeTrialUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple UI for a Time Trial racing game\n *  Keeps track of lap number and best time\n *  Spawns a sub-widget to do the initial countdown\n */" },
#endif
		{ "IncludePath", "Variant_TimeTrial/UI/TimeTrialUI.h" },
		{ "ModuleRelativePath", "Variant_TimeTrial/UI/TimeTrialUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple UI for a Time Trial racing game\nKeeps track of lap number and best time\nSpawns a sub-widget to do the initial countdown" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartUIClass_MetaData[] = {
		{ "Category", "Start Countdown" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Type of start countdown UI widget to spawn */" },
#endif
		{ "ModuleRelativePath", "Variant_TimeTrial/UI/TimeTrialUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Type of start countdown UI widget to spawn" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_StartUIClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimeTrialUI_BP_UpdateLaps, "BP_UpdateLaps" }, // 2755246255
		{ &Z_Construct_UFunction_UTimeTrialUI_GetBestLapTime, "GetBestLapTime" }, // 4113883040
		{ &Z_Construct_UFunction_UTimeTrialUI_GetCurrentLap, "GetCurrentLap" }, // 565785604
		{ &Z_Construct_UFunction_UTimeTrialUI_GetLapStartTime, "GetLapStartTime" }, // 1183123754
		{ &Z_Construct_UFunction_UTimeTrialUI_StartRace, "StartRace" }, // 3521687533
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeTrialUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UTimeTrialUI_Statics::NewProp_StartUIClass = { "StartUIClass", nullptr, (EPropertyFlags)0x0024080000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimeTrialUI, StartUIClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UTimeTrialStartUI_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartUIClass_MetaData), NewProp_StartUIClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimeTrialUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeTrialUI_Statics::NewProp_StartUIClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimeTrialUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTimeTrialUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_Vehicle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimeTrialUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimeTrialUI_Statics::ClassParams = {
	&UTimeTrialUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTimeTrialUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTimeTrialUI_Statics::PropPointers),
	0,
	0x00A010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimeTrialUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UTimeTrialUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTimeTrialUI()
{
	if (!Z_Registration_Info_UClass_UTimeTrialUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimeTrialUI.OuterSingleton, Z_Construct_UClass_UTimeTrialUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTimeTrialUI.OuterSingleton;
}
UTimeTrialUI::UTimeTrialUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTimeTrialUI);
UTimeTrialUI::~UTimeTrialUI() {}
// ********** End Class UTimeTrialUI ***************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialUI_h__Script_CPP_Vehicle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTimeTrialUI, UTimeTrialUI::StaticClass, TEXT("UTimeTrialUI"), &Z_Registration_Info_UClass_UTimeTrialUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimeTrialUI), 2226482005U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialUI_h__Script_CPP_Vehicle_205689869(TEXT("/Script/CPP_Vehicle"),
	Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialUI_h__Script_CPP_Vehicle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialUI_h__Script_CPP_Vehicle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
