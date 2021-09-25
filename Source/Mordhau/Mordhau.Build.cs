// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class Mordhau : ModuleRules
{
	public Mordhau(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	    
        // Added to counter Command line error D8049 "command line is too long to fit in debug record"
        // Commandlet to fix includes RunUAT.bat RebasePublicIncludePaths -Project="path/to/project.uproject" -UpdateDir="path/to/code" -Write
        bLegacyPublicIncludePaths = false; 

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "MordhauOnlineSubsystem", "GameplayTags", "NavigationSystem", "AIModule", "GameplayTasks"});

		// PrivateDependencyModuleNames.AddRange(new string[] { "PlayFab", "PlayFabCpp", "PlayFabCommon" });
		
		PrivateDependencyModuleNames.AddRange(new string[] {  });
		
		
		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
