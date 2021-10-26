#include "MordhauPlayerController.h"
#include "Net/UnrealNetwork.h"


bool AMordhauPlayerController::GetDefaultTierCustomizationForSlot(EMainWearableSlot MainSlot, uint8 ArmorTier, TMap<EWearableSlot, struct FWearableCustomization>& OutMap)
{
	return false;
}

bool AMordhauPlayerController::GetDefaultEquipmentCustomizationFor(UClass * ForEquipmentClass, FEquipmentCustomization & OutCustomization)
{
	return false;
}

AMordhauCharacter * AMordhauPlayerController::GetControlledMordhauCharacter(bool bAlsoSearchVehicle)
{
	return nullptr;
}

FVector2D AMordhauPlayerController::GetAnglingVector()
{
	return FVector2D();
}

float AMordhauPlayerController::GetAnglingAngle()
{
	return 0.0f;
}

void AMordhauPlayerController::FlushPendingAnglingInputs()
{
}

void AMordhauPlayerController::EquipmentCommand(int Command)
{
}

bool AMordhauPlayerController::CanAskForSpawn()
{
	return false;
}

void AMordhauPlayerController::BanList()
{
}

void AMordhauPlayerController::Ban(const FString & PlayerNameOrPlayFabID, int BanDuration, const FString & BanReason)
{
}

void AMordhauPlayerController::AskForSpawn()
{
}

bool AMordhauPlayerController::AreStatsAvailable()
{
	return false;
}

void AMordhauPlayerController::AdminLogin(const FString & Password)
{
}

void AMordhauPlayerController::AdminList()
{
}

void AMordhauPlayerController::AddBotsTeam(int Amount, int Team)
{
}

void AMordhauPlayerController::AddBots(int Amount)
{
}

void AMordhauPlayerController::AddAdmin(const FString & PlayerNameOrPlayFabID)
{
}

void AMordhauPlayerController::ChoiceMenu(int Index)
{
}

void AMordhauPlayerController::ChangeMap(const FString & MapName)
{
}

void AMordhauPlayerController::ChangeLevel(const FString & LevelName)
{
}

void AMordhauPlayerController::CancelVoteKick()
{
}

void AMordhauPlayerController::ClientReceiveScoreNoState(uint8 ReasonAndParam, int16 ScoreAmount)
{
}

void AMordhauPlayerController::ClientReceiveScore(uint8 ReasonAndParam, int16 ScoreAmount, AMordhauPlayerState * AssociatedPlayer)
{
}

void AMordhauPlayerController::ClientReceiveMessage_Implementation(const FString& Message)
{

}

void AMordhauPlayerController::ClientMessageBP(const FString & String)
{
}

void AMordhauPlayerController::ChooseExit()
{
}

void AMordhauPlayerController::Choose9()
{
}

void AMordhauPlayerController::Choose8()
{
}

void AMordhauPlayerController::Choose7()
{
}

void AMordhauPlayerController::Choose6()
{
}

void AMordhauPlayerController::Choose5()
{
}

void AMordhauPlayerController::Choose4()
{
}

void AMordhauPlayerController::Choose3()
{
}

void AMordhauPlayerController::Choose2()
{
}

void AMordhauPlayerController::Choose1()
{
}

void AMordhauPlayerController::CopyName(const FString & UniqueId)
{
}

void AMordhauPlayerController::CopyID(const FString & UniqueId)
{
}

void AMordhauPlayerController::ClientWasKicked_Implementation(const FText & KickReason)
{
}

void AMordhauPlayerController::MuteList()
{
}

void AMordhauPlayerController::Mute(const FString & PlayerNameOrPlayFabID, int MuteDuration)
{
}

void AMordhauPlayerController::MountPak(const FString & PakPath)
{
}

void AMordhauPlayerController::LookupPlayer(const FString & UniqueId)
{
}

void AMordhauPlayerController::LookUp(float Value)
{
}

void AMordhauPlayerController::Kick(const FString & PlayerNameOrPlayFabID, const FString & KickReason)
{
}

bool AMordhauPlayerController::IsSessionTicketAvailable()
{
	return false;
}

bool AMordhauPlayerController::IsInventoryAvailable()
{
	return false;
}

bool AMordhauPlayerController::IsAdmin()
{
	return false;
}

void AMordhauPlayerController::GiveClientScoreBP(EScoreFeedReason Reason, int ScoreAmount)
{
}

FPlayFabPlayer AMordhauPlayerController::GetPlayFabPlayer()
{
	return FPlayFabPlayer();
}

FString AMordhauPlayerController::GetPlayFabId()
{
	return FString();
}

AAdvancedCharacter * AMordhauPlayerController::GetNextViewablePlayerNonAuth(bool bReverse, bool bOnlyOwnTeam)
{
	return nullptr;
}

AMordhauCharacter * AMordhauPlayerController::GetLastControlledCharacter()
{
	return nullptr;
}

void AMordhauPlayerController::OnInventoryItemsUnlocked(bool bWasSuccessful, TArray<struct FItemStack> ItemStacks)
{
}

void AMordhauPlayerController::OnGetPlayFabPlayerComplete(bool bWasSuccessful, const FString & PlayFabId, const FPlayFabPlayer & PlayFabPlayer)
{
}

void AMordhauPlayerController::OnGetPlayFabIDsFromPlatformIDsComplete(bool bWasSuccessful, TMap<FString, FString> PlayFabIds)
{
}

void AMordhauPlayerController::OnPlayFabLoginComplete(bool bWasSuccessful, const FString & PlayFabId)
{
}

void AMordhauPlayerController::OnSettingsChanged()
{
}

void AMordhauPlayerController::PrepareAndSendCustomizationIfChanged()
{
}

void AMordhauPlayerController::PlayerStatus(const FString & PlayFabId)
{
}

void AMordhauPlayerController::PlayerList()
{
}

void AMordhauPlayerController::SaveCurrentProfilesAsBotProfiles()
{
}

void AMordhauPlayerController::RequestSphericalHitboxes()
{
}

void AMordhauPlayerController::RequestRewards()
{
}

void AMordhauPlayerController::RemoveBotsTeam(int Amount, int Team)
{
}

void AMordhauPlayerController::RemoveBots(int Amount)
{
}

void AMordhauPlayerController::RemoveAdmin(const FString & PlayerNameOrPlayFabID)
{
}

void AMordhauPlayerController::RegisterAnglingYInput(float Value)
{
}

void AMordhauPlayerController::RegisterAnglingXInput(float Value)
{
}

void AMordhauPlayerController::ShowAuthTraces(bool bValue)
{
}

bool AMordhauPlayerController::SharesInstanceWith(AActor * OtherActor)
{
	return false;
}

void AMordhauPlayerController::SetMaxNetSkip(int NewMaxNetSkip)
{
}

void AMordhauPlayerController::SetFriendlyNetSkipOffset(int NewFriendlyNetSkipOffset)
{
}

void AMordhauPlayerController::SetChoiceMenuConsumesInput(bool Value)
{
}

void AMordhauPlayerController::VoteMap(const FString & MapName)
{
}

void AMordhauPlayerController::VoteLevel(const FString & LevelName)
{
}

void AMordhauPlayerController::VoteKick(const FString & PlayerNameOrPlayFabID)
{
}

void AMordhauPlayerController::Unmute(const FString & PlayerNameOrPlayFabID)
{
}

void AMordhauPlayerController::UnmountPak(const FString & PakPath)
{
}

void AMordhauPlayerController::Unban(const FString & PlayFabId)
{
}

void AMordhauPlayerController::Turn(float Value)
{
}

void AMordhauPlayerController::ToggleStamina()
{
}

void AMordhauPlayerController::ToggleServerNetProfile()
{
}

void AMordhauPlayerController::ToggleDamage()
{
}

void AMordhauPlayerController::StopServerStatsFile()
{
}

void AMordhauPlayerController::StartServerStatsFile()
{
}

void AMordhauPlayerController::SpectatorCmd(const FString & SpecCmd)
{
}

void AMordhauPlayerController::Slomo(float Value)
{
}
