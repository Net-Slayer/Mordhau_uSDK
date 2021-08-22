// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauActor.h"
#include "SkeletalMeshMordhauActor.generated.h"

/**
 *
 */
UCLASS()
class MORDHAU_API ASkeletalMeshMordhauActor : public AMordhauActor
{
	GENERATED_BODY()

public:

	ASkeletalMeshMordhauActor();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
		USkeletalMeshComponent* SkeletalMeshComponent;


};
