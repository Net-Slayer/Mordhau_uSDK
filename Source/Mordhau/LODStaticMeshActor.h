// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "LODStaticMeshActor.generated.h"

UCLASS()
class MORDHAU_API ALODStaticMeshActor : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class ULODStaticMeshComponent*                     StaticMeshComponent;
	
};
