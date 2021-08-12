/*
	This code was written by Nick Darnell
	
	Plugin created by Rama
*/
#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "Mordhau/Mordhau.h"
#include "Engine.h"
#include "VirtualCursorFunctionLibrary.generated.h"
  
/**
 * 
 */
UCLASS()
class GAMEPADUMGPLUGIN_API UVirtualCursorFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	
	UFUNCTION(BlueprintCallable, Category="Game")
	static void EnableVirtualCursor(class APlayerController* PC);

	UFUNCTION(BlueprintCallable, Category = "Game")
	static void DisableVirtualCursor(class APlayerController* PC);

	UFUNCTION(BlueprintPure, Category="Game")
	static bool IsCursorOverInteractableWidget();

	//Custom Mordhau Functions

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Custom(Mordhau)")
	static bool IsHoveringNewWidget();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Custom(Mordhau)")
	static struct FKey GetLastKeyPressed();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Custom(Mordhau)")
	static TEnumAsByte<EInputMode> GetLastCustomInputMode();
	UFUNCTION(BlueprintCallable, Category = "Custom(Mordhau)")
	static bool GetIsUsingController();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Custom(Mordhau)")
	static bool GetHoveredWidgetPosition(struct FVector2D& Position);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Custom(Mordhau)")
	static FName GetHoveredWidgetName();
	UFUNCTION(BlueprintCallable, Category = "Custom(Mordhau)")
	static void FlushLastKeyPressed();
	UFUNCTION(BlueprintCallable, Category = "Custom(Mordhau)")
	static void CustomSetInputModeUIOnly(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode);
	UFUNCTION(BlueprintCallable, Category = "Custom(Mordhau)")
	static void CustomSetInputModeGameOnly(class APlayerController* PlayerController);
	UFUNCTION(BlueprintCallable, Category = "Custom(Mordhau)")
	static void CustomSetInputModeGameAndUI(class APlayerController* PlayerController, class UWidget* InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture);



};
