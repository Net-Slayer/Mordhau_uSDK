// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Mordhau.h"
#include "DummyActor.h"
#include "MordhauInventory.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class MORDHAU_API UMordhauInventory : public UObject
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FScriptMulticastDelegate                    OnItemsRefreshed;                                         // 0x01C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FScriptMulticastDelegate                    OnItemsDropped;                                           // 0x01D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FScriptMulticastDelegate                    OnRewardsDropped;                                         // 0x01E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FScriptMulticastDelegate                    OnItemsUnlocked;                                          // 0x01F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

	UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns", Meta = (ExpandEnumAsExecs = "CallResult"))
		void UnlockLevelUnlocks(const FString& PlayFabId, ECallResult& CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns", Meta = (ExpandEnumAsExecs = "CallResult"))
		void UnlockItems(const FString& PlayFabId, TArray<int> ItemDefIDs, ECallResult& CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns", Meta = (ExpandEnumAsExecs = "CallResult"))
		void UnlockItem(const FString& PlayFabId, int ItemDefID, ECallResult& CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns", Meta = (ExpandEnumAsExecs = "CallResult"))
		void TriggerItemDrop(int ItemDefID, ECallResult& CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
		bool SetPlayerXP(const FString& PlayFabId, int XP);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
		bool SetPlayerGold(const FString& PlayFabId, int Gold);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns", Meta = (ExpandEnumAsExecs = "CallResult"))
		void SetItemQuantity(const FString& PlayFabId, int ItemDefID, int Quantity, ECallResult& CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns", Meta = (ExpandEnumAsExecs = "CallResult"))
		void ResetInventory(ECallResult& CallResult);
	UFUNCTION(Category = "MordhauInventoryFns")
		void RequestUnlockRecipes();
	UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns", Meta = (ExpandEnumAsExecs = "CallResult"))
		void RefreshPlayerItems(const FString& PlayFabId, ECallResult& CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns", Meta = (ExpandEnumAsExecs = "CallResult"))
		void RefreshItems(ECallResult& CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
		bool IsSkinAvailable(const FString& PlayFabId, const struct FEquipmentSkinEntry& Skin);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
		bool IsInventoryAvailable(const FString& PlayFabId);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
		bool HasSkin(const FString& PlayFabId, const struct FEquipmentSkinEntry& Skin);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
		bool HasItem(const FString& PlayFabId, int ItemDefID);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauInventoryFns")
		static int GetXPItemDefID();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauInventoryFns")
		int GetXP();
	UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns",  Meta = (ExpandEnumAsExecs = "CallResult"))
		void GetUnlockRecipe(int ItemDefID, ECallResult& CallResult, struct FUnlockRecipe& Recipe);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauInventoryFns")
		static int GetTutorialPackageItemDefID();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauInventoryFns")
		static int GetSupporterPackageItemDefID();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauInventoryFns")
		static int GetStackQuantity(const struct FItemStack& ItemStack);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauInventoryFns")
		static int GetStackItemDefID(const struct FItemStack& ItemStack);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauInventoryFns")
		static class UMordhauInventoryItem* GetStackItem(const struct FItemStack& ItemStack);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
		EItemRarity GetSkinRarity(const struct FEquipmentSkinEntry& Skin);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauInventoryFns")
		int GetPlayerXP(const FString& PlayFabId);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauInventoryFns")
		int GetPlayerGold(const FString& PlayFabId);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns", Meta = (ExpandEnumAsExecs = "CallResult"))
		void GetItemStacks(const FString& PlayFabId, ECallResult& CallResult, TArray<struct FItemStack>& ItemStacks);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns", Meta = (ExpandEnumAsExecs = "CallResult"))
		void GetItemQuantity(const FString& PlayFabId, int ItemDefID, ECallResult& CallResult, int& Quantity);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauInventoryFns")
		static class UMordhauInventoryItem* GetItem(int ItemDefID);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauInventoryFns")
		static int GetGoldItemDefID();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauInventoryFns")
		int GetGold();
	UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns", Meta = (ExpandEnumAsExecs = "CallResult"))
		void FakeRewardDrop(int Gold, int XP, ECallResult& CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns", Meta = (ExpandEnumAsExecs = "CallResult"))
		void FakeItemDrop(int ItemDefID, int Quantity, ECallResult& CallResult);
	UFUNCTION(Category = "MordhauInventoryFns")
		bool ClearPlayerItems(const FString& PlayFabId);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
		bool CanUnlockItems(const FString& PlayFabId, TArray<int> ItemDefIDs);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
		bool CanUnlockItem(const FString& PlayFabId, int ItemDefID);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns")
		bool AreUnlockRecipesAvailable();
	UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns", Meta = (ExpandEnumAsExecs = "CallResult"))
		void AddItems(TArray<int> ItemDefIDs, ECallResult& CallResult);
	UFUNCTION(BlueprintCallable, Category = "MordhauInventoryFns", Meta = (ExpandEnumAsExecs = "CallResult"))
		void AddItem(int ItemDefID, ECallResult& CallResult);
};
