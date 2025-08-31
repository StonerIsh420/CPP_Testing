// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Private/Async/GGAsync_Motion.cpp
#include "Async/GGAsync_Motion.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "Kismet/KismetMathLibrary.h"

UGGAsync_SmoothInterpTransform* UGGAsync_SmoothInterpTransform::SmoothInterpolateTransform(
	UObject* WorldContextObject,
	AActor* Actor,
	const FTransform& Target,
	float Duration,
	TEnumAsByte<EEasingFunc::Type> Easing,
	float BlendExp,
	bool bUpdateLocation,
	bool bUpdateRotation,
	bool bUpdateScale,
	bool bSweep,
	ETeleportType TeleportType)
{
	UGGAsync_SmoothInterpTransform* Node = NewObject<UGGAsync_SmoothInterpTransform>();
	Node->World_     = GEngine ? GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull) : nullptr;
	Node->Actor_     = Actor;
	Node->Target_    = Target;
	Node->Duration_  = FMath::Max(Duration, 0.f);
	Node->Easing_    = Easing;
	Node->BlendExp_  = FMath::Max(BlendExp, 0.f);
	Node->bLoc_      = bUpdateLocation;
	Node->bRot_      = bUpdateRotation;
	Node->bScale_    = bUpdateScale;
	Node->bSweep_    = bSweep;
	Node->Teleport_  = TeleportType;
	Node->RegisterWithGameInstance(WorldContextObject);
	return Node;
}

void UGGAsync_SmoothInterpTransform::Activate()
{
	if (!World_.IsValid() || !Actor_.IsValid())
	{
		Finish(true);
		return;
	}

	Start_ = Actor_->GetActorTransform();

	if (Duration_ <= 0.f)
	{
		// Apply immediately
		FTransform Final = Actor_->GetActorTransform();
		if (bLoc_)   { Final.SetLocation(Target_.GetLocation()); }
		if (bRot_)   { Final.SetRotation(Target_.GetRotation()); }
		if (bScale_) { Actor_->SetActorScale3D(Target_.GetScale3D()); }
		Actor_->SetActorTransform(Final, bSweep_, nullptr, Teleport_);
		Finish(false);
		return;
	}

	Elapsed_ = 0.f;

	TickHandle_ = World_->GetTimerManager().SetTimerForNextTick(this, &UGGAsync_SmoothInterpTransform::Tick);
}

void UGGAsync_SmoothInterpTransform::Tick()
{
	if (!World_.IsValid() || !Actor_.IsValid() || bCancelled_)
	{
		Finish(true);
		return;
	}

	Elapsed_ += World_->GetDeltaSeconds();
	const float Alpha = FMath::Clamp(Elapsed_ / FMath::Max(Duration_, KINDA_SMALL_NUMBER), 0.f, 1.f);
	const float Eased = UKismetMathLibrary::Ease(0.f, 1.f, Alpha, (EEasingFunc::Type)Easing_, BlendExp_, 0);

	// Build new transform
	FTransform T = Actor_->GetActorTransform();

	if (bLoc_)
	{
		const FVector L = FMath::Lerp(Start_.GetLocation(), Target_.GetLocation(), Eased);
		T.SetLocation(L);
	}
	if (bRot_)
	{
		const FQuat R = FQuat::Slerp(Start_.GetRotation(), Target_.GetRotation(), Eased);
		T.SetRotation(R);
	}
	if (bScale_)
	{
		const FVector S = FMath::Lerp(Start_.GetScale3D(), Target_.GetScale3D(), Eased);
		Actor_->SetActorScale3D(S);
	}

	Actor_->SetActorTransform(T, bSweep_, nullptr, Teleport_);

	if (Alpha >= 1.f)
	{
		Finish(false);
		return;
	}

	TickHandle_ = World_->GetTimerManager().SetTimerForNextTick(this, &UGGAsync_SmoothInterpTransform::Tick);
}

void UGGAsync_SmoothInterpTransform::Cancel()
{
	bCancelled_ = true;
}

void UGGAsync_SmoothInterpTransform::Finish(bool bWasCancelled)
{
	if (World_.IsValid())
	{
		World_->GetTimerManager().ClearTimer(TickHandle_);
	}

	if (bWasCancelled) { Cancelled.Broadcast(); }
	else               { Completed.Broadcast(); }

	SetReadyToDestroy();
	MarkAsGarbage();
}

UGGAsync_RotateAroundPoint* UGGAsync_RotateAroundPoint::RotateActorAroundPoint(
	UObject* WorldContextObject,
	AActor* Actor,
	const FVector& Center,
	const FVector& Axis,
	float AngularSpeedDegPerSec,
	float Duration,
	bool bSweep,
	ETeleportType TeleportType)
{
	UGGAsync_RotateAroundPoint* Node = NewObject<UGGAsync_RotateAroundPoint>();
	Node->World_    = GEngine ? GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull) : nullptr;
	Node->Actor_    = Actor;
	Node->Center_   = Center;
	Node->Axis_     = Axis.GetSafeNormal(UE_SMALL_NUMBER, FVector::UpVector);
	Node->SpeedDeg_ = AngularSpeedDegPerSec;
	Node->Duration_ = FMath::Max(Duration, 0.f);
	Node->bSweep_   = bSweep;
	Node->Teleport_ = TeleportType;
	Node->RegisterWithGameInstance(WorldContextObject);
	return Node;
}

void UGGAsync_RotateAroundPoint::Activate()
{
	if (!World_.IsValid() || !Actor_.IsValid())
	{
		Finish(true);
		return;
	}

	InitialOffset_ = Actor_->GetActorLocation() - Center_;
	Elapsed_ = 0.f;

	TickHandle_ = World_->GetTimerManager().SetTimerForNextTick(this, &UGGAsync_RotateAroundPoint::Tick);
}

void UGGAsync_RotateAroundPoint::Tick()
{
	if (!World_.IsValid() || !Actor_.IsValid() || bCancelled_)
	{
		Finish(true);
		return;
	}

	const float DeltaSeconds = World_->GetDeltaSeconds();
	Elapsed_ += DeltaSeconds;

	const float DeltaAngleRad = FMath::DegreesToRadians(SpeedDeg_) * DeltaSeconds;
	const FQuat Q = FQuat(Axis_, DeltaAngleRad);

	InitialOffset_ = Q.RotateVector(InitialOffset_);
	const FVector NewLocation = Center_ + InitialOffset_;

	FTransform T = Actor_->GetActorTransform();
	T.SetLocation(NewLocation);
	Actor_->SetActorTransform(T, bSweep_, nullptr, Teleport_);

	if (Elapsed_ >= Duration_)
	{
		Finish(false);
		return;
	}

	TickHandle_ = World_->GetTimerManager().SetTimerForNextTick(this, &UGGAsync_RotateAroundPoint::Tick);
}

void UGGAsync_RotateAroundPoint::Cancel()
{
	bCancelled_ = true;
}

void UGGAsync_RotateAroundPoint::Finish(bool bWasCancelled)
{
	if (World_.IsValid())
	{
		World_->GetTimerManager().ClearTimer(TickHandle_);
	}
	if (bWasCancelled) { Cancelled.Broadcast(); }
	else               { Completed.Broadcast(); }

	SetReadyToDestroy();
	MarkAsGarbage();
}
