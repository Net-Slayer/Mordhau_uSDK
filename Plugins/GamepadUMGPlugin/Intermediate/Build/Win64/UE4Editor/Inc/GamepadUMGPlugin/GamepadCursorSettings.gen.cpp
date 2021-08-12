// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GamepadUMGPlugin/Private/GamepadUMGPluginPrivatePCH.h"
#include "GamepadUMGPlugin/Public/GamepadCursorSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGamepadCursorSettings() {}
// Cross Module References
	GAMEPADUMGPLUGIN_API UClass* Z_Construct_UClass_UGamepadCursorSettings_NoRegister();
	GAMEPADUMGPLUGIN_API UClass* Z_Construct_UClass_UGamepadCursorSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDeveloperSettings();
	UPackage* Z_Construct_UPackage__Script_GamepadUMGPlugin();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeFloatCurve();
// End Cross Module References
	void UGamepadCursorSettings::StaticRegisterNativesUGamepadCursorSettings()
	{
	}
	UClass* Z_Construct_UClass_UGamepadCursorSettings_NoRegister()
	{
		return UGamepadCursorSettings::StaticClass();
	}
	struct Z_Construct_UClass_UGamepadCursorSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAnalogCursorNoAcceleration_MetaData[];
#endif
		static void NewProp_bAnalogCursorNoAcceleration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAnalogCursorNoAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseEngineAnalogCursor_MetaData[];
#endif
		static void NewProp_bUseEngineAnalogCursor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseEngineAnalogCursor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnalogCursorSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnalogCursorSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnalogCursorAccelerationMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnalogCursorAccelerationMultiplier;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnalogCursorDeadZone_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnalogCursorDeadZone;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinAnalogCursorSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinAnalogCursorSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnalogCursorDragCoefficientWhenHovered_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnalogCursorDragCoefficientWhenHovered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnalogCursorDragCoefficient_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AnalogCursorDragCoefficient;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAnalogCursorSpeedWhenHovered_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAnalogCursorSpeedWhenHovered;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAnalogCursorSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAnalogCursorSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnalogCursorAccelerationCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnalogCursorAccelerationCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGamepadCursorSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_GamepadUMGPlugin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGamepadCursorSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GamepadCursorSettings.h" },
		{ "ModuleRelativePath", "Public/GamepadCursorSettings.h" },
		{ "ToolTip", "These settings are used with the Gamepad UMG Plugin!\n\nEpic Developer Nick Darnell wrote this Gamepad-friendly UMG code!\n\nI simply compiled the code into a plugin :)\n\n<3 Rama" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_bAnalogCursorNoAcceleration_MetaData[] = {
		{ "Category", "Analog Cursor" },
		{ "ModuleRelativePath", "Public/GamepadCursorSettings.h" },
		{ "ToolTip", "If True, AnalogCursorAccelerationCurve will be used as a Velocity Curve" },
	};
#endif
	void Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_bAnalogCursorNoAcceleration_SetBit(void* Obj)
	{
		((UGamepadCursorSettings*)Obj)->bAnalogCursorNoAcceleration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_bAnalogCursorNoAcceleration = { UE4CodeGen_Private::EPropertyClass::Bool, "bAnalogCursorNoAcceleration", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UGamepadCursorSettings), &Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_bAnalogCursorNoAcceleration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_bAnalogCursorNoAcceleration_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_bAnalogCursorNoAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_bUseEngineAnalogCursor_MetaData[] = {
		{ "Category", "Analog Cursor" },
		{ "ModuleRelativePath", "Public/GamepadCursorSettings.h" },
		{ "ToolTip", "If true, defaults to the Engine's Analog Cursor" },
	};
#endif
	void Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_bUseEngineAnalogCursor_SetBit(void* Obj)
	{
		((UGamepadCursorSettings*)Obj)->bUseEngineAnalogCursor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_bUseEngineAnalogCursor = { UE4CodeGen_Private::EPropertyClass::Bool, "bUseEngineAnalogCursor", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(UGamepadCursorSettings), &Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_bUseEngineAnalogCursor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_bUseEngineAnalogCursor_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_bUseEngineAnalogCursor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorSize_MetaData[] = {
		{ "Category", "Analog Cursor" },
		{ "ClampMax", "128.0" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/GamepadCursorSettings.h" },
		{ "ToolTip", "The size (on screen) of the analog cursor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorSize = { UE4CodeGen_Private::EPropertyClass::Float, "AnalogCursorSize", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UGamepadCursorSettings, AnalogCursorSize), METADATA_PARAMS(Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorAccelerationMultiplier_MetaData[] = {
		{ "Category", "Analog Cursor" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/GamepadCursorSettings.h" },
		{ "ToolTip", "Multiplied by the value spit out by the normalized acceleration curve" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorAccelerationMultiplier = { UE4CodeGen_Private::EPropertyClass::Float, "AnalogCursorAccelerationMultiplier", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UGamepadCursorSettings, AnalogCursorAccelerationMultiplier), METADATA_PARAMS(Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorAccelerationMultiplier_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorAccelerationMultiplier_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorDeadZone_MetaData[] = {
		{ "Category", "Analog Cursor" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/GamepadCursorSettings.h" },
		{ "ToolTip", "Deadzone value for input from the analog stick" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorDeadZone = { UE4CodeGen_Private::EPropertyClass::Float, "AnalogCursorDeadZone", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UGamepadCursorSettings, AnalogCursorDeadZone), METADATA_PARAMS(Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorDeadZone_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorDeadZone_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_MinAnalogCursorSpeed_MetaData[] = {
		{ "Category", "Analog Cursor" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/GamepadCursorSettings.h" },
		{ "ToolTip", "The min speed of the analog cursor. If it goes below this value, the speed is set to 0." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_MinAnalogCursorSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MinAnalogCursorSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UGamepadCursorSettings, MinAnalogCursorSpeed), METADATA_PARAMS(Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_MinAnalogCursorSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_MinAnalogCursorSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorDragCoefficientWhenHovered_MetaData[] = {
		{ "Category", "Analog Cursor" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/GamepadCursorSettings.h" },
		{ "ToolTip", "The coefficient of drag applied to the cursor when hovering" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorDragCoefficientWhenHovered = { UE4CodeGen_Private::EPropertyClass::Float, "AnalogCursorDragCoefficientWhenHovered", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UGamepadCursorSettings, AnalogCursorDragCoefficientWhenHovered), METADATA_PARAMS(Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorDragCoefficientWhenHovered_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorDragCoefficientWhenHovered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorDragCoefficient_MetaData[] = {
		{ "Category", "Analog Cursor" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Public/GamepadCursorSettings.h" },
		{ "ToolTip", "The coefficient of drag applied to the cursor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorDragCoefficient = { UE4CodeGen_Private::EPropertyClass::Float, "AnalogCursorDragCoefficient", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UGamepadCursorSettings, AnalogCursorDragCoefficient), METADATA_PARAMS(Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorDragCoefficient_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorDragCoefficient_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_MaxAnalogCursorSpeedWhenHovered_MetaData[] = {
		{ "Category", "Analog Cursor" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/GamepadCursorSettings.h" },
		{ "ToolTip", "The max speed of the Analog Cursor when hovering over a widget that is interactable" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_MaxAnalogCursorSpeedWhenHovered = { UE4CodeGen_Private::EPropertyClass::Float, "MaxAnalogCursorSpeedWhenHovered", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UGamepadCursorSettings, MaxAnalogCursorSpeedWhenHovered), METADATA_PARAMS(Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_MaxAnalogCursorSpeedWhenHovered_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_MaxAnalogCursorSpeedWhenHovered_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_MaxAnalogCursorSpeed_MetaData[] = {
		{ "Category", "Analog Cursor" },
		{ "ClampMin", "1.0" },
		{ "ModuleRelativePath", "Public/GamepadCursorSettings.h" },
		{ "ToolTip", "The max speed of the Analog Cursor" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_MaxAnalogCursorSpeed = { UE4CodeGen_Private::EPropertyClass::Float, "MaxAnalogCursorSpeed", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UGamepadCursorSettings, MaxAnalogCursorSpeed), METADATA_PARAMS(Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_MaxAnalogCursorSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_MaxAnalogCursorSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorAccelerationCurve_MetaData[] = {
		{ "Category", "Analog Cursor" },
		{ "ModuleRelativePath", "Public/GamepadCursorSettings.h" },
		{ "XAxisName", "Strength" },
		{ "YAxisName", "Acceleration" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorAccelerationCurve = { UE4CodeGen_Private::EPropertyClass::Struct, "AnalogCursorAccelerationCurve", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0040000000004001, 1, nullptr, STRUCT_OFFSET(UGamepadCursorSettings, AnalogCursorAccelerationCurve), Z_Construct_UScriptStruct_FRuntimeFloatCurve, METADATA_PARAMS(Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorAccelerationCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorAccelerationCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGamepadCursorSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_bAnalogCursorNoAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_bUseEngineAnalogCursor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorAccelerationMultiplier,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorDeadZone,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_MinAnalogCursorSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorDragCoefficientWhenHovered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorDragCoefficient,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_MaxAnalogCursorSpeedWhenHovered,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_MaxAnalogCursorSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGamepadCursorSettings_Statics::NewProp_AnalogCursorAccelerationCurve,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGamepadCursorSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGamepadCursorSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGamepadCursorSettings_Statics::ClassParams = {
		&UGamepadCursorSettings::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x001000A6u,
		nullptr, 0,
		Z_Construct_UClass_UGamepadCursorSettings_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UGamepadCursorSettings_Statics::PropPointers),
		"Game",
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UGamepadCursorSettings_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UGamepadCursorSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGamepadCursorSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGamepadCursorSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGamepadCursorSettings, 2069240102);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGamepadCursorSettings(Z_Construct_UClass_UGamepadCursorSettings, &UGamepadCursorSettings::StaticClass, TEXT("/Script/GamepadUMGPlugin"), TEXT("UGamepadCursorSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGamepadCursorSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
