#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "ARPlayerController.generated.h"

UCLASS()
class ASHROADS_API AARPlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	AARPlayerController();
protected:
	virtual void BeginPlay() override;
};