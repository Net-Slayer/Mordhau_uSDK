// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "Components/ActorComponent.h"
#include "EquipmentSystemComponent.generated.h"

/**
 *
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MORDHAU_API UEquipmentSystemComponent : public UActorComponent {

	GENERATED_BODY()
public:

	UPROPERTY()
	TArray<TWeakObjectPtr<class AMordhauEquipment>>    PrevReplicatedEquipment;                                  // 0x0100(0x0010) (ZeroConstructor)
	UPROPERTY()
	TWeakObjectPtr<class AMordhauEquipment>            PrevReplicatedLeftHandEquipment;                          // 0x0110(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY()
	TWeakObjectPtr<class AMordhauEquipment>            PrevReplicatedRightHandEquipment;                         // 0x0118(0x0008) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UStaticMeshComponent*                        QuiverStaticMeshComponent;                                // 0x0120(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              DeathEquipmentRagdollAngularFactor;                       // 0x0128(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              DeathEquipmentRagdollTranslationalFactor;                 // 0x012C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	UFUNCTION(BlueprintCallable)
	void OnUnPossessed(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable)
	void OnPreBeginPlay(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable)
	void OnLODTick(float DeltaTime);
	UFUNCTION(BlueprintCallable)
	void OnLateTick(float DeltaTime);
	UFUNCTION(BlueprintCallable)
	void OnCharacterVehicleChanged(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable)
	void OnCharacterCameraStyleChanged(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable)
	void OnAnyEquipmentStateChanged();


};