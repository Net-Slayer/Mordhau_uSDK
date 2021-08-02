// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauActor.h"
#include "Mordhau.h"
#include "MordhauEquipment.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class MORDHAU_API AMordhauEquipment : public AMordhauActor
{
	GENERATED_BODY()

public:

	AMordhauEquipment();

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                    bForceRefPoseOnMesh;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              CreatedRealTime;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		struct FTransform                                  DefaultMeshRelativeTransform;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		int                                                HideInGameOverride;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		struct FTransform                                  EquippedOffset;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bUseEquippedOffset;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bCanThrowPommel;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bSecondUseEquippedOffset;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bIsHeldInHand;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bIsParentInFirstPerson;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		FName                                       AttachedToSocket;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bWantsToRebuildParts;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		uint8                                      LastOwnerTeam;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bForceTeamColor1;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bTakesHuntsmanDamage;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bForceTeamColor2;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bHasColor1;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bHasColor2;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bHasColor3;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		TArray<class UMordhauEquipmentPart*>             PartInstances;//tsubclass

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		TWeakObjectPtr<class AMordhauCharacter>            ParentCharacter;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		TWeakObjectPtr<class AMordhauCharacter>            YoinkTrackingParentCharacter;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bWasLastParentCharacterLocalPlayer;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bHeldInteractIsSwap;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		EEquipmentType                                     EquipmentUIType;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		EEquipmentCategory                                 EquipmentUICategory;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		FText                                       EquipmentName;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bIsRightHanded;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bSecondIsRightHanded;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bIsTwoHanded;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bSecondIsTwoHanded;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              EquipTimeModifier;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bRangedActionAllowsRegen;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              RangedDrawFOVOffset;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UCurveVector*                                RangedDrawSway;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bIsRangedSwayCameraBased;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		struct FVector                                     RangedAirborneSway;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              RangedAirborneSwayBlendInSpeed;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              RangedAirborneSwayBlendOutSpeed;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		struct FVector2D                                   RangedDrawSwayLoopSegment;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              RangedDrawTremblingStartAfter;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              RangedDrawTremblingMaxAfter;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              RangedDrawTremblingMagnitude;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              RangedDrawTremblingFrequency;

	UPROPERTY(Replicated, VisibleAnywhere, BlueprintReadWrite)
		class USkeletalMeshComponent*                      SkeletalMeshComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USkeletalMeshComponent*                      AuxiliarySkeletalMeshComponent;

	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	   //EAuxiliaryMeshMode                                 AuxiliaryMeshMode;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		struct FTransform                                  AuxiliaryMeshOffset;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		struct FTransform                                  DefaultAuxiliaryMeshRelativeTransform;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class USkeletalMesh*                               CombinedSkeletalMesh;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bIsFollowingProjectile;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		uint8                      EquipmentPhysicalSurface;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class AMordhauProjectile*                          CurrentProjectile;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UClass*                                      ProjectileClass;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		TArray<class UClass*>                              RestockAmmoForEquipment;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bCanRestockFromEquipmentDefaults;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		int                                                MaxAmmoBoxRestockAmount;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class APhysicsProxy*                               PhysicsProxy;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UPhysicsAsset*                               PhysicsAsset;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bDoNotDisarmOnMeleeWeaponHit;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bCannotChaseOthers;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bCanBeChasedFromFront;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bCanRagdoll;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bUsesPhysicsProxy;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bOnlyPeasants;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bIsAllowedForPeasants;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		struct FTransform                                  ArmoryTransformOffset;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		int                                                CharacterPointCost;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              CullDistanceHeld;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              CullDistanceNotHeld;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              CullDistanceAuxiliaryHeld;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              CullDistanceAuxiliaryNotHeld;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bForceInstantMeshUpdate;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bForceMipStreaming;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bForceMaxLOD;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bPartsUseAuxiliaryMesh;

	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<TWeakObjectPtr<class UMeshComponent>> MeshComponents;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UClass*                                      Quiver;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		uint8                                      MaxAmmo;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		uint8                                     Ammo;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		uint8                                      MaxAmmoWithoutQuiver;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		uint8                                      LastAmmo;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bDestroyIfNoAmmo;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		EMovementRestriction                               MovementRestriction;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bPreventsClimbing;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              BackpedalSpeedFactorEquipped;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              SpeedBonusPercentageEquipped;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              AccelerationBonusPercentageEquipped;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              SpeedBonusPercentageHolstered;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              AccelerationBonusPercentageHolstered;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		FEquipmentCustomization                     AssignedCustomization;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		uint8                                       Colors;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		uint8                                       PartsId;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		uint8                                       Skin;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		uint8                                       Emblem;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		uint8                                       EmblemColors;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		uint8                                       Pattern;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bHasColors;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bHasPartsId;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bHasSkin;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bHasEmblem;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bHasEmblemColors;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bHasPattern;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<struct FEquipmentSkinEntry>                 Skins;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bAutoAssignCustomizationOnBeginPlay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		FEquipmentCustomization                     AutoAssignCustomization;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		uint8                                      AutoAssignCustomizationEmblem;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		uint8                                      AutoAssignCustomizationEmblemColor1;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		uint8                                      AutoAssignCustomizationEmblemColor2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<struct FEmoteEntry>                         EquipmentEmotes;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UBlendSpaceBase*                             UpperBlendSpace1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               UpperAdditive1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UBlendSpaceBase*                             UpperBlendSpaceUnloaded1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               UpperAdditiveUnloaded1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UBlendSpaceBase*                             UpperBlendSpace;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               UpperAdditive;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UBlendSpaceBase*                             UpperBlendSpaceUnloaded;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               UpperAdditiveUnloaded;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               LowerAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UBlendSpaceBase*                             ShieldUpperBlendSpace1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               ShieldUpperAdditive1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UBlendSpaceBase*                             ShieldUpperBlendSpace;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               ShieldUpperAdditive;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               ShieldLowerAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UBlendSpaceBase*                             ShieldHorseUpperBlendSpace1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               ShieldHorseUpperAdditive1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UBlendSpaceBase*                             ShieldHorseUpperBlendSpace;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               ShieldHorseUpperAdditive;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UBlendSpaceBase*                             HorseUpperBlendSpace1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               HorseUpperAdditive1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UBlendSpaceBase*                             HorseUpperBlendSpaceUnloaded1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               HorseUpperAdditiveUnloaded1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UBlendSpaceBase*                             HorseUpperBlendSpace;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               HorseUpperAdditive;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UBlendSpaceBase*                             HorseUpperBlendSpaceUnloaded;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               HorseUpperAdditiveUnloaded;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               HorseUpperRearing;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               HorseUpperRearing1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               HorseUpperJump;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               HorseUpperJump1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimMontage*                                ModeSwitchAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimMontage*                                DropAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimMontage*                                InteractWithAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimMontage*                                InteractWith1PAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               JumpUnloadedAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               JumpAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               JumpAnimationShield;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               JumpUnloadedAnimation1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               JumpAnimation1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               JumpAnimationShield1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               FallingUnloadedAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               FallingAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               FallingAnimationShield;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               FallingUnloadedAnimation1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               FallingAnimation1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               FallingAnimationShield1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               LandUnloadedAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               LandAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               LandAnimationShield;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               LandUnloadedAnimation1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               LandAnimation1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               LandAnimationShield1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimMontage*                                SecondDropAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimMontage*                                SecondInteractWithAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimMontage*                                SecondInteractWith1PAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               SecondJumpUnloadedAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               SecondJumpAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               SecondJumpUnloadedAnimation1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               SecondJumpAnimation1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               SecondFallingUnloadedAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               SecondFallingAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               SecondFallingUnloadedAnimation1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               SecondFallingAnimation1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               SecondLandUnloadedAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               SecondLandAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               SecondLandUnloadedAnimation1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               SecondLandAnimation1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		TArray<class UAnimMontage*>                        CharacterPreviewPoses;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimMontage*                                RangedDrawAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimMontage*                                RangedDrawAnimation1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UBlendSpaceBase*                             RangedDrawnAdditive;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimMontage*                                RangedDrawEquipmentAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimMontage*                                RangedDrawEquipmentAnimation1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimMontage*                                RangedReleaseAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimMontage*                                RangedReleaseAnimation1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimMontage*                                RangedReleaseEquipmentAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimMontage*                                RangedReleaseEquipmentAnimation1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimMontage*                                ReloadAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class USoundCue*                                   ReloadSound;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimMontage*                                ReloadAnimation1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class USoundCue*                                   ReloadSound1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimMontage*                                ReloadEquipmentAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimMontage*                                ReloadEquipmentAnimation1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimMontage*                                QuickthrowAnimation1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimMontage*                                QuickthrowAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bDisableSpineArmsCompensation1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bDisableHandSpringAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		struct FVector                                     RightHandIKPositionOffset;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		struct FVector                                     RightShoulderOffset1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		struct FVector                                     LeftShoulderOffset1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bUsesOffhandIK;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bInvertOffhandUp;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bSecondInvertOffhandUp;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UBlendSpaceBase*                             SecondUpperBlendSpace1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               SecondUpperAdditive1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UBlendSpaceBase*                             SecondUpperBlendSpaceUnloaded1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               SecondUpperAdditiveUnloaded1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UBlendSpaceBase*                             SecondUpperBlendSpace;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               SecondUpperAdditive;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UBlendSpaceBase*                             SecondUpperBlendSpaceUnloaded;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               SecondUpperAdditiveUnloaded;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimSequence*                               SecondLowerAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UAnimMontage*                                SecondModeSwitchAnimation;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bSecondUsesOffhandIK;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              OffhandIKUpOffset;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              OffhandIKUpOffset1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              SecondOffhandIKUpOffset;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              SecondOffhandIKUpOffset1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		struct FVector                                     RightHandEquipOffset;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		struct FTransform                                  RightWeaponBoneCosmeticTransform;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		struct FTransform                                  RightWeaponBoneCosmeticTransform1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		struct FTransform                                  SecondRightWeaponBoneCosmeticTransform;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		struct FTransform                                  SecondRightWeaponBoneCosmeticTransform1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		struct FRotator                                    RotationOffset;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		struct FRotator                                    SecondRotationOffset;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		struct FVector                                     GripLocationLocal;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		struct FVector                                     SecondGripLocationLocal;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<struct FEquipmentHolsterInfo>               HolsterInfo;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bCanHolster;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bCanEquipOnHorse;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bCanEquipOnLadder;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bSecondCanEquipOnHorse;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bSecondCanEquipOnLadder;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class USoundCue*                                   AmmoRefillSound;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class USoundCue*                                   EquipSound;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class USoundCue*                                   HolsterSound;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class USoundCue*                                   DrawSound;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              DrawSoundPlayAtNormalizedTime;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              DrawSoundPlayAtNormalizedTime1P;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class USoundCue*                                   RangedCancelSound;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class USoundCue*                                   FireSound;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bAlwaysDestroyOnDeath;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bDeferDestroyUntilRagdoll;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              RagdollStayTime;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bAllowDrop;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bCanAttack;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bCanAttackOnFoot;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bCanAttackOnHorseback;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bAllowFire;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bFireThrowsEquipment;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              ExtraSwitchTime;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bRangedReleasePlaysAttackYell;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bUsesRangedCamera;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bAllowHoldDraw;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bAllowCancelDraw;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              MaxHoldDrawTime;

	// UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		//EMovementRestriction                               ReloadMovementRestriction;

	// UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		//EMovementRestriction                               RangedDrawMovementRestriction;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              RangedDrawSpeedFactor;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              RangedDrawSpeedFactorWithRangerPerk;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		struct FVector2D                                   RangedDrawTurnCaps;

	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	   //EMovementRestriction                               RangedReleaseMovementRestriction;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bDoNotFireAfterMaxHoldDrawTime;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bQuickthrowOnly;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              ForceAppliedOnDrop;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bAllowCleanup;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              RangedDrawTime;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              RangedCancelTime;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              RangedReleaseTime;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class UClass*                                      RangedReleaseCameraShake;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              RangedReloadTime;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		struct FVector2D                                   RangedReloadTurnCaps;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              RangedReloadGrabAmmoNormTime;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              RangedReloadFinishReloadNormTime;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              AutoReloadTime;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              AutoReloadTimeSpent;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bCanReload;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bUnloadOnUnequip;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bLoadOnUnequip;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bIsLoaded;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bHiddenWhenUnloaded;

	UPROPERTY(ReplicatedUsing = OnRep_IsUsingAlternateMode, EditAnywhere, BlueprintReadWrite)
		bool                                               bIsUsingAlternateMode;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bHasAlternateMode;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bRevertModeOnUnequip;

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bRevertModeOnDrop;

	UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
		void UpdateMaterial(class USkeletalMeshComponent* SkeletalMeshComp);
	UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
		void UpdateInteractionCollision();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauEquipmentFns")
		void UpdateEquipmentVisualState();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauEquipmentFns")
		void UpdateEquipmentState();
	UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
		void SwitchMode();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "MordhauEquipmentFns")
		bool ShouldShine();
	UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
		void SetPartsUseAuxiliaryMesh(bool bNewValue);
	UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
		void SetParts(TArray<uint8> NewPartsId, bool bRebuild);
	UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
		void SetLoaded(bool bNewLoaded);
	UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
		void SetColors(TArray<uint8> NewColors);
	UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
		void SetAmmo(uint8 NewAmmo);
	UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
		bool RestockOtherEquipmentOnCharacter(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
		void ResetMeshRelativeTransform();
	UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
		void RebuildIfAll();
	UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
		void RebuildEquipment(bool bDoOnlyQuickJob);
	UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
		void LocalPlayerTick(float DeltaTime);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauEquipmentFns")
		void LocalPlayerLateTick(float DeltaTime);
	UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
		void LateTick(float DeltaSeconds);
	UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
		struct FEquipmentCustomization GetRandomCustomization(bool bOnlyColors);
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "MordhauEquipmentFns")
		class AMordhauCharacter* GetParentCharacter();
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "MordhauEquipmentFns")
		uint8 GetCurrentMaxAmmo();
	UFUNCTION(BlueprintPure, BlueprintCallable, Category = "MordhauEquipmentFns")
		uint8 GetAmmo();
	//UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
	// class AMordhauProjectile* FireProjectile_Internal(const struct FVector& InOrigin, const struct FRotator& InOrientation, class AController* Controller, float ExpectedDelay, bool bIsLocal);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauEquipmentFns")
		void FireProjectile(const struct FVector& Origin, const struct FRotator& Orientation, class AController* OwningController, float ExpectedDelay);
	//UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
	 //struct FEquipmentHolsterInfo FindCurrentHolsterInfo();
	UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentFns")
		void EquipmentCommand(int Command);
	UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
		void DestroyPhysicsProxy();
	UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
		bool BelongsToCharacter();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauEquipmentFns")
		void AssignCustomizationToProjectile(class AMordhauProjectile* Projectile);
	UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
		void AssignCustomization(const struct FEquipmentCustomization& Customization, uint8 CustomizationEmblem, uint8 CustomizationEmblemColor1, uint8 CustomizationEmblemColor2);
	//UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
	 //struct FBoxSphereBounds ComputeAccurateBounds();
	UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
		bool CanPerformAttack(class AMordhauCharacter* Character, EAttackMove Move);
	UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
		void RequestAttack(EAttackMove Move, float Angle);

	UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
		bool OnRequestModeSwitch(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
		bool OnRequestFire(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
		void OnRep_Skin();
	UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
		void OnRep_Pattern();
	UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
		void OnRep_PartsId();
	UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
		void OnRep_EmblemColors();
	UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
		void OnRep_Emblem();
	UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
		void OnRep_Colors();

	UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
		void OnRep_IsUsingAlternateMode();

	UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
		void OnRep_IsLoaded();
	UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
		void OnRep_Ammo();
	UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
		void OnPickedUp(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
		void OnPartsChanged();
	UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
		void OnLoadedChanged();
	UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
		void OnHolsteredOrDropped(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
		void OnHolstered(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
		void OnEquipped(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
		void OnDropped(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
		void OnAmmoChanged();
};
