// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauEquipmentPart.h"
#include "UnrealNetwork.h"	


void UMordhauEquipmentPart::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(UMordhauEquipmentPart, SkeletalMesh)
		DOREPLIFETIME(UMordhauEquipmentPart, AuxiliarySkeletalMesh)
		DOREPLIFETIME(UMordhauEquipmentPart, TrailFactor)
		DOREPLIFETIME(UMordhauEquipmentPart, SecondTrailFactor)
		DOREPLIFETIME(UMordhauEquipmentPart, bHasColor1)
		DOREPLIFETIME(UMordhauEquipmentPart, bHasColor2)
		DOREPLIFETIME(UMordhauEquipmentPart, bHasColor3)
}