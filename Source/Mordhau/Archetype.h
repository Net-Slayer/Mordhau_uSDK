// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Archetype.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UArchetype : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite)
	int                                                CharacterPoints;
	
	
};
