// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "Engine.h"
#include "MotionSystemComponent.generated.h"

/**
 *
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MORDHAU_API UMotionSystemComponent : public UActorComponent {
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MotionFOVOffsetZeroSpeed;                                 // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FNetMotion                                  NetMotion;                                                // 0x0104(0x0006)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<struct FNetMotion>                          UnconfirmedMotionsBacklog;                                // 0x0110(0x0010) (ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FNetMotion                                  LocallyPredictedNetMotion;                                // 0x0122(0x0006)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UMordhauMotion*                              Motion;                                                   // 0x0128(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UParryMotion*                                LastParryMotion;                                          // 0x0130(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UFlinchMotion*                               LastFlinchMotion;                                         // 0x0138(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UFeintedMotion*                              LastFeintedMotion;                                        // 0x0140(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UAttackMotion*                               LastAttackMotion;                                         // 0x0148(0x0008) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UEmoteMotion*                                LastEmoteMotion;                                          // 0x0150(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TMap<EAttackMove, class UClass*>                   AttackMotions;                                            // 0x0158(0x0050) (Edit, BlueprintVisible, ZeroConstructor)

	UFUNCTION(BlueprintCallable)
		void OnServerAssignNetMotion(const struct FNetMotion& NewNetMotion, uint8 LastAuthObserved);
	UFUNCTION(BlueprintCallable)
		void OnPreBeginPlay(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable)
		void OnLODTick(float DeltaTime);
	UFUNCTION(BlueprintCallable)
		void OnLateTick(float DeltaTime);
	UFUNCTION(BlueprintCallable)
		void OnClientSetNetMotion(const struct FNetMotion& NewMotion, float ServerStartTime);
};
