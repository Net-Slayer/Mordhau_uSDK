// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "UObject/NoExportTypes.h"
#include "MeleeWeaponAnimationProfile.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UMeleeWeaponAnimationProfile : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	TMap<EAttackMove, class UClass*> Attacks;  //(Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UClass* ParryMotion; // 0x0078(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UAnimSequence* RightStabBounce; // 0x0080(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UAnimSequence* LeftStabBounce; // 0x0088(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UAnimSequence* RightStabBounce1P; // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UAnimSequence* LeftStabBounce1P; // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UAnimSequence* RightStrikeBounce; // 0x00A0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UAnimSequence* LeftStrikeBounce; // 0x00A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UAnimSequence* RightStrikeBounce1P; // 0x00B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite,EditAnywhere)
	class UAnimSequence* LeftStrikeBounce1P; // 0x00B8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	
};