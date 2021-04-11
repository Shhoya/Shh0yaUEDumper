// ScriptStruct LiveLinkInterface.LiveLinkSourceHandle
// Size : 0x18 (Inherited : 0x0)
struct FLiveLinkSourceHandle {
	unsigned char UnknownData_0[0x0018]; // 0x0(0x18)
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseBlueprintData
// Size : 0x8 (Inherited : 0x0)
struct FLiveLinkBaseBlueprintData {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
};

// ScriptStruct LiveLinkInterface.SubjectFrameHandle
// Size : 0x18 (Inherited : 0x8)
struct FSubjectFrameHandle : FLiveLinkBaseBlueprintData {
	unsigned char UnknownData_8[0x0010]; // 0x8(0x10)
};

// ScriptStruct LiveLinkInterface.LiveLinkTransform
// Size : 0x20 (Inherited : 0x0)
struct FLiveLinkTransform {
	unsigned char UnknownData_0[0x0020]; // 0x0(0x20)
};

// ScriptStruct LiveLinkInterface.CachedSubjectFrame
// Size : 0x160 (Inherited : 0x0)
struct FCachedSubjectFrame {
	unsigned char UnknownData_0[0x0160]; // 0x0(0x160)
};

// ScriptStruct LiveLinkInterface.SubjectMetadata
// Size : 0x70 (Inherited : 0x0)
struct FSubjectMetadata {
	struct TMap<struct FName, struct FString> StringMetadata; // 0x0(0x50)
	struct FTimecode SceneTimecode; // 0x50(0x14)
	struct FFrameRate SceneFramerate; // 0x64(0x8)
	unsigned char UnknownData_6C[0x0004]; // 0x6C(0x4)
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseFrameData
// Size : 0xA0 (Inherited : 0x0)
struct FLiveLinkBaseFrameData {
	struct FLiveLinkWorldTime WorldTime; // 0x0(0x10)
	struct FLiveLinkMetaData MetaData; // 0x10(0x60)
	struct TArray<float> PropertyValues; // 0x70(0x10)
	unsigned char UnknownData_80[0x0020]; // 0x80(0x20)
};

// ScriptStruct LiveLinkInterface.LiveLinkMetaData
// Size : 0x60 (Inherited : 0x0)
struct FLiveLinkMetaData {
	struct TMap<struct FName, struct FString> StringMetadata; // 0x0(0x50)
	struct FQualifiedFrameTime SceneTime; // 0x50(0x10)
};

// ScriptStruct LiveLinkInterface.LiveLinkWorldTime
// Size : 0x10 (Inherited : 0x0)
struct FLiveLinkWorldTime {
	double Time; // 0x0(0x8)
	double Offset; // 0x8(0x8)
};

// ScriptStruct LiveLinkInterface.LiveLinkAnimationFrameData
// Size : 0xB0 (Inherited : 0xA0)
struct FLiveLinkAnimationFrameData : FLiveLinkBaseFrameData {
	struct TArray<struct FTransform> Transforms; // 0xA0(0x10)
};

// ScriptStruct LiveLinkInterface.LiveLinkBaseStaticData
// Size : 0x10 (Inherited : 0x0)
struct FLiveLinkBaseStaticData {
	struct TArray<struct FName> PropertyNames; // 0x0(0x10)
};

// ScriptStruct LiveLinkInterface.LiveLinkSkeletonStaticData
// Size : 0x30 (Inherited : 0x10)
struct FLiveLinkSkeletonStaticData : FLiveLinkBaseStaticData {
	struct TArray<struct FName> BoneNames; // 0x10(0x10)
	struct TArray<int32_t> BoneParents; // 0x20(0x10)
};

// ScriptStruct LiveLinkInterface.LiveLinkBasicBlueprintData
// Size : 0xB8 (Inherited : 0x8)
struct FLiveLinkBasicBlueprintData : FLiveLinkBaseBlueprintData {
	struct FLiveLinkBaseStaticData StaticData; // 0x8(0x10)
	struct FLiveLinkBaseFrameData FrameData; // 0x18(0xA0)
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraBlueprintData
// Size : 0x120 (Inherited : 0x8)
struct FLiveLinkCameraBlueprintData : FLiveLinkBaseBlueprintData {
	struct FLiveLinkCameraStaticData StaticData; // 0x8(0x20)
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
	struct FLiveLinkCameraFrameData FrameData; // 0x30(0xF0)
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformFrameData
// Size : 0xD0 (Inherited : 0xA0)
struct FLiveLinkTransformFrameData : FLiveLinkBaseFrameData {
	struct FTransform Transform; // 0xA0(0x30)
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraFrameData
// Size : 0xF0 (Inherited : 0xD0)
struct FLiveLinkCameraFrameData : FLiveLinkTransformFrameData {
	float FieldOfView; // 0xD0(0x4)
	float AspectRatio; // 0xD4(0x4)
	float FocalLength; // 0xD8(0x4)
	float Aperture; // 0xDC(0x4)
	float FocusDistance; // 0xE0(0x4)
	enum class ELiveLinkCameraProjectionMode ProjectionMode; // 0xE4(0x1)
	unsigned char UnknownData_E5[0x000B]; // 0xE5(0xB)
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformStaticData
// Size : 0x10 (Inherited : 0x10)
struct FLiveLinkTransformStaticData : FLiveLinkBaseStaticData {
};

// ScriptStruct LiveLinkInterface.LiveLinkCameraStaticData
// Size : 0x20 (Inherited : 0x10)
struct FLiveLinkCameraStaticData : FLiveLinkTransformStaticData {
	bool bIsFieldOfViewSupported; // 0x10(0x1)
	bool bIsAspectRatioSupported; // 0x11(0x1)
	bool bIsFocalLengthSupported; // 0x12(0x1)
	bool bIsProjectionModeSupported; // 0x13(0x1)
	float FilmBackWidth; // 0x14(0x4)
	float FilmBackHeight; // 0x18(0x4)
	bool bIsApertureSupported; // 0x1C(0x1)
	bool bIsFocusDistanceSupported; // 0x1D(0x1)
	unsigned char UnknownData_1E[0x0002]; // 0x1E(0x2)
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveConversionSettings
// Size : 0x50 (Inherited : 0x0)
struct FLiveLinkCurveConversionSettings {
	struct TMap<struct FString, struct FSoftObjectPath> CurveConversionAssetMap; // 0x0(0x50)
};

// ScriptStruct LiveLinkInterface.LiveLinkLightBlueprintData
// Size : 0x130 (Inherited : 0x8)
struct FLiveLinkLightBlueprintData : FLiveLinkBaseBlueprintData {
	struct FLiveLinkLightStaticData StaticData; // 0x8(0x20)
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
	struct FLiveLinkLightFrameData FrameData; // 0x30(0x100)
};

// ScriptStruct LiveLinkInterface.LiveLinkLightFrameData
// Size : 0x100 (Inherited : 0xD0)
struct FLiveLinkLightFrameData : FLiveLinkTransformFrameData {
	float Temperature; // 0xD0(0x4)
	float Intensity; // 0xD4(0x4)
	struct FColor LightColor; // 0xD8(0x4)
	float InnerConeAngle; // 0xDC(0x4)
	float OuterConeAngle; // 0xE0(0x4)
	float AttenuationRadius; // 0xE4(0x4)
	float SourceRadius; // 0xE8(0x4)
	float SoftSourceRadius; // 0xEC(0x4)
	float SourceLength; // 0xF0(0x4)
	unsigned char UnknownData_F4[0x000C]; // 0xF4(0xC)
};

// ScriptStruct LiveLinkInterface.LiveLinkLightStaticData
// Size : 0x20 (Inherited : 0x10)
struct FLiveLinkLightStaticData : FLiveLinkTransformStaticData {
	bool bIsTemperatureSupported; // 0x10(0x1)
	bool bIsIntensitySupported; // 0x11(0x1)
	bool bIsLightColorSupported; // 0x12(0x1)
	bool bIsInnerConeAngleSupported; // 0x13(0x1)
	bool bIsOuterConeAngleSupported; // 0x14(0x1)
	bool bIsAttenuationRadiusSupported; // 0x15(0x1)
	bool bIsSourceLenghtSupported; // 0x16(0x1)
	bool bIsSourceRadiusSupported; // 0x17(0x1)
	bool bIsSoftSourceRadiusSupported; // 0x18(0x1)
	unsigned char UnknownData_19[0x0007]; // 0x19(0x7)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectPreset
// Size : 0x38 (Inherited : 0x0)
struct FLiveLinkSubjectPreset {
	struct FLiveLinkSubjectKey Key; // 0x0(0x18)
	class ULiveLinkRole* Role; // 0x18(0x8)
	struct ULiveLinkSubjectSettings* Settings; // 0x20(0x8)
	struct ULiveLinkVirtualSubject* VirtualSubject; // 0x28(0x8)
	bool bEnabled; // 0x30(0x1)
	unsigned char UnknownData_31[0x0007]; // 0x31(0x7)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectKey
// Size : 0x18 (Inherited : 0x0)
struct FLiveLinkSubjectKey {
	struct FGuid Source; // 0x0(0x10)
	struct FLiveLinkSubjectName SubjectName; // 0x10(0x8)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectName
// Size : 0x8 (Inherited : 0x0)
struct FLiveLinkSubjectName {
	struct FName Name; // 0x0(0x8)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourcePreset
// Size : 0x30 (Inherited : 0x0)
struct FLiveLinkSourcePreset {
	struct FGuid Guid; // 0x0(0x10)
	struct ULiveLinkSourceSettings* Settings; // 0x10(0x8)
	struct FText SourceType; // 0x18(0x18)
};

// ScriptStruct LiveLinkInterface.LiveLinkRefSkeleton
// Size : 0x20 (Inherited : 0x0)
struct FLiveLinkRefSkeleton {
	struct TArray<struct FName> BoneNames; // 0x0(0x10)
	struct TArray<int32_t> BoneParents; // 0x10(0x10)
};

// ScriptStruct LiveLinkInterface.LiveLinkSubjectRepresentation
// Size : 0x10 (Inherited : 0x0)
struct FLiveLinkSubjectRepresentation {
	struct FLiveLinkSubjectName Subject; // 0x0(0x8)
	class ULiveLinkRole* Role; // 0x8(0x8)
};

// ScriptStruct LiveLinkInterface.LiveLinkInterpolationSettings
// Size : 0x8 (Inherited : 0x0)
struct FLiveLinkInterpolationSettings {
	bool bUseInterpolation; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float InterpolationOffset; // 0x4(0x4)
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeSynchronizationSettings
// Size : 0xC (Inherited : 0x0)
struct FLiveLinkTimeSynchronizationSettings {
	struct FFrameRate FrameRate; // 0x0(0x8)
	struct FFrameNumber FrameOffset; // 0x8(0x4)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceDebugInfo
// Size : 0x10 (Inherited : 0x0)
struct FLiveLinkSourceDebugInfo {
	struct FLiveLinkSubjectName SubjectName; // 0x0(0x8)
	int32_t SnapshotIndex; // 0x8(0x4)
	int32_t NumberOfBufferAtSnapshot; // 0xC(0x4)
};

// ScriptStruct LiveLinkInterface.LiveLinkSourceBufferManagementSettings
// Size : 0x50 (Inherited : 0x0)
struct FLiveLinkSourceBufferManagementSettings {
	bool bValidEngineTimeEnabled; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float ValidEngineTime; // 0x4(0x4)
	float EngineTimeOffset; // 0x8(0x4)
	unsigned char UnknownData_C[0x0004]; // 0xC(0x4)
	double EngineTimeClockOffset; // 0x10(0x8)
	struct FFrameRate TimecodeFrameRate; // 0x18(0x8)
	bool bGenerateSubFrame; // 0x20(0x1)
	bool bUseTimecodeSmoothLatest; // 0x21(0x1)
	unsigned char UnknownData_22[0x0002]; // 0x22(0x2)
	struct FFrameRate SourceTimecodeFrameRate; // 0x24(0x8)
	bool bValidTimecodeFrameEnabled; // 0x2C(0x1)
	unsigned char UnknownData_2D[0x0003]; // 0x2D(0x3)
	int32_t ValidTimecodeFrame; // 0x30(0x4)
	float TimecodeFrameOffset; // 0x34(0x4)
	double TimecodeClockOffset; // 0x38(0x8)
	int32_t LatestOffset; // 0x40(0x4)
	int32_t MaxNumberOfFrameToBuffered; // 0x44(0x4)
	bool bKeepAtLeastOneFrame; // 0x48(0x1)
	unsigned char UnknownData_49[0x0007]; // 0x49(0x7)
};

// ScriptStruct LiveLinkInterface.LiveLinkTransformBlueprintData
// Size : 0xF0 (Inherited : 0x8)
struct FLiveLinkTransformBlueprintData : FLiveLinkBaseBlueprintData {
	struct FLiveLinkTransformStaticData StaticData; // 0x8(0x10)
	unsigned char UnknownData_18[0x0008]; // 0x18(0x8)
	struct FLiveLinkTransformFrameData FrameData; // 0x20(0xD0)
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameData
// Size : 0x90 (Inherited : 0x0)
struct FLiveLinkFrameData {
	struct TArray<struct FTransform> Transforms; // 0x0(0x10)
	struct TArray<struct FLiveLinkCurveElement> CurveElements; // 0x10(0x10)
	struct FLiveLinkWorldTime WorldTime; // 0x20(0x10)
	struct FLiveLinkMetaData MetaData; // 0x30(0x60)
};

// ScriptStruct LiveLinkInterface.LiveLinkCurveElement
// Size : 0xC (Inherited : 0x0)
struct FLiveLinkCurveElement {
	struct FName CurveName; // 0x0(0x8)
	float CurveValue; // 0x8(0x4)
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode_Base_DEPRECATED
// Size : 0x10 (Inherited : 0x0)
struct FLiveLinkTimeCode_Base_DEPRECATED {
	int32_t Seconds; // 0x0(0x4)
	int32_t Frames; // 0x4(0x4)
	struct FLiveLinkFrameRate FrameRate; // 0x8(0x8)
};

// ScriptStruct LiveLinkInterface.LiveLinkFrameRate
// Size : 0x8 (Inherited : 0x8)
struct FLiveLinkFrameRate : FFrameRate {
};

// ScriptStruct LiveLinkInterface.LiveLinkTimeCode
// Size : 0x10 (Inherited : 0x10)
struct FLiveLinkTimeCode : FLiveLinkTimeCode_Base_DEPRECATED {
};

// ScriptStruct LiveLinkInterface.LiveLinkTime
// Size : 0x18 (Inherited : 0x0)
struct FLiveLinkTime {
	double WorldTime; // 0x0(0x8)
	struct FQualifiedFrameTime SceneTime; // 0x8(0x10)
};

