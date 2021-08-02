// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MordhauUserWidget.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UMordhauUserWidget : public UUserWidget
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMordhauWidgetComponent*                     ParentWidgetComponent;
	
	
	
};
