// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Private/Core/GGDeveloperSettings.cpp
#include "Core/GGDeveloperSettings.h"

UGGDeveloperSettings::UGGDeveloperSettings()
{
	CategoryName = TEXT("Plugins");
	SectionName  = TEXT("Game Genie BFL");

	bEnableOnScreenDebug = true;
	DefaultOnScreenDebugTime = 2.0f;
}
