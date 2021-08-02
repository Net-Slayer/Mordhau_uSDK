// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauSingleton.h"

UPROPERTY(EditAnywhere)
struct FLinearColor ReturnValue2;
void UMordhauSingleton::UpdatePreviousLaunchInventory()
{
}
class AMordhauEquipment* UMordhauSingleton::SpawnEquipment(class UWorld* WorldRef, const struct FEquipmentCustomization& Customization, uint8 Emblem, uint8 EmblemColor1, uint8 EmblemColor2, bool bForceInstantMeshUpdate, bool bForceMipStreaming)
{
	return nullptr;
}
void UMordhauSingleton::SaveToConfig()
{}
void UMordhauSingleton::LoadQueueFinishedLoadingChunk()
{}
void UMordhauSingleton::LoadFromConfig()
{}
int UMordhauSingleton::GetVoicesNum()
{
	return 1;
}
class UClass* UMordhauSingleton::GetVoice(int Index)
{
return nullptr;
}
int UMordhauSingleton::GetUpperChestWearablesNum()
{
	return 1;
}
class UClass* UMordhauSingleton::GetUpperChestWearable(int Index)
{
return nullptr;
}
class UMordhauColor* UMordhauSingleton::GetTableColorObject(uint8 Table, uint8 ID)
{
return nullptr;
}
struct FLinearColor UMordhauSingleton::GetTableColor(uint8 Table, uint8 ID)
{
	return ReturnValue2;
}
class UMordhauColor* UMordhauSingleton::GetSkinColorObject(uint8 ID)
{
return nullptr;
}
struct FLinearColor UMordhauSingleton::GetSkinColor(uint8 ID)
{
	return ReturnValue2;
}
class UMordhauColor* UMordhauSingleton::GetMetalTintsColorObject(uint8 ID)
{
return nullptr;
}
struct FLinearColor UMordhauSingleton::GetMetalTintsColor(uint8 ID)
{
	return ReturnValue2;
}
int UMordhauSingleton::GetLegsWearablesNum()
{
	return 1;
}
class UClass* UMordhauSingleton::GetLegsWearable(int Index)
{
return nullptr;
}
bool UMordhauSingleton::GetIsLoadingAssets()
{
	return 1;
}
int UMordhauSingleton::GetHeadWearablesNum()
{
return 1;
}
class UClass* UMordhauSingleton::GetHeadWearable(int Index)
{
	return nullptr;
}
class UMordhauColor* UMordhauSingleton::GetHairColorObject(uint8 ID)
{
return nullptr;
}
struct FLinearColor UMordhauSingleton::GetHairColor(uint8 ID)
{
	return ReturnValue2;
}
class UMordhauColor* UMordhauSingleton::GetEyeColorObject(uint8 ID)
{
return nullptr;
}
struct FLinearColor UMordhauSingleton::GetEyeColor(uint8 ID)
{
	return ReturnValue2;
}
int UMordhauSingleton::GetEquipmentNum()
{
return 1;
}
uint8 UMordhauSingleton::GetEquipmentID(class UClass* EquipmentType)
{
return 1;
}
class UClass* UMordhauSingleton::GetEquipment(int Index)
{
	return nullptr;
}
class UMordhauColor* UMordhauSingleton::GetEmblemColorObject(uint8 ID)
{
return nullptr;
}
struct FLinearColor UMordhauSingleton::GetEmblemColor(uint8 ID)
{
	return ReturnValue2;
}
void UMordhauSingleton::ApplyProfileTo(const struct FCharacterProfile& Profile, class AMordhauCharacter* Char, uint8 Team, bool bAddEquipment)
{}