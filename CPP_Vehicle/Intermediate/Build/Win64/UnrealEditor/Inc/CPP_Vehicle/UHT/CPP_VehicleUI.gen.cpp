// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CPP_VehicleUI.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeCPP_VehicleUI() {}

// ********** Begin Cross Module References ********************************************************
CPP_VEHICLE_API UClass* Z_Construct_UClass_UCPP_VehicleUI();
CPP_VEHICLE_API UClass* Z_Construct_UClass_UCPP_VehicleUI_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_CPP_Vehicle();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UCPP_VehicleUI Function OnGearUpdate *************************************
struct CPP_VehicleUI_eventOnGearUpdate_Parms
{
	int32 NewGear;
};
static FName NAME_UCPP_VehicleUI_OnGearUpdate = FName(TEXT("OnGearUpdate"));
void UCPP_VehicleUI::OnGearUpdate(int32 NewGear)
{
	CPP_VehicleUI_eventOnGearUpdate_Parms Parms;
	Parms.NewGear=NewGear;
	UFunction* Func = FindFunctionChecked(NAME_UCPP_VehicleUI_OnGearUpdate);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCPP_VehicleUI_OnGearUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Implemented in Blueprint to display the new gear */" },
#endif
		{ "ModuleRelativePath", "CPP_VehicleUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implemented in Blueprint to display the new gear" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewGear;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCPP_VehicleUI_OnGearUpdate_Statics::NewProp_NewGear = { "NewGear", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_VehicleUI_eventOnGearUpdate_Parms, NewGear), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_VehicleUI_OnGearUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_VehicleUI_OnGearUpdate_Statics::NewProp_NewGear,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_VehicleUI_OnGearUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_VehicleUI_OnGearUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPP_VehicleUI, nullptr, "OnGearUpdate", Z_Construct_UFunction_UCPP_VehicleUI_OnGearUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_VehicleUI_OnGearUpdate_Statics::PropPointers), sizeof(CPP_VehicleUI_eventOnGearUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_VehicleUI_OnGearUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_VehicleUI_OnGearUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CPP_VehicleUI_eventOnGearUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPP_VehicleUI_OnGearUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_VehicleUI_OnGearUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UCPP_VehicleUI Function OnGearUpdate ***************************************

// ********** Begin Class UCPP_VehicleUI Function OnSpeedUpdate ************************************
struct CPP_VehicleUI_eventOnSpeedUpdate_Parms
{
	float NewSpeed;
};
static FName NAME_UCPP_VehicleUI_OnSpeedUpdate = FName(TEXT("OnSpeedUpdate"));
void UCPP_VehicleUI::OnSpeedUpdate(float NewSpeed)
{
	CPP_VehicleUI_eventOnSpeedUpdate_Parms Parms;
	Parms.NewSpeed=NewSpeed;
	UFunction* Func = FindFunctionChecked(NAME_UCPP_VehicleUI_OnSpeedUpdate);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UCPP_VehicleUI_OnSpeedUpdate_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Implemented in Blueprint to display the new speed */" },
#endif
		{ "ModuleRelativePath", "CPP_VehicleUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Implemented in Blueprint to display the new speed" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UCPP_VehicleUI_OnSpeedUpdate_Statics::NewProp_NewSpeed = { "NewSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CPP_VehicleUI_eventOnSpeedUpdate_Parms, NewSpeed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCPP_VehicleUI_OnSpeedUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCPP_VehicleUI_OnSpeedUpdate_Statics::NewProp_NewSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_VehicleUI_OnSpeedUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCPP_VehicleUI_OnSpeedUpdate_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UCPP_VehicleUI, nullptr, "OnSpeedUpdate", Z_Construct_UFunction_UCPP_VehicleUI_OnSpeedUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_VehicleUI_OnSpeedUpdate_Statics::PropPointers), sizeof(CPP_VehicleUI_eventOnSpeedUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCPP_VehicleUI_OnSpeedUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCPP_VehicleUI_OnSpeedUpdate_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(CPP_VehicleUI_eventOnSpeedUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCPP_VehicleUI_OnSpeedUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCPP_VehicleUI_OnSpeedUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
// ********** End Class UCPP_VehicleUI Function OnSpeedUpdate **************************************

// ********** Begin Class UCPP_VehicleUI ***********************************************************
void UCPP_VehicleUI::StaticRegisterNativesUCPP_VehicleUI()
{
}
FClassRegistrationInfo Z_Registration_Info_UClass_UCPP_VehicleUI;
UClass* UCPP_VehicleUI::GetPrivateStaticClass()
{
	using TClass = UCPP_VehicleUI;
	if (!Z_Registration_Info_UClass_UCPP_VehicleUI.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("CPP_VehicleUI"),
			Z_Registration_Info_UClass_UCPP_VehicleUI.InnerSingleton,
			StaticRegisterNativesUCPP_VehicleUI,
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
	return Z_Registration_Info_UClass_UCPP_VehicleUI.InnerSingleton;
}
UClass* Z_Construct_UClass_UCPP_VehicleUI_NoRegister()
{
	return UCPP_VehicleUI::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UCPP_VehicleUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Simple Vehicle HUD class\n *  Displays the current speed and gear.\n *  Widget setup is handled in a Blueprint subclass.\n */" },
#endif
		{ "IncludePath", "CPP_VehicleUI.h" },
		{ "ModuleRelativePath", "CPP_VehicleUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Simple Vehicle HUD class\nDisplays the current speed and gear.\nWidget setup is handled in a Blueprint subclass." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsMPH_MetaData[] = {
		{ "Category", "Vehicle" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Controls the display of speed in Km/h or MPH */" },
#endif
		{ "ModuleRelativePath", "CPP_VehicleUI.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Controls the display of speed in Km/h or MPH" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsMPH_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsMPH;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCPP_VehicleUI_OnGearUpdate, "OnGearUpdate" }, // 3072962786
		{ &Z_Construct_UFunction_UCPP_VehicleUI_OnSpeedUpdate, "OnSpeedUpdate" }, // 1222502316
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCPP_VehicleUI>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UCPP_VehicleUI_Statics::NewProp_bIsMPH_SetBit(void* Obj)
{
	((UCPP_VehicleUI*)Obj)->bIsMPH = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCPP_VehicleUI_Statics::NewProp_bIsMPH = { "bIsMPH", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UCPP_VehicleUI), &Z_Construct_UClass_UCPP_VehicleUI_Statics::NewProp_bIsMPH_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsMPH_MetaData), NewProp_bIsMPH_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCPP_VehicleUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCPP_VehicleUI_Statics::NewProp_bIsMPH,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_VehicleUI_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCPP_VehicleUI_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_CPP_Vehicle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_VehicleUI_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCPP_VehicleUI_Statics::ClassParams = {
	&UCPP_VehicleUI::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCPP_VehicleUI_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_VehicleUI_Statics::PropPointers),
	0,
	0x00A010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCPP_VehicleUI_Statics::Class_MetaDataParams), Z_Construct_UClass_UCPP_VehicleUI_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCPP_VehicleUI()
{
	if (!Z_Registration_Info_UClass_UCPP_VehicleUI.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCPP_VehicleUI.OuterSingleton, Z_Construct_UClass_UCPP_VehicleUI_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCPP_VehicleUI.OuterSingleton;
}
UCPP_VehicleUI::UCPP_VehicleUI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCPP_VehicleUI);
UCPP_VehicleUI::~UCPP_VehicleUI() {}
// ********** End Class UCPP_VehicleUI *************************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehicleUI_h__Script_CPP_Vehicle_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCPP_VehicleUI, UCPP_VehicleUI::StaticClass, TEXT("UCPP_VehicleUI"), &Z_Registration_Info_UClass_UCPP_VehicleUI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCPP_VehicleUI), 1464328870U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehicleUI_h__Script_CPP_Vehicle_3699783356(TEXT("/Script/CPP_Vehicle"),
	Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehicleUI_h__Script_CPP_Vehicle_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_GitHUB_Testing_CPP_Testing_CPP_Vehicle_Source_CPP_Vehicle_CPP_VehicleUI_h__Script_CPP_Vehicle_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
