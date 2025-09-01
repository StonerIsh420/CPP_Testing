// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Public/Subsystems/GGNotificationSubsystem.h
#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GGNotificationSubsystem.generated.h"

USTRUCT(BlueprintType)
struct FGGNotification
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Notification")
	TSoftObjectPtr<UTexture2D> Icon;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Notification")
	FText Title;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Notification")
	FText Text;
};

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGGOnNotification, const FGGNotification&, Notification);

UCLASS()
class GAMEGENIEBFLRUNTIME_API UGGNotificationSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintAssignable, Category="Game Genie BFL|Data & Gameplay|Notifications")
	FGGOnNotification OnNotification;

	UFUNCTION(BlueprintCallable, Category="Game Genie BFL|Data & Gameplay|Notifications")
	void PostGlobalNotification(const FGGNotification& Notification) { OnNotification.Broadcast(Notification); }
};
