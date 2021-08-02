// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CreatureAnimInstance.h"
#include "Mordhau.h"
#include "Runtime/Engine/Classes/Kismet/KismetMathLibrary.h"
#include "MordhauAnimInstance.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FFacialBoneSetup
{
	GENERATED_BODY()
public:
		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName                                       BoneName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName                                       SelectionBoneOverride;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsSymmetrical;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SelectionBiasFactor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FName>                               ChildBones;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                Level;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                SymmetryTwinBoneIndex;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName                                       SymmetryTwinBoneName;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                BoneIndex;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   TranslateXRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   TranslateYRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   TranslateZRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   ScaleXRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   ScaleYRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   ScaleZRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   RotateXRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   RotateYRange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   RotateZRange;

};
/*USTRUCT(BlueprintType)
struct FFloatSpringState
{
	GENERATED_BODY()
};*/
USTRUCT(BlueprintType)
struct FAnimNodePackedDismemberment
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<int>                                        DismemberedBonesIndices;
};
USTRUCT(BlueprintType)
struct FAnimNodePackedFaceCustomization
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<struct FFacialBoneSetup>                    FaceCustomizationSetup;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<struct FTransform>                          FaceCustomizationBonesTransforms;
};
UCLASS(Blueprintable)
class MORDHAU_API UMordhauAnimInstance : public UCreatureAnimInstance
{
	GENERATED_BODY()
	
public:
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              InternalScaledTimeSeconds;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FAnimNodePackedFaceCustomization            FaceCustomization;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FAnimNodePackedDismemberment                Dismemberment;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauEquipment>            PreviousRightHandEquipment;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class UParticleSystem*>                     CrouchFootstepParticles;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class UParticleSystem*>                     SprintFootstepParticles;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundCue*                                   FootstepSound;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName                                       MainAnimationType;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bWasRagdollFalling;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              LastRagdollFallingTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Force1PMeshCorrectionWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bShouldPerformInstantAnimSwitch;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsGetUpFront;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              GetUpAnimationDuration;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    GetUpRotation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                      DeathSyncedRandom;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              IsDedicatedServer;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AnimLOD0;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AnimLOD1;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RecentlyRendered;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RecentlyRenderedNonAuth;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AnimLOD0Distance;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AnimLOD1Distance;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              IsFemale;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsClimbingA;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     ClimbOffsetA;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     ClimbOffsetEndOffsetA;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     ClimbLedgeOffsetA;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              IsSlowClimbingA;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    ClimbRotationA;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsClimbingB;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     ClimbOffsetB;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     ClimbOffsetEndOffsetB;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     ClimbLedgeOffsetB;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    ClimbRotationB;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              IsSlowClimbingB;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FastSmoothedIsCrouching;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              UnclampedFastSmoothedIsCrouching;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FFloatSpringState                           CrouchSpringState;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   CrouchSpringLimits;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              CrouchSpringStiffness;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              UncrouchSpringStiffness;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              CrouchSpringDamping;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              CrouchSpringMass;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               VehicleTransitionAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              VehicleTransitionBlendWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     VehicleTransitionComponentLocation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    VehicleTransitionComponentRotation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              IsDrivingFloat;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    LowerBodyRotationOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Direction;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    MovementCorrectionHips;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MovementCorrectionHipsInterpSpeed;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MovementCorrectionAnimRate;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              DirectionWithOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              DirectionOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              DirectionOffsetSlowInterpSpeed;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              DirectionOffsetSlow;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Velocity;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SmoothedVelocity;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              OneToZeroAtWalkSpeed;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AnimRateFactor1PMaxSprint;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MovementSpeedScale;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MovementAnimRate;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SpeedWarping;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ThirdPersonVelocity;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bUseBackBlendSpace;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    StopBounce;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    StopBounceWorld;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              StopBounceLimit;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              BounceInterpSpeed;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     BounceDuck;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              BounceDuckLimit;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SlowVelocityLagTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FastVelocityLagTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              StopTiltFactor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              StopDuckFactor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AngularVelocityInterpSpeed;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AngularVelocity;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AbsoluteAngularVelocityLowerBody;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AngularVelocityLowerBody;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AngularVelocityLowerBodyWindow;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     AnimatedMovementDirectionInCompSpace;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AngularVelocityPitch;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   SpringPitchYawValue;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FFloatSpringState                           PitchSpringState;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FFloatSpringState                           YawSpringState;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   SpringPitchYawStiffness;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   SpringPitchYawDamping;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   SpringPitchYawMass;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              HandSpringWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsFirstPerson;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              IsFirstPersonFloat;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              IsNotFirstPersonFloat;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     FirstPersonZoomOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     CameraCollisionOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FTransform                                  RightWeaponBoneBaseTransform;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     WeaponSlideVector;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     WeaponSlideVectorInverse;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              WeaponSlideCompensationWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     RightShoulderOffset1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     LeftShoulderOffset1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ShoulderOffset1PWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     RightHandIKOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RightHandIKOffsetWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              OffhandIKWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     LeftHandGripPosition;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     RightHandGripPosition;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    RightHandGripRotation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              OffhandIsRightHand;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               JumpAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               FallingAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               LandAnimation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              BouncyMagnitudeOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              BouncySlowVelocityLagTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              BouncyFastVelocityLagTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              BouncyInterpSpeed;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              BouncyFactorBreasts;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              BouncyFactorArms;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              BouncyFactorBelly;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              BouncyFactorLegs;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     BreastsT;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     LowerBackBellyT;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     SpineAdjustT;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     LeftArmAdjustT;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     RightArmAdjustT;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     LeftUpLegAdjustT;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     RightUpLegAdjustT;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Fat;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Skinny;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Strong;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              IsHeadDismembered;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    NeckDismemberedRotation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    LeftShoulderDismemberedRotation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              IsLeftArmDismembered;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    RightShoulderDismemberedRotation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              IsRightArmDismembered;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              TrackingWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    LookingAtRotationNeck;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    LookingAtRotationHead;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    LookingAtRotationEyes;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              HideEars;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              HideNose;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Breath;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              LowerBodyBreathInternal;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              LowerBodyBreathFactor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              LowerBodyBreathFactorTarget;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              CounterCompensateLookWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    CounterCompensateRotation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              LookUpValue;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RightLegBendBlendWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SpineBendBlendWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SpineArmsCompensationFactor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              TurnValue;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              LeftHandIsEmpty;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AtmosphericsWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Arms3PSyncWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              BlockDirection;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              DisarmDirection;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FSpineSpaceAdditive                         SpineSpaceAdditive;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              LeftTorsoBlendWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               LeftStabBounce;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               RightStabBounce;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               LeftStrikeBounce;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               RightStrikeBounce;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               RightStabChambered;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               LeftStabChambered;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             RangedDrawnAdditive;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    SwayRotation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SwayWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             ParryAdditive;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             ParryPushAdditive;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             AltParryPushAdditive;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              LowerBodyBlendSpaceBlendTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             UpperBlendSpaceA;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              UpperBlendSpaceABlendTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               UpperAdditiveA;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             UpperBlendSpaceB;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              UpperBlendSpaceBBlendTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               UpperAdditiveB;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsCurrentUpperA;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               LowerBodyAnimationA;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               LowerBodyAnimationB;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               HorseUpperRearing;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsCurrentLowerA;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsHorseRearing;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Couching;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Rearing;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Lean;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              VehicleAnimTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              VehicleAnimRate;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     VehicleLeftHandTarget;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     VehicleRightHandTarget;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              VehicleTurn;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              VehicleLookUp;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     VehicleLeftFootTarget;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     VehicleRightFootTarget;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    VehicleLeftFootRotation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    VehicleRightFootRotation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              VehicleVelocity;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              VehicleDirection;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     VehicleSeat;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    VehicleActorRotation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    VehicleRotationOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    VehicleSeatRotation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bBallistaReloading;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              HitEffectIKWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              HitEffectLocationSlideSpeed;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              HitEffectDisableSpeed;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     HitEffectIKLocation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     HitEffectIKLocationStart;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    HitEffectRotation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    HitEffectRotationStart;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FlinchFreezeBlendInDuration;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FlinchFreezeRotationBlendInSpeed;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FlinchFreezeTranslationBlendInSpeed;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FlinchFreezeBlendInAlpha;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FlinchBlendInDuration;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FlinchRotationBlendInSpeed;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FlinchTranslationBlendInSpeed;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FlinchRotationBlendOutSpeed;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FlinchTranslationBlendOutSpeed;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FlinchRotationBlendOutSpeedFast;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FlinchTranslationBlendOutSpeedFast;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FlinchPitchAmount;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FlinchYawAmount;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FlinchPitchYawFactor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FlinchHipsZFactor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              WeaponDirHipsZFactor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              TranslationNonHipsFactor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    FlinchRotationTarget;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     FlinchTranslationTarget;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     FlinchHipsTranslationTarget;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                FlinchHitSpineIdx;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FlinchStartTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    CurrentFlinchSpineRotationsCombined;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    HipsFlinchRotation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     HipsFlinchTranslation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     HipsFlinchTranslationInternal;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    LowerBackFlinchRotation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     LowerBackFlinchTranslation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    SpineFlinchRotation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     SpineFlinchTranslation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    Spine1FlinchRotation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     Spine1FlinchTranslation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    NeckFlinchRotation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     NeckFlinchTranslation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    HeadFlinchRotation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     HeadFlinchTranslation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Helper_UBCrouchAlpha;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Helper_LBCrouchAlpha;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    Helper_UBCrouchSpine;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    Helper_UBCrouchForearms;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    Helper_UBCrouchArms;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    Helper_UBCrouchHead;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    Helper_UBCrouchShoulder;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Helper_UBSpineArmsCompensationAlpha;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    Helper_UBSpineArmsCompensationRotator;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHelper_LBFootShuffling;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Helper_LBFootShufflingPlayRate;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHelper_LBFootShufflingRight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    Helper_LBDirectionOffsetSlowRotator;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    Helper_LBDirectionOffsetSlowRotatorInverse;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     Helper_LBDirectionOffsetSlowHipsZ;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     Helper_LBDirectionOffsetSlowHipsZInverse;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    Helper_LBDirectionOffsetSlowFootRotationOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Helper_UBVelocity;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHelper_LBVelocityIsZero;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     Helper_LBCrouchOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     Helper_LBCrouchOffsetInverse;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Helper_LBHipsZOverrideAlpha;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Helper_TrackingWeightAlpha;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Helper_BreathAlpha;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Helper_IsNotDrivingFloat;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     Helper_HipsFlinchTranslationInverse;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    Helper_HipsFlinchRotationInverse;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    Helper_ArmsShoulderFlinchInverse;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Helper_FirstPersonNotDead;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     Helper_FirstPersonZoomOffsetInverse;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     Helper_FirstPersonZoomOffsetAndCollision;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     Helper_CameraCollisionOffsetWithNot3PArmsSync;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Helper_FirstPersonNotDeadWith3PArmsSync;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Helper_IsNotFemale;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Helper_SpineBendBlendWeightHalf;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Helper_SpineBendBlendWeightThird;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    Helper_GroundingRightFootRotationOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    Helper_GroundingLeftFootRotationOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     Helper_GroundingRightFootTranslationOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     Helper_GroundingLeftFootTranslationOffset;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              NotFirstPersonWithAtmospherics;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    Helper_FaceUpperLids;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Helper_LeftHandIKWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Helper_RightHandIKWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    Helper_RootRotationOffsetInverse;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Helper_StopBounceMediumWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Helper_StopBounceLightWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    Helper_StopBounceInverse;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    Helper_StopBounceHips;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     Helper_BounceDuckWithBounceWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                    Helper_BounceDuckWithBounceWeightInverse;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    Helper_SpineBendRotation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    Helper_HipsBendRotation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Helper_SpineBendRotationAlpha;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    Helper_RightLegBendRotation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    Helper_ArmsBendRotation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AtmosphericsWeightWithAnimLOD0;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    Helper_LowerBodyRotationOffsetInverse;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     Helper_RightWeaponBoneBaseTranslation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    Helper_RightWeaponBoneBaseRotation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    Helper_SpringPitchYawValueRotator;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Helper_HandSpringWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Helper_ShoulderOffset1PWith1PWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Helper_JiggleBouncyWeight;
	
};
