// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Private/Subsystems/GGCooldownSubsystem.cpp
#include "Subsystems/GGCooldownSubsystem.h"
#include "Engine/World.h"

static double GGNow(const UWorld* W) { return W ? W->GetTimeSeconds() : 0.0; }

bool UGGCooldownSubsystem::CheckAndStartCooldown(FName Id, float Duration, float& Remaining)
{
	Remaining = 0.f;
	UWorld* W = GetWorld();
	if (!W || Id.IsNone() || Duration <= 0.f) { return false; }

	const double Now = GGNow(W);
	const double* End = EndTimes_.Find(Id);
	if (End && *End > Now)
	{
		Remaining = float(*End - Now);
		return false;
	}

	EndTimes_.Add(Id, Now + Duration);
	return true;
}

float UGGCooldownSubsystem::GetCooldownRemaining(FName Id) const
{
	const UWorld* W = GetWorld();
	const double Now = GGNow(W);
	if (const double* End = EndTimes_.Find(Id))
	{
		return float(FMath::Max(0.0, *End - Now));
	}
	return 0.f;
}

void UGGCooldownSubsystem::StartCooldown(FName Id, float Duration)
{
	if (UWorld* W = GetWorld())
	{
		if (!Id.IsNone() && Duration > 0.f)
		{
			EndTimes_.Add(Id, GGNow(W) + Duration);
		}
	}
}

void UGGCooldownSubsystem::ClearCooldown(FName Id)
{
	EndTimes_.Remove(Id);
}

void UGGCooldownSubsystem::ClearAll()
{
	EndTimes_.Reset();
}
