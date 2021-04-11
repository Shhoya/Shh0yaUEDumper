// ScriptStruct OculusHMD.GuardianTestResult
// Size : 0x20 (Inherited : 0x0)
struct FGuardianTestResult {
	bool IsTriggering; // 0x0(0x1)
	enum class ETrackedDeviceType DeviceType; // 0x1(0x1)
	unsigned char UnknownData_2[0x0002]; // 0x2(0x2)
	float ClosestDistance; // 0x4(0x4)
	struct FVector ClosestPoint; // 0x8(0xC)
	struct FVector ClosestPointNormal; // 0x14(0xC)
};

// ScriptStruct OculusHMD.HmdUserProfile
// Size : 0x48 (Inherited : 0x0)
struct FHmdUserProfile {
	struct FString Name; // 0x0(0x10)
	struct FString Gender; // 0x10(0x10)
	float PlayerHeight; // 0x20(0x4)
	float EyeHeight; // 0x24(0x4)
	float IPD; // 0x28(0x4)
	struct FVector2D NeckToEyeDistance; // 0x2C(0x8)
	unsigned char UnknownData_34[0x0004]; // 0x34(0x4)
	struct TArray<struct FHmdUserProfileField> ExtraFields; // 0x38(0x10)
};

// ScriptStruct OculusHMD.HmdUserProfileField
// Size : 0x20 (Inherited : 0x0)
struct FHmdUserProfileField {
	struct FString FieldName; // 0x0(0x10)
	struct FString FieldValue; // 0x10(0x10)
};

// ScriptStruct OculusHMD.OculusSplashDesc
// Size : 0xA0 (Inherited : 0x0)
struct FOculusSplashDesc {
	struct FSoftObjectPath TexturePath; // 0x0(0x18)
	unsigned char UnknownData_18[0x0008]; // 0x18(0x8)
	struct FTransform TransformInMeters; // 0x20(0x30)
	struct FVector2D QuadSizeInMeters; // 0x50(0x8)
	unsigned char UnknownData_58[0x0008]; // 0x58(0x8)
	struct FQuat DeltaRotation; // 0x60(0x10)
	struct FVector2D TextureOffset; // 0x70(0x8)
	struct FVector2D TextureScale; // 0x78(0x8)
	bool bNoAlphaChannel; // 0x80(0x1)
	unsigned char UnknownData_81[0x001F]; // 0x81(0x1F)
};

