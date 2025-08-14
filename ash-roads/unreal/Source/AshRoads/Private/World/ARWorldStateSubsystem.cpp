#include "World/ARWorldStateSubsystem.h"

void UARWorldStateSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	State.WeatherIntensity = 0.2f;
	State.DayNightAlpha = 0.0f;
	State.FactionWarLevel = 0;
}

void UARWorldStateSubsystem::Deinitialize()
{
	Super::Deinitialize();
}

void UARWorldStateSubsystem::Tick(float DeltaTime)
{
	TimeAccumulator += DeltaTime;
	const float DayLength = 600.f; // 10 minutes
	float Phase = FMath::Fmod(TimeAccumulator, DayLength) / DayLength;
	State.DayNightAlpha = Phase;
}