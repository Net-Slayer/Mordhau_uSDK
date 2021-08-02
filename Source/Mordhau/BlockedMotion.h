// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauMotion.h"
#include "Mordhau.h"
#include "BlockedMotion.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UBlockedMotion : public UMordhauMotion
{
	GENERATED_BODY()
	
public:



UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Booleans")
	bool                                               bHasQueuedMove;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Booleans")
	bool                                               bHasFadedOutProcedural;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Booleans")
	bool                                               bDoReleaseBounceProcedural;


UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enums")
	EAttackMove                                        QueuedMove;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enums")
	EBlockedReason                                     BlockedReason;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enums")
	EAttackMove                                        FromMove;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enums")
	EMovementRestriction                               MovementRestrictionHit;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enums")
	EMovementRestriction                               MovementRestrictionWorld;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Enums")
	EMovementRestriction                               OriginalMovementRestriction;




UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              ParriedRecoveryTimeOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              ChamberedRecoveryTimeOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              ProceduralHitStopTimeUntilFade;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              ProceduralHitStopBounceDuration;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              ProceduralHitStopFadeOutTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              ProceduralHitStopTimeUntilFade3P;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              ProceduralHitStopBounceDuration3P;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              ProceduralHitStopFadeOutTime3P;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              StabHitStopFadeOutTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              StabHitStopFadeOutTime3P;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              KickHitStopBlendOutTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              KickHitStopAnimRate;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              RiposteParryRecoveryTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              HitStopRecoveryTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              KickHitStopRecoveryTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              HitCancelRecoveryTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              WorldRecoveryTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              ClashedRecoveryTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              KickClashedRecoveryTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              ProceduralWorldTimeUntilFade;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              ProceduralWorldBounceDuration;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              ProceduralWorldFadeOutTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              ClashFadeOutTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              ClashFadeOutTime3P;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              StabWorldFadeOutTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              StabWorldFadeOutTime3P;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              QueueWindow;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              QueueWindowHit;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              QueuedAngle;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              ProceduralWorldTimeUntilFade3P;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              ProceduralWorldBounceDuration3P;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Floats")
	float                                              ProceduralWorldFadeOutTime3P;

UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Anims")
	class UAnimMontage*                                FromAttackMontage;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ClassRefs")
	class UCurveFloat*                                 ReleaseScaleCurve;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ClassRefs")
	class UCurveFloat*                                 ReleaseScaleCurve3P;


UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   ProceduralParryMinMaxRange;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   ProceduralParryTimeUntilFade;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   ProceduralParryBounceDuration;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   ProceduralParryFadeOutTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   ProceduralChamberMinMaxRange;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   ProceduralChamberTimeUntilFade;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   ProceduralChamberBounceDuration;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   ProceduralChamberFadeOutTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   ProceduralParryMinMaxRange3P;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   ProceduralParryTimeUntilFade3P;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   ProceduralParryBounceDuration3P;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   ProceduralParryFadeOutTime3P;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   ProceduralChamberMinMaxRange3P;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   ProceduralChamberTimeUntilFade3P;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   ProceduralChamberBounceDuration3P;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   ProceduralChamberFadeOutTime3P;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   StabParryMinMaxRange;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   StabParryFadeOutTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   StabParryMinMaxRange3P;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   StabParryFadeOutTime3P;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   StabChamberedMinMaxRange;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   StabChamberedFadeOutTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   StabChamberedMinMaxRange3P;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   StabChamberedFadeOutTime3P;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   ParriedRecoveryTimeLimits;
UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Geometric")
	struct FVector2D                                   ChamberedRecoveryTimeLimits;

	
	
};
