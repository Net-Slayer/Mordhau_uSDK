// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauInventoryItem.h"
#include "Emblem.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UEmblem : public UMordhauInventoryItem
{
	GENERATED_BODY()
	
public:
	class UTexture2D*                                  Texture;
	
	
};
