// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Actors/GGActorLibrary.h
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "GGActorLibrary.generated.h"

class UCurveFloat;
class UMeshComponent;
class USplineComponent;
class UMaterialInstanceDynamic;

UCLASS()
class GAMEGENIEBFLRUNTIME_API UGGActorLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/** Finds the closest actor of a class from FromLocation with optional LOS trace and max distance. */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Actors & Components",
		meta=(WorldContext="WorldContextObject",
			  AdvancedDisplay="TraceChannel,ActorToIgnore",
			  DisplayName="Get Closest Actor with Sight Check",
			  ToolTip="Iterates all actors of class and returns the closest one from FromLocation.\nOptionally checks line of sight on TraceChannel, ignoring ActorToIgnore.\nOutDistance is 3D distance to the returned actor (or -1 if none)."))
	static AActor* GetClosestActorWithSightCheck(
		UObject* WorldContextObject,
		TSubclassOf<AActor> ActorClass,
		const FVector& FromLocation,
		float MaxDistance,
		/*OUT*/ float& OutDistance,
		ECollisionChannel TraceChannel = ECC_Visibility,
		AActor* ActorToIgnore = nullptr);

	/** Returns the first component with a given ComponentTag (optional class filter). */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Actors & Components",
		meta=(DisplayName="Find Component by Tag",
			  ToolTip="Scans all components and returns the first whose ComponentTags contains Tag.\nOptionally restrict to a component class (e.g., StaticMeshComponent)."))
	static UActorComponent* FindComponentByTag(AActor* Owner, FName Tag, TSubclassOf<UActorComponent> OptionalClassFilter);

	/** Gets all attached child actors of a given class recursively (optionally include root). */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Actors & Components",
		meta=(DisplayName="Get All Child Actors of Class (Recursive)",
			  ToolTip="Traverses attachments recursively (and ChildActorComponents) and returns matching actors.\nSet bIncludeSelf to also include the Root actor if it matches."))
	static void GetAllChildActorsOfClassRecursive(AActor* Root, TSubclassOf<AActor> ActorClass, bool bIncludeSelf, TArray<AActor*>& OutActors);

	/** True if the actor's location projects to the NavMesh. */
	UFUNCTION(BlueprintPure, Category="Game Genie BFL|Actors & Components",
		meta=(WorldContext="WorldContextObject", DisplayName="Is Actor on NavMesh",
			  ToolTip="Projects the actor's location to the NavMesh using NavigationSystem."))
	static bool IsActorOnNavMesh(UObject* WorldContextObject, AActor* Actor);

	/** Returns all actors of a class that are currently in the player camera's view (any corner visible). */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Actors & Components",
		meta=(WorldContext="WorldContextObject", DisplayName="Get All Actors in View Frustum",
			  ToolTip="Projects each actor's AABB corners to the viewport.\nReturns actors for which any corner is on-screen and in front of the camera."))
	static void GetAllActorsInViewFrustum(UObject* WorldContextObject, TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors);

	/** Returns 8 corner points of the actor's world-space AABB. */
	UFUNCTION(BlueprintPure, Category="Game Genie BFL|Actors & Components",
		meta=(DisplayName="Get Actor Bounds Corner Points",
			  ToolTip="Uses GetActorBounds (world-aligned AABB) and returns the 8 corner points."))
	static void GetActorBoundsCornerPoints(AActor* Actor, TArray<FVector>& OutCorners);

	/** Creates or returns a Dynamic Material Instance on a mesh at MaterialIndex and assigns it. */
	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Materials",
		meta=(DisplayName="Create Dynamic Material Instance (Safe)",
			  ToolTip="Gets or creates a MID on the given mesh slot and assigns it back to the mesh.\nReturns the MID, or nullptr if invalid inputs."))
	static UMaterialInstanceDynamic* CreateDynamicMaterialInstanceSafe(UMeshComponent* Mesh, int32 MaterialIndex);

	/** Applies a physics impulse to all simulating prim comps on an actor in the given world direction. */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Game Genie BFL|Actors & Components",
		meta=(DisplayName="Fire Impulse in Direction",
			  ToolTip="Adds a world-space impulse to all simulating PrimitiveComponents on Actor.\nIf bScaleByMass, the impulse is scaled by mass for consistent acceleration."))
	static void FireImpulseInDirection(AActor* Actor, const FVector& Direction, float Strength = 100000.f, bool bScaleByMass = true);

	/** Applies radial damage with a float curve (value sampled at distance/Radius) scaled by MaxDamage. */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Game Genie BFL|Actors & Components",
		meta=(WorldContext="WorldContextObject", DisplayName="Apply Radial Damage with Curve",
			  ToolTip="Overlaps actors in a sphere and applies damage = MaxDamage * Curve(distance/Radius).\nUses ApplyDamage per actor. Returns the list of affected actors."))
	static void ApplyRadialDamageWithCurve(UObject* WorldContextObject, const FVector& Origin, float Radius, float MaxDamage, UCurveFloat* Curve,
		TSubclassOf<UDamageType> DamageTypeClass, AController* Instigator, AActor* DamageCauser,
		const TArray<AActor*>& ActorsToIgnore, TArray<AActor*>& OutAffected);

	/** After Delay seconds, disables physics and attaches children to Parent (stabilizing hierarchy). */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Game Genie BFL|Actors & Components",
		meta=(WorldContext="WorldContextObject", DisplayName="Weld Attached Physics Actors",
			  ToolTip="After a short delay, stops simulate-physics on attached children and attaches to Parent's root.\nUseful after spawn to settle physics before welding."))
	static void WeldAttachedPhysicsActors(UObject* WorldContextObject, AActor* Parent, float DelaySeconds = 0.05f);

	/** Sets properties on a batch of actors (visibility, hidden in game, collision). */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Game Genie BFL|Actors & Components",
		meta=(DisplayName="Batch Set Actor Properties",
			  ToolTip="Applies visibility/hidden/collision to all components of each actor.\nUse flags to control which properties are set."))
	static void BatchSetActorProperties(const TArray<AActor*>& Actors,
		bool bSetVisibility, bool bNewVisibility,
		bool bSetHiddenInGame, bool bNewHiddenInGame,
		bool bSetCollisionEnabled, ECollisionEnabled::Type NewCollisionEnabled = ECollisionEnabled::QueryAndPhysics);

	/** Sets CustomTimeDilation on an actor and all attached children recursively. */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Game Genie BFL|Actors & Components",
		meta=(DisplayName="Set Custom Time Dilation (Recursive)",
			  ToolTip="Sets CustomTimeDilation on Actor and all attached actors recursively."))
	static void SetCustomTimeDilationRecursive(AActor* Root, float NewCustomTimeDilation);

	/** Spawns or acquires an actor from the pool (GameInstanceSubsystem). */
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category="Game Genie BFL|Actors & Components",
		meta=(WorldContext="WorldContextObject", DisplayName="Spawn Actor from Pool",
			  ToolTip="Acquire an inactive pooled actor of Class or spawn a new one.\nSets transform and owner; actor is unhidden and enabled."))
	static AActor* SpawnActorFromPool(UObject* WorldContextObject, TSubclassOf<AActor> Class, const FTransform& Transform,
		ESpawnActorCollisionHandlingMethod CollisionHandling = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn,
		AActor* Owner = nullptr);

	/** True if the location projects to the NavMesh (convenience). */
	UFUNCTION(BlueprintPure, Category="Game Genie BFL|Actors & Components",
		meta=(WorldContext="WorldContextObject", DisplayName="Is Location on NavMesh"))
	static bool IsLocationOnNavMesh(UObject* WorldContextObject, const FVector& Location);
};
