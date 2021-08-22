// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "Components/ActorComponent.h"
#include "InteractionSystemComponent.generated.h"

/**
 *
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MORDHAU_API UInteractionSystemComponent : public UActorComponent {
	GENERATED_BODY()
public:

	UPROPERTY()
		TWeakObjectPtr<class AActor>                       RequestedInteractionTarget;                               // 0x00F8(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                NumberOfSweeps;                                           // 0x0100(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                SweepSphereRadius;                                        // 0x0104(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                SweepRadius;                                              // 0x0108(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bDrawAllSections;                                         // 0x010C(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	UFUNCTION(BlueprintCallable)
		void OnUnPossessed(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable)
		void OnLODTick(float DeltaTime);
	UFUNCTION(BlueprintCallable)
		void OnLateTick(float DeltaTime);
	UFUNCTION(BlueprintCallable)
		void OnCharacterDestroyed(class AAdvancedCharacter* Character);
};