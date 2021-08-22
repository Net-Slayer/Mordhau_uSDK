// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MordhauOnlineSubsystem/Public/DummyActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDummyActor() {}
// Cross Module References
	MORDHAUONLINESUBSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSteamID();
	UPackage* Z_Construct_UPackage__Script_MordhauOnlineSubsystem();
	MORDHAUONLINESUBSYSTEM_API UClass* Z_Construct_UClass_ADummyActor_NoRegister();
	MORDHAUONLINESUBSYSTEM_API UClass* Z_Construct_UClass_ADummyActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
// End Cross Module References
class UScriptStruct* FSteamID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern MORDHAUONLINESUBSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FSteamID_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSteamID, Z_Construct_UPackage__Script_MordhauOnlineSubsystem(), TEXT("SteamID"), sizeof(FSteamID), Get_Z_Construct_UScriptStruct_FSteamID_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSteamID(FSteamID::StaticStruct, TEXT("/Script/MordhauOnlineSubsystem"), TEXT("SteamID"), false, nullptr, nullptr);
static struct FScriptStruct_MordhauOnlineSubsystem_StaticRegisterNativesFSteamID
{
	FScriptStruct_MordhauOnlineSubsystem_StaticRegisterNativesFSteamID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SteamID")),new UScriptStruct::TCppStructOps<FSteamID>);
	}
} ScriptStruct_MordhauOnlineSubsystem_StaticRegisterNativesFSteamID;
	struct Z_Construct_UScriptStruct_FSteamID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSteamID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DummyActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSteamID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSteamID>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSteamID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_MordhauOnlineSubsystem,
		nullptr,
		&NewStructOps,
		"SteamID",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FSteamID),
		alignof(FSteamID),
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSteamID_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FSteamID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSteamID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSteamID_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_MordhauOnlineSubsystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SteamID"), sizeof(FSteamID), Get_Z_Construct_UScriptStruct_FSteamID_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSteamID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSteamID_CRC() { return 642290860U; }
	void ADummyActor::StaticRegisterNativesADummyActor()
	{
	}
	UClass* Z_Construct_UClass_ADummyActor_NoRegister()
	{
		return ADummyActor::StaticClass();
	}
	struct Z_Construct_UClass_ADummyActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADummyActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_MordhauOnlineSubsystem,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADummyActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DummyActor.h" },
		{ "ModuleRelativePath", "Public/DummyActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADummyActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADummyActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADummyActor_Statics::ClassParams = {
		&ADummyActor::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ADummyActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ADummyActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADummyActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADummyActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADummyActor, 2948756441);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADummyActor(Z_Construct_UClass_ADummyActor, &ADummyActor::StaticClass, TEXT("/Script/MordhauOnlineSubsystem"), TEXT("ADummyActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADummyActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
