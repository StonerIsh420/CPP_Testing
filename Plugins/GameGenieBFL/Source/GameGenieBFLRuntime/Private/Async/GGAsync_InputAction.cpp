// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Private/Async/GGAsync_InputAction.cpp
#include "Async/GGAsync_InputAction.h"
#include "GameFramework/PlayerController.h"
#include "Engine/World.h"
#include "Engine/Engine.h"

#if GG_WITH_ENHANCED_INPUT
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "InputAction.h"
#endif

UGGAsync_InputAction* UGGAsync_InputAction::BindToInputAction(UObject* WorldContextObject, APlayerController* PC, UObject* Action)
{
	UGGAsync_InputAction* Node = NewObject<UGGAsync_InputAction>();
	Node->PC_ = PC;
	Node->ActionObj_ = Action;
	return Node;
}

void UGGAsync_InputAction::Activate()
{
	APlayerController* PC = PC_.Get();
	if (!PC || !ActionObj_.IsValid())
	{
		// Feature disabled or invalid input -> emit once so BP execution continues.
		Triggered.Broadcast();
		return;
	}

#if GG_WITH_ENHANCED_INPUT
	if (UEnhancedInputComponent* EIC = Cast<UEnhancedInputComponent>(PC->InputComponent))
	{
		if (UInputAction* IA = Cast<UInputAction>(ActionObj_.Get()))
		{
			EIC->BindAction(IA, ETriggerEvent::Triggered, this, &UGGAsync_InputAction::OnTriggeredInternal);
			return;
		}
	}
	// If we reach here, we couldn't bind properly; emit once to avoid dead graphs.
	Triggered.Broadcast();
#else
	// Stub path when Enhanced Input is not compiled in.
	Triggered.Broadcast();
#endif
}

#if GG_WITH_ENHANCED_INPUT
void UGGAsync_InputAction::OnTriggeredInternal()
{
	Triggered.Broadcast();
}
#endif
