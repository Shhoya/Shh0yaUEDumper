// Class MovieSceneCapture.MovieSceneCaptureProtocolBase
// Size : 0x58 (Inherited : 0x28)
struct UMovieSceneCaptureProtocolBase : UObject {
	unsigned char UnknownData_28[0x0028]; // 0x28(0x28)
	enum class EMovieSceneCaptureProtocolState State; // 0x50(0x1)
	unsigned char UnknownData_51[0x0007]; // 0x51(0x7)

	bool IsCapturing(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.IsCapturing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF776148160
	enum class EMovieSceneCaptureProtocolState GetState(); // Function MovieSceneCapture.MovieSceneCaptureProtocolBase.GetState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775B9DE30
};

// Class MovieSceneCapture.MovieSceneAudioCaptureProtocolBase
// Size : 0x58 (Inherited : 0x58)
struct UMovieSceneAudioCaptureProtocolBase : UMovieSceneCaptureProtocolBase {
};

// Class MovieSceneCapture.NullAudioCaptureProtocol
// Size : 0x58 (Inherited : 0x58)
struct UNullAudioCaptureProtocol : UMovieSceneAudioCaptureProtocolBase {
};

// Class MovieSceneCapture.MasterAudioSubmixCaptureProtocol
// Size : 0x90 (Inherited : 0x58)
struct UMasterAudioSubmixCaptureProtocol : UMovieSceneAudioCaptureProtocolBase {
	struct FString Filename; // 0x58(0x10)
	unsigned char UnknownData_68[0x0028]; // 0x68(0x28)
};

// Class MovieSceneCapture.MovieSceneImageCaptureProtocolBase
// Size : 0x58 (Inherited : 0x58)
struct UMovieSceneImageCaptureProtocolBase : UMovieSceneCaptureProtocolBase {
};

// Class MovieSceneCapture.CompositionGraphCaptureProtocol
// Size : 0xC0 (Inherited : 0x58)
struct UCompositionGraphCaptureProtocol : UMovieSceneImageCaptureProtocolBase {
	struct FCompositionGraphCapturePasses IncludeRenderPasses; // 0x58(0x10)
	bool bCaptureFramesInHDR; // 0x68(0x1)
	unsigned char UnknownData_69[0x0003]; // 0x69(0x3)
	int32_t HDRCompressionQuality; // 0x6C(0x4)
	enum class EHDRCaptureGamut CaptureGamut; // 0x70(0x1)
	unsigned char UnknownData_71[0x0007]; // 0x71(0x7)
	struct FSoftObjectPath PostProcessingMaterial; // 0x78(0x18)
	bool bDisableScreenPercentage; // 0x90(0x1)
	unsigned char UnknownData_91[0x0007]; // 0x91(0x7)
	struct UMaterialInterface* PostProcessingMaterialPtr; // 0x98(0x8)
	unsigned char UnknownData_A0[0x0020]; // 0xA0(0x20)
};

// Class MovieSceneCapture.FrameGrabberProtocol
// Size : 0x68 (Inherited : 0x58)
struct UFrameGrabberProtocol : UMovieSceneImageCaptureProtocolBase {
	unsigned char UnknownData_58[0x0010]; // 0x58(0x10)
};

// Class MovieSceneCapture.ImageSequenceProtocol
// Size : 0xD8 (Inherited : 0x68)
struct UImageSequenceProtocol : UFrameGrabberProtocol {
	unsigned char UnknownData_68[0x0070]; // 0x68(0x70)
};

// Class MovieSceneCapture.CompressedImageSequenceProtocol
// Size : 0xE0 (Inherited : 0xD8)
struct UCompressedImageSequenceProtocol : UImageSequenceProtocol {
	int32_t CompressionQuality; // 0xD8(0x4)
	unsigned char UnknownData_DC[0x0004]; // 0xDC(0x4)
};

// Class MovieSceneCapture.ImageSequenceProtocol_BMP
// Size : 0xD8 (Inherited : 0xD8)
struct UImageSequenceProtocol_BMP : UImageSequenceProtocol {
};

// Class MovieSceneCapture.ImageSequenceProtocol_PNG
// Size : 0xE0 (Inherited : 0xE0)
struct UImageSequenceProtocol_PNG : UCompressedImageSequenceProtocol {
};

// Class MovieSceneCapture.ImageSequenceProtocol_JPG
// Size : 0xE0 (Inherited : 0xE0)
struct UImageSequenceProtocol_JPG : UCompressedImageSequenceProtocol {
};

// Class MovieSceneCapture.ImageSequenceProtocol_EXR
// Size : 0xE8 (Inherited : 0xD8)
struct UImageSequenceProtocol_EXR : UImageSequenceProtocol {
	bool bCompressed; // 0xD8(0x1)
	enum class EHDRCaptureGamut CaptureGamut; // 0xD9(0x1)
	unsigned char UnknownData_DA[0x000E]; // 0xDA(0xE)
};

// Class MovieSceneCapture.MovieSceneCaptureInterface
// Size : 0x28 (Inherited : 0x28)
struct UMovieSceneCaptureInterface : UInterface {
};

// Class MovieSceneCapture.MovieSceneCapture
// Size : 0x220 (Inherited : 0x28)
struct UMovieSceneCapture : UObject {
	unsigned char UnknownData_28[0x0010]; // 0x28(0x10)
	struct FSoftClassPath ImageCaptureProtocolType; // 0x38(0x18)
	struct FSoftClassPath AudioCaptureProtocolType; // 0x50(0x18)
	struct UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol; // 0x68(0x8)
	struct UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol; // 0x70(0x8)
	struct FMovieSceneCaptureSettings Settings; // 0x78(0x70)
	bool bUseSeparateProcess; // 0xE8(0x1)
	bool bCloseEditorWhenCaptureStarts; // 0xE9(0x1)
	unsigned char UnknownData_EA[0x0006]; // 0xEA(0x6)
	struct FString AdditionalCommandLineArguments; // 0xF0(0x10)
	struct FString InheritedCommandLineArguments; // 0x100(0x10)
	unsigned char UnknownData_110[0x0110]; // 0x110(0x110)

	void SetImageCaptureProtocolType(class UMovieSceneCaptureProtocolBase* ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetImageCaptureProtocolType // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF7761483C0
	void SetAudioCaptureProtocolType(class UMovieSceneCaptureProtocolBase* ProtocolType); // Function MovieSceneCapture.MovieSceneCapture.SetAudioCaptureProtocolType // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF776148340
	struct UMovieSceneCaptureProtocolBase* GetImageCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCapture.GetImageCaptureProtocol // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF776148110
	struct UMovieSceneCaptureProtocolBase* GetAudioCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCapture.GetAudioCaptureProtocol // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF776148070
};

// Class MovieSceneCapture.LevelCapture
// Size : 0x240 (Inherited : 0x220)
struct ULevelCapture : UMovieSceneCapture {
	bool bAutoStartCapture; // 0x220(0x1)
	unsigned char UnknownData_221[0x000B]; // 0x221(0xB)
	struct FGuid PrerequisiteActorId; // 0x22C(0x10)
	unsigned char UnknownData_23C[0x0004]; // 0x23C(0x4)
};

// Class MovieSceneCapture.MovieSceneCaptureEnvironment
// Size : 0x28 (Inherited : 0x28)
struct UMovieSceneCaptureEnvironment : UObject {

	bool IsCaptureInProgress(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.IsCaptureInProgress // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF776148130
	int32_t GetCaptureFrameNumber(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureFrameNumber // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x4, 0x7FF7761480C0
	float GetCaptureElapsedTime(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.GetCaptureElapsedTime // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x4, 0x7FF776148090
	struct UMovieSceneImageCaptureProtocolBase* FindImageCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindImageCaptureProtocol // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF776147D70
	struct UMovieSceneAudioCaptureProtocolBase* FindAudioCaptureProtocol(); // Function MovieSceneCapture.MovieSceneCaptureEnvironment.FindAudioCaptureProtocol // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF776147D40
};

// Class MovieSceneCapture.UserDefinedCaptureProtocol
// Size : 0xD8 (Inherited : 0x58)
struct UUserDefinedCaptureProtocol : UMovieSceneImageCaptureProtocolBase {
	struct UWorld* World; // 0x58(0x8)
	unsigned char UnknownData_60[0x0078]; // 0x60(0x78)

	void StopCapturingFinalPixels(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.StopCapturingFinalPixels // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF776148530
	void StartCapturingFinalPixels(struct FCapturedPixelsID StreamID); // Function MovieSceneCapture.UserDefinedCaptureProtocol.StartCapturingFinalPixels // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x50, 0x7FF776148440
	void ResolveBuffer(struct UTexture* Buffer, struct FCapturedPixelsID BufferID); // Function MovieSceneCapture.UserDefinedCaptureProtocol.ResolveBuffer // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x58, 0x7FF776148200
	void OnWarmUp(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnWarmUp // (Event|Protected|BlueprintEvent) // Param Size : 0x0, 0x7FF77510D9D0
	void OnTick(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnTick // (Event|Protected|BlueprintEvent) // Param Size : 0x0, 0x7FF77510D9D0
	void OnStartCapture(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnStartCapture // (Event|Protected|BlueprintEvent) // Param Size : 0x0, 0x7FF77510D9D0
	bool OnSetup(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnSetup // (Native|Event|Protected|BlueprintEvent) // Param Size : 0x1, 0x7FF7761481D0
	void OnPreTick(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPreTick // (Event|Protected|BlueprintEvent) // Param Size : 0x0, 0x7FF77510D9D0
	void OnPixelsReceived(struct FCapturedPixels Pixels, struct FCapturedPixelsID ID, struct FFrameMetrics FrameMetrics); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPixelsReceived // (Event|Protected|HasOutParms|BlueprintEvent) // Param Size : 0x70, 0x7FF77510D9D0
	void OnPauseCapture(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnPauseCapture // (Event|Protected|BlueprintEvent) // Param Size : 0x0, 0x7FF77510D9D0
	void OnFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnFinalize // (Event|Protected|BlueprintEvent) // Param Size : 0x0, 0x7FF77510D9D0
	void OnCaptureFrame(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCaptureFrame // (Event|Protected|BlueprintEvent) // Param Size : 0x0, 0x7FF77510D9D0
	bool OnCanFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnCanFinalize // (Native|Event|Protected|BlueprintEvent|Const) // Param Size : 0x1, 0x7FF7761481A0
	void OnBeginFinalize(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.OnBeginFinalize // (Event|Protected|BlueprintEvent) // Param Size : 0x0, 0x7FF77510D9D0
	struct FFrameMetrics GetCurrentFrameMetrics(); // Function MovieSceneCapture.UserDefinedCaptureProtocol.GetCurrentFrameMetrics // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF7761480F0
	struct FString GenerateFilename(struct FFrameMetrics InFrameMetrics); // Function MovieSceneCapture.UserDefinedCaptureProtocol.GenerateFilename // (Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x20, 0x7FF776147DA0
};

// Class MovieSceneCapture.UserDefinedImageCaptureProtocol
// Size : 0xE0 (Inherited : 0xD8)
struct UUserDefinedImageCaptureProtocol : UUserDefinedCaptureProtocol {
	enum class EDesiredImageFormat Format; // 0xD8(0x1)
	bool bEnableCompression; // 0xD9(0x1)
	unsigned char UnknownData_DA[0x0002]; // 0xDA(0x2)
	int32_t CompressionQuality; // 0xDC(0x4)

	void WriteImageToDisk(struct FCapturedPixels PixelData, struct FCapturedPixelsID StreamID, struct FFrameMetrics FrameMetrics, bool bCopyImageData); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.WriteImageToDisk // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x71, 0x7FF776148550
	struct FString GenerateFilenameForCurrentFrame(); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForCurrentFrame // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF776147FF0
	struct FString GenerateFilenameForBuffer(struct UTexture* Buffer, struct FCapturedPixelsID StreamID); // Function MovieSceneCapture.UserDefinedImageCaptureProtocol.GenerateFilenameForBuffer // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x68, 0x7FF776147E90
};

// Class MovieSceneCapture.VideoCaptureProtocol
// Size : 0x80 (Inherited : 0x68)
struct UVideoCaptureProtocol : UFrameGrabberProtocol {
	bool bUseCompression; // 0x68(0x1)
	unsigned char UnknownData_69[0x0003]; // 0x69(0x3)
	float CompressionQuality; // 0x6C(0x4)
	unsigned char UnknownData_70[0x0010]; // 0x70(0x10)
};

