// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "SeparatedBodyPartAnimInstance.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API USeparatedBodyPartAnimInstance : public UAnimInstance
{
	GENERATED_BODY()
	
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
bool                                               bIsLeftForeArmDismembered;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
bool                                               bIsRightForeArmDismembered;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
bool                                               bIsLeftLegDismembered;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
bool                                               bIsRightLegDismembered;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
bool                                               bIsLeftFootDismembered;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
bool                                               bIsRightFootDismembered;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
bool                                               bIsLeftHandDismembered;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
bool                                               bIsRightHandDismembered;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
bool                                               bRootIsHead;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
bool                                               bRootIsLeftArm;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
bool                                               bRootIsLeftForeArm;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
bool                                               bRootIsLeftHand;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
bool                                               bRootIsRightArm;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
bool                                               bRootIsRightForeArm;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
bool                                               bRootIsRightHand;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
bool                                               bRootIsLeftUpLeg;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
bool                                               bRootIsLeftLeg;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
bool                                               bRootIsLeftFoot;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
bool                                               bRootIsRightUpLeg;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
bool                                               bRootIsRightLeg;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
bool                                               bRootIsRightFoot;
	
};
