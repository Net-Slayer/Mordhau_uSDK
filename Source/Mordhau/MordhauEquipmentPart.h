// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauInventoryItem.h"
#include "MordhauEquipmentPart.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MORDHAU_API UMordhauEquipmentPart : public UMordhauInventoryItem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh*                               SkeletalMesh;         
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh*                               AuxiliarySkeletalMesh;                                 
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              TrailFactor;                                           
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              SecondTrailFactor;                                     
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bHasColor1;                                            
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bHasColor2;                                            
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bHasColor3;
	
	
};
