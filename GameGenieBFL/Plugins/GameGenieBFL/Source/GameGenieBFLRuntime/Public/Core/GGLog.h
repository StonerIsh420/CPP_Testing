// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Core/GGLog.h
#pragma once

#include "CoreMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(LogGameGenieBFL, Log, All);

// Forward decl
class UWorld;

namespace GGDebug
{
	/** Returns true if console var gg.Debug is nonzero. */
	GAMEGENIEBFLRUNTIME_API bool IsDebugEnabled();

	/**
	 * Print to screen (conditionally) and log.
	 * Safe in Shipping (no crash; no screen output unless enabled).
	 */
	static FORCEINLINE void Screen(UWorld* World, const FString& Message, float TimeSeconds = 2.f, const FColor& Color = FColor::Green)
	{
		UE_LOG(LogGameGenieBFL, Log, TEXT("%s"), *Message);
#if !UE_BUILD_SHIPPING
		if (IsDebugEnabled() && World)
		{
			if (GEngine)
			{
				GEngine->AddOnScreenDebugMessage(/*Key=*/-1, TimeSeconds, Color, Message);
			}
		}
#endif
	}
}
