// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Async/GGAsync_SpawnFromSoft.h
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "Engine/StreamableManager.h"
#include "GGAsync_SpawnFromSoft.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGGSpawnFromSoftResult, AActor*, Spawned);

UCLASS()
class GAMEGENIEBFLRUNTIME_API UGGAsync_SpawnFromSoft : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable, Category="Game Genie BFL|Async")
	FGGSpawnFromSoftResult Succeeded;
	UPROPERTY(BlueprintAssignable, Category="Game Genie BFL|Async")
	FGGSpawnFromSoftResult Failed;

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, meta=(
		WorldContext="WorldContextObject",
		BlueprintInternalUseOnly="true",
		DisplayName="Async Load and Spawn Actor"),
		Category="Game Genie BFL|Async")
	static UGGAsync_SpawnFromSoft* LoadAndSpawn(UObject* WorldContextObject, TSoftClassPtr<AActor> SoftClass,
		const FTransform& Transform,
		ESpawnActorCollisionHandlingMethod CollisionHandling = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButAlwaysSpawn,
		AActor* Owner = nullptr);

	virtual void Activate() override;

private:
	TWeakObjectPtr<UWorld> World_;
	TSoftClassPtr<AActor> SoftClass_;
	FTransform Transform_;
	ESpawnActorCollisionHandlingMethod Collision_;
	TWeakObjectPtr<AActor> Owner_;

	TSharedPtr<FStreamableHandle> Handle_;

	void DoLoad();
	void OnLoaded();
};
