// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Private/Async/GGAsync_Delayed.cpp
#include "Async/GGAsync_Delayed.h"
#include "Engine/World.h"
#include "TimerManager.h"

UGGAsync_DelayedEvent* UGGAsync_DelayedEvent::Delayed(UObject* WorldContextObject, float DelaySeconds)
{
	UGGAsync_DelayedEvent* Node = NewObject<UGGAsync_DelayedEvent>();
	Node->Delay_ = FMath::Max(0.f, DelaySeconds);
	if (UWorld* W = GEngine ? GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull) : nullptr)
	{
		Node->World_ = W;
	}
	return Node;
}

void UGGAsync_DelayedEvent::Activate()
{
	if (!World_.IsValid())
	{
		Completed.Broadcast();
		return;
	}
	World_->GetTimerManager().SetTimer(Handle_, [this]()
	{
		Completed.Broadcast();
	}, Delay_, false);
}
