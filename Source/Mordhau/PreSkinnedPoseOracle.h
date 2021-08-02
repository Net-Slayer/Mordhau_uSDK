// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PreSkinnedPoseOracle.generated.h"

UCLASS()
class MORDHAU_API APreSkinnedPoseOracle : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TMap<class USkeleton*, class USkeletalMeshComponent*> SkeletonToMeshComp;
	
};
