// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Private/GameGenieBFLRuntimeModule.cpp
#include "CoreMinimal.h"
#include "Modules/ModuleManager.h"
#include "Core/GGLog.h"
#include "Core/GGDeveloperSettings.h"

// Accessors for CVar in GGCvars.cpp
namespace GGDebugCVar
{
	bool GGIsDebugEnabled();
	void GGSetDebugEnabled(bool bEnabled);
}

class FGameGenieBFLRuntimeModule : public IModuleInterface
{
public:
	virtual void StartupModule() override
	{
		const UGGDeveloperSettings* Settings = GetDefault<UGGDeveloperSettings>();
		GGDebugCVar::GGSetDebugEnabled(Settings && Settings->bEnableOnScreenDebug);

		UE_LOG(LogGameGenieBFL, Log, TEXT("GameGenieBFLRuntime module started. OnScreenDebug=%s"),
			(Settings && Settings->bEnableOnScreenDebug) ? TEXT("true") : TEXT("false"));
	}

	virtual void ShutdownModule() override
	{
		UE_LOG(LogGameGenieBFL, Log, TEXT("GameGenieBFLRuntime module shutdown."));
	}
};

IMPLEMENT_MODULE(FGameGenieBFLRuntimeModule, GameGenieBFLRuntime)
