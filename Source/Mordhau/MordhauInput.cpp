// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauInput.h"


struct FKey ReturnKey;
FName ReturnName;
//struct FInputAxisKeyMapping ReturnInput;


void UMordhauInput::ShowGamepadTextInput(EInputTextMode TextMode, EInputLineMode LineMode, const FString& Description, const FString& ExistingText, int MaxLen)
{

}
void UMordhauInput::ShowBindingPanel()
{

}
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
void UMordhauInput::SetActiveActionSet(EActionSet ActionSet)
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
return 1;
}
float UMordhauInput::GetMouseYSensitivity()
{
return 1;
}
bool UMordhauInput::GetMouseYInverted()
{
return 1;
}
float UMordhauInput::GetMouseXSensitivity()
{
return 1;
}
int UMordhauInput::GetMouseXIsFlipAttackSide()
{
return 1;
}
bool UMordhauInput::GetMouseXInverted()
{
return 1;
}
struct FVector2D UMordhauInput::GetMouseSensitivityLimits()
{
return { 1,1 };
}
int UMordhauInput::GetInverseAttackDirectionY()
{
return 1;
}
int UMordhauInput::GetInverseAttackDirectionX()
{
return 1;
}
struct FVector2D UMordhauInput::GetGamepadSensitivityLimits()
{
return { 1,1 };
}
float UMordhauInput::GetGamepadRightYSensitivity()
{
return 1;
}
bool UMordhauInput::GetGamepadRightYInverted()
{
return 1;
}
float UMordhauInput::GetGamepadRightYDeadzone()
{
return 1;
}
float UMordhauInput::GetGamepadRightXSensitivity()
{
return 1;
}
bool UMordhauInput::GetGamepadRightXInverted()
{
return 1;
}
float UMordhauInput::GetGamepadRightXDeadzone()
{
return 1;
}
float UMordhauInput::GetGamepadLeftYSensitivity()
{
return 1;
}
bool UMordhauInput::GetGamepadLeftYInverted()
{
return 1;
}
float UMordhauInput::GetGamepadLeftYDeadzone()
{
return 1;
}
float UMordhauInput::GetGamepadLeftXSensitivity()
{
return 1;
}
bool UMordhauInput::GetGamepadLeftXInverted()
{
return 1;
}
float UMordhauInput::GetGamepadLeftXDeadzone()
{
return 1;
}
struct FVector2D UMordhauInput::GetGamepadDeadzoneLimits()
{
return { 1,1 };
}
int UMordhauInput::GetControlScheme()
{
return 1;
}
float UMordhauInput::GetAxisScale(const struct FInputAxisKeyMapping& AxisKeyBinding)
{
return 1;
}
FName UMordhauInput::GetAxisOppositeDirectionName(const FName& AxisName)
{
	return ReturnName;
}
FName UMordhauInput::GetAxisName(const struct FInputAxisKeyMapping& AxisKeyBinding)
{
	return ReturnName;
}
//void UMordhauInput::GetAxisKeyBindings(TArray<struct FInputAxisKeyMapping>* AxisKeyBindings)
//{
//
//}
//struct FInputAxisKeyMapping UMordhauInput::GetAxisKeyBinding(const FName& AxisName)
//{
//
//}
struct FKey UMordhauInput::GetAxisKey(const struct FInputAxisKeyMapping& AxisKeyBinding)
{
	return ReturnKey;
}
int UMordhauInput::GetAngleAttacksWithMovement()
{
return 1;
}
int UMordhauInput::GetAngleAttackAfterPress()
{
return 1;
}
FName UMordhauInput::GetActionName(const struct FInputActionKeyMapping& ActionKeyBinding)
{
	return ReturnName;
}
//void UMordhauInput::GetActionKeyBindings(TArray<struct FInputActionKeyMapping>* ActionKeyBindings)
//{
//
//}
//struct FInputActionKeyMapping UMordhauInput::GetActionKeyBinding(const FName& ActionName)
//{
//	return ReturnInput;
//}
struct FKey UMordhauInput::GetActionKey(const struct FInputActionKeyMapping& ActionKeyBinding)
{
	return ReturnKey;
}
void UMordhauInput::ClearKeyBindings()
{

}
void UMordhauInput::ApplySettings()
{

}
void UMordhauInput::AddAxisKeyBinding(const FName& AxisName, const struct FKey& Key)
{

}
void UMordhauInput::AddActionKeyBinding(const FName& ActionName, const struct FKey& Key)
{

}