// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UWidget;
enum class EMouseLockMode : uint8;
struct FVector2D;
enum class EInputMode : uint8;
struct FKey;
#ifdef GAMEPADUMGPLUGIN_VirtualCursorFunctionLibrary_generated_h
#error "VirtualCursorFunctionLibrary.generated.h already included, missing '#pragma once' in VirtualCursorFunctionLibrary.h"
#endif
#define GAMEPADUMGPLUGIN_VirtualCursorFunctionLibrary_generated_h

#define uSDK1_2_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCustomSetInputModeGameAndUI) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_OBJECT(UWidget,Z_Param_InWidgetToFocus); \
		P_GET_ENUM(EMouseLockMode,Z_Param_InMouseLockMode); \
		P_GET_UBOOL(Z_Param_bHideCursorDuringCapture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVirtualCursorFunctionLibrary::CustomSetInputModeGameAndUI(Z_Param_PlayerController,Z_Param_InWidgetToFocus,EMouseLockMode(Z_Param_InMouseLockMode),Z_Param_bHideCursorDuringCapture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCustomSetInputModeGameOnly) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVirtualCursorFunctionLibrary::CustomSetInputModeGameOnly(Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCustomSetInputModeUIOnly) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_OBJECT(UWidget,Z_Param_InWidgetToFocus); \
		P_GET_ENUM(EMouseLockMode,Z_Param_InMouseLockMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVirtualCursorFunctionLibrary::CustomSetInputModeUIOnly(Z_Param_PlayerController,Z_Param_InWidgetToFocus,EMouseLockMode(Z_Param_InMouseLockMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlushLastKeyPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVirtualCursorFunctionLibrary::FlushLastKeyPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHoveredWidgetName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UVirtualCursorFunctionLibrary::GetHoveredWidgetName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHoveredWidgetPosition) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVirtualCursorFunctionLibrary::GetHoveredWidgetPosition(Z_Param_Out_Position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsUsingController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVirtualCursorFunctionLibrary::GetIsUsingController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastCustomInputMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EInputMode*)Z_Param__Result=UVirtualCursorFunctionLibrary::GetLastCustomInputMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastKeyPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FKey*)Z_Param__Result=UVirtualCursorFunctionLibrary::GetLastKeyPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHoveringNewWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVirtualCursorFunctionLibrary::IsHoveringNewWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCursorOverInteractableWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVirtualCursorFunctionLibrary::IsCursorOverInteractableWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableVirtualCursor) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVirtualCursorFunctionLibrary::DisableVirtualCursor(Z_Param_PC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableVirtualCursor) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVirtualCursorFunctionLibrary::EnableVirtualCursor(Z_Param_PC); \
		P_NATIVE_END; \
	}


#define uSDK1_2_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCustomSetInputModeGameAndUI) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_OBJECT(UWidget,Z_Param_InWidgetToFocus); \
		P_GET_ENUM(EMouseLockMode,Z_Param_InMouseLockMode); \
		P_GET_UBOOL(Z_Param_bHideCursorDuringCapture); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVirtualCursorFunctionLibrary::CustomSetInputModeGameAndUI(Z_Param_PlayerController,Z_Param_InWidgetToFocus,EMouseLockMode(Z_Param_InMouseLockMode),Z_Param_bHideCursorDuringCapture); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCustomSetInputModeGameOnly) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVirtualCursorFunctionLibrary::CustomSetInputModeGameOnly(Z_Param_PlayerController); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCustomSetInputModeUIOnly) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PlayerController); \
		P_GET_OBJECT(UWidget,Z_Param_InWidgetToFocus); \
		P_GET_ENUM(EMouseLockMode,Z_Param_InMouseLockMode); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVirtualCursorFunctionLibrary::CustomSetInputModeUIOnly(Z_Param_PlayerController,Z_Param_InWidgetToFocus,EMouseLockMode(Z_Param_InMouseLockMode)); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execFlushLastKeyPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVirtualCursorFunctionLibrary::FlushLastKeyPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHoveredWidgetName) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FName*)Z_Param__Result=UVirtualCursorFunctionLibrary::GetHoveredWidgetName(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetHoveredWidgetPosition) \
	{ \
		P_GET_STRUCT_REF(FVector2D,Z_Param_Out_Position); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVirtualCursorFunctionLibrary::GetHoveredWidgetPosition(Z_Param_Out_Position); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetIsUsingController) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVirtualCursorFunctionLibrary::GetIsUsingController(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastCustomInputMode) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(EInputMode*)Z_Param__Result=UVirtualCursorFunctionLibrary::GetLastCustomInputMode(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetLastKeyPressed) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FKey*)Z_Param__Result=UVirtualCursorFunctionLibrary::GetLastKeyPressed(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsHoveringNewWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVirtualCursorFunctionLibrary::IsHoveringNewWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsCursorOverInteractableWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVirtualCursorFunctionLibrary::IsCursorOverInteractableWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableVirtualCursor) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVirtualCursorFunctionLibrary::DisableVirtualCursor(Z_Param_PC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableVirtualCursor) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVirtualCursorFunctionLibrary::EnableVirtualCursor(Z_Param_PC); \
		P_NATIVE_END; \
	}


#define uSDK1_2_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVirtualCursorFunctionLibrary(); \
	friend struct Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UVirtualCursorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GamepadUMGPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVirtualCursorFunctionLibrary)


#define uSDK1_2_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUVirtualCursorFunctionLibrary(); \
	friend struct Z_Construct_UClass_UVirtualCursorFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(UVirtualCursorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GamepadUMGPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVirtualCursorFunctionLibrary)


#define uSDK1_2_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualCursorFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualCursorFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualCursorFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualCursorFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVirtualCursorFunctionLibrary(UVirtualCursorFunctionLibrary&&); \
	NO_API UVirtualCursorFunctionLibrary(const UVirtualCursorFunctionLibrary&); \
public:


#define uSDK1_2_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualCursorFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVirtualCursorFunctionLibrary(UVirtualCursorFunctionLibrary&&); \
	NO_API UVirtualCursorFunctionLibrary(const UVirtualCursorFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualCursorFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualCursorFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualCursorFunctionLibrary)


#define uSDK1_2_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_19_PRIVATE_PROPERTY_OFFSET
#define uSDK1_2_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_16_PROLOG
#define uSDK1_2_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	uSDK1_2_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	uSDK1_2_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_19_RPC_WRAPPERS \
	uSDK1_2_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_19_INCLASS \
	uSDK1_2_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define uSDK1_2_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	uSDK1_2_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_19_PRIVATE_PROPERTY_OFFSET \
	uSDK1_2_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	uSDK1_2_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
	uSDK1_2_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID uSDK1_2_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
