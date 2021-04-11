// Class EngineSettings.ConsoleSettings
// Size : 0x70 (Inherited : 0x28)
struct UConsoleSettings : UObject {
	int32_t MaxScrollbackSize; // 0x28(0x4)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
	struct TArray<struct FAutoCompleteCommand> ManualAutoCompleteList; // 0x30(0x10)
	struct TArray<struct FString> AutoCompleteMapPaths; // 0x40(0x10)
	float BackgroundOpacityPercentage; // 0x50(0x4)
	bool bOrderTopToBottom; // 0x54(0x1)
	bool bDisplayHelpInAutoComplete; // 0x55(0x1)
	unsigned char UnknownData_56[0x0002]; // 0x56(0x2)
	struct FColor InputColor; // 0x58(0x4)
	struct FColor HistoryColor; // 0x5C(0x4)
	struct FColor AutoCompleteCommandColor; // 0x60(0x4)
	struct FColor AutoCompleteCVarColor; // 0x64(0x4)
	struct FColor AutoCompleteFadedColor; // 0x68(0x4)
	unsigned char UnknownData_6C[0x0004]; // 0x6C(0x4)
};

// Class EngineSettings.GameMapsSettings
// Size : 0xF0 (Inherited : 0x28)
struct UGameMapsSettings : UObject {
	struct FString LocalMapOptions; // 0x28(0x10)
	struct FSoftObjectPath TransitionMap; // 0x38(0x18)
	bool bUseSplitscreen; // 0x50(0x1)
	enum class ETwoPlayerSplitScreenType TwoPlayerSplitscreenLayout; // 0x51(0x1)
	enum class EThreePlayerSplitScreenType ThreePlayerSplitscreenLayout; // 0x52(0x1)
	enum class EFourPlayerSplitScreenType FourPlayerSplitscreenLayout; // 0x53(0x1)
	bool bOffsetPlayerGamepadIds; // 0x54(0x1)
	unsigned char UnknownData_55[0x0003]; // 0x55(0x3)
	struct FSoftClassPath GameInstanceClass; // 0x58(0x18)
	struct FSoftObjectPath GameDefaultMap; // 0x70(0x18)
	struct FSoftObjectPath ServerDefaultMap; // 0x88(0x18)
	struct FSoftClassPath GlobalDefaultGameMode; // 0xA0(0x18)
	struct FSoftClassPath GlobalDefaultServerGameMode; // 0xB8(0x18)
	struct TArray<struct FGameModeName> GameModeMapPrefixes; // 0xD0(0x10)
	struct TArray<struct FGameModeName> GameModeClassAliases; // 0xE0(0x10)

	void SetSkipAssigningGamepadToPlayer1(bool bSkipFirstPlayer); // Function EngineSettings.GameMapsSettings.SetSkipAssigningGamepadToPlayer1 // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF7758D5720
	bool GetSkipAssigningGamepadToPlayer1(); // Function EngineSettings.GameMapsSettings.GetSkipAssigningGamepadToPlayer1 // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF7758D56F0
	struct UGameMapsSettings* GetGameMapsSettings(); // Function EngineSettings.GameMapsSettings.GetGameMapsSettings // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x8, 0x7FF7758D56C0
};

// Class EngineSettings.GameNetworkManagerSettings
// Size : 0x58 (Inherited : 0x28)
struct UGameNetworkManagerSettings : UObject {
	int32_t MinDynamicBandwidth; // 0x28(0x4)
	int32_t MaxDynamicBandwidth; // 0x2C(0x4)
	int32_t TotalNetBandwidth; // 0x30(0x4)
	int32_t BadPingThreshold; // 0x34(0x4)
	unsigned char bIsStandbyCheckingEnabled : 1; // 0x38(0x1)
	unsigned char UnknownData_38_1 : 7; // 0x38(0x1)
	unsigned char UnknownData_39[0x0003]; // 0x39(0x3)
	float StandbyRxCheatTime; // 0x3C(0x4)
	float StandbyTxCheatTime; // 0x40(0x4)
	float PercentMissingForRxStandby; // 0x44(0x4)
	float PercentMissingForTxStandby; // 0x48(0x4)
	float PercentForBadPing; // 0x4C(0x4)
	float JoinInProgressStandbyWaitTime; // 0x50(0x4)
	unsigned char UnknownData_54[0x0004]; // 0x54(0x4)
};

// Class EngineSettings.GameSessionSettings
// Size : 0x38 (Inherited : 0x28)
struct UGameSessionSettings : UObject {
	int32_t MaxSpectators; // 0x28(0x4)
	int32_t MaxPlayers; // 0x2C(0x4)
	unsigned char bRequiresPushToTalk : 1; // 0x30(0x1)
	unsigned char UnknownData_30_1 : 7; // 0x30(0x1)
	unsigned char UnknownData_31[0x0007]; // 0x31(0x7)
};

// Class EngineSettings.GeneralEngineSettings
// Size : 0x28 (Inherited : 0x28)
struct UGeneralEngineSettings : UObject {
};

// Class EngineSettings.GeneralProjectSettings
// Size : 0x118 (Inherited : 0x28)
struct UGeneralProjectSettings : UObject {
	struct FString CompanyName; // 0x28(0x10)
	struct FString CompanyDistinguishedName; // 0x38(0x10)
	struct FString CopyrightNotice; // 0x48(0x10)
	struct FString Description; // 0x58(0x10)
	struct FString Homepage; // 0x68(0x10)
	struct FString LicensingTerms; // 0x78(0x10)
	struct FString PrivacyPolicy; // 0x88(0x10)
	struct FGuid ProjectID; // 0x98(0x10)
	struct FString ProjectName; // 0xA8(0x10)
	struct FString ProjectVersion; // 0xB8(0x10)
	struct FString SupportContact; // 0xC8(0x10)
	struct FText ProjectDisplayedTitle; // 0xD8(0x18)
	struct FText ProjectDebugTitleInfo; // 0xF0(0x18)
	bool bShouldWindowPreserveAspectRatio; // 0x108(0x1)
	bool bUseBorderlessWindow; // 0x109(0x1)
	bool bStartInVR; // 0x10A(0x1)
	bool bStartInAR; // 0x10B(0x1)
	bool bSupportAR; // 0x10C(0x1)
	bool bAllowWindowResize; // 0x10D(0x1)
	bool bAllowClose; // 0x10E(0x1)
	bool bAllowMaximize; // 0x10F(0x1)
	bool bAllowMinimize; // 0x110(0x1)
	unsigned char UnknownData_111[0x0007]; // 0x111(0x7)
};

// Class EngineSettings.HudSettings
// Size : 0x40 (Inherited : 0x28)
struct UHudSettings : UObject {
	unsigned char bShowHUD : 1; // 0x28(0x1)
	unsigned char UnknownData_28_1 : 7; // 0x28(0x1)
	unsigned char UnknownData_29[0x0007]; // 0x29(0x7)
	struct TArray<struct FName> DebugDisplay; // 0x30(0x10)
};

