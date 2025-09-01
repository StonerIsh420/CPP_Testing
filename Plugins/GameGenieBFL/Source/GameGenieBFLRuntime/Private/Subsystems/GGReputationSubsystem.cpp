// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Private/Subsystems/GGReputationSubsystem.cpp
#include "Subsystems/GGReputationSubsystem.h"

float UGGReputationSubsystem::AddReputation(FName Faction, float Delta)
{
	float& V = Rep_.FindOrAdd(Faction);
	V += Delta;
	return V;
}

void UGGReputationSubsystem::SetReputation(FName Faction, float Value)
{
	Rep_.Add(Faction, Value);
}

float UGGReputationSubsystem::GetReputation(FName Faction) const
{
	if (const float* V = Rep_.Find(Faction)) { return *V; }
	return 0.f;
}
