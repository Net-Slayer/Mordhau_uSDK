// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauInventoryItem.h"
#include "Badge.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UBadge : public UMordhauInventoryItem
{
	GENERATED_BODY()
	
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D*                                  Texture;
	
};
