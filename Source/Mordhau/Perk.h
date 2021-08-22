// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Perk.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UPerk : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText                                       Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                Cost;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText                                       Description;
	
	
};
