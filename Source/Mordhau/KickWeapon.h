// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "VirtualWeapon.h"
#include "KickWeapon.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API AKickWeapon : public AVirtualWeapon
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           KickAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           KickRiposteAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequenceBase*                           KickComboAnimation;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                KickBounce;
	
	
};
