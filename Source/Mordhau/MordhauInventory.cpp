// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauInventory.h"



void UnlockLevelUnlocks(const FString & PlayFabId, ECallResult & CallResult)
{
}

void UnlockItems(const FString & PlayFabId, TArray<int> ItemDefIDs, ECallResult & CallResult)
{
}

void UnlockItem(const FString & PlayFabId, int ItemDefID, ECallResult & CallResult)
{
}

void TriggerItemDrop(int ItemDefID, ECallResult & CallResult)
{
}




void SetItemQuantity(const FString & PlayFabId, int ItemDefID, int Quantity, ECallResult & CallResult)
{
}

void ResetInventory(ECallResult & CallResult)
{
}

void RequestUnlockRecipes()
{
}

void RefreshPlayerItems(const FString & PlayFabId, ECallResult & CallResult)
{
}

void RefreshItems(ECallResult & CallResult)
{
}







int GetXPItemDefID()
{
	return 0;
}

int GetXP()
{
	return 0;
}

void GetUnlockRecipe(int ItemDefID, ECallResult & CallResult, FUnlockRecipe * Recipe)
{
}

int GetTutorialPackageItemDefID()
{
	return 0;
}

int GetSupporterPackageItemDefID()
{
	return 0;
}

int GetStackQuantity(const FItemStack & ItemStack)
{
	return 0;
}

int GetStackItemDefID(const FItemStack & ItemStack)
{
	return 0;
}

UMordhauInventoryItem * GetStackItem(const FItemStack & ItemStack)
{
	return nullptr;
}

EItemRarity GetSkinRarity(const FEquipmentSkinEntry & Skin)
{
	return EItemRarity();
}

int GetPlayerXP(const FString & PlayFabId)
{
	return 0;
}

int GetPlayerGold(const FString & PlayFabId)
{
	return 0;
}

void GetItemStacks(const FString & PlayFabId, ECallResult & CallResult, TArray<struct FItemStack>& ItemStacks)
{
}

void GetItemQuantity(const FString & PlayFabId, int ItemDefID, ECallResult & CallResult, int * Quantity)
{
}

UMordhauInventoryItem * GetItem(int ItemDefID)
{
	return nullptr;
}

int GetGoldItemDefID()
{
	return 0;
}

int GetGold()
{
	return 0;
}

void FakeRewardDrop(int Gold, int XP, ECallResult & CallResult)
{
}

void FakeItemDrop(int ItemDefID, int Quantity, ECallResult & CallResult)
{
}






void AddItems(TArray<int> ItemDefIDs, ECallResult & CallResult)
{
}

void AddItem(int ItemDefID, ECallResult & CallResult)
{
}

void UMordhauInventory::UnlockLevelUnlocks(const FString & PlayFabId, ECallResult & CallResult)
{
}

void UMordhauInventory::UnlockItems(const FString & PlayFabId, TArray<int> ItemDefIDs, ECallResult & CallResult)
{
}

void UMordhauInventory::UnlockItem(const FString & PlayFabId, int ItemDefID, ECallResult & CallResult)
{
}

void UMordhauInventory::TriggerItemDrop(int ItemDefID, ECallResult & CallResult)
{
}

bool UMordhauInventory::SetPlayerXP(const FString & PlayFabId, int XP)
{
	return false;
}

bool UMordhauInventory::SetPlayerGold(const FString & PlayFabId, int Gold)
{
	return false;
}

void UMordhauInventory::SetItemQuantity(const FString & PlayFabId, int ItemDefID, int Quantity, ECallResult & CallResult)
{
}

void UMordhauInventory::ResetInventory(ECallResult & CallResult)
{
}

void UMordhauInventory::RequestUnlockRecipes()
{
}

void UMordhauInventory::RefreshPlayerItems(const FString & PlayFabId, ECallResult & CallResult)
{
}

void UMordhauInventory::RefreshItems(ECallResult & CallResult)
{
}

bool UMordhauInventory::IsSkinAvailable(const FString & PlayFabId, const FEquipmentSkinEntry & Skin)
{
	return false;
}

bool UMordhauInventory::IsInventoryAvailable(const FString & PlayFabId)
{
	return false;
}

bool UMordhauInventory::HasSkin(const FString & PlayFabId, const FEquipmentSkinEntry & Skin)
{
	return false;
}

bool UMordhauInventory::HasItem(const FString & PlayFabId, int ItemDefID)
{
	return false;
}

int UMordhauInventory::GetXPItemDefID()
{
	return 0;
}



int UMordhauInventory::GetXP()
{
	return 0;
}

void UMordhauInventory::GetUnlockRecipe(int ItemDefID, ECallResult & CallResult, FUnlockRecipe & Recipe)
{
}

int UMordhauInventory::GetTutorialPackageItemDefID()
{
	return 0;
}

int UMordhauInventory::GetSupporterPackageItemDefID()
{
	return 0;
}

int UMordhauInventory::GetStackQuantity(const FItemStack & ItemStack)
{
	return 0;
}

int UMordhauInventory::GetStackItemDefID(const FItemStack & ItemStack)
{
	return 0;
}

UMordhauInventoryItem * UMordhauInventory::GetStackItem(const FItemStack & ItemStack)
{
	return nullptr;
}

EItemRarity UMordhauInventory::GetSkinRarity(const FEquipmentSkinEntry & Skin)
{
	return EItemRarity();
}

int UMordhauInventory::GetPlayerXP(const FString & PlayFabId)
{
	return 0;
}

int UMordhauInventory::GetPlayerGold(const FString & PlayFabId)
{
	return 0;
}

void UMordhauInventory::GetItemStacks(const FString & PlayFabId, ECallResult & CallResult, TArray<struct FItemStack>& ItemStacks)
{
}

void UMordhauInventory::GetItemQuantity(const FString & PlayFabId, int ItemDefID, ECallResult & CallResult, int & Quantity)
{
}

UMordhauInventoryItem * UMordhauInventory::GetItem(int ItemDefID)
{
	return nullptr;
}

int UMordhauInventory::GetGoldItemDefID()
{
	return 0;
}

int UMordhauInventory::GetGold()
{
	return 0;
}

void UMordhauInventory::FakeRewardDrop(int Gold, int XP, ECallResult & CallResult)
{
}

void UMordhauInventory::FakeItemDrop(int ItemDefID, int Quantity, ECallResult & CallResult)
{
}

bool UMordhauInventory::ClearPlayerItems(const FString & PlayFabId)
{
	return false;
}

bool UMordhauInventory::CanUnlockItems(const FString & PlayFabId, TArray<int> ItemDefIDs)
{
	return false;
}

bool UMordhauInventory::CanUnlockItem(const FString & PlayFabId, int ItemDefID)
{
	return false;
}

bool UMordhauInventory::AreUnlockRecipesAvailable()
{
	return false;
}

void UMordhauInventory::AddItems(TArray<int> ItemDefIDs, ECallResult & CallResult)
{
}

void UMordhauInventory::AddItem(int ItemDefID, ECallResult & CallResult)
{
}
