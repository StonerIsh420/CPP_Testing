// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameGenieBFLCharacter.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

void EmptyLinkFunctionForGeneratedCodeGameGenieBFLCharacter() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
GAMEGENIEBFL_API UClass* Z_Construct_UClass_AGameGenieBFLCharacter();
GAMEGENIEBFL_API UClass* Z_Construct_UClass_AGameGenieBFLCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_GameGenieBFL();
// ********** End Cross Module References **********************************************************

// ********** Begin Class AGameGenieBFLCharacter Function DoAim ************************************
struct Z_Construct_UFunction_AGameGenieBFLCharacter_DoAim_Statics
{
	struct GameGenieBFLCharacter_eventDoAim_Parms
	{
		float Yaw;
		float Pitch;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Core aim impl (applies clamp & scaling) */" },
#endif
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Core aim impl (applies clamp & scaling)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Yaw;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Pitch;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameGenieBFLCharacter_DoAim_Statics::NewProp_Yaw = { "Yaw", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameGenieBFLCharacter_eventDoAim_Parms, Yaw), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameGenieBFLCharacter_DoAim_Statics::NewProp_Pitch = { "Pitch", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameGenieBFLCharacter_eventDoAim_Parms, Pitch), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameGenieBFLCharacter_DoAim_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameGenieBFLCharacter_DoAim_Statics::NewProp_Yaw,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameGenieBFLCharacter_DoAim_Statics::NewProp_Pitch,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameGenieBFLCharacter_DoAim_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameGenieBFLCharacter_DoAim_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGameGenieBFLCharacter, nullptr, "DoAim", Z_Construct_UFunction_AGameGenieBFLCharacter_DoAim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameGenieBFLCharacter_DoAim_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameGenieBFLCharacter_DoAim_Statics::GameGenieBFLCharacter_eventDoAim_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameGenieBFLCharacter_DoAim_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameGenieBFLCharacter_DoAim_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGameGenieBFLCharacter_DoAim_Statics::GameGenieBFLCharacter_eventDoAim_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameGenieBFLCharacter_DoAim()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameGenieBFLCharacter_DoAim_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameGenieBFLCharacter::execDoAim)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Yaw);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Pitch);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoAim(Z_Param_Yaw,Z_Param_Pitch);
	P_NATIVE_END;
}
// ********** End Class AGameGenieBFLCharacter Function DoAim **************************************

// ********** Begin Class AGameGenieBFLCharacter Function DoJumpEnd ********************************
struct Z_Construct_UFunction_AGameGenieBFLCharacter_DoJumpEnd_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameGenieBFLCharacter_DoJumpEnd_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGameGenieBFLCharacter, nullptr, "DoJumpEnd", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameGenieBFLCharacter_DoJumpEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameGenieBFLCharacter_DoJumpEnd_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGameGenieBFLCharacter_DoJumpEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameGenieBFLCharacter_DoJumpEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameGenieBFLCharacter::execDoJumpEnd)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpEnd();
	P_NATIVE_END;
}
// ********** End Class AGameGenieBFLCharacter Function DoJumpEnd **********************************

// ********** Begin Class AGameGenieBFLCharacter Function DoJumpStart ******************************
struct Z_Construct_UFunction_AGameGenieBFLCharacter_DoJumpStart_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles jump start/end */" },
#endif
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles jump start/end" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameGenieBFLCharacter_DoJumpStart_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGameGenieBFLCharacter, nullptr, "DoJumpStart", nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameGenieBFLCharacter_DoJumpStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameGenieBFLCharacter_DoJumpStart_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_AGameGenieBFLCharacter_DoJumpStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameGenieBFLCharacter_DoJumpStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameGenieBFLCharacter::execDoJumpStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoJumpStart();
	P_NATIVE_END;
}
// ********** End Class AGameGenieBFLCharacter Function DoJumpStart ********************************

// ********** Begin Class AGameGenieBFLCharacter Function DoMove ***********************************
struct Z_Construct_UFunction_AGameGenieBFLCharacter_DoMove_Statics
{
	struct GameGenieBFLCharacter_eventDoMove_Parms
	{
		float Right;
		float Forward;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Handles move inputs from either controls or UI interfaces */" },
#endif
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Handles move inputs from either controls or UI interfaces" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Right;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Forward;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameGenieBFLCharacter_DoMove_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameGenieBFLCharacter_eventDoMove_Parms, Right), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGameGenieBFLCharacter_DoMove_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameGenieBFLCharacter_eventDoMove_Parms, Forward), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameGenieBFLCharacter_DoMove_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameGenieBFLCharacter_DoMove_Statics::NewProp_Right,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameGenieBFLCharacter_DoMove_Statics::NewProp_Forward,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameGenieBFLCharacter_DoMove_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameGenieBFLCharacter_DoMove_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGameGenieBFLCharacter, nullptr, "DoMove", Z_Construct_UFunction_AGameGenieBFLCharacter_DoMove_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameGenieBFLCharacter_DoMove_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameGenieBFLCharacter_DoMove_Statics::GameGenieBFLCharacter_eventDoMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameGenieBFLCharacter_DoMove_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameGenieBFLCharacter_DoMove_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGameGenieBFLCharacter_DoMove_Statics::GameGenieBFLCharacter_eventDoMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameGenieBFLCharacter_DoMove()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameGenieBFLCharacter_DoMove_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameGenieBFLCharacter::execDoMove)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Right);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Forward);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DoMove(Z_Param_Right,Z_Param_Forward);
	P_NATIVE_END;
}
// ********** End Class AGameGenieBFLCharacter Function DoMove *************************************

// ********** Begin Class AGameGenieBFLCharacter Function IsSprinting ******************************
struct Z_Construct_UFunction_AGameGenieBFLCharacter_IsSprinting_Statics
{
	struct GameGenieBFLCharacter_eventIsSprinting_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Movement|Sprint" },
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_AGameGenieBFLCharacter_IsSprinting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((GameGenieBFLCharacter_eventIsSprinting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGameGenieBFLCharacter_IsSprinting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(GameGenieBFLCharacter_eventIsSprinting_Parms), &Z_Construct_UFunction_AGameGenieBFLCharacter_IsSprinting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGameGenieBFLCharacter_IsSprinting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGameGenieBFLCharacter_IsSprinting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameGenieBFLCharacter_IsSprinting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AGameGenieBFLCharacter_IsSprinting_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_AGameGenieBFLCharacter, nullptr, "IsSprinting", Z_Construct_UFunction_AGameGenieBFLCharacter_IsSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGameGenieBFLCharacter_IsSprinting_Statics::PropPointers), sizeof(Z_Construct_UFunction_AGameGenieBFLCharacter_IsSprinting_Statics::GameGenieBFLCharacter_eventIsSprinting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AGameGenieBFLCharacter_IsSprinting_Statics::Function_MetaDataParams), Z_Construct_UFunction_AGameGenieBFLCharacter_IsSprinting_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_AGameGenieBFLCharacter_IsSprinting_Statics::GameGenieBFLCharacter_eventIsSprinting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AGameGenieBFLCharacter_IsSprinting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AGameGenieBFLCharacter_IsSprinting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AGameGenieBFLCharacter::execIsSprinting)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSprinting();
	P_NATIVE_END;
}
// ********** End Class AGameGenieBFLCharacter Function IsSprinting ********************************

// ********** Begin Class AGameGenieBFLCharacter ***************************************************
void AGameGenieBFLCharacter::StaticRegisterNativesAGameGenieBFLCharacter()
{
	UClass* Class = AGameGenieBFLCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DoAim", &AGameGenieBFLCharacter::execDoAim },
		{ "DoJumpEnd", &AGameGenieBFLCharacter::execDoJumpEnd },
		{ "DoJumpStart", &AGameGenieBFLCharacter::execDoJumpStart },
		{ "DoMove", &AGameGenieBFLCharacter::execDoMove },
		{ "IsSprinting", &AGameGenieBFLCharacter::execIsSprinting },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
FClassRegistrationInfo Z_Registration_Info_UClass_AGameGenieBFLCharacter;
UClass* AGameGenieBFLCharacter::GetPrivateStaticClass()
{
	using TClass = AGameGenieBFLCharacter;
	if (!Z_Registration_Info_UClass_AGameGenieBFLCharacter.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			StaticPackage(),
			TEXT("GameGenieBFLCharacter"),
			Z_Registration_Info_UClass_AGameGenieBFLCharacter.InnerSingleton,
			StaticRegisterNativesAGameGenieBFLCharacter,
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
	return Z_Registration_Info_UClass_AGameGenieBFLCharacter.InnerSingleton;
}
UClass* Z_Construct_UClass_AGameGenieBFLCharacter_NoRegister()
{
	return AGameGenieBFLCharacter::GetPrivateStaticClass();
}
struct Z_Construct_UClass_AGameGenieBFLCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * First person character upgraded for survival locomotion & camera polish.\n */" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "GameGenieBFLCharacter.h" },
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person character upgraded for survival locomotion & camera polish." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonMesh_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Pawn mesh: first person view (arms; seen only by self) */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pawn mesh: first person view (arms; seen only by self)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FirstPersonCameraComponent_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** First person camera */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "First person camera" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Actions */" },
#endif
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Actions" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Generic stick look (gamepad) */" },
#endif
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generic stick look (gamepad)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MouseLookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Mouse look */" },
#endif
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mouse look" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sprint (Digital) */" },
#endif
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sprint (Digital)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Crouch (Digital) */" },
#endif
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Crouch (Digital)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WalkSpeed_MetaData[] = {
		{ "Category", "Movement|Speeds" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ===== Movement tuning =====\n" },
#endif
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "===== Movement tuning =====" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintSpeed_MetaData[] = {
		{ "Category", "Movement|Speeds" },
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchSpeed_MetaData[] = {
		{ "Category", "Movement|Speeds" },
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundAcceleration_MetaData[] = {
		{ "Category", "Movement|Speeds" },
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GroundFriction_MetaData[] = {
		{ "Category", "Movement|Speeds" },
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AirControl_MetaData[] = {
		{ "Category", "Movement|Air" },
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSprintIsToggle_MetaData[] = {
		{ "Category", "Movement|Sprint" },
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCrouchIsToggle_MetaData[] = {
		{ "Category", "Movement|Crouch" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Hold-to-crouch vs toggle */" },
#endif
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Hold-to-crouch vs toggle" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchedHalfHeight_MetaData[] = {
		{ "Category", "Movement|Crouch" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Crouched half-height (passed to CharacterMovement setter) */" },
#endif
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Crouched half-height (passed to CharacterMovement setter)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinPitchDeg_MetaData[] = {
		{ "Category", "Camera|Clamp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clamp camera pitch in degrees */" },
#endif
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clamp camera pitch in degrees" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxPitchDeg_MetaData[] = {
		{ "Category", "Camera|Clamp" },
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookYawScale_MetaData[] = {
		{ "Category", "Camera|Look" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Look scaling & inversion (mouse/gamepad separated) */" },
#endif
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Look scaling & inversion (mouse/gamepad separated)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookPitchScale_MetaData[] = {
		{ "Category", "Camera|Look" },
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertMouseY_MetaData[] = {
		{ "Category", "Camera|Look" },
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertGamepadY_MetaData[] = {
		{ "Category", "Camera|Look" },
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableHeadBob_MetaData[] = {
		{ "Category", "Camera|HeadBob" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Head-bob (position offsets only: Z + slight Y sway) */" },
#endif
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Head-bob (position offsets only: Z + slight Y sway)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadBobAmplitude_MetaData[] = {
		{ "Category", "Camera|HeadBob" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Vertical amplitude in cm (at walk) */" },
#endif
		{ "EditCondition", "bEnableHeadBob" },
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Vertical amplitude in cm (at walk)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadBobSway_MetaData[] = {
		{ "Category", "Camera|HeadBob" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Lateral sway amplitude in cm (at walk) */" },
#endif
		{ "EditCondition", "bEnableHeadBob" },
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Lateral sway amplitude in cm (at walk)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadBobFrequency_MetaData[] = {
		{ "Category", "Camera|HeadBob" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Base step frequency at walk in Hz (\xe2\x89\x88 human walk cadence) */" },
#endif
		{ "EditCondition", "bEnableHeadBob" },
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Base step frequency at walk in Hz (\xe2\x89\x88 human walk cadence)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintBobFrequency_MetaData[] = {
		{ "Category", "Camera|HeadBob" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Step frequency at sprint in Hz */" },
#endif
		{ "EditCondition", "bEnableHeadBob" },
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Step frequency at sprint in Hz" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HeadBobMinSpeed_MetaData[] = {
		{ "Category", "Camera|HeadBob" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Min speed (cm/s) before bob kicks in */" },
#endif
		{ "EditCondition", "bEnableHeadBob" },
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Min speed (cm/s) before bob kicks in" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableFOVKick_MetaData[] = {
		{ "Category", "Camera|FOVKick" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Sprint FOV kick (additive) */" },
#endif
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sprint FOV kick (additive)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SprintFirstPersonFOV_MetaData[] = {
		{ "Category", "Camera|FOVKick" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Absolute target FOV if additive is zero (fallback) */" },
#endif
		{ "EditCondition", "bEnableFOVKick" },
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Absolute target FOV if additive is zero (fallback)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVKickAdd_MetaData[] = {
		{ "Category", "Camera|FOVKick" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Additive FOV when fully at sprint speed (scaled by speed) */" },
#endif
		{ "EditCondition", "bEnableFOVKick" },
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additive FOV when fully at sprint speed (scaled by speed)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxSprintFOV_MetaData[] = {
		{ "Category", "Camera|FOVKick" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Clamp sprint FOV to this max */" },
#endif
		{ "EditCondition", "bEnableFOVKick" },
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clamp sprint FOV to this max" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FOVInterpSpeed_MetaData[] = {
		{ "Category", "Camera|FOVKick" },
		{ "EditCondition", "bEnableFOVKick" },
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrouchCameraZOffset_MetaData[] = {
		{ "Category", "Camera|Crouch" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Camera drop while crouched (cm) */" },
#endif
		{ "ModuleRelativePath", "GameGenieBFLCharacter.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Camera drop while crouched (cm)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FirstPersonCameraComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MouseLookAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrouchAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WalkSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundAcceleration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_GroundFriction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AirControl;
	static void NewProp_bSprintIsToggle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSprintIsToggle;
	static void NewProp_bCrouchIsToggle_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCrouchIsToggle;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchedHalfHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MinPitchDeg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxPitchDeg;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LookYawScale;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_LookPitchScale;
	static void NewProp_bInvertMouseY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertMouseY;
	static void NewProp_bInvertGamepadY_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertGamepadY;
	static void NewProp_bEnableHeadBob_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableHeadBob;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadBobAmplitude;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadBobSway;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadBobFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintBobFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HeadBobMinSpeed;
	static void NewProp_bEnableFOVKick_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableFOVKick;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SprintFirstPersonFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVKickAdd;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxSprintFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FOVInterpSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CrouchCameraZOffset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AGameGenieBFLCharacter_DoAim, "DoAim" }, // 2509441565
		{ &Z_Construct_UFunction_AGameGenieBFLCharacter_DoJumpEnd, "DoJumpEnd" }, // 1849629901
		{ &Z_Construct_UFunction_AGameGenieBFLCharacter_DoJumpStart, "DoJumpStart" }, // 4215933321
		{ &Z_Construct_UFunction_AGameGenieBFLCharacter_DoMove, "DoMove" }, // 203947632
		{ &Z_Construct_UFunction_AGameGenieBFLCharacter_IsSprinting, "IsSprinting" }, // 3169036886
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameGenieBFLCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_FirstPersonMesh = { "FirstPersonMesh", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, FirstPersonMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonMesh_MetaData), NewProp_FirstPersonMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_FirstPersonCameraComponent = { "FirstPersonCameraComponent", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, FirstPersonCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FirstPersonCameraComponent_MetaData), NewProp_FirstPersonCameraComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JumpAction_MetaData), NewProp_JumpAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_MouseLookAction = { "MouseLookAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, MouseLookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MouseLookAction_MetaData), NewProp_MouseLookAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_SprintAction = { "SprintAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, SprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintAction_MetaData), NewProp_SprintAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_CrouchAction = { "CrouchAction", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, CrouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchAction_MetaData), NewProp_CrouchAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_WalkSpeed = { "WalkSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, WalkSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WalkSpeed_MetaData), NewProp_WalkSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_SprintSpeed = { "SprintSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, SprintSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintSpeed_MetaData), NewProp_SprintSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_CrouchSpeed = { "CrouchSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, CrouchSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchSpeed_MetaData), NewProp_CrouchSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_GroundAcceleration = { "GroundAcceleration", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, GroundAcceleration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundAcceleration_MetaData), NewProp_GroundAcceleration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_GroundFriction = { "GroundFriction", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, GroundFriction), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GroundFriction_MetaData), NewProp_GroundFriction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_AirControl = { "AirControl", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, AirControl), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AirControl_MetaData), NewProp_AirControl_MetaData) };
void Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_bSprintIsToggle_SetBit(void* Obj)
{
	((AGameGenieBFLCharacter*)Obj)->bSprintIsToggle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_bSprintIsToggle = { "bSprintIsToggle", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameGenieBFLCharacter), &Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_bSprintIsToggle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSprintIsToggle_MetaData), NewProp_bSprintIsToggle_MetaData) };
void Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_bCrouchIsToggle_SetBit(void* Obj)
{
	((AGameGenieBFLCharacter*)Obj)->bCrouchIsToggle = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_bCrouchIsToggle = { "bCrouchIsToggle", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameGenieBFLCharacter), &Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_bCrouchIsToggle_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCrouchIsToggle_MetaData), NewProp_bCrouchIsToggle_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_CrouchedHalfHeight = { "CrouchedHalfHeight", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, CrouchedHalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchedHalfHeight_MetaData), NewProp_CrouchedHalfHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_MinPitchDeg = { "MinPitchDeg", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, MinPitchDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinPitchDeg_MetaData), NewProp_MinPitchDeg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_MaxPitchDeg = { "MaxPitchDeg", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, MaxPitchDeg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxPitchDeg_MetaData), NewProp_MaxPitchDeg_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_LookYawScale = { "LookYawScale", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, LookYawScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookYawScale_MetaData), NewProp_LookYawScale_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_LookPitchScale = { "LookPitchScale", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, LookPitchScale), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookPitchScale_MetaData), NewProp_LookPitchScale_MetaData) };
void Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_bInvertMouseY_SetBit(void* Obj)
{
	((AGameGenieBFLCharacter*)Obj)->bInvertMouseY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_bInvertMouseY = { "bInvertMouseY", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameGenieBFLCharacter), &Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_bInvertMouseY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertMouseY_MetaData), NewProp_bInvertMouseY_MetaData) };
void Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_bInvertGamepadY_SetBit(void* Obj)
{
	((AGameGenieBFLCharacter*)Obj)->bInvertGamepadY = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_bInvertGamepadY = { "bInvertGamepadY", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameGenieBFLCharacter), &Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_bInvertGamepadY_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertGamepadY_MetaData), NewProp_bInvertGamepadY_MetaData) };
void Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_bEnableHeadBob_SetBit(void* Obj)
{
	((AGameGenieBFLCharacter*)Obj)->bEnableHeadBob = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_bEnableHeadBob = { "bEnableHeadBob", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameGenieBFLCharacter), &Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_bEnableHeadBob_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableHeadBob_MetaData), NewProp_bEnableHeadBob_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_HeadBobAmplitude = { "HeadBobAmplitude", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, HeadBobAmplitude), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadBobAmplitude_MetaData), NewProp_HeadBobAmplitude_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_HeadBobSway = { "HeadBobSway", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, HeadBobSway), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadBobSway_MetaData), NewProp_HeadBobSway_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_HeadBobFrequency = { "HeadBobFrequency", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, HeadBobFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadBobFrequency_MetaData), NewProp_HeadBobFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_SprintBobFrequency = { "SprintBobFrequency", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, SprintBobFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintBobFrequency_MetaData), NewProp_SprintBobFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_HeadBobMinSpeed = { "HeadBobMinSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, HeadBobMinSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HeadBobMinSpeed_MetaData), NewProp_HeadBobMinSpeed_MetaData) };
void Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_bEnableFOVKick_SetBit(void* Obj)
{
	((AGameGenieBFLCharacter*)Obj)->bEnableFOVKick = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_bEnableFOVKick = { "bEnableFOVKick", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AGameGenieBFLCharacter), &Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_bEnableFOVKick_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableFOVKick_MetaData), NewProp_bEnableFOVKick_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_SprintFirstPersonFOV = { "SprintFirstPersonFOV", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, SprintFirstPersonFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SprintFirstPersonFOV_MetaData), NewProp_SprintFirstPersonFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_FOVKickAdd = { "FOVKickAdd", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, FOVKickAdd), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVKickAdd_MetaData), NewProp_FOVKickAdd_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_MaxSprintFOV = { "MaxSprintFOV", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, MaxSprintFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxSprintFOV_MetaData), NewProp_MaxSprintFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_FOVInterpSpeed = { "FOVInterpSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, FOVInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FOVInterpSpeed_MetaData), NewProp_FOVInterpSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_CrouchCameraZOffset = { "CrouchCameraZOffset", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameGenieBFLCharacter, CrouchCameraZOffset), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrouchCameraZOffset_MetaData), NewProp_CrouchCameraZOffset_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameGenieBFLCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_FirstPersonMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_FirstPersonCameraComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_JumpAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_MouseLookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_SprintAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_CrouchAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_WalkSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_SprintSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_CrouchSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_GroundAcceleration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_GroundFriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_AirControl,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_bSprintIsToggle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_bCrouchIsToggle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_CrouchedHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_MinPitchDeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_MaxPitchDeg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_LookYawScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_LookPitchScale,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_bInvertMouseY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_bInvertGamepadY,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_bEnableHeadBob,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_HeadBobAmplitude,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_HeadBobSway,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_HeadBobFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_SprintBobFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_HeadBobMinSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_bEnableFOVKick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_SprintFirstPersonFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_FOVKickAdd,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_MaxSprintFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_FOVInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameGenieBFLCharacter_Statics::NewProp_CrouchCameraZOffset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameGenieBFLCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameGenieBFLCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_GameGenieBFL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameGenieBFLCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameGenieBFLCharacter_Statics::ClassParams = {
	&AGameGenieBFLCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AGameGenieBFLCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameGenieBFLCharacter_Statics::PropPointers),
	0,
	0x008001A5u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameGenieBFLCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameGenieBFLCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameGenieBFLCharacter()
{
	if (!Z_Registration_Info_UClass_AGameGenieBFLCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameGenieBFLCharacter.OuterSingleton, Z_Construct_UClass_AGameGenieBFLCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameGenieBFLCharacter.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameGenieBFLCharacter);
AGameGenieBFLCharacter::~AGameGenieBFLCharacter() {}
// ********** End Class AGameGenieBFLCharacter *****************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLCharacter_h__Script_GameGenieBFL_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameGenieBFLCharacter, AGameGenieBFLCharacter::StaticClass, TEXT("AGameGenieBFLCharacter"), &Z_Registration_Info_UClass_AGameGenieBFLCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameGenieBFLCharacter), 3590416240U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLCharacter_h__Script_GameGenieBFL_595236064(TEXT("/Script/GameGenieBFL"),
	Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLCharacter_h__Script_GameGenieBFL_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLCharacter_h__Script_GameGenieBFL_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
