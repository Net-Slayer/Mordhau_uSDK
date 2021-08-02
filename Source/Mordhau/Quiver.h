// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Quiver.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UQuiver : public UObject
{
	GENERATED_BODY()
	
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName                                       AttachSocketName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FTransform                                  AttachSocketTransform;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class UStaticMesh*>                         QuiverMeshes;
	
	UFUNCTION(BlueprintCallable, Category = "QuiverFn")
	class UStaticMesh* FindAppropriateQuiverMesh(uint8 Ammo, uint8 MaxAmmo);

};
