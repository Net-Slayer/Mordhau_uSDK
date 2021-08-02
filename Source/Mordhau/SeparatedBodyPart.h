// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Mordhau.h"
#include "SeparatedBodyPart.generated.h"

UCLASS()
class MORDHAU_API ASeparatedBodyPart : public AActor
{
	GENERATED_BODY()
	
public:	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class ULODSkeletalMeshComponent*                   Mesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class USkeletalMesh*                               SkeletalMeshAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TWeakObjectPtr<class APhysicsConstraintActor>      PhysicsConstraintActor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TWeakObjectPtr<class AAdvancedCharacter>           SourceCharacter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UPhysicsAsset*                               HeadPhysicsAsset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UPhysicsAsset*                               LeftArmPhysicsAsset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UPhysicsAsset*                               LeftForearmPhysicsAsset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UPhysicsAsset*                               LeftHandPhysicsAsset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UPhysicsAsset*                               RightArmPhysicsAsset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UPhysicsAsset*                               RightForearmPhysicsAsset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UPhysicsAsset*                               RightHandPhysicsAsset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UPhysicsAsset*                               LeftUpLegPhysicsAsset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UPhysicsAsset*                               LeftLegPhysicsAsset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UPhysicsAsset*                               LeftFootPhysicsAsset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UPhysicsAsset*                               RightUpLegPhysicsAsset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UPhysicsAsset*                               RightLegPhysicsAsset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UPhysicsAsset*                               RightFootPhysicsAsset;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UClass*                                      InGoreMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UClass*                                      InGoreMeshBlunt;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UClass*                                      InGoreMeshHead;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName                                       FakeRootBone;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
TArray<class AActor*>               InstancedGoreMeshes;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "SeparatedBodyPartEvents")
	void OnCosmeticHit(EMordhauDamageType DamageType, uint8 SubType, const struct FHitResult& Hit, class AActor* Agent);
	UFUNCTION(BlueprintCallable, Category = "SeparatedBodyPartFns")
	bool IsPartiallyDismembered();
	UFUNCTION(BlueprintCallable, Category = "SeparatedBodyPartFns")
	bool IsDismembered(const FName& bone);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "SeparatedBodyPartEvents")
	void InitializeDismemberment(class AMordhauCharacter* Source, const FName& bone, const struct FTransform& SourceBoneTransform, bool bIsPartial, bool bIsBluntForce);
};