// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauInventoryItem.h"
#include "CharacterHair.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UCharacterHair : public UMordhauInventoryItem
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USkeletalMesh*                               Mesh;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UTexture2D*                                  Albedo;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UTexture2D*                                  Normal;
	
	
	
};
