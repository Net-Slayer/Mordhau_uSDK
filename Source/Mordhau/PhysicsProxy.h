// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "PhysicsProxy.generated.h"

UCLASS()
class MORDHAU_API APhysicsProxy : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AActor*                       Original;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FTransform                                  Offset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USkeletalMeshComponent*                      SkeletalMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              IdleTime;
};
