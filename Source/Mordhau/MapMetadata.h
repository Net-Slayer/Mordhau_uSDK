// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MapMetaData.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UMapMetaData : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText                                       Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText                                       Description;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FSoftObjectPath                             BaseMap;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<struct FSoftObjectPath>                     GameModeMaps;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UTexture2D*                                  Thumbnail;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class UTexture2D*>                          BackgroundImages;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class UTexture2D*>                          ForegroundImages;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FText>                               Tips;

	
	
};
