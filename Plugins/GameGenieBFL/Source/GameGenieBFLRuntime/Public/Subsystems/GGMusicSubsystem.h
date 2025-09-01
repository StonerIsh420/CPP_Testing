// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Subsystems/GGMusicSubsystem.h
#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GGMusicSubsystem.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGGOnMusicStateChanged, FName, NewState);

UCLASS()
class GAMEGENIEBFLRUNTIME_API UGGMusicSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable, Category="Game Genie BFL|Data & Gameplay|Music")
	FGGOnMusicStateChanged OnMusicStateChanged;

	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Data & Gameplay|Music")
	void PlayPhasedMusic(FName State)
	{
		if (State != CurrentState)
		{
			CurrentState = State;
			OnMusicStateChanged.Broadcast(CurrentState);
		}
	}

	UFUNCTION(BlueprintPure, Category="Game Genie BFL|Data & Gameplay|Music")
	FName GetMusicState() const { return CurrentState; }

private:
	UPROPERTY()
	FName CurrentState = NAME_None;
};
