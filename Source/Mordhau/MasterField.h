// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MasterField.generated.h"

UCLASS()
class MORDHAU_API AMasterField : public AActor
{
	GENERATED_BODY()
	
public:	
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MasterFieldFloats")
float                                              CreatedTime;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MasterFieldFloats")
float                                              DeactivatedTime;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MasterFieldFloats")
float                                              FieldLifeTime;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MasterFieldFloats")
float                                              FieldDeactivationTime;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MasterFieldFloats")
float                                              FieldFadeOutTime;
	 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MasterFieldFloats")
float                                              DeactivationStartedTime;
 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MasterFieldBools")
bool                                               bAreSubfieldsHidden;
 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MasterFieldBools")
bool                                               bIsFieldActive;
 UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MasterFieldBools")
bool                                               bHasBegunDeactivation;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
TArray<class UFieldSpawnComponent*>                SubFieldSpawns;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
TArray<class ASubField*>            SubFields;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
struct FBox                                        CombinedBoundsBox;


 UPROPERTY(EditAnywhere, BlueprintReadWrite)
TArray<class UClass*>                              CollisionFilter;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
TMap<class AActor*, int>                           ActorPresenceTickCount;



 UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MasterFieldEvents")
void UpdateField();
 UFUNCTION(BlueprintCallable, Category = "MasterFieldFunctions")
void SetSubFieldsHidden(bool bAreHidden);
UFUNCTION(BlueprintCallable, Category = "MasterFieldFunctions")
void RecomputeCombinedBoundingBox();
UFUNCTION(BlueprintCallable, Category = "MasterFieldFunctions")
void GetSubFields(TArray<class ASubField*>& ReturnValue);
struct FVector GetFieldBoundsCenter();
UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MasterFieldEvents")
void DeactivateAndDestroyField();
UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MasterFieldEvents")
void CreateField();
UFUNCTION(BlueprintCallable, Category = "MasterFieldFunctions")
float ComputeDistanceIntoField(const struct FVector& Location);
UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MasterFieldEvents")
void BeginFieldDeactivation();



};