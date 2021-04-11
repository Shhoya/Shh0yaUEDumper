// Class OculusHMD.OculusFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct UOculusFunctionLibrary : UBlueprintFunctionLibrary {

	void ShowLoadingSplashScreen(); // Function OculusHMD.OculusFunctionLibrary.ShowLoadingSplashScreen // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF774D62D50
	void ShowLoadingIcon(struct UTexture2D* Texture); // Function OculusHMD.OculusFunctionLibrary.ShowLoadingIcon // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774D62CE0
	void SetReorientHMDOnControllerRecenter(bool recenterMode); // Function OculusHMD.OculusFunctionLibrary.SetReorientHMDOnControllerRecenter // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D62C60
	void SetPositionScale3D(struct FVector PosScale3D); // Function OculusHMD.OculusFunctionLibrary.SetPositionScale3D // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0xC, 0x7FF774D62C00
	void SetLoadingSplashParams(struct FString TexturePath, struct FVector DistanceInMeters, struct FVector2D SizeInMeters, struct FVector RotationAxis, float RotationDeltaInDeg); // Function OculusHMD.OculusFunctionLibrary.SetLoadingSplashParams // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x34, 0x7FF774D62A20
	void SetGuardianVisibility(bool GuardianVisible); // Function OculusHMD.OculusFunctionLibrary.SetGuardianVisibility // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D629A0
	void SetFixedFoveatedRenderingLevel(enum class EFixedFoveatedRenderingLevel Level); // Function OculusHMD.OculusFunctionLibrary.SetFixedFoveatedRenderingLevel // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D62930
	void SetDisplayFrequency(float RequestedFrequency); // Function OculusHMD.OculusFunctionLibrary.SetDisplayFrequency // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774D628C0
	void SetCPUAndGPULevels(int32_t CPULevel, int32_t GPULevel); // Function OculusHMD.OculusFunctionLibrary.SetCPUAndGPULevels // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774D62710
	void SetColorScaleAndOffset(struct FLinearColor ColorScale, struct FLinearColor ColorOffset, bool bApplyToAllLayers); // Function OculusHMD.OculusFunctionLibrary.SetColorScaleAndOffset // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x21, 0x7FF774D627C0
	void SetBaseRotationAndPositionOffset(struct FRotator BaseRot, struct FVector PosOffset, enum class EOrientPositionSelector Options); // Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndPositionOffset // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x19, 0x7FF774D62600
	void SetBaseRotationAndBaseOffsetInMeters(struct FRotator Rotation, struct FVector BaseOffsetInMeters, enum class EOrientPositionSelector Options); // Function OculusHMD.OculusFunctionLibrary.SetBaseRotationAndBaseOffsetInMeters // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x19, 0x7FF774D624F0
	bool IsLoadingIconEnabled(); // Function OculusHMD.OculusFunctionLibrary.IsLoadingIconEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF774D624C0
	bool IsGuardianDisplayed(); // Function OculusHMD.OculusFunctionLibrary.IsGuardianDisplayed // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF774D62490
	bool IsGuardianConfigured(); // Function OculusHMD.OculusFunctionLibrary.IsGuardianConfigured // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF774D62460
	bool IsDeviceTracked(enum class ETrackedDeviceType DeviceType); // Function OculusHMD.OculusFunctionLibrary.IsDeviceTracked // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x2, 0x7FF774D623E0
	bool IsAutoLoadingSplashScreenEnabled(); // Function OculusHMD.OculusFunctionLibrary.IsAutoLoadingSplashScreenEnabled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF774D623B0
	void HideLoadingSplashScreen(bool bClear); // Function OculusHMD.OculusFunctionLibrary.HideLoadingSplashScreen // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D62330
	void HideLoadingIcon(); // Function OculusHMD.OculusFunctionLibrary.HideLoadingIcon // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF774D62310
	bool HasSystemOverlayPresent(); // Function OculusHMD.OculusFunctionLibrary.HasSystemOverlayPresent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF774D622E0
	bool HasInputFocus(); // Function OculusHMD.OculusFunctionLibrary.HasInputFocus // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF774D622B0
	bool GetUserProfile(struct FHmdUserProfile Profile); // Function OculusHMD.OculusFunctionLibrary.GetUserProfile // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x49, 0x7FF774D621C0
	void GetRawSensorData(struct FVector AngularAcceleration, struct FVector LinearAcceleration, struct FVector AngularVelocity, struct FVector LinearVelocity, float TimeInSeconds, enum class ETrackedDeviceType DeviceType); // Function OculusHMD.OculusFunctionLibrary.GetRawSensorData // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x35, 0x7FF774D61F90
	void GetPose(struct FRotator DeviceRotation, struct FVector DevicePosition, struct FVector NeckPosition, bool bUseOrienationForPlayerCamera, bool bUsePositionForPlayerCamera, struct FVector PositionScale); // Function OculusHMD.OculusFunctionLibrary.GetPose // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x34, 0x7FF774D61D90
	struct FGuardianTestResult GetPointGuardianIntersection(struct FVector Point, enum class EBoundaryType BoundaryType); // Function OculusHMD.OculusFunctionLibrary.GetPointGuardianIntersection // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x30, 0x7FF774D61CB0
	struct FTransform GetPlayAreaTransform(); // Function OculusHMD.OculusFunctionLibrary.GetPlayAreaTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x30, 0x7FF774D61C50
	struct FGuardianTestResult GetNodeGuardianIntersection(enum class ETrackedDeviceType DeviceType, enum class EBoundaryType BoundaryType); // Function OculusHMD.OculusFunctionLibrary.GetNodeGuardianIntersection // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x24, 0x7FF774D61B80
	void GetLoadingSplashParams(struct FString TexturePath, struct FVector DistanceInMeters, struct FVector2D SizeInMeters, struct FVector RotationAxis, float RotationDeltaInDeg); // Function OculusHMD.OculusFunctionLibrary.GetLoadingSplashParams // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x34, 0x7FF774D61980
	struct TArray<struct FVector> GetGuardianPoints(enum class EBoundaryType BoundaryType, bool UsePawnSpace); // Function OculusHMD.OculusFunctionLibrary.GetGuardianPoints // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x18, 0x7FF774D61870
	struct FVector GetGuardianDimensions(enum class EBoundaryType BoundaryType); // Function OculusHMD.OculusFunctionLibrary.GetGuardianDimensions // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF774D617E0
	void GetGPUUtilization(bool IsGPUAvailable, float GPUUtilization); // Function OculusHMD.OculusFunctionLibrary.GetGPUUtilization // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x8, 0x7FF774D61700
	float GetGPUFrameTime(); // Function OculusHMD.OculusFunctionLibrary.GetGPUFrameTime // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x4, 0x7FF774D616D0
	enum class EFixedFoveatedRenderingLevel GetFixedFoveatedRenderingLevel(); // Function OculusHMD.OculusFunctionLibrary.GetFixedFoveatedRenderingLevel // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF774D616A0
	struct FString GetDeviceName(); // Function OculusHMD.OculusFunctionLibrary.GetDeviceName // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF774D61620
	float GetCurrentDisplayFrequency(); // Function OculusHMD.OculusFunctionLibrary.GetCurrentDisplayFrequency // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x4, 0x7FF774D615F0
	void GetBaseRotationAndPositionOffset(struct FRotator OutRot, struct FVector OutPosOffset); // Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndPositionOffset // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x18, 0x7FF774D61520
	void GetBaseRotationAndBaseOffsetInMeters(struct FRotator OutRotation, struct FVector OutBaseOffsetInMeters); // Function OculusHMD.OculusFunctionLibrary.GetBaseRotationAndBaseOffsetInMeters // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x18, 0x7FF774D61450
	struct TArray<float> GetAvailableDisplayFrequencies(); // Function OculusHMD.OculusFunctionLibrary.GetAvailableDisplayFrequencies // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF774D613D0
	void EnablePositionTracking(bool bPositionTracking); // Function OculusHMD.OculusFunctionLibrary.EnablePositionTracking // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D61350
	void EnableOrientationTracking(bool bOrientationTracking); // Function OculusHMD.OculusFunctionLibrary.EnableOrientationTracking // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D612D0
	void EnableAutoLoadingSplashScreen(bool bAutoShowEnabled); // Function OculusHMD.OculusFunctionLibrary.EnableAutoLoadingSplashScreen // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D61250
	void ClearLoadingSplashScreens(); // Function OculusHMD.OculusFunctionLibrary.ClearLoadingSplashScreens // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF774D61230
	void AddLoadingSplashScreen(struct UTexture2D* Texture, struct FVector TranslationInMeters, struct FRotator Rotation, struct FVector2D SizeInMeters, struct FRotator DeltaRotation, bool bClearBeforeAdd); // Function OculusHMD.OculusFunctionLibrary.AddLoadingSplashScreen // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x35, 0x7FF774D61050
};

// Class OculusHMD.OculusHMDRuntimeSettings
// Size : 0x58 (Inherited : 0x28)
struct UOculusHMDRuntimeSettings : UObject {
	bool bAutoEnabled; // 0x28(0x1)
	unsigned char UnknownData_29[0x0007]; // 0x29(0x7)
	struct TArray<struct FOculusSplashDesc> SplashDescs; // 0x30(0x10)
	bool bSupportsDash; // 0x40(0x1)
	bool bCompositesDepth; // 0x41(0x1)
	bool bHQDistortion; // 0x42(0x1)
	unsigned char UnknownData_43[0x0001]; // 0x43(0x1)
	float PixelDensityMin; // 0x44(0x4)
	float PixelDensityMax; // 0x48(0x4)
	int32_t CPULevel; // 0x4C(0x4)
	int32_t GPULevel; // 0x50(0x4)
	enum class EFixedFoveatedRenderingLevel FFRLevel; // 0x54(0x1)
	bool bChromaCorrection; // 0x55(0x1)
	bool bRecenterHMDWithController; // 0x56(0x1)
	unsigned char UnknownData_57[0x0001]; // 0x57(0x1)
};

// Class OculusHMD.OculusSceneCaptureCubemap
// Size : 0x90 (Inherited : 0x28)
struct UOculusSceneCaptureCubemap : UObject {
	unsigned char UnknownData_28[0x0010]; // 0x28(0x10)
	struct TArray<struct USceneCaptureComponent2D*> CaptureComponents; // 0x38(0x10)
	unsigned char UnknownData_48[0x0048]; // 0x48(0x48)
};

