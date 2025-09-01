// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeTrialStartUI.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeTimeTrialStartUI() {}

// ********** Begin Cross Module References ********************************************************
CPP_VEHICLE_API UClass* Z_Construct_UClass_UTimeTrialStartUI();
CPP_VEHICLE_API UClass* Z_Construct_UClass_UTimeTrialStartUI_NoRegister();
CPP_VEHICLE_API UFunction* Z_Construct_UDelegateFunction_CPP_Vehicle_CountdownFinishedDelegate__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_CPP_Vehicle();
// ********** End Cross Module References **********************************************************

// ********** Begin Delegate FCountdownFinishedDelegate ********************************************
struct Z_Construct_UDelegateFunction_CPP_Vehicle_CountdownFinishedDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Variant_TimeTrial/UI/TimeTrialStartUI.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FDelegateFunctionParams FuncParams;
};
const UECodeGen_Private::FDelegateFunctionParams Z_Construct_UDelegateFunction_CPP_Vehicle_CountdownFinishedDelegate__DelegateSignature_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UPackage__Script_CPP_Vehicle, nullptr, "CountdownFinishedDelegate__DelegateSignature", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_CPP_Vehicle_CountdownFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_CPP_Vehicle_CountdownFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UDelegateFunction_CPP_Vehicle_CountdownFinishedDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUDelegateFunction(&ReturnFunction, Z_Construct_UDelegateFunction_CPP_Vehicle_CountdownFinishedDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCountdownFinishedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CountdownFinishedDelegate)
{
	CountdownFinishedDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// ********** End Delegate FCountdownFinishedDelegate **********************************************

// ********** Begin Class UTimeTrialStartUI Function BP_StartCountdown *****************************
static FName NAME_UTimeTrialStartUI_BP_StartCountdown = FName(TEXT("BP_StartCountdown"));
void UTimeTrialStartUI::BP_StartCountdown()
{
	UFunction* Func = FindFunctionChecked(NAME_UTimeTrialStartUI_BP_StartCountdown);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UTimeTrialStartUI_BP_StartCountdown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Countdown" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Passes control to Blueprint to animate the race countdown. FinishCountdown should be called to start the race when it's done. */" },
#endif
		{ "DisplayName", "Start Countdown" },
		{ "ModuleRelativePath", "Variant_TimeTrial/UI/TimeTrialStartUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Passes control to Blueprint to animate the race countdown. FinishCountdown should be called to start the race when it's done." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeTrialStartUI_BP_StartCountdown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTimeTrialStartUI, nullptr, "BP_StartCountdown", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeTrialStartUI_BP_StartCountdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimeTrialStartUI_BP_StartCountdown_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTimeTrialStartUI_BP_StartCountdown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimeTrialStartUI_BP_StartCountdown_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UTimeTrialStartUI Function BP_StartCountdown *******************************

// ********** Begin Class UTimeTrialStartUI Function FinishCountdown *******************************
struct Z_Construct_UFunction_UTimeTrialStartUI_FinishCountdown_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Countdown" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Finishes the countdown and starts the race. */" },
#endif
		{ "ModuleRelativePath", "Variant_TimeTrial/UI/TimeTrialStartUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finishes the countdown and starts the race." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeTrialStartUI_FinishCountdown_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTimeTrialStartUI, nullptr, "FinishCountdown", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeTrialStartUI_FinishCountdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimeTrialStartUI_FinishCountdown_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTimeTrialStartUI_FinishCountdown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimeTrialStartUI_FinishCountdown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimeTrialStartUI::execFinishCountdown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->FinishCountdown();
	P_NATIVE_END;
}
// ********** End Class UTimeTrialStartUI Function FinishCountdown *********************************

// ********** Begin Class UTimeTrialStartUI ********************************************************
void UTimeTrialStartUI::StaticRegisterNativesUTimeTrialStartUI()
{
	UClass* Class = UTimeTrialStartUI::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FinishCountdown", &UTimeTrialStartUI::execFinishCountdown },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_UTimeTrialStartUI;
UClass* UTimeTrialStartUI::GetPrivateStaticClass()
{
	using TClass = UTimeTrialStartUI;
	if (!Z_Registration_Info_UClass_UTimeTrialStartUI.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("TimeTrialStartUI"),
			Z_Registration_Info_UClass_UTimeTrialStartUI.InnerSingleton,
			StaticRegisterNativesUTimeTrialStartUI,
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
	return Z_Registration_Info_UClass_UTimeTrialStartUI.InnerSingleton;
}
UClass* Z_Construct_UClass_UTimeTrialStartUI_NoRegister()
{
	return UTimeTrialStartUI::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTimeTrialStartUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  A race start countdown widget.\n *  The countdown animation is performed by widget animation.\n *  Calls a delegate when the countdown is done to start the race.\n */" },
#endif
		{ "IncludePath", "Variant_TimeTrial/UI/TimeTrialStartUI.h" },
		{ "ModuleRelativePath", "Variant_TimeTrial/UI/TimeTrialStartUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A race start countdown widget.\nThe countdown animation is performed by widget animation.\nCalls a delegate when the countdown is done to start the race." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimeTrialStartUI_BP_StartCountdown, "BP_StartCountdown" }, // 3536381716
		{ &Z_Construct_UFunction_UTimeTrialStartUI_FinishCountdown, "FinishCountdown" }, // 2833812462
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeTrialStartUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTimeTrialStartUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_Vehicle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimeTrialStartUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimeTrialStartUI_Statics::ClassParams = {
	&UTimeTrialStartUI::StaticClass,
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
	0x00A010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimeTrialStartUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UTimeTrialStartUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTimeTrialStartUI()
{
	if (!Z_Registration_Info_UClass_UTimeTrialStartUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimeTrialStartUI.OuterSingleton, Z_Construct_UClass_UTimeTrialStartUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTimeTrialStartUI.OuterSingleton;
}
UTimeTrialStartUI::UTimeTrialStartUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTimeTrialStartUI);
UTimeTrialStartUI::~UTimeTrialStartUI() {}
// ********** End Class UTimeTrialStartUI **********************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialStartUI_h__Script_CPP_Vehicle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTimeTrialStartUI, UTimeTrialStartUI::StaticClass, TEXT("UTimeTrialStartUI"), &Z_Registration_Info_UClass_UTimeTrialStartUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimeTrialStartUI), 3154194464U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialStartUI_h__Script_CPP_Vehicle_3839633182(TEXT("/Script/CPP_Vehicle"),
	Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialStartUI_h__Script_CPP_Vehicle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_Variant_TimeTrial_UI_TimeTrialStartUI_h__Script_CPP_Vehicle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
