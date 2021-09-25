#pragma once
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Mordhau.h"
#include "Components/ActorComponent.h"
#include "BuildingSystemComponent.generated.h"

/**
 *
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MORDHAU_API UBuildingSystemComponent : public UActorComponent {
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FSpawnableObjectInfo> SpawnableObjects;			// 0x00B0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UBuildableTraceBase*> TraceList;					// 0x00C0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced)
	class UMeshComponent* PreviewMeshComponent;						// 0x00D0(0x0008) (Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UMaterial* PreviewMaterial;								// 0x00D8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool bShowPreview;												// 0x00E0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Instanced)
	class UMordhauHUDWidgetComponent* MordhauHUDWidgetComponent;	// 0x00E8(0x0008) (Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

// 	UPROPERTY(BlueprintReadWrite, EditAnywhere)
// 	struct FScriptMulticastDelegate OnMeshPreviewCreated;			// 0x00F0(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
// 	UPROPERTY(BlueprintReadWrite, EditAnywhere)
// 	struct FScriptMulticastDelegate OnMeshPreviewDestroyed;			// 0x0100(0x0010) (ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)




	UFUNCTION(BlueprintCallable)
	bool ValidateSpot(const struct FVector Offset, struct FVector& OutLocation, struct FRotator& OutRotation, class USceneComponent*& AttachToComponent, class UBuildableTraceBase*& BuildableTraceHit, int SpawnableObjectIndex, bool bDrawObjectPreview);
	UFUNCTION(BlueprintCallable)
	void SetupMeshPreview() const;
	UFUNCTION(BlueprintCallable)	
	int GetEquipmentPlaceableMaxLimit(int SpawnableObjectIndex);
	UFUNCTION(BlueprintCallable)	
	FName GetEquipmentPlaceableLimitName(int SpawnableObjectIndex);
	UFUNCTION(BlueprintCallable)	
	struct FSpawnableObjectInfo GetEquipmentInfo(int SpawnableObjectIndex);
	UFUNCTION(BlueprintCallable)	
	FName GetEquipmentDisplayName(int SpawnableObjectIndex);
	UFUNCTION(BlueprintCallable)
	int GetEquipmentAmmoCost(int SpawnableObjectIndex);
	UFUNCTION()
	void DisplayPreview(bool bDrawObjectPreview, bool bIsValid, const struct FSpawnableObjectInfo& ObjectInfo, const struct FTransform& ObjectTransform, int SpawnableObjectIndex);
	UFUNCTION(BlueprintCallable)
	void DestroyMeshPreview();
	UFUNCTION(BlueprintCallable)
	void AddStaticMeshPreviewIfNone(class UStaticMesh* StaticMesh);
	UFUNCTION(BlueprintCallable)
	void AddSkeletalMeshPreviewIfNone(class USkeletalMesh* SkeletalMesh);


};