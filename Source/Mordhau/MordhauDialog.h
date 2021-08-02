// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MordhauDialog.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UMordhauDialog : public UUserWidget
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauDialogEvents")
		void Show();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauDialogEvents")
		void Hide();

	
};
