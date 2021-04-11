// ScriptStruct CoreUObject.JoinabilitySettings
// Size : 0x14 (Inherited : 0x0)
struct FJoinabilitySettings {
	struct FName SessionName; // 0x0(0x8)
	bool bPublicSearchable; // 0x8(0x1)
	bool bAllowInvites; // 0x9(0x1)
	bool bJoinViaPresence; // 0xA(0x1)
	bool bJoinViaPresenceFriendsOnly; // 0xB(0x1)
	int32_t MaxPlayers; // 0xC(0x4)
	int32_t MaxPartySize; // 0x10(0x4)
};

// ScriptStruct CoreUObject.UniqueNetIdWrapper
// Size : 0x1 (Inherited : 0x0)
struct FUniqueNetIdWrapper {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
};

// ScriptStruct CoreUObject.Guid
// Size : 0x10 (Inherited : 0x0)
struct FGuid {
	int32_t A; // 0x0(0x4)
	int32_t B; // 0x4(0x4)
	int32_t C; // 0x8(0x4)
	int32_t D; // 0xC(0x4)
};

// ScriptStruct CoreUObject.Vector
// Size : 0xC (Inherited : 0x0)
struct FVector {
	float X; // 0x0(0x4)
	float Y; // 0x4(0x4)
	float Z; // 0x8(0x4)
};

// ScriptStruct CoreUObject.Vector4
// Size : 0x10 (Inherited : 0x0)
struct FVector4 {
	float X; // 0x0(0x4)
	float Y; // 0x4(0x4)
	float Z; // 0x8(0x4)
	float W; // 0xC(0x4)
};

// ScriptStruct CoreUObject.Vector2D
// Size : 0x8 (Inherited : 0x0)
struct FVector2D {
	float X; // 0x0(0x4)
	float Y; // 0x4(0x4)
};

// ScriptStruct CoreUObject.TwoVectors
// Size : 0x18 (Inherited : 0x0)
struct FTwoVectors {
	struct FVector v1; // 0x0(0xC)
	struct FVector v2; // 0xC(0xC)
};

// ScriptStruct CoreUObject.Plane
// Size : 0x10 (Inherited : 0xC)
struct FPlane : FVector {
	float W; // 0xC(0x4)
};

// ScriptStruct CoreUObject.Rotator
// Size : 0xC (Inherited : 0x0)
struct FRotator {
	float Pitch; // 0x0(0x4)
	float Yaw; // 0x4(0x4)
	float Roll; // 0x8(0x4)
};

// ScriptStruct CoreUObject.Quat
// Size : 0x10 (Inherited : 0x0)
struct FQuat {
	float X; // 0x0(0x4)
	float Y; // 0x4(0x4)
	float Z; // 0x8(0x4)
	float W; // 0xC(0x4)
};

// ScriptStruct CoreUObject.PackedNormal
// Size : 0x4 (Inherited : 0x0)
struct FPackedNormal {
	enum class None X; // 0x0(0x1)
	enum class None Y; // 0x1(0x1)
	enum class None Z; // 0x2(0x1)
	enum class None W; // 0x3(0x1)
};

// ScriptStruct CoreUObject.PackedRGB10A2N
// Size : 0x4 (Inherited : 0x0)
struct FPackedRGB10A2N {
	int32_t Packed; // 0x0(0x4)
};

// ScriptStruct CoreUObject.PackedRGBA16N
// Size : 0x8 (Inherited : 0x0)
struct FPackedRGBA16N {
	int32_t XY; // 0x0(0x4)
	int32_t ZW; // 0x4(0x4)
};

// ScriptStruct CoreUObject.IntPoint
// Size : 0x8 (Inherited : 0x0)
struct FIntPoint {
	int32_t X; // 0x0(0x4)
	int32_t Y; // 0x4(0x4)
};

// ScriptStruct CoreUObject.IntVector
// Size : 0xC (Inherited : 0x0)
struct FIntVector {
	int32_t X; // 0x0(0x4)
	int32_t Y; // 0x4(0x4)
	int32_t Z; // 0x8(0x4)
};

// ScriptStruct CoreUObject.Color
// Size : 0x4 (Inherited : 0x0)
struct FColor {
	enum class None B; // 0x0(0x1)
	enum class None G; // 0x1(0x1)
	enum class None R; // 0x2(0x1)
	enum class None A; // 0x3(0x1)
};

// ScriptStruct CoreUObject.LinearColor
// Size : 0x10 (Inherited : 0x0)
struct FLinearColor {
	float R; // 0x0(0x4)
	float G; // 0x4(0x4)
	float B; // 0x8(0x4)
	float A; // 0xC(0x4)
};

// ScriptStruct CoreUObject.Box
// Size : 0x1C (Inherited : 0x0)
struct FBox {
	struct FVector Min; // 0x0(0xC)
	struct FVector Max; // 0xC(0xC)
	enum class None IsValid; // 0x18(0x1)
	unsigned char UnknownData_19[0x0003]; // 0x19(0x3)
};

// ScriptStruct CoreUObject.Box2D
// Size : 0x14 (Inherited : 0x0)
struct FBox2D {
	struct FVector2D Min; // 0x0(0x8)
	struct FVector2D Max; // 0x8(0x8)
	enum class None bIsValid; // 0x10(0x1)
	unsigned char UnknownData_11[0x0003]; // 0x11(0x3)
};

// ScriptStruct CoreUObject.BoxSphereBounds
// Size : 0x1C (Inherited : 0x0)
struct FBoxSphereBounds {
	struct FVector Origin; // 0x0(0xC)
	struct FVector BoxExtent; // 0xC(0xC)
	float SphereRadius; // 0x18(0x4)
};

// ScriptStruct CoreUObject.OrientedBox
// Size : 0x3C (Inherited : 0x0)
struct FOrientedBox {
	struct FVector Center; // 0x0(0xC)
	struct FVector AxisX; // 0xC(0xC)
	struct FVector AxisY; // 0x18(0xC)
	struct FVector AxisZ; // 0x24(0xC)
	float ExtentX; // 0x30(0x4)
	float ExtentY; // 0x34(0x4)
	float ExtentZ; // 0x38(0x4)
};

// ScriptStruct CoreUObject.Matrix
// Size : 0x40 (Inherited : 0x0)
struct FMatrix {
	struct FPlane XPlane; // 0x0(0x10)
	struct FPlane YPlane; // 0x10(0x10)
	struct FPlane ZPlane; // 0x20(0x10)
	struct FPlane WPlane; // 0x30(0x10)
};

// ScriptStruct CoreUObject.InterpCurvePointFloat
// Size : 0x14 (Inherited : 0x0)
struct FInterpCurvePointFloat {
	float InVal; // 0x0(0x4)
	float OutVal; // 0x4(0x4)
	float ArriveTangent; // 0x8(0x4)
	float LeaveTangent; // 0xC(0x4)
	enum class EInterpCurveMode InterpMode; // 0x10(0x1)
	unsigned char UnknownData_11[0x0003]; // 0x11(0x3)
};

// ScriptStruct CoreUObject.InterpCurveFloat
// Size : 0x18 (Inherited : 0x0)
struct FInterpCurveFloat {
	struct TArray<struct FInterpCurvePointFloat> Points; // 0x0(0x10)
	bool bIsLooped; // 0x10(0x1)
	unsigned char UnknownData_11[0x0003]; // 0x11(0x3)
	float LoopKeyOffset; // 0x14(0x4)
};

// ScriptStruct CoreUObject.InterpCurvePointVector2D
// Size : 0x20 (Inherited : 0x0)
struct FInterpCurvePointVector2D {
	float InVal; // 0x0(0x4)
	struct FVector2D OutVal; // 0x4(0x8)
	struct FVector2D ArriveTangent; // 0xC(0x8)
	struct FVector2D LeaveTangent; // 0x14(0x8)
	enum class EInterpCurveMode InterpMode; // 0x1C(0x1)
	unsigned char UnknownData_1D[0x0003]; // 0x1D(0x3)
};

// ScriptStruct CoreUObject.InterpCurveVector2D
// Size : 0x18 (Inherited : 0x0)
struct FInterpCurveVector2D {
	struct TArray<struct FInterpCurvePointVector2D> Points; // 0x0(0x10)
	bool bIsLooped; // 0x10(0x1)
	unsigned char UnknownData_11[0x0003]; // 0x11(0x3)
	float LoopKeyOffset; // 0x14(0x4)
};

// ScriptStruct CoreUObject.InterpCurvePointVector
// Size : 0x2C (Inherited : 0x0)
struct FInterpCurvePointVector {
	float InVal; // 0x0(0x4)
	struct FVector OutVal; // 0x4(0xC)
	struct FVector ArriveTangent; // 0x10(0xC)
	struct FVector LeaveTangent; // 0x1C(0xC)
	enum class EInterpCurveMode InterpMode; // 0x28(0x1)
	unsigned char UnknownData_29[0x0003]; // 0x29(0x3)
};

// ScriptStruct CoreUObject.InterpCurveVector
// Size : 0x18 (Inherited : 0x0)
struct FInterpCurveVector {
	struct TArray<struct FInterpCurvePointVector> Points; // 0x0(0x10)
	bool bIsLooped; // 0x10(0x1)
	unsigned char UnknownData_11[0x0003]; // 0x11(0x3)
	float LoopKeyOffset; // 0x14(0x4)
};

// ScriptStruct CoreUObject.InterpCurvePointQuat
// Size : 0x50 (Inherited : 0x0)
struct FInterpCurvePointQuat {
	float InVal; // 0x0(0x4)
	unsigned char UnknownData_4[0x000C]; // 0x4(0xC)
	struct FQuat OutVal; // 0x10(0x10)
	struct FQuat ArriveTangent; // 0x20(0x10)
	struct FQuat LeaveTangent; // 0x30(0x10)
	enum class EInterpCurveMode InterpMode; // 0x40(0x1)
	unsigned char UnknownData_41[0x000F]; // 0x41(0xF)
};

// ScriptStruct CoreUObject.InterpCurveQuat
// Size : 0x18 (Inherited : 0x0)
struct FInterpCurveQuat {
	struct TArray<struct FInterpCurvePointQuat> Points; // 0x0(0x10)
	bool bIsLooped; // 0x10(0x1)
	unsigned char UnknownData_11[0x0003]; // 0x11(0x3)
	float LoopKeyOffset; // 0x14(0x4)
};

// ScriptStruct CoreUObject.InterpCurvePointTwoVectors
// Size : 0x50 (Inherited : 0x0)
struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0(0x4)
	struct FTwoVectors OutVal; // 0x4(0x18)
	struct FTwoVectors ArriveTangent; // 0x1C(0x18)
	struct FTwoVectors LeaveTangent; // 0x34(0x18)
	enum class EInterpCurveMode InterpMode; // 0x4C(0x1)
	unsigned char UnknownData_4D[0x0003]; // 0x4D(0x3)
};

// ScriptStruct CoreUObject.InterpCurveTwoVectors
// Size : 0x18 (Inherited : 0x0)
struct FInterpCurveTwoVectors {
	struct TArray<struct FInterpCurvePointTwoVectors> Points; // 0x0(0x10)
	bool bIsLooped; // 0x10(0x1)
	unsigned char UnknownData_11[0x0003]; // 0x11(0x3)
	float LoopKeyOffset; // 0x14(0x4)
};

// ScriptStruct CoreUObject.InterpCurvePointLinearColor
// Size : 0x38 (Inherited : 0x0)
struct FInterpCurvePointLinearColor {
	float InVal; // 0x0(0x4)
	struct FLinearColor OutVal; // 0x4(0x10)
	struct FLinearColor ArriveTangent; // 0x14(0x10)
	struct FLinearColor LeaveTangent; // 0x24(0x10)
	enum class EInterpCurveMode InterpMode; // 0x34(0x1)
	unsigned char UnknownData_35[0x0003]; // 0x35(0x3)
};

// ScriptStruct CoreUObject.InterpCurveLinearColor
// Size : 0x18 (Inherited : 0x0)
struct FInterpCurveLinearColor {
	struct TArray<struct FInterpCurvePointLinearColor> Points; // 0x0(0x10)
	bool bIsLooped; // 0x10(0x1)
	unsigned char UnknownData_11[0x0003]; // 0x11(0x3)
	float LoopKeyOffset; // 0x14(0x4)
};

// ScriptStruct CoreUObject.Transform
// Size : 0x30 (Inherited : 0x0)
struct FTransform {
	struct FQuat Rotation; // 0x0(0x10)
	struct FVector Translation; // 0x10(0xC)
	unsigned char UnknownData_1C[0x0004]; // 0x1C(0x4)
	struct FVector Scale3D; // 0x20(0xC)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
};

// ScriptStruct CoreUObject.RandomStream
// Size : 0x8 (Inherited : 0x0)
struct FRandomStream {
	int32_t InitialSeed; // 0x0(0x4)
	int32_t Seed; // 0x4(0x4)
};

// ScriptStruct CoreUObject.DateTime
// Size : 0x8 (Inherited : 0x0)
struct FDateTime {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
};

// ScriptStruct CoreUObject.FrameNumber
// Size : 0x4 (Inherited : 0x0)
struct FFrameNumber {
	int32_t Value; // 0x0(0x4)
};

// ScriptStruct CoreUObject.FrameRate
// Size : 0x8 (Inherited : 0x0)
struct FFrameRate {
	int32_t Numerator; // 0x0(0x4)
	int32_t Denominator; // 0x4(0x4)
};

// ScriptStruct CoreUObject.FrameTime
// Size : 0x8 (Inherited : 0x0)
struct FFrameTime {
	struct FFrameNumber FrameNumber; // 0x0(0x4)
	float SubFrame; // 0x4(0x4)
};

// ScriptStruct CoreUObject.QualifiedFrameTime
// Size : 0x10 (Inherited : 0x0)
struct FQualifiedFrameTime {
	struct FFrameTime Time; // 0x0(0x8)
	struct FFrameRate Rate; // 0x8(0x8)
};

// ScriptStruct CoreUObject.Timecode
// Size : 0x14 (Inherited : 0x0)
struct FTimecode {
	int32_t Hours; // 0x0(0x4)
	int32_t Minutes; // 0x4(0x4)
	int32_t Seconds; // 0x8(0x4)
	int32_t Frames; // 0xC(0x4)
	bool bDropFrameFormat; // 0x10(0x1)
	unsigned char UnknownData_11[0x0003]; // 0x11(0x3)
};

// ScriptStruct CoreUObject.Timespan
// Size : 0x8 (Inherited : 0x0)
struct FTimespan {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
};

// ScriptStruct CoreUObject.SoftObjectPath
// Size : 0x18 (Inherited : 0x0)
struct FSoftObjectPath {
	struct FName AssetPathName; // 0x0(0x8)
	struct FString SubPathString; // 0x8(0x10)
};

// ScriptStruct CoreUObject.SoftClassPath
// Size : 0x18 (Inherited : 0x18)
struct FSoftClassPath : FSoftObjectPath {
};

// ScriptStruct CoreUObject.PrimaryAssetType
// Size : 0x8 (Inherited : 0x0)
struct FPrimaryAssetType {
	struct FName Name; // 0x0(0x8)
};

// ScriptStruct CoreUObject.PrimaryAssetId
// Size : 0x10 (Inherited : 0x0)
struct FPrimaryAssetId {
	struct FPrimaryAssetType PrimaryAssetType; // 0x0(0x8)
	struct FName PrimaryAssetName; // 0x8(0x8)
};

// ScriptStruct CoreUObject.FallbackStruct
// Size : 0x1 (Inherited : 0x0)
struct FFallbackStruct {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
};

// ScriptStruct CoreUObject.FloatRangeBound
// Size : 0x8 (Inherited : 0x0)
struct FFloatRangeBound {
	enum class ERangeBoundTypes Type; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float Value; // 0x4(0x4)
};

// ScriptStruct CoreUObject.FloatRange
// Size : 0x10 (Inherited : 0x0)
struct FFloatRange {
	struct FFloatRangeBound LowerBound; // 0x0(0x8)
	struct FFloatRangeBound UpperBound; // 0x8(0x8)
};

// ScriptStruct CoreUObject.Int32RangeBound
// Size : 0x8 (Inherited : 0x0)
struct FInt32RangeBound {
	enum class ERangeBoundTypes Type; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	int32_t Value; // 0x4(0x4)
};

// ScriptStruct CoreUObject.Int32Range
// Size : 0x10 (Inherited : 0x0)
struct FInt32Range {
	struct FInt32RangeBound LowerBound; // 0x0(0x8)
	struct FInt32RangeBound UpperBound; // 0x8(0x8)
};

// ScriptStruct CoreUObject.FloatInterval
// Size : 0x8 (Inherited : 0x0)
struct FFloatInterval {
	float Min; // 0x0(0x4)
	float Max; // 0x4(0x4)
};

// ScriptStruct CoreUObject.Int32Interval
// Size : 0x8 (Inherited : 0x0)
struct FInt32Interval {
	int32_t Min; // 0x0(0x4)
	int32_t Max; // 0x4(0x4)
};

// ScriptStruct CoreUObject.PolyglotTextData
// Size : 0xB8 (Inherited : 0x0)
struct FPolyglotTextData {
	enum class ELocalizedTextSourceCategory Category; // 0x0(0x1)
	unsigned char UnknownData_1[0x0007]; // 0x1(0x7)
	struct FString NativeCulture; // 0x8(0x10)
	struct FString Namespace; // 0x18(0x10)
	struct FString Key; // 0x28(0x10)
	struct FString NativeString; // 0x38(0x10)
	struct TMap<struct FString, struct FString> LocalizedStrings; // 0x48(0x50)
	bool bIsMinimalPatch; // 0x98(0x1)
	unsigned char UnknownData_99[0x0007]; // 0x99(0x7)
	struct FText CachedText; // 0xA0(0x18)
};

// ScriptStruct CoreUObject.AutomationEvent
// Size : 0x38 (Inherited : 0x0)
struct FAutomationEvent {
	enum class EAutomationEventType Type; // 0x0(0x1)
	unsigned char UnknownData_1[0x0007]; // 0x1(0x7)
	struct FString Message; // 0x8(0x10)
	struct FString Context; // 0x18(0x10)
	struct FGuid Artifact; // 0x28(0x10)
};

// ScriptStruct CoreUObject.AutomationExecutionEntry
// Size : 0x58 (Inherited : 0x0)
struct FAutomationExecutionEntry {
	struct FAutomationEvent Event; // 0x0(0x38)
	struct FString Filename; // 0x38(0x10)
	int32_t LineNumber; // 0x48(0x4)
	unsigned char UnknownData_4C[0x0004]; // 0x4C(0x4)
	struct FDateTime Timestamp; // 0x50(0x8)
};

