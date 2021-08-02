// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauMotion.h"
#include "ClimbingMotion.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UClimbingMotion : public UMordhauMotion
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Audio")
	class USoundCue*                                   ClimbSound;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              ClimbRecoveryDuration;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              AuthorityMoveUpStartTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              AuthorityMoveLateralStartTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              AuthorityMoveLateralDuration;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              SlowClimbRecoveryDuration;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              SlowAuthorityMoveUpStartTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              SlowAuthorityMoveLateralStartTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              SlowAuthorityMoveLateralDuration;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   TurnCaps;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Booleans")
	bool                                               bIsSlowClimb;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector                                     ClimbOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector                                     LedgeOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector                                     LedgeNormal;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector                                     ClimbStartMeshLocation;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector                                     AuthMoveStartLocation;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Booleans")
	bool                                               bIsAuthMovingUp;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Booleans")
	bool                                               bIsAuthMovingLaterally;

	
	
};
