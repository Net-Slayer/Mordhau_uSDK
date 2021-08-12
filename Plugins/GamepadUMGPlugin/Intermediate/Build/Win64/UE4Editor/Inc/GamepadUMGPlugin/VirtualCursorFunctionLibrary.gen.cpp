// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamepadUMGPlugin/Private/GamepadUMGPluginPrivatePCH.h"
#include "GamepadUMGPlugin/Public/VirtualCursorFunctionLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualCursorFunctionLibrary() {}
// Cross Module References
	GAMEPADUMGPLUGIN_API UClass* Z_Construct_UClass_UVirtualCursorFunctionLibrary_NoRegister();
	GAMEPADUMGPLUGIN_API UClass* Z_Construct_UClass_UVirtualCursorFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GamepadUMGPlugin();
	GAMEPADUMGPLUGIN_API UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EMouseLockMode();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	GAMEPADUMGPLUGIN_API UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameOnly();
	GAMEPADUMGPLUGIN_API UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeUIOnly();
	GAMEPADUMGPLUGIN_API UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor();
	GAMEPADUMGPLUGIN_API UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor();
	GAMEPADUMGPLUGIN_API UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_FlushLastKeyPressed();
	GAMEPADUMGPLUGIN_API UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetName();
	GAMEPADUMGPLUGIN_API UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetPosition();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	GAMEPADUMGPLUGIN_API UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetIsUsingController();
	GAMEPADUMGPLUGIN_API UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastCustomInputMode();
	MORDHAU_API UEnum* Z_Construct_UEnum_Mordhau_EInputMode();
	GAMEPADUMGPLUGIN_API UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastKeyPressed();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	GAMEPADUMGPLUGIN_API UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget();
	GAMEPADUMGPLUGIN_API UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsHoveringNewWidget();
// End Cross Module References
	void UVirtualCursorFunctionLibrary::StaticRegisterNativesUVirtualCursorFunctionLibrary()
	{
		UClass* Class = UVirtualCursorFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CustomSetInputModeGameAndUI", &UVirtualCursorFunctionLibrary::execCustomSetInputModeGameAndUI },
			{ "CustomSetInputModeGameOnly", &UVirtualCursorFunctionLibrary::execCustomSetInputModeGameOnly },
			{ "CustomSetInputModeUIOnly", &UVirtualCursorFunctionLibrary::execCustomSetInputModeUIOnly },
			{ "DisableVirtualCursor", &UVirtualCursorFunctionLibrary::execDisableVirtualCursor },
			{ "EnableVirtualCursor", &UVirtualCursorFunctionLibrary::execEnableVirtualCursor },
			{ "FlushLastKeyPressed", &UVirtualCursorFunctionLibrary::execFlushLastKeyPressed },
			{ "GetHoveredWidgetName", &UVirtualCursorFunctionLibrary::execGetHoveredWidgetName },
			{ "GetHoveredWidgetPosition", &UVirtualCursorFunctionLibrary::execGetHoveredWidgetPosition },
			{ "GetIsUsingController", &UVirtualCursorFunctionLibrary::execGetIsUsingController },
			{ "GetLastCustomInputMode", &UVirtualCursorFunctionLibrary::execGetLastCustomInputMode },
			{ "GetLastKeyPressed", &UVirtualCursorFunctionLibrary::execGetLastKeyPressed },
			{ "IsCursorOverInteractableWidget", &UVirtualCursorFunctionLibrary::execIsCursorOverInteractableWidget },
			{ "IsHoveringNewWidget", &UVirtualCursorFunctionLibrary::execIsHoveringNewWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI_Statics
	{
		struct VirtualCursorFunctionLibrary_eventCustomSetInputModeGameAndUI_Parms
		{
			APlayerController* PlayerController;
			UWidget* InWidgetToFocus;
			EMouseLockMode InMouseLockMode;
			bool bHideCursorDuringCapture;
		};
		static void NewProp_bHideCursorDuringCapture_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideCursorDuringCapture;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InMouseLockMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InMouseLockMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWidgetToFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InWidgetToFocus;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI_Statics::NewProp_bHideCursorDuringCapture_SetBit(void* Obj)
	{
		((VirtualCursorFunctionLibrary_eventCustomSetInputModeGameAndUI_Parms*)Obj)->bHideCursorDuringCapture = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI_Statics::NewProp_bHideCursorDuringCapture = { UE4CodeGen_Private::EPropertyClass::Bool, "bHideCursorDuringCapture", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VirtualCursorFunctionLibrary_eventCustomSetInputModeGameAndUI_Parms), &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI_Statics::NewProp_bHideCursorDuringCapture_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI_Statics::NewProp_InMouseLockMode = { UE4CodeGen_Private::EPropertyClass::Enum, "InMouseLockMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VirtualCursorFunctionLibrary_eventCustomSetInputModeGameAndUI_Parms, InMouseLockMode), Z_Construct_UEnum_Engine_EMouseLockMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI_Statics::NewProp_InMouseLockMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI_Statics::NewProp_InWidgetToFocus_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI_Statics::NewProp_InWidgetToFocus = { UE4CodeGen_Private::EPropertyClass::Object, "InWidgetToFocus", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VirtualCursorFunctionLibrary_eventCustomSetInputModeGameAndUI_Parms, InWidgetToFocus), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI_Statics::NewProp_InWidgetToFocus_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI_Statics::NewProp_InWidgetToFocus_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI_Statics::NewProp_PlayerController = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VirtualCursorFunctionLibrary_eventCustomSetInputModeGameAndUI_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI_Statics::NewProp_bHideCursorDuringCapture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI_Statics::NewProp_InMouseLockMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI_Statics::NewProp_InMouseLockMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI_Statics::NewProp_InWidgetToFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom(Mordhau)" },
		{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, "CustomSetInputModeGameAndUI", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VirtualCursorFunctionLibrary_eventCustomSetInputModeGameAndUI_Parms), Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameOnly_Statics
	{
		struct VirtualCursorFunctionLibrary_eventCustomSetInputModeGameOnly_Parms
		{
			APlayerController* PlayerController;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameOnly_Statics::NewProp_PlayerController = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VirtualCursorFunctionLibrary_eventCustomSetInputModeGameOnly_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameOnly_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom(Mordhau)" },
		{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, "CustomSetInputModeGameOnly", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VirtualCursorFunctionLibrary_eventCustomSetInputModeGameOnly_Parms), Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameOnly_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameOnly_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameOnly_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeUIOnly_Statics
	{
		struct VirtualCursorFunctionLibrary_eventCustomSetInputModeUIOnly_Parms
		{
			APlayerController* PlayerController;
			UWidget* InWidgetToFocus;
			EMouseLockMode InMouseLockMode;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InMouseLockMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InMouseLockMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InWidgetToFocus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InWidgetToFocus;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeUIOnly_Statics::NewProp_InMouseLockMode = { UE4CodeGen_Private::EPropertyClass::Enum, "InMouseLockMode", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VirtualCursorFunctionLibrary_eventCustomSetInputModeUIOnly_Parms, InMouseLockMode), Z_Construct_UEnum_Engine_EMouseLockMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeUIOnly_Statics::NewProp_InMouseLockMode_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeUIOnly_Statics::NewProp_InWidgetToFocus_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeUIOnly_Statics::NewProp_InWidgetToFocus = { UE4CodeGen_Private::EPropertyClass::Object, "InWidgetToFocus", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(VirtualCursorFunctionLibrary_eventCustomSetInputModeUIOnly_Parms, InWidgetToFocus), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeUIOnly_Statics::NewProp_InWidgetToFocus_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeUIOnly_Statics::NewProp_InWidgetToFocus_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeUIOnly_Statics::NewProp_PlayerController = { UE4CodeGen_Private::EPropertyClass::Object, "PlayerController", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VirtualCursorFunctionLibrary_eventCustomSetInputModeUIOnly_Parms, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeUIOnly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeUIOnly_Statics::NewProp_InMouseLockMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeUIOnly_Statics::NewProp_InMouseLockMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeUIOnly_Statics::NewProp_InWidgetToFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeUIOnly_Statics::NewProp_PlayerController,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeUIOnly_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom(Mordhau)" },
		{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeUIOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, "CustomSetInputModeUIOnly", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VirtualCursorFunctionLibrary_eventCustomSetInputModeUIOnly_Parms), Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeUIOnly_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeUIOnly_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeUIOnly_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeUIOnly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeUIOnly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeUIOnly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics
	{
		struct VirtualCursorFunctionLibrary_eventDisableVirtualCursor_Parms
		{
			APlayerController* PC;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::NewProp_PC = { UE4CodeGen_Private::EPropertyClass::Object, "PC", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VirtualCursorFunctionLibrary_eventDisableVirtualCursor_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::NewProp_PC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, "DisableVirtualCursor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VirtualCursorFunctionLibrary_eventDisableVirtualCursor_Parms), Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics
	{
		struct VirtualCursorFunctionLibrary_eventEnableVirtualCursor_Parms
		{
			APlayerController* PC;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PC;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::NewProp_PC = { UE4CodeGen_Private::EPropertyClass::Object, "PC", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(VirtualCursorFunctionLibrary_eventEnableVirtualCursor_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::NewProp_PC,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, "EnableVirtualCursor", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VirtualCursorFunctionLibrary_eventEnableVirtualCursor_Parms), Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCursorFunctionLibrary_FlushLastKeyPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCursorFunctionLibrary_FlushLastKeyPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom(Mordhau)" },
		{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_FlushLastKeyPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, "FlushLastKeyPressed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_FlushLastKeyPressed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_FlushLastKeyPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_FlushLastKeyPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualCursorFunctionLibrary_FlushLastKeyPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetName_Statics
	{
		struct VirtualCursorFunctionLibrary_eventGetHoveredWidgetName_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Name, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VirtualCursorFunctionLibrary_eventGetHoveredWidgetName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetName_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom(Mordhau)" },
		{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, "GetHoveredWidgetName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VirtualCursorFunctionLibrary_eventGetHoveredWidgetName_Parms), Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetPosition_Statics
	{
		struct VirtualCursorFunctionLibrary_eventGetHoveredWidgetPosition_Parms
		{
			FVector2D Position;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Position;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetPosition_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCursorFunctionLibrary_eventGetHoveredWidgetPosition_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetPosition_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VirtualCursorFunctionLibrary_eventGetHoveredWidgetPosition_Parms), &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetPosition_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetPosition_Statics::NewProp_Position = { UE4CodeGen_Private::EPropertyClass::Struct, "Position", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000180, 1, nullptr, STRUCT_OFFSET(VirtualCursorFunctionLibrary_eventGetHoveredWidgetPosition_Parms, Position), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetPosition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetPosition_Statics::NewProp_Position,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom(Mordhau)" },
		{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, "GetHoveredWidgetPosition", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14C22401, sizeof(VirtualCursorFunctionLibrary_eventGetHoveredWidgetPosition_Parms), Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetPosition_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetPosition_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetPosition_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetIsUsingController_Statics
	{
		struct VirtualCursorFunctionLibrary_eventGetIsUsingController_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetIsUsingController_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCursorFunctionLibrary_eventGetIsUsingController_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetIsUsingController_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VirtualCursorFunctionLibrary_eventGetIsUsingController_Parms), &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetIsUsingController_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetIsUsingController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetIsUsingController_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetIsUsingController_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom(Mordhau)" },
		{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetIsUsingController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, "GetIsUsingController", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(VirtualCursorFunctionLibrary_eventGetIsUsingController_Parms), Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetIsUsingController_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetIsUsingController_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetIsUsingController_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetIsUsingController_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetIsUsingController()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetIsUsingController_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastCustomInputMode_Statics
	{
		struct VirtualCursorFunctionLibrary_eventGetLastCustomInputMode_Parms
		{
			EInputMode ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastCustomInputMode_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Enum, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VirtualCursorFunctionLibrary_eventGetLastCustomInputMode_Parms, ReturnValue), Z_Construct_UEnum_Mordhau_EInputMode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastCustomInputMode_Statics::NewProp_ReturnValue_Underlying = { UE4CodeGen_Private::EPropertyClass::Byte, "UnderlyingType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastCustomInputMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastCustomInputMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastCustomInputMode_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastCustomInputMode_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom(Mordhau)" },
		{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastCustomInputMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, "GetLastCustomInputMode", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VirtualCursorFunctionLibrary_eventGetLastCustomInputMode_Parms), Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastCustomInputMode_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastCustomInputMode_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastCustomInputMode_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastCustomInputMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastCustomInputMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastCustomInputMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastKeyPressed_Statics
	{
		struct VirtualCursorFunctionLibrary_eventGetLastKeyPressed_Parms
		{
			FKey ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastKeyPressed_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Struct, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(VirtualCursorFunctionLibrary_eventGetLastKeyPressed_Parms, ReturnValue), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastKeyPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastKeyPressed_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastKeyPressed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom(Mordhau)" },
		{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastKeyPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, "GetLastKeyPressed", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VirtualCursorFunctionLibrary_eventGetLastKeyPressed_Parms), Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastKeyPressed_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastKeyPressed_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastKeyPressed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastKeyPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastKeyPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastKeyPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Statics
	{
		struct VirtualCursorFunctionLibrary_eventIsCursorOverInteractableWidget_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCursorFunctionLibrary_eventIsCursorOverInteractableWidget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VirtualCursorFunctionLibrary_eventIsCursorOverInteractableWidget_Parms), &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, "IsCursorOverInteractableWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VirtualCursorFunctionLibrary_eventIsCursorOverInteractableWidget_Parms), Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsHoveringNewWidget_Statics
	{
		struct VirtualCursorFunctionLibrary_eventIsHoveringNewWidget_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsHoveringNewWidget_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((VirtualCursorFunctionLibrary_eventIsHoveringNewWidget_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsHoveringNewWidget_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Bool, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(VirtualCursorFunctionLibrary_eventIsHoveringNewWidget_Parms), &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsHoveringNewWidget_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsHoveringNewWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsHoveringNewWidget_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsHoveringNewWidget_Statics::Function_MetaDataParams[] = {
		{ "Category", "Custom(Mordhau)" },
		{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
		{ "ToolTip", "Custom Mordhau Functions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsHoveringNewWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UVirtualCursorFunctionLibrary, "IsHoveringNewWidget", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x14022401, sizeof(VirtualCursorFunctionLibrary_eventIsHoveringNewWidget_Parms), Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsHoveringNewWidget_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsHoveringNewWidget_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsHoveringNewWidget_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsHoveringNewWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsHoveringNewWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsHoveringNewWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVirtualCursorFunctionLibrary_NoRegister()
	{
		return UVirtualCursorFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_GamepadUMGPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameAndUI, "CustomSetInputModeGameAndUI" }, // 1540189793
		{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeGameOnly, "CustomSetInputModeGameOnly" }, // 354294614
		{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_CustomSetInputModeUIOnly, "CustomSetInputModeUIOnly" }, // 3735171726
		{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor, "DisableVirtualCursor" }, // 2485909824
		{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor, "EnableVirtualCursor" }, // 1251538448
		{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_FlushLastKeyPressed, "FlushLastKeyPressed" }, // 3205138956
		{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetName, "GetHoveredWidgetName" }, // 449153919
		{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetHoveredWidgetPosition, "GetHoveredWidgetPosition" }, // 371441138
		{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetIsUsingController, "GetIsUsingController" }, // 476985394
		{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastCustomInputMode, "GetLastCustomInputMode" }, // 2919147133
		{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_GetLastKeyPressed, "GetLastKeyPressed" }, // 636075799
		{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget, "IsCursorOverInteractableWidget" }, // 2479083425
		{ &Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsHoveringNewWidget, "IsHoveringNewWidget" }, // 2179663239
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "VirtualCursorFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/VirtualCursorFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UVirtualCursorFunctionLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics::ClassParams = {
		&UVirtualCursorFunctionLibrary::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UVirtualCursorFunctionLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVirtualCursorFunctionLibrary, 4071968448);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVirtualCursorFunctionLibrary(Z_Construct_UClass_UVirtualCursorFunctionLibrary, &UVirtualCursorFunctionLibrary::StaticClass, TEXT("/Script/GamepadUMGPlugin"), TEXT("UVirtualCursorFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualCursorFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
