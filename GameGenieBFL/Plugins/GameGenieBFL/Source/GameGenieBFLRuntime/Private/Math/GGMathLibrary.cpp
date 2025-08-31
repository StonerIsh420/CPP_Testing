// Plugins/GameGenieBFL/Source/GameGenieBFLRuntime/Private/Math/GGMathLibrary.cpp
#include "Math/GGMathLibrary.h"
#include "Engine/World.h"
#include "NavigationSystem.h"
#include "Kismet/KismetMathLibrary.h"
#include "Math/RotationMatrix.h"

void UGGMathLibrary::LookAtWithDampening(AActor* Actor, const FVector& TargetLocation, float InterpSpeed, float DeltaTime, bool bYawOnly)
{
	if (!Actor) { return; }

	const FVector From = Actor->GetActorLocation();
	FVector Dir = (TargetLocation - From);
	if (Dir.IsNearlyZero()) { return; }

	FRotator Desired = Dir.Rotation();
	FRotator Current = Actor->GetActorRotation();

	if (bYawOnly)
	{
		Desired.Pitch = Current.Pitch;
		Desired.Roll  = Current.Roll;
	}

	const FRotator NewRot = FMath::RInterpTo(Current, Desired, FMath::Max(DeltaTime, 0.f), FMath::Max(InterpSpeed, 0.f));
	Actor->SetActorRotation(NewRot);
}

void UGGMathLibrary::CalculateArcTrajectoryPoints(const FVector& Start, const FVector& End, float ApexHeight, int32 NumPoints, TArray<FVector>& OutPoints)
{
	OutPoints.Reset();
	if (NumPoints < 2) { NumPoints = 2; }

	const float HigherZ  = FMath::Max(Start.Z, End.Z);
	const float ApexZ    = HigherZ + FMath::Max(ApexHeight, 0.f);

	const float Z0 = Start.Z;
	const float Z1 = End.Z;
	const float Za = ApexZ;

	const float c = Z0;
	const float a = 4.f * (Z1 - 2.f*Za + Z0);
	const float b = Z1 - a - c;

	OutPoints.Reserve(NumPoints);
	for (int32 i = 0; i < NumPoints; ++i)
	{
		const float t = (NumPoints == 1) ? 1.f : (float)i / (float)(NumPoints - 1);
		FVector P = FMath::Lerp(Start, End, t);
		P.Z = a * t * t + b * t + c;
		OutPoints.Add(P);
	}
}

bool UGGMathLibrary::TeleportWithGroundSnap(UObject* WorldContextObject, AActor* Actor, const FVector& NewLocation, float DownTraceDistance, ECollisionChannel TraceChannel, bool bSweep, ETeleportType TeleportType, FVector& OutFinalLocation, FHitResult& OutHit)
{
	OutHit = FHitResult{};
	OutFinalLocation = NewLocation;

	if (!Actor) { return false; }

	UWorld* World = GEngine ? GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull) : nullptr;
	if (!World) { return false; }

	// First teleport/sweep to the requested spot (keeps rotation/scale)
	const FTransform Current = Actor->GetActorTransform();
	FTransform Placed = Current;
	Placed.SetLocation(NewLocation);

	if (bSweep)
	{
		Actor->SetActorTransform(Placed, /*bSweep=*/true, /*OutHitResult=*/&OutHit, TeleportType);
	}
	else
	{
		Actor->SetActorTransform(Placed, /*bSweep=*/false, /*OutHitResult=*/nullptr, TeleportType);
	}

	// Now snap downward
	const FVector Start = Actor->GetActorLocation() + FVector(0, 0, 10.f);
	const FVector End   = Start - FVector(0, 0, FMath::Max(DownTraceDistance, 0.f));

	FCollisionQueryParams Params(SCENE_QUERY_STAT(TeleportWithGroundSnap), false, Actor);
	FHitResult Hit;
	const bool bHit = World->LineTraceSingleByChannel(Hit, Start, End, TraceChannel, Params);

	if (bHit)
	{
		OutHit = Hit;
		OutFinalLocation = Hit.ImpactPoint;
		FTransform Snapped = Actor->GetActorTransform();
		Snapped.SetLocation(OutFinalLocation);
		Actor->SetActorTransform(Snapped, false, nullptr, TeleportType);
	}
	else
	{
		OutFinalLocation = Actor->GetActorLocation();
	}

	return bHit;
}

bool UGGMathLibrary::GetRandomPointInNavMeshRadius(UObject* WorldContextObject, const FVector& Origin, float Radius, FVector& OutLocation)
{
	OutLocation = Origin;

	UWorld* World = GEngine ? GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull) : nullptr;
	if (!World) { return false; }

	UNavigationSystemV1* NavSys = FNavigationSystem::GetCurrent<UNavigationSystemV1>(World);
	if (!NavSys) { return false; }

	FNavLocation Result;
	const bool bOk = NavSys->GetRandomReachablePointInRadius(Origin, FMath::Max(Radius, 0.f), Result);
	if (bOk)
	{
		OutLocation = Result.Location;
	}
	return bOk;
}

FVector UGGMathLibrary::MaintainDistanceFromTarget(const FVector& OwnerLocation, const FVector& OwnerVelocity, const FVector& TargetLocation, const FVector& TargetVelocity, float DesiredDistance, float Stiffness, float Damping)
{
	const FVector Offset = OwnerLocation - TargetLocation;
	const float CurrentDist = Offset.Length();
	if (CurrentDist <= KINDA_SMALL_NUMBER)
	{
		return FVector::ZeroVector;
	}

	const FVector Dir = Offset / CurrentDist;
	const float Error = CurrentDist - FMath::Max(DesiredDistance, 0.f);

	const float RelVel = FVector::DotProduct(OwnerVelocity - TargetVelocity, Dir);
	const float AccelScalar = (-Stiffness * Error) - (Damping * RelVel);
	return AccelScalar * Dir;
}

FVector UGGMathLibrary::GetClosestPointOnSpline(USplineComponent* Spline, const FVector& WorldLocation, float& OutDistanceAlongSpline, float& OutInputKey)
{
	OutDistanceAlongSpline = 0.f;
	OutInputKey = 0.f;

	if (!Spline)
	{
		return WorldLocation;
	}

	const float InputKey = Spline->FindInputKeyClosestToWorldLocation(WorldLocation);
	const float Distance = Spline->GetDistanceAlongSplineAtSplineInputKey(InputKey);
	const FVector Point = Spline->GetLocationAtSplineInputKey(InputKey, ESplineCoordinateSpace::World);

	OutInputKey = InputKey;
	OutDistanceAlongSpline = Distance;
	return Point;
}

static FORCEINLINE float GG_SafeSmoothTime(float T)
{
	return FMath::Max(T, 0.0001f);
}

void UGGMathLibrary::SpringDampedFloat(float Current, float Target, float& VelocityInOut, float DeltaTime, float SmoothTime, float& OutValue)
{
	const float ST = GG_SafeSmoothTime(SmoothTime);
	const float Omega = 2.0f / ST;

	const float X = Omega * DeltaTime;
	const float Exp = 1.0f / (1.0f + X + 0.48f*X*X + 0.235f*X*X*X);

	const float Change = Current - Target;
	const float Temp = (VelocityInOut + Omega * Change) * DeltaTime;
	VelocityInOut = (VelocityInOut - Omega * Temp) * Exp;

	OutValue = Target + (Change + Temp) * Exp;
}

void UGGMathLibrary::SpringDampedVector(const FVector& Current, const FVector& Target, FVector& VelocityInOut, float DeltaTime, float SmoothTime, FVector& OutValue)
{
	float vx = VelocityInOut.X, vy = VelocityInOut.Y, vz = VelocityInOut.Z;
	float outX, outY, outZ;

	SpringDampedFloat(Current.X, Target.X, vx, DeltaTime, SmoothTime, outX);
	SpringDampedFloat(Current.Y, Target.Y, vy, DeltaTime, SmoothTime, outY);
	SpringDampedFloat(Current.Z, Target.Z, vz, DeltaTime, SmoothTime, outZ);

	VelocityInOut = FVector(vx, vy, vz);
	OutValue = FVector(outX, outY, outZ);
}

FVector UGGMathLibrary::VectorInputToWorldAcceleration(const FVector2D& Input, const FRotator& CameraRotation, float AccelMagnitude, bool bIgnorePitch)
{
	FVector2D Clamped = Input.GetSafeNormal();
	const float Mag = FMath::Max(AccelMagnitude, 0.f);

	FRotator YawOnly = CameraRotation;
	if (bIgnorePitch)
	{
		YawOnly.Pitch = 0.f;
		YawOnly.Roll = 0.f;
	}

	const FRotationMatrix Rot(YawOnly);
	const FVector Forward = Rot.GetUnitAxis(EAxis::X);
	const FVector Right   = Rot.GetUnitAxis(EAxis::Y);

	return (Forward * Clamped.X + Right * Clamped.Y) * Mag;
}

FVector UGGMathLibrary::CalculateDeflectionVector(const FVector& IncomingDir, const FVector& SurfaceNormal, float Restitution)
{
	if (SurfaceNormal.IsNearlyZero())
	{
		return IncomingDir;
	}

	const float Speed = IncomingDir.Size();
	const FVector N = SurfaceNormal.GetSafeNormal();

	const FVector Reflected = IncomingDir - 2.f * FVector::DotProduct(IncomingDir, N) * N;
	return Reflected.GetSafeNormal() * Speed * FMath::Max(Restitution, 0.f);
}

float UGGMathLibrary::GetPercentageAlongSpline(USplineComponent* Spline, const FVector& WorldLocation)
{
	if (!Spline)
	{
		return 0.f;
	}
	const float InputKey = Spline->FindInputKeyClosestToWorldLocation(WorldLocation);
	const float Distance = Spline->GetDistanceAlongSplineAtSplineInputKey(InputKey);
	const float Length = FMath::Max(Spline->GetSplineLength(), KINDA_SMALL_NUMBER);
	return FMath::Clamp(Distance / Length, 0.f, 1.f);
}

FVector UGGMathLibrary::GetMirroredLocation(const FVector& Point, const FVector& PlaneOrigin, const FVector& PlaneNormal)
{
	const FVector N = PlaneNormal.GetSafeNormal();
	const FVector ToPoint = Point - PlaneOrigin;
	const float Dist = FVector::DotProduct(ToPoint, N);
	return Point - 2.f * Dist * N;
}

FVector UGGMathLibrary::GetHelixPoint(const FVector& Center, const FVector& Axis, float Radius, float PitchPerTurn, float AngleDegrees)
{
	const FVector N = Axis.GetSafeNormal(UE_SMALL_NUMBER, FVector::UpVector);

	// Build a basis where N is Z.
	const FMatrix Basis = FRotationMatrix::MakeFromZ(N);
	const FVector XAxis = Basis.GetUnitAxis(EAxis::X);
	const FVector YAxis = Basis.GetUnitAxis(EAxis::Y);

	const float ThetaRad = FMath::DegreesToRadians(AngleDegrees);
	const float PitchPerRad = PitchPerTurn / (2.f * PI);

	const float x = Radius * FMath::Cos(ThetaRad);
	const float y = Radius * FMath::Sin(ThetaRad);
	const float z = PitchPerRad * ThetaRad;

	return Center + XAxis * x + YAxis * y + N * z;
}
