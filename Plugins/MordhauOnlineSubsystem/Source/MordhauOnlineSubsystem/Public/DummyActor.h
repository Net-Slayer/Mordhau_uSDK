// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DummyActor.generated.h"


USTRUCT(BlueprintType)
struct FSteamID
{
	GENERATED_USTRUCT_BODY()

public:

};

UCLASS()
class MORDHAUONLINESUBSYSTEM_API ADummyActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ADummyActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
