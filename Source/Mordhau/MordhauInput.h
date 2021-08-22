// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Mordhau.h"
#include "Runtime/InputCore/Classes/InputCoreTypes.h"
#include "Runtime/Engine/Classes/GameFramework/PlayerInput.h"
#include "MordhauInput.generated.h"

/**
*
*/
UCLASS(Blueprintable)
class MORDHAU_API UMordhauInput : public UObject
{
	GENERATED_BODY()
public:

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
	TArray<struct FInputActionKeyMapping> ActionMappings; //(ZeroConstructor, Config)
	UPROPERTY()
	TArray<struct FInputAxisConfigEntry> AxisConfig; //(ZeroConstructor, Config)
	UPROPERTY()
	TArray<struct FInputAxisKeyMapping> AxisMappings; //(ZeroConstructor, Config)
	UPROPERTY()
	TArray<struct FKey> ConsoleKeys; //(ZeroConstructor, Config)
	UPROPERTY()
	bool bDefaultBindingsChecked; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY()
	bool bGamepadLeftXInverted; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY()
	bool bGamepadLeftYInverted; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY()
	bool bGamepadRightXInverted; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY()
	bool bGamepadRightYInverted; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY()
	bool bMouseXInverted; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY()
	bool bMouseYInverted; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY()
	float GamepadLeftXDeadzone; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY()
	float GamepadLeftXSensitivity; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY()
	float GamepadLeftYDeadzone; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY()
	float GamepadLeftYSensitivity; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY()
	float GamepadRightXDeadzone; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY()
	float GamepadRightXSensitivity; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY()
	float GamepadRightYDeadzone; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY()
	float GamepadRightYSensitivity; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY()
	float MouseXSensitivity; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY()
	float MouseYSensitivity; //(ZeroConstructor, IsPlainOldData)
	UPROPERTY()
	int AngleAttackAfterPress; //(ZeroConstructor, Config, IsPlainOldData)
	UPROPERTY()
	int AngleAttacksWithMovement; //(ZeroConstructor, Config, IsPlainOldData)
	UPROPERTY()
	int ControlScheme; //(ZeroConstructor, Config, IsPlainOldData)
	UPROPERTY()
	int InverseAttackDirectionX; //(ZeroConstructor, Config, IsPlainOldData)
	UPROPERTY()
	int InverseAttackDirectionY; //(ZeroConstructor, Config, IsPlainOldData)
	UPROPERTY()
	int MouseXIsFlipAttackSide; //(ZeroConstructor, Config, IsPlainOldData)
	UPROPERTY()
	int ToggleSprint; //(ZeroConstructor, Config, IsPlainOldData)

	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void SetToggleSprint(int NewToggleSprint);
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void SetMouseYSensitivity(float NewSensitivity);
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void SetMouseYInverted(bool bNewInverted);
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void SetMouseXSensitivity(float NewSensitivity);
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void SetMouseXIsFlipAttackSide(int NewIsFlipAttackSide);
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void SetMouseXInverted(bool bNewInverted);
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void SetInverseAttackDirectionY(int NewInverseAttackDirectionX);
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void SetInverseAttackDirectionX(int NewInverseAttackDirectionX);
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void SetGamepadRightYSensitivity(float NewSensitivity);
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void SetGamepadRightYInverted(bool bNewInverted);
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void SetGamepadRightYDeadzone(float NewDeadzone);
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void SetGamepadRightXSensitivity(float NewSensitivity);
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void SetGamepadRightXInverted(bool bNewInverted);
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void SetGamepadRightXDeadzone(float NewDeadzone);
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void SetGamepadLeftYSensitivity(float NewSensitivity);
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void SetGamepadLeftYInverted(bool bNewInverted);
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void SetGamepadLeftYDeadzone(float NewDeadzone);
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void SetGamepadLeftXSensitivity(float NewSensitivity);
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void SetGamepadLeftXInverted(bool bNewInverted);
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void SetGamepadLeftXDeadzone(float NewDeadzone);
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void SetControlScheme(int NewControlScheme);
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void SetAngleAttacksWithMovement(int NewAngleAttacksWithMovement);
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void SetAngleAttackAfterPress(int NewAngleAttackAfterPress);
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void SaveSettings();
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void RestoreDefaultSettings();
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	int GetToggleSprint();
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	struct FInputAxisKeyMapping GetSecondaryAxisKeyBinding(const FName& AxisName);
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	struct FInputActionKeyMapping GetSecondaryActionKeyBinding(const FName& ActionName);
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	struct FInputAxisKeyMapping GetPrimaryAxisKeyBinding(const FName& AxisName);
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	struct FInputActionKeyMapping GetPrimaryActionKeyBinding(const FName& ActionName);
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	float GetMouseYSensitivity() const;
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	bool GetMouseYInverted() const;
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	float GetMouseXSensitivity() const;
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	int GetMouseXIsFlipAttackSide() const;
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	bool GetMouseXInverted() const;
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	struct FVector2D GetMouseSensitivityLimits() const;
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	int GetInverseAttackDirectionY() const;
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	int GetInverseAttackDirectionX() const;
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	struct FVector2D GetGamepadSensitivityLimits() const;
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	float GetGamepadRightYSensitivity() const;
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	bool GetGamepadRightYInverted() const;
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	float GetGamepadRightYDeadzone() const;
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	float GetGamepadRightXSensitivity() const;
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	bool GetGamepadRightXInverted() const;
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	float GetGamepadRightXDeadzone() const;
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	float GetGamepadLeftYSensitivity() const;
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	bool GetGamepadLeftYInverted() const;
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	float GetGamepadLeftYDeadzone() const;
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	float GetGamepadLeftXSensitivity() const;
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	bool GetGamepadLeftXInverted() const;
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	float GetGamepadLeftXDeadzone() const;
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	struct FVector2D GetGamepadDeadzoneLimits() const;
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	int GetControlScheme() const;
	
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	void GetConsoleKeyBindings(TArray<struct FKey>& ConsoleKeyBindings);
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	static float GetAxisScale(const struct FInputAxisKeyMapping& AxisKeyBinding);
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	static FName GetAxisOppositeDirectionName(const FName& AxisName);
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	static FName GetAxisName(const struct FInputAxisKeyMapping& AxisKeyBinding);
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	void GetAxisKeyBindings(TArray<struct FInputAxisKeyMapping>& AxisKeyBindings);
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	static struct FKey GetAxisKey(const struct FInputAxisKeyMapping& AxisKeyBinding);
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	int GetAngleAttacksWithMovement();
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	int GetAngleAttackAfterPress();
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	static FName GetActionName(const struct FInputActionKeyMapping& ActionKeyBinding);
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	void GetActionKeyBindings(TArray<struct FInputActionKeyMapping>& ActionKeyBindings);
	UFUNCTION(BlueprintCallable, BlueprintGetter, BlueprintPure, Category = "MordhauInputFns")
	static struct FKey GetActionKey(const struct FInputActionKeyMapping& ActionKeyBinding);
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void ClearKeyBindings();
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void ApplySettings();
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void AddConsoleKeyBinding(const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void AddAxisKeyBinding(const FName& AxisName, const struct FKey& Key);
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void AddActionKeyBinding(const FName& ActionName, const struct FKey& Key);




};
