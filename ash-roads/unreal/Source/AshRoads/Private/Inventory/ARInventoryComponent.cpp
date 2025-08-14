#include "Inventory/ARInventoryComponent.h"

UARInventoryComponent::UARInventoryComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UARInventoryComponent::AddItem(const FName ItemId, int32 Quantity)
{
	if (ItemId.IsNone() || Quantity <= 0) return;
	int32& Current = ItemIdToQuantity.FindOrAdd(ItemId);
	Current += Quantity;
}

bool UARInventoryComponent::RemoveItem(const FName ItemId, int32 Quantity)
{
	if (ItemId.IsNone() || Quantity <= 0) return false;
	if (int32* Found = ItemIdToQuantity.Find(ItemId))
	{
		if (*Found >= Quantity)
		{
			*Found -= Quantity;
			if (*Found == 0) { ItemIdToQuantity.Remove(ItemId); }
			return true;
		}
	}
	return false;
}

int32 UARInventoryComponent::GetQuantity(const FName ItemId) const
{
	if (const int32* Found = ItemIdToQuantity.Find(ItemId))
	{
		return *Found;
	}
	return 0;
}