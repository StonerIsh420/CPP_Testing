// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameGenieBFLGameMode.h"

#ifdef GAMEGENIEBFL_GameGenieBFLGameMode_generated_h
#error "GameGenieBFLGameMode.generated.h already included, missing '#pragma once' in GameGenieBFLGameMode.h"
#endif
#define GAMEGENIEBFL_GameGenieBFLGameMode_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class AGameGenieBFLGameMode ****************************************************
GAMEGENIEBFL_API UClass* Z_Construct_UClass_AGameGenieBFLGameMode_NoRegister();

#define FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameGenieBFLGameMode(); \
	friend struct Z_Construct_UClass_AGameGenieBFLGameMode_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEGENIEBFL_API UClass* Z_Construct_UClass_AGameGenieBFLGameMode_NoRegister(); \
public: \
	DECLARE_CLASS2(AGameGenieBFLGameMode, AGameModeBase, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/GameGenieBFL"), Z_Construct_UClass_AGameGenieBFLGameMode_NoRegister) \
	DECLARE_SERIALIZER(AGameGenieBFLGameMode)


#define FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	AGameGenieBFLGameMode(AGameGenieBFLGameMode&&) = delete; \
	AGameGenieBFLGameMode(const AGameGenieBFLGameMode&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameGenieBFLGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameGenieBFLGameMode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(AGameGenieBFLGameMode) \
	NO_API virtual ~AGameGenieBFLGameMode();


#define FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLGameMode_h_12_PROLOG
#define FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class AGameGenieBFLGameMode;

// ********** End Class AGameGenieBFLGameMode ******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_projects_GameGenieBFL_Source_GameGenieBFL_GameGenieBFLGameMode_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
