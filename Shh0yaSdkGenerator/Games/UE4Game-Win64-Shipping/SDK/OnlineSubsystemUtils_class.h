// Class OnlineSubsystemUtils.AchievementBlueprintLibrary
// Size : 0x28 (Inherited : 0x28)
struct UAchievementBlueprintLibrary : UBlueprintFunctionLibrary {

	void GetCachedAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool bFoundID, float Progress); // Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x20, 0x7FF774D267D0
	void GetCachedAchievementDescription(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementID, bool bFoundID, struct FText Title, struct FText LockedDescription, struct FText UnlockedDescription, bool bHidden); // Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x69, 0x7FF774D26480
};

// Class OnlineSubsystemUtils.AchievementQueryCallbackProxy
// Size : 0x68 (Inherited : 0x30)
struct UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	unsigned char UnknownData_50[0x0018]; // 0x50(0x18)

	struct UAchievementQueryCallbackProxy* CacheAchievements(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF774D252D0
	struct UAchievementQueryCallbackProxy* CacheAchievementDescriptions(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF774D25210
};

// Class OnlineSubsystemUtils.AchievementWriteCallbackProxy
// Size : 0x80 (Inherited : 0x30)
struct UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	unsigned char UnknownData_50[0x0030]; // 0x50(0x30)

	struct UAchievementWriteCallbackProxy* WriteAchievementProgress(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FName AchievementName, float Progress, int32_t UserTag); // Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x28, 0x7FF774D26E70
};

// Class OnlineSubsystemUtils.ConnectionCallbackProxy
// Size : 0x78 (Inherited : 0x30)
struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	unsigned char UnknownData_50[0x0028]; // 0x50(0x28)

	struct UConnectionCallbackProxy* ConnectToService(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF774D25390
};

// Class OnlineSubsystemUtils.CreateSessionCallbackProxy
// Size : 0x98 (Inherited : 0x30)
struct UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	unsigned char UnknownData_50[0x0048]; // 0x50(0x48)

	struct UCreateSessionCallbackProxy* CreateSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t PublicConnections, bool bUseLAN); // Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF774D25B90
};

// Class OnlineSubsystemUtils.DestroySessionCallbackProxy
// Size : 0x78 (Inherited : 0x30)
struct UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	unsigned char UnknownData_50[0x0028]; // 0x50(0x28)

	struct UDestroySessionCallbackProxy* DestroySession(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF774D25CC0
};

// Class OnlineSubsystemUtils.EndMatchCallbackProxy
// Size : 0x80 (Inherited : 0x30)
struct UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	unsigned char UnknownData_50[0x0030]; // 0x50(0x30)

	struct UEndMatchCallbackProxy* EndMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<None> MatchActor, struct FString MatchID, enum class EMPMatchOutcome LocalPlayerOutcome, enum class EMPMatchOutcome OtherPlayersOutcome); // Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x40, 0x7FF774D25D80
};

// Class OnlineSubsystemUtils.EndTurnCallbackProxy
// Size : 0x78 (Inherited : 0x30)
struct UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	unsigned char UnknownData_50[0x0028]; // 0x50(0x28)

	struct UEndTurnCallbackProxy* EndTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, struct TScriptInterface<None> TurnBasedMatchInterface); // Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x38, 0x7FF774D25F90
};

// Class OnlineSubsystemUtils.FindSessionsCallbackProxy
// Size : 0x90 (Inherited : 0x30)
struct UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	unsigned char UnknownData_50[0x0040]; // 0x50(0x40)

	struct FString GetServerName(struct FBlueprintSessionResult Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0xC8, 0x7FF774D26D00
	int32_t GetPingInMs(struct FBlueprintSessionResult Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0xBC, 0x7FF774D26BD0
	int32_t GetMaxPlayers(struct FBlueprintSessionResult Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0xBC, 0x7FF774D26AA0
	int32_t GetCurrentPlayers(struct FBlueprintSessionResult Result); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0xBC, 0x7FF774D26970
	struct UFindSessionsCallbackProxy* FindSessions(struct UObject* WorldContextObject, struct APlayerController* PlayerController, int32_t MaxResults, bool bUseLAN); // Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF774D26140
};

// Class OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy
// Size : 0x88 (Inherited : 0x30)
struct UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	unsigned char UnknownData_50[0x0038]; // 0x50(0x38)

	struct UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct TScriptInterface<None> MatchActor, int32_t MinPlayers, int32_t MaxPlayers, int32_t PlayerGroup, bool ShowExistingMatches); // Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x38, 0x7FF774D26270
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy
// Size : 0x80 (Inherited : 0x28)
struct UInAppPurchaseCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	unsigned char UnknownData_48[0x0038]; // 0x48(0x38)

	struct UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, struct FInAppPurchaseProductRequest ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy.CreateProxyObjectForInAppPurchase // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x28, 0x7FF774D25540
};

// Class OnlineSubsystemUtils.InAppPurchaseCallbackProxy2
// Size : 0xA8 (Inherited : 0x28)
struct UInAppPurchaseCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	unsigned char UnknownData_48[0x0060]; // 0x48(0x60)

	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF774D25B10
	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF774D25850
	struct UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(struct APlayerController* PlayerController, struct FInAppPurchaseProductRequest2 ProductRequest); // Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x28, 0x7FF774D25450
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy
// Size : 0x90 (Inherited : 0x28)
struct UInAppPurchaseQueryCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	unsigned char UnknownData_48[0x0048]; // 0x48(0x48)

	struct UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, struct TArray<struct FString> ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy.CreateProxyObjectForInAppPurchaseQuery // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x20, 0x7FF774D25740
};

// Class OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2
// Size : 0x68 (Inherited : 0x28)
struct UInAppPurchaseQueryCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	unsigned char UnknownData_48[0x0020]; // 0x48(0x20)

	struct UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(struct APlayerController* PlayerController, struct TArray<struct FString> ProductIdentifiers); // Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x20, 0x7FF774D25630
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy
// Size : 0x90 (Inherited : 0x28)
struct UInAppPurchaseRestoreCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	unsigned char UnknownData_48[0x0048]; // 0x48(0x48)

	struct UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest> ConsumableProductFlags, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy.CreateProxyObjectForInAppPurchaseRestore // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x20, 0x7FF774D259F0
};

// Class OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2
// Size : 0xA8 (Inherited : 0x28)
struct UInAppPurchaseRestoreCallbackProxy2 : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	unsigned char UnknownData_48[0x0060]; // 0x48(0x60)

	struct UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(struct TArray<struct FInAppPurchaseProductRequest2> ConsumableProductFlags, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x20, 0x7FF774D258D0
};

// Class OnlineSubsystemUtils.IpConnection
// Size : 0x1AD0 (Inherited : 0x1A30)
struct UIpConnection : UNetConnection {
	unsigned char UnknownData_1A30[0x0050]; // 0x1A30(0x50)
	float SocketErrorDisconnectDelay; // 0x1A80(0x4)
	unsigned char UnknownData_1A84[0x004C]; // 0x1A84(0x4C)
};

// Class OnlineSubsystemUtils.IpNetDriver
// Size : 0x7B8 (Inherited : 0x748)
struct UIpNetDriver : UNetDriver {
	unsigned char LogPortUnreach : 1; // 0x748(0x1)
	unsigned char AllowPlayerPortUnreach : 1; // 0x748(0x1)
	unsigned char UnknownData_748_2 : 6; // 0x748(0x1)
	unsigned char UnknownData_749[0x0003]; // 0x749(0x3)
	uint32_t MaxPortCountToTry; // 0x74C(0x4)
	unsigned char UnknownData_750[0x000C]; // 0x750(0xC)
	uint32_t ServerDesiredSocketReceiveBufferBytes; // 0x75C(0x4)
	uint32_t ServerDesiredSocketSendBufferBytes; // 0x760(0x4)
	uint32_t ClientDesiredSocketReceiveBufferBytes; // 0x764(0x4)
	uint32_t ClientDesiredSocketSendBufferBytes; // 0x768(0x4)
	unsigned char UnknownData_76C[0x0004]; // 0x76C(0x4)
	double MaxSecondsInReceive; // 0x770(0x8)
	int32_t NbPacketsBetweenReceiveTimeTest; // 0x778(0x4)
	float ResolutionConnectionTimeout; // 0x77C(0x4)
	unsigned char UnknownData_780[0x0038]; // 0x780(0x38)
};

// Class OnlineSubsystemUtils.JoinSessionCallbackProxy
// Size : 0x130 (Inherited : 0x30)
struct UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	unsigned char UnknownData_50[0x00E0]; // 0x50(0xE0)

	struct UJoinSessionCallbackProxy* JoinSession(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FBlueprintSessionResult SearchResult); // Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0xD0, 0x7FF774D2AAC0
};

// Class OnlineSubsystemUtils.LeaderboardBlueprintLibrary
// Size : 0x28 (Inherited : 0x28)
struct ULeaderboardBlueprintLibrary : UBlueprintFunctionLibrary {

	bool WriteLeaderboardInteger(struct APlayerController* PlayerController, struct FName StatName, int32_t StatValue); // Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x15, 0x7FF774D2B700
};

// Class OnlineSubsystemUtils.LeaderboardFlushCallbackProxy
// Size : 0x68 (Inherited : 0x28)
struct ULeaderboardFlushCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	unsigned char UnknownData_48[0x0020]; // 0x48(0x20)

	struct ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(struct APlayerController* PlayerController, struct FName SessionName); // Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF774D2A940
};

// Class OnlineSubsystemUtils.LeaderboardQueryCallbackProxy
// Size : 0x98 (Inherited : 0x28)
struct ULeaderboardQueryCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x38(0x10)
	unsigned char UnknownData_48[0x0050]; // 0x48(0x50)

	struct ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(struct APlayerController* PlayerController, struct FName StatName); // Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF774D2AA00
};

// Class OnlineSubsystemUtils.LogoutCallbackProxy
// Size : 0x68 (Inherited : 0x30)
struct ULogoutCallbackProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	unsigned char UnknownData_50[0x0018]; // 0x50(0x18)

	struct ULogoutCallbackProxy* Logout(struct UObject* WorldContextObject, struct APlayerController* PlayerController); // Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF774D2AC10
};

// Class OnlineSubsystemUtils.OnlineBeacon
// Size : 0x250 (Inherited : 0x220)
struct AOnlineBeacon : AActor {
	unsigned char UnknownData_220[0x0008]; // 0x220(0x8)
	float BeaconConnectionInitialTimeout; // 0x228(0x4)
	float BeaconConnectionTimeout; // 0x22C(0x4)
	struct UNetDriver* NetDriver; // 0x230(0x8)
	unsigned char UnknownData_238[0x0018]; // 0x238(0x18)
};

// Class OnlineSubsystemUtils.OnlineBeaconClient
// Size : 0x2B0 (Inherited : 0x250)
struct AOnlineBeaconClient : AOnlineBeacon {
	struct AOnlineBeaconHostObject* BeaconOwner; // 0x250(0x8)
	struct UNetConnection* BeaconConnection; // 0x258(0x8)
	enum class EBeaconConnectionState ConnectionState; // 0x260(0x1)
	unsigned char UnknownData_261[0x004F]; // 0x261(0x4F)

	void ClientOnConnected(); // Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected // (Final|Net|NetReliable|Native|Event|Private|NetClient) // Param Size : 0x0, 0x7FF774D2A6A0
};

// Class OnlineSubsystemUtils.OnlineBeaconHost
// Size : 0x308 (Inherited : 0x250)
struct AOnlineBeaconHost : AOnlineBeacon {
	int32_t ListenPort; // 0x250(0x4)
	unsigned char UnknownData_254[0x0004]; // 0x254(0x4)
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // 0x258(0x10)
	unsigned char UnknownData_268[0x00A0]; // 0x268(0xA0)
};

// Class OnlineSubsystemUtils.OnlineBeaconHostObject
// Size : 0x248 (Inherited : 0x220)
struct AOnlineBeaconHostObject : AActor {
	struct FString BeaconTypeName; // 0x220(0x10)
	class AOnlineBeaconClient* ClientBeaconActorClass; // 0x230(0x8)
	struct TArray<struct AOnlineBeaconClient*> ClientActors; // 0x238(0x10)
};

// Class OnlineSubsystemUtils.OnlineEngineInterfaceImpl
// Size : 0x128 (Inherited : 0x28)
struct UOnlineEngineInterfaceImpl : UOnlineEngineInterface {
	struct FName VoiceSubsystemNameOverride; // 0x28(0x8)
	unsigned char UnknownData_30[0x00F8]; // 0x30(0xF8)
};

// Class OnlineSubsystemUtils.OnlinePIESettings
// Size : 0x50 (Inherited : 0x38)
struct UOnlinePIESettings : UDeveloperSettings {
	bool bOnlinePIEEnabled; // 0x38(0x1)
	unsigned char UnknownData_39[0x0007]; // 0x39(0x7)
	struct TArray<struct FPIELoginSettingsInternal> Logins; // 0x40(0x10)
};

// Class OnlineSubsystemUtils.OnlineSessionClient
// Size : 0x190 (Inherited : 0x28)
struct UOnlineSessionClient : UOnlineSession {
	unsigned char UnknownData_28[0x0160]; // 0x28(0x160)
	bool bIsFromInvite; // 0x188(0x1)
	bool bHandlingDisconnect; // 0x189(0x1)
	unsigned char UnknownData_18A[0x0006]; // 0x18A(0x6)
};

// Class OnlineSubsystemUtils.PartyBeaconClient
// Size : 0x370 (Inherited : 0x2B0)
struct APartyBeaconClient : AOnlineBeaconClient {
	unsigned char UnknownData_2B0[0x0030]; // 0x2B0(0x30)
	struct FString DestSessionId; // 0x2E0(0x10)
	struct FPartyReservation PendingReservation; // 0x2F0(0x50)
	enum class EClientRequestType RequestType; // 0x340(0x1)
	bool bPendingReservationSent; // 0x341(0x1)
	bool bCancelReservation; // 0x342(0x1)
	unsigned char UnknownData_343[0x002D]; // 0x343(0x2D)

	void ServerUpdateReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest // (Net|NetReliable|Native|Event|Protected|NetServer|NetValidate) // Param Size : 0x60, 0x7FF774D2B4B0
	void ServerReservationRequest(struct FString SessionId, struct FPartyReservation Reservation); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest // (Net|NetReliable|Native|Event|Protected|NetServer|NetValidate) // Param Size : 0x60, 0x7FF774D2B180
	void ServerRemoveMemberFromReservationRequest(struct FString SessionId, struct FPartyReservation ReservationUpdate); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest // (Net|NetReliable|Native|Event|Protected|NetServer|NetValidate) // Param Size : 0x60, 0x7FF774D2AFF0
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl PartyLeader); // Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest // (Net|NetReliable|Native|Event|Protected|NetServer|NetValidate) // Param Size : 0x28, 0x7FF774D2AE90
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates // (Net|NetReliable|Native|Event|Public|NetClient) // Param Size : 0x4, 0x7FF774D2A820
	void ClientSendReservationFull(); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull // (Net|NetReliable|Native|Event|Public|NetClient) // Param Size : 0x0, 0x7FF774D2A7E0
	void ClientReservationResponse(enum class EPartyReservationResult ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse // (Net|NetReliable|Native|Event|Public|NetClient) // Param Size : 0x1, 0x7FF774D2A6E0
	void ClientCancelReservationResponse(enum class EPartyReservationResult ReservationResponse); // Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse // (Net|NetReliable|Native|Event|Public|NetClient) // Param Size : 0x1, 0x7FF774D2A5A0
};

// Class OnlineSubsystemUtils.PartyBeaconHost
// Size : 0x2C0 (Inherited : 0x248)
struct APartyBeaconHost : AOnlineBeaconHostObject {
	struct UPartyBeaconState* State; // 0x248(0x8)
	unsigned char UnknownData_250[0x0060]; // 0x250(0x60)
	bool bLogoutOnSessionTimeout; // 0x2B0(0x1)
	unsigned char UnknownData_2B1[0x0003]; // 0x2B1(0x3)
	float SessionTimeoutSecs; // 0x2B4(0x4)
	float TravelSessionTimeoutSecs; // 0x2B8(0x4)
	unsigned char UnknownData_2BC[0x0004]; // 0x2BC(0x4)
};

// Class OnlineSubsystemUtils.PartyBeaconState
// Size : 0x78 (Inherited : 0x28)
struct UPartyBeaconState : UObject {
	struct FName SessionName; // 0x28(0x8)
	int32_t NumConsumedReservations; // 0x30(0x4)
	int32_t MaxReservations; // 0x34(0x4)
	int32_t NumTeams; // 0x38(0x4)
	int32_t NumPlayersPerTeam; // 0x3C(0x4)
	struct FName TeamAssignmentMethod; // 0x40(0x8)
	int32_t ReservedHostTeamNum; // 0x48(0x4)
	int32_t ForceTeamNum; // 0x4C(0x4)
	bool bRestrictCrossConsole; // 0x50(0x1)
	bool bEnableRemovalRequests; // 0x51(0x1)
	unsigned char UnknownData_52[0x0006]; // 0x52(0x6)
	struct TArray<struct FPartyReservation> Reservations; // 0x58(0x10)
	unsigned char UnknownData_68[0x0010]; // 0x68(0x10)
};

// Class OnlineSubsystemUtils.QuitMatchCallbackProxy
// Size : 0x78 (Inherited : 0x30)
struct UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	unsigned char UnknownData_50[0x0028]; // 0x50(0x28)

	struct UQuitMatchCallbackProxy* QuitMatch(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, enum class EMPMatchOutcome Outcome, int32_t TurnTimeoutInSeconds); // Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x30, 0x7FF774D2ACD0
};

// Class OnlineSubsystemUtils.ShowLoginUICallbackProxy
// Size : 0x60 (Inherited : 0x30)
struct UShowLoginUICallbackProxy : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	unsigned char UnknownData_50[0x0010]; // 0x50(0x10)

	struct UShowLoginUICallbackProxy* ShowExternalLoginUI(struct UObject* WorldContextObject, struct APlayerController* InPlayerController); // Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF774D2B640
};

// Class OnlineSubsystemUtils.SpectatorBeaconClient
// Size : 0x398 (Inherited : 0x2B0)
struct ASpectatorBeaconClient : AOnlineBeaconClient {
	unsigned char UnknownData_2B0[0x0030]; // 0x2B0(0x30)
	struct FString DestSessionId; // 0x2E0(0x10)
	struct FSpectatorReservation PendingReservation; // 0x2F0(0x78)
	enum class ESpectatorClientRequestType RequestType; // 0x368(0x1)
	bool bPendingReservationSent; // 0x369(0x1)
	bool bCancelReservation; // 0x36A(0x1)
	unsigned char UnknownData_36B[0x002D]; // 0x36B(0x2D)

	void ServerReservationRequest(struct FString SessionId, struct FSpectatorReservation Reservation); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest // (Net|NetReliable|Native|Event|Protected|NetServer|NetValidate) // Param Size : 0x88, 0x7FF774D2B310
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl Spectator); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest // (Net|NetReliable|Native|Event|Protected|NetServer|NetValidate) // Param Size : 0x28, 0x7FF774D2AE90
	void ClientSendReservationUpdates(int32_t NumRemainingReservations); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates // (Net|NetReliable|Native|Event|Public|NetClient) // Param Size : 0x4, 0x7FF774D2A8B0
	void ClientSendReservationFull(); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull // (Net|NetReliable|Native|Event|Public|NetClient) // Param Size : 0x0, 0x7FF774D2A800
	void ClientReservationResponse(enum class ESpectatorReservationResult ReservationResponse); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse // (Net|NetReliable|Native|Event|Public|NetClient) // Param Size : 0x1, 0x7FF774D2A760
	void ClientCancelReservationResponse(enum class ESpectatorReservationResult ReservationResponse); // Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse // (Net|NetReliable|Native|Event|Public|NetClient) // Param Size : 0x1, 0x7FF774D2A620
};

// Class OnlineSubsystemUtils.SpectatorBeaconHost
// Size : 0x2C0 (Inherited : 0x248)
struct ASpectatorBeaconHost : AOnlineBeaconHostObject {
	struct USpectatorBeaconState* State; // 0x248(0x8)
	unsigned char UnknownData_250[0x0060]; // 0x250(0x60)
	bool bLogoutOnSessionTimeout; // 0x2B0(0x1)
	unsigned char UnknownData_2B1[0x0003]; // 0x2B1(0x3)
	float SessionTimeoutSecs; // 0x2B4(0x4)
	float TravelSessionTimeoutSecs; // 0x2B8(0x4)
	unsigned char UnknownData_2BC[0x0004]; // 0x2BC(0x4)
};

// Class OnlineSubsystemUtils.SpectatorBeaconState
// Size : 0x60 (Inherited : 0x28)
struct USpectatorBeaconState : UObject {
	struct FName SessionName; // 0x28(0x8)
	int32_t NumConsumedReservations; // 0x30(0x4)
	int32_t MaxReservations; // 0x34(0x4)
	bool bRestrictCrossConsole; // 0x38(0x1)
	unsigned char UnknownData_39[0x0007]; // 0x39(0x7)
	struct TArray<struct FSpectatorReservation> Reservations; // 0x40(0x10)
	unsigned char UnknownData_50[0x0010]; // 0x50(0x10)
};

// Class OnlineSubsystemUtils.TestBeaconClient
// Size : 0x2B0 (Inherited : 0x2B0)
struct ATestBeaconClient : AOnlineBeaconClient {

	void ServerPong(); // Function OnlineSubsystemUtils.TestBeaconClient.ServerPong // (Net|NetReliable|Native|Event|Public|NetServer|NetValidate) // Param Size : 0x0, 0x7FF774D2AFA0
	void ClientPing(); // Function OnlineSubsystemUtils.TestBeaconClient.ClientPing // (Net|NetReliable|Native|Event|Public|NetClient) // Param Size : 0x0, 0x7FF774D2A6C0
};

// Class OnlineSubsystemUtils.TestBeaconHost
// Size : 0x248 (Inherited : 0x248)
struct ATestBeaconHost : AOnlineBeaconHostObject {
};

// Class OnlineSubsystemUtils.TurnBasedBlueprintLibrary
// Size : 0x28 (Inherited : 0x28)
struct UTurnBasedBlueprintLibrary : UBlueprintFunctionLibrary {

	void RegisterTurnBasedMatchInterfaceObject(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct UObject* Object); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF774D2C240
	void GetPlayerDisplayName(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t PlayerIndex, struct FString PlayerDisplayName); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x38, 0x7FF774D2C020
	void GetMyPlayerIndex(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, int32_t PlayerIndex); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x24, 0x7FF774D2BE80
	void GetIsMyTurn(struct UObject* WorldContextObject, struct APlayerController* PlayerController, struct FString MatchID, bool bIsMyTurn); // Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x21, 0x7FF774D2BCE0
};

// Class OnlineSubsystemUtils.VoipListenerSynthComponent
// Size : 0x730 (Inherited : 0x6D0)
struct UVoipListenerSynthComponent : USynthComponent {
	unsigned char UnknownData_6D0[0x0060]; // 0x6D0(0x60)

	bool IsIdling(); // Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D2C210
};

