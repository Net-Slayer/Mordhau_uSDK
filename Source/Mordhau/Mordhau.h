// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "Engine/EngineTypes.h"
#include "Curves/CurveFloat.h"
#include "Camera/CameraShake.h"
#include "GameplayTagContainer.h"
#include "Misc/Crc.h"
#include "Mordhau.generated.h"

UENUM(BlueprintType)
enum class E_SkirmishRoundStage : uint8
{
	WaitingforPlayers = 0,
	RoundStart = 1,
	RoundPlay = 2,
	RoundEnd = 3,
	MAX = 4
};

// Enum Mordhau.EPlayFabMatchStatus
UENUM(BlueprintType)
enum class EPlayFabMatchStatus : uint8
{
	Pending = 0,
	WaitingForPlayers = 1,
	WaitingForServer = 2,
	InProgress = 3,
	Cancelled = 4,
	MAX = 5,
};

// Enum Mordhau.EIngameEvent
UENUM(BlueprintType)
enum class EIngameEvent : uint8
{
	None = 0,
	Christmas = 1,
	MAX = 2,
};

// Enum Mordhau.EServerRegion
UENUM(BlueprintType)
enum class EServerRegion : uint8
{
	East_Asia = 0,
	South_Asia = 1,
	Europe = 2,
	Oceania = 3,
	Russia = 4,
	South_America = 5,
	US_Central = 6,
	US_East = 7,
	US_West = 8,
	South_Africa = 9,
	Worldwide = 10,
	MAX = 11,
};

// Enum Mordhau.EServerLocation
UENUM(BlueprintType)
enum class EServerLocation : uint8
{
	Germany = 0,
	France = 1,
	UK = 2,
	Poland = 3,
	Russia = 4,
	US_East = 5,
	US_Central = 6,
	US_West = 7,
	Australia = 8,
	Taiwan = 9,
	Brazil = 10,
	South_Africa = 11,
	Any = 12,
	MAX = 13,
};

// Enum Mordhau.EWeaponState
UENUM(BlueprintType)
enum class EWeaponState : uint8
{
	Loaded = 0,
	Releasing = 1,
	Recovery = 2,
	Loading = 3,
	Building = 4,
	EWeaponState_MAX = 5
};

// Enum Mordhau.EParryRecoveryType
UENUM(BlueprintType)
enum class EParryRecoveryType : uint8
{
	Success = 0,
	Fail = 1,
	Miss = 2,
	EParryRecoveryType_MAX = 3
};

// Enum Mordhau.EInputMode
UENUM(BlueprintType)
enum class EInputMode : uint8
{
	GAME_AND_UI = 0,
	Game = 1,
	UI_ONLY = 2,
	NONE_SPECIFIED = 3,
	EInputMode_MAX = 4
};

// Enum Mordhau.EBroadcastTypes
UENUM(BlueprintType)
enum class EBroadcastTypes : uint8
{
	None = 0,
	Chat = 1,
	Killfeed = 2,
	Scorefeed = 3,
	MatchState = 4,
	Login = 5,
	Custom = 6,
	Punishment = 7,
	EBroadcastTypes_MAX = 8
};

// Enum Mordhau.EDownloadableContent
UENUM(BlueprintType)
enum class EDownloadableContent : uint8
{
	SupporterPack = 0,
	EDownloadableContent_MAX = 1
};

// Enum Mordhau.EServerSort
UENUM(BlueprintType)
enum class EServerSort : uint8
{
	ServerNameAscend = 0,
	ServerNameDescend = 1,
	MapNameAscend = 2,
	MapNameDescend = 3,
	CountAscend = 4,
	CountDescend = 5,
	PingAscend = 6,
	PingDescend = 7,
	EServerSort_MAX = 8
};

// Enum Mordhau.EMatchmakingState
UENUM(BlueprintType)
enum class EMatchmakingState : uint8
{
	Idle = 0,
	Searching = 1,
	Waiting = 2,
	Joining = 3,
	EMatchmakingState_MAX = 4
};

// Enum Mordhau.EBeaconRequest
UENUM(BlueprintType)
enum class EBeaconRequest : uint8
{
	Ping = 0,
	ReserveSlots = 1,
	EBeaconRequest_MAX = 2
};

UENUM(BlueprintType)
enum class EServerListDeprecated : uint8
{
	Internet = 0,
	Favorites = 1,
	History = 2,
	Spectator = 3,
	LAN = 4,
	Friends = 5,
	EServerListDeprecated_MAX = 6
};

UENUM(BlueprintType)
enum class ECommandType : uint8
{
	Invalid = 0,
	AddAdmin = 1,
	RemoveAdmin = 2,
	Kick = 3,
	Ban = 4,
	Unban = 5,
	Mute = 6,
	Unmute = 7,
	LookupPlayer = 8,
	ECommandType_MAX = 9
};

UENUM(BlueprintType)
enum class EAdvancedCharacterFlags : uint8
{
	Airborne = 0,
	Burning = 1,
	RagdollFalling = 2,
	Jumped = 3,
	EAdvancedCharacterFlags_MAX = 4
};

UENUM(BlueprintType)
enum class EAttackType : uint8
{
	Regular = 0,
	Riposte = 1,
	Combo = 2,
	PostClash = 3,
	Morph = 4,
	EAttackType_MAX = 5
};

UENUM(BlueprintType)
enum class EAttackStage : uint8
{
	Windup = 0,
	Release = 1,
	Recovery = 2,
	EAttackStage_MAX = 3
};

UENUM(BlueprintType)
enum class EBlockedReason : uint8
{
	Parry = 0,
	Chamber = 1,
	World = 2,
	Clash = 3,
	Hit = 4,
	EBlockedReason_MAX = 5
};

UENUM(BlueprintType)
enum class ESwayMethod : uint8
{
	Sin = 0,
	Constant = 1,
	ESwayMethod_MAX = 2
};

UENUM(BlueprintType)
enum class EModeSwitchType : uint8
{
	Regular = 0,
	Simple = 1,
	LeftToRightHand = 2,
	RightToLeftHand = 3,
	EModeSwitchType_MAX = 4
};

UENUM(BlueprintType)
enum class ESwitchStage : uint8
{
	Reaching = 0,
	Drawing = 1,
	ESwitchStage_MAX = 2
};

UENUM(BlueprintType)
enum class EFeintType : uint8
{
	Regular = 0,
	Combo = 1,
	Chamber = 2,
	Release = 3,
	EFeintType_MAX = 4
};

UENUM(BlueprintType)
enum class EAIFacingMode : uint8
{
	Movement = 0,
	Location = 1,
	Actor = 2,
	Actor2D = 3,
	Bone = 4,
	EAIFacingMode_MAX = 5
};

UENUM(BlueprintType)
enum class EReservationStatus : uint8
{
	Success = 0,
	Full = 1,
	Failure = 2,
	EReservationStatus_MAX = 3
};

UENUM(BlueprintType)
enum class EMotionType : uint8
{
	Idle = 0,
	Attack = 1,
	Parry = 2,
	Flinched = 3,
	Stunned = 4,
	Feinted = 5,
	Blocked = 6,
	Disarmed = 7,
	EquipmentSwitch = 8,
	DropEquipment = 9,
	Emote = 10,
	EquipmentModeSwitch = 11,
	RangedDraw = 12,
	RangedRelease = 13,
	QuickthrowDraw = 14,
	QuickthrowRelease = 15,
	InteractWith = 16,
	Reload = 17,
	RangedCancel = 18,
	CouchedAttack = 19,
	PommelDraw = 20,
	PommelThrow = 21,
	EmoteCancel = 22,
	Holster = 23,
	EnterVehicle = 24,
	LeaveVehicle = 25,
	RagdollFalling = 26,
	Climbing = 27,
	EMotionType_MAX = 28
};

UENUM(BlueprintType)
enum class EEquipmentCategory : uint8
{
	Undefined = 0,
	OneHanded = 1,
	TwoHanded = 2,
	Ranged = 3,
	Shield = 4,
	Utility = 5,
	EEquipmentCategory_MAX = 6
};

UENUM(BlueprintType)
enum class EEquipmentType : uint8
{
	Undefined = 0,
	MeleeNoAltMode = 1,
	MeleeWithAltMode = 2,
	MeleeThrownAltMode = 3,
	ProjectileWeapon = 4,
	Shield = 5,
	Thrown = 6,
	Utility = 7,
	EEquipmentType_MAX = 8
};

UENUM(BlueprintType)
enum class EAuxiliaryMeshMode : uint8
{
	None = 0,
	Arrow = 1,
	Bolt = 2,
	Scabbard = 3,
	Pommel = 4,
	EAuxiliaryMeshMode_MAX = 5
};

UENUM(BlueprintType)
enum class EPartyState : uint8
{
	Idle = 0,
	Searching = 1,
	Joining = 2,
	EPartyState_MAX = 3
};

UENUM(BlueprintType)
enum class ERichPresenceStatus : uint8
{
	MainMenu = 0,
	LocalMatch = 1,
	OnlineMatch = 2,
	ERichPresenceStatus_MAX = 3
};

UENUM(BlueprintType)
enum class ELobbyMessage : uint8
{
	Invalid = 0,
	Chat = 1,
	Kick = 2,
	Status = 3,
	Profile = 4,
	ELobbyMessage_MAX = 5
};

UENUM(BlueprintType)
enum class EOfficialServerVisibility : uint8
{
	ServerBrowser = 0,
	Matchmaking = 1,
	EOfficialServerVisibility_MAX = 2
};

UENUM(BlueprintType)
enum class EActionSetChangeState : uint8
{
	Active = 0,
	Changing = 1,
	Changed = 2,
	EActionSetChangeState_MAX = 3
};

UENUM(BlueprintType)
enum class EActionSet : uint8
{
	InGame = 0,
	Spectator = 1,
	Menu = 2,
	EActionSet_MAX = 3
};

UENUM(BlueprintType)
enum class EInputLineMode : uint8
{
	SingleLine = 0,
	MultiLine = 1,
	EInputLineMode_MAX = 2
};

UENUM(BlueprintType)
enum class EInputTextMode : uint8
{
	Normal = 0,
	Password = 1,
	EInputTextMode_MAX = 2
};

UENUM(BlueprintType)
enum class EInventoryOperation : uint8
{
	RefreshItems = 0,
	SerializeItems = 1,
	DeserializeItems = 2,
	ConsolidateItems = 3,
	UnlockItem = 4,
	ConsumeItem = 5,
	AddItem = 6,
	AddItems = 7,
	DropItems = 8,
	EInventoryOperation_MAX = 9
};

UENUM(BlueprintType)
enum class EBlockType : uint8
{
	Regular = 0,
	AltRegular = 1,
	EBlockType_MAX = 2
};

UENUM(BlueprintType)
enum class EMovementModifier : uint8
{
	Walk = 0,
	Strafe = 1,
	Backpedal = 2,
	PartialSprint = 3,
	Sprint = 4,
	Rush = 5,
	Chasing = 6,
	Supersprint = 7,
	EMovementModifier_MAX = 8
};

UENUM(BlueprintType)
enum class EScoreFeedReason : uint8
{
	Kill = 0,
	TeamKill = 1,
	Assist = 2,
	Suicide = 3,
	PlayerDamage = 4,
	PlayerTeamDamage = 5,
	OtherDamage = 6,
	OtherTeamDamage = 7,
	Capturing = 8,
	Captured = 9,
	Neutralizing = 10,
	Neutralized = 11,
	Objective = 12,
	Heal = 13,
	WaveCleared = 14,
	Repair = 15,
	VehicleDamage = 16,
	VehicleTeamDamage = 17,
	EScoreFeedReason_MAX = 18
};

UENUM(BlueprintType)
enum class ECameraStyle : uint8
{
	FirstPerson = 0,
	ThirdPerson = 1,
	Fixed = 2,
	ECameraStyle_MAX = 3
};

UENUM(BlueprintType)
enum class EAntiCheat : uint8
{
	Secure_Only = 0,
	Insecure_Only = 1,
	Both = 2,
	EAntiCheat_MAX = 3
};

UENUM(BlueprintType)
enum class EStatSetBy : uint8
{
	Client = 0,
	Server = 1,
	OfficialServer = 2,
	EStatSetBy_MAX = 3
};

UENUM(BlueprintType)
enum class EAvatarSize : uint8
{
	Small = 0,
	Medium = 1,
	Large = 2,
	EAvatarSize_MAX = 3
};

UENUM(BlueprintType)
enum class ECallResult : uint8
{
	Success = 0,
	Failure = 1,
	ECallResult_MAX = 2
};

UENUM(BlueprintType)
enum class ESoundMix : uint8
{
	Master = 0,
	Effects = 1,
	Music = 2,
	ESoundMix_MAX = 3
};

UENUM(BlueprintType)
enum class EMordhauDamageType : uint8
{
	Generic = 0,
	Melee = 1,
	Ranged = 2,
	Fall = 3,
	Fire = 4,
	EMordhauDamageType_MAX = 5
};

UENUM(BlueprintType)
enum class EItemRarity : uint8
{
	Common = 0,
	Uncommon = 1,
	Rare = 2,
	Epic = 3,
	Legendary = 4,
	Exclusive = 5,
	EItemRarity_MAX = 6
};

UENUM(BlueprintType)
enum class EProfileValidationFailedReason : uint8
{
	Unset = 0,
	NotEnoughPoints = 1,
	SkillTooLow = 2,
	EProfileValidationFailedReason_MAX = 3
};

UENUM(BlueprintType)
enum class EAttackMove : uint8
{
	RightStrike = 0,
	LeftStrike = 1,
	Stab = 2,
	AltStab = 3,
	Kick = 4,
	Bash = 5,
	Couch = 6,
	Ranged = 7,
	EAttackMove_MAX = 8
};

UENUM(BlueprintType)
enum class EMainWearableSlot : uint8
{
	Head = 0,
	UpperChest = 1,
	Legs = 2,
	EMainWearableSlot_MAX = 3
};

UENUM(BlueprintType)
enum class EWearableSlot : uint8
{
	Head = 0,
	Coif = 1,
	UpperChest = 2,
	LowerChest = 3,
	Shoulders = 4,
	Arms = 5,
	Hands = 6,
	Legs = 7,
	Feet = 8,
	Total = 9,
	Invalid = 10,
	EWearableSlot_MAX = 11
};

UENUM(BlueprintType)
enum class EBudgetType : uint8
{
	Particle = 0,
	Total = 1,
	EBudgetType_MAX = 2
};

UENUM(BlueprintType)
enum class EHorseGear : uint8
{
	Walk = 0,
	Trot = 1,
	Canter = 2,
	Gallop = 3,
	Total = 4,
	EHorseGear_MAX = 5
};

UENUM(BlueprintType)
enum class EMovementRestriction : uint8
{
	None = 0,
	PartialSprint = 1,
	Walk = 2,
	NoMovement = 3,
	EMovementRestriction_MAX = 4
};

// Enum Mordhau.EPerk
UENUM(BlueprintType)
enum class EPerk : uint8
{
	Pugilist = 0,
	Acrobat = 1,
	Fury = 2,
	Peasant = 3,
	Fireproof = 4,
	Huntsman = 5,
	Tank = 6,
	Rat = 7,
	Cat = 8,
	Wrecker = 9,
	Smith = 10,
	Dwarf = 11,
	SecondWind = 12,
	Bloodlust = 13,
	Rush = 14,
	FleshWound = 15,
	Scavenger = 16,
	Dodge = 17,
	Ranger = 18,
	Mule = 19,
	Butcher = 20,
	Stun = 21,
	Supplied = 22,
	EPerk_MAX = 23
};

UENUM(BlueprintType)
enum class EDismembermentType : uint8
{
	None = 0,
	Blunt = 1,
	Pierce = 2,
	Cut = 3,
	EDismembermentType_MAX = 4
};

UENUM(BlueprintType)
enum class EAuthStatus : uint8
{
	Unauthenticated = 0,
	Authenticating = 1,
	Authenticated = 2,
	EAuthStatus_MAX = 3
};

UENUM(BlueprintType)
enum class EParryStage : uint8
{
	Parry = 0,
	Recovery = 1,
	EParryStage_MAX = 2
};

UENUM(BlueprintType)
enum class EPlatform : uint8
{
	None = 0,
	Steam = 1,
	Epic = 2,
	XBoxOne = 3,
	PS4 = 4,
	MAX = 5,
};

UENUM(BlueprintType)
enum class EBanType : uint8
{
	VoteKick = 0,
	TeamKills = 1,
	EBanType_MAX = 2
};

UENUM(BlueprintType)
enum class ECameraShakeType : uint8
{
	Default = 0,
	Movement = 1,
	Combat = 2,
	MAX = 3,
};

UENUM(BlueprintType)
enum class EEntityType : uint8
{
	None = 0,
	Player = 1,
	CommunityServer = 2,
	OfficialServer = 3,
	Group = 4,
	MAX = 5,
};

// Structs Begin Here

USTRUCT(BlueprintType, Blueprintable)
struct FEquipmentPartEntry
{
	GENERATED_USTRUCT_BODY()

public:

	FEquipmentPartEntry() {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText PartName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<class Uclass*> Parts;
};

USTRUCT(BlueprintType, Blueprintable)
struct FPatternInfo
{
	GENERATED_USTRUCT_BODY()

public:

	FPatternInfo() {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UTexture2D* Texture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bHasColor1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bHasColor2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bHasColor3;
};

//UENUM(BlueprintType)
//enum class EAttachLocation : uint8
//{
// KeepRelativeOffset = 0,
// KeepWorldPosition = 1,
// SnapToTarget = 2,
// SnapToTargetIncludingScale = 3,
// EAttachLocation_MAX = 4
//};

USTRUCT(BlueprintType, Blueprintable)
struct FScriptMulticastDelegate
{
	GENERATED_USTRUCT_BODY()
};
USTRUCT(BlueprintType, Blueprintable)
struct FEquipmentSkinEntry
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText SkinName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<struct FEquipmentPartEntry> PartTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<uint8> ColorTables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FPatternInfo> Patterns;
};

USTRUCT(BlueprintType, Blueprintable)
struct FEquipmentCustomization
{
	GENERATED_USTRUCT_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<uint8> Colors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<uint8> Parts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 Pattern;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 Skin;
};
USTRUCT(BlueprintType, Blueprintable)
struct FActorSetAndArray
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<class AActor*> Array = {};
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TSet<class AActor*> Set = {};
};
USTRUCT(BlueprintType, Blueprintable)
struct FWoundInfo
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector2D WoundType;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector WoundSize;
};

USTRUCT(BlueprintType, Blueprintable)
struct FSpineSpaceAdditive
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FRotator head;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FRotator Neck;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FRotator Spine1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FRotator LeftShoulder;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FRotator LeftArm;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FRotator LeftForearm;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FRotator LeftHand;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FRotator RightShoulder;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FRotator RightArm;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FRotator RightForearm;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FRotator RightHand;
};

USTRUCT(BlueprintType, Blueprintable)
struct FHighMidLowSpineSpaceAdditive
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FSpineSpaceAdditive High;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FSpineSpaceAdditive Mid;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FSpineSpaceAdditive Low;
};

USTRUCT(BlueprintType, Blueprintable)
struct FAnglingSpineSpaceAdditive
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FHighMidLowSpineSpaceAdditive Right;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FHighMidLowSpineSpaceAdditive Left;
};
USTRUCT(BlueprintType)
struct FAttackInfo
{
	GENERATED_USTRUCT_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		bool bCanCombo;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
	//bool bCanMissCombo;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		bool bForcesRearingFromFront;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		bool bNoFlinch;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		float FlinchSpeedModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		float FlinchDurationModifier;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		float Windup;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		float ComboWindupIncrease;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		float Release;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		float FeintLockOut;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		int32 FeintCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		int32 ChamberFeintCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		int32 ChamberCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		int32 MorphCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		FVector2D TurnCaps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		UCurveFloat* TurnCapCurve;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		UCurveFloat* HitEffectIKWeightCurve;

	// Uses anim speedup on hit, cosmetic only so beware. Only enabled if value is > 1
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		float HitEffectSpeedUpExponent;

	// When blocked
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		float StaminaDrain;

	// When blocked
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		float ExtraStaminaDrainVsHeldBlock;

	// When landing a hit
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		float StaminaDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		TArray<float> Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		TArray<float> HeadBonus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		TArray<float> LegBonus;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		float WoodDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		float StoneDamage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		bool bStopOnHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		bool bDrainAllStamOnBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		bool bRagdollOnBlock;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		float ChipDamagePercentageOnBlock;

	// When parried it will not enter a blocked state, but a clashed state, allowing 'comboing off' etc.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		bool bWillClashWhenParried;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		bool bRagdollOnHit;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		bool bDismountsHorseRider;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		bool bDismountsLadderUser;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		float MissStaminaCost;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		float HitStaminaReward;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		float MissRecovery;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		float HitKockbackFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		float FollowAttackDirectionFactor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		TArray<FWoundInfo> WoundInfoArray;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		TSubclassOf<UCameraShake> HitShake;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		TSubclassOf<UCameraShake> HitStopShake;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AttackInfo")
		TSet<FName> IgnoreBones;

	FAttackInfo()
	{
		FollowAttackDirectionFactor = 0.f;

		bCanCombo = true;
		//bCanMissCombo = false;

		StaminaDrain = 14.f;

		Windup = 0.4f;
		ComboWindupIncrease = 0.2f;
		Release = 0.4f;
		TurnCaps = FVector2D(250.f, 90.f);

		HeadBonus.Add(15);
		HeadBonus.Add(15);
		HeadBonus.Add(15);
		HeadBonus.Add(15);

		LegBonus.Add(-10);
		LegBonus.Add(-10);
		LegBonus.Add(-10);
		LegBonus.Add(-10);

		StaminaDamage = 0.f;
		Damage.Add(75.f);
		Damage.Add(50.f);
		Damage.Add(40.f);
		Damage.Add(30.f);

		WoodDamage = 20.f;
		StoneDamage = 2.f;
		MissStaminaCost = 15.f;
		MissRecovery = 0.8f;
		HitKockbackFactor = 1.f;
		FeintCost = 7;
		MorphCost = 7;
		ChamberCost = 20;
		FeintLockOut = 0.38f;
		ChamberFeintCost = 5;
		ExtraStaminaDrainVsHeldBlock = 0;
		FlinchSpeedModifier = 1.f;
		FlinchDurationModifier = 1.f;
	}
};
//USTRUCT(BlueprintType, Blueprintable)
//struct FAttackInfo
//{
// GENERATED_BODY()

//public:
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// bool bCanCombo;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// bool bNoFlinch;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// float Windup;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// float ComboWindupIncrease;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// float Release;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// float FeintLockOut;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// int FeintCost;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// int ChamberFeintCost;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// int ChamberCost;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// int MorphCost;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// struct FVector2D TurnCaps;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// class UCurveFloat* TurnCapCurve;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// class UCurveFloat* HitEffectIKWeightCurve;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// float HitEffectSpeedUpExponent;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// float StaminaDrain;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// TArray<float> Damage;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// TArray<float> HeadBonus;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// TArray<float> LegBonus;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// float WoodDamage;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// float StoneDamage;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// bool bStopOnHit;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// bool bDrainAllStamOnBlock;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// bool bRagdollOnBlock;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// float ChipDamagePercentageOnBlock;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// bool bRagdollOnHit;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// bool bDismountsHorseRider;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// bool bDismountsLadderUser;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// float MissStaminaCost;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// float HitStaminaReward;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// float MissRecovery;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// float HitKockbackFactor;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// float FollowAttackDirectionFactor;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// TArray<struct FWoundInfo> WoundInfoArray;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// class UClass* HitShake;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// class UClass* HitStopShake;
// UPROPERTY(BlueprintReadWrite, EditAnywhere)
// TSet<UObject*> IgnoreBones;
//};
/*USTRUCT(BlueprintType, Blueprintable)
struct FSteamID
{
GENERATED_BODY()
};*/
USTRUCT(BlueprintType, Blueprintable)
struct FWearableCustomization
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int ID;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<uint8> Colors;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<uint8> Team1Colors;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<uint8> Team2Colors;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 Pattern;
};
USTRUCT(BlueprintType, Blueprintable)
struct FCharacterGearCustomization
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<FWearableCustomization> Wearables;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<FEquipmentCustomization> Equipment;
};
USTRUCT(BlueprintType, Blueprintable)
struct FFaceCustomization
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<uint8> Translate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<uint8> Rotate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<uint8> Scale;
};
USTRUCT(BlueprintType, Blueprintable)
struct FSkillsCustomization
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 Perks;
};
USTRUCT(BlueprintType, Blueprintable)
struct FAppearanceCustomization
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int Emblem;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<uint8> EmblemColors;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 MetalRoughnessScale;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 MetalTint;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 Age;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 Voice;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 VoicePitch;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bIsFemale;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 Fat;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 Skinny;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 Strong;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 SkinColor;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 Face;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 EyeColor;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 HairColor;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 Hair;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 FacialHair;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 Eyebrows;
};
USTRUCT(BlueprintType, Blueprintable)
struct FCharacterProfile
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FText Name; // 0x0000(0x0018) (Edit, BlueprintVisible)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FCharacterGearCustomization GearCustomization; // 0x0018(0x0020) (Edit, BlueprintVisible)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FAppearanceCustomization AppearanceCustomization; // 0x0038(0x0028) (Edit, BlueprintVisible)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FFaceCustomization FaceCustomization; // 0x0060(0x0030) (Edit, BlueprintVisible)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FSkillsCustomization SkillsCustomization; // 0x0090(0x0004) (Edit, BlueprintVisible)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString Category; // 0x0098(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString PlayFabId; // 0x00A8(0x0010) (ZeroConstructor, Transient)
};

USTRUCT(BlueprintType, Blueprintable)
struct FStatBase
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName Name;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		EStatSetBy SetBy;
};
USTRUCT(BlueprintType, Blueprintable)
struct FStat : public FStatBase
{
	GENERATED_BODY()
};
USTRUCT(BlueprintType, Blueprintable)
struct FAchievement
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName Name;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		EStatSetBy SetBy;
};
USTRUCT(BlueprintType, Blueprintable)
struct FSoundMixInfo
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class USoundMix* SoundMix;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<class USoundClass*> SoundClasses;
};
/*UENUM(BlueprintType)
enum class EPhysicalSurface : uint8
{
SurfaceType_Default = 0,
SurfaceType1 = 1,
SurfaceType2 = 2,
SurfaceType3 = 3,
SurfaceType4 = 4,
SurfaceType5 = 5,
SurfaceType6 = 6,
SurfaceType7 = 7,
SurfaceType8 = 8,
SurfaceType9 = 9,
SurfaceType10 = 10,
SurfaceType11 = 11,
SurfaceType12 = 12,
SurfaceType13 = 13,
SurfaceType14 = 14,
SurfaceType15 = 15,
SurfaceType16 = 16,
SurfaceType17 = 17,
SurfaceType18 = 18,
SurfaceType19 = 19,
SurfaceType20 = 20,
SurfaceType21 = 21,
SurfaceType22 = 22,
SurfaceType23 = 23,
SurfaceType24 = 24,
SurfaceType25 = 25,
SurfaceType26 = 26,
SurfaceType27 = 27,
SurfaceType28 = 28,
SurfaceType29 = 29,
SurfaceType30 = 30,
SurfaceType31 = 31,
SurfaceType32 = 32,
SurfaceType33 = 33,
SurfaceType34 = 34,
SurfaceType35 = 35,
SurfaceType36 = 36,
SurfaceType37 = 37,
SurfaceType38 = 38,
SurfaceType39 = 39,
SurfaceType40 = 40,
SurfaceType41 = 41,
SurfaceType42 = 42,
SurfaceType43 = 43,
SurfaceType44 = 44,
SurfaceType45 = 45,
SurfaceType46 = 46,
SurfaceType47 = 47,
SurfaceType48 = 48,
SurfaceType49 = 49,
SurfaceType50 = 50,
SurfaceType51 = 51,
SurfaceType52 = 52,
SurfaceType53 = 53,
SurfaceType54 = 54,
SurfaceType55 = 55,
SurfaceType56 = 56,
SurfaceType57 = 57,
SurfaceType58 = 58,
SurfaceType59 = 59,
SurfaceType60 = 60,
SurfaceType61 = 61,
SurfaceType62 = 62,
SurfaceType_Max = 63,
EPhysicalSurface_MAX = 64
};*/
USTRUCT(BlueprintType, Blueprintable)
struct FDecalInfo
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UMaterialInterface* Material;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector Size;
};

USTRUCT(BlueprintType, Blueprintable)
struct FReplicatedProjectileInfo
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector_NetQuantize Location;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector_NetQuantize Orientation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector_NetQuantizeNormal HitNormal;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float BounceForce;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TWeakObjectPtr<class AActor> Creator;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 HitSurface;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bHasStopped;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bHasHitWorld;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 HitCounter;
};
/* ALREADY EXISTS IN ENGINETYPES.h
USTRUCT(BlueprintType, Blueprintable)
struct FHitResult
{
GENERATED_BODY()

UPROPERTY(BlueprintReadWrite, EditAnywhere)
uint8 bBlockingHit : 1;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
uint8 bStartPenetrating : 1;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
int FaceIndex;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
float Time;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
float Distance;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
struct FVector_NetQuantize Location;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
struct FVector_NetQuantize ImpactPoint;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
struct FVector_NetQuantizeNormal Normal;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
struct FVector_NetQuantizeNormal ImpactNormal;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
struct FVector_NetQuantize TraceStart;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
struct FVector_NetQuantize TraceEnd;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
float PenetrationDepth;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
int Item;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
TWeakObjectPtr<class UPhysicalMaterial> PhysMaterial;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
TWeakObjectPtr<class AActor> Actor;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
TWeakObjectPtr<class UPrimitiveComponent> Component;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
FName BoneName;
UPROPERTY(BlueprintReadWrite, EditAnywhere)
FName MyBoneName;
};
*/

USTRUCT(BlueprintType, Blueprintable)
struct FSTRUCT_SkirmishRoundInfo//
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		E_SkirmishRoundStage Stage;//RoundInfo
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 Winner;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float StartTime;
};

USTRUCT(BlueprintType, Blueprintable)
struct FSTRUCT_MatchEndInfo//
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class AMordhauPlayerState* Winner;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int WinnerTeam;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float WinnerScore;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float OtherScore;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool Draw;
};
USTRUCT(BlueprintType, Blueprintable)
struct FEmoteEntry
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FText EmoteName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UClass* EmoteMotion;
};

USTRUCT(BlueprintType, Blueprintable)
struct FNetMotion
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 ID;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 MotionType;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 MotionParam0;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 MotionParam1;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 MotionParam2;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 MotionDynamicParam;
};
USTRUCT(BlueprintType, Blueprintable)
struct FNetBlock
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 BlockedReason;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 BlockedMove;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 BlockType;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 BlockedAngle;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TWeakObjectPtr<class AActor> BlockingActor;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 EnsureReplication;
};

USTRUCT(BlueprintType, Blueprintable)
struct FDamageRecord
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TWeakObjectPtr<class AController> Source;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float Time;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float Damage;
};
USTRUCT(BlueprintType, Blueprintable)
struct FVehicleTransitionInfo
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UAnimSequence* Animation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float Duration;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float BlendTime;
};
USTRUCT(BlueprintType, Blueprintable)
struct FNetDamage
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 PackedType;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 bone;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 PackedFlags;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector_NetQuantize Point;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TWeakObjectPtr<class AActor> DamageSource;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TWeakObjectPtr<class AActor> DamageAgent;
};

USTRUCT(BlueprintType, Blueprintable)
struct FSphericalLimbBounds
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName StartSocket;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName EndSocket;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float Radius;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName AttachSocket;
};
USTRUCT(BlueprintType, Blueprintable)
struct FFloatAndVector
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float Float;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector Vector;
};

//UENUM(BlueprintType)
//enum class ETickingGroup : uint8
//{
// TG_PrePhysics = 0,
// TG_StartPhysics = 1,
// TG_DuringPhysics = 2,
// TG_EndPhysics = 3,
// TG_PostPhysics = 4,
// TG_PostUpdateWork = 5,
// TG_LastDemotable = 6,
// TG_NewlySpawned = 7,
// TG_MAX = 8
//};

//USTRUCT(BlueprintType, Blueprintable)
//struct FTickFunction
//{
// GENERATED_BODY()

// TEnumAsByte<ETickingGroup> TickGroup;
// TEnumAsByte<ETickingGroup> EndTickGroup;
// uint8 bTickEvenWhenPaused : 1;
// uint8 bCanEverTick : 1;
// uint8 bStartWithTickEnabled : 1;
// uint8 bAllowTickOnDedicatedServer : 1;
// float TickInterval;
//};

//USTRUCT(BlueprintType, Blueprintable)
//struct FPrePhysTickFunction : public FTickFunction
//{
// GENERATED_BODY()

//};

USTRUCT(BlueprintType, Blueprintable)
struct FWoundMaterialData
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector Location;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector UpVector;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector RightVector;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector ForwardVector;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector2D WoundType;
};
//UENUM(BlueprintType)
//enum class EAttachLocation : uint8
//{
// KeepRelativeOffset = 0,
// KeepWorldPosition = 1,
// SnapToTarget = 2,
// SnapToTargetIncludingScale = 3,
// EAttachLocation_MAX = 4
//};

USTRUCT(BlueprintType, Blueprintable)
struct FMordhauDamageInfo
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FHitResult Hit; // 0x0000(0x0088) (Edit, BlueprintVisible, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		EMordhauDamageType Type; // 0x0088(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 SubType; // 0x0089(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class AActor* DamageSource; // 0x0090(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class AActor* DamageAgent; // 0x0098(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bWantsFlinchAnimation; // 0x00A0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType)
struct FMordhauColorItemTable
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FText TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<TSubclassOf<class UMordhauColor>> Entries;
};

USTRUCT(BlueprintType, Blueprintable)
struct FFindLobbySessionsFilter
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int MinOpenSlots;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int PreferredOpenSlots;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int MMR;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<FString> GameModes;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		EServerRegion Region;
};

USTRUCT(BlueprintType, Blueprintable)
struct FPlayerProfile
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int Rank;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int Banner;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FCharacterProfile Character;
};

USTRUCT(BlueprintType, Blueprintable)
struct FHorseGearInfo
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float MaxSpeed;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float MaxAcceleration;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bAllowJump;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bCanRiderRegenHealth;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bCanRiderRegenStamina;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bCanHorseRegen;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UClass* HeadBobShake;
};

USTRUCT(BlueprintType, Blueprintable)
struct FEquipmentHolsterInfo
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName HolsterSocket;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bHidden;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bHiddenIn1P;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UAnimMontage* DrawAnimation;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UAnimMontage* DrawAnimation1P;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bUseIKDrawing;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FTransform Offset;
};

USTRUCT(BlueprintType, Blueprintable)
struct FFootGroundingLimb
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName TraceEndBone;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName TraceStartBone;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName FootstepBone;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float TraceDistance;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector2D UpValueLimits;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FHitResult TraceResult;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float RootSpaceImpactZ;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FRotator RotationOffset;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector InternalTranslationOffset;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector TranslationOffset;
};

USTRUCT(BlueprintType, Blueprintable)
struct FMordhauWebAPIRequest
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType, Blueprintable)
struct FCachedAvatars
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)

		TWeakObjectPtr<class UTexture2D> Small;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TWeakObjectPtr<class UTexture2D> Medium;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TWeakObjectPtr<class UTexture2D> Large;
};

USTRUCT(BlueprintType, Blueprintable)
struct FColorTableEntry
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FText EntryName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FLinearColor Color;
};

USTRUCT(BlueprintType, Blueprintable)
struct FMordhauColorTable
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FText TableName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<struct FColorTableEntry> Entries;
};

USTRUCT(BlueprintType, Blueprintable)
struct FPlayFabProfile
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString PlayFabId; // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		EPlatform Platform; // 0x0018(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString PlatformAccountID; // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

USTRUCT(BlueprintType, Blueprintable)
struct FPlayFabEntity
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString ID; // 0x0008(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		EEntityType Type; // 0x0018(0x0001) (BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

USTRUCT(BlueprintType, Blueprintable)
struct FPlayFabPlayerEntity : public FPlayFabEntity
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType, Blueprintable)
struct FPlayFabPlayer : public FPlayFabProfile
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FPlayFabPlayerEntity Entity; // 0x0030(0x0020) (BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString Name; // 0x0050(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	FPlayFabPlayer()
		: FPlayFabPlayer(TEXT("None"))
	{}


	FPlayFabPlayer(FString Name)
		: Name(Name)
	{}

	FPlayFabPlayer(const FPlayFabPlayer& Other)
		: FPlayFabPlayer(Other.Name)
	{}

	bool operator==(const FPlayFabPlayer& Other) const
	{
		return Equals(Other);
	}

	bool Equals(const FPlayFabPlayer& Other) const
	{
		return Name.Equals(Other.Name);
	}
	
};
FORCEINLINE uint32 GetTypeHash(const FPlayFabPlayer& Thing)
{
	uint32 Hash = FCrc::MemCrc32(&Thing, sizeof(FPlayFabPlayer));
	return Hash;
}






USTRUCT(BlueprintType, Blueprintable)
struct FCharacterInventory
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class AMordhauEquipment* RightHand;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class AMordhauEquipment* LeftHand;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<class AMordhauEquipment*> Equipment;
};

USTRUCT(BlueprintType, Blueprintable)
struct FItemStack
{
	GENERATED_BODY()
};
USTRUCT(BlueprintType, Blueprintable)
struct FUnlockRecipe
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString ItemId; // 0x0000(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int RequiredGold; // 0x0010(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int RequiredXP; // 0x0014(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<FString> RequiredItems; // 0x0018(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<FString> UnlockedItems; // 0x0028(0x0010) (Edit, BlueprintVisible, ZeroConstructor)
};

USTRUCT(BlueprintType, Blueprintable)
struct FSerializedItems
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 BufferSize;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString Data;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 Timestamp;
};

USTRUCT(BlueprintType, Blueprintable)
struct FServerStats
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 TargetTickRate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 MinTickRate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 MaxTickRate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 AvgTickRate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 InBytesPerSecond;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 OutBytesPerSecond;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 MaxInternetClientRate;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 NumPlayers;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 MaxPlayers;
};

/*struct FMinimalViewInfo
{
struct FVector Location;
struct FRotator Rotation;
float FOV;
float DesiredFOV;
float OrthoWidth;
float OrthoNearClipPlane;
float OrthoFarClipPlane;
float AspectRatio;
uint8 bConstrainAspectRatio : 1;
uint8 bUseFieldOfViewForLOD : 1;
TEnumAsByte<ECameraProjectionMode> ProjectionMode;
float PostProcessBlendWeight;
struct FPostProcessSettings PostProcessSettings;
struct FVector2D OffCenterProjectionOffset;
};*/

// USTRUCT(BlueprintType, Blueprintable)
// struct FBP_ToolBoxSpawnable
// {
// 	GENERATED_BODY()

// 		UPROPERTY(BlueprintReadWrite, EditAnywhere)
// 		class UStaticMesh* Preview_5_2199FA324279776E26CF8D94C5B5B71B;
// 	UPROPERTY(BlueprintReadWrite, EditAnywhere)
// 		class USkeletalMesh* PreviewSkeletal_16_F127718E4CC9262BB43BBF846E200428;
// 	UPROPERTY(BlueprintReadWrite, EditAnywhere)
// 		uint8 Cost_2_3FE5E6C242579A2FB40131B381BE0852;
//
// 	UPROPERTY(BlueprintReadWrite, EditAnywhere)
// 		struct FRotator RotationOffset_13_ED46831A45C264F69093958C73920A03;
// 	UPROPERTY(BlueprintReadWrite, EditAnywhere)
// 		struct FRotator RotationOffsetPreview_19_166AE01D40328502CF6878924CF328B3;
// 	UPROPERTY(BlueprintReadWrite, EditAnywhere)
// 		struct FVector ScalePreview_39_95AAE0F84CB90D4DB603DFBF354166F0;
// 	UPROPERTY(BlueprintReadWrite, EditAnywhere)
// 		class UClass* Class_9_52116F214F63A71A89EE438ACAE9AE21;
// 	UPROPERTY(BlueprintReadWrite, EditAnywhere)
// 		FName PlaceableLimitName_22_3ED07C554A73DE74451717868639F95D;
// 	UPROPERTY(BlueprintReadWrite, EditAnywhere)
// 		int PleaceableLimitMax_26_9860251E42753A8D1391B39EF7D66532;
// 	UPROPERTY(BlueprintReadWrite, EditAnywhere)
// 		bool PerformCapsuleCheck_28_5608460A4A56B455116FB2BBC9083067;
//
// 	UPROPERTY(BlueprintReadWrite, EditAnywhere)
//
// 		float CapsuleCheckRadius_31_281444B8406D0DA743BCBAB34686B9AF;
// 	UPROPERTY(BlueprintReadWrite, EditAnywhere)
// 		float CapsuleCheckHalfHeight_33_EBD4FE0A4E5A667392A5628B1040B9A4;
// 	UPROPERTY(BlueprintReadWrite, EditAnywhere)
// 		struct FVector SpawnActorOffset_36_8DFF3968447DA5478505C4A626FC494A;
// 	UPROPERTY(BlueprintReadWrite, EditAnywhere)
// 		bool DoNotAttach_41_23D7DA6D43927E8B2BD03896E629F39B;
// };

USTRUCT(BlueprintType, Blueprintable)
struct FSessionSearchResult
{
	GENERATED_BODY()
};
USTRUCT(BlueprintType, Blueprintable)
struct FServerSearchResult : public FSessionSearchResult
{
	GENERATED_BODY()
};

USTRUCT(BlueprintType, Blueprintable)
struct FLobbySearchResult : public FSessionSearchResult
{
	GENERATED_BODY()
};
USTRUCT(BlueprintType, Blueprintable)
struct FMapInfo
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString GameModeMapName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UGameModeMetadata* GameModeMetadata;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UMapMetadata* MapMetadata;
};
USTRUCT(BlueprintType, Blueprintable)
struct FServerAddress
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 IP;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 Port;
};

USTRUCT(BlueprintType, Blueprintable)
struct FRepArrayByteWithVersion
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<uint8> Array;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 Version;
};

USTRUCT(BlueprintType, Blueprintable)
struct FRepArrayShortWithVersion
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<uint8> Array;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 Version;
};

USTRUCT(BlueprintType, Blueprintable)
struct FRepArrayAppearanceWithVersion
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<uint8> Array;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 Version;
};

USTRUCT(BlueprintType, Blueprintable)
struct FRepArraySkillsWithVersion
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FSkillsCustomization Skills;
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 Version;
};

USTRUCT(BlueprintType, Blueprintable)
struct FBlockResult
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		EBlockedReason Reason; // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bIsStun; // 0x0001(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bIsDisarm; // 0x0002(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bIsRanged; // 0x0003(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bIsCancel; // 0x0004(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bPartyFlag; // 0x0005(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bRequiresSelfBlockEvent; // 0x0006(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		uint8 Surface; // 0x0007(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType, Blueprintable)
struct FLineTraceMemoryEntry
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector TraceStart; // 0x0000(0x000C) (IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector TraceEnd; // 0x000C(0x000C) (IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float DestroyTime; // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TWeakObjectPtr<class AActor> Owner; // 0x001C(0x0008) (ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType, Blueprintable)
struct FGroupSoundEntry
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector Location; // 0x0000(0x000C) (IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float Time; // 0x000C(0x0004) (ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType, Blueprintable)
struct FGroupSoundPlayer
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TWeakObjectPtr<class UAudioComponent> CurrentlyPlayingSound; // 0x0000(0x0008) (ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector Location; // 0x0008(0x000C) (BlueprintVisible, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int Entries; // 0x0014(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType, Blueprintable)
struct FGroupSoundGroup
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<struct FGroupSoundPlayer> GroupSoundPlayers; // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TMap<class AActor*, struct FGroupSoundEntry> SoundEntries; // 0x0010(0x0050) (ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int SoundGroupsNum; // 0x0060(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float EntryMaxAge; // 0x0064(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int MinEntriesToPlaySound; // 0x0068(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class USoundCue* SoundCue; // 0x0070(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float FadeOutDuration; // 0x0078(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float SoundGroupMergeDistance; // 0x007C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType, Blueprintable)
struct FGameplayTagCondition
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FGameplayTagContainer RequiredTags; // 0x0000(0x0020) (BlueprintVisible)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FGameplayTagContainer BlockedTags; // 0x0020(0x0020) (BlueprintVisible)
};

USTRUCT(BlueprintType, Blueprintable)
struct FGameplayTagConditionDelegate
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FGameplayTagCondition Condition; // 0x0000(0x0040) (BlueprintVisible)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FScriptMulticastDelegate Delegate; // 0x0040(0x0010) (BlueprintVisible, ZeroConstructor, InstancedReference)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bIsConditionSatisfied; // 0x0050(0x0001) (ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType, Blueprintable)
struct FPlayerCommand
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		ECommandType Type; // 0x0000(0x0001) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString UniquePlayerID; // 0x0008(0x0010) (ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int IntParam; // 0x0018(0x0004) (ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString StringParam; // 0x0020(0x0010) (ZeroConstructor)
};

USTRUCT(BlueprintType, Blueprintable)
struct FServerRestrictionInfo
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bIsBanned; // 0x0000(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int BanDuration; // 0x0004(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bIsMuted; // 0x0008(0x0001) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int MuteDuration; // 0x000C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};
USTRUCT(BlueprintType, Blueprintable)
struct FBasicServerInfo
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString ServerName; // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int MaxPlayers; // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

USTRUCT(BlueprintType, Blueprintable)
struct FPlayFabPort
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString Name; // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int Num; // 0x0010(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
USTRUCT(BlueprintType, Blueprintable)
struct FPlayFabServerDetails
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString IPV4Address; // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<struct FPlayFabPort> Ports; // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		EServerRegion Region; // 0x0020(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

USTRUCT(BlueprintType, Blueprintable)
struct FPlayFabMatch
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString ID; // 0x0000(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString ServerId; // 0x0010(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString GameMode; // 0x0020(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString Map; // 0x0030(0x0010) (ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int TopScore; // 0x0040(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int AvgScore; // 0x0044(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int Score; // 0x0048(0x0004) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY()
		int64 StartTimestamp; // 0x0050(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY()
		int64 EndTimestamp; // 0x0058(0x0008) (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Mordhau.PlayFabMatchmakingAttributes
// 0x0058
USTRUCT(BlueprintType, Blueprintable)
struct FPlayFabMatchmakingAttributes
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		EServerRegion Region; // 0x0000(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int MMR; // 0x0004(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TMap<EServerLocation, int> Pings; // 0x0008(0x0050) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// ScriptStruct Mordhau.PlayFabMatchmakingPlayer
// 0x0088
USTRUCT(BlueprintType, Blueprintable)
struct FPlayFabMatchmakingPlayer
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FPlayFabPlayerEntity Entity; // 0x0000(0x0020) (BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString TeamID; // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FPlayFabMatchmakingAttributes Attributes; // 0x0030(0x0058) (BlueprintVisible, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

USTRUCT(BlueprintType, Blueprintable)
struct FPlayFabMatchmakingMatch
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString QueueName; // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString MatchID; // 0x0010(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString OwnerID; // 0x0020(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString GroupID; // 0x0030(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		EPlayFabMatchStatus Status; // 0x0040(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<struct FPlayFabMatchmakingPlayer> Members; // 0x0048(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<FString> RegisteredMembers; // 0x0058(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FPlayFabServerDetails ServerDetails; // 0x0068(0x0028) (BlueprintVisible, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<EServerLocation> LocationPreference; // 0x0090(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		EServerRegion Region; // 0x00A0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};
//USTRUCT(BlueprintType, Blueprintable)
//struct FPrePhysTickFunction : public FTickFunction
//{
// GENERATED_BODY()
// 0x0050(0x0008) MISSED OFFSET
//};

USTRUCT(BlueprintType, Blueprintable)
struct FPlayFabGameServer
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString ServerId; // 0x0000(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FPlayFabServerDetails ServerDetails; // 0x0010(0x0028) (BlueprintVisible, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int Version; // 0x0038(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString ServerName; // 0x0040(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString MapName; // 0x0050(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString GameMode; // 0x0060(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString QueueName; // 0x0070(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<FString> Players; // 0x0080(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int MaxPlayers; // 0x0090(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int ReservedSlots; // 0x0094(0x0004) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bIsModded; // 0x0098(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bIsOfficial; // 0x0099(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bAllowJoin; // 0x009A(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool bIsPasswordProtected; // 0x009B(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<int> Mods; // 0x00A0(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<int> Pings; // 0x00B0(0x0010) (BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		EServerLocation Location; // 0x00C0(0x0001) (BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString AccountID; // 0x00C8(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FString OperatingSystem; // 0x00D8(0x0010) (BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// ScriptStruct Mordhau.PerspectiveHighMidLowSpineSpaceAdditive
USTRUCT(BlueprintType, Blueprintable)
struct FPerspectiveHighMidLowSpineSpaceAdditive
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FHighMidLowSpineSpaceAdditive ThirdPerson; // (Edit, BlueprintVisible)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FHighMidLowSpineSpaceAdditive FirstPerson; // (Edit, BlueprintVisible)
};

// ScriptStruct Mordhau.PerspectiveFloat
USTRUCT(BlueprintType, Blueprintable)
struct FPerspectiveFloat
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float ThirdPerson; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float FirstPerson; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.PerspectiveVector2D
USTRUCT(BlueprintType, Blueprintable)
struct FPerspectiveVector2D
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector2D ThirdPerson; // (Edit, BlueprintVisible, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		struct FVector2D FirstPerson; // (Edit, BlueprintVisible, IsPlainOldData)
};

// ScriptStruct Mordhau.PerspectiveAnimSequence
USTRUCT(BlueprintType, Blueprintable)
struct FPerspectiveAnimSequence
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UAnimSequence* ThirdPerson; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UAnimSequence* FirstPerson; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.PerspectiveCurveFloat
USTRUCT(BlueprintType, Blueprintable)
struct FPerspectiveCurveFloat
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UCurveFloat* ThirdPerson; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UCurveFloat* FirstPerson; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.PerspectiveBool
USTRUCT(BlueprintType, Blueprintable)
struct FPerspectiveBool
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool ThirdPerson; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool FirstPerson; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.PerspectiveAnimSequenceBase
USTRUCT(BlueprintType, Blueprintable)
struct FPerspectiveAnimSequenceBase
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UAnimSequenceBase* ThirdPerson; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UAnimSequenceBase* FirstPerson; // (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

// ScriptStruct Mordhau.PerspectiveAnimSequenceBaseArray
USTRUCT(BlueprintType, Blueprintable)
struct FPerspectiveAnimSequenceBaseArray
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		TArray<struct FPerspectiveAnimSequenceBase> Array; // (Edit, BlueprintVisible, ZeroConstructor)
};

// ScriptStruct Mordhau.CharPhysics
USTRUCT()
struct FCharPhysics
{
	GENERATED_BODY()

		struct FVector Location; // (IsPlainOldData)

	struct FVector Velocity; // (IsPlainOldData)

	struct FRotator Rotation; // (IsPlainOldData)
};

// ScriptStruct Mordhau.CharMove
USTRUCT()
struct FCharMove
{
	GENERATED_BODY()

		struct FVector TargetLocation; // (IsPlainOldData)
};
