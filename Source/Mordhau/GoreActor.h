// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GoreActor.generated.h"

UCLASS()
class MORDHAU_API AGoreActor : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMeshComponent*                        StaticMeshComponent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UParticleSystemComponent*                    ParticleSystemComponent;
};
