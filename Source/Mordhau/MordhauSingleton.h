// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Mordhau.h"
#include "Emblem.h"
#include "MordhauSingleton.generated.h"

/**
*
*/
UCLASS(Blueprintable)
class MORDHAU_API UMordhauSingleton : public UObject
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<struct FSoftObjectPath> CurrentlyProcessingLoadQueueArray; //(ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USkeletalMesh* DefaultCharacterMesh; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int MaxBloodPools; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int SingletonVersion; //(BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<class UClass*> BotProfiles; //(Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FString> RandomBotNames; //(Edit, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 DefaultHead; //(Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 DefaultUpperChest; //(Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 DefaultLegs; //(Edit, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<class UClass*> MaleFaces; //(Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<class UClass*> FemaleFaces; //(Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<TSubclassOf<UEmblem>> Emblems; //(Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<class UClass*> Badges; //(Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<class UClass*> Perks; //(Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<class UClass*> Archetypes; //(Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<class UClass*> Eyebrows; //(Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<struct FMordhauColorItemTable> ColorTables; //(Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FMordhauColorItemTable SkinColorTable; //(Edit, BlueprintVisible)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FMordhauColorItemTable EyeColorTable; //(Edit, BlueprintVisible)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FMordhauColorItemTable HairColorTable; //(Edit, BlueprintVisible)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FMordhauColorItemTable EmblemColorTable; //(Edit, BlueprintVisible)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FMordhauColorItemTable MetalTintsColorTable; //(Edit, BlueprintVisible)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 SelectedBadge; //(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 SelectedLevelDisplayType; //(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<struct FCharacterProfile> CharacterProfiles; //(Edit, BlueprintVisible, ZeroConstructor, Config)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<struct FCharacterProfile> DefaultProfiles; //(Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<struct FEquipmentCustomization> DefaultCharacterEquipment; //(Edit, BlueprintVisible, ZeroConstructor, Config)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<struct FCharacterGearCustomization> DefaultCharacterTier; //(Edit, BlueprintVisible, ZeroConstructor, Config)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FFaceCustomization DefaultCharacterFace; //(Edit, BlueprintVisible, Config)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FAppearanceCustomization DefaultCharacterAppearance; //(Edit, BlueprintVisible, Config)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<struct FCharacterProfile> BotCharacterProfiles; //(BlueprintVisible, ZeroConstructor, Config)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<struct FCharacterProfile> DefaultBotCharacterProfiles; //(Edit, BlueprintVisible, ZeroConstructor)

	UFUNCTION(BlueprintCallable)
		void UpdatePreviousLaunchInventory();
	UFUNCTION(BlueprintCallable)
		class AMordhauEquipment* SpawnEquipment(class UWorld* WorldRef, const struct FEquipmentCustomization& Customization, uint8 Emblem, uint8 EmblemColor1, uint8 EmblemColor2, bool bForceInstantMeshUpdate, bool bForceMipStreaming);
	UFUNCTION(BlueprintCallable)
		void SaveToConfig();
	UFUNCTION(BlueprintCallable)
		void LoadQueueFinishedLoadingChunk();
	UFUNCTION(BlueprintCallable)
		void LoadFromConfig();
	UFUNCTION(BlueprintCallable, BlueprintPure)
		int GetVoicesNum();
	UFUNCTION(BlueprintCallable)
		class UClass* GetVoice(int Index);
	UFUNCTION(BlueprintCallable, BlueprintPure)
		int GetUpperChestWearablesNum();
	UFUNCTION(BlueprintCallable)
		class UClass* GetUpperChestWearable(int Index);
	UFUNCTION(BlueprintCallable)
		class UMordhauColor* GetTableColorObject(uint8 Table, uint8 ID);
	UFUNCTION(BlueprintCallable)
		struct FLinearColor GetTableColor(uint8 Table, uint8 ID);
	UFUNCTION(BlueprintCallable)
		class UMordhauColor* GetSkinColorObject(uint8 ID);
	UFUNCTION(BlueprintCallable)
		struct FLinearColor GetSkinColor(uint8 ID);
	UFUNCTION(BlueprintCallable)
		class UMordhauColor* GetMetalTintsColorObject(uint8 ID);
	UFUNCTION(BlueprintCallable)
		struct FLinearColor GetMetalTintsColor(uint8 ID);
	UFUNCTION(BlueprintCallable, BlueprintPure)
		int GetLegsWearablesNum();
	UFUNCTION(BlueprintCallable)
		class UClass* GetLegsWearable(int Index);
	UFUNCTION(BlueprintCallable, BlueprintPure)
		bool GetIsLoadingAssets();
	UFUNCTION(BlueprintCallable, BlueprintPure)
		int GetHeadWearablesNum();
	UFUNCTION(BlueprintCallable)
		class UClass* GetHeadWearable(int Index);
	UFUNCTION(BlueprintCallable)
		class UMordhauColor* GetHairColorObject(uint8 ID);
	UFUNCTION(BlueprintCallable)
		struct FLinearColor GetHairColor(uint8 ID);
	UFUNCTION(BlueprintCallable)
		class UMordhauColor* GetEyeColorObject(uint8 ID);
	UFUNCTION(BlueprintCallable)
		struct FLinearColor GetEyeColor(uint8 ID);
	UFUNCTION(BlueprintCallable, BlueprintPure)
		int GetEquipmentNum();
	UFUNCTION(BlueprintCallable)
		uint8 GetEquipmentID(class UClass* EquipmentType);
	UFUNCTION(BlueprintCallable)
		class UClass* GetEquipment(int Index);
	UFUNCTION(BlueprintCallable)
		class UMordhauColor* GetEmblemColorObject(uint8 ID);
	UFUNCTION(BlueprintCallable)
		struct FLinearColor GetEmblemColor(uint8 ID);
	UFUNCTION(BlueprintCallable)
		void ApplyProfileTo(const struct FCharacterProfile& Profile, class AMordhauCharacter* Char, uint8 Team, bool bAddEquipment);
};
