// ScriptStruct OculusMR.OculusMR_PlaneMeshTriangle
// Size : 0x3C (Inherited : 0x0)
struct FOculusMR_PlaneMeshTriangle {
	struct FVector Vertex0; // 0x0(0xC)
	struct FVector2D UV0; // 0xC(0x8)
	struct FVector Vertex1; // 0x14(0xC)
	struct FVector2D UV1; // 0x20(0x8)
	struct FVector Vertex2; // 0x28(0xC)
	struct FVector2D UV2; // 0x34(0x8)
};

// ScriptStruct OculusMR.TrackedCamera
// Size : 0x70 (Inherited : 0x0)
struct FTrackedCamera {
	int32_t Index; // 0x0(0x4)
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
	struct FString Name; // 0x8(0x10)
	float FieldOfView; // 0x18(0x4)
	int32_t SizeX; // 0x1C(0x4)
	int32_t SizeY; // 0x20(0x4)
	enum class ETrackedDeviceType AttachedTrackedDevice; // 0x24(0x1)
	unsigned char UnknownData_25[0x0003]; // 0x25(0x3)
	struct FRotator CalibratedRotation; // 0x28(0xC)
	struct FVector CalibratedOffset; // 0x34(0xC)
	struct FRotator UserRotation; // 0x40(0xC)
	struct FVector UserOffset; // 0x4C(0xC)
	struct FRotator RawRotation; // 0x58(0xC)
	struct FVector RawOffset; // 0x64(0xC)
};

