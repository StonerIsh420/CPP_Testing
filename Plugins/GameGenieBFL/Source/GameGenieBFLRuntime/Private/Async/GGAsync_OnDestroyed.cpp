// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Private/Async/GGAsync_OnDestroyed.cpp
#include "Async/GGAsync_OnDestroyed.h"
#include "GameFramework/Actor.h"

UGGAsync_OnDestroyed* UGGAsync_OnDestroyed::BindOnDestroyed(AActor* Target)
{
	UGGAsync_OnDestroyed* Node = NewObject<UGGAsync_OnDestroyed>();
	Node->Target_ = Target;
	return Node;
}

void UGGAsync_OnDestroyed::Activate()
{
	if (!Target_.IsValid())
	{
		Destroyed.Broadcast(nullptr);
		return;
	}
	// AActor::OnDestroyed is a dynamic multicast delegate → use AddDynamic.
	Target_->OnDestroyed.AddDynamic(this, &UGGAsync_OnDestroyed::OnTargetDestroyed);
}

void UGGAsync_OnDestroyed::OnTargetDestroyed(AActor* A)
{
	Destroyed.Broadcast(A);
}
