// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameModeMetadata.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UGameModeMetadata : public UObject
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString                                     Prefix;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText                                       Name;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FText                                       Description;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UTexture2D*                                  Thumbnail;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray< FText>                               Tips;
	
	UFUNCTION(BlueprintCallable, Category = "GameModeMetaDataStaticFn")
	static class UGameModeMetadata* GetDefaultObject(class UClass* MetadataClass);
	
};
