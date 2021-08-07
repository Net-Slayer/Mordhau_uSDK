#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "Engine.h"
#include "Engine/EngineTypes.h"
#include "ECSActor.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class MORDHAU_API AECSActor : public AActor
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
		int TotalCharacters; //(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
		struct FVector PlaneTopLeft; //(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
		struct FVector PlaneBottomRight; //(Edit, BlueprintVisible, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
		float MoveVelocityMax; //(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
		int AnimTicksPerFrame; //(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
		class USkeletalMesh* SkeletalMesh; //(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
		TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled; //(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
		class UPhysicsAsset* PhysicsAsset; //(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
		class UClass* AnimInstance; //(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	UPROPERTY(Export)
		TArray<class UECSSkeletalMeshComponent*> SkeletalMeshComponents; //(ExportObject, ZeroConstructor)
	UPROPERTY()
		TArray<struct FCharPhysics> CharPhysics; //(ZeroConstructor)
	UPROPERTY()
		TArray<struct FCharMove> CharMove; //(ZeroConstructor)
	UPROPERTY()
		TArray<class ACharacter*> ManagedCharacters; //(ZeroConstructor)
	UPROPERTY()
		TArray<struct FCharPhysics> ManagedCharPhysics; //(ZeroConstructor)
	UPROPERTY()
		TArray<struct FCharMove> ManagedCharMove; //(ZeroConstructor)
// 	UPROPERTY()
// 		struct FECSDuringPhysicsTickFunction DuringPhysicsTickFunction;
// 	UPROPERTY()
// 		struct FECSPostPhysicsTickFunction PostPhysicsTickFunction;
	UFUNCTION(BlueprintCallable)
		void AddManagedCharacter(class ACharacter* Character);
};
