// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GGBlueprintLibrary.h"

#ifdef GAMEGENIEBFLRUNTIME_GGBlueprintLibrary_generated_h
#error "GGBlueprintLibrary.generated.h already included, missing '#pragma once' in GGBlueprintLibrary.h"
#endif
#define GAMEGENIEBFLRUNTIME_GGBlueprintLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

enum class EIntegerComparison : uint8;

// ********** Begin Class UGameGenieBFLLibrary *****************************************************
#define FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_GGBlueprintLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execBranchOnInteger); \
	DECLARE_FUNCTION(execSnapVectorToGrid);


GAMEGENIEBFLRUNTIME_API UClass* Z_Construct_UClass_UGameGenieBFLLibrary_NoRegister();

#define FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_GGBlueprintLibrary_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameGenieBFLLibrary(); \
	friend struct Z_Construct_UClass_UGameGenieBFLLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEGENIEBFLRUNTIME_API UClass* Z_Construct_UClass_UGameGenieBFLLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UGameGenieBFLLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameGenieBFLRuntime"), Z_Construct_UClass_UGameGenieBFLLibrary_NoRegister) \
	DECLARE_SERIALIZER(UGameGenieBFLLibrary)


#define FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_GGBlueprintLibrary_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameGenieBFLLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGameGenieBFLLibrary(UGameGenieBFLLibrary&&) = delete; \
	UGameGenieBFLLibrary(const UGameGenieBFLLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameGenieBFLLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameGenieBFLLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameGenieBFLLibrary) \
	NO_API virtual ~UGameGenieBFLLibrary();


#define FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_GGBlueprintLibrary_h_20_PROLOG
#define FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_GGBlueprintLibrary_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_GGBlueprintLibrary_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_GGBlueprintLibrary_h_23_INCLASS_NO_PURE_DECLS \
	FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_GGBlueprintLibrary_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGameGenieBFLLibrary;

// ********** End Class UGameGenieBFLLibrary *******************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_GGBlueprintLibrary_h

// ********** Begin Enum EIntegerComparison ********************************************************
#define FOREACH_ENUM_EINTEGERCOMPARISON(op) \
	op(EIntegerComparison::GreaterThan) \
	op(EIntegerComparison::LessThan) \
	op(EIntegerComparison::EqualTo) 

enum class EIntegerComparison : uint8;
template<> struct TIsUEnumClass<EIntegerComparison> { enum { Value = true }; };
template<> GAMEGENIEBFLRUNTIME_API UEnum* StaticEnum<EIntegerComparison>();
// ********** End Enum EIntegerComparison **********************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
