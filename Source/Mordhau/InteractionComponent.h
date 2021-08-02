// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "InteractionComponent.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class MORDHAU_API UInteractionComponent : public UBoxComponent
{
	GENERATED_BODY()
	
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class UMeshComponent*>                      VisualMeshComponents;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsInteractable;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsHighlighted;

	UFUNCTION(BlueprintCallable, Category = "InteractionComponentFns")
	void UnHighlight();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "InteractionComponentEvents")
	void OnInteractionStart(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "InteractionComponentEvents")
	void OnInteractionEnd();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "InteractionComponentEvents")
	void OnHighlightStart();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "InteractionComponentEvents")
	void OnHighlightEnd();
	UFUNCTION(BlueprintCallable, Category = "InteractionComponentFns")
	void InteractionStart(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "InteractionComponentFns")
	void InteractionEnd();
	UFUNCTION(BlueprintCallable, Category = "InteractionComponentFns")
	void Highlight();
	UFUNCTION(BlueprintCallable, Category = "InteractionComponentFns")
	bool CanInteract(class AAdvancedCharacter* Character);
};
