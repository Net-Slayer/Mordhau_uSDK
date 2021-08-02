// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AdvancedCharacterMovement.h"
#include "OneDimensionalMovementComponent.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UOneDimensionalMovementComponent : public UAdvancedCharacterMovement
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              StepSize;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                TotalSteps;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasInitializedLine;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                CurrentStep;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     LineStart;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     LineEnd;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     MovementDirection;
	

	UFUNCTION(BlueprintCallable, Category = "1DMovementCompFns")
	void SetMovementLine(const struct FVector& NewLineStart, const struct FVector& NewLineEnd);
	
};
