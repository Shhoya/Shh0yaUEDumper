// ScriptStruct MovieSceneCapture.CompositionGraphCapturePasses
// Size : 0x10 (Inherited : 0x0)
struct FCompositionGraphCapturePasses {
	struct TArray<struct FString> Value; // 0x0(0x10)
};

// ScriptStruct MovieSceneCapture.FrameMetrics
// Size : 0x10 (Inherited : 0x0)
struct FFrameMetrics {
	float TotalElapsedTime; // 0x0(0x4)
	float FrameDelta; // 0x4(0x4)
	int32_t FrameNumber; // 0x8(0x4)
	int32_t NumDroppedFrames; // 0xC(0x4)
};

// ScriptStruct MovieSceneCapture.MovieSceneCaptureSettings
// Size : 0x70 (Inherited : 0x0)
struct FMovieSceneCaptureSettings {
	struct FDirectoryPath OutputDirectory; // 0x0(0x10)
	class AGameModeBase* GameModeOverride; // 0x10(0x8)
	struct FString OutputFormat; // 0x18(0x10)
	bool bOverwriteExisting; // 0x28(0x1)
	bool bUseRelativeFrameNumbers; // 0x29(0x1)
	unsigned char UnknownData_2A[0x0002]; // 0x2A(0x2)
	int32_t HandleFrames; // 0x2C(0x4)
	struct FString MovieExtension; // 0x30(0x10)
	enum class None ZeroPadFrameNumbers; // 0x40(0x1)
	unsigned char UnknownData_41[0x0003]; // 0x41(0x3)
	struct FFrameRate FrameRate; // 0x44(0x8)
	bool bUseCustomFrameRate; // 0x4C(0x1)
	unsigned char UnknownData_4D[0x0003]; // 0x4D(0x3)
	struct FFrameRate CustomFrameRate; // 0x50(0x8)
	struct FCaptureResolution Resolution; // 0x58(0x8)
	bool bEnableTextureStreaming; // 0x60(0x1)
	bool bCinematicEngineScalability; // 0x61(0x1)
	bool bCinematicMode; // 0x62(0x1)
	bool bAllowMovement; // 0x63(0x1)
	bool bAllowTurning; // 0x64(0x1)
	bool bShowPlayer; // 0x65(0x1)
	bool bShowHUD; // 0x66(0x1)
	bool bUsePathTracer; // 0x67(0x1)
	int32_t PathTracerSamplePerPixel; // 0x68(0x4)
	unsigned char UnknownData_6C[0x0004]; // 0x6C(0x4)
};

// ScriptStruct MovieSceneCapture.CaptureResolution
// Size : 0x8 (Inherited : 0x0)
struct FCaptureResolution {
	int32_t ResX; // 0x0(0x4)
	int32_t ResY; // 0x4(0x4)
};

// ScriptStruct MovieSceneCapture.CapturedPixels
// Size : 0x10 (Inherited : 0x0)
struct FCapturedPixels {
	unsigned char UnknownData_0[0x0010]; // 0x0(0x10)
};

// ScriptStruct MovieSceneCapture.CapturedPixelsID
// Size : 0x50 (Inherited : 0x0)
struct FCapturedPixelsID {
	struct TMap<struct FName, struct FName> Identifiers; // 0x0(0x50)
};

