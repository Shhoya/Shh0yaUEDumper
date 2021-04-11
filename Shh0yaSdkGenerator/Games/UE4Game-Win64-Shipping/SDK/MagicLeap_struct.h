// ScriptStruct MagicLeap.PurchaseItemDetails
// Size : 0x40 (Inherited : 0x0)
struct FPurchaseItemDetails {
	unsigned char UnknownData_0[0x0010]; // 0x0(0x10)
	struct FString Price; // 0x10(0x10)
	struct FString Name; // 0x20(0x10)
	enum class PurchaseType Type; // 0x30(0x1)
	unsigned char UnknownData_31[0x000F]; // 0x31(0xF)
};

// ScriptStruct MagicLeap.PurchaseConfirmation
// Size : 0x50 (Inherited : 0x0)
struct FPurchaseConfirmation {
	unsigned char UnknownData_0[0x0010]; // 0x0(0x10)
	struct FString PackageName; // 0x10(0x10)
	unsigned char UnknownData_20[0x0028]; // 0x20(0x28)
	enum class PurchaseType Type; // 0x48(0x1)
	unsigned char UnknownData_49[0x0007]; // 0x49(0x7)
};

// ScriptStruct MagicLeap.MagicLeapMeshBlockRequest
// Size : 0x14 (Inherited : 0x0)
struct FMagicLeapMeshBlockRequest {
	struct FGuid BlockID; // 0x0(0x10)
	enum class EMagicLeapMeshLOD LevelOfDetail; // 0x10(0x1)
	unsigned char UnknownData_11[0x0003]; // 0x11(0x3)
};

// ScriptStruct MagicLeap.MagicLeapTrackingMeshInfo
// Size : 0x18 (Inherited : 0x0)
struct FMagicLeapTrackingMeshInfo {
	struct FTimespan Timestamp; // 0x0(0x8)
	struct TArray<struct FMagicLeapMeshBlockInfo> BlockData; // 0x8(0x10)
};

// ScriptStruct MagicLeap.MagicLeapMeshBlockInfo
// Size : 0x48 (Inherited : 0x0)
struct FMagicLeapMeshBlockInfo {
	struct FGuid BlockID; // 0x0(0x10)
	struct FVector BlockPosition; // 0x10(0xC)
	struct FRotator BlockOrientation; // 0x1C(0xC)
	struct FVector BlockDimensions; // 0x28(0xC)
	unsigned char UnknownData_34[0x0004]; // 0x34(0x4)
	struct FTimespan Timestamp; // 0x38(0x8)
	enum class EMagicLeapMeshState BlockState; // 0x40(0x1)
	unsigned char UnknownData_41[0x0007]; // 0x41(0x7)
};

// ScriptStruct MagicLeap.MagicLeapRaycastHitResult
// Size : 0x24 (Inherited : 0x0)
struct FMagicLeapRaycastHitResult {
	enum class EMagicLeapRaycastResultState HitState; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	struct FVector HitPoint; // 0x4(0xC)
	struct FVector Normal; // 0x10(0xC)
	float Confidence; // 0x1C(0x4)
	int32_t UserData; // 0x20(0x4)
};

// ScriptStruct MagicLeap.MagicLeapRaycastQueryParams
// Size : 0x38 (Inherited : 0x0)
struct FMagicLeapRaycastQueryParams {
	struct FVector Position; // 0x0(0xC)
	struct FVector Direction; // 0xC(0xC)
	struct FVector UpVector; // 0x18(0xC)
	int32_t Width; // 0x24(0x4)
	int32_t Height; // 0x28(0x4)
	float HorizontalFovDegrees; // 0x2C(0x4)
	bool CollideWithUnobserved; // 0x30(0x1)
	unsigned char UnknownData_31[0x0003]; // 0x31(0x3)
	int32_t UserData; // 0x34(0x4)
};

// ScriptStruct MagicLeap.MagicLeapGraphicsClientPerformanceInfo
// Size : 0x1C (Inherited : 0x0)
struct FMagicLeapGraphicsClientPerformanceInfo {
	float FrameStartCPUCompAcquireCPUTimeMs; // 0x0(0x4)
	float FrameStartCPUFrameEndGPUTimeMs; // 0x4(0x4)
	float FrameStartCPUFrameStartCPUTimeMs; // 0x8(0x4)
	float FrameDurationCPUTimeMs; // 0xC(0x4)
	float FrameDurationGPUTimeMs; // 0x10(0x4)
	float FrameInternalDurationCPUTimeMs; // 0x14(0x4)
	float FrameInternalDurationGPUTimeMs; // 0x18(0x4)
};

// ScriptStruct MagicLeap.MagicLeapHeadTrackingState
// Size : 0x8 (Inherited : 0x0)
struct FMagicLeapHeadTrackingState {
	enum class EMagicLeapHeadTrackingMode Mode; // 0x0(0x1)
	enum class EMagicLeapHeadTrackingError Error; // 0x1(0x1)
	unsigned char UnknownData_2[0x0002]; // 0x2(0x2)
	float Confidence; // 0x4(0x4)
};

