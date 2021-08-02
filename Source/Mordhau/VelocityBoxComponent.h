// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "Mordhau.h"
#include "VelocityBoxComponent.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MORDHAU_API UVelocityBoxComponent : public UBoxComponent
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bOnlyRunOnAuthority;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              TriggerVelocity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bUseVelocityAxis;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     VelocityAxis;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bVelocityAxisAccountForPawnVelocity;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate                    OnTriggered;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     PreviousLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              CurrentVelocity;
	
	
};
