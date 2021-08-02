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

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bUseSteamInput;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bDefaultBindingsChecked;

	//EActionSetChangeState                              ActionSetChangeState;
	//UPROPERTY(BlueprintReadWrite, EditAnywhere)
	//	TArray<struct FInputAxisConfigEntry>               AxisConfig;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<struct FInputActionKeyMapping>              ActionMappings;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<struct FInputAxisKeyMapping>                AxisMappings;
	//UPROPERTY(BlueprintReadWrite, EditAnywhere)
	//	TMap<FName, struct FDigitalActionKey>       DigitalActionKeyMap;
	//UPROPERTY(BlueprintReadWrite, EditAnywhere)
	//	TMap<FName, struct FAnalogActionKey>        AnalogActionKeyMap;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                ControlScheme;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                AngleAttacksWithMovement;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                MouseXIsFlipAttackSide;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                InverseAttackDirectionX;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                InverseAttackDirectionY;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                AngleAttackAfterPress;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                ToggleSprint;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bMouseXInverted;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MouseXSensitivity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bMouseYInverted;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MouseYSensitivity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bGamepadLeftXInverted;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              GamepadLeftXSensitivity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              GamepadLeftXDeadzone;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bGamepadLeftYInverted;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              GamepadLeftYSensitivity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              GamepadLeftYDeadzone;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bGamepadRightXInverted;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              GamepadRightXSensitivity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              GamepadRightXDeadzone;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bGamepadRightYInverted;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              GamepadRightYSensitivity;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              GamepadRightYDeadzone;
	
	UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void ShowGamepadTextInput(EInputTextMode TextMode, EInputLineMode LineMode, const FString& Description, const FString& ExistingText, int MaxLen);
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void ShowBindingPanel();
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
	void SetActiveActionSet(EActionSet ActionSet);
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void SaveSettings();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void RestoreDefaultSettings();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	int GetToggleSprint();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	float GetMouseYSensitivity();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	bool GetMouseYInverted();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	float GetMouseXSensitivity();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	int GetMouseXIsFlipAttackSide();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	bool GetMouseXInverted();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	struct FVector2D GetMouseSensitivityLimits();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	int GetInverseAttackDirectionY();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	int GetInverseAttackDirectionX();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	struct FVector2D GetGamepadSensitivityLimits();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	float GetGamepadRightYSensitivity();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	bool GetGamepadRightYInverted();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	float GetGamepadRightYDeadzone();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	float GetGamepadRightXSensitivity();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	bool GetGamepadRightXInverted();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	float GetGamepadRightXDeadzone();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	float GetGamepadLeftYSensitivity();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	bool GetGamepadLeftYInverted();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	float GetGamepadLeftYDeadzone();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	float GetGamepadLeftXSensitivity();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	bool GetGamepadLeftXInverted();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	float GetGamepadLeftXDeadzone();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	struct FVector2D GetGamepadDeadzoneLimits();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	int GetControlScheme();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	static float GetAxisScale(const struct FInputAxisKeyMapping& AxisKeyBinding);
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	static FName GetAxisOppositeDirectionName(const FName& AxisName);
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	static FName GetAxisName(const struct FInputAxisKeyMapping& AxisKeyBinding);
//UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
//	void GetAxisKeyBindings(TArray<struct FInputAxisKeyMapping> AxisKeyBindings);
//UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
//	struct FInputAxisKeyMapping GetAxisKeyBinding(const FName& AxisName);
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	static struct FKey GetAxisKey(const struct FInputAxisKeyMapping& AxisKeyBinding);
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	int GetAngleAttacksWithMovement();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	int GetAngleAttackAfterPress();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	static FName GetActionName(const struct FInputActionKeyMapping& ActionKeyBinding);
//UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
//	void GetActionKeyBindings(TArray<struct FInputActionKeyMapping> ActionKeyBindings);
//UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
//	struct FInputActionKeyMapping GetActionKeyBinding(const FName& ActionName);
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	static struct FKey GetActionKey(const struct FInputActionKeyMapping& ActionKeyBinding);
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void ClearKeyBindings();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void ApplySettings();
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void AddAxisKeyBinding(const FName& AxisName, const struct FKey& Key);
UFUNCTION(BlueprintCallable, Category = "MordhauInputFns")
	void AddActionKeyBinding(const FName& ActionName, const struct FKey& Key);


	
};
