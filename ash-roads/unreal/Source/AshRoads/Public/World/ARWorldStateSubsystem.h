#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "ARWorldStateSubsystem.generated.h"

USTRUCT()
struct FDynamicWorldState
{
	GENERATED_BODY()
	float WeatherIntensity = 0.f;
	float DayNightAlpha = 0.f; // 0 day, 1 night
	int32 FactionWarLevel = 0;
};

UCLASS()
class ASHROADS_API UARWorldStateSubsystem : public UWorldSubsystem
{
	GENERATED_BODY()
public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;
	virtual void Tick(float DeltaTime);
	bool IsTickable() const { return true; }

	const FDynamicWorldState& GetState() const { return State; }
	void SetWeatherIntensity(float Value) { State.WeatherIntensity = FMath::Clamp(Value, 0.f, 1.f); }
	void SetDayNightAlpha(float Value) { State.DayNightAlpha = FMath::Clamp(Value, 0.f, 1.f); }
	void SetFactionWarLevel(int32 Level) { State.FactionWarLevel = Level; }

private:
	FDynamicWorldState State;
	float TimeAccumulator = 0.f;
};