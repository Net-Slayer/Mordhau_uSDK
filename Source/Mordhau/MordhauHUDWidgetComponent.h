#pragma once
// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "Engine.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Actor.h"
#include "MordhauHUDWidgetComponent.generated.h"

/**
 *
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MORDHAU_API UMordhauHUDWidgetComponent : public UActorComponent {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere)
	bool                                               bCreateOnBeginPlay;                                        // 0x00B0(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(EditAnywhere)	
	bool                                               bShowOnBeginPlay;                                          // 0x00B1(0x0001) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY()
	class UClass* WidgetBPReference;                                         // 0x00B8(0x0008) (Edit, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(EditAnywhere, Export, Instanced)
	class UUserWidget* Widget;                                                    // 0x00C0(0x0008) (Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	UPROPERTY(EditAnywhere)
	bool                                               bIsPendingToShow;                                          // 0x00C8(0x0001) (Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	
	UFUNCTION(BlueprintCallable)
	bool ShowWidget();
	UFUNCTION(BlueprintCallable)
	void RemoveWidget();
	UFUNCTION()
	void OnCharacterOwnerEndViewTarget(class AAdvancedCharacter* CharacterOwner);
	UFUNCTION()
	void OnCharacterOwnerBecomeViewTarget(class AAdvancedCharacter* CharacterOwner);
	UFUNCTION(BlueprintCallable)
	void InstantiateWidget();
	UFUNCTION(BlueprintCallable)
	void HideWidget();
	UFUNCTION(BlueprintCallable)
	class UUserWidget* GetHUDWidget();
};