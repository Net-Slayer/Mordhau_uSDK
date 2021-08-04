// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Mordhau.h"
#include "MordhauTypes.h"
#include "TextProperty.h"
#include "Engine/EngineTypes.h"
#include "DummyActor.h"
#include "Kismet/KismetSystemLibrary.h"
#include "UObject/WeakObjectPtr.h"
#include "MordhauUtilityLibrary.generated.h"

/**
 *
 */

USTRUCT(BlueprintType)
struct MORDHAU_API FSteamPlayFabConversionResult
{
	GENERATED_BODY()
public:
	TMap<FString, FString> SteamIDPlayFabIDMap;
};

DECLARE_DYNAMIC_DELEGATE_TwoParams(FUtilGetPlayFabIDsFromSteamIDsDelegate, bool, bSuccess, const FSteamPlayFabConversionResult&, OutMap);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRconStringCommand, const FString &, Payload);
UCLASS(Blueprintable)
class MORDHAU_API UMordhauUtilityLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	//Get custom ConfigVars (fixed)
	UFUNCTION(BlueprintPure, Category = "Mordhau Utility Library|Custom Config Vars!")
		static struct FVector2D GetCustomConfigVar_Vector2D(FString SectionName, FString VariableName, bool& IsValid);
	UFUNCTION(BlueprintPure, Category = "Mordhau Utility Library|Custom Config Vars!")
		static struct FVector GetCustomConfigVar_Vector(FString SectionName, FString VariableName, bool& IsValid);
	UFUNCTION(BlueprintPure, Category = "Mordhau Utility Library|Custom Config Vars!")
		static FString GetCustomConfigVar_String(FString SectionName, FString VariableName, bool& IsValid);
	UFUNCTION(BlueprintPure, Category = "Mordhau Utility Library|Custom Config Vars!")
		static struct FRotator GetCustomConfigVar_Rotator(FString SectionName, FString VariableName, bool& IsValid);
	UFUNCTION(BlueprintPure, Category = "Mordhau Utility Library|Custom Config Vars!")
		static int32 GetCustomConfigVar_Int(FString SectionName, FString VariableName, bool& IsValid);
	UFUNCTION(BlueprintPure, Category = "Mordhau Utility Library|Custom Config Vars!")
		static float GetCustomConfigVar_Float(FString SectionName, FString VariableName, bool& IsValid);
	UFUNCTION(BlueprintPure, Category = "Mordhau Utility Library|Custom Config Vars!")
		static void GetCustomConfigVar_Color(FString SectionName, FString VariableName, bool& IsValid, struct FLinearColor& colorReturn);
	UFUNCTION(BlueprintPure, Category = "Mordhau Utility Library|Custom Config Vars!")
		static bool GetCustomConfigVar_Bool(FString SectionName, FString VariableName, bool& IsValid);

	//Set CustomConfig Vars (fixed)
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library|Custom Config Vars!")
		static void SetCustomConfigVar_Vector2D(const FString& SectionName, const FString& VariableName, const struct FVector2D& Value);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library|Custom Config Vars!")
		static void SetCustomConfigVar_Vector(const FString& SectionName, const FString& VariableName, const struct FVector& Value);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library|Custom Config Vars!")
		static void SetCustomConfigVar_String(const FString& SectionName, const FString& VariableName, const FString& Value);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library|Custom Config Vars!")
		static void SetCustomConfigVar_Rotator(const FString& SectionName, const FString& VariableName, const struct FRotator& Value);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library|Custom Config Vars!")
		static void SetCustomConfigVar_Int(const FString& SectionName, const FString& VariableName, int32 Value);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library|Custom Config Vars!")
		static void SetCustomConfigVar_Float(const FString& SectionName, const FString& VariableName, float Value);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library|Custom Config Vars!")
		static void SetCustomConfigVar_Color(const FString& SectionName, const FString& VariableName, const struct FLinearColor& Value);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library|Custom Config Vars!")
		static void SetCustomConfigVar_Bool(const FString& SectionName, const FString& VariableName, bool Value);

	//Extra functions by Battlefield Recapitator
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static TArray<FString> SortStringArray(const TArray<FString>& Array, bool bSortAscending);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static TArray<int> SortIntArray(const TArray<int>& Array, bool bSortAscending);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static TArray<UObject *> SortArrayByProperty(const TArray<UObject *>& Array, const FName & PropertyName, bool bAscending, bool & bWasTypeValid);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool CallFunctionByNameWithArgs(const FString & Str, UObject* Executor);
	UFUNCTION(BlueprintPure, Category = "Mordhau Utility Library|Custom Config Vars!")
		static TArray<FString> GetCustomConfigVar_Array(FString SectionName, FString VariableName, int& ArraySize);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library|Custom Config Vars!")
		static void SetCustomConfigVar_Array(FString SectionName, FString VariableName, TArray<FString> Value);

	//Extra functions Season 2 by Battlefield Recapitator
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library|Rcon")
		static bool SendMessageToRconClients(const FString & Message, const int & ClientID, bool bToAll, EBroadcastTypes TypeOfBroadcast = EBroadcastTypes::Custom);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool SaveStringToFile(const FString & FileName, const FString & String);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void PrintToConsoleAndLog(FString String);
	UPROPERTY(BlueprintAssignable, Category = "MordhauGameMode|Rcon")
		FOnRconStringCommand OnRconStringCommand;

	//ExtraFunctions Season 3 by Battlefield Recapitator
	/**
	* Relative to [PathToSaved]/Saved/PlayerFiles
	* Currently only supports .txt files
	*/
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool SaveStringArrayToFile(const FString & FileName, const TArray<FString> & StringArray);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool SaveArrayToFile(const FString & FileName, TArray<uint8> ByteArray);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool LoadStringFromFile(const FString & FileName, FString & LoadedString);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool LoadStringArrayFromFile(const FString & FileName, TArray<FString> & LoadedStringArray);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool LoadArrayFromFile(const FString & FileName, TArray<uint8> & LoadedArray);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void CopyToClipboard(const FString& MessageToCopy);

	// ATTENTION!
	// Functions below are less accurate as they are interpreted from mem dump
	// Functions that have been given to us by BR have been commented out

	/*
	*/

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static void VSmoothDamp(const struct FVector& Target, float SmoothTime, float DeltaTime, float MaxSpeed, struct FVector& Current, struct FVector& CurrentVelocity);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool ValidateCharacterProfile(const struct FCharacterProfile& Profile, bool bValidateInventory);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static FString UploadChat(const FString& ChatString);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void UnpossessCharacterAndHandleSpectating(class AController* Controller);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool UnmountPak(const FString& PakPath);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool UncompressData(const FString& InData, TArray<uint8>& OutData);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool TryExecuteHeavydutyOperation(class UWorld* WorldObject, bool bIsForced);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void TermAllChildBodiesOf(class USkeletalMeshComponent* USMC, const FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static struct FCharacterProfile StripProfile(const struct FCharacterProfile& InProfile, bool bStripEquipment, bool bStripPerks, bool bStripNonTier0Armor);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static class UDecalComponent* SpawnBloodDecalAtLocation(class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, const struct FVector DecalSize, const struct FVector Location, const struct FRotator Rotation, float LifeSpan);

	//	static TArray<FString> SortStringArray(TArray<FString> Array, bool bSortAscending);

	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static TArray<FString> SortQueueNamesByBestMatch(TMap<FString, struct FPlayFabMatchmakingMatch> Matches);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static TArray<class AMordhauPlayerState*> SortPlayers(TArray<class AMordhauPlayerState*> Array);

	//	static TArray<int> SortIntArray(TArray<int> Array, bool bSortAscending);

	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static TArray<struct FServerSearchResult> SortForServerBrowserByServerName(TArray<struct FServerSearchResult> Array, bool bSortAscending);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static TArray<struct FServerSearchResult> SortForServerBrowserByPing(TArray<struct FServerSearchResult> Array, bool bSortAscending);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static TArray<struct FServerSearchResult> SortForServerBrowserByMapName(TArray<struct FServerSearchResult> Array, bool bSortAscending);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static TArray<struct FServerSearchResult> SortForServerBrowserByGameModeName(TArray<struct FServerSearchResult> Array, bool bSortAscending);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static TArray<struct FServerSearchResult> SortForServerBrowserByCount(TArray<struct FServerSearchResult> Array, bool bSortAscending);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static TArray<struct FPlayFabGameServer> SortForMatchmakingByLocationPreference(TArray<struct FPlayFabGameServer> Servers, TArray<EServerLocation> LocationPreferece);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static TArray<struct FServerSearchResult> SortForMatchmaking(TArray<struct FServerSearchResult> Array);

	//	static TArray<class UObject*> SortArrayByProperty(TArray<class UObject*> Array, const FName& PropertyName, bool bAscending, bool& bWasTypeValid);

	//More info required
	//UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
	//static TArray<class UObject*> SortArrayByFunction(TArray<class UObject*> Array, FScriptDelegate FuncDel);
	//UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
	//static TArray<class UObject*> SortAndFilterArrayByFunction(TArray<class UObject*>& Array, FScriptDelegate FuncDel, class UClass* Class);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static float Snap180AngleToSteps(float Angle180, float Step);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool SLessThan(const FString& StringA, const FString& StringB);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool SGreaterThan(const FString& StringA, const FString& StringB);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void SetVisibilityId(class UPrimitiveComponent* Comp, int NewId);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void SetSoundMixVolume(ESoundMix SoundMix, float Volume);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void SetPerBoneMotionBlur(class USkeletalMeshComponent* Component, bool bNewValue);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void SetPawnFromRep(class AController* Contr, class APawn* NewPawn);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void SetNeverDistanceCull(class UPrimitiveComponent* Comp, bool bNewValue);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void SetNavAreaClass(class UShapeComponent* ShapeComponent, class UClass* AreaClass);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void SetMousePosition(class APlayerController* Controller, float LocationX, float LocationY);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void SetLODActorDrawDistance(class ALODActor* Actor, float NewDrawDistance);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void SetLocalSpaceKinematics(class USkeletalMeshComponent* Mesh, bool bNewValue);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void SetForceMipStreaming(class USkeletalMeshComponent* SMC, bool bValue);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void SetDecalFadeScreenSize(class UDecalComponent* Decal, float NewFadeScreenSize);

	//	static void SetCustomConfigVar_Vector2D(const FString& SectionName, const FString& VariableName, const struct FVector2D& Value);

	//	static void SetCustomConfigVar_Vector(const FString& SectionName, const FString& VariableName, const struct FVector& Value);

	//	static void SetCustomConfigVar_String(const FString& SectionName, const FString& VariableName, const FString& Value);

	//	static void SetCustomConfigVar_Rotator(const FString& SectionName, const FString& VariableName, const struct FRotator& Value);

	//	static void SetCustomConfigVar_Int(const FString& SectionName, const FString& VariableName, int Value);

	//	static void SetCustomConfigVar_Float(const FString& SectionName, const FString& VariableName, float Value);

	//	static void SetCustomConfigVar_Color(const FString& SectionName, const FString& VariableName, const struct FLinearColor& Value);

	//	static void SetCustomConfigVar_Bool(const FString& SectionName, const FString& VariableName, bool Value);

	//	static void SetCustomConfigVar_Array(const FString& SectionName, const FString& VariableName, TArray<FString> Value);

	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void SetCanEverAffectNavigation(class UActorComponent* ActorComponent, bool bRelevant);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void SetCachedMaxDistanceAndMarkDirty(class UPrimitiveComponent* Comp, float NewMaxDistance);

	//	static bool SendMessageToRconClients(const FString& Message, int ClientId, bool bToAll, EBroadcastTypes TypeOfBroadcast);

	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void SendClientAdjustment(class UCharacterMovementComponent* CMC);

	//	static bool SaveStringToFile(const FString& Filename, const FString& String);

	//	static bool SaveStringArrayToFile(const FString& Filename, TArray<FString> StringArray);

	//	static bool SaveArrayToFile(const FString& Filename, TArray<uint8> ByteArray);

	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void ResetServerPredictionData(class UCharacterMovementComponent* CMC);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void ResetController(class AController* Controller);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void ResetClientPredictionData(class UCharacterMovementComponent* CMC);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void ReserveCharacterRagdoll(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static int RandomRangeExclude(int Min, int Max, int Exclude);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool ProjectWorldToScreenBidirectional(class APlayerController* Player, const struct FVector& WorldPosition, bool bPlayerViewportRelative, struct FVector2D& ScreenPosition, bool& bTargetBehindCamera);

	//	static void PrintToConsoleAndLog(const FString& String, bool bSkipRepeatedStrings);

	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library", meta = (AutoCreateRefTerm = "TraceAmount, ActorsToIgnore, ConnectOffset"))
		static bool PlaneTrace(class UObject* WorldContextObject, const struct FVector& Left, const struct FVector& Right, const struct FVector& Forward, const struct FVector& Back, const struct FVector& TraceAmount, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bConnectLeftRight, bool bConnectForwardBack, const struct FVector& ConnectOffset, bool bIgnoreSelf, struct FHitResult& LeftHit, struct FHitResult& RightHit, struct FHitResult& ForwardHit, struct FHitResult& BackHit, struct FVector& OutRight, struct FVector& OutForward);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void PerformCharacterRenderingStressTest(class UObject* WorldContextObject, class UClass* Type, int Amount, float Spread);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void OpenURL(const FString& URL);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool NotEqual_PlayFabPlayer(const struct FPlayFabPlayer& A, const struct FPlayFabPlayer& B);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool MountPak(const FString& PakPath);
	UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Category = "Mordhau Utility Library", meta = (AutoCreateRefTerm = "IgnoreActors"))
		static bool MordhauApplyRadialDamageWithFalloff(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, float BaseStructureDamage, float MinimumStructureDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TArray<class AActor*> IgnoreActors, float BaseKnockback, float MinimumKnockback, float RagdollFallRadius, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, bool bIgnoreFriendly);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void MarkRenderStateDirty(class UMeshComponent* MeshComp);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static struct FCharacterProfile MakeEmptyProfile(class UClass* CharacterClass, bool bRandomizeVoice);

	//	static bool LoadStringFromFile(const FString& Filename, FString& LoadedString);

	//	static bool LoadStringArrayFromFile(const FString& Filename, TArray<FString>* LoadedStringArray);

	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static class UObject* LoadAsset(const struct FSoftObjectPath& SoftObjectPath);

	//	static bool LoadArrayFromFile(const FString& Filename, TArray<uint8>* LoadedArray);

	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool LineTraceMultiForObjectsReturnFace(class UObject* WorldContextObject, const struct FVector& Start, const struct FVector& End, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>& OutHits);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static struct FPOV LerpPOV(const struct FPOV& A, const struct FPOV& B, float Alpha);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool IsValidIPAddress(const FString& IPAddress);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool IsValid_PlayFabPlayer(const struct FPlayFabPlayer& Player);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool IsStandalone();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool IsServer();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool IsReflexAvailable();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool IsPublicIPAddress(const FString& IPAddress);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool IsPrivateIPAddress(const FString& IPAddress);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool IsPlayInEditor();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool IsPartyMember(class AMordhauPlayerState* Player);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool IsOfficialServer();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool IsListenServer();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool IsFriendlyToLocalPlayer(class UWorld* WorldReference, class AActor* OtherActor);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool IsFriend(class AMordhauPlayerState* Player);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool IsEditor();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool IsDLCInstalled(EDownloadableContent DLC);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool IsDevelopmentBuild();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool IsDevelopmentBranch();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool IsDemoPlayback(class UWorld* World);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool IsDedicatedServer();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool IsConsolePlatform();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool IsCommunityServer();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool IsClient();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool HasPath(class AAIController* Controller);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool HasBeenReallyRecentlyRendered(class UMeshComponent* MeshComponent);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool HasActorBegunPlay(class AActor* Actor);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static struct FBox GrowBoxToIncludePoint(const struct FBox& Box, const struct FVector& Vector);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static int GetXPFromRank(int Rank);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static class UWorld* GetWorldOf(class UObject* Object);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static TArray<FText> GetWearableNames(const struct FCharacterGearCustomization& CharacterGearCustomization, EWearableSlot Slot);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static TArray<class UClass*> GetWearableClasses(const struct FCharacterGearCustomization& CharacterGearCustomization, EWearableSlot Slot);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static class UClass* GetWearableClass(const struct FCharacterGearCustomization& CharacterGearCustomization, EWearableSlot Slot);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static int GetVisibilityId(class UPrimitiveComponent* Comp);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static class AMordhauCharacter* GetViewTargetCharacter(class UObject* WorldContextObject, bool bOnlyLiving);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static FString GetVersionString();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static FString GetVersionName();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static float GetTotalDemoTime(class UWorld* World);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static float GetSyncGroupPositionBetweenMarkers(class UAnimInstance* AnimInstance, const FName& SyncGroup);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool GetSupportedScreenResolutions(TArray<FString>& Resolutions);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void GetSoundMixInfo(const FString& Name, struct FSoundMixInfo& SoundMixInfo);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static FString GetServerConnectString(const struct FPlayFabServerDetails& ServerDetails, const FString& PortName);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static FName GetSculptableBoneAtLine(const struct FVector& LineStart, const struct FVector& LineEnd, float SearchRadius, class USkeletalMeshComponent* MeshComponent, class AMordhauCharacter* Character, int Level);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static TEnumAsByte<ENetRole> GetRole(class AActor* Actor);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static int GetReleaseVersion();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static FString GetRegionName(EServerRegion Region);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static FText GetRegionDisplayName(EServerRegion Region);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static EServerRegion GetRegion(const FString& RegionName);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static int GetRankFromXP(int XP);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static class AMordhauEquipment* GetRandomWeapon(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int& ID);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static class UUpperChestWearable* GetRandomUpperChestWearable(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int& ID);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void GetRandomSkin(class AMordhauEquipment* Equipment, EItemRarity MaxRarity, int& ID, struct FEquipmentSkinEntry& Skin);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static class UMordhauWearable* GetRandomShouldersWearable(class UUpperChestWearable* UpperChestWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int& ID);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static class AMordhauEquipment* GetRandomRangedWeapon(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int& ID);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static class AMordhauEquipment* GetRandomMeleeWeapon(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int& ID);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static class UMordhauWearable* GetRandomLowerChestWearable(class UUpperChestWearable* UpperChestWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int& ID);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static class ULegsWearable* GetRandomLegsWearable(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int& ID);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static class UHeadWearable* GetRandomHeadWearable(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int& ID);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static class UMordhauWearable* GetRandomHandsWearable(class UArmsWearable* ArmsWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int& ID);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static class UMordhauWearable* GetRandomFeetWearable(class ULegsWearable* LegsWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int& ID);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static struct FVector GetRandomFaceCustomizationVector(float RandomExponent);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static class AMordhauEquipment* GetRandomEquipment(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int& ID);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static class UMordhauWearable* GetRandomCoifWearable(class UHeadWearable* HeadWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int& ID);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static class UArmsWearable* GetRandomArmsWearable(class UUpperChestWearable* UpperChestWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int& ID);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static struct FDateTime GetPlayFabTimestamp();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static struct FPlayFabPlayer GetPlayFabPlayer();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static FString GetPlayFabId();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static FString GetPlayFabEntityID();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static class UPlayFabAPI* GetPlayFabAPI();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static class UTexture2D* GetPlayerAvatar(const struct FPlayFabPlayer& Player);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static FString GetPlatformName(EPlatform Platform);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static EPlatform GetPlatformByName(const FString& PlatformName);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static EPlatform GetPlatform();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static float GetPing(class UObject* WorldContextObject, bool bUseMedian);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static struct FTransform GetPhysicsBodyWorldTransform(class USkeletalMeshComponent* MeshComponent, const FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static struct FBox GetPhysicsBodyBounds(class USkeletalMeshComponent* MeshComponent, const FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static int GetPerksCost(const struct FCharacterProfile& Profile);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static TArray<class UPerk*> GetPerks(const struct FCharacterProfile& Profile);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static int GetPerforceRevision();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static int GetPacketsLost(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static FString GetOSVersion();
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool GetNotifyServerReceivedClientData(class UCharacterMovementComponent* CMC);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static float GetNormalizedTime(float Start, float End, float Current);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static struct FVector2D GetMousePosition(class APlayerController* Controller);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static class UMordhauStats* GetMordhauStats();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static class UMordhauSingleton* GetMordhauSingleton();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static class UMordhauInventory* GetMordhauInventory();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static class UMordhauInput* GetMordhauInput();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static class AMordhauHUD* GetMordhauHUD(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static class UMordhauGameUserSettings* GetMordhauGameUserSettings();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static class AMordhauGameSession* GetMordhauGameSession(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static int GetMaxIndexWithDraw(TArray<int> inArray, bool& bFoundDraw);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static FString GetMapName(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static struct FMapInfo GetMapInfo(class UObject* WorldContextObject, const FString& MapPath);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static class UPrimitiveComponent* GetLODParentPrimitive(class UPrimitiveComponent* Comp);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static FString GetLocationName(EServerLocation Location);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static FText GetLocationDisplayName(EServerLocation Location);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static EServerLocation GetLocation(const FString& LocationName);
	UFUNCTION()
		static uint32 GetLocalNetworkVersion();
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static float GetLastReceiveTime(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool GetIsPeasant(const struct FCharacterProfile& Profile);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static EIngameEvent GetIngameEvent(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static struct FBoxSphereBounds GetImportedBounds(class USkeletalMeshComponent* SkeletalMeshComponent);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static int GetGameServerGamePort();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static FString GetGamePortName();
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static int GetFaceIndex(const struct FHitResult& Hit);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static FText getErrorText(const FString& ErrorString);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static int GetEnumValue(const FString& EnumName, const FString& EnumKey);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static FString GetEnumKey(const FString& EnumName, int EnumValue);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static class UMordhauWearable* GetDefaultWearable(class UClass* FromClass);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static void GetDefaultObjectCopy(class UClass* FromClass, class UObject*& ObjectCopy);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static class UObject* GetDefaultObject(class UClass* FromClass);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static void GetDefaultActorCopy(class UClass* FromClass, class AActor*& ActorCopy);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static class AActor* GetDefaultActor(class UClass* FromClass);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static struct FDateTime GetDateTimeFromUnixTimestamp(int Timestamp);

	//	static struct FVector2D GetCustomConfigVar_Vector2D(const FString& SectionName, const FString& VariableName, bool& IsValid);
	//	static struct FVector GetCustomConfigVar_Vector(const FString& SectionName, const FString& VariableName, bool& IsValid);
	//	static FString GetCustomConfigVar_String(const FString& SectionName, const FString& VariableName, bool& IsValid);
	//	static struct FRotator GetCustomConfigVar_Rotator(const FString& SectionName, const FString& VariableName, bool& IsValid);
	//	static int GetCustomConfigVar_Int(const FString& SectionName, const FString& VariableName, bool& IsValid);
	//	static float GetCustomConfigVar_Float(const FString& SectionName, const FString& VariableName, bool& IsValid);
	//	static struct FLinearColor GetCustomConfigVar_Color(const FString& SectionName, const FString& VariableName, bool& IsValid);
	//	static bool GetCustomConfigVar_Bool(const FString& SectionName, const FString& VariableName, bool& IsValid);
	//	static TArray<FString> GetCustomConfigVar_Array(const FString& SectionName, const FString& VariableName, int& ArraySize);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static FString GetCurrentPlatformName();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static int GetCurrentFrameBP(class UObject* WorldContextObject);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static int GetCurrentFrame(class UWorld* World);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static float GetCurrentDemoTime(class UWorld* World);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static FString GetConsoleVariableString(const FString& VariableName);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static int GetConsoleVariableInt(const FString& VariableName);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static float GetConsoleVariableFloat(const FString& VariableName);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static struct FVector GetComponentsBoundingBoxInActorSpace(class AActor* Actor);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static struct FVector GetCentroid(TArray<struct FVector> Points);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool GetCanEverAffectNavigation(class USceneComponent* SceneComp);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static int GetBuildVersion();
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static struct FVector GetBoxCenter(const struct FBox& Box);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static struct FBox GetBoundingBoxOfBoneInfluence(class USkeletalMeshComponent* MeshComponent, TArray<FName> Bones, float WeightThreshold);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static FString GetBeaconPortName();
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static FString GetBannedPerkNames(const struct FCharacterProfile& Profile, class AGameStateBase* GameState);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static FString GetBannedEquipmentNames(const struct FCharacterProfile& Profile, class AGameStateBase* GameState);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static struct FVector GetAxisAngleFromRotator(const struct FRotator& Rot, float& OutAngle);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static class AActor* GetAttachParentActor(class AActor* Actor);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static class UArchetype* GetArchetypeObject(const struct FCharacterProfile& Profile);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static TArray<class UClass*> GetAllWearableClassesForSlotExhaustive(EWearableSlot Slot);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static void FSmoothDamp(float Target, float SmoothTime, float DeltaTime, float MaxSpeed, float& Current, float& CurrentVelocity);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static FText FormatText(const FText& Text);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool ForceValidCharacterProfile(const struct FCharacterProfile& Profile, bool bValidateInventory, struct FCharacterProfile& ForceValidatedProfile);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void ForceReplicationUpdate(class UCharacterMovementComponent* CMC);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void FlushPlayerControllerPressedKeys(class APlayerController* Controller);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void FlashWindow();
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static float FInterpToSeparate(float Current, float Target, float DeltaTime, float IncreaseSpeed, float DecreaseSpeed);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static float FInterpConstantToSeparate(float Current, float Target, float DeltaTime, float IncreaseSpeed, float DecreaseSpeed);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool FindTeleportSpot(class AActor* Actor, const struct FVector& InLocation, const struct FRotator& InRotation, struct FVector& OutLocation);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static struct FPlayFabPlayer FindPlayFabPlayer(const FString& PlayerNameOrPlayFabID);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static class AMordhauPlayerState* FindPlayerState(const FString& PlayerNameOrPlayFabID);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool FindCircleIntersectionPoints(const struct FVector2D& CenterA, float RadiusA, const struct FVector2D& CenterB, float RadiusB, struct FVector2D& PointA, struct FVector2D& PointB);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static struct FRotator FindBetween(const struct FVector& A, const struct FVector& B);

	// 	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
	// 	static TArray<class UObject*> FilterArrayByFunction(TArray<class UObject*> Array, FScriptDelegate FuncDel, class UClass* Class);

	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void FakeTickComponent(class USceneComponent* Component, float DeltaTime);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static bool Equal_PlayFabPlayer(const struct FPlayFabPlayer& A, const struct FPlayFabPlayer& B);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void DrawText(class UCanvas* Canvas, class UFont* Font, int Size, const FString& Text, const struct FVector2D& Position, const struct FLinearColor& TextColor, float Kerning, const struct FLinearColor& ShadowColor, const struct FVector2D& ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, const struct FLinearColor& OutlineColor);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool DoesProfileContainBannedPerks(const struct FCharacterProfile& Profile, class AGameStateBase* GameState);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool DoesProfileContainBannedEquipment(const struct FCharacterProfile& Profile, class AGameStateBase* GameState);

	//	static void CopyToClipboard(const FString& MessageToCopy);

	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void ConvertStringSteamIDsToPlayFabIDs(const TArray<FString> InSteamIDArray, const FString& Filename, FUtilGetPlayFabIDsFromSteamIDsDelegate Delegate);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool ConsumeBudget(class AAdvancedCharacter* Character, EBudgetType BudgetType, bool bSkipInvisible, float Duration, float DistanceCutoff, bool bForce);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static int ComputePointsLeft(const struct FCharacterProfile& Profile);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool CompressData(TArray<uint8> InData, FString& OutData);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool CompareGearCustomization(const struct FCharacterGearCustomization& First, const struct FCharacterGearCustomization& Second);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool CompareFaceCustomization(const struct FFaceCustomization& First, const struct FFaceCustomization& Second);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool CompareEquipmentCustomization(const struct FEquipmentCustomization& First, const struct FEquipmentCustomization& Second);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool CompareAppearanceCustomization(const struct FAppearanceCustomization& First, const struct FAppearanceCustomization& Second);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static struct FVector ClosestPointOnLine(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& Point);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static FString Capitalize(const FString& String);

	//	static bool CallFunctionByNameWithArgs(const FString& Str, class UObject* Executor);

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static int CalculateGCD(int ValueA, int ValueB);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static float CalculateAngle2D(const struct FVector& Direction, float Yaw);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void AwardTeamfightMMR(bool bIsWin, const FString& PlayFabId, int OtherTeamMMR, int& NewMMR);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static void AwardDuelMMR(const FString& WinnerID, const FString& LoserID, int& NewWinnerMMR, int& NewLoserMMR);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool AreProfilesEqual(const struct FCharacterProfile& First, const struct FCharacterProfile& Second);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static bool AreActorsFromSameLevel(class AActor* ActorA, class AActor* ActorB);
	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "Mordhau Utility Library")
		static float AngularDistance(const struct FRotator& A, const struct FRotator& B);
	UFUNCTION(BlueprintCallable, Category = "Mordhau Utility Library")
		static float ActorGetDistanceToCollision(class AActor* Actor, const struct FVector& Point, TEnumAsByte<ECollisionChannel> TraceChannel, struct FVector& PointOnCollision);
};
