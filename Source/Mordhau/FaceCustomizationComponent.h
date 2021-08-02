// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Mordhau.h"
#include "Components/ActorComponent.h"
#include "FaceCustomizationComponent.generated.h"


/**
 *
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MORDHAU_API UFaceCustomizationComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, int>                            BoneToParentGroupIdx;                                     // 0x00F8(0x0050) (ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int, int>                                     BoneIdxToSculptableFaceBoneIdx;                           // 0x0148(0x0050) (ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<int, int>                                     SelectionBoneIdxToSculptableFaceBoneIdx;                  // 0x0198(0x0050) (ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TMap<FName, int>                            BoneNameToSculptableFaceBoneIdx;                          // 0x01E8(0x0050) (ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int>                                        BakedDefaultFaceValuesTranslate;                          // 0x0238(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int>                                        BakedDefaultFaceValuesRotate;                             // 0x0248(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<int>                                        BakedDefaultFaceValuesScale;                              // 0x0258(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              HideEarsAmount;                                           // 0x0268(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              HideNoseAmount;                                           // 0x026C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bRegenerateBakedDefaultFaceValues;                        // 0x0270(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasScaryFace;                                            // 0x0271(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   ScaryFaceRotationLimit;                                   // 0x0274(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   ScaryFaceTranslationLimit;                                // 0x027C(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   ScaryFaceScaleLimit;                                      // 0x0284(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)

	UFUNCTION(BlueprintCallable, Category = "FaceCustomizationComponentFns")
	void OnCharacterBuilt(class AMordhauCharacter* Character);

};
