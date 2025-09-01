// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Interfaces/GGPoolable.h
#pragma once

#include "UObject/Interface.h"
#include "GGPoolable.generated.h"

UINTERFACE(BlueprintType)
class GAMEGENIEBFLRUNTIME_API UGGPoolable : public UInterface
{
	GENERATED_BODY()
};

class GAMEGENIEBFLRUNTIME_API IGGPoolable
{
	GENERATED_BODY()
public:
	/** Called when the actor is acquired from the pool. */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Game Genie BFL|Pooling")
	void OnPooledActivated();
	/** Called when the actor is released back to the pool. */
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category="Game Genie BFL|Pooling")
	void OnPooledDeactivated();
};
