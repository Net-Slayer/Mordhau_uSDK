// Fill out your copyright notice in the Description page of Project Settings.
#pragma once

#include "CoreMinimal.h"
//#include "Mordhau_classes.hpp"
#include "AdvancedCharacter.h"
#include "MordhauPlayerController.h"
//#include "MordhauEquipment.h"
#include "FaceCustomizationComponent.h"
#include "Mordhau.h"
#include "HumanMeshComponent.h"
#include "MordhauAnimInstance.h"
#include "Camera/CameraTypes.h"
#include "Runtime/CoreUObject/Public/UObject/Object.h"
//#include "GameFramework/Actor.h"
#include "MordhauCharacter.generated.h"

/**
*
*/

UCLASS(config = Game)
class MORDHAU_API AMordhauCharacter : public AAdvancedCharacter
{
	GENERATED_BODY()
public:

	//Sets defaults for Class
	AMordhauCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	//Delegates
	// 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
	// 		struct FScriptMulticastDelegate OnCameraStyleChanged;
	// 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
	// 		struct FScriptMulticastDelegate OnCharacterBuilt;
	// 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
	// 		struct FScriptMulticastDelegate OnPreBeginPlay;
	// 	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
	// 		struct FScriptMulticastDelegate OnVehicleChanged;




	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bAllowClimbing;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bAllowDrop;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bAllowEquipmentRotate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bAllowVehicles;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bCanDodge;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bCanJumpKick;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bDestroyEquipmentOnDeath;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bDoNotAnimateBreathing;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bDoNotLookAtOthers;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bDoNotUseGrounding;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bForceColorOverrides;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bIgnoresTeamColors;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bIsFirstPerson;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bIsHitStopOnTeamHitsDisabled;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bIsHoldingBlock;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bIsHoldingModeSwitch;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bIsLeftArmDisabled;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bIsLeftLegDisabled;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bIsRightArmDisabled;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bIsRightLegDisabled;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bIsSoundDisabled;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bIsUnflinchable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bOverrideIsInEnemyTeamArea;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bUseOverrideSpineSpaceAdditive;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bWantsBlock;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bWantsCharacterRebuild;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bWantsClimb;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bWantsCrouch;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bWantsFeintOrBlock;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bWantsFire;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bWasDodgeCanceled;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Booleans")
		bool bWasHitAfterDeath;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class UMordhauMotion* Motion;   //(ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class AControlPoint* CurrentCapturePoint;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class AKickWeapon* KickWeapon;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class AMordhauEquipment* LeftHandEquipment;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class AMordhauEquipment* RightHandEquipment;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class AMordhauVehicle* CurrentVehicle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class UAnimSequence* FatPose;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class UAnimSequence* SkinnyPose;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class UAnimSequence* StrongPose;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class UBoxComponent* BlockCollider;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class UClass* BlockedShakeEffect;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class UClass* BlockShakeEffect;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class UClass* BloodHitEffect;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class UClass* BloodMetalHitEffect;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class UClass* DodgeCameraShake;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class UClass* FallDamageCameraShake;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class UClass* FlinchShakeEffect;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class UClass* Quiver;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class UClass* RunLeftHeadBobShake;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class UClass* RunRightHeadBobShake;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class UClass* WalkLeftHeadBobShake;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class UClass* WalkRightHeadBobShake;


	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced, Category = "MordhauChar|Components")
		class UFaceCustomizationComponent* FaceCustomizationComponent;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced, Category = "MordhauChar|Components")
		class UMordhauCameraComponent* MordhauCamera;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class UParticleSystem* BleedingOutParticleEffect;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class UParticleSystem* DodgeParticleEffect;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class USoundCue* CrouchEndSound;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class USoundCue* CrouchStartSound;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class USoundCue* DodgeSound;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class USoundCue* DodgeSoundLocalPlayer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class USoundCue* NonSnappyArmorFoley;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class USoundCue* ReleaseFoley;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		class USoundCue* SnappyArmorFoley;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float CrouchCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float CurrentCapturePointTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float CurrentSpeedFOVOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float DodgeCooldown;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float DodgeDuration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float EasyParryUntilTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float EllipseBubbleLength;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float EllipseBubbleMaxHeightDiff;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float EllipseBubbleRadius;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float FallingTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float FallingTimeToRagdoll;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float FallingTimeToScream;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float HoldingModeSwitchTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float InTeamAreaSince;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float JumpStaminaCost;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float KnockbackClash;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float KnockbackParry;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float KnockbackWorld;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float LastChasedTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float LastChaseTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float LastDodgeTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float LastEnemyKilledTimeWithMeleeOrRanged;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float LastNoticeableLookChange;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float LastTrackingUpdate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float LegDamageBonusModifierAirborne;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float MaxSprintFOVOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float MaxSprintFOVOffsetInterpSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float MeleeComboExtraWindupModifier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float MeleeMissRecoveryModifier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float MeleeReleaseModifier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float MeleeWindupModifier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float MoveBlockedBySlowMinInterval;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float NextAllowedVoiceCommandTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float NoticeableLookChangeMinRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float SprintingMoveBlockedByFractionToTrigger;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float StaminaCostModifier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float StaminaRegenDelay;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float StaminaRegenTickRate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float StructureDamageModifier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float StructureRepairModifier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float TimeToHoldModeSwitchForOtherHand;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float TotalChasedTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float TotalChaseTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float UnflinchableDamageThreshold;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Floats")
		float UseHoldTime;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Integers")
		int CurrentForcedLOD;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Integers")
		int DodgeStaminaCost;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Integers")
		int ExtraStaminaOnHit;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Integers")
		int HealthOnKill;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Integers")
		int StaminaOnKill;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		struct FCharacterProfile Profile;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		struct FLinearColor ColorAOverride;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		struct FLinearColor ColorBOverride;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		struct FNetBlock NetBlock;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		struct FNetMotion ReplicatedNetMotion;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		struct FRotator CameraRotation1P;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		struct FRotator CameraRotation1PMeshSpace;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		struct FRotator LastRequestedFireRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		struct FSpineSpaceAdditive OverrideSpineSpaceAdditive;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		struct FSpineSpaceAdditive SpineSpaceAdditiveFrom;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		struct FSpineSpaceAdditive SpineSpaceAdditiveTarget;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		struct FTransform HighBlockColliderRelativeOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		struct FTransform LowBlockColliderRelativeOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		struct FTransform OriginalBlockColliderRelativeOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		struct FVector CameraLocation1P;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		struct FVector CameraLocation1PCosmeticOffset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		struct FVector ClimbTargetLocation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		struct FVector DodgeDirection;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		struct FVector DodgeDirectionLocal;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		struct FVector LastRequestedFireOrigin;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		struct FVector QueuedDismemberForceDir;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		struct FVector2D BlockColliderForwardParryDistance;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		struct FVector2D PreviousLookValues;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		TArray<class AMordhauEquipment*> Equipment;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		TArray<class UClass*> EmoteMotions;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		TArray<class UClass*> Motions;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		TArray<class UMordhauWearable*> WearableObjectInstances;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		TArray<class UParticleSystem*> SprintFootstepParticles;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|ClassRefs")
		TArray<class UAnimMontage*> UnarmedPreviewPoses; // 0x1810(0x0010) (Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		TArray<struct FDamageRecord> DamageHistory;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		TArray<struct FEmoteEntry> CharacterEmotes;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		TArray<struct FEmoteEntry> UnarmedEmotes;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		TArray<struct FFacialBoneSetup> FaceCustomizationSetup;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Structs")
		TArray<struct FTransform> FaceCustomizationBonesTransforms;


	UPROPERTY()
		TArray<TWeakObjectPtr<class AActor> > ActorsThatDestroyWithUs;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Maps")
		TMap<FName, class UMordhauWearable*> WearableProtectionCoverageMap;

	UPROPERTY()
		TWeakObjectPtr<class AActor> CurrentlyTracking;
	UPROPERTY()
		TWeakObjectPtr<class AActor> InteractionTarget;
	UPROPERTY()
		TWeakObjectPtr<class AActor> LastMovementFrontalHitActor;
	UPROPERTY()
		TWeakObjectPtr<class ACustomizationReplicationActor> ReplicatedCustomizationReplicationActor;
	UPROPERTY()
		TWeakObjectPtr<class UAudioComponent> LastArmorFoley;
	UPROPERTY()
		TWeakObjectPtr<class UParticleSystemComponent> CurrentBleedOutParticles;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Bytes")
		uint8 CameraStyle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Bytes")
		uint8 DeathSyncedRandom;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Bytes")
		uint8 EquipmentInventorySize;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Bytes")
		uint8 ReplicatedDodge;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Bytes")
		uint8 ReplicatedKnockback;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Bytes")
		uint8 ReplicatedStamina;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Bytes")
		uint8 ReplicatedVoiceCommand;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Bytes")
		uint8 Stamina;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MordhauChar|Bytes")
		uint8 StaminaRegenPerTick;


	// FUNCTIONS

	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void AssignNetBlock(const struct FBlockResult& BlockResult, EAttackMove BlockedMove, class AActor* Weapon);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void AssignNetMotionSimple(uint8 MotionType, uint8 Param0, uint8 Param1, uint8 Param2);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void AssignProfile(const struct FCharacterProfile& NewProfile);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void BakeFaceCustomizationTransforms(bool bDeferBake);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void BlockPressed();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void BlockReleased();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauCharacterFns")
		void CalculateLedgeOffsetAndNormal(class UClimbingMotion* ClimbingMotion, struct FVector& OutOffset, struct FVector& OutNormal);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		bool CanAccomodate(class UClass* EquipmentToTest);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauCharacterFns")
		bool CanDismember(const FName& bone);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauCharacterFns")
		bool CanEasyParry();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauCharacterFns")
		bool CanEmote();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		bool CanInitiateMotion(class UClass* NewMotion, bool bAttemptCancel);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		bool CanPerformAttack(EAttackMove Move);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauCharacterFns")
		bool CheckCanEquip(class AMordhauEquipment* Equip);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauCharacterFns")
		bool CheckCanEquipAlt(class AMordhauEquipment* Equip);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void ClientSetNetMotion(const struct FNetMotion& NewMotion, float ServerStartTime);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void CrouchPressed();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void CrouchReleased();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void CycleCamera();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void DisableBlockCollider();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void DisableLimb(const FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		class ASeparatedBodyPart* Dismember(const FName& bone);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		class AMordhauEquipment* DropEquipment(class AMordhauEquipment* ToDrop, bool bForce);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		class AMordhauEquipment* DropSlot(uint8 Index, bool bForce);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void EmptyHands();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void EnableBlockCollider();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void EnteredTeamArea(int OwningTeam);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		bool EquipSlot(uint8 Index, bool bDisplayEquipmentList);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void EquipSlot1();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void EquipSlot2();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void EquipSlot3();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void EquipSlot4();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void EquipSlot5();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void EquipSlot6();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void EquipSlot7();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void EquipSlot8();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void EquipSlot9();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void FeintOrBlockPressed();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void FeintOrBlockReleased();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		class AController* FindBestKiller(float CutOffTime);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		class AMordhauEquipment* FindEquipmentToRestock(TArray<class UClass*> ValidEquipment);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void FirePressed();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void FireReleased();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void FlipAttackSidePressed();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void FlipAttackSideReleased();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void ForceUpdateMeshVisibility();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void FreeHandsForEquipment(class AMordhauEquipment* EquipmentInstigator);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		TArray<FName> GetAllFaceSelectionChildBonesRecursive(const FName& ParentBone);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauCharacterFns")
		class ULODSkeletalMeshComponent* GetClothMesh();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauCharacterFns")
		struct FNetMotion GetCurrentNetMotion();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		class ACustomizationReplicationActor* GetCustomizationReplicationActor();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauCharacterFns")
		bool GetEquipmentIndex(class AMordhauEquipment* Equip, uint8& OutIndex);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		int GetFaceCustomizationBoneIdx(const FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		struct FVector GetFaceCustomizationRotate(const FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		struct FVector GetFaceCustomizationScale(const FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		struct FTransform GetFaceCustomizationTransform(const FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		struct FVector GetFaceCustomizationTranslate(const FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		class AActor* GetLastMovementFrontalHitActor(float MaxAgeSeconds);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauCharacterFns")
		class AMordhauVehicle* GetLastUsedVehicle(float MaximumTimeDiscrepancy);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauCharacterFns")
		float GetLastVehicleTime();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		class UAudioComponent* GetLastVoiceCommand();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauCharacterFns")
		EMovementRestriction GetMovementRestriction();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		bool HasEquipmentHeSpawnedWith();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauCharacterFns")
		bool HasPerk(uint8 PerkId);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void Holster(class AMordhauEquipment* ToHolster);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauCharacterFns")
		static bool IsArm(const FName& bone);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		bool IsBoneDismembered(const FName& bone);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauCharacterFns")
		static bool IsHead(const FName& bone);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		bool IsHoldingBlock();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauCharacterFns")
		bool IsInAnyTeamArea();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauCharacterFns")
		bool IsInEnemyTeamArea();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		bool IsInKnockback();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauCharacterFns")
		static bool IsLeftArm(const FName& bone);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauCharacterFns")
		static bool IsLeftLeg(const FName& bone);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauCharacterFns")
		static bool IsLeg(const FName& bone);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauCharacterFns")
		static bool IsRightArm(const FName& bone);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauCharacterFns")
		static bool IsRightLeg(const FName& bone);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void JumpPressed();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void JumpReleased();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void LeftTeamArea(int OwningTeam);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void ListenForStab360();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void ListenForStrike360();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauCharacterFns")
		bool ModifyParryResult(bool InResult, const struct FHitResult& HitResult, class AMordhauCharacter* Attacker);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauCharacterFns")
		void MoveBlockedBySlow(const struct FHitResult& Impact);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauCharacterFns")
		void NextEquipment();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void NextEquipmentPressed();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void NextEquipmentReleased();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void NextShieldEquipment();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void OffsetStamina(int Amount, bool bReplicate);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void OnActionFailed(const FName& Reason);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauCharacterFns")
		void OnAttackStarted();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauCharacterFns")
		void OnBlockedMelee(const struct FHitResult& HitResult, class AMordhauCharacter* Attacker);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauCharacterFns")
		void OnDropped(class AMordhauEquipment* Eq);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauCharacterFns")
		void OnPickedUp(class AMordhauEquipment* Eq);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauCharacterFns")
		void OnPostDismember(const FName& bone, class ASeparatedBodyPart* SeparatedPart, class AActor* Agent);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauCharacterFns")
		void OnPostProfileAssigned();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauCharacterFns")
		void OnRep_Equipment();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void OnRep_LeftHandEquipment();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void OnRep_NetBlock();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void OnRep_Quiver();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void OnRep_ReplicatedCustomizationReplicationActor();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void OnRep_ReplicatedDodge();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void OnRep_ReplicatedKnockback();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void OnRep_ReplicatedNetMotion();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void OnRep_ReplicatedStamina();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void OnRep_ReplicatedVoiceCommand();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void OnRep_RightHandEquipment();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		bool PerformVoiceCommand(uint8 PackedVoiceCommand);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		bool PickUp(class AMordhauEquipment* ToEquip, int PreferredSlot = 0);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		bool PickUpToSlot(class AMordhauEquipment* ToEquip, uint8 Slot);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void PlayAttackYell();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void PlayDeathYell(bool bIsLongYell);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void PlayHurtYell();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		class UAudioComponent* PlayMouthSound(class USoundBase* Sound, float VolumeMultiplier);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		class UAudioComponent* PlayNonSnappyArmorFoley();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		class UAudioComponent* PlaySnappyArmorFoley();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void PreviousEquipment();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void PreviousEquipmentPressed();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void PreviousEquipmentReleased();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void PreviousShieldEquipment();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns", meta = (AutoCreateRefTerm = "Force"))
		bool QueueDismember(const FName& bone, bool bIsDismemberPartial, bool bIsBluntForce, const struct FVector& Force, class AActor* Agent);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void RequestAttack(EAttackMove Move, float Angle);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void RequestBash();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void RequestClimb(const struct FVector& TargetLocation, bool bIsSlowClimb);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void RequestCouchedAttack();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void RequestDrop();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void RequestEmote(uint8 EmoteId);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void RequestFeint();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void RequestFire();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void RequestHolster(uint8 Mode);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void RequestJump();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void RequestKick();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void RequestLeftLowerStrike();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void RequestLeftStab();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void RequestLeftStrike();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void RequestLeftUpperStrike();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		bool RequestParry(EBlockType BlockType, bool bAllowFTP);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void RequestRangedCancel();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void RequestRightLowerStrike();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void RequestRightStab();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void RequestRightStrike();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void RequestRightUpperStrike();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void RequestStab360();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void RequestStrike360();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void RequestToggleWeaponMode();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void RequestUse();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void RequestVoiceCommand(uint8 CommandType, bool bAllowQueue = true);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		TArray<class AMordhauEquipment*> RestockDefaultEquipment(int MaxSlotsToRestock);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		bool RestockEquipmentFromAmmoBox();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void ReweightSkinning(int BoneFrom, int BoneTo, bool bIncludeChildren, const struct FVector& ExceptNearThisPoint, float Radius, const FName& NearPointBone);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void ServerAssignFireAim(const struct FVector& Orig, const struct FRotator& Rot);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void ServerAssignNetMotion(const struct FNetMotion& NewNetMotion, uint8 LastAuthObserved);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void ServerDropParry(uint8 MotionID);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void ServerFinishInteraction(uint8 Result);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void ServerQueueAttack(EAttackMove Move, uint8 Angle, uint8 MotionID);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void ServerRequestDodge(uint8 PackedWorldYaw);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void ServerRequestPassiveInteraction(class AActor* Target);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void ServerRequestVoiceCommand(uint8 VoiceRequest);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void ServerSetInteractionTarget(class AActor* Target);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void ServerSuggestHitDetection(class AAdvancedCharacter* OtherCharacter, const struct FVector_NetQuantize& HitLocation, uint8 BoneId);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void SetCameraStyle(uint8 NewStyle, bool bBlendCamera);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void SetCurrentlyTracking(class AActor* NewTrackingTarget);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void SetCustomizationReplicationActor(class ACustomizationReplicationActor* CRA);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void SetFaceCustomizationRotate(const FName& BoneName, const struct FVector& Vector);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void SetFaceCustomizationScale(const FName& BoneName, const struct FVector& Vector);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void SetFaceCustomizationTranslate(const FName& BoneName, const struct FVector& Vector);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void SetQuiver(class UClass* NewQuiver);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void ShowEquipmentIfViewTarget();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauCharacterFns")
		void SprintingMoveBlockedBy(class AActor* BlockedBy);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauCharacterFns")
		void SprintPressed();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void SprintReleased();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void StartCrouching();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void StartScreaming();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void StartSprinting();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void StartSupersprint();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void StopAttackYell();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void StopCrouching();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void StopCurrentVoiceCommand();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void StopListenForStab360();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void StopListenForStrike360();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void StopScreaming();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void StopSprinting();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void StopStaminaRegen(float ExtraTime);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void StopSupersprint();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void SwitchEquipment(class AMordhauEquipment* ToSwitch);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void SwitchEquipmentByIndex(uint8 Index);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void SwitchModeAndReAttach(class AMordhauEquipment* ToSwitch);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void SwitchToFists();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void ToggleWeaponModePressed();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void ToggleWeaponModeReleased();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauCharacterFns")
		bool TryClimbing();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauCharacterFns")
		bool TryDismember(const FName& bone, const struct FVector& Point, class AMordhauWeapon* Weapon, EAttackMove Move, bool bIsRagdollDismember);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void UpdateAllSkeletalMeshComponentMaterials();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void UpdateFPCamera(float DeltaSeconds, float InLookUpValue, bool bOnlyUpdateRotation, const struct FRotator& Offset);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void UpdateLOD(float DeltaTime);
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void UpdateWearableInstanceColorsAndPatterns();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void UsePressed();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		void UseReleased();
	UFUNCTION(BlueprintCallable, Category = "MordhauCharacterFns")
		bool ValidateInteractionTarget(class AActor* TargetActor);
};
