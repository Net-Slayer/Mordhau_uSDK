// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauInventoryItem.h"
#include "CharacterFace.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UCharacterFace : public UMordhauInventoryItem
{
	GENERATED_BODY()
	
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class USkeletalMesh*                               Mesh;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)

		class UTexture2D*                                  Normal;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UTexture2D*                                  AgedNormal;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UTexture2D*                                  PBRMap;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UTexture2D*                                  Albedo;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector                                     EyebrowOffset;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector                                     EyebrowScale;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector                                     EyebrowDistance;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              EyebrowRotation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector                                     BloodOffsetA;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector                                     BloodOffsetB;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector                                     BloodMaskSizeFine;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector                                     BloodMaskSizeSoft;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector                                     BloodTextureSize;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<class UClass*>                              Hair;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UClass*>                              FacialHair;

	
};
