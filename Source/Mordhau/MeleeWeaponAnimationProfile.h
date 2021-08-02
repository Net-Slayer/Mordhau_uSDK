// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "UObject/NoExportTypes.h"
#include "MeleeWeaponAnimationProfile.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UMeleeWeaponAnimationProfile : public UObject
{
	GENERATED_BODY()
	
public:
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnglingSpineSpaceAdditive                  StrikeAngleAdditive;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnglingSpineSpaceAdditive                  StrikeAngleAdditiveWindUp;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnglingSpineSpaceAdditive                  StrikeAngleAdditiveWindUp1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnglingSpineSpaceAdditive                  StrikeRiposteAngleAdditive;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnglingSpineSpaceAdditive                  StrikeRiposteAngleAdditiveWindUp;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnglingSpineSpaceAdditive                  StrikeRiposteAngleAdditiveWindUp1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnglingSpineSpaceAdditive                  StabAngleAdditive;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnglingSpineSpaceAdditive                  StabAngleAdditiveWindUp;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnglingSpineSpaceAdditive                  StabAngleAdditiveWindUp1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnglingSpineSpaceAdditive                  StabRiposteAngleAdditive;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnglingSpineSpaceAdditive                  StabRiposteAngleAdditiveWindUp;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnglingSpineSpaceAdditive                  StabRiposteAngleAdditiveWindUp1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FAnglingSpineSpaceAdditive                  ParryAngleAdditive;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FeintAnimRate1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FeintAnimRate;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FeintAnimRateLeftStrike;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FeintAnimDurationOffset1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MinimumFeintAnimDuration1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FeintAnimDurationOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FeintAnimDurationOffsetLeftStrike;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MinimumFeintAnimDuration;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MinimumFeintAnimDurationLeftStrike;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MinimumFeintAnimDurationStab;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 RightWorldBounceCurve;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 RightWorldBounceScaleCurve;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 LeftWorldBounceCurve;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 LeftWorldBounceScaleCurve;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 RightWorldBounceCurve1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 RightWorldBounceScaleCurve1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 LeftWorldBounceCurve1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 LeftWorldBounceScaleCurve1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 RightParryBounceCurve;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 RightParryBounceScaleCurve;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 LeftParryBounceCurve;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 LeftParryBounceScaleCurve;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 RightParryBounceCurve1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 RightParryLateBounceCurve1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 RightParryBounceScaleCurve1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 LeftParryBounceCurve1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 LeftParryLateBounceCurve1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 LeftParryBounceScaleCurve1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 RightStrikeComboBlendCurve;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 RightStrikeComboWindupCurve;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 RightStrikeComboBlendCurve1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 RightStrikeComboWindupCurve1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 RightStrikeReleaseCurve;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           RightStrikeAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           RightStrike1PAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 RightStrikeRiposteReleaseCurve;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           RightStrikeRiposteAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           RightStrikeAltRiposteAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           RightStrikeClashAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           RightStrikeMorphAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           RightStrikeLeftComboAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           RightStrikeStabComboAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 LeftStrikeComboBlendCurve;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 LeftStrikeComboWindupCurve;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 LeftStrikeComboBlendCurve1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 LeftStrikeComboWindupCurve1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 LeftStrikeReleaseCurve;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           LeftStrikeAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           LeftStrike1PAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 LeftStrikeRiposteReleaseCurve;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           LeftStrikeRiposteAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           LeftStrikeAltRiposteAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           LeftStrikeClashAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           LeftStrikeMorphAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           LeftStrikeRightComboAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           LeftStrikeStabComboAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 RightStabComboBlendCurve;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 RightStabComboWindupCurve;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 RightStabComboBlendCurve1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 RightStabComboWindupCurve1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 StabReleaseCurve;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           StabAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           StabRiposteAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           StabAltRiposteAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           StabClashAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           StabMorphAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           StabAltStabComboAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           StabStrikeComboAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 AltStabComboBlendCurve;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 AltStabComboWindupCurve;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 AltStabComboBlendCurve1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 AltStabComboWindupCurve1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveFloat*                                 AltStabReleaseCurve;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           AltStabAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           AltStabRiposteAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           AltStabAltRiposteAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           AltStabClashAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           AltStabMorphAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           AltStabStabComboAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           AltStabStrikeComboAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                BashAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                ParryAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                AltParryAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             ParryAdditive;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             ParryPushAdditive;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             ParryPushAdditive3P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             AltParryPushAdditive;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             AltParryPushAdditive3P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               RightStabBounce;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               LeftStabBounce;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               RightStabBounce1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               LeftStabBounce1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               RightStrikeBounce;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               LeftStrikeBounce;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               RightStrikeBounce1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               LeftStrikeBounce1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               RightStabChambered;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               LeftStabChambered;

	
	
};
