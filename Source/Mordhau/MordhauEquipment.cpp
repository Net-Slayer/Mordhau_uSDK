// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauEquipment.h"

#include "MordhauSceneComponent.h"

#include "LODSkeletalMeshComponent.h"

#include "UnrealNetwork.h"

AMordhauEquipment::AMordhauEquipment()
{

	SkeletalMeshComponent = CreateDefaultSubobject<ULODSkeletalMeshComponent>(TEXT("SkeletalMeshComponent"));
	SkeletalMeshComponent->AttachTo(RootComponent);
}

// 
// void AMordhauEquipment::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
// {
// 	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
// }

bool AMordhauEquipment::BelongsToCharacter()
{
	return false;
}


void AMordhauEquipment::AssignCustomization(const FEquipmentCustomization & Customization, uint8 CustomizationEmblem, uint8 CustomizationEmblemColor1, uint8 CustomizationEmblemColor2)
{
}

bool AMordhauEquipment::GetWasSkinSeen(int SkinIdx)
{
	return false;
}

bool AMordhauEquipment::GetWasSeen()
{
	return false;
}

FEquipmentCustomization AMordhauEquipment::GetRandomCustomization(bool bOnlyColors)
{
	return FEquipmentCustomization();
}

AMordhauCharacter * AMordhauEquipment::GetParentCharacter()
{
	return nullptr;
}

uint8 AMordhauEquipment::GetCurrentMaxAmmo()
{
	return uint8();
}

uint8 AMordhauEquipment::GetAmmo()
{
	return uint8();
}

AMordhauProjectile * AMordhauEquipment::FireProjectile_Internal(const FVector & InOrigin, const FRotator & InOrientation, AController * Controller, float ExpectedDelay, bool bIsLocal)
{
	return nullptr;
}



FEquipmentHolsterInfo AMordhauEquipment::FindCurrentHolsterInfo()
{
	return FEquipmentHolsterInfo();
}


void AMordhauEquipment::DestroyPhysicsProxy()
{
}

FBoxSphereBounds AMordhauEquipment::ComputeAccurateBounds()
{
	return FBoxSphereBounds();
}



bool AMordhauEquipment::RestockOtherEquipmentOnCharacter(AMordhauCharacter * Character)
{
	return false;
}

void AMordhauEquipment::ResetMeshRelativeTransform()
{
}


void AMordhauEquipment::RebuildIfAllReplicated()
{
}

void AMordhauEquipment::RebuildEquipment(bool bDoOnlyQuickJob)
{
}




void AMordhauEquipment::OnRep_ReplicatedSkin()
{
}

void AMordhauEquipment::OnRep_ReplicatedPattern()
{
}

void AMordhauEquipment::OnRep_ReplicatedPartsId()
{
}

void AMordhauEquipment::OnRep_ReplicatedEmblemColors()
{
}

void AMordhauEquipment::OnRep_ReplicatedEmblem()
{
}

void AMordhauEquipment::OnRep_ReplicatedColors()
{
}

void AMordhauEquipment::OnRep_IsUsingAlternateMode()
{
}

void AMordhauEquipment::OnRep_IsLoaded()
{
}

void AMordhauEquipment::OnRep_Ammo()
{
}


void AMordhauEquipment::OnPartsChanged()
{
}






void AMordhauEquipment::MarkSkinSeen(int SkinIdx)
{
}

void AMordhauEquipment::MarkSeen()
{
}

void AMordhauEquipment::UpdateMaterial(USkeletalMeshComponent * SkeletalMeshComp)
{
}

void AMordhauEquipment::UpdateInteractionCollision()
{
}



void AMordhauEquipment::SetPartsUseAuxiliaryMesh(bool bNewValue)
{
}

void AMordhauEquipment::SetParts(TArray<uint8> NewPartsId, bool bRebuild)
{
}

void AMordhauEquipment::SetLoaded(bool bNewLoaded)
{
}

void AMordhauEquipment::SetColors(TArray<uint8> NewColors)
{
}

void AMordhauEquipment::SetAmmo(uint8 NewAmmo)
{
}
