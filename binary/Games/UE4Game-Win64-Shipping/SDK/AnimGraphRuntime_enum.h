// Enum AnimGraphRuntime.ESphericalLimitType
enum class FESphericalLimitType : uint8 {
	Inner
	Outer
	ESphericalLimitType_MAX
};

// Enum AnimGraphRuntime.AnimPhysSimSpaceType
enum class FAnimPhysSimSpaceType : uint8 {
	Component
	Actor
	World
	RootRelative
	BoneRelative
	AnimPhysSimSpaceType_MAX
};

// Enum AnimGraphRuntime.AnimPhysLinearConstraintType
enum class FAnimPhysLinearConstraintType : uint8 {
	Free
	Limited
	AnimPhysLinearConstraintType_MAX
};

// Enum AnimGraphRuntime.AnimPhysAngularConstraintType
enum class FAnimPhysAngularConstraintType : uint8 {
	Angular
	Cone
	AnimPhysAngularConstraintType_MAX
};

// Enum AnimGraphRuntime.EBlendListTransitionType
enum class FEBlendListTransitionType : uint8 {
	StandardBlend
	Inertialization
	EBlendListTransitionType_MAX
};

// Enum AnimGraphRuntime.EDrivenDestinationMode
enum class FEDrivenDestinationMode : uint8 {
	Bone
	MorphTarget
	MaterialParameter
	EDrivenDestinationMode_MAX
};

// Enum AnimGraphRuntime.EDrivenBoneModificationMode
enum class FEDrivenBoneModificationMode : uint8 {
	AddToInput
	ReplaceComponent
	AddToRefPose
	EDrivenBoneModificationMode_MAX
};

// Enum AnimGraphRuntime.EConstraintOffsetOption
enum class FEConstraintOffsetOption : uint8 {
	None
	Offset_RefPose
	EConstraintOffsetOption_MAX
};

// Enum AnimGraphRuntime.CopyBoneDeltaMode
enum class FCopyBoneDeltaMode : uint8 {
	Accumulate
	Copy
	CopyBoneDeltaMode_MAX
};

// Enum AnimGraphRuntime.EInterpolationBlend
enum class FEInterpolationBlend : uint8 {
	Linear
	Cubic
	Sinusoidal
	EaseInOutExponent2
	EaseInOutExponent3
	EaseInOutExponent4
	EaseInOutExponent5
	MAX
};

// Enum AnimGraphRuntime.EBoneModificationMode
enum class FEBoneModificationMode : uint8 {
	BMM_Ignore
	BMM_Replace
	BMM_Additive
	BMM_MAX
};

// Enum AnimGraphRuntime.EModifyCurveApplyMode
enum class FEModifyCurveApplyMode : uint8 {
	Add
	Scale
	Blend
	WeightedMovingAverage
	RemapCurve
	EModifyCurveApplyMode_MAX
};

// Enum AnimGraphRuntime.EPoseDriverOutput
enum class FEPoseDriverOutput : uint8 {
	DrivePoses
	DriveCurves
	EPoseDriverOutput_MAX
};

// Enum AnimGraphRuntime.EPoseDriverSource
enum class FEPoseDriverSource : uint8 {
	Rotation
	Translation
	EPoseDriverSource_MAX
};

// Enum AnimGraphRuntime.EPoseDriverType
enum class FEPoseDriverType : uint8 {
	SwingAndTwist
	SwingOnly
	Translation
	EPoseDriverType_MAX
};

// Enum AnimGraphRuntime.ESnapshotSourceMode
enum class FESnapshotSourceMode : uint8 {
	NamedSnapshot
	SnapshotPin
	ESnapshotSourceMode_MAX
};

// Enum AnimGraphRuntime.ERefPoseType
enum class FERefPoseType : uint8 {
	EIT_LocalSpace
	EIT_Additive
	EIT_MAX
};

// Enum AnimGraphRuntime.ESimulationSpace
enum class FESimulationSpace : uint8 {
	ComponentSpace
	WorldSpace
	BaseBoneSpace
	ESimulationSpace_MAX
};

// Enum AnimGraphRuntime.EScaleChainInitialLength
enum class FEScaleChainInitialLength : uint8 {
	FixedDefaultLengthValue
	Distance
	ChainLength
	EScaleChainInitialLength_MAX
};

// Enum AnimGraphRuntime.ESequenceEvalReinit
enum class FESequenceEvalReinit : uint8 {
	NoReset
	StartPosition
	ExplicitTime
	ESequenceEvalReinit_MAX
};

// Enum AnimGraphRuntime.ESplineBoneAxis
enum class FESplineBoneAxis : uint8 {
	None
	X
	Y
	Z
	ESplineBoneAxis_MAX
};

// Enum AnimGraphRuntime.ERotationComponent
enum class FERotationComponent : uint8 {
	EulerX
	EulerY
	EulerZ
	QuaternionAngle
	SwingAngle
	TwistAngle
	ERotationComponent_MAX
};

// Enum AnimGraphRuntime.EEasingFuncType
enum class FEEasingFuncType : uint8 {
	Linear
	Sinusoidal
	Cubic
	QuadraticInOut
	CubicInOut
	HermiteCubic
	QuarticInOut
	QuinticInOut
	CircularIn
	CircularOut
	CircularInOut
	ExpIn
	ExpOut
	ExpInOut
	CustomCurve
	EEasingFuncType_MAX
};

// Enum AnimGraphRuntime.ERBFNormalizeMethod
enum class FERBFNormalizeMethod : uint8 {
	OnlyNormalizeAboveOne
	AlwaysNormalize
	NormalizeWithinMedian
	NoNormalization
	ERBFNormalizeMethod_MAX
};

// Enum AnimGraphRuntime.ERBFDistanceMethod
enum class FERBFDistanceMethod : uint8 {
	Euclidean
	Quaternion
	SwingAngle
	TwistAngle
	DefaultMethod
	ERBFDistanceMethod_MAX
};

// Enum AnimGraphRuntime.ERBFFunctionType
enum class FERBFFunctionType : uint8 {
	Gaussian
	Exponential
	Linear
	Cubic
	Quintic
	DefaultFunction
	ERBFFunctionType_MAX
};

// Enum AnimGraphRuntime.ERBFSolverType
enum class FERBFSolverType : uint8 {
	Additive
	Interpolative
	ERBFSolverType_MAX
};

