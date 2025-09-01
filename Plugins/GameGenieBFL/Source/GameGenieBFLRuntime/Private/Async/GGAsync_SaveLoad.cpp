// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Private/Async/GGAsync_SaveLoad.cpp
#include "Async/GGAsync_SaveLoad.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/SaveGame.h"

UGGAsync_SaveGame* UGGAsync_SaveGame::SaveGameState(UObject* /*WorldContextObject*/, USaveGame* SaveGameObject, const FString& SlotName, int32 UserIndex)
{
	UGGAsync_SaveGame* Node = NewObject<UGGAsync_SaveGame>();
	Node->Obj_  = SaveGameObject;
	Node->Slot_ = SlotName;
	Node->User_ = UserIndex;
	return Node;
}

void UGGAsync_SaveGame::Activate()
{
	if (!Obj_ || Slot_.IsEmpty())
	{
		Completed.Broadcast(false);
		return;
	}

	UGameplayStatics::AsyncSaveGameToSlot(
		Obj_, Slot_, User_,
		FAsyncSaveGameToSlotDelegate::CreateUObject(this, &UGGAsync_SaveGame::OnSaved)
	);
}

void UGGAsync_SaveGame::OnSaved(const FString& /*SlotName*/, int32 /*UserIndex*/, bool bSuccess)
{
	Completed.Broadcast(bSuccess);
}

UGGAsync_LoadGame* UGGAsync_LoadGame::LoadGameState(UObject* /*WorldContextObject*/, const FString& SlotName, int32 UserIndex)
{
	UGGAsync_LoadGame* Node = NewObject<UGGAsync_LoadGame>();
	Node->Slot_ = SlotName;
	Node->User_ = UserIndex;
	return Node;
}

void UGGAsync_LoadGame::Activate()
{
	if (Slot_.IsEmpty())
	{
		Completed.Broadcast(false, nullptr);
		return;
	}

	UGameplayStatics::AsyncLoadGameFromSlot(
		Slot_, User_,
		FAsyncLoadGameFromSlotDelegate::CreateUObject(this, &UGGAsync_LoadGame::OnLoaded)
	);
}

void UGGAsync_LoadGame::OnLoaded(const FString& /*SlotName*/, int32 /*UserIndex*/, USaveGame* Loaded)
{
	const bool bSuccess = (Loaded != nullptr);
	Completed.Broadcast(bSuccess, Loaded);
}
