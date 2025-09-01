// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Private/Core/GGCvars.cpp
#include "CoreMinimal.h"
#include "Core/GGLog.h"

DEFINE_LOG_CATEGORY(LogGameGenieBFL);

// Local CVar, with default 0; we set it from settings on module startup.
static TAutoConsoleVariable<int32> CVarGGDebug(
	TEXT("gg.Debug"),
	0,
	TEXT("Enable GameGenieBFL on-screen debug messages (0=off, 1=on)."),
	ECVF_Default);

namespace GGDebugCVar
{
	bool GGIsDebugEnabled()
	{
		return CVarGGDebug.GetValueOnGameThread() != 0;
	}

	void GGSetDebugEnabled(bool bEnabled)
	{
		if (IConsoleVariable* Var = CVarGGDebug.AsVariable())
		{
			Var->Set(bEnabled ? 1 : 0, ECVF_SetByCode);
		}
	}
}

// Public bridge used by GGLog.h helpers
namespace GGDebug
{
	GAMEGENIEBFLRUNTIME_API bool IsDebugEnabled()
	{
		return GGDebugCVar::GGIsDebugEnabled();
	}
}
