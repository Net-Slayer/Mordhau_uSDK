// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MordhauHUD.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API AMordhauHUD : public AHUD
{
	GENERATED_BODY()
	
	
public:
	/*
	class USceneComponent*                             DefaultSceneRoot;
	//TArray<class UUserWidget*>                         Widgets;
	class UBP_HUDWidget_C*                             HUD;
	class UBP_Scoreboard_C*                            Scoreboard;
	class UBP_ChatBox_C*                               ChatBox;
	class UBP_KillFeed_C*                              KillFeed;
	class UBP_StatusBar_C*                             StatusBar;
	class UBP_MainMenu_C*                              MainMenu;
	bool                                               IsHUDMinimal;
	//unsigned char                                      UnknownData00[0x7];
	class UBP_Crosshair_C*                             Crosshair;
	class UBP_TargetInfo_C*                            TargetInfo;
	class UBP_ProfileSelect_C*                         ProfileSelect;
	class UBP_TeamSelect_C*                            TeamSelect;
	class UBP_EmoteMenu_C*                             EmoteMenu;
	class UBP_Announcement_C*                          Announcement;
	class UBP_Watermark_C*                             Watermark;
	bool                                               bShowWatermark;
	//unsigned char                                      UnknownData01[0x7];
	//TArray<class UMordhauDialog*>                      QueuedDialogs;
	class UMordhauDialog*                              CurrentDialog;
	class UBP_EquipmentDisplay_C*                      EquipmentDisplay;
	class UBP_SpawnInfo_C*                             SpawnInfo;
	class UBP_NetIndicator_C*                          NetIndicator;
	class UBP_Tips_C*                                  Tips;
	class UBP_ScoreFeed_C*                             ScoreFeed;
	class UBP_EquipmentInfoDisplay_C*                  EquipmentInfoDisplay;
	class ABP_MordhauCustomizationPlatform_C*          CustomizationPlatform;
	class UBP_VoiceMenu_C*                             VoiceMenu;
	class UBP_SpawnScreen_C*                           SpawnScreen;
	class UBP_Objectives_C*                            Objectives;
	class UBP_CapPointInfoPanelWidget_C*               CapPointInfoPanel;
	class UBP_KilledByPanel_C*                         KilledByPanel;
	class UClass*                                      SpawnScreenWidgetClass;
	class UBP_PostMatchScreen_C*                       PostMatchScreen;
	class UBP_VoteKickMenu_C*                          VoteKickMenu;
	bool                                               LoadedSingleton;
	//unsigned char                                      UnknownData02[0x7];
	class UBP_ContextPopupWrapper_C*                   ContextPopupWrapper;
	*/
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<class AControlPoint*>                       CapturePointsOfInterest;                                  // 0x0420(0x0010) (BlueprintVisible, ZeroConstructor)
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauHUDFns")
		void OnGameStateReplicated();
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "MordhauHUDFns")
		void EnqueueMordhauDialog(class UMordhauDialog* Dialog);
	/*


	void CreateContextPopupWrapper();
	void HideVoteKickMenu();
	void ShowVoteKickMenu();
	void CreateVoteKickMenu();
	void ShowMatchResult(bool IsVictory, const struct FText& MainText, const struct FText& Subtext);
	void ShowPostMatchScreen();
	void CreatePostMatchScreen();
	void ShowKilledBy(class AMordhauPlayerState* Killer);
	void CreateKilledByPanelWidget();
	void ShowObjectiveWidget();
	void CreateObjectiveWidget(class UBP_Objectives_C** Widget);
	void HideSpawnScreen();
	void ShowSpawnScreen();
	void CreateSpawnScreen();
	void ShowVoiceMenu();
	void CreateVoiceMenu();
	void CreateEquipmentInfoDisplay();
	void CreateScoreFeed();
	void ShowTips();
	void CreateTips();
	void ShowEquipment();
	void CreateEquipmentDisplay();
	void CreateNetIndicator();
	void CreateSpawnInfo();
	void CreateMainMenu();
	void IsMainMenuVisible(bool& bIsVisible);
	void HideMainMenu();
	void ProcessQueuedDialogs();
	void EnqueueDialog(class UMordhauDialog* Dialog);
	void CreateWatermark();
	void ShowAnnouncement(const struct FText& Text, const struct FText& Subtext, float Duration);
	void CreateAnnouncement();
	void ShowEmoteMenu();
	void CreateEmoteMenu();
	void ShowTeamSelect();
	void CreateTeamSelect();
	void ShowProfileSelect();
	void CreateProfileSelect();
	void CreateChatBox();
	void CreateStatusBar();
	void CreateCrosshair();
	void CreateKillFeed();
	void CreateTargetInfo();
	void UseFullHUD();
	void UseMinimalHUD();
	void ShowMainMenu(TEnumAsByte<E_ArmoryStates> Armory_State);
	void SendMessageToKillFeed(class APlayerState* Killer, const struct FText& KilledBy, class APlayerState* Victim);
	void SendMessageToChatbox(const struct FText& CharacterName, const struct FText& Message);
	void ShowChatBox(bool Team);
	void HideScoreboard();
	void ShowScoreboard();
	void UserConstructionScript();
	void ReceiveBeginPlay();
	void ReceiveTick(float* DeltaSeconds);
	void Spawn_CustomizationPlatform();
	void EnqueueMordhauDialog(class UMordhauDialog** Dialog);
	void ExecuteUbergraph_BP_MordhauHUD(int EntryPoint);
	*/
};
