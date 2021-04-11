// ScriptStruct AugmentedReality.ARSharedWorldReplicationState
// Size : 0x8 (Inherited : 0x0)
struct FARSharedWorldReplicationState {
	int32_t PreviewImageOffset; // 0x0(0x4)
	int32_t ARWorldOffset; // 0x4(0x4)
};

// ScriptStruct AugmentedReality.ARTraceResult
// Size : 0x60 (Inherited : 0x0)
struct FARTraceResult {
	float DistanceFromCamera; // 0x0(0x4)
	enum class EARLineTraceChannels TraceChannel; // 0x4(0x1)
	unsigned char UnknownData_5[0x000B]; // 0x5(0xB)
	struct FTransform LocalToTrackingTransform; // 0x10(0x30)
	struct UARTrackedGeometry* TrackedGeometry; // 0x40(0x8)
	unsigned char UnknownData_48[0x0018]; // 0x48(0x18)
};

// ScriptStruct AugmentedReality.ARPose3D
// Size : 0x50 (Inherited : 0x0)
struct FARPose3D {
	struct FARSkeletonDefinition SkeletonDefinition; // 0x0(0x28)
	struct TArray<struct FTransform> JointTransforms; // 0x28(0x10)
	struct TArray<bool> IsJointTracked; // 0x38(0x10)
	enum class EARJointTransformSpace JointTransformSpace; // 0x48(0x1)
	unsigned char UnknownData_49[0x0007]; // 0x49(0x7)
};

// ScriptStruct AugmentedReality.ARSkeletonDefinition
// Size : 0x28 (Inherited : 0x0)
struct FARSkeletonDefinition {
	int32_t NumJoints; // 0x0(0x4)
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
	struct TArray<struct FName> JointNames; // 0x8(0x10)
	struct TArray<int32_t> ParentIndices; // 0x18(0x10)
};

// ScriptStruct AugmentedReality.ARPose2D
// Size : 0x48 (Inherited : 0x0)
struct FARPose2D {
	struct FARSkeletonDefinition SkeletonDefinition; // 0x0(0x28)
	struct TArray<struct FVector2D> JointLocations; // 0x28(0x10)
	struct TArray<bool> IsJointTracked; // 0x38(0x10)
};

// ScriptStruct AugmentedReality.ARVideoFormat
// Size : 0xC (Inherited : 0x0)
struct FARVideoFormat {
	int32_t FPS; // 0x0(0x4)
	int32_t Width; // 0x4(0x4)
	int32_t Height; // 0x8(0x4)
};

// ScriptStruct AugmentedReality.ARSessionStatus
// Size : 0x18 (Inherited : 0x0)
struct FARSessionStatus {
	struct FString AdditionalInfo; // 0x0(0x10)
	enum class EARSessionStatus Status; // 0x10(0x1)
	unsigned char UnknownData_11[0x0007]; // 0x11(0x7)
};

