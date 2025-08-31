// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Math/GGMathLibrary.h"

#ifdef GAMEGENIEBFLRUNTIME_GGMathLibrary_generated_h
#error "GGMathLibrary.generated.h already included, missing '#pragma once' in GGMathLibrary.h"
#endif
#define GAMEGENIEBFLRUNTIME_GGMathLibrary_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

class AActor;
class UObject;
class USplineComponent;
enum class ETeleportType : uint8;
struct FHitResult;

// ********** Begin Class UGGMathLibrary ***********************************************************
#define FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Math_GGMathLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHelixPoint); \
	DECLARE_FUNCTION(execGetMirroredLocation); \
	DECLARE_FUNCTION(execGetPercentageAlongSpline); \
	DECLARE_FUNCTION(execCalculateDeflectionVector); \
	DECLARE_FUNCTION(execVectorInputToWorldAcceleration); \
	DECLARE_FUNCTION(execSpringDampedVector); \
	DECLARE_FUNCTION(execSpringDampedFloat); \
	DECLARE_FUNCTION(execGetClosestPointOnSpline); \
	DECLARE_FUNCTION(execMaintainDistanceFromTarget); \
	DECLARE_FUNCTION(execGetRandomPointInNavMeshRadius); \
	DECLARE_FUNCTION(execTeleportWithGroundSnap); \
	DECLARE_FUNCTION(execCalculateArcTrajectoryPoints); \
	DECLARE_FUNCTION(execLookAtWithDampening);


GAMEGENIEBFLRUNTIME_API UClass* Z_Construct_UClass_UGGMathLibrary_NoRegister();

#define FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Math_GGMathLibrary_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGGMathLibrary(); \
	friend struct Z_Construct_UClass_UGGMathLibrary_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend GAMEGENIEBFLRUNTIME_API UClass* Z_Construct_UClass_UGGMathLibrary_NoRegister(); \
public: \
	DECLARE_CLASS2(UGGMathLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameGenieBFLRuntime"), Z_Construct_UClass_UGGMathLibrary_NoRegister) \
	DECLARE_SERIALIZER(UGGMathLibrary)


#define FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Math_GGMathLibrary_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGGMathLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UGGMathLibrary(UGGMathLibrary&&) = delete; \
	UGGMathLibrary(const UGGMathLibrary&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGGMathLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGGMathLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGGMathLibrary) \
	NO_API virtual ~UGGMathLibrary();


#define FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Math_GGMathLibrary_h_15_PROLOG
#define FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Math_GGMathLibrary_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Math_GGMathLibrary_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Math_GGMathLibrary_h_18_INCLASS_NO_PURE_DECLS \
	FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Math_GGMathLibrary_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UGGMathLibrary;

// ********** End Class UGGMathLibrary *************************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_unreal_projects_GameGenieBFL_Plugins_GameGenieBFL_Source_GameGenieBFLRuntime_Public_Math_GGMathLibrary_h

// ********** Begin Enum EGGCompareResult **********************************************************
#define FOREACH_ENUM_EGGCOMPARERESULT(op) \
	op(EGGCompareResult::Better) \
	op(EGGCompareResult::Worse) \
	op(EGGCompareResult::Equal) 

enum class EGGCompareResult : uint8;
template<> struct TIsUEnumClass<EGGCompareResult> { enum { Value = true }; };
template<> GAMEGENIEBFLRUNTIME_API UEnum* StaticEnum<EGGCompareResult>();
// ********** End Enum EGGCompareResult ************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
