// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "Components/ActorComponent.h"
#include "DamageableComponent.generated.h"

/**
 *
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MORDHAU_API UDamageableComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TWeakObjectPtr<class AActor>                       LastDamageAgent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TWeakObjectPtr<class AActor>                       LastDamageSource;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TWeakObjectPtr<class AController>                  LastDamageInstigator;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              TeamDamageModifier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              FireDamageModifier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              FallDamageModifier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              RangedDamageModifier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              DamageModifier;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              MaxDamage;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float DamageAbsorption;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              SpawnProtectionDuration;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TEnumAsByte<EPhysicalSurface>                      Surface;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool                                               bStopsMeleeAttacks;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		struct FNetDamage                                  NetDamage;

	UFUNCTION(BlueprintCallable, Category = "DamageableComponentFns")
		void OnTookDamage(bool bWillKill, EMordhauDamageType Type, uint8 SubType, const FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	UFUNCTION(BlueprintCallable, Category = "DamageableComponentFns")
		float OnTakeDamage(float DamageAmount, const struct FMordhauDamageInfo& DamageInfo, class AController* EventInstigator, class AActor* DamageCauser);
	UFUNCTION(BlueprintCallable, Category = "DamageableComponentFns")
		void OnRep_NetDamage();
	UFUNCTION(BlueprintCallable, Category = "DamageableComponentFns")
		void OnPostTakeDamage(float DamageAmount, const struct FMordhauDamageInfo& DamageInfo, class AController* EventInstigator, class AActor* DamageCauser);
	UFUNCTION(BlueprintCallable, Category = "DamageableComponentFns")
		void OnKilled();
	UFUNCTION(BlueprintCallable, Category = "DamageableComponentFns")
		float ModifyDamage(float DamageAmount, const struct FMordhauDamageInfo& DamageInfo, class AController* EventInstigator, class AActor* DamageCauser);
};