// ScriptStruct SteamVRInputDevice.AnimNode_SteamVRInputAnimPose
// Size : 0x620 (Inherited : 0x10)
struct FAnimNode_SteamVRInputAnimPose : FAnimNode_Base {
	enum class EMotionRange MotionRange; // 0x10(0x1)
	enum class EHand hand; // 0x11(0x1)
	enum class EHandSkeleton HandSkeleton; // 0x12(0x1)
	bool Mirror; // 0x13(0x1)
	unsigned char UnknownData_14[0x000C]; // 0x14(0xC)
	struct FSteamVRSkeletonTransform SteamVRSkeletalTransform; // 0x20(0x5D0)
	struct FUE4RetargettingRefs UE4RetargettingRefs; // 0x5F0(0x28)
	unsigned char UnknownData_618[0x0008]; // 0x618(0x8)
};

// ScriptStruct SteamVRInputDevice.UE4RetargettingRefs
// Size : 0x28 (Inherited : 0x0)
struct FUE4RetargettingRefs {
	bool bIsInitialized; // 0x0(0x1)
	bool bIsRightHanded; // 0x1(0x1)
	unsigned char UnknownData_2[0x0002]; // 0x2(0x2)
	struct FVector KnuckleAverageMS_UE4; // 0x4(0xC)
	struct FVector WristSideDirectionLS_UE4; // 0x10(0xC)
	struct FVector WristForwardLS_UE4; // 0x1C(0xC)
};

// ScriptStruct SteamVRInputDevice.SteamVRSkeletonTransform
// Size : 0x5D0 (Inherited : 0x0)
struct FSteamVRSkeletonTransform {
	struct FTransform Root; // 0x0(0x30)
	struct FTransform wrist; // 0x30(0x30)
	struct FTransform Thumb_1; // 0x60(0x30)
	struct FTransform Thumb_2; // 0x90(0x30)
	struct FTransform Thumb_3; // 0xC0(0x30)
	struct FTransform Thumb_4; // 0xF0(0x30)
	struct FTransform Index_1; // 0x120(0x30)
	struct FTransform Index_2; // 0x150(0x30)
	struct FTransform Index_3; // 0x180(0x30)
	struct FTransform Index_4; // 0x1B0(0x30)
	struct FTransform Index_5; // 0x1E0(0x30)
	struct FTransform Middle_1; // 0x210(0x30)
	struct FTransform Middle_2; // 0x240(0x30)
	struct FTransform Middle_3; // 0x270(0x30)
	struct FTransform Middle_4; // 0x2A0(0x30)
	struct FTransform Middle_5; // 0x2D0(0x30)
	struct FTransform Ring_1; // 0x300(0x30)
	struct FTransform Ring_2; // 0x330(0x30)
	struct FTransform Ring_3; // 0x360(0x30)
	struct FTransform Ring_4; // 0x390(0x30)
	struct FTransform Ring_5; // 0x3C0(0x30)
	struct FTransform Pinky_1; // 0x3F0(0x30)
	struct FTransform Pinky_2; // 0x420(0x30)
	struct FTransform Pinky_3; // 0x450(0x30)
	struct FTransform Pinky_4; // 0x480(0x30)
	struct FTransform Pinky_5; // 0x4B0(0x30)
	struct FTransform Aux_Thumb; // 0x4E0(0x30)
	struct FTransform Aux_Index; // 0x510(0x30)
	struct FTransform Aux_Middle; // 0x540(0x30)
	struct FTransform Aux_Ring; // 0x570(0x30)
	struct FTransform Aux_Pinky; // 0x5A0(0x30)
};

// ScriptStruct SteamVRInputDevice.AnimNode_SteamVRSetWristTransform
// Size : 0x40 (Inherited : 0x10)
struct FAnimNode_SteamVRSetWristTransform : FAnimNode_Base {
	struct FPoseLink ReferencePose; // 0x10(0x10)
	enum class EHandSkeleton HandSkeleton; // 0x20(0x1)
	unsigned char UnknownData_21[0x0007]; // 0x21(0x7)
	struct FPoseLink TargetPose; // 0x28(0x10)
	unsigned char UnknownData_38[0x0008]; // 0x38(0x8)
};

// ScriptStruct SteamVRInputDevice.SteamVRInputBindingInfo
// Size : 0x20 (Inherited : 0x0)
struct FSteamVRInputBindingInfo {
	struct FName DevicePathName; // 0x0(0x8)
	struct FName InputPathName; // 0x8(0x8)
	struct FName ModeName; // 0x10(0x8)
	struct FName SlotName; // 0x18(0x8)
};

// ScriptStruct SteamVRInputDevice.SteamVRInputOriginInfo
// Size : 0x28 (Inherited : 0x0)
struct FSteamVRInputOriginInfo {
	int32_t TrackedDeviceIndex; // 0x0(0x4)
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
	struct FString RenderModelComponentName; // 0x8(0x10)
	struct FString TrackedDeviceModel; // 0x18(0x10)
};

// ScriptStruct SteamVRInputDevice.SteamVRActionSet
// Size : 0x18 (Inherited : 0x0)
struct FSteamVRActionSet {
	struct FString Path; // 0x0(0x10)
	unsigned char UnknownData_10[0x0008]; // 0x10(0x8)
};

// ScriptStruct SteamVRInputDevice.SteamVRAction
// Size : 0x28 (Inherited : 0x0)
struct FSteamVRAction {
	struct FName Name; // 0x0(0x8)
	struct FString Path; // 0x8(0x10)
	unsigned char UnknownData_18[0x0010]; // 0x18(0x10)
};

// ScriptStruct SteamVRInputDevice.SteamVRFingerSplays
// Size : 0x10 (Inherited : 0x0)
struct FSteamVRFingerSplays {
	float Thumb_Index; // 0x0(0x4)
	float Index_Middle; // 0x4(0x4)
	float Middle_Ring; // 0x8(0x4)
	float Ring_Pinky; // 0xC(0x4)
};

// ScriptStruct SteamVRInputDevice.SteamVRFingerCurls
// Size : 0x14 (Inherited : 0x0)
struct FSteamVRFingerCurls {
	float Thumb; // 0x0(0x4)
	float Index; // 0x4(0x4)
	float Middle; // 0x8(0x4)
	float Ring; // 0xC(0x4)
	float Pinky; // 0x10(0x4)
};

