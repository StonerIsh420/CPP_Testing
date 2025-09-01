// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Async/GGAsync_SaveLoad.h
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "GGAsync_SaveLoad.generated.h"

class USaveGame;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGGOnSaveCompleted, bool, bSuccess);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FGGOnLoadCompleted, bool, bSuccess, USaveGame*, Loaded);

/** Async Save wrapper using GameplayStatics delegate-based API. */
UCLASS()
class GAMEGENIEBFLRUNTIME_API UGGAsync_SaveGame : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable) FGGOnSaveCompleted Completed;

	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", WorldContext="WorldContextObject", DisplayName="Save Game State (Async)"), Category="Game Genie BFL|Data & Gameplay|Save/Load")
	static UGGAsync_SaveGame* SaveGameState(UObject* WorldContextObject, USaveGame* SaveGameObject, const FString& SlotName, int32 UserIndex=0);

	virtual void Activate() override;

private:
	UPROPERTY() TObjectPtr<USaveGame> Obj_;
	UPROPERTY() FString Slot_;
	UPROPERTY() int32 User_ = 0;

	void OnSaved(const FString& SlotName, int32 UserIndex, bool bSuccess);
};

/** Async Load wrapper using GameplayStatics delegate-based API. */
UCLASS()
class GAMEGENIEBFLRUNTIME_API UGGAsync_LoadGame : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable) FGGOnLoadCompleted Completed;

	UFUNCTION(BlueprintCallable, meta=(BlueprintInternalUseOnly="true", WorldContext="WorldContextObject", DisplayName="Load Game State (Async)"), Category="Game Genie BFL|Data & Gameplay|Save/Load")
	static UGGAsync_LoadGame* LoadGameState(UObject* WorldContextObject, const FString& SlotName, int32 UserIndex=0);

	virtual void Activate() override;

private:
	UPROPERTY() FString Slot_;
	UPROPERTY() int32 User_ = 0;

	// NOTE: UE5.6 delegate: (const FString& SlotName, int32 UserIndex, USaveGame* Loaded)
	void OnLoaded(const FString& SlotName, int32 UserIndex, USaveGame* Loaded);
};
