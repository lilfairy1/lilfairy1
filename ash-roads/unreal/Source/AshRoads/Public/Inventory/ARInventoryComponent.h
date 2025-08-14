#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ARInventoryComponent.generated.h"

USTRUCT(BlueprintType)
struct FARInventoryItem
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName ItemId = NAME_None;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int32 Quantity = 1;
};

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class ASHROADS_API UARInventoryComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UARInventoryComponent();

	UFUNCTION(BlueprintCallable)
	void AddItem(const FName ItemId, int32 Quantity = 1);

	UFUNCTION(BlueprintCallable)
	bool RemoveItem(const FName ItemId, int32 Quantity = 1);

	UFUNCTION(BlueprintCallable)
	int32 GetQuantity(const FName ItemId) const;

private:
	UPROPERTY()
	TMap<FName, int32> ItemIdToQuantity;
};