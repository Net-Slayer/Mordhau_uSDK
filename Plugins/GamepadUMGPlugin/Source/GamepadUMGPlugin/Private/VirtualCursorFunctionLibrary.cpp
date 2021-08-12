/*
	This code was written by Nick Darnell
	
	Plugin created by Rama
*/
#include "GamepadUMGPluginPrivatePCH.h"
#include "GamepadCursorSettings.h"
#include "GameAnalogCursor.h"
#include "VirtualCursorFunctionLibrary.h"

void UVirtualCursorFunctionLibrary::EnableVirtualCursor(class APlayerController* PC)
{
	FGameAnalogCursor::EnableAnalogCursor(PC, TSharedPtr<SWidget>());
}

void UVirtualCursorFunctionLibrary::DisableVirtualCursor(class APlayerController* PC)
{
	FGameAnalogCursor::DisableAnalogCursor(PC);
}

void UVirtualCursorFunctionLibrary::CustomSetInputModeUIOnly(APlayerController * PlayerController, UWidget * InWidgetToFocus, EMouseLockMode InMouseLockMode)
{
}

void UVirtualCursorFunctionLibrary::CustomSetInputModeGameOnly(APlayerController * PlayerController)
{
}

void UVirtualCursorFunctionLibrary::CustomSetInputModeGameAndUI(APlayerController * PlayerController, UWidget * InWidgetToFocus, EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture)
{
}

bool UVirtualCursorFunctionLibrary::IsCursorOverInteractableWidget()
{
	TSharedPtr<FGameAnalogCursor> Analog = GetDefault<UGamepadCursorSettings>()->GetAnalogCursor();
	if ( Analog.IsValid() )
	{
		return Analog->IsHovered();
	}

	return false;
}

bool UVirtualCursorFunctionLibrary::IsHoveringNewWidget()
{
	return false;
}

FKey UVirtualCursorFunctionLibrary::GetLastKeyPressed()
{
	return FKey();
}

TEnumAsByte<EInputMode> UVirtualCursorFunctionLibrary::GetLastCustomInputMode()
{
	return TEnumAsByte<EInputMode>();
}

bool UVirtualCursorFunctionLibrary::GetIsUsingController()
{
	return false;
}

bool UVirtualCursorFunctionLibrary::GetHoveredWidgetPosition(FVector2D & Position)
{
	return false;
}

FName UVirtualCursorFunctionLibrary::GetHoveredWidgetName()
{
	return FName();
}

void UVirtualCursorFunctionLibrary::FlushLastKeyPressed()
{
}
