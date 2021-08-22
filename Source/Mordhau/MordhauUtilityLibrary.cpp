// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauUtilityLibrary.h"

bool UMordhauUtilityLibrary::AreActorsFromSameLevel(class AActor* ActorA, class AActor* ActorB)
{
	return false;
}

float UMordhauUtilityLibrary::AngularDistance(const FRotator & A, const FRotator & B)
{
	return 0.0f;
}

float UMordhauUtilityLibrary::ActorGetDistanceToCollision(AActor * Actor, const FVector & Point, TEnumAsByte<ECollisionChannel> TraceChannel, FVector & PointOnCollision)
{
	return 0.0f;
}

FVector2D UMordhauUtilityLibrary::GetCustomConfigVar_Vector2D(FString SectionName, FString VariableName, bool & IsValid)
{
	return FVector2D();
}

FVector UMordhauUtilityLibrary::GetCustomConfigVar_Vector(FString SectionName, FString VariableName, bool & IsValid)
{
	return FVector();
}

FString UMordhauUtilityLibrary::GetCustomConfigVar_String(FString SectionName, FString VariableName, bool & IsValid)
{
	return FString();
}

FRotator UMordhauUtilityLibrary::GetCustomConfigVar_Rotator(FString SectionName, FString VariableName, bool & IsValid)
{
	return FRotator();
}

int32 UMordhauUtilityLibrary::GetCustomConfigVar_Int(FString SectionName, FString VariableName, bool & IsValid)
{
	return int32();
}

float UMordhauUtilityLibrary::GetCustomConfigVar_Float(FString SectionName, FString VariableName, bool & IsValid)
{
	return 0.0f;
}

void UMordhauUtilityLibrary::GetCustomConfigVar_Color(FString SectionName, FString VariableName, bool & IsValid, FLinearColor & colorReturn)
{
}

bool UMordhauUtilityLibrary::GetCustomConfigVar_Bool(FString SectionName, FString VariableName, bool & IsValid)
{
	return false;
}

void UMordhauUtilityLibrary::SetCustomConfigVar_Vector2D(const FString & SectionName, const FString & VariableName, const FVector2D & Value)
{
}

void UMordhauUtilityLibrary::SetCustomConfigVar_Vector(const FString & SectionName, const FString & VariableName, const FVector & Value)
{
}

void UMordhauUtilityLibrary::SetCustomConfigVar_String(const FString & SectionName, const FString & VariableName, const FString & Value)
{
}

void UMordhauUtilityLibrary::SetCustomConfigVar_Rotator(const FString & SectionName, const FString & VariableName, const FRotator & Value)
{
}

void UMordhauUtilityLibrary::SetCustomConfigVar_Int(const FString & SectionName, const FString & VariableName, int32 Value)
{
}

void UMordhauUtilityLibrary::SetCustomConfigVar_Float(const FString & SectionName, const FString & VariableName, float Value)
{
}

void UMordhauUtilityLibrary::SetCustomConfigVar_Color(const FString & SectionName, const FString & VariableName, const FLinearColor & Value)
{
}

void UMordhauUtilityLibrary::SetCustomConfigVar_Bool(const FString & SectionName, const FString & VariableName, bool Value)
{
}

TArray<FString> UMordhauUtilityLibrary::SortStringArray(const TArray<FString>& Array, bool bSortAscending)
{
	return TArray<FString>();
}

TArray<int> UMordhauUtilityLibrary::SortIntArray(const TArray<int>& Array, bool bSortAscending)
{
	return TArray<int>();
}

TArray<UObject*> UMordhauUtilityLibrary::SortArrayByProperty(const TArray<UObject*>& Array, const FName & PropertyName, bool bAscending, bool & bWasTypeValid)
{
	return TArray<UObject*>();
}

bool UMordhauUtilityLibrary::CallFunctionByNameWithArgs(const FString & Str, UObject * Executor)
{
	return false;
}

TArray<FString> UMordhauUtilityLibrary::GetCustomConfigVar_Array(FString SectionName, FString VariableName, int & ArraySize)
{
	return TArray<FString>();
}

void UMordhauUtilityLibrary::SetCustomConfigVar_Array(FString SectionName, FString VariableName, TArray<FString> Value)
{
}

bool UMordhauUtilityLibrary::SendMessageToRconClients(const FString & Message, const int & ClientID, bool bToAll, EBroadcastTypes TypeOfBroadcast)
{
	return false;
}

bool UMordhauUtilityLibrary::SaveStringToFile(const FString & FileName, const FString & String)
{
	return false;
}

void UMordhauUtilityLibrary::PrintToConsoleAndLog(FString String)
{
}

bool UMordhauUtilityLibrary::SaveStringArrayToFile(const FString & FileName, const TArray<FString>& StringArray)
{
	return false;
}

bool UMordhauUtilityLibrary::SaveArrayToFile(const FString & FileName, TArray<uint8> ByteArray)
{
	return false;
}

bool UMordhauUtilityLibrary::LoadStringFromFile(const FString & FileName, FString & LoadedString)
{
	return false;
}

bool UMordhauUtilityLibrary::LoadStringArrayFromFile(const FString & FileName, TArray<FString>& LoadedStringArray)
{
	return false;
}

bool UMordhauUtilityLibrary::LoadArrayFromFile(const FString & FileName, TArray<uint8>& LoadedArray)
{
	return false;
}

void UMordhauUtilityLibrary::CopyToClipboard(const FString & MessageToCopy)
{
}

void UMordhauUtilityLibrary::VSmoothDamp(const FVector & Target, float SmoothTime, float DeltaTime, float MaxSpeed, FVector & Current, FVector & CurrentVelocity)
{
}

bool UMordhauUtilityLibrary::ValidateCharacterProfile(const FCharacterProfile & Profile, bool bValidateInventory)
{
	return false;
}

FString UMordhauUtilityLibrary::UploadChat(const FString & ChatString)
{
	return FString();
}

void UMordhauUtilityLibrary::UnpossessCharacterAndHandleSpectating(AController * Controller)
{
}

bool UMordhauUtilityLibrary::UnmountPak(const FString & PakPath)
{
	return false;
}

bool UMordhauUtilityLibrary::UncompressData(const FString & InData, TArray<uint8>& OutData)
{
	return false;
}

bool UMordhauUtilityLibrary::TryExecuteHeavydutyOperation(UWorld * WorldObject, bool bIsForced)
{
	return false;
}

void UMordhauUtilityLibrary::TermAllChildBodiesOf(USkeletalMeshComponent * USMC, const FName & BoneName)
{
}

FCharacterProfile UMordhauUtilityLibrary::StripProfile(const FCharacterProfile & InProfile, bool bStripEquipment, bool bStripPerks, bool bStripNonTier0Armor)
{
	return FCharacterProfile();
}

UDecalComponent * UMordhauUtilityLibrary::SpawnBloodDecalAtLocation(UObject * WorldContextObject, UMaterialInterface * DecalMaterial, const FVector DecalSize, const FVector Location, const FRotator Rotation, float LifeSpan)
{
	return nullptr;
}

TArray<FString> UMordhauUtilityLibrary::SortQueueNamesByBestMatch(TMap<FString, struct FPlayFabMatchmakingMatch> Matches)
{
	return TArray<FString>();
}

TArray<class AMordhauPlayerState*> UMordhauUtilityLibrary::SortPlayers(TArray<class AMordhauPlayerState*> Array)
{
	return TArray<class AMordhauPlayerState*>();
}

TArray<struct FServerSearchResult> UMordhauUtilityLibrary::SortForServerBrowserByServerName(TArray<struct FServerSearchResult> Array, bool bSortAscending)
{
	return TArray<struct FServerSearchResult>();
}

TArray<struct FServerSearchResult> UMordhauUtilityLibrary::SortForServerBrowserByPing(TArray<struct FServerSearchResult> Array, bool bSortAscending)
{
	return TArray<struct FServerSearchResult>();
}

TArray<struct FServerSearchResult> UMordhauUtilityLibrary::SortForServerBrowserByMapName(TArray<struct FServerSearchResult> Array, bool bSortAscending)
{
	return TArray<struct FServerSearchResult>();
}

TArray<struct FServerSearchResult> UMordhauUtilityLibrary::SortForServerBrowserByGameModeName(TArray<struct FServerSearchResult> Array, bool bSortAscending)
{
	return TArray<struct FServerSearchResult>();
}

TArray<struct FServerSearchResult> UMordhauUtilityLibrary::SortForServerBrowserByCount(TArray<struct FServerSearchResult> Array, bool bSortAscending)
{
	return TArray<struct FServerSearchResult>();
}

TArray<struct FPlayFabGameServer> UMordhauUtilityLibrary::SortForMatchmakingByLocationPreference(TArray<struct FPlayFabGameServer> Servers, TArray<EServerLocation> LocationPreferece)
{
	return TArray<struct FPlayFabGameServer>();
}

TArray<struct FServerSearchResult> UMordhauUtilityLibrary::SortForMatchmaking(TArray<struct FServerSearchResult> Array)
{
	return TArray<struct FServerSearchResult>();
}

float UMordhauUtilityLibrary::Snap180AngleToSteps(float Angle180, float Step)
{
	return 0.0f;
}

bool UMordhauUtilityLibrary::SLessThan(const FString & StringA, const FString & StringB)
{
	return false;
}

bool UMordhauUtilityLibrary::SGreaterThan(const FString & StringA, const FString & StringB)
{
	return false;
}

void UMordhauUtilityLibrary::SetVisibilityId(UPrimitiveComponent * Comp, int NewId)
{
}

void UMordhauUtilityLibrary::SetSoundMixVolume(ESoundMix SoundMix, float Volume)
{
}

void UMordhauUtilityLibrary::SetPerBoneMotionBlur(USkeletalMeshComponent * Component, bool bNewValue)
{
}

void UMordhauUtilityLibrary::SetPawnFromRep(AController * Contr, APawn * NewPawn)
{
}

void UMordhauUtilityLibrary::SetNeverDistanceCull(UPrimitiveComponent * Comp, bool bNewValue)
{
}

void UMordhauUtilityLibrary::SetNavAreaClass(UShapeComponent * ShapeComponent, UClass * AreaClass)
{
}

void UMordhauUtilityLibrary::SetMousePosition(APlayerController * Controller, float LocationX, float LocationY)
{
}

void UMordhauUtilityLibrary::SetLODActorDrawDistance(ALODActor * Actor, float NewDrawDistance)
{
}

void UMordhauUtilityLibrary::SetLocalSpaceKinematics(USkeletalMeshComponent * Mesh, bool bNewValue)
{
}

void UMordhauUtilityLibrary::SetForceMipStreaming(USkeletalMeshComponent * SMC, bool bValue)
{
}

void UMordhauUtilityLibrary::SetDecalFadeScreenSize(UDecalComponent * Decal, float NewFadeScreenSize)
{
}

void UMordhauUtilityLibrary::SetCanEverAffectNavigation(UActorComponent * ActorComponent, bool bRelevant)
{
}

void UMordhauUtilityLibrary::SetCachedMaxDistanceAndMarkDirty(UPrimitiveComponent * Comp, float NewMaxDistance)
{
}

void UMordhauUtilityLibrary::SendClientAdjustment(UCharacterMovementComponent * CMC)
{
}

void UMordhauUtilityLibrary::ResetServerPredictionData(UCharacterMovementComponent * CMC)
{
}

void UMordhauUtilityLibrary::ResetController(AController * Controller)
{
}

void UMordhauUtilityLibrary::ResetClientPredictionData(UCharacterMovementComponent * CMC)
{
}

void UMordhauUtilityLibrary::ReserveCharacterRagdoll(AAdvancedCharacter * Character)
{
}

int UMordhauUtilityLibrary::RandomRangeExclude(int Min, int Max, int Exclude)
{
	return 0;
}

bool UMordhauUtilityLibrary::ProjectWorldToScreenBidirectional(APlayerController * Player, const FVector & WorldPosition, bool bPlayerViewportRelative, FVector2D & ScreenPosition, bool & bTargetBehindCamera)
{
	return false;
}

bool UMordhauUtilityLibrary::PlaneTrace(UObject * WorldContextObject, const FVector & Left, const FVector & Right, const FVector & Forward, const FVector & Back, const FVector & TraceAmount, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bConnectLeftRight, bool bConnectForwardBack, const FVector & ConnectOffset, bool bIgnoreSelf, FHitResult & LeftHit, FHitResult & RightHit, FHitResult & ForwardHit, FHitResult & BackHit, FVector & OutRight, FVector & OutForward)
{
	return false;
}

void UMordhauUtilityLibrary::PerformCharacterRenderingStressTest(UObject * WorldContextObject, UClass * Type, int Amount, float Spread)
{
}

void UMordhauUtilityLibrary::OpenURL(const FString & URL)
{
}

bool UMordhauUtilityLibrary::NotEqual_PlayFabPlayer(const FPlayFabPlayer & A, const FPlayFabPlayer & B)
{
	return false;
}

bool UMordhauUtilityLibrary::MountPak(const FString & PakPath)
{
	return false;
}

bool UMordhauUtilityLibrary::MordhauApplyRadialDamageWithFalloff(UObject * WorldContextObject, float BaseDamage, float MinimumDamage, float BaseStructureDamage, float MinimumStructureDamage, const FVector & Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TArray<class AActor*> IgnoreActors, float BaseKnockback, float MinimumKnockback, float RagdollFallRadius, AActor * DamageCauser, AController * InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, bool bIgnoreFriendly)
{
	return false;
}

void UMordhauUtilityLibrary::MarkRenderStateDirty(UMeshComponent * MeshComp)
{
}

FCharacterProfile UMordhauUtilityLibrary::MakeEmptyProfile(UClass * CharacterClass, bool bRandomizeVoice)
{
	return FCharacterProfile();
}

UObject * UMordhauUtilityLibrary::LoadAsset(const FSoftObjectPath & SoftObjectPath)
{
	return nullptr;
}

bool UMordhauUtilityLibrary::LineTraceMultiForObjectsReturnFace(UObject * WorldContextObject, const FVector & Start, const FVector & End, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, TEnumAsByte<EDrawDebugTrace::Type> DrawDebugType, bool bIgnoreSelf, TArray<struct FHitResult>& OutHits)
{
	return false;
}

FPOV UMordhauUtilityLibrary::LerpPOV(const FPOV & A, const FPOV & B, float Alpha)
{
	return FPOV();
}

bool UMordhauUtilityLibrary::IsValidIPAddress(const FString & IPAddress)
{
	return false;
}

bool UMordhauUtilityLibrary::IsValid_PlayFabPlayer(const FPlayFabPlayer & Player)
{
	return false;
}

bool UMordhauUtilityLibrary::IsStandalone()
{
	return false;
}

bool UMordhauUtilityLibrary::IsServer()
{
	return false;
}

bool UMordhauUtilityLibrary::IsReflexAvailable()
{
	return false;
}

bool UMordhauUtilityLibrary::IsPublicIPAddress(const FString & IPAddress)
{
	return false;
}

bool UMordhauUtilityLibrary::IsPrivateIPAddress(const FString & IPAddress)
{
	return false;
}

bool UMordhauUtilityLibrary::IsPlayInEditor()
{
	return false;
}

bool UMordhauUtilityLibrary::IsPartyMember(AMordhauPlayerState * Player)
{
	return false;
}

bool UMordhauUtilityLibrary::IsOfficialServer()
{
	return false;
}

bool UMordhauUtilityLibrary::IsListenServer()
{
	return false;
}

bool UMordhauUtilityLibrary::IsFriendlyToLocalPlayer(UWorld * WorldReference, AActor * OtherActor)
{
	return false;
}

bool UMordhauUtilityLibrary::IsFriend(AMordhauPlayerState * Player)
{
	return false;
}

bool UMordhauUtilityLibrary::IsEditor()
{
	return false;
}

bool UMordhauUtilityLibrary::IsDLCInstalled(EDownloadableContent DLC)
{
	return false;
}

bool UMordhauUtilityLibrary::IsDevelopmentBuild()
{
	return false;
}

bool UMordhauUtilityLibrary::IsDevelopmentBranch()
{
	return false;
}

bool UMordhauUtilityLibrary::IsDemoPlayback(UWorld * World)
{
	return false;
}

bool UMordhauUtilityLibrary::IsDedicatedServer()
{
	return false;
}

bool UMordhauUtilityLibrary::IsConsolePlatform()
{
	return false;
}

bool UMordhauUtilityLibrary::IsCommunityServer()
{
	return false;
}

bool UMordhauUtilityLibrary::IsClient()
{
	return false;
}

bool UMordhauUtilityLibrary::HasPath(AAIController * Controller)
{
	return false;
}

bool UMordhauUtilityLibrary::HasBeenReallyRecentlyRendered(UMeshComponent * MeshComponent)
{
	return false;
}

bool UMordhauUtilityLibrary::HasActorBegunPlay(AActor * Actor)
{
	return false;
}

FBox UMordhauUtilityLibrary::GrowBoxToIncludePoint(const FBox & Box, const FVector & Vector)
{
	return FBox();
}

int UMordhauUtilityLibrary::GetXPFromRank(int Rank)
{
	return 0;
}

UWorld * UMordhauUtilityLibrary::GetWorldOf(UObject * Object)
{
	return nullptr;
}

TArray<FText> UMordhauUtilityLibrary::GetWearableNames(const FCharacterGearCustomization & CharacterGearCustomization, EWearableSlot Slot)
{
	return TArray<FText>();
}

TArray<class UClass*> UMordhauUtilityLibrary::GetWearableClasses(const FCharacterGearCustomization & CharacterGearCustomization, EWearableSlot Slot)
{
	return TArray<class UClass*>();
}

UClass * UMordhauUtilityLibrary::GetWearableClass(const FCharacterGearCustomization & CharacterGearCustomization, EWearableSlot Slot)
{
	return nullptr;
}

int UMordhauUtilityLibrary::GetVisibilityId(UPrimitiveComponent * Comp)
{
	return 0;
}

AMordhauCharacter * UMordhauUtilityLibrary::GetViewTargetCharacter(UObject * WorldContextObject, bool bOnlyLiving)
{
	return nullptr;
}

FString UMordhauUtilityLibrary::GetVersionString()
{
	return FString();
}

FString UMordhauUtilityLibrary::GetVersionName()
{
	return FString();
}

float UMordhauUtilityLibrary::GetTotalDemoTime(UWorld * World)
{
	return 0.0f;
}

float UMordhauUtilityLibrary::GetSyncGroupPositionBetweenMarkers(UAnimInstance * AnimInstance, const FName & SyncGroup)
{
	return 0.0f;
}

bool UMordhauUtilityLibrary::GetSupportedScreenResolutions(TArray<FString>& Resolutions)
{
	return false;
}

void UMordhauUtilityLibrary::GetSoundMixInfo(const FString & Name, FSoundMixInfo & SoundMixInfo)
{
}

FString UMordhauUtilityLibrary::GetServerConnectString(const FPlayFabServerDetails & ServerDetails, const FString & PortName)
{
	return FString();
}

FName UMordhauUtilityLibrary::GetSculptableBoneAtLine(const FVector & LineStart, const FVector & LineEnd, float SearchRadius, USkeletalMeshComponent * MeshComponent, AMordhauCharacter * Character, int Level)
{
	return FName();
}

TEnumAsByte<ENetRole> UMordhauUtilityLibrary::GetRole(AActor * Actor)
{
	return TEnumAsByte<ENetRole>();
}

int UMordhauUtilityLibrary::GetReleaseVersion()
{
	return 0;
}

FString UMordhauUtilityLibrary::GetRegionName(EServerRegion Region)
{
	return FString();
}

FText UMordhauUtilityLibrary::GetRegionDisplayName(EServerRegion Region)
{
	return FText();
}

EServerRegion UMordhauUtilityLibrary::GetRegion(const FString & RegionName)
{
	return EServerRegion();
}

int UMordhauUtilityLibrary::GetRankFromXP(int XP)
{
	return 0;
}

AMordhauEquipment * UMordhauUtilityLibrary::GetRandomWeapon(const FSkillsCustomization & SkillsCustomization, EItemRarity MaxRarity, int & ID)
{
	return nullptr;
}

UUpperChestWearable * UMordhauUtilityLibrary::GetRandomUpperChestWearable(const FSkillsCustomization & SkillsCustomization, EItemRarity MaxRarity, int & ID)
{
	return nullptr;
}

void UMordhauUtilityLibrary::GetRandomSkin(AMordhauEquipment * Equipment, EItemRarity MaxRarity, int & ID, FEquipmentSkinEntry & Skin)
{
}

UMordhauWearable * UMordhauUtilityLibrary::GetRandomShouldersWearable(UUpperChestWearable * UpperChestWearable, const FSkillsCustomization & SkillsCustomization, EItemRarity MaxRarity, int & ID)
{
	return nullptr;
}

AMordhauEquipment * UMordhauUtilityLibrary::GetRandomRangedWeapon(const FSkillsCustomization & SkillsCustomization, EItemRarity MaxRarity, int & ID)
{
	return nullptr;
}

AMordhauEquipment * UMordhauUtilityLibrary::GetRandomMeleeWeapon(const FSkillsCustomization & SkillsCustomization, EItemRarity MaxRarity, int & ID)
{
	return nullptr;
}

UMordhauWearable * UMordhauUtilityLibrary::GetRandomLowerChestWearable(UUpperChestWearable * UpperChestWearable, const FSkillsCustomization & SkillsCustomization, EItemRarity MaxRarity, int & ID)
{
	return nullptr;
}

ULegsWearable * UMordhauUtilityLibrary::GetRandomLegsWearable(const FSkillsCustomization & SkillsCustomization, EItemRarity MaxRarity, int & ID)
{
	return nullptr;
}

UHeadWearable * UMordhauUtilityLibrary::GetRandomHeadWearable(const FSkillsCustomization & SkillsCustomization, EItemRarity MaxRarity, int & ID)
{
	return nullptr;
}

UMordhauWearable * UMordhauUtilityLibrary::GetRandomHandsWearable(UArmsWearable * ArmsWearable, const FSkillsCustomization & SkillsCustomization, EItemRarity MaxRarity, int & ID)
{
	return nullptr;
}

UMordhauWearable * UMordhauUtilityLibrary::GetRandomFeetWearable(ULegsWearable * LegsWearable, const FSkillsCustomization & SkillsCustomization, EItemRarity MaxRarity, int & ID)
{
	return nullptr;
}

FVector UMordhauUtilityLibrary::GetRandomFaceCustomizationVector(float RandomExponent)
{
	return FVector();
}

AMordhauEquipment * UMordhauUtilityLibrary::GetRandomEquipment(const FSkillsCustomization & SkillsCustomization, EItemRarity MaxRarity, int & ID)
{
	return nullptr;
}

UMordhauWearable * UMordhauUtilityLibrary::GetRandomCoifWearable(UHeadWearable * HeadWearable, const FSkillsCustomization & SkillsCustomization, EItemRarity MaxRarity, int & ID)
{
	return nullptr;
}

UArmsWearable * UMordhauUtilityLibrary::GetRandomArmsWearable(UUpperChestWearable * UpperChestWearable, const FSkillsCustomization & SkillsCustomization, EItemRarity MaxRarity, int & ID)
{
	return nullptr;
}

FDateTime UMordhauUtilityLibrary::GetPlayFabTimestamp()
{
	return FDateTime();
}

FPlayFabPlayer UMordhauUtilityLibrary::GetPlayFabPlayer()
{
	return FPlayFabPlayer();
}

FString UMordhauUtilityLibrary::GetPlayFabId()
{
	return FString();
}

FString UMordhauUtilityLibrary::GetPlayFabEntityID()
{
	return FString();
}

UPlayFabAPI * UMordhauUtilityLibrary::GetPlayFabAPI()
{
	return nullptr;
}

UTexture2D * UMordhauUtilityLibrary::GetPlayerAvatar(const FPlayFabPlayer & Player)
{
	return nullptr;
}

FString UMordhauUtilityLibrary::GetPlatformName(EPlatform Platform)
{
	return FString();
}

EPlatform UMordhauUtilityLibrary::GetPlatformByName(const FString & PlatformName)
{
	return EPlatform();
}

EPlatform UMordhauUtilityLibrary::GetPlatform()
{
	return EPlatform();
}

float UMordhauUtilityLibrary::GetPing(UObject * WorldContextObject, bool bUseMedian)
{
	return 0.0f;
}

FTransform UMordhauUtilityLibrary::GetPhysicsBodyWorldTransform(USkeletalMeshComponent * MeshComponent, const FName & BoneName)
{
	return FTransform();
}

FBox UMordhauUtilityLibrary::GetPhysicsBodyBounds(USkeletalMeshComponent * MeshComponent, const FName & BoneName)
{
	return FBox();
}

int UMordhauUtilityLibrary::GetPerksCost(const FCharacterProfile & Profile)
{
	return 0;
}

TArray<class UPerk*> UMordhauUtilityLibrary::GetPerks(const FCharacterProfile & Profile)
{
	return TArray<class UPerk*>();
}

int UMordhauUtilityLibrary::GetPerforceRevision()
{
	return 0;
}

int UMordhauUtilityLibrary::GetPacketsLost(UObject * WorldContextObject)
{
	return 0;
}

FString UMordhauUtilityLibrary::GetOSVersion()
{
	return FString();
}

bool UMordhauUtilityLibrary::GetNotifyServerReceivedClientData(UCharacterMovementComponent * CMC)
{
	return false;
}

float UMordhauUtilityLibrary::GetNormalizedTime(float Start, float End, float Current)
{
	return 0.0f;
}

FVector2D UMordhauUtilityLibrary::GetMousePosition(APlayerController * Controller)
{
	return FVector2D();
}

UMordhauStats * UMordhauUtilityLibrary::GetMordhauStats()
{
	return nullptr;
}

UMordhauSingleton * UMordhauUtilityLibrary::GetMordhauSingleton()
{
	return nullptr;
}

UMordhauInventory * UMordhauUtilityLibrary::GetMordhauInventory()
{
	return nullptr;
}

UMordhauInput * UMordhauUtilityLibrary::GetMordhauInput()
{
	return nullptr;
}

AMordhauHUD * UMordhauUtilityLibrary::GetMordhauHUD(UObject * WorldContextObject)
{
	return nullptr;
}

UMordhauGameUserSettings * UMordhauUtilityLibrary::GetMordhauGameUserSettings()
{
	return nullptr;
}

AMordhauGameSession * UMordhauUtilityLibrary::GetMordhauGameSession(UObject * WorldContextObject)
{
	return nullptr;
}

int UMordhauUtilityLibrary::GetMaxIndexWithDraw(TArray<int> inArray, bool & bFoundDraw)
{
	return 0;
}

FString UMordhauUtilityLibrary::GetMapName(UObject * WorldContextObject)
{
	return FString();
}

FMapInfo UMordhauUtilityLibrary::GetMapInfo(UObject * WorldContextObject, const FString & MapPath)
{
	return FMapInfo();
}

UPrimitiveComponent * UMordhauUtilityLibrary::GetLODParentPrimitive(UPrimitiveComponent * Comp)
{
	return nullptr;
}

FString UMordhauUtilityLibrary::GetLocationName(EServerLocation Location)
{
	return FString();
}

FText UMordhauUtilityLibrary::GetLocationDisplayName(EServerLocation Location)
{
	return FText();
}

EServerLocation UMordhauUtilityLibrary::GetLocation(const FString & LocationName)
{
	return EServerLocation();
}

uint32 UMordhauUtilityLibrary::GetLocalNetworkVersion()
{
	return uint32();
}

float UMordhauUtilityLibrary::GetLastReceiveTime(UObject * WorldContextObject)
{
	return 0.0f;
}

bool UMordhauUtilityLibrary::GetIsPeasant(const FCharacterProfile & Profile)
{
	return false;
}

EIngameEvent UMordhauUtilityLibrary::GetIngameEvent(UObject * WorldContextObject)
{
	return EIngameEvent();
}

FBoxSphereBounds UMordhauUtilityLibrary::GetImportedBounds(USkeletalMeshComponent * SkeletalMeshComponent)
{
	return FBoxSphereBounds();
}

int UMordhauUtilityLibrary::GetGameServerGamePort()
{
	return 0;
}

FString UMordhauUtilityLibrary::GetGamePortName()
{
	return FString();
}

int UMordhauUtilityLibrary::GetFaceIndex(const FHitResult & Hit)
{
	return 0;
}

FText UMordhauUtilityLibrary::getErrorText(const FString & ErrorString)
{
	return FText();
}

int UMordhauUtilityLibrary::GetEnumValue(const FString & EnumName, const FString & EnumKey)
{
	return 0;
}

FString UMordhauUtilityLibrary::GetEnumKey(const FString & EnumName, int EnumValue)
{
	return FString();
}

UMordhauWearable * UMordhauUtilityLibrary::GetDefaultWearable(UClass * FromClass)
{
	return nullptr;
}

void UMordhauUtilityLibrary::GetDefaultObjectCopy(UClass * FromClass, UObject *& ObjectCopy)
{
}

UObject * UMordhauUtilityLibrary::GetDefaultObject(UClass * FromClass)
{
	return nullptr;
}

void UMordhauUtilityLibrary::GetDefaultActorCopy(UClass * FromClass, AActor *& ActorCopy)
{
}

AActor * UMordhauUtilityLibrary::GetDefaultActor(UClass * FromClass)
{
	return nullptr;
}

FDateTime UMordhauUtilityLibrary::GetDateTimeFromUnixTimestamp(int Timestamp)
{
	return FDateTime();
}

FString UMordhauUtilityLibrary::GetCurrentPlatformName()
{
	return FString();
}

int UMordhauUtilityLibrary::GetCurrentFrameBP(UObject * WorldContextObject)
{
	return 0;
}

int UMordhauUtilityLibrary::GetCurrentFrame(UWorld * World)
{
	return 0;
}

float UMordhauUtilityLibrary::GetCurrentDemoTime(UWorld * World)
{
	return 0.0f;
}

FString UMordhauUtilityLibrary::GetConsoleVariableString(const FString & VariableName)
{
	return FString();
}

int UMordhauUtilityLibrary::GetConsoleVariableInt(const FString & VariableName)
{
	return 0;
}

float UMordhauUtilityLibrary::GetConsoleVariableFloat(const FString & VariableName)
{
	return 0.0f;
}

FVector UMordhauUtilityLibrary::GetComponentsBoundingBoxInActorSpace(AActor * Actor)
{
	return FVector();
}

FVector UMordhauUtilityLibrary::GetCentroid(TArray<struct FVector> Points)
{
	return FVector();
}

bool UMordhauUtilityLibrary::GetCanEverAffectNavigation(USceneComponent * SceneComp)
{
	return false;
}

int UMordhauUtilityLibrary::GetBuildVersion()
{
	return 0;
}

FVector UMordhauUtilityLibrary::GetBoxCenter(const FBox & Box)
{
	return FVector();
}

FBox UMordhauUtilityLibrary::GetBoundingBoxOfBoneInfluence(USkeletalMeshComponent * MeshComponent, TArray<FName> Bones, float WeightThreshold)
{
	return FBox();
}

FString UMordhauUtilityLibrary::GetBeaconPortName()
{
	return FString();
}

FString UMordhauUtilityLibrary::GetBannedPerkNames(const FCharacterProfile & Profile, AGameStateBase * GameState)
{
	return FString();
}

FString UMordhauUtilityLibrary::GetBannedEquipmentNames(const FCharacterProfile & Profile, AGameStateBase * GameState)
{
	return FString();
}

FVector UMordhauUtilityLibrary::GetAxisAngleFromRotator(const FRotator & Rot, float & OutAngle)
{
	return FVector();
}

AActor * UMordhauUtilityLibrary::GetAttachParentActor(AActor * Actor)
{
	return nullptr;
}

UArchetype * UMordhauUtilityLibrary::GetArchetypeObject(const FCharacterProfile & Profile)
{
	return nullptr;
}

TArray<class UClass*> UMordhauUtilityLibrary::GetAllWearableClassesForSlotExhaustive(EWearableSlot Slot)
{
	return TArray<class UClass*>();
}

void UMordhauUtilityLibrary::FSmoothDamp(float Target, float SmoothTime, float DeltaTime, float MaxSpeed, float & Current, float & CurrentVelocity)
{
}

FText UMordhauUtilityLibrary::FormatText(const FText & Text)
{
	return FText();
}

bool UMordhauUtilityLibrary::ForceValidCharacterProfile(const FCharacterProfile & Profile, bool bValidateInventory, FCharacterProfile & ForceValidatedProfile)
{
	return false;
}

void UMordhauUtilityLibrary::ForceReplicationUpdate(UCharacterMovementComponent * CMC)
{
}

void UMordhauUtilityLibrary::FlushPlayerControllerPressedKeys(APlayerController * Controller)
{
}

void UMordhauUtilityLibrary::FlashWindow()
{
}

float UMordhauUtilityLibrary::FInterpToSeparate(float Current, float Target, float DeltaTime, float IncreaseSpeed, float DecreaseSpeed)
{
	return 0.0f;
}

float UMordhauUtilityLibrary::FInterpConstantToSeparate(float Current, float Target, float DeltaTime, float IncreaseSpeed, float DecreaseSpeed)
{
	return 0.0f;
}

bool UMordhauUtilityLibrary::FindTeleportSpot(AActor * Actor, const FVector & InLocation, const FRotator & InRotation, FVector & OutLocation)
{
	return false;
}

FPlayFabPlayer UMordhauUtilityLibrary::FindPlayFabPlayer(const FString & PlayerNameOrPlayFabID)
{
	return FPlayFabPlayer();
}

AMordhauPlayerState * UMordhauUtilityLibrary::FindPlayerState(const FString & PlayerNameOrPlayFabID)
{
	return nullptr;
}

bool UMordhauUtilityLibrary::FindCircleIntersectionPoints(const FVector2D & CenterA, float RadiusA, const FVector2D & CenterB, float RadiusB, FVector2D & PointA, FVector2D & PointB)
{
	return false;
}

FRotator UMordhauUtilityLibrary::FindBetween(const FVector & A, const FVector & B)
{
	return FRotator();
}

void UMordhauUtilityLibrary::FakeTickComponent(USceneComponent * Component, float DeltaTime)
{
}

bool UMordhauUtilityLibrary::Equal_PlayFabPlayer(const FPlayFabPlayer & A, const FPlayFabPlayer & B)
{
	return false;
}

void UMordhauUtilityLibrary::DrawText(UCanvas * Canvas, UFont * Font, int Size, const FString & Text, const FVector2D & Position, const FLinearColor & TextColor, float Kerning, const FLinearColor & ShadowColor, const FVector2D & ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, const FLinearColor & OutlineColor)
{
}

bool UMordhauUtilityLibrary::DoesProfileContainBannedPerks(const FCharacterProfile & Profile, AGameStateBase * GameState)
{
	return false;
}

bool UMordhauUtilityLibrary::DoesProfileContainBannedEquipment(const FCharacterProfile & Profile, AGameStateBase * GameState)
{
	return false;
}

void UMordhauUtilityLibrary::ConvertStringSteamIDsToPlayFabIDs(const TArray<FString> InSteamIDArray, const FString & Filename, FUtilGetPlayFabIDsFromSteamIDsDelegate Delegate)
{
}

bool UMordhauUtilityLibrary::ConsumeBudget(AAdvancedCharacter * Character, EBudgetType BudgetType, bool bSkipInvisible, float Duration, float DistanceCutoff, bool bForce)
{
	return false;
}

int UMordhauUtilityLibrary::ComputePointsLeft(const FCharacterProfile & Profile)
{
	return 0;
}

bool UMordhauUtilityLibrary::CompressData(TArray<uint8> InData, FString & OutData)
{
	return false;
}

bool UMordhauUtilityLibrary::CompareGearCustomization(const FCharacterGearCustomization & First, const FCharacterGearCustomization & Second)
{
	return false;
}

bool UMordhauUtilityLibrary::CompareFaceCustomization(const FFaceCustomization & First, const FFaceCustomization & Second)
{
	return false;
}

bool UMordhauUtilityLibrary::CompareEquipmentCustomization(const FEquipmentCustomization & First, const FEquipmentCustomization & Second)
{
	return false;
}

bool UMordhauUtilityLibrary::CompareAppearanceCustomization(const FAppearanceCustomization & First, const FAppearanceCustomization & Second)
{
	return false;
}

FVector UMordhauUtilityLibrary::ClosestPointOnLine(const FVector & LineStart, const FVector & LineEnd, const FVector & Point)
{
	return FVector();
}

FString UMordhauUtilityLibrary::Capitalize(const FString & String)
{
	return FString();
}

int UMordhauUtilityLibrary::CalculateGCD(int ValueA, int ValueB)
{
	return 0;
}

float UMordhauUtilityLibrary::CalculateAngle2D(const FVector & Direction, float Yaw)
{
	return 0.0f;
}

void UMordhauUtilityLibrary::AwardTeamfightMMR(bool bIsWin, const FString & PlayFabId, int OtherTeamMMR, int & NewMMR)
{
}

void UMordhauUtilityLibrary::AwardDuelMMR(const FString & WinnerID, const FString & LoserID, int & NewWinnerMMR, int & NewLoserMMR)
{
}

bool UMordhauUtilityLibrary::AreProfilesEqual(const FCharacterProfile & First, const FCharacterProfile & Second)
{
	return false;
}