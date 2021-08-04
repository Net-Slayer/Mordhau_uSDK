// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine.h"
#include "Mordhau.h"
#include "MordhauSceneComponent.h"
#include "DamageableComponent.h"
#include "MordhauActor.generated.h"
/*UENUM(BlueprintType)
enum class EAttackMove : uint8
{
	RightStrike = 0,
	LeftStrike = 1,
	Stab = 2,
	AltStab = 3,
	Kick = 4,
	Bash = 5,
	Couch = 6,
	Ranged = 7,
	EAttackMove_MAX = 8
};
UENUM(BlueprintType)
enum class EMordhauDamageType : uint8
{
	Generic = 0,
	Melee = 1,
	Ranged = 2,
	Fall = 3,
	Fire = 4,
	EMordhauDamageType_MAX = 5
};*/
UCLASS()
class MORDHAU_API AMordhauActor : public AActor
{
	GENERATED_BODY()

public:

	//AMordhauActor();

	AMordhauActor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	// Sets default values for this actor's properties
	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	//UMordhauSceneComponent * RootSceneComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TWeakObjectPtr<class AMordhauPlayerController>     InstanceOwner;                                            // 0x0328(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8                                      ReplicatedThud;                                           // 0x0330(0x0001) (Net, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UDamageableComponent*                        DamageableComponent;                                      // 0x0338(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USoundCue*                                   ThudSound;                                                // 0x0340(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector2D                                   ThudPitchMultiplierRange;                                 // 0x0348(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector2D                                   ThudVolumeMultiplierRange;                                // 0x0350(0x0008) (Edit, BlueprintVisible, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bShouldReplicateThud;                                     // 0x0358(0x0001) (Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              ThudMinVelocity;                                          // 0x035C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              ThudMaxVelocity;                                          // 0x0360(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              MinDelayBetweenThuds;                                     // 0x0364(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              NoThudUntilTime;                                          // 0x0368(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bPreventClimbing;                                         // 0x0370(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               TeamkillsCountForAutoKick;                                // 0x0371(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FStat                                       KillsStat;                                                // 0x0378(0x0010) (Edit, BlueprintVisible)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bIgnoresBleedOut;                                         // 0x0388(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bForceLongDeathYell;                                      // 0x0389(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bReceiveCosmeticHits;                                     // 0x038A(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              RagdollForceMultiplier;                                   // 0x038C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bForceRagdollOnDeath;                                     // 0x0390(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     LastDamageLocation;                                       // 0x0394(0x000C) (BlueprintVisible, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     LastDamageNormal;                                         // 0x03A0(0x000C) (BlueprintVisible, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              ReplayPriorityFactor;                                     // 0x03AC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              InterpolationSmoothTime;                                  // 0x03B0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bSmoothNetworkMovement;                                   // 0x03B4(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FVector                                     SmoothedLocationOffset;                                   // 0x03B8(0x000C) (IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FQuat                                       SmoothedRotationOffset;                                   // 0x03D0(0x0010) (IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bNetworkMovementSmoothingCompleted;                       // 0x03E0(0x0001) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UClass*                                      InteractionWidgetComponentClass;                          // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UClass*                                      InteractionWidgetClass;                                   // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText                                       HeldInteractionText;                                      // 0x03F8(0x0018) (Edit, BlueprintVisible)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText                                       InteractionText;                                          // 0x0410(0x0018) (Edit, BlueprintVisible)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bNoInteractionWidgetWhenAttachedToChar;                   // 0x0428(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FTransform                                  InteractionWidgetRelativeTransform;                       // 0x0430(0x0030) (Edit, BlueprintVisible, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bAutoDetermineWidgetTransform;                            // 0x0460(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UMordhauWidgetComponent*                     InteractionWidgetComponent;                               // 0x0468(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bPerformCustomDepthHighlight;                             // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bIsHighlighted;                                           // 0x0471(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              MaxInteractWithDistance;                                  // 0x0474(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bIsInteractable;                                          // 0x0478(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bIsPassivelyInteractable;                                 // 0x0479(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              MaxInteractionHoldTime;                                   // 0x047C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              LastLocallyRequestedPassiveInteractionTime;               // 0x0480(0x0004) (ZeroConstructor, IsPlainOldData)

	UFUNCTION()
		void UpdateThudVelocity(float NewThudVelocity);
	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
		void UnHighlight();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauActorFns")
		void PostInteractionWidgetCreated();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauActorFns")
		void OnUsedToKillOther(class AAdvancedCharacter* Character, EMordhauDamageType Type, uint8 SubType, const FName& bone, const struct FVector& Point, class AActor* Source);
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void OnThud();
	UFUNCTION(BlueprintCallable)
		void OnRep_ReplicatedThud();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauActorFns")
		void OnReceiveCosmeticHit(class AActor* Source, class AActor* Agent, EAttackMove Move, const struct FHitResult& Hit);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauActorFns")
		void OnPostDismemberedOther(const FName& bone, class ASeparatedBodyPart* Part);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauActorFns")
		void OnLocalPlayerUsedToKillOther(class AAdvancedCharacter* Character, EMordhauDamageType Type, uint8 SubType, const FName& bone, const struct FVector& Point, class AActor* Source);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauActorFns")
		void OnInteractPassively(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauActorFns")
		void OnInteractionStart(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauActorFns")
		void OnInteractionMaintained(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauActorFns")
		void OnInteractionEnd();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauActorFns")
		void OnHighlightStart();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauActorFns")
		void OnHighlightMaintained(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauActorFns")
		void OnHighlightEnd();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauActorFns")
		void OnHeldInteractionStart(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "MordhauActorFns")
		bool IsAnyInstanceOwner(TArray<class AMordhauPlayerController*> ControllerArray);
	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
		void InteractPassively(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
		void InteractionStart(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
		void InteractionMaintained(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
		void InteractionEnd();
	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
		void Highlight();
	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
		void HeldInteractionStart(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauActorFns")
		bool CanInteractPassively(class AMordhauCharacter* Character) const;
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauActorFns")
		bool CanInteract(class AMordhauCharacter* Character) const;
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		bool CanHeldInteract(class AMordhauCharacter* Character) const;
};