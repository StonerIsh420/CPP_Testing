// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Core/GGDeveloperSettings.h
#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GGDeveloperSettings.generated.h"

/**
 * Game Genie BFL Developer Settings
 */
UCLASS(Config=Game, DefaultConfig, DisplayName="Game Genie BFL")
class GAMEGENIEBFLRUNTIME_API UGGDeveloperSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UGGDeveloperSettings();

	/** Toggle default for on-screen debug (mirrored to CVar gg.Debug on startup). */
	UPROPERTY(EditDefaultsOnly, Config, Category="Debug")
	bool bEnableOnScreenDebug;

	/** Default display time for on-screen debug messages. */
	UPROPERTY(EditDefaultsOnly, Config, Category="Debug", meta=(ClampMin="0.1", ClampMax="30.0"))
	float DefaultOnScreenDebugTime;

	/** Handy accessor. */
	static const UGGDeveloperSettings* Get() { return GetDefault<UGGDeveloperSettings>(); }
};
