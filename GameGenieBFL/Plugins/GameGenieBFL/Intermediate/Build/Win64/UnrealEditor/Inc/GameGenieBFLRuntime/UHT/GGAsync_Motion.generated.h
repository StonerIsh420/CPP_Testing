// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Async/GGAsync_Motion.h"

#ifdef GAMEGENIEBFLRUNTIME_GGAsync_Motion_generated_h
#error "GGAsync_Motion.generated.h already included, missing '#pragma once' in GGAsync_Motion.h"
#endif
#define GAMEGENIEBFLRUNTIME_GGAsync_Motion_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UGGAsync_RotateAroundPoint;
class UGGAsync_SmoothInterpTransform;
class UObject;
enum class ETeleportType : uint8;

// ********** Begin Delegate FGGSimpleAsyncDelegate ************************************************
#define FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Async_GGAsync_Motion_h_9_DELEGATE \
GAMEGENIEBFLRUNTIME_API void FGGSimpleAsyncDelegate_DelegateWrapper(const FMulticastScriptDelegate& GGSimpleAsyncDelegate);


// ********** End Delegate FGGSimpleAsyncDelegate **************************************************

// ********** Begin Class UGGAsync_SmoothInterpTransform *******************************************
#define FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Async_GGAsync_Motion_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execSmoothInterpolateTransform);


GAMEGENIEBFLRUNTIME_API UClass* Z_Construct_UClass_UGGAsync_SmoothInterpTransform_NoRegister();

#define FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Async_GGAsync_Motion_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGGAsync_SmoothInterpTransform(); \
	friend struct Z_Construct_UClass_UGGAsync_SmoothInterpTransform_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEGENIEBFLRUNTIME_API UClass* Z_Construct_UClass_UGGAsync_SmoothInterpTransform_NoRegister(); \
public: \
	DECLARE_CLASS2(UGGAsync_SmoothInterpTransform, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameGenieBFLRuntime"), Z_Construct_UClass_UGGAsync_SmoothInterpTransform_NoRegister) \
	DECLARE_SERIALIZER(UGGAsync_SmoothInterpTransform)


#define FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Async_GGAsync_Motion_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGGAsync_SmoothInterpTransform(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGGAsync_SmoothInterpTransform(UGGAsync_SmoothInterpTransform&&) = delete; \
	UGGAsync_SmoothInterpTransform(const UGGAsync_SmoothInterpTransform&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGGAsync_SmoothInterpTransform); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGGAsync_SmoothInterpTransform); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGGAsync_SmoothInterpTransform) \
	NO_API virtual ~UGGAsync_SmoothInterpTransform();


#define FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Async_GGAsync_Motion_h_15_PROLOG
#define FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Async_GGAsync_Motion_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Async_GGAsync_Motion_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Async_GGAsync_Motion_h_18_INCLASS_NO_PURE_DECLS \
	FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Async_GGAsync_Motion_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGGAsync_SmoothInterpTransform;

// ********** End Class UGGAsync_SmoothInterpTransform *********************************************

// ********** Begin Class UGGAsync_RotateAroundPoint ***********************************************
#define FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Async_GGAsync_Motion_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCancel); \
	DECLARE_FUNCTION(execRotateActorAroundPoint);


GAMEGENIEBFLRUNTIME_API UClass* Z_Construct_UClass_UGGAsync_RotateAroundPoint_NoRegister();

#define FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Async_GGAsync_Motion_h_87_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGGAsync_RotateAroundPoint(); \
	friend struct Z_Construct_UClass_UGGAsync_RotateAroundPoint_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEGENIEBFLRUNTIME_API UClass* Z_Construct_UClass_UGGAsync_RotateAroundPoint_NoRegister(); \
public: \
	DECLARE_CLASS2(UGGAsync_RotateAroundPoint, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameGenieBFLRuntime"), Z_Construct_UClass_UGGAsync_RotateAroundPoint_NoRegister) \
	DECLARE_SERIALIZER(UGGAsync_RotateAroundPoint)


#define FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Async_GGAsync_Motion_h_87_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGGAsync_RotateAroundPoint(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGGAsync_RotateAroundPoint(UGGAsync_RotateAroundPoint&&) = delete; \
	UGGAsync_RotateAroundPoint(const UGGAsync_RotateAroundPoint&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGGAsync_RotateAroundPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGGAsync_RotateAroundPoint); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGGAsync_RotateAroundPoint) \
	NO_API virtual ~UGGAsync_RotateAroundPoint();


#define FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Async_GGAsync_Motion_h_84_PROLOG
#define FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Async_GGAsync_Motion_h_87_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Async_GGAsync_Motion_h_87_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Async_GGAsync_Motion_h_87_INCLASS_NO_PURE_DECLS \
	FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Async_GGAsync_Motion_h_87_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGGAsync_RotateAroundPoint;

// ********** End Class UGGAsync_RotateAroundPoint *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Async_GGAsync_Motion_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
