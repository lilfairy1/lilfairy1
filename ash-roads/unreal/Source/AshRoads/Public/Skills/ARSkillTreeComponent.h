#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ARSkillTreeComponent.generated.h"

UENUM(BlueprintType)
enum class EARSkill : uint8
{
	Survivor_QuietSteps UMETA(DisplayName="Quiet Steps"),
	Hunter_SharpEyes UMETA(DisplayName="Sharp Eyes"),
	Nomad_RiderInstinct UMETA(DisplayName="Rider's Instinct")
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class ASHROADS_API UARSkillTreeComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable)
	bool IsUnlocked(EARSkill Skill) const { return UnlockedSkills.Contains(Skill); }

	UFUNCTION(BlueprintCallable)
	void Unlock(EARSkill Skill) { UnlockedSkills.Add(Skill); }

private:
	UPROPERTY()
	TSet<EARSkill> UnlockedSkills;
};