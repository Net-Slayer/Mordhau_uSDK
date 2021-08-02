// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Mordhau.h"
#include "CharacterProfileBPWrapper.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UCharacterProfileBPWrapper : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FCharacterProfile                           Profile;
	
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void TogglePerk(uint8 Perk);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetWearablePattern(uint8 Slot, uint8 NewPattern);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetWearableId(uint8 Slot, uint8 NewId);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetWearableColor(uint8 Slot, uint8 ColorIdx, uint8 NewColor);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetVoicePitch(uint8 NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetVoice(uint8 NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetStrong(uint8 NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetSkinny(uint8 NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetSkinColor(uint8 NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetProfileName(const  FText& NewName);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetMetalTint(uint8 NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetMetalRoughnessScale(uint8 NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetIsFemale(bool bNewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetHairColor(uint8 NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetHair(uint8 NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetFat(uint8 NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetFacialHair(uint8 NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetFace(uint8 NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetEyeColor(uint8 NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetEyebrows(uint8 NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetEquipmentSkin(uint8 Slot, uint8 NewSkin);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetEquipmentPattern(uint8 Slot, uint8 NewPattern);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetEquipmentPartId(uint8 Slot, uint8 PartIdx, uint8 NewPartId);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetEquipmentId(uint8 Slot, uint8 NewId);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetEquipmentCustomizationDirect(uint8 Slot, const struct FEquipmentCustomization& NewCustomization);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetEquipmentColor(uint8 Slot, uint8 ColorIdx, uint8 NewColor);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetEmblemColor(uint8 ColorIdx, uint8 NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetEmblem(uint8 NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void SetAge(uint8 NewValue);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void RemoveAllEquipment();
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
	bool HasPerk(uint8 Perk);
	UFUNCTION(BlueprintCallable, Category = "CharacterProfBPWrapFns")
void ForceValidate();
};
