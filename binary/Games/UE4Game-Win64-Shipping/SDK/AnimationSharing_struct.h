// ScriptStruct AnimationSharing.TickAnimationSharingFunction
// Size : 0x30 (Inherited : 0x28)
struct FTickAnimationSharingFunction : FTickFunction {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// ScriptStruct AnimationSharing.AnimationSharingScalability
// Size : 0x10 (Inherited : 0x0)
struct FAnimationSharingScalability {
	struct FPerPlatformBool UseBlendTransitions; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	struct FPerPlatformFloat BlendSignificanceValue; // 0x4(0x4)
	struct FPerPlatformInt MaximumNumberConcurrentBlends; // 0x8(0x4)
	struct FPerPlatformFloat TickSignificanceValue; // 0xC(0x4)
};

// ScriptStruct AnimationSharing.PerSkeletonAnimationSharingSetup
// Size : 0x38 (Inherited : 0x0)
struct FPerSkeletonAnimationSharingSetup {
	struct USkeleton* Skeleton; // 0x0(0x8)
	struct USkeletalMesh* SkeletalMesh; // 0x8(0x8)
	class UAnimSharingTransitionInstance* BlendAnimBlueprint; // 0x10(0x8)
	class UAnimSharingAdditiveInstance* AdditiveAnimBlueprint; // 0x18(0x8)
	class UAnimationSharingStateProcessor* StateProcessorClass; // 0x20(0x8)
	struct TArray<struct FAnimationStateEntry> AnimationStates; // 0x28(0x10)
};

// ScriptStruct AnimationSharing.AnimationStateEntry
// Size : 0x30 (Inherited : 0x0)
struct FAnimationStateEntry {
	enum class None State; // 0x0(0x1)
	unsigned char UnknownData_1[0x0007]; // 0x1(0x7)
	struct TArray<struct FAnimationSetup> AnimationSetups; // 0x8(0x10)
	bool bOnDemand; // 0x18(0x1)
	bool bAdditive; // 0x19(0x1)
	unsigned char UnknownData_1A[0x0002]; // 0x1A(0x2)
	float BlendTime; // 0x1C(0x4)
	bool bReturnToPreviousState; // 0x20(0x1)
	bool bSetNextState; // 0x21(0x1)
	enum class None NextState; // 0x22(0x1)
	unsigned char UnknownData_23[0x0001]; // 0x23(0x1)
	struct FPerPlatformInt MaximumNumberOfConcurrentInstances; // 0x24(0x4)
	float WiggleTimePercentage; // 0x28(0x4)
	bool bRequiresCurves; // 0x2C(0x1)
	unsigned char UnknownData_2D[0x0003]; // 0x2D(0x3)
};

// ScriptStruct AnimationSharing.AnimationSetup
// Size : 0x18 (Inherited : 0x0)
struct FAnimationSetup {
	struct UAnimSequence* AnimSequence; // 0x0(0x8)
	class UAnimSharingStateInstance* AnimBlueprint; // 0x8(0x8)
	struct FPerPlatformInt NumRandomizedInstances; // 0x10(0x4)
	struct FPerPlatformBool Enabled; // 0x14(0x1)
	unsigned char UnknownData_15[0x0003]; // 0x15(0x3)
};

