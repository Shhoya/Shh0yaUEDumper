// Class MagicLeap.InAppPurchaseComponent
// Size : 0x128 (Inherited : 0xB0)
struct UInAppPurchaseComponent : UActorComponent {
	struct FMulticastInlineDelegate InAppPurchaseLogMessage; // 0xB0(0x10)
	struct FMulticastInlineDelegate GetItemsDetailsSuccess; // 0xC0(0x10)
	struct FMulticastInlineDelegate GetItemsDetailsFailure; // 0xD0(0x10)
	struct FMulticastInlineDelegate PurchaseConfirmationSuccess; // 0xE0(0x10)
	struct FMulticastInlineDelegate PurchaseConfirmationFailure; // 0xF0(0x10)
	struct FMulticastInlineDelegate GetPurchaseHistorySuccess; // 0x100(0x10)
	struct FMulticastInlineDelegate GetPurchaseHistoryFailure; // 0x110(0x10)
	unsigned char UnknownData_120[0x0008]; // 0x120(0x8)

	bool TryPurchaseItemAsync(struct FPurchaseItemDetails ItemDetails); // Function MagicLeap.InAppPurchaseComponent.TryPurchaseItemAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x41, 0x7FF774C3A680
	bool TryGetPurchaseHistoryAsync(int32_t InNumPages); // Function MagicLeap.InAppPurchaseComponent.TryGetPurchaseHistoryAsync // (Final|Native|Public|BlueprintCallable) // Param Size : 0x5, 0x7FF774C3A5F0
	bool TryGetItemsDetailsAsync(struct TArray<struct FString> ItemIDs); // Function MagicLeap.InAppPurchaseComponent.TryGetItemsDetailsAsync // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x11, 0x7FF774C3A510
	void PurchaseConfirmationSuccess__DelegateSignature(struct FPurchaseConfirmation PurchaseConfirmations); // DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationSuccess__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // Param Size : 0x50, 0x7FF77510D9D0
	void PurchaseConfirmationFailure__DelegateSignature(); // DelegateFunction MagicLeap.InAppPurchaseComponent.PurchaseConfirmationFailure__DelegateSignature // (MulticastDelegate|Public|Delegate) // Param Size : 0x0, 0x7FF77510D9D0
	void InAppPurchaseLogMessage__DelegateSignature(struct FString LogMessage); // DelegateFunction MagicLeap.InAppPurchaseComponent.InAppPurchaseLogMessage__DelegateSignature // (MulticastDelegate|Public|Delegate) // Param Size : 0x10, 0x7FF77510D9D0
	void GetPurchaseHistorySuccess__DelegateSignature(struct TArray<struct FPurchaseConfirmation> PurchaseHistory); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistorySuccess__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // Param Size : 0x10, 0x7FF77510D9D0
	void GetPurchaseHistoryFailure__DelegateSignature(); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetPurchaseHistoryFailure__DelegateSignature // (MulticastDelegate|Public|Delegate) // Param Size : 0x0, 0x7FF77510D9D0
	void GetItemsDetailsSuccess__DelegateSignature(struct TArray<struct FPurchaseItemDetails> ItemsDetails); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsSuccess__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // Param Size : 0x10, 0x7FF77510D9D0
	void GetItemsDetailsFailure__DelegateSignature(); // DelegateFunction MagicLeap.InAppPurchaseComponent.GetItemsDetailsFailure__DelegateSignature // (MulticastDelegate|Public|Delegate) // Param Size : 0x0, 0x7FF77510D9D0
};

// Class MagicLeap.LuminApplicationLifecycleComponent
// Size : 0x190 (Inherited : 0x140)
struct ULuminApplicationLifecycleComponent : UApplicationLifecycleComponent {
	struct FMulticastInlineDelegate DeviceHasReactivatedDelegate; // 0x140(0x10)
	struct FMulticastInlineDelegate DeviceWillEnterRealityModeDelegate; // 0x150(0x10)
	struct FMulticastInlineDelegate DeviceWillGoInStandbyDelegate; // 0x160(0x10)
	struct FMulticastInlineDelegate FocusLostDelegate; // 0x170(0x10)
	struct FMulticastInlineDelegate FocusGainedDelegate; // 0x180(0x10)
};

// Class MagicLeap.MagicLeapHeadTrackingNotificationsComponent
// Size : 0x1D0 (Inherited : 0x140)
struct UMagicLeapHeadTrackingNotificationsComponent : UVRNotificationsComponent {
	struct FMulticastInlineDelegate OnHeadTrackingLost; // 0x140(0x10)
	struct FMulticastInlineDelegate OnHeadTrackingRecovered; // 0x150(0x10)
	struct FMulticastInlineDelegate OnHeadTrackingRecoveryFailed; // 0x160(0x10)
	struct FMulticastInlineDelegate OnHeadTrackingNewSessionStarted; // 0x170(0x10)
	unsigned char UnknownData_180[0x0050]; // 0x180(0x50)
};

// Class MagicLeap.MagicLeapHMDFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct UMagicLeapHMDFunctionLibrary : UBlueprintFunctionLibrary {

	void SetStabilizationDepthActor(struct AActor* InStabilizationDepthActor, bool bSetFocusActor); // Function MagicLeap.MagicLeapHMDFunctionLibrary.SetStabilizationDepthActor // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF774C3A450
	void SetFocusActor(struct AActor* InFocusActor, bool bSetStabilizationActor); // Function MagicLeap.MagicLeapHMDFunctionLibrary.SetFocusActor // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF774C3A390
	void SetBaseRotation(struct FRotator InBaseRotation); // Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseRotation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0xC, 0x7FF774C3A310
	void SetBasePosition(struct FVector InBasePosition); // Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBasePosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0xC, 0x7FF774C3A310
	void SetBaseOrientation(struct FQuat InBaseOrientation); // Function MagicLeap.MagicLeapHMDFunctionLibrary.SetBaseOrientation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF774C3A310
	bool SetAppReady(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.SetAppReady // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774C3A2E0
	bool IsRunningOnMagicLeapHMD(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.IsRunningOnMagicLeapHMD // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF774C39CA0
	int32_t GetPlatformAPILevel(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetPlatformAPILevel // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x4, 0x7FF774C39C10
	int32_t GetMLSDKVersionRevision(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionRevision // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x4, 0x7FF774C39C10
	int32_t GetMLSDKVersionMinor(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMinor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x4, 0x7FF774C39C10
	int32_t GetMLSDKVersionMajor(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersionMajor // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x4, 0x7FF774C39C10
	struct FString GetMLSDKVersion(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMLSDKVersion // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF774C39B90
	int32_t GetMinimumAPILevel(); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetMinimumAPILevel // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x4, 0x7FF774C39C40
	bool GetHeadTrackingState(struct FMagicLeapHeadTrackingState State); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x9, 0x7FF774C39B00
	bool GetHeadTrackingMapEvents(struct TSet<enum class EMagicLeapHeadTrackingMapEvent> MapEvents); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetHeadTrackingMapEvents // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x51, 0x7FF774C399D0
	bool GetGraphicsClientPerformanceInfo(struct FMagicLeapGraphicsClientPerformanceInfo PerformanceInfo); // Function MagicLeap.MagicLeapHMDFunctionLibrary.GetGraphicsClientPerformanceInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x1D, 0x7FF774C39920
};

// Class MagicLeap.MagicLeapMeshTrackerComponent
// Size : 0x280 (Inherited : 0x1F0)
struct UMagicLeapMeshTrackerComponent : USceneComponent {
	unsigned char UnknownData_1F0[0x0008]; // 0x1F0(0x8)
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x1F8(0x10)
	bool ScanWorld; // 0x208(0x1)
	enum class EMagicLeapMeshType MeshType; // 0x209(0x1)
	unsigned char UnknownData_20A[0x0006]; // 0x20A(0x6)
	struct UBoxComponent* BoundingVolume; // 0x210(0x8)
	enum class EMagicLeapMeshLOD LevelOfDetail; // 0x218(0x1)
	unsigned char UnknownData_219[0x0003]; // 0x219(0x3)
	float PerimeterOfGapsToFill; // 0x21C(0x4)
	bool Planarize; // 0x220(0x1)
	unsigned char UnknownData_221[0x0003]; // 0x221(0x3)
	float DisconnectedSectionArea; // 0x224(0x4)
	bool RequestNormals; // 0x228(0x1)
	bool RequestVertexConfidence; // 0x229(0x1)
	enum class EMagicLeapMeshVertexColorMode VertexColorMode; // 0x22A(0x1)
	unsigned char UnknownData_22B[0x0005]; // 0x22B(0x5)
	struct TArray<struct FColor> BlockVertexColors; // 0x230(0x10)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x240(0x10)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x250(0x10)
	bool RemoveOverlappingTriangles; // 0x260(0x1)
	unsigned char UnknownData_261[0x0007]; // 0x261(0x7)
	struct UMRMeshComponent* MRMesh; // 0x268(0x8)
	int32_t BricksPerFrame; // 0x270(0x4)
	unsigned char UnknownData_274[0x000C]; // 0x274(0xC)

	void SelectMeshBlocks(struct FMagicLeapTrackingMeshInfo NewMeshInfo, struct TArray<struct FMagicLeapMeshBlockRequest> RequestedMesh); // Function MagicLeap.MagicLeapMeshTrackerComponent.SelectMeshBlocks // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // Param Size : 0x28, 0x7FF774C3A1C0
	void OnMeshTrackerUpdated__DelegateSignature(struct FGuid ID, struct TArray<struct FVector> Vertices, struct TArray<int32_t> Triangles, struct TArray<struct FVector> Normals, struct TArray<float> Confidence); // DelegateFunction MagicLeap.MagicLeapMeshTrackerComponent.OnMeshTrackerUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults) // Param Size : 0x50, 0x7FF77510D9D0
	int32_t GetNumQueuedBlockUpdates(); // Function MagicLeap.MagicLeapMeshTrackerComponent.GetNumQueuedBlockUpdates // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774C39C70
	void DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectMRMesh // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774C398A0
	void DisconnectBlockSelector(); // Function MagicLeap.MagicLeapMeshTrackerComponent.DisconnectBlockSelector // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF774C39880
	void ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectMRMesh // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774C39800
	void ConnectBlockSelector(struct TScriptInterface<None> Selector); // Function MagicLeap.MagicLeapMeshTrackerComponent.ConnectBlockSelector // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF774C39760
};

// Class MagicLeap.MagicLeapSettings
// Size : 0x30 (Inherited : 0x28)
struct UMagicLeapSettings : UObject {
	bool bEnableZI; // 0x28(0x1)
	bool bUseVulkanForZI; // 0x29(0x1)
	bool bUseMLAudioForZI; // 0x2A(0x1)
	unsigned char UnknownData_2B[0x0005]; // 0x2B(0x5)
};

// Class MagicLeap.MagicLeapMeshBlockSelectorInterface
// Size : 0x28 (Inherited : 0x28)
struct UMagicLeapMeshBlockSelectorInterface : UInterface {

	void SelectMeshBlocks(struct FMagicLeapTrackingMeshInfo NewMeshInfo, struct TArray<struct FMagicLeapMeshBlockRequest> RequestedMesh); // Function MagicLeap.MagicLeapMeshBlockSelectorInterface.SelectMeshBlocks // (Native|Event|Public|HasOutParms|BlueprintCallable|BlueprintEvent) // Param Size : 0x28, 0x7FF774C3A0A0
};

// Class MagicLeap.MagicLeapRaycastComponent
// Size : 0x118 (Inherited : 0xB0)
struct UMagicLeapRaycastComponent : UActorComponent {
	unsigned char UnknownData_B0[0x0068]; // 0xB0(0x68)

	bool RequestRaycast(struct FMagicLeapRaycastQueryParams RequestParams, struct FDelegate ResultDelegate); // Function MagicLeap.MagicLeapRaycastComponent.RequestRaycast // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x49, 0x7FF774C39F50
	void RaycastResultDelegate__DelegateSignature(struct FMagicLeapRaycastHitResult HitResult); // DelegateFunction MagicLeap.MagicLeapRaycastComponent.RaycastResultDelegate__DelegateSignature // (Public|Delegate) // Param Size : 0x24, 0x7FF77510D9D0
};

// Class MagicLeap.MagicLeapRaycastFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct UMagicLeapRaycastFunctionLibrary : UBlueprintFunctionLibrary {

	struct FMagicLeapRaycastQueryParams MakeRaycastQueryParams(struct FVector Position, struct FVector Direction, struct FVector UpVector, int32_t Width, int32_t Height, float HorizontalFovDegrees, bool CollideWithUnobserved, int32_t UserData); // Function MagicLeap.MagicLeapRaycastFunctionLibrary.MakeRaycastQueryParams // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x70, 0x7FF774C39CD0
};

