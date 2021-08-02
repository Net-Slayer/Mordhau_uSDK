// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "LODSkeletalMeshComponent.h"
#include "CharacterMeshComponent.generated.h"

/**
 *
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MORDHAU_API UCharacterMeshComponent : public ULODSkeletalMeshComponent {
	GENERATED_BODY()
public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 MaxWounds; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(Export, VisibleAnywhere)
		TArray<class USkeletalMeshComponent*> BloodReceivingSkeletalMeshes; //(BlueprintVisible, ExportObject, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName BloodIntensityParamName; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UPhysicsAsset* RagdollFallingFromPhysicsAsset; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName RagdollFallingProfileName; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UPhysicsAsset* RagdollFallingPhysicsAsset; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float RagdollFallingBlendOutSpeed; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector RagdollFallingApplyForce; //(Edit, BlueprintVisible, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector RagdollFallingApplyForceAir; //(Edit, BlueprintVisible, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName RagdollFallingApplyForceBoneName; //(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY()
		TArray<TWeakObjectPtr<class UMaterialInstanceDynamic>> DissolveMaterialInstances; //(ZeroConstructor)

	UFUNCTION(BlueprintCallable)
		void OnCharacterStoppedRagdollFalling();
	UFUNCTION(BlueprintCallable)
		void OnCharacterStartedRagdollFalling();
	UFUNCTION(BlueprintCallable)
		void OnCharacterLODTick(float DeltaTime);
	UFUNCTION(BlueprintCallable)
		void OnCharacterDied(class AAdvancedCharacter* Character);
};
