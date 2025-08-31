// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameGenieBFLCharacter.h"

#ifdef GAMEGENIEBFL_GameGenieBFLCharacter_generated_h
#error "GameGenieBFLCharacter.generated.h already included, missing '#pragma once' in GameGenieBFLCharacter.h"
#endif
#define GAMEGENIEBFL_GameGenieBFLCharacter_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGameGenieBFLCharacter ***************************************************
#define FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsSprinting); \
	DECLARE_FUNCTION(execDoJumpEnd); \
	DECLARE_FUNCTION(execDoJumpStart); \
	DECLARE_FUNCTION(execDoMove); \
	DECLARE_FUNCTION(execDoAim);


GAMEGENIEBFL_API UClass* Z_Construct_UClass_AGameGenieBFLCharacter_NoRegister();

#define FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLCharacter_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameGenieBFLCharacter(); \
	friend struct Z_Construct_UClass_AGameGenieBFLCharacter_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEGENIEBFL_API UClass* Z_Construct_UClass_AGameGenieBFLCharacter_NoRegister(); \
public: \
	DECLARE_CLASS2(AGameGenieBFLCharacter, ACharacter, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameGenieBFL"), Z_Construct_UClass_AGameGenieBFLCharacter_NoRegister) \
	DECLARE_SERIALIZER(AGameGenieBFLCharacter)


#define FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLCharacter_h_23_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGameGenieBFLCharacter(AGameGenieBFLCharacter&&) = delete; \
	AGameGenieBFLCharacter(const AGameGenieBFLCharacter&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameGenieBFLCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameGenieBFLCharacter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AGameGenieBFLCharacter) \
	NO_API virtual ~AGameGenieBFLCharacter();


#define FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLCharacter_h_20_PROLOG
#define FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLCharacter_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLCharacter_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLCharacter_h_23_INCLASS_NO_PURE_DECLS \
	FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLCharacter_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGameGenieBFLCharacter;

// ********** End Class AGameGenieBFLCharacter *****************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLCharacter_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
