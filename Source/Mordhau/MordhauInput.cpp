// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauInput.h"

void UMordhauInput::SetToggleSprint(int NewToggleSprint)
{
}

void UMordhauInput::SetMouseYSensitivity(float NewSensitivity)
{
}

void UMordhauInput::SetMouseYInverted(bool bNewInverted)
{
}

void UMordhauInput::SetMouseXSensitivity(float NewSensitivity)
{
}

void UMordhauInput::SetMouseXIsFlipAttackSide(int NewIsFlipAttackSide)
{
}

void UMordhauInput::SetMouseXInverted(bool bNewInverted)
{
}

void UMordhauInput::SetInverseAttackDirectionY(int NewInverseAttackDirectionX)
{
}

void UMordhauInput::SetInverseAttackDirectionX(int NewInverseAttackDirectionX)
{
}

void UMordhauInput::SetGamepadRightYSensitivity(float NewSensitivity)
{
}

void UMordhauInput::SetGamepadRightYInverted(bool bNewInverted)
{
}

void UMordhauInput::SetGamepadRightYDeadzone(float NewDeadzone)
{
}

void UMordhauInput::SetGamepadRightXSensitivity(float NewSensitivity)
{
}

void UMordhauInput::SetGamepadRightXInverted(bool bNewInverted)
{
}

void UMordhauInput::SetGamepadRightXDeadzone(float NewDeadzone)
{
}

void UMordhauInput::SetGamepadLeftYSensitivity(float NewSensitivity)
{
}

void UMordhauInput::SetGamepadLeftYInverted(bool bNewInverted)
{
}

void UMordhauInput::SetGamepadLeftYDeadzone(float NewDeadzone)
{
}

void UMordhauInput::SetGamepadLeftXSensitivity(float NewSensitivity)
{
}

void UMordhauInput::SetGamepadLeftXInverted(bool bNewInverted)
{
}

void UMordhauInput::SetGamepadLeftXDeadzone(float NewDeadzone)
{
}

void UMordhauInput::SetControlScheme(int NewControlScheme)
{
}

void UMordhauInput::SetAngleAttacksWithMovement(int NewAngleAttacksWithMovement)
{
}

void UMordhauInput::SetAngleAttackAfterPress(int NewAngleAttackAfterPress)
{
}

void UMordhauInput::SaveSettings()
{
}

void UMordhauInput::RestoreDefaultSettings()
{
}

int UMordhauInput::GetToggleSprint()
{
	return 0;
}

FInputAxisKeyMapping UMordhauInput::GetSecondaryAxisKeyBinding(const FName & AxisName)
{
	return FInputAxisKeyMapping();
}

FInputActionKeyMapping UMordhauInput::GetSecondaryActionKeyBinding(const FName & ActionName)
{
	return FInputActionKeyMapping();
}

FInputAxisKeyMapping UMordhauInput::GetPrimaryAxisKeyBinding(const FName & AxisName)
{
	return FInputAxisKeyMapping();
}

FInputActionKeyMapping UMordhauInput::GetPrimaryActionKeyBinding(const FName & ActionName)
{
	return FInputActionKeyMapping();
}

float UMordhauInput::GetMouseYSensitivity() const
{
	return 0.0f;
}

bool UMordhauInput::GetMouseYInverted() const
{
	return false;
}

float UMordhauInput::GetMouseXSensitivity() const
{
	return 0.0f;
}

int UMordhauInput::GetMouseXIsFlipAttackSide() const
{
	return 0;
}

bool UMordhauInput::GetMouseXInverted() const
{
	return false;
}

FVector2D UMordhauInput::GetMouseSensitivityLimits() const
{
	return FVector2D();
}

int UMordhauInput::GetInverseAttackDirectionY() const
{
	return 0;
}

int UMordhauInput::GetInverseAttackDirectionX() const
{
	return 0;
}

FVector2D UMordhauInput::GetGamepadSensitivityLimits() const
{
	return FVector2D();
}

float UMordhauInput::GetGamepadRightYSensitivity() const
{
	return 0.0f;
}

bool UMordhauInput::GetGamepadRightYInverted() const
{
	return false;
}

float UMordhauInput::GetGamepadRightYDeadzone() const
{
	return 0.0f;
}

float UMordhauInput::GetGamepadRightXSensitivity() const
{
	return 0.0f;
}

bool UMordhauInput::GetGamepadRightXInverted() const
{
	return false;
}

float UMordhauInput::GetGamepadRightXDeadzone() const
{
	return 0.0f;
}

float UMordhauInput::GetGamepadLeftYSensitivity() const
{
	return 0.0f;
}

bool UMordhauInput::GetGamepadLeftYInverted() const
{
	return false;
}

float UMordhauInput::GetGamepadLeftYDeadzone() const
{
	return 0.0f;
}

float UMordhauInput::GetGamepadLeftXSensitivity() const
{
	return 0.0f;
}

bool UMordhauInput::GetGamepadLeftXInverted() const
{
	return false;
}

float UMordhauInput::GetGamepadLeftXDeadzone() const
{
	return 0.0f;
}

FVector2D UMordhauInput::GetGamepadDeadzoneLimits() const
{
	return FVector2D();
}

int UMordhauInput::GetControlScheme() const
{
	return 0;
}

void UMordhauInput::GetConsoleKeyBindings(TArray<struct FKey> & ConsoleKeyBindings)
{
}

float UMordhauInput::GetAxisScale(const FInputAxisKeyMapping & AxisKeyBinding)
{
	return 0.0f;
}

FName UMordhauInput::GetAxisOppositeDirectionName(const FName & AxisName)
{
	return FName();
}

FName UMordhauInput::GetAxisName(const FInputAxisKeyMapping & AxisKeyBinding)
{
	return FName();
}

void UMordhauInput::GetAxisKeyBindings(TArray<struct FInputAxisKeyMapping> & AxisKeyBindings)
{
}

FKey UMordhauInput::GetAxisKey(const FInputAxisKeyMapping & AxisKeyBinding)
{
	return FKey();
}

int UMordhauInput::GetAngleAttacksWithMovement()
{
	return 0;
}

int UMordhauInput::GetAngleAttackAfterPress()
{
	return 0;
}

FName UMordhauInput::GetActionName(const FInputActionKeyMapping & ActionKeyBinding)
{
	return FName();
}

void UMordhauInput::GetActionKeyBindings(TArray<struct FInputActionKeyMapping> & ActionKeyBindings)
{
}

FKey UMordhauInput::GetActionKey(const FInputActionKeyMapping & ActionKeyBinding)
{
	return FKey();
}

void UMordhauInput::ClearKeyBindings()
{
}

void UMordhauInput::ApplySettings()
{
}

void UMordhauInput::AddConsoleKeyBinding(const FKey & Key)
{
}

void UMordhauInput::AddAxisKeyBinding(const FName & AxisName, const FKey & Key)
{
}

void UMordhauInput::AddActionKeyBinding(const FName & ActionName, const FKey & Key)
{
}
