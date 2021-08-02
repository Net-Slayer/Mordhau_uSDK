// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauInventoryItem.h"
#include "ItemPattern.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UItemPattern : public UMordhauInventoryItem
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D*                                  Texture;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasColor1;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasColor2;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasColor3;
	
	
};
