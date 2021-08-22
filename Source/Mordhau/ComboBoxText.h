// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/Widget.h"
#include "Mordhau.h"
//#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
//#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
#include "ComboBoxText.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UComboBoxText : public UWidget
{
	GENERATED_BODY()
	
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FText>                               DefaultOptions;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText                                       SelectedOption;
	/*
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FComboBoxStyle                              WidgetStyle;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FTableRowStyle                              ItemStyle;*/
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//struct FMargin                                     ContentPadding;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MaxListHeight;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               HasDownArrow;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               EnableGamepadNavigationMode;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//struct FSlateFontInfo                              Font;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//FSlateColor                                 ForegroundColor;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsFocusable;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//struct FScriptDelegate                             OnGenerateWidgetEvent;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate                    OnSelectionChanged;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate                    OnOpening;
	

	UFUNCTION(BlueprintCallable, Category = "ComboBoxFns")
	void SetSelectedOption(const FText& Option);
	UFUNCTION(BlueprintCallable, Category = "ComboBoxFns")
	bool RemoveOption(const FText& Option);
	UFUNCTION(BlueprintCallable, Category = "ComboBoxFns")
	void RefreshOptions();
	UFUNCTION(BlueprintCallable, Category = "ComboBoxFns")
	void OnOpeningEvent__DelegateSignature();
	UFUNCTION(BlueprintCallable, Category = "ComboBoxFns")
	FText GetSelectedOption();
	UFUNCTION(BlueprintCallable, Category = "ComboBoxFns")
	int GetOptionCount();
	UFUNCTION(BlueprintCallable, Category = "ComboBoxFns")
	FText GetOptionAtIndex(int Index);
	UFUNCTION(BlueprintCallable, Category = "ComboBoxFns")
	int FindOptionIndex(const FText& Option);
	UFUNCTION(BlueprintCallable, Category = "ComboBoxFns")
	void ClearSelection();
	UFUNCTION(BlueprintCallable, Category = "ComboBoxFns")
	void ClearOptions();
	UFUNCTION(BlueprintCallable, Category = "ComboBoxFns")
	void AddOption(const FText& Option);






};
