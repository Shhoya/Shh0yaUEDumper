// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameMode
// Size : 0x3D8 (Inherited : 0x308)
struct AMagicLeapSharedWorldGameMode : AGameMode {
	struct FMagicLeapSharedWorldSharedData SharedWorldData; // 0x308(0x10)
	struct FMulticastInlineDelegate OnNewLocalDataFromClients; // 0x318(0x10)
	float PinSelectionConfidenceThreshold; // 0x328(0x4)
	unsigned char UnknownData_32C[0x00A4]; // 0x32C(0xA4)
	struct AMagicLeapSharedWorldPlayerController* ChosenOne; // 0x3D0(0x8)

	bool SendSharedWorldDataToClients(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SendSharedWorldDataToClients // (Final|BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774C2FED0
	void SelectChosenOne(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.SelectChosenOne // (BlueprintAuthorityOnly|Native|Event|Public|BlueprintCallable|BlueprintEvent) // Param Size : 0x0, 0x7FF774C2FEB0
	void MagicLeapOnNewLocalDataFromClients__DelegateSignature(); // DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.MagicLeapOnNewLocalDataFromClients__DelegateSignature // (MulticastDelegate|Public|Delegate) // Param Size : 0x0, 0x7FF77510D9D0
	void DetermineSharedWorldData(struct FMagicLeapSharedWorldSharedData NewSharedWorldData); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameMode.DetermineSharedWorldData // (BlueprintAuthorityOnly|Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // Param Size : 0x10, 0x7FF774C2FD90
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldGameState
// Size : 0x2D0 (Inherited : 0x290)
struct AMagicLeapSharedWorldGameState : AGameState {
	struct FMagicLeapSharedWorldSharedData SharedWorldData; // 0x290(0x10)
	struct FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms; // 0x2A0(0x10)
	struct FMulticastInlineDelegate OnSharedWorldDataUpdated; // 0x2B0(0x10)
	struct FMulticastInlineDelegate OnAlignmentTransformsUpdated; // 0x2C0(0x10)

	void OnReplicate_SharedWorldData(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_SharedWorldData // (Final|Native|Private) // Param Size : 0x0, 0x7FF774C2FE90
	void OnReplicate_AlignmentTransforms(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.OnReplicate_AlignmentTransforms // (Final|Native|Private) // Param Size : 0x0, 0x7FF774C2FE70
	void MagicLeapSharedWorldEvent__DelegateSignature(); // DelegateFunction MagicLeapSharedWorld.MagicLeapSharedWorldGameState.MagicLeapSharedWorldEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // Param Size : 0x0, 0x7FF77510D9D0
	struct FTransform CalculateXRCameraRootTransform(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldGameState.CalculateXRCameraRootTransform // (Native|Event|Public|HasDefaults|BlueprintCallable|BlueprintEvent|BlueprintPure|Const) // Param Size : 0x30, 0x7FF774C2FC40
};

// Class MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController
// Size : 0x588 (Inherited : 0x570)
struct AMagicLeapSharedWorldPlayerController : APlayerController {
	unsigned char UnknownData_570[0x0018]; // 0x570(0x18)

	void ServerSetLocalWorldData(struct FMagicLeapSharedWorldLocalData LocalWorldReplicationData); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetLocalWorldData // (Net|NetReliable|Native|Event|Public|NetServer|BlueprintCallable) // Param Size : 0x10, 0x7FF774C2FFA0
	void ServerSetAlignmentTransforms(struct FMagicLeapSharedWorldAlignmentTransforms InAlignmentTransforms); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ServerSetAlignmentTransforms // (Net|NetReliable|Native|Event|Public|NetServer|BlueprintCallable) // Param Size : 0x10, 0x7FF774C2FF00
	bool IsChosenOne(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.IsChosenOne // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF774C2FE40
	void ClientSetChosenOne(bool bChosenOne); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientSetChosenOne // (Net|NetReliable|Native|Event|Public|NetClient|BlueprintCallable) // Param Size : 0x1, 0x7FF774C2FD00
	void ClientMarkReadyForSendingLocalData(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.ClientMarkReadyForSendingLocalData // (Net|NetReliable|Native|Event|Public|NetClient) // Param Size : 0x0, 0x7FF774C2FCE0
	bool CanSendLocalDataToServer(); // Function MagicLeapSharedWorld.MagicLeapSharedWorldPlayerController.CanSendLocalDataToServer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF774C2FCB0
};

