// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Mordhau.h"
#include "MordhauInventoryItem.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UMordhauInventoryItem : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauInventoryItem")
	class UTexture2D*                                  ItemIcon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauInventoryItem")
	int                                                ItemDefID;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauInventoryItem")
	FText                                       ItemName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauInventoryItem")
	EItemRarity                                        ItemRarity;
	
	
};
