// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mordhau.h"
#include "GameFramework/GameUserSettings.h"
#include "MordhauGameUserSettings.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UMordhauGameUserSettings : public UGameUserSettings
{
	GENERATED_BODY()
	
public:
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FScriptMulticastDelegate                    OnSettingsChanged;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString>                             AvailableLanguages;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                           MordhauVersion;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString                                     Language;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                Gore;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                ThirdPersonDeathCamera;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                CharacterCloth;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                FriendlyMarkers;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                HideDefaultLoadouts;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                NoTeamColorsOnGear;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Headbob;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                MaxRagdolls;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RagdollStayTime;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MouseSmoothing;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                DrawTracers;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              DrawTracersStayTime;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                ShowCrosshair;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                CrosshairType;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                ShowKilledBy;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                ShowStatusBar;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                ShowTargetInfo;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                ShowSpawnInfo;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                ShowChatBox;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                ShowEmotesMenu;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                ShowEquipment;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                ShowAmmo;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                ShowAnnouncements;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                ShowTips;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                ShowHitMarker;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                ShowScoreFeed;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                ShowKillFeed;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                QuickSpawn;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                ShowObservedDelay;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                HideWatermark;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ScreenPercentage;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              FieldOfView;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              CameraDistance;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Gamma;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                AntiAliasing;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                IndirectCapsuleShadows;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                CharacterFidelity;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                RagdollFidelity;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                ScreenSpaceReflections;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Bloom;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MotionBlur;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                AmbientOcclusion;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                LensFlares;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MasterVolume;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              EffectsVolume;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MusicVolume;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              VideoVolume;

	/*
	 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EServerRegion                                      MatchmakingRegion;

*/
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<FString>                             MatchmakingGameModes;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bServerBrowserNotFull;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bServerBrowserHasPlayers;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bServerBrowserNoPassword;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString                                     ServerBrowserServerName;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString                                     ServerBrowserGameMode;
 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                ServerBrowserMaxPing;


 UFUNCTION(BlueprintCallable, Category = "GameSettingsFns")
 bool ShouldShowWatermark() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowTips() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowTargetInfo() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowStatusBar() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowSpawnInfo() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowScoreFeed() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowObservedDelay() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowMatchmakingOverride() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowMatchmakingDebug() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowKillFeed() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowKilledBy() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowHUD() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowHitMarker() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowEquipment() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowEmotesMenu() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowCrosshair() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowChatBox() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowBlood() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowAnnouncements() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowAmmo() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldQuickSpawn() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldDrawTracers() const;


UFUNCTION(BlueprintCallable, Category = "GameSettingsFns")
void SetVideoVolume(float NewVolume);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetTracersStayTime(float NewStayTime);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetThirdPersonDeathcamera(int NewThirdPersonDeathCamera);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetShowTips(int NewShowTips);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetShowTargetInfo(int NewShowTargetInfo);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetShowStatusBar(int NewShowStatusBar);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetShowSpawnInfo(int NewShowSpawnInfo);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetShowScoreFeed(int NewShowScoreFeed);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetShowObservedDelay(int NewShowObservedDelay);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetShowMatchmakingOverride(int NewShowMatchmakingOverride);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetShowMatchmakingDebug(int NewShowMatchmakingDebug);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetShowKillFeed(int NewShowKillFeed);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetShowKilledBy(int NewShowKilledBy);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetShowHitMarker(int NewShowHitMarker);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetShowEquipment(int NewShowEquipment);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetShowEmotesMenu(int NewEmotesMenu);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetShowCrosshair(int NewShowCrosshair);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetShowChatBox(int NewShowChatBox);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetShowAnnouncements(int NewShowAnnouncements);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetShowAmmo(int NewShowAmmo);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetServerBrowserServerName(const FString& NewServerName);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetServerBrowserNotFull(bool bNewNotFull);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetServerBrowserNoPassword(bool bNewNoPassword);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetServerBrowserMaxPing(int NewMaxPing);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetServerBrowserHasPlayers(bool bNewHasPlayers);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetServerBrowserGameMode(const FString& NewGameMode);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetScreenSpaceReflections(int NewScreenSpaceReflections);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetScreenPercentage(float NewScreenPercentage);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetRagdollStayTime(float NewTime);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetRagdollFidelity(int NewFidelity);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetQuickSpawn(int NewQuickSpawn);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetNoTeamColorsOnGear(int NewNoTeamColorsOnGear);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetMusicVolume(float NewVolume);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetMouseSmoothing(float NewSmoothing);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetMotionBlur(float NewMotionBlur);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetMaxRagdolls(int NewMax);
//UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
//void SetMatchmakingRegion(EServerRegion NewRegion);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetMatchmakingGameModes(TArray<FString> NewGameModes);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetMasterVolume(float NewVolume);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetLensFlares(int NewLensFlares);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetLanguage(const FString& NewLanguage);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetIndirectCapsuleShadows(int NewShadows);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetHideWatermark(int NewHideWatermark);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetHideHUD(int NewHideHUD);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetHideDefaultLoadouts(int NewHideDefaultLoadouts);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetHeadbob(float NewHeadbob);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetGore(int NewGore);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetGamma(float NewGamma);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetFriendlyMarkers(int NewFriendlyMarkers);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetFieldOfView(float NewFOV);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetEffectsVolume(float NewVolume);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetDrawTracers(int NewDrawTracers);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetCrosshairType(int NewCrosshairType);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetCharacterFidelity(int NewFidelity);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetCharacterCloth(int NewCharacterCloth);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetCameraDistance(float NewCameraDistance);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetBloom(float NewBloom);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetAntiAliasing(int NewAntiAliasing);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void SetAmbientOcclusion(int NewAmbientOcclusion);


UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetVideoVolume() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
struct FVector2D GetTracersStayTimeLimits() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetTracersStayTime() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetThirdPersonDeathCamera() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowTips() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowTargetInfo() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowStatusBar() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowSpawnInfo() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowScoreFeed() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowObservedDelay() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowKillFeed() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowKilledBy() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowHitMarker() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowEquipment() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowEmotesMenu() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowCrosshair() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowChatBox() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowAnnouncements() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowAmmo() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
FString GetServerBrowserServerName() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
bool GetServerBrowserNotFull() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
bool GetServerBrowserNoPassword() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetServerBrowserMaxPing() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
bool GetServerBrowserHasPlayers() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
FString GetServerBrowserGameMode() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetScreenSpaceReflections() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
struct FVector2D GetScreenPercentageLimits() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetScreenPercentage() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetRagdollStayTimeLimit() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetRagdollStayTime() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetRagdollFidelity() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetQuickSpawn() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetNoTeamColorsOnGear() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetMusicVolume() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
struct FVector2D GetMouseSmoothingLimits() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetMouseSmoothing() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
struct FVector2D GetMotionBlurLimits() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetMotionBlur() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetMaxRagdollsLimit() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetMaxRagdolls() const;
//UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
//EServerRegion GetMatchmakingRegion() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void GetMatchmakingGameModes(TArray<FString>& Modes) const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetMasterVolume() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetLensFlares() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
FString GetLanguage() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetIndirectCapsuleShadows() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetHideWatermark() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetHideHUD() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetHideDefaultLoadouts() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
struct FVector2D GetHeadbobLimits() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetHeadbob() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetGore() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
struct FVector2D GetGammaLimits() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetGamma() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetFriendlyMarkers() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
struct FVector2D GetFrameRateLimits() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
struct FVector2D GetFieldOfViewLimits() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetFieldOfView() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetEffectsVolume() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetDrawTracers() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetCurrentMotionBlur() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetCurrentGamma() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetCurrentBloom() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetCrosshairType() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetCharacterFidelity() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetCharacterCloth() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
struct FVector2D GetCameraDistanceLimits() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetCameraDistance() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
struct FVector2D GetBloomLimits() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetBloom() const;
//UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
//void GetAvailableLanguages(TArray<FString> AvailableLanguages);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetAntiAliasing() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetAmbientOcclusion() const;
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetActualCrosshairType() const;
};
