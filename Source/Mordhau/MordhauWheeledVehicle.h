// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauCompoundVehicle.h"
#include "MordhauWheeledVehicle.generated.h"

/**
 *
 */
UCLASS(Blueprintable)
class MORDHAU_API AMordhauWheeledVehicle : public AMordhauCompoundVehicle
{
	GENERATED_BODY()


public:

	AMordhauWheeledVehicle(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	struct FVector2D                                   PreviousRotation;                                          // 0x0DD8(0x0008) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D                                   RotationVelocity;                                          // 0x0DE0(0x0008) (IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName                                       MoveSoundAttachSocket;                                     // 0x0DE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              MoveSoundFadeOut;                                          // 0x0DF0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D                                   MinRotationVelocityToPlayMoveSound;                        // 0x0DF4(0x0008) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector                                     MinTranslationVelocityToPlayMoveSound;                     // 0x0DFC(0x000C) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D                                   RotationVelocityInterpSpeed;                               // 0x0E08(0x0008) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FVector2D                                   RotationVelocityMax;                                       // 0x0E10(0x0008) (Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName                                       LeftHandIKPushTarget;                                      // 0x0E18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FName                                       RightHandIKPushTarget;                                     // 0x0E20(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USoundCue*                                   MoveSoundCue;                                              // 0x0E28(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY()
	TWeakObjectPtr<class UAudioComponent>              LastMoveSound;                                             // 0x0E30(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

};
