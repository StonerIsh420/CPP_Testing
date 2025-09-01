// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Math/GGMathLibrary.h
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Components/SplineComponent.h"
#include "GGMathLibrary.generated.h"

UENUM(BlueprintType)
enum class EGGCompareResult : uint8
{
	Better, Worse, Equal
};

UCLASS()
class GAMEGENIEBFLRUNTIME_API UGGMathLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	/** 
	 * Smoothly rotates an Actor to face TargetLocation using interpolation.
	 * \nUse bYawOnly to ignore pitch/roll (common for characters).
	 * \nDeltaTime should be your frame delta for stable results.
	 */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Math & Transforms",
		meta=(DisplayName="Look At with Dampening",
			  ToolTip="Smoothly rotates an Actor to face TargetLocation.\nUse bYawOnly to preserve Pitch/Roll (e.g., characters).\nPass DeltaTime from Tick for frame-rate independent results."))
	static void LookAtWithDampening(AActor* Actor, const FVector& TargetLocation, float InterpSpeed = 6.f, float DeltaTime = 0.f, bool bYawOnly = true);

	/**
	 * Computes a designer-friendly projectile arc from Start to End with a chosen apex height (above the higher endpoint).
	 * \nReturns NumPoints evenly spaced along the arc (>= 2).
	 * \nPure math; does not use physics.
	 */
	UFUNCTION(BlueprintPure, Category="Game Genie BFL|Math & Transforms",
		meta=(DisplayName="Calculate Arc Trajectory Points",
			  ToolTip="Generates a simple parabola from Start to End with a chosen apex height.\nReturns NumPoints along the arc.\nPure; does not simulate physics."))
	static void CalculateArcTrajectoryPoints(const FVector& Start, const FVector& End, float ApexHeight, int32 NumPoints, TArray<FVector>& OutPoints);

	/**
	 * Teleports an Actor, then line traces downward to snap cleanly onto the ground.
	 * \nUses optional sweep on the initial placement. Outputs final location and hit.
	 * \nAuthority Only: changes replicated world state.
	 */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Game Genie BFL|Math & Transforms",
		meta=(WorldContext="WorldContextObject",
			  DisplayName="Teleport with Ground Snap",
			  ToolTip="Teleports Actor to NewLocation, then traces down by DownTraceDistance and snaps to the ground if hit.\nOptional sweep on placement; returns whether ground was found.\nAuthority Only: executes on the server for replicated actors."))
	static bool TeleportWithGroundSnap(UObject* WorldContextObject, AActor* Actor, const FVector& NewLocation, float DownTraceDistance, ECollisionChannel TraceChannel, bool bSweep, ETeleportType TeleportType, FVector& OutFinalLocation, FHitResult& OutHit);

	/**
	 * Finds a random **reachable** NavMesh point within Radius of Origin.
	 * \nUseful for AI wander targets. Returns false if no nav found.
	 */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Math & Transforms",
		meta=(WorldContext="WorldContextObject",
			  DisplayName="Get Random Point in NavMesh Radius",
			  ToolTip="Gets a random REACHABLE point on the NavMesh within Radius of Origin.\nReturns false if no valid point is found."))
	static bool GetRandomPointInNavMeshRadius(UObject* WorldContextObject, const FVector& Origin, float Radius, FVector& OutLocation);

	/**
	 * Computes acceleration required to keep Owner at DesiredDistance from Target using a damped spring along the radial direction.
	 * \nFeed this into your movement logic for elastic spacing behavior.
	 */
	UFUNCTION(BlueprintPure, Category="Game Genie BFL|Math & Transforms",
		meta=(DisplayName="Maintain Distance from Target",
			  ToolTip="Returns an acceleration vector to maintain DesiredDistance from Target using a damped spring.\nProvide Owner/Target velocity for better damping."))
	static FVector MaintainDistanceFromTarget(const FVector& OwnerLocation, const FVector& OwnerVelocity, const FVector& TargetLocation, const FVector& TargetVelocity, float DesiredDistance, float Stiffness = 10.f, float Damping = 2.f);

	/**
	 * Projects WorldLocation onto Spline and returns the closest point.
	 * \nAlso outputs distance along spline and the input key (for advanced usage).
	 */
	UFUNCTION(BlueprintPure, Category="Game Genie BFL|Math & Transforms",
		meta=(DisplayName="Get Closest Point on Spline",
			  ToolTip="Finds the closest point to WorldLocation on Spline.\nAlso outputs distance along spline and the input key."))
	static FVector GetClosestPointOnSpline(USplineComponent* Spline, const FVector& WorldLocation, float& OutDistanceAlongSpline, float& OutInputKey);

	/**
	 * Critically-damped spring step for a float (Unity-like SmoothDamp).
	 * \nUpdates VelocityInOut and outputs the new value.
	 */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Math & Transforms",
		meta=(DisplayName="Get Spring-Damped Float",
			  ToolTip="Critically damped step from Current to Target.\nUpdates VelocityInOut; returns OutValue.\nUse SmoothTime to control responsiveness."))
	static void SpringDampedFloat(float Current, float Target, float& VelocityInOut, float DeltaTime, float SmoothTime, float& OutValue);

	/**
	 * Critically-damped spring step for a vector (applies to each component).
	 * \nUpdates VelocityInOut and outputs the new value.
	 */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Math & Transforms",
		meta=(DisplayName="Get Spring-Damped Vector",
			  ToolTip="Vector version of SmoothDamp.\nUpdates VelocityInOut per-component; returns OutValue."))
	static void SpringDampedVector(const FVector& Current, const FVector& Target, FVector& VelocityInOut, float DeltaTime, float SmoothTime, FVector& OutValue);

	/**
	 * Converts a 2D input vector (X=fwd, Y=right) into a world-space acceleration based on CameraRotation.
	 * \nOptionally ignores pitch for character-like controls.
	 */
	UFUNCTION(BlueprintPure, Category="Game Genie BFL|Math & Transforms",
		meta=(DisplayName="Vector Input to World Acceleration",
			  ToolTip="Maps input X/Y into world-space using CameraRotation.\nSet bIgnorePitch for planar movement.\nAccelMagnitude is the resulting vector length."))
	static FVector VectorInputToWorldAcceleration(const FVector2D& Input, const FRotator& CameraRotation, float AccelMagnitude = 2048.f, bool bIgnorePitch = true);

	/**
	 * Computes a ricochet direction from an incoming direction and a surface normal.
	 * \nPreserves incoming speed and scales by Restitution.
	 */
	UFUNCTION(BlueprintPure, Category="Game Genie BFL|Math & Transforms",
		meta=(DisplayName="Calculate Deflection Vector",
			  ToolTip="Reflects IncomingDir around SurfaceNormal.\nPreserves speed; scales by Restitution for bounciness."))
	static FVector CalculateDeflectionVector(const FVector& IncomingDir, const FVector& SurfaceNormal, float Restitution = 1.f);

	/**
	 * Returns how far along the Spline the closest point to WorldLocation lies, as 0–1.
	 */
	UFUNCTION(BlueprintPure, Category="Game Genie BFL|Math & Transforms",
		meta=(DisplayName="Get Percentage Along Spline",
			  ToolTip="Returns 0–1 percentage along Spline for the closest point to WorldLocation."))
	static float GetPercentageAlongSpline(USplineComponent* Spline, const FVector& WorldLocation);

	/**
	 * Mirrors a point across a plane (origin + normal).
	 */
	UFUNCTION(BlueprintPure, Category="Game Genie BFL|Math & Transforms",
		meta=(DisplayName="Get Mirrored Location",
			  ToolTip="Mirrors Point across the plane defined by PlaneOrigin and PlaneNormal."))
	static FVector GetMirroredLocation(const FVector& Point, const FVector& PlaneOrigin, const FVector& PlaneNormal);

	/**
	 * Returns a point on a 3D helix around Axis through Center.
	 * \nRadius controls spiral size; PitchPerTurn is vertical change per 360°; AngleDegrees is the current angle.
	 */
	UFUNCTION(BlueprintPure, Category="Game Genie BFL|Math & Transforms",
		meta=(DisplayName="Get Helix Point",
			  ToolTip="Calculates a point on a helix about Axis with given Radius and PitchPerTurn at AngleDegrees.\nUseful for spiral paths and VFX."))
	static FVector GetHelixPoint(const FVector& Center, const FVector& Axis, float Radius, float PitchPerTurn, float AngleDegrees);
};
