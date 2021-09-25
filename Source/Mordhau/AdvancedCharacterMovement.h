// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "AdvancedCharacterMovement.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MORDHAU_API UAdvancedCharacterMovement : public UCharacterMovementComponent
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              LastFallingCheckVelocityZ;                                // 0x07C0(0x0004) (ZeroConstructor, IsPlainOldData)
// 	UPROPERTY(BlueprintReadWrite, EditAnywhere)
// 	bool                                               bEnableServerDualMoveScopedMovementUpdates;               // 0x07C4(0x0001) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UCrowdManager*                               CrowdManager;                                             // 0x07C8(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bUseMordhauRotationInterpMode;                            // 0x07D0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              BounceOffBumpForce;                                       // 0x07D4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              MordhauRotationSmoothStartTime;                           // 0x07D8(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              MordhauRotationSmoothEndTime;                             // 0x07DC(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FQuat                                       MordhauRotationSmoothFrom;                                // 0x07E0(0x0010) (IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              StillTimeWhileRagdollFalling;                             // 0x07F0(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              PerchRadiusThresholdRagdollFalling;                       // 0x07F4(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              MinVelocityForFallDamage;                                 // 0x07F8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              FallDamageOffset;                                         // 0x07FC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              FallDamageFactor;                                         // 0x0800(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              RagdollMinVelocityForFallDamage;                          // 0x0804(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              RagdollFallDamageOffset;                                  // 0x0808(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              RagdollFallDamageFactor;                                  // 0x080C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bReverseBackwardsTurning;                                 // 0x0810(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bUsePendingRotationToOrientMovement;                      // 0x0811(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector                                     PreviousVelocity;                                         // 0x0814(0x000C) (BlueprintVisible, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              PendingTurnValue;                                         // 0x0820(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bIgnoreMovementInput;                                     // 0x0824(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<uint8>                              ChildrenSkipperCachedArray;                               // 0x0830(0x0010) (ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector                                     OffsetMeshTranslation;                                    // 0x0840(0x000C) (IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector                                     OffsetExtrapolation;                                      // 0x084C(0x000C) (IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector                                     OffsetExtrapolationTarget;                                // 0x0858(0x000C) (IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector                                     OffsetCorrectionLeftover;                                 // 0x0864(0x000C) (IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector                                     OffsetNetSmoothLeftover;                                  // 0x0870(0x000C) (IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector                                     OffsetNetSmoothPending;                                   // 0x087C(0x000C) (IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector                                     MovementComponentMeshOffset;                              // 0x0888(0x000C) (IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              AuthNetSmoothTime;                                        // 0x0894(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              AuthNetMaxSmoothDist;                                     // 0x0898(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bDisableAuthNetSmoothing;                                 // 0x089C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int                                                SkipPredictionForAnimTickSkipOrGreater;                   // 0x08A0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	
	
	
};
