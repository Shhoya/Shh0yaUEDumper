// Class MagicLeapAR.LuminARSessionFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct ULuminARSessionFunctionLibrary : UBlueprintFunctionLibrary {

	void StartLuminARSession(struct UObject* WorldContextObject, struct FLatentActionInfo LatentInfo, struct ULuminARSessionConfig* Configuration); // Function MagicLeapAR.LuminARSessionFunctionLibrary.StartLuminARSession // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x28, 0x7FF774C3EA70
};

// Class MagicLeapAR.LuminARFrameFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct ULuminARFrameFunctionLibrary : UBlueprintFunctionLibrary {

	bool LuminARLineTrace(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct TSet<enum class ELuminARLineTraceChannel> TraceChannels, struct TArray<struct FARTraceResult> OutHitResults); // Function MagicLeapAR.LuminARFrameFunctionLibrary.LuminARLineTrace // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x71, 0x7FF774C3E7B0
	enum class ELuminARTrackingState GetTrackingState(); // Function MagicLeapAR.LuminARFrameFunctionLibrary.GetTrackingState // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF774C3E760
};

// Class MagicLeapAR.LuminARImageTrackingFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct ULuminARImageTrackingFunctionLibrary : UBlueprintFunctionLibrary {

	struct ULuminARCandidateImage* AddLuminRuntimeCandidateImage(struct UARSessionConfig* SessionConfig, struct UTexture2D* CandidateTexture, struct FString FriendlyName, float PhysicalWidth, bool bUseUnreliablePose, bool bImageIsStationary); // Function MagicLeapAR.LuminARImageTrackingFunctionLibrary.AddLuminRuntimeCandidateImage // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x30, 0x7FF774C3E470
};

// Class MagicLeapAR.LuminARSessionConfig
// Size : 0x140 (Inherited : 0xA8)
struct ULuminARSessionConfig : UARSessionConfig {
	unsigned char UnknownData_A8[0x0008]; // 0xA8(0x8)
	struct FMagicLeapPlanesQuery PlanesQuery; // 0xB0(0x60)
	int32_t MaxPlaneQueryResults; // 0x110(0x4)
	int32_t MinPlaneArea; // 0x114(0x4)
	bool bArbitraryOrientationPlaneDetection; // 0x118(0x1)
	unsigned char UnknownData_119[0x0003]; // 0x119(0x3)
	struct FVector PlaneSearchExtents; // 0x11C(0xC)
	struct TArray<enum class EMagicLeapPlaneQueryFlags> PlaneQueryFlags; // 0x128(0x10)
	bool bDiscardZeroExtentPlanes; // 0x138(0x1)
	bool bDefaultUseUnreliablePose; // 0x139(0x1)
	unsigned char UnknownData_13A[0x0006]; // 0x13A(0x6)
};

// Class MagicLeapAR.LuminARLightEstimate
// Size : 0x50 (Inherited : 0x40)
struct ULuminARLightEstimate : UARBasicLightEstimate {
	struct TArray<float> AmbientIntensityNits; // 0x40(0x10)

	struct TArray<float> GetAmbientIntensityNits(); // Function MagicLeapAR.LuminARLightEstimate.GetAmbientIntensityNits // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF774C3E680
};

// Class MagicLeapAR.LuminARCandidateImage
// Size : 0x60 (Inherited : 0x58)
struct ULuminARCandidateImage : UARCandidateImage {
	bool bUseUnreliablePose; // 0x58(0x1)
	bool bImageIsStationary; // 0x59(0x1)
	unsigned char UnknownData_5A[0x0006]; // 0x5A(0x6)

	bool GetUseUnreliablePose(); // Function MagicLeapAR.LuminARCandidateImage.GetUseUnreliablePose // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF774C3E790
	bool GetImageIsStationary(); // Function MagicLeapAR.LuminARCandidateImage.GetImageIsStationary // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF774C3E740
};

