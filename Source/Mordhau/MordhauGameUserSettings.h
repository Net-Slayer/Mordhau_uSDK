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
 bool ShouldShowWatermark();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowTips();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowTargetInfo();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowStatusBar();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowSpawnInfo();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowScoreFeed();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowObservedDelay();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowMatchmakingOverride();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowMatchmakingDebug();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowKillFeed();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowKilledBy();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowHUD();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowHitMarker();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowEquipment();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowEmotesMenu();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowCrosshair();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowChatBox();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowBlood();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowAnnouncements();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldShowAmmo();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldQuickSpawn();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
 bool ShouldDrawTracers();


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
float GetVideoVolume();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
struct FVector2D GetTracersStayTimeLimits();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetTracersStayTime();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetThirdPersonDeathCamera();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowTips();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowTargetInfo();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowStatusBar();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowSpawnInfo();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowScoreFeed();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowObservedDelay();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowKillFeed();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowKilledBy();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowHitMarker();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowEquipment();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowEmotesMenu();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowCrosshair();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowChatBox();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowAnnouncements();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetShowAmmo();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
FString GetServerBrowserServerName();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
bool GetServerBrowserNotFull();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
bool GetServerBrowserNoPassword();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetServerBrowserMaxPing();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
bool GetServerBrowserHasPlayers();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
FString GetServerBrowserGameMode();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetScreenSpaceReflections();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
struct FVector2D GetScreenPercentageLimits();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetScreenPercentage();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetRagdollStayTimeLimit();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetRagdollStayTime();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetRagdollFidelity();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetQuickSpawn();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetNoTeamColorsOnGear();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetMusicVolume();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
struct FVector2D GetMouseSmoothingLimits();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetMouseSmoothing();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
struct FVector2D GetMotionBlurLimits();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetMotionBlur();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetMaxRagdollsLimit();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetMaxRagdolls();
//UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
//EServerRegion GetMatchmakingRegion();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
void GetMatchmakingGameModes(TArray<FString>& Modes);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetMasterVolume();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetLensFlares();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
FString GetLanguage();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetIndirectCapsuleShadows();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetHideWatermark();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetHideHUD();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetHideDefaultLoadouts();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
struct FVector2D GetHeadbobLimits();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetHeadbob();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetGore();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
struct FVector2D GetGammaLimits();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetGamma();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetFriendlyMarkers();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
struct FVector2D GetFrameRateLimits();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
struct FVector2D GetFieldOfViewLimits();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetFieldOfView();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetEffectsVolume();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetDrawTracers();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetCurrentMotionBlur();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetCurrentGamma();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetCurrentBloom();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetCrosshairType();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetCharacterFidelity();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetCharacterCloth();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
struct FVector2D GetCameraDistanceLimits();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetCameraDistance();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
struct FVector2D GetBloomLimits();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
float GetBloom();
//UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
//void GetAvailableLanguages(TArray<FString> AvailableLanguages);
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetAntiAliasing();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetAmbientOcclusion();
UFUNCTION(BlueprintCallable, Category="GameSettingsFns")
int GetActualCrosshairType();
};
