// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Private/Async/GGAsync_SpawnFromSoft.cpp
#include "Async/GGAsync_SpawnFromSoft.h"
#include "Engine/AssetManager.h"
#include "Engine/World.h"

UGGAsync_SpawnFromSoft* UGGAsync_SpawnFromSoft::LoadAndSpawn(UObject* WorldContextObject, TSoftClassPtr<AActor> SoftClass,
	const FTransform& Transform, ESpawnActorCollisionHandlingMethod CollisionHandling, AActor* Owner)
{
	UGGAsync_SpawnFromSoft* Node = NewObject<UGGAsync_SpawnFromSoft>();
	Node->World_     = GEngine ? GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull) : nullptr;
	Node->SoftClass_ = SoftClass;
	Node->Transform_ = Transform;
	Node->Collision_ = CollisionHandling;
	Node->Owner_     = Owner;
	Node->RegisterWithGameInstance(WorldContextObject);
	return Node;
}

void UGGAsync_SpawnFromSoft::Activate()
{
	if (!World_.IsValid() || !SoftClass_.IsValid())
	{
		Failed.Broadcast(nullptr);
		SetReadyToDestroy();
		return;
	}
	DoLoad();
}

void UGGAsync_SpawnFromSoft::DoLoad()
{
	FStreamableManager& Streamable = UAssetManager::GetStreamableManager();
	Handle_ = Streamable.RequestAsyncLoad(SoftClass_.ToSoftObjectPath(), FStreamableDelegate::CreateUObject(this, &UGGAsync_SpawnFromSoft::OnLoaded));
}

void UGGAsync_SpawnFromSoft::OnLoaded()
{
	if (!World_.IsValid())
	{
		Failed.Broadcast(nullptr);
		SetReadyToDestroy();
		return;
	}

	UClass* LoadedClass = SoftClass_.Get();
	if (!LoadedClass)
	{
		Failed.Broadcast(nullptr);
		SetReadyToDestroy();
		return;
	}

	FActorSpawnParameters Params;
	Params.SpawnCollisionHandlingOverride = Collision_;
	Params.Owner = Owner_.Get();

	AActor* Spawned = World_->SpawnActor<AActor>(LoadedClass, Transform_, Params);
	if (Spawned)
	{
		Succeeded.Broadcast(Spawned);
	}
	else
	{
		Failed.Broadcast(nullptr);
	}
	SetReadyToDestroy();
}
