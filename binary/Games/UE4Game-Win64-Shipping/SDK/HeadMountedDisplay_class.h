// Class HeadMountedDisplay.VRNotificationsComponent
// Size : 0x140 (Inherited : 0xB0)
struct UVRNotificationsComponent : UActorComponent {
	struct FMulticastInlineDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xB0(0x10)
	struct FMulticastInlineDelegate HMDTrackingInitializedDelegate; // 0xC0(0x10)
	struct FMulticastInlineDelegate HMDRecenteredDelegate; // 0xD0(0x10)
	struct FMulticastInlineDelegate HMDLostDelegate; // 0xE0(0x10)
	struct FMulticastInlineDelegate HMDReconnectedDelegate; // 0xF0(0x10)
	struct FMulticastInlineDelegate HMDConnectCanceledDelegate; // 0x100(0x10)
	struct FMulticastInlineDelegate HMDPutOnHeadDelegate; // 0x110(0x10)
	struct FMulticastInlineDelegate HMDRemovedFromHeadDelegate; // 0x120(0x10)
	struct FMulticastInlineDelegate VRControllerRecenteredDelegate; // 0x130(0x10)
};

// Class HeadMountedDisplay.HeadMountedDisplayFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct UHeadMountedDisplayFunctionLibrary : UBlueprintFunctionLibrary {

	void UpdateExternalTrackingHMDPosition(struct FTransform ExternalTrackingTransform); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.UpdateExternalTrackingHMDPosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x30, 0x7FF775BBAFB0
	void SetWorldToMetersScale(struct UObject* WorldContext, float NewScale); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetWorldToMetersScale // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0xC, 0x7FF775BBAED0
	void SetTrackingOrigin(enum class EHMDTrackingOrigin Origin); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetTrackingOrigin // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775BBADE0
	void SetSpectatorScreenTexture(struct UTexture* InTexture); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenTexture // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775BBACF0
	void SetSpectatorScreenModeTexturePlusEyeLayout(struct FVector2D EyeRectMin, struct FVector2D EyeRectMax, struct FVector2D TextureRectMin, struct FVector2D TextureRectMax, bool bDrawEyeFirst, bool bClearBlack, bool bUseAlpha); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenModeTexturePlusEyeLayout // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x23, 0x7FF775BBAB00
	void SetSpectatorScreenMode(enum class ESpectatorScreenMode Mode); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetSpectatorScreenMode // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775BBAA90
	void SetClippingPlanes(float Near, float Far); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.SetClippingPlanes // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775BBA630
	void ResetOrientationAndPosition(float Yaw, enum class EOrientPositionSelector Options); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.ResetOrientationAndPosition // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x5, 0x7FF775BBA500
	bool IsSpectatorScreenModeControllable(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsSpectatorScreenModeControllable // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF775BBA4B0
	bool IsInLowPersistenceMode(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsInLowPersistenceMode // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF774BFFE20
	bool IsHeadMountedDisplayEnabled(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF775BBA190
	bool IsHeadMountedDisplayConnected(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsHeadMountedDisplayConnected // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF775BBA160
	bool IsDeviceTracking(struct FXRDeviceId XRDeviceId); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.IsDeviceTracking // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0xD, 0x7FF775BBA0C0
	bool HasValidTrackingPosition(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.HasValidTrackingPosition // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF775BBA070
	float GetWorldToMetersScale(struct UObject* WorldContext); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetWorldToMetersScale // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0xC, 0x7FF775BB9FE0
	void GetVRFocusState(bool bUseFocus, bool bHasFocus); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetVRFocusState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x2, 0x7FF775BB9F00
	struct FTransform GetTrackingToWorldTransform(struct UObject* WorldContext); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingToWorldTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x40, 0x7FF775BB9E40
	void GetTrackingSensorParameters(struct FVector Origin, struct FRotator Rotation, float LeftFOV, float RightFOV, float TopFOV, float BottomFOV, float Distance, float NearPlane, float FarPlane, bool IsActive, int32_t Index); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingSensorParameters // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x3C, 0x7FF775BB9A60
	enum class EHMDTrackingOrigin GetTrackingOrigin(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetTrackingOrigin // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF775BB9A20
	float GetScreenPercentage(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetScreenPercentage // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x4, 0x7FF775BB99F0
	void GetPositionalTrackingCameraParameters(struct FVector CameraOrigin, struct FRotator CameraRotation, float HFOV, float VFOV, float CameraDistance, float NearPlane, float FarPlane); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPositionalTrackingCameraParameters // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x2C, 0x7FF775BB9780
	float GetPixelDensity(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetPixelDensity // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x4, 0x7FF775BB9750
	void GetOrientationAndPosition(struct FRotator DeviceRotation, struct FVector DevicePosition); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetOrientationAndPosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x18, 0x7FF775BB95B0
	int32_t GetNumOfTrackingSensors(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetNumOfTrackingSensors // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x4, 0x7FF775BB9580
	enum class EHMDWornState GetHMDWornState(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDWornState // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF775BB9410
	struct FName GetHMDDeviceName(); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetHMDDeviceName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x8, 0x7FF775BB93D0
	void GetDeviceWorldPose(struct UObject* WorldContext, struct FXRDeviceId XRDeviceId, bool bIsTracked, struct FRotator Orientation, bool bHasPositionalTracking, struct FVector Position); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDeviceWorldPose // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x34, 0x7FF775BB91A0
	void GetDevicePose(struct FXRDeviceId XRDeviceId, bool bIsTracked, struct FRotator Orientation, bool bHasPositionalTracking, struct FVector Position); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.GetDevicePose // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x2C, 0x7FF775BB8FB0
	struct TArray<struct FXRDeviceId> EnumerateTrackedDevices(struct FName SystemId, enum class EXRTrackedDeviceType DeviceType); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnumerateTrackedDevices // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF775BB8E60
	void EnableLowPersistenceMode(bool bEnable); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableLowPersistenceMode // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775BB8B70
	bool EnableHMD(bool bEnable); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.EnableHMD // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x2, 0x7FF775BB8AF0
	void CalibrateExternalTrackingToHMD(struct FTransform ExternalTrackingTransform); // Function HeadMountedDisplay.HeadMountedDisplayFunctionLibrary.CalibrateExternalTrackingToHMD // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x30, 0x7FF775BB87A0
};

// Class HeadMountedDisplay.MotionControllerComponent
// Size : 0x4C0 (Inherited : 0x410)
struct UMotionControllerComponent : UPrimitiveComponent {
	int32_t PlayerIndex; // 0x408(0x4)
	enum class EControllerHand hand; // 0x40C(0x1)
	struct FName MotionSource; // 0x410(0x8)
	unsigned char bDisableLowLatencyUpdate : 1; // 0x418(0x1)
	enum class ETrackingStatus CurrentTrackingStatus; // 0x41C(0x1)
	bool bDisplayDeviceModel; // 0x41D(0x1)
	unsigned char UnknownData_41F_1 : 7; // 0x41F(0x1)
	struct FName DisplayModelSource; // 0x420(0x8)
	struct UStaticMesh* CustomDisplayMesh; // 0x428(0x8)
	struct TArray<struct UMaterialInterface*> DisplayMeshMaterialOverrides; // 0x430(0x10)
	unsigned char UnknownData_440[0x0060]; // 0x440(0x60)
	struct UPrimitiveComponent* DisplayComponent; // 0x4A0(0x8)
	unsigned char UnknownData_4A8[0x0018]; // 0x4A8(0x18)

	void SetTrackingSource(enum class EControllerHand NewSource); // Function HeadMountedDisplay.MotionControllerComponent.SetTrackingSource // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775BBAE50
	void SetTrackingMotionSource(struct FName NewSource); // Function HeadMountedDisplay.MotionControllerComponent.SetTrackingMotionSource // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775BBAD60
	void SetShowDeviceModel(bool bShowControllerModel); // Function HeadMountedDisplay.MotionControllerComponent.SetShowDeviceModel // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775BBAA00
	void SetDisplayModelSource(struct FName NewDisplayModelSource); // Function HeadMountedDisplay.MotionControllerComponent.SetDisplayModelSource // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775BBA760
	void SetCustomDisplayMesh(struct UStaticMesh* NewDisplayMesh); // Function HeadMountedDisplay.MotionControllerComponent.SetCustomDisplayMesh // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775BBA6E0
	void SetAssociatedPlayerIndex(int32_t NewPlayer); // Function HeadMountedDisplay.MotionControllerComponent.SetAssociatedPlayerIndex // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775BBA5B0
	void OnMotionControllerUpdated(); // Function HeadMountedDisplay.MotionControllerComponent.OnMotionControllerUpdated // (Event|Protected|BlueprintEvent) // Param Size : 0x0, 0x7FF77510D9D0
	bool IsTracked(); // Function HeadMountedDisplay.MotionControllerComponent.IsTracked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775BBA4E0
	enum class EControllerHand GetTrackingSource(); // Function HeadMountedDisplay.MotionControllerComponent.GetTrackingSource // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775BB9E10
	float GetParameterValue(struct FName InName, bool bValueFound); // Function HeadMountedDisplay.MotionControllerComponent.GetParameterValue // (Final|Native|Protected|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF775BB9680
	struct FVector GetHandJointPosition(int32_t jointIndex, bool bValueFound); // Function HeadMountedDisplay.MotionControllerComponent.GetHandJointPosition // (Final|Native|Protected|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x14, 0x7FF775BB9440
};

// Class HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct UMotionTrackedDeviceFunctionLibrary : UBlueprintFunctionLibrary {

	void SetIsControllerMotionTrackingEnabledByDefault(bool Enable); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.SetIsControllerMotionTrackingEnabledByDefault // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775BBA7E0
	bool IsMotionTrackingEnabledForSource(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForSource // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0xD, 0x7FF775BBA3F0
	bool IsMotionTrackingEnabledForDevice(int32_t PlayerIndex, enum class EControllerHand hand); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForDevice // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x6, 0x7FF775BBA330
	bool IsMotionTrackingEnabledForComponent(struct UMotionControllerComponent* MotionControllerComponent); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackingEnabledForComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x9, 0x7FF775BBA2B0
	bool IsMotionTrackedDeviceCountManagementNecessary(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionTrackedDeviceCountManagementNecessary // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF775BBA280
	bool IsMotionSourceTracking(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.IsMotionSourceTracking // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0xD, 0x7FF775BBA1C0
	int32_t GetMotionTrackingEnabledControllerCount(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMotionTrackingEnabledControllerCount // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x4, 0x7FF775BB9550
	int32_t GetMaximumMotionTrackedControllerCount(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetMaximumMotionTrackedControllerCount // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x4, 0x7FF775BB9520
	struct FName GetActiveTrackingSystemName(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.GetActiveTrackingSystemName // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775BB8F70
	struct TArray<struct FName> EnumerateMotionSources(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnumerateMotionSources // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775BB8DE0
	bool EnableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfSource // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0xD, 0x7FF775BB8D20
	bool EnableMotionTrackingOfDevice(int32_t PlayerIndex, enum class EControllerHand hand); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingOfDevice // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x6, 0x7FF775BB8C60
	bool EnableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.EnableMotionTrackingForComponent // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF775BB8BE0
	void DisableMotionTrackingOfSource(int32_t PlayerIndex, struct FName SourceName); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfSource // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0xC, 0x7FF775BB8A40
	void DisableMotionTrackingOfDevice(int32_t PlayerIndex, enum class EControllerHand hand); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfDevice // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x5, 0x7FF775BB8990
	void DisableMotionTrackingOfControllersForPlayer(int32_t PlayerIndex); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfControllersForPlayer // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775BB8920
	void DisableMotionTrackingOfAllControllers(); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingOfAllControllers // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775BB8900
	void DisableMotionTrackingForComponent(struct UMotionControllerComponent* MotionControllerComponent); // Function HeadMountedDisplay.MotionTrackedDeviceFunctionLibrary.DisableMotionTrackingForComponent // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775BB8890
};

// Class HeadMountedDisplay.XRAssetFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct UXRAssetFunctionLibrary : UBlueprintFunctionLibrary {

	struct UPrimitiveComponent* AddNamedDeviceVisualizationComponentBlocking(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform RelativeTransform, struct FXRDeviceId XRDeviceId); // Function HeadMountedDisplay.XRAssetFunctionLibrary.AddNamedDeviceVisualizationComponentBlocking // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x68, 0x7FF775BB8570
	struct UPrimitiveComponent* AddDeviceVisualizationComponentBlocking(struct AActor* Target, struct FXRDeviceId XRDeviceId, bool bManualAttachment, struct FTransform RelativeTransform); // Function HeadMountedDisplay.XRAssetFunctionLibrary.AddDeviceVisualizationComponentBlocking // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x58, 0x7FF775BB7F40
};

// Class HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent
// Size : 0x60 (Inherited : 0x30)
struct UAsyncTask_LoadXRDeviceVisComponent : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnModelLoaded; // 0x30(0x10)
	struct FMulticastInlineDelegate OnLoadFailure; // 0x40(0x10)
	unsigned char UnknownData_50[0x0008]; // 0x50(0x8)
	struct UPrimitiveComponent* SpawnedComponent; // 0x58(0x8)

	struct UAsyncTask_LoadXRDeviceVisComponent* AddNamedDeviceVisualizationComponentAsync(struct AActor* Target, struct FName SystemName, struct FName DeviceName, bool bManualAttachment, struct FTransform RelativeTransform, struct FXRDeviceId XRDeviceId, struct UPrimitiveComponent* NewComponent); // Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddNamedDeviceVisualizationComponentAsync // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x70, 0x7FF775BB82E0
	struct UAsyncTask_LoadXRDeviceVisComponent* AddDeviceVisualizationComponentAsync(struct AActor* Target, struct FXRDeviceId XRDeviceId, bool bManualAttachment, struct FTransform RelativeTransform, struct UPrimitiveComponent* NewComponent); // Function HeadMountedDisplay.AsyncTask_LoadXRDeviceVisComponent.AddDeviceVisualizationComponentAsync // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x60, 0x7FF775BB7D20
};

// Class HeadMountedDisplay.XRLoadingScreenFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct UXRLoadingScreenFunctionLibrary : UBlueprintFunctionLibrary {

	void ShowLoadingScreen(); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ShowLoadingScreen // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775BBAF90
	void SetLoadingScreen(struct UTexture* Texture, struct FVector2D Scale, struct FVector Offset, bool bShowLoadingMovie, bool bShowOnSet); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.SetLoadingScreen // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x1E, 0x7FF775BBA860
	void HideLoadingScreen(); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.HideLoadingScreen // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775BBA0A0
	void ClearLoadingScreenSplashes(); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.ClearLoadingScreenSplashes // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775BB8870
	void AddLoadingScreenSplash(struct UTexture* Texture, struct FVector Translation, struct FRotator Rotation, struct FVector2D Size, struct FRotator DeltaRotation, bool bClearBeforeAdd); // Function HeadMountedDisplay.XRLoadingScreenFunctionLibrary.AddLoadingScreenSplash // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x35, 0x7FF775BB8100
};

