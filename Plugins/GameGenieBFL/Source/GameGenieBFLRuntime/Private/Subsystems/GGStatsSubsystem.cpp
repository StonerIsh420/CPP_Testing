// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Private/Subsystems/GGStatsSubsystem.cpp
#include "Subsystems/GGStatsSubsystem.h"

int32 UGGStatsSubsystem::AddGameStat(FName StatId, int32 Delta)
{
	int32& V = Stats_.FindOrAdd(StatId);
	V += Delta;
	return V;
}

void UGGStatsSubsystem::SetGameStat(FName StatId, int32 Value)
{
	Stats_.Add(StatId, Value);
}

int32 UGGStatsSubsystem::GetGameStat(FName StatId) const
{
	if (const int32* V = Stats_.Find(StatId)) { return *V; }
	return 0;
}
