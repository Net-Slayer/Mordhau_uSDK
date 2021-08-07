// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
//#include "Mordhau_classes.hpp"
#include "Engine/EngineTypes.h"
#include "Components/AudioComponent.h"
#include "Delegate.h"
#include "Mordhau.h"
#include "TagSystemComponent.h"
#include "DamageableComponent.h"
#include "HealthStatComponent.h"
#include "DismemberableComponent.h"
#include "EquipmentSystemComponent.h"
#include "MotionSystemComponent.h"
#include "PerkSystemComponent.h"
#include "DriverComponent.h"
#include "InteractionSystemComponent.h"
#include "CharacterVoiceComponent.h"
#include "StaminaStatComponent.h"
#include "AdvancedCharacter.generated.h"

/*

//COMPONENTS

class UTagSystemComponent* TagSystemComponent; // 0x08E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
class UDismemberableComponent* DismemberableComponent; // 0x08E8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
class UEquipmentSystemComponent* EquipmentSystemComponent; // 0x08F0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
class UDriverComponent* DriverComponent; // 0x08F8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
class UMotionSystemComponent* MotionSystemComponent; // 0x0900(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
class UPerkSystemComponent* PerkSystemComponent; // 0x0908(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
class UInteractionSystemComponent* InteractionSystemComponent; // 0x0910(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
class UCharacterVoiceComponent* CharacterVoiceComponent; // 0x0918(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
class UStaminaStatComponent* StaminaStatComponent; // 0x0920(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
class UDamageableComponent* DamageableComponent; // 0x0928(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
class UHealthStatComponent* HealthStatComponent; // 0x0930(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)

//DELEGATES

struct FScriptMulticastDelegate OnChangedTeam; // 0x07F8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

struct FScriptMulticastDelegate OnCharacterDestroyed; // 0x07C8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

struct FScriptMulticastDelegate OnCharacterDied; // 0x07A0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

struct FScriptMulticastDelegate OnTakeDamage; // 0x07B0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

struct FScriptMulticastDelegate OnTornOff; // 0x07D8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

struct FScriptMulticastDelegate OnUnPossessed; // 0x07E8(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable)

*/

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterDiedDelegate, AAdvancedCharacter*, Character);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterDestroyedDelegate, AAdvancedCharacter*, Character);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnTornOffDelegate, AAdvancedCharacter*, Character);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnChangedTeamDelegate, AAdvancedCharacter*, Character);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnUnPossessedDelegate, AAdvancedCharacter*, Character);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnTakeDamageDelegate, AAdvancedCharacter*, Character, const FMordhauDamageInfo&, DamageInfo, AController*, EventInstigator, AActor*, DamageCauser);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterBecomeViewTargetDelegate, AAdvancedCharacter*, Character);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCharacterEndViewTargetDelegate, AAdvancedCharacter*, Character);
UCLASS()
class MORDHAU_API AAdvancedCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAdvancedCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
	//DelegateProperties 
	UPROPERTY(BlueprintAssignable)
	FOnCharacterDiedDelegate OnCharacterDied; //(ZeroConstructor, InstancedReference, BlueprintAssignable)
	UPROPERTY(BlueprintAssignable)
	FOnTakeDamageDelegate OnTakeDamage; //(ZeroConstructor, InstancedReference, BlueprintAssignable)
	UPROPERTY(BlueprintAssignable)
	FOnCharacterDestroyedDelegate OnCharacterDestroyed; //(ZeroConstructor, InstancedReference, BlueprintAssignable)
	UPROPERTY(BlueprintAssignable)
	FOnTornOffDelegate OnTornOff; //(ZeroConstructor, InstancedReference, BlueprintAssignable)
	UPROPERTY(BlueprintAssignable)
	FOnUnPossessedDelegate OnUnPossessed; //(ZeroConstructor, InstancedReference, BlueprintAssignable)
	UPROPERTY(BlueprintAssignable)
	FOnChangedTeamDelegate OnChangedTeam; //(ZeroConstructor, InstancedReference, BlueprintAssignable)

	//Direct from Dev
	UPROPERTY(BlueprintAssignable)
		FOnCharacterBecomeViewTargetDelegate OnCharacterBecomeViewTarget;
	UPROPERTY(BlueprintAssignable)
		FOnCharacterEndViewTargetDelegate OnCharacterEndViewTarget;
	
	
	
	
	
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Names")
		FName AdditiveOverrideType; // 0x0CE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Names")
		FName BurningAttachSocket; // 0x0C68(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Names")
		FName DeathParticlesSocket; // 0x0C08(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Names")
		FName FallDamageSoundAttachToBone; // 0x0C80(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Names")
		FName LastFlinchAdditiveName; // 0x0CF8(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Names")
		FName MarkerWidgetAttachSocket; // 0x0BE0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Names")
		FName QueuedForDismember; // 0x09F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Arrays")
		TArray<FName> FeetBones; // 0x0968(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Arrays")
		TArray<class UAudioComponent*> FootstepAudioComponents; // 0x0948(0x0010) (ExportObject, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Arrays")
		TArray<class UMaterialInterface*> FootstepDecals; // 0x0988(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Arrays")
		TArray<class UParticleSystem*> FootstepParticles; // 0x0998(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Arrays")
		TArray<struct FFloatAndVector> DelayedLocationDeltas; // 0x0B38(0x0010) (ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Arrays")
		TArray<struct FFloatAndVector> DelayedLookDeltas; // 0x0B70(0x0010) (ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Arrays")
		TArray<struct FSphericalLimbBounds> SphericalLimbs; // 0x0D08(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Misc")
		TEnumAsByte<EPhysicalSurface> CharacterSurface; // 0x0D04(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY()
		TWeakObjectPtr<class AActor> FireAgent; // 0x0AB4(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY()
		TWeakObjectPtr<class AController> FireInstigator; // 0x0AAC(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY()
		TWeakObjectPtr<class AMasterField> CurrentFireField; // 0x0AA4(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY()
		TWeakObjectPtr<class AMasterField> CurrentSmokeField; // 0x0A90(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY()
		TWeakObjectPtr<class AMordhauPlayerController> InstanceOwner; // 0x0764(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY()
		TWeakObjectPtr<class UAudioComponent> CurrentBurningSound; // 0x0C90(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY()
		TWeakObjectPtr<class UParticleSystemComponent> CurrentBurningParticles; // 0x0C88(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bAddForwardAxisToMovementInput; // 0x0AD9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bAddRightAxisToMovementInput; // 0x0ADA(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bCanReceiveClientsideHits; // 0x0A0C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bCannotRequestSuicide; // 0x0BF0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bDisableHealingItems; // 0x0C10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bDisableOverlapsIfClientNotViewTarget; // 0x08D9(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bFancyMeshEffects; // 0x0A44(0x0001) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bForceLongDeathYell; // 0x0CC8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bForceMaxQuality; // 0x0A50(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bForceRagdollIfDmgAgent; // 0x0D1C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bHasLastChance; // 0x0C30(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bIgnoreGameStateHealthRegenRestriction; // 0x0C20(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bIsAirborneFromJump; // 0x0A81(0x0001) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bIsAllowedOutOfBounds; // 0x0C28(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bIsBleedingOut; // 0x0BF8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bIsBurning; // 0x0771(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bIsDead; // 0x0770(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bIsHighlighted; // 0x0B91(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bIsInteractable; // 0x0B92(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bIsRagdollFalling; // 0x0772(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bJumped; // 0x0A80(0x0001) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bMeshesReceiveDecals; // 0x0ACC(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bPerformCustomDepthHighlight; // 0x0B90(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bQueuedDismemberIsBluntForce; // 0x09F9(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bQueuedDismemberIsPartial; // 0x09F8(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bSkipAnimPoseOnClientWhenNotRendered; // 0x0A2C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bTeamkillsCountForAutoKick; // 0x0C29(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bTurnRateIgnoresCap; // 0x0B14(0x0001) (Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bTurnUsesControllerInputYawScale; // 0x0AD8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bWasEverPossessedByLocalPlayer; // 0x0A52(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bWillBleedOutOnKill; // 0x0BF2(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Booleans")
		bool bWillStopMelee; // 0x0BF1(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|ClassRefs")
		class AMordhauProjectile* CurrentProjectile; // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced, Category = "AdvChar|Components")
		class UCharacterVoiceComponent* CharacterVoiceComponent; // 0x0918(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|ClassRefs")
		class UClass* HitEffect; // 0x0C58(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|ClassRefs")
		class UClass* MarkerWidgetClass; // 0x0BA0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|ClassRefs")
		class UClass* MarkerWidgetComponentClass; // 0x0B98(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced, Category = "AdvChar|Components")
		class UDamageableComponent* DamageableComponent; // 0x0928(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced, Category = "AdvChar|Components")
		class UDismemberableComponent* DismemberableComponent; // 0x08E8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced, Category = "AdvChar|Components")
		class UDriverComponent* DriverComponent; // 0x08F8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced, Category = "AdvChar|Components")
		class UEquipmentSystemComponent* EquipmentSystemComponent; // 0x08F0(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced, Category = "AdvChar|Components")
		class UHealthStatComponent* HealthStatComponent; // 0x0930(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced, Category = "AdvChar|Components")
		class UInteractionSystemComponent* InteractionSystemComponent; // 0x0910(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced, Category = "AdvChar|Components")
		class ULateTickComponent* LateTickComponent; // 0x0A18(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Components")
		class UMordhauWidgetComponent* MarkerWidgetComponent; // 0x0BE8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced, Category = "AdvChar|Components")
		class UMotionSystemComponent* MotionSystemComponent; // 0x0900(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|ClassRefs")
		class UParticleSystem* BurningParticles; // 0x0C60(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|ClassRefs")
		class UParticleSystem* DeathParticles; // 0x0C00(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced, Category = "AdvChar|ClassRefs")
		class UPerkSystemComponent* PerkSystemComponent; // 0x0908(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|ClassRefs")
		class UPhysicsAsset* BodyRagdollPhysicsAsset; // 0x09E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|ClassRefs")
		class UPhysicsAsset* ClientPhysicsAsset; // 0x09E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|ClassRefs")
		class USkeletalMesh* OriginalMesh; // 0x0798(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|ClassRefs")
		class USoundAttenuation* ViewTargetAttenuationOverride; // 0x0CC0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|ClassRefs")
		class USoundCue* BurningSound; // 0x0C70(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|ClassRefs")
		class USoundCue* DeathYell; // 0x0CD8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|ClassRefs")
		class USoundCue* FallDamageSound; // 0x0C78(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|ClassRefs")
		class USoundCue* FootstepSound; // 0x09A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|ClassRefs")
		class USoundCue* HurtYell; // 0x0CD0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced, Category = "AdvChar|ClassRefs")
		class UStaminaStatComponent* StaminaStatComponent; // 0x0920(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY(BlueprintReadOnly, Export, Instanced, VisibleAnywhere, Category = "AdvChar|ClassRefs")
		class UTagSystemComponent* TagSystemComponent; // 0x08E0(0x0008) (BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|ClassRefs")
		class UThudderComponent* BodyThudder; // 0x0938(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float AdditiveOverrideEndTime; // 0x0CF0(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float AdditiveOverrideStartTime; // 0x0CF4(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float AirborneTime; // 0x0A84(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float BleedingOutRemainingTime; // 0x0BF4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float CurrentLocationLagInduction; // 0x0B48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float CurrentLookLagInduction; // 0x0B80(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float DeathTime; // 0x0CB8(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float DissolveDuration; // 0x0A14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float DistanceIntoFireField; // 0x0780(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float DistanceIntoFireFieldSmoothed; // 0x077C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float DistanceIntoSmokeField; // 0x0788(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float DistanceIntoSmokeFieldSmoothed; // 0x0784(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float DistanceToCamera; // 0x0A24(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float DistanceToCameraHeuristic; // 0x0A20(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float FancyMeshEffectsTurnOffDistance; // 0x0A4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float FancyMeshEffectsTurnOnDistance; // 0x0A48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float FireDamage; // 0x0ABC(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float FireDamageTick; // 0x0AC0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float FireDistanceMaxValue; // 0x0A9C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float FireDistanceSmoothInterpSpeed; // 0x0AA0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float FireEnd; // 0x0AC4(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float FootstepEffectsMaxCameraDist; // 0x0960(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float FootstepLODDistance; // 0x095C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float FootstepSoundZOffset; // 0x09B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float FootstepVolumeModifierAlly; // 0x09D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float FootstepVolumeModifierViewTarget; // 0x09D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float HealthRegenDelay; // 0x0C14(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float HealthRegenTickRate; // 0x0C1C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float IsBurningSmoothInterpSpeed; // 0x0A98(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float IsBurningSmoothed; // 0x0778(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float JumpCooldown; // 0x0A7C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float KnockbackFlinch; // 0x0C54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float LODDeltaTime; // 0x08A8(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float LastFireDamageTime; // 0x0AC8(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float LastFlinchAdditiveTime; // 0x0D00(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float LastNonZeroVelocityTime; // 0x0A08(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float LastPossessionTime; // 0x0A54(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float LateLODDeltaTime; // 0x08AC(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float LocationLagInductionChangeSpeed; // 0x0B50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float LocationLagInductionCounterweight; // 0x0B54(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float LocationLagInductionTarget; // 0x0B4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float LookDownLimit; // 0x0AE4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float LookLagInductionChangeSpeed; // 0x0B88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float LookLagInductionCounterweight; // 0x0B8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float LookLagInductionTarget; // 0x0B84(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float LookSmoothingSlowAlpha; // 0x0B00(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float LookUpCapRemaining; // 0x0B1C(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float LookUpLimit; // 0x0AE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float LookUpRateCap; // 0x0B0C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float LookUpRateCapTarget; // 0x0B10(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float LookUpValue; // 0x078C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float LookUpValueSmoothingEndTime; // 0x0AFC(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float LookUpValueSmoothingFrom; // 0x0AF4(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float LookUpValueSmoothingStartTime; // 0x0AF8(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float LookUpValueSmoothingTarget; // 0x0AF0(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float MouseSmoothedLookUpValue; // 0x0844(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float MouseSmoothedTurnValue; // 0x083C(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float MouseSmoothingLookUpVelocity; // 0x0848(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float MouseSmoothingTurnVelocity; // 0x0840(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float OcclusionToCamera; // 0x0A28(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float OutOfBoundsKillTime; // 0x0C24(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float OutOfBoundsSince; // 0x076C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float RagdollFallingFromPerchRadius; // 0x0774(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float RagdollFallingGetUpDuration; // 0x0A58(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float RagdollFallingGetUpStartTime; // 0x0A5C(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float RagdollFallingMinTime; // 0x0A64(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float RagdollFallingMinVelocityToGetUp; // 0x0A68(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float RagdollFallingStartTime; // 0x0A60(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float RagdollFallingTimeAtMinVelocityToGetUp; // 0x0A6C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float RagdollForceMultIfDmgAgent; // 0x0D18(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float ReceivedDamageAbsorption; // 0x0C4C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float ReceivedDamageMax; // 0x0C50(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float ReceivedDamageModifier; // 0x0C38(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float ReceivedFallDamageModifier; // 0x0C3C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float ReceivedFireDamageModifier; // 0x0C44(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float ReceivedRangedDamageModifier; // 0x0C48(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float ReceivedTeamDamageModifier; // 0x0C40(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float ReflectMeleeDamagePercentage; // 0x0C2C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float SmokeDistanceMaxValue; // 0x0A88(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float SmokeDistanceSmoothInterpSpeed; // 0x0A8C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float SpawnTurnValue; // 0x0ADC(0x0004) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float TurnCapRemaining; // 0x0B18(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float TurnLimit; // 0x0AE8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float TurnRateCap; // 0x0B04(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float TurnRateCapTarget; // 0x0B08(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Floats")
		float ViewTargetAttenuationVolumeMultiplier; // 0x0CBC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Integers")
		int DamageArmorTierOverride; // 0x0A10(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Integers")
		int DedicatedServerAnimFrameSkipLOD; // 0x0CE0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, Config, GlobalConfig, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Integers")
		int FootstepArmorTier; // 0x09DC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Integers")
		int FootstepAudioComponentCount; // 0x0940(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Integers")
		int LODBucketLevel; // 0x0A40(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Integers")
		int LODRank; // 0x0A3C(0x0004) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Integers")
		int LastChanceHealAmount; // 0x0C34(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Integers")
		int UniqueAdvancedCharacterIndex; // 0x0838(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Structs")
		struct FNetDamage NetDamage; // 0x0C98(0x0020) (Net)
		//UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Structs")
		// struct FPrePhysTickFunction PrePhysTickFunction; // 0x0850(0x0058)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Vectors")
		struct FTransform MarkerWidgetRelativeTransform; // 0x0BB0(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Vectors")
		struct FVector AccumulatedLocationLag; // 0x0B2C(0x000C) (BlueprintVisible, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Vectors")
		struct FVector AccumulatedLookLag; // 0x0B64(0x000C) (BlueprintVisible, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Vectors")
		struct FVector DistanceToCameraMeshOffset; // 0x0A30(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Vectors")
		struct FVector FootstepDecalSize; // 0x0978(0x000C) (Edit, BlueprintVisible, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Vectors")
		struct FVector LastObservedLocation; // 0x0B20(0x000C) (IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Vectors")
		struct FVector LastObservedLook; // 0x0B58(0x000C) (IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Vectors")
		struct FVector MoveCompVelocityBeforeDeath; // 0x09FC(0x000C) (BlueprintVisible, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Vectors")
		struct FVector2D FootstepPitchVelocityRangeIn; // 0x09C4(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Vectors")
		struct FVector2D FootstepPitchVelocityRangeOut; // 0x09CC(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Vectors")
		struct FVector2D FootstepVolumeVelocityRangeIn; // 0x09B4(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Vectors")
		struct FVector2D FootstepVolumeVelocityRangeOut; // 0x09BC(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Bytes")
		uint8 Health; // 0x0C11(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Bytes")
		uint8 HealthRegenPerTick; // 0x0C18(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Bytes")
		uint8 ReplicatedCharacterFlags; // 0x0A51(0x0001) (BlueprintVisible, Net, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Bytes")
		uint8 ReplicatedHealth; // 0x0C12(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Bytes")
		uint8 ReplicatedLookUpValue; // 0x0AEC(0x0001) (BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "AdvChar|Bytes")
		uint8 Team; // 0x08D8(0x0001) (Edit, BlueprintVisible, Net, ZeroConstructor, EditConst, IsPlainOldData)

	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void UnHighlight();
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void TurnNotAbsolute(float Value);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void TurnAtRate(float Val);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void Turn(float Val, bool bIsAbsolute);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		bool Trip();
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		bool TraceSphericalLimbs(const struct FVector TraceStart, const struct FVector TraceEnd, struct FHitResult& OutResult);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void Suicide();
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void StopRegen(float ExtraTime);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void StopMontage(class UAnimMontage* Montage, float FadeOut);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void StopHealthRegen(float ExtraTime);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		void StopBurningCosmetic();

	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void StopAnim(float FadeOut);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void StartRagdollWithBlend(float BlendDuration);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void StartRagdoll();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		void StartBurningCosmetic();

	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void StartBurning(float Duration, float Damage, float Tick, class AActor* DamageAgent, class AController* InstigatorController);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		class UParticleSystemComponent* SpawnParticlesAttached(class UParticleSystem* Particle, const struct FVector& Location, const struct FRotator& Rotation, TEnumAsByte<EAttachLocation::Type> AttachType, const FName& Socket, bool bForce);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void SetOnSmoke(class AMasterField* SmokeField);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void SetOnFire(class AMasterField* FireField);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void SetMaxAnimBlendWeight(float MaxAmount, class UAnimMontage* Montage);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void SetLookLagInductionTarget(float Amount, float ChangeSpeed);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void SetLocationLagInductionTarget(float Amount, float ChangeSpeed);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void SetIsRagdollFalling(bool bInIsRagdollFalling);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void SetAnimRate(class UAnimMontage* Montage, float NewRate);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void SetAnimPosition(class UAnimMontage* Montage, float NewPosition);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void SetAdditiveOverrideType(const FName& NewType, float Duration);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		void ServerTrip();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		void ServerSuicide();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		void ServerLookUp(float NewLookUp);

	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void ResetLookLagInductionTarget();
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void ResetLocationLagInductionTarget();
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void ResetLagInductionTargets();
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void ResetAdditiveOverrideType();
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void RequestTrip();
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void RequestSuicide();
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void RequestMeshEnablePhysics(float Duration);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void RegisterMaterialToDissolve(class UMaterialInstanceDynamic* Mat);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		void ReceiveMordhauDamage(float Damage, const struct FHitResult& HitResult, EMordhauDamageType DamageType, uint8 SubDamageType, class AActor* Source, class AActor* Agent, class AController* EventInstigator);

	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		bool PlayHitEffectParticle(const struct FVector& Location, const struct FRotator& Rotation, const FName& bone, bool bFindOptimalSpot);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		class UAudioComponent* PlayCharacterSound(class USoundBase* Sound, const FName bone, const struct FVector InLocation, TEnumAsByte<EAttachLocation::Type> AttachLocation = EAttachLocation::SnapToTarget, bool bAttach = true, class USoundAttenuation* Override =nullptr, float VolumeMultiplier = 1.0f, float PitchMultiplier = 1.0f);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		class UAnimMontage* PlayAnim(class UAnimMontage* Montage, float PlayRate = 1.0f, bool bStopExistingMontages = false);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		void OnTookDamage(bool bWillKill, EMordhauDamageType Type, uint8 SubType, const FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		void OnRep_Team();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		void OnRep_SpawnTurnValue();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		void OnRep_ReplicatedLookUpValue();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		void OnRep_ReplicatedHealth();

	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void OnRep_ReplicatedCharacterFlags(uint8 OldValue);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void OnRep_NetDamage();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		void OnKilled(class AController* EventInstigator);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		void OnInteractionStart(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		void OnInteractionEnd();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		void OnHit(class AActor* Actor, const FName& bone, const struct FVector& WorldLocation, uint8 Tier, uint8 SurfaceType);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		void OnHighlightStart();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		void OnHighlightMaintained(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		void OnHighlightEnd();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		void OnHealthChanged();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		void OnExceededTimeOutOfBounds();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		void OnDied(float Angle, EMordhauDamageType Type, uint8 SubType, const FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		void OnCosmeticHit(EMordhauDamageType DamageType, uint8 SubType, const struct FHitResult& Hit, class AActor* Agent);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		void OnAfterDied(float Angle, EMordhauDamageType Type, uint8 SubType, const FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);

	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void OffsetHealth(int Amount, bool bReplicate = true);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void MoveRight(float Val);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void MoveForward(float Val);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		float MordhauTakeDamage(float DamageAmount, const struct FHitResult& Hit, EMordhauDamageType DamageType, uint8 DamageSubType, class AActor* Source, class AActor* Agent, class AController* EventInstigator);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		float ModifyDamage(float DamageAmount, const struct FMordhauDamageInfo& DamageInfo, class AController* EventInstigator);

	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void LookUpNotAbsolute(float Value);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void LookUpAtRate(float Val);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void LookUp(float Val, bool bIsAbsolute);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void LeftOutOfBoundsArea();
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		bool Knockback(const struct FVector& Amount);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AdvCharFns")
		bool IsViewTarget();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AdvCharFns")
		bool IsPlayerControlledIncludingVehicle();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AdvCharFns")
		bool IsOutOfBounds();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AdvCharFns")
		bool IsLocallyPlayerControlledIncludingVehicle();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AdvCharFns")
		bool IsLocallyPlayerControlled();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AdvCharFns")
		bool IsLocallyControlledOrUncontrolled();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AdvCharFns")
		bool IsLocallyControlledIncludingVehicle();
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		bool IsAnimActive(class UAnimMontage* Montage);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AdvCharFns")
		bool IsAirborne();
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void InteractionStart(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void InteractionEnd();
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void Highlight();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AdvCharFns")
		float GetRawLookUpValue();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AdvCharFns")
		float GetOutOfBoundsTimeUntilDeath();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AdvCharFns")
		class UMordhauMotion* GetMotion();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AdvCharFns")
		float GetLookUpValue();
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		EMordhauDamageType GetLastNetDamageType();
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		class AActor* GetLastNetDamageSource();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AdvCharFns")
		bool GetIsDead();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AdvCharFns")
		bool GetIsBurning();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AdvCharFns")
		float GetDistanceIntoSmokeFieldSmoothed();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AdvCharFns")
		float GetDistanceIntoSmokeField();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "AdvCharFns")
		class AController* GetControllerIncludingVehicle();
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		bool GetBestStickyLocation(const FVector InLocation, FVector& OutLocation, FVector& OutNormal, FName& OutBone);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns", meta = (AutoCreateRefTerm = "BoneName"))
		uint8 GetArmorTierForBone(const FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		float GetAnimWeight(class UAnimMontage* Montage);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		float GetAdditiveOverrideTypeNormalizedTime();
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		FName GetAdditiveOverrideType();
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void EnteredOutOfBoundsArea();
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void DouseFire();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		bool CanInteract(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		bool CanBleedOutFromHit(const struct FHitResult& HitResult, EMordhauDamageType Type, uint8 SubType, class AActor* Source, class AActor* Agent, class AController* EventInstigator);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		void BPLODTick(float DeltaTime);

	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		class UAudioComponent* BP_PlayCharacterSound(class USoundBase* Sound, const FName& bone, const struct FVector& Location, TEnumAsByte<EAttachLocation::Type> AttachLocation, bool bAttach);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void BoostAnimBlendWeight(float BoostAmount, class UAnimMontage* Montage);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void BeginFlinchAdditiveOverride(const FName& FlinchOverrideName, const FName& AltFlinchOverrideName, float Duration, float Degree, bool bIsHead, float SnapDegreeToSteps);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "AdvCharEvents")
		void ApplyRagdollForce(float Angle, EMordhauDamageType Type, uint8 SubType, const FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);

	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void AddWound(const struct FVector& ImpactPoint, const struct FVector& ImpactNormal, const FName& bone, class AActor* Agent, EMordhauDamageType DamageType, uint8 DamageSubType);
	UFUNCTION(BlueprintCallable, Category = "AdvCharFns")
		void AddTurnDegrees(float Delta);
};
