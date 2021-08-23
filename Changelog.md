# Mordhau uSDK Changelog


### v1.3 - Latest @ UE4.20.3 (NetSlayer)

Content

- Relocation of all assets to match Mordhau
- Addition of AI Blueprints and data from Triternion
- Fixes To AI from #Sharing
- New placeholder functions for Animation blueprints
- Audio Cues, Attenuations and Sound classes updates
- Addition of Core Blueprints with data from Triternion
- Fixes to game modes (excluding 3v3, Duel, BattleRoyale)
- New placeholder functions and content for UI
- Addition of BP_TargetInfo in UI from Triternion
- Placeholder Materials generated using FoxTools
- Addition of HLOD, proxy settings and content from Triternion
- Placeholder Material Functions and Materials from Triternion (Stripped of data)
- All Static Meshes from update 20 have been imported (excluding paid marketplace content)
- Fixes and additional Physical Surface mats
- Improved list of Mordhau input actions
- Placeholder Macro Library added

C++

- New Modified GamePadUMG Plugin (MUST BE ENABLED)
- Update to build dependancies
- Completed switch to PlayFab
- Updated all MordhauUtilityLibrary Functions
- Added New Delegates from Triternion to Advancedcharacter, MordhauGameMode and MordhauGameSession
- Fixes to Mordhau* PlayerController, character, Hud, Vehicle to remove log errors being spammed on servers (Only applies if modder updates their mod using this uSDK or further releases)
- Fixes to other core classes having incorrectly named components
- Fixes to MordhauInput
- Addition of many components that were initially missing from the uSDK
- Update of all Structs and Enums
- Update of Motion Data

### v1.2 - AG_Art Restructure (Fox)
### v1.1 - Updated
### v1.0 - Initial
