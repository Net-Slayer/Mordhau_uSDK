// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ParticleSystemActor.generated.h"

UCLASS()
class MORDHAU_API AParticleSystemActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UParticleSystem*                             Template;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UParticleSystemComponent*                    ParticleSystemComponent;
	UFUNCTION(BlueprintCallable, Category = "ParticleSysFn")
	void SparseTick();

};
