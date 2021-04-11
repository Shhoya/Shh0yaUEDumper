// ScriptStruct AnimGraphRuntime.AnimNode_SkeletalControlBase
// Size : 0xC8 (Inherited : 0x10)
struct FAnimNode_SkeletalControlBase : FAnimNode_Base {
	struct FComponentSpacePoseLink ComponentPose; // 0x10(0x10)
	int32_t LODThreshold; // 0x20(0x4)
	float ActualAlpha; // 0x24(0x4)
	enum class EAnimAlphaInputType AlphaInputType; // 0x28(0x1)
	bool bAlphaBoolEnabled; // 0x29(0x1)
	unsigned char UnknownData_2A[0x0002]; // 0x2A(0x2)
	float Alpha; // 0x2C(0x4)
	struct FInputScaleBias AlphaScaleBias; // 0x30(0x8)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x38(0x48)
	struct FName AlphaCurveName; // 0x80(0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x88(0x30)
	unsigned char UnknownData_B8[0x0010]; // 0xB8(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpacePlayer
// Size : 0xE0 (Inherited : 0x30)
struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase {
	float X; // 0x30(0x4)
	float Y; // 0x34(0x4)
	float Z; // 0x38(0x4)
	float PlayRate; // 0x3C(0x4)
	bool bLoop; // 0x40(0x1)
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x41(0x1)
	unsigned char UnknownData_42[0x0002]; // 0x42(0x2)
	float StartPosition; // 0x44(0x4)
	struct UBlendSpaceBase* BlendSpace; // 0x48(0x8)
	unsigned char UnknownData_50[0x0088]; // 0x50(0x88)
	struct UBlendSpaceBase* PreviousBlendSpace; // 0xD8(0x8)
};

// ScriptStruct AnimGraphRuntime.AnimNode_AimOffsetLookAt
// Size : 0x1B0 (Inherited : 0xE0)
struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer {
	unsigned char UnknownData_E0[0x0060]; // 0xE0(0x60)
	struct FPoseLink BasePose; // 0x140(0x10)
	int32_t LODThreshold; // 0x150(0x4)
	struct FName SourceSocketName; // 0x154(0x8)
	struct FName PivotSocketName; // 0x15C(0x8)
	struct FVector LookAtLocation; // 0x164(0xC)
	struct FVector SocketAxis; // 0x170(0xC)
	float Alpha; // 0x17C(0x4)
	unsigned char UnknownData_180[0x0030]; // 0x180(0x30)
};

// ScriptStruct AnimGraphRuntime.AnimNode_AnimDynamics
// Size : 0x440 (Inherited : 0xC8)
struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase {
	float LinearDampingOverride; // 0xC8(0x4)
	float AngularDampingOverride; // 0xCC(0x4)
	unsigned char UnknownData_D0[0x0060]; // 0xD0(0x60)
	struct FBoneReference RelativeSpaceBone; // 0x130(0x10)
	struct FBoneReference BoundBone; // 0x140(0x10)
	struct FBoneReference ChainEnd; // 0x150(0x10)
	struct FVector BoxExtents; // 0x160(0xC)
	struct FVector LocalJointOffset; // 0x16C(0xC)
	float GravityScale; // 0x178(0x4)
	struct FVector GravityOverride; // 0x17C(0xC)
	float LinearSpringConstant; // 0x188(0x4)
	float AngularSpringConstant; // 0x18C(0x4)
	float WindScale; // 0x190(0x4)
	struct FVector ComponentLinearAccScale; // 0x194(0xC)
	struct FVector ComponentLinearVelScale; // 0x1A0(0xC)
	struct FVector ComponentAppliedLinearAccClamp; // 0x1AC(0xC)
	float AngularBiasOverride; // 0x1B8(0x4)
	int32_t NumSolverIterationsPreUpdate; // 0x1BC(0x4)
	int32_t NumSolverIterationsPostUpdate; // 0x1C0(0x4)
	struct FAnimPhysConstraintSetup ConstraintSetup; // 0x1C4(0x48)
	unsigned char UnknownData_20C[0x0004]; // 0x20C(0x4)
	struct TArray<struct FAnimPhysSphericalLimit> SphericalLimits; // 0x210(0x10)
	float SphereCollisionRadius; // 0x220(0x4)
	struct FVector ExternalForce; // 0x224(0xC)
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; // 0x230(0x10)
	enum class AnimPhysCollisionType CollisionType; // 0x240(0x1)
	enum class AnimPhysSimSpaceType SimulationSpace; // 0x241(0x1)
	unsigned char UnknownData_242[0x0002]; // 0x242(0x2)
	unsigned char bUseSphericalLimits : 1; // 0x244(0x1)
	unsigned char bUsePlanarLimit : 1; // 0x244(0x1)
	unsigned char bDoUpdate : 1; // 0x244(0x1)
	unsigned char bDoEval : 1; // 0x244(0x1)
	unsigned char bOverrideLinearDamping : 1; // 0x244(0x1)
	unsigned char bOverrideAngularBias : 1; // 0x244(0x1)
	unsigned char bOverrideAngularDamping : 1; // 0x244(0x1)
	unsigned char bEnableWind : 1; // 0x244(0x1)
	unsigned char UnknownData_245_0 : 1; // 0x245(0x1)
	unsigned char bUseGravityOverride : 1; // 0x245(0x1)
	unsigned char bLinearSpring : 1; // 0x245(0x1)
	unsigned char bAngularSpring : 1; // 0x245(0x1)
	unsigned char bChain : 1; // 0x245(0x1)
	unsigned char UnknownData_245_5 : 3; // 0x245(0x1)
	unsigned char UnknownData_246[0x000A]; // 0x246(0xA)
	struct FRotationRetargetingInfo RetargetingSettings; // 0x250(0x130)
	unsigned char UnknownData_380[0x00C0]; // 0x380(0xC0)
};

// ScriptStruct AnimGraphRuntime.RotationRetargetingInfo
// Size : 0x130 (Inherited : 0x0)
struct FRotationRetargetingInfo {
	bool bEnabled; // 0x0(0x1)
	unsigned char UnknownData_1[0x000F]; // 0x1(0xF)
	struct FTransform Source; // 0x10(0x30)
	struct FTransform Target; // 0x40(0x30)
	enum class ERotationComponent RotationComponent; // 0x70(0x1)
	unsigned char UnknownData_71[0x0003]; // 0x71(0x3)
	struct FVector TwistAxis; // 0x74(0xC)
	bool bUseAbsoluteAngle; // 0x80(0x1)
	unsigned char UnknownData_81[0x0003]; // 0x81(0x3)
	float SourceMinimum; // 0x84(0x4)
	float SourceMaximum; // 0x88(0x4)
	float TargetMinimum; // 0x8C(0x4)
	float TargetMaximum; // 0x90(0x4)
	enum class EEasingFuncType EasingType; // 0x94(0x1)
	unsigned char UnknownData_95[0x0003]; // 0x95(0x3)
	struct FRuntimeFloatCurve CustomCurve; // 0x98(0x88)
	bool bFlipEasing; // 0x120(0x1)
	unsigned char UnknownData_121[0x0003]; // 0x121(0x3)
	float EasingWeight; // 0x124(0x4)
	bool bClamp; // 0x128(0x1)
	unsigned char UnknownData_129[0x0007]; // 0x129(0x7)
};

// ScriptStruct AnimGraphRuntime.AnimPhysPlanarLimit
// Size : 0x40 (Inherited : 0x0)
struct FAnimPhysPlanarLimit {
	struct FBoneReference DrivingBone; // 0x0(0x10)
	struct FTransform PlaneTransform; // 0x10(0x30)
};

// ScriptStruct AnimGraphRuntime.AnimPhysSphericalLimit
// Size : 0x24 (Inherited : 0x0)
struct FAnimPhysSphericalLimit {
	struct FBoneReference DrivingBone; // 0x0(0x10)
	struct FVector SphereLocalOffset; // 0x10(0xC)
	float LimitRadius; // 0x1C(0x4)
	enum class ESphericalLimitType LimitType; // 0x20(0x1)
	unsigned char UnknownData_21[0x0003]; // 0x21(0x3)
};

// ScriptStruct AnimGraphRuntime.AnimPhysConstraintSetup
// Size : 0x48 (Inherited : 0x0)
struct FAnimPhysConstraintSetup {
	enum class AnimPhysLinearConstraintType LinearXLimitType; // 0x0(0x1)
	enum class AnimPhysLinearConstraintType LinearYLimitType; // 0x1(0x1)
	enum class AnimPhysLinearConstraintType LinearZLimitType; // 0x2(0x1)
	unsigned char UnknownData_3[0x0001]; // 0x3(0x1)
	struct FVector LinearAxesMin; // 0x4(0xC)
	struct FVector LinearAxesMax; // 0x10(0xC)
	enum class AnimPhysAngularConstraintType AngularConstraintType; // 0x1C(0x1)
	enum class AnimPhysTwistAxis TwistAxis; // 0x1D(0x1)
	enum class AnimPhysTwistAxis AngularTargetAxis; // 0x1E(0x1)
	unsigned char UnknownData_1F[0x0001]; // 0x1F(0x1)
	float ConeAngle; // 0x20(0x4)
	struct FVector AngularLimitsMin; // 0x24(0xC)
	struct FVector AngularLimitsMax; // 0x30(0xC)
	struct FVector AngularTarget; // 0x3C(0xC)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyAdditive
// Size : 0xC8 (Inherited : 0x10)
struct FAnimNode_ApplyAdditive : FAnimNode_Base {
	struct FPoseLink Base; // 0x10(0x10)
	struct FPoseLink Additive; // 0x20(0x10)
	float Alpha; // 0x30(0x4)
	struct FInputScaleBias AlphaScaleBias; // 0x34(0x8)
	int32_t LODThreshold; // 0x3C(0x4)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x40(0x48)
	struct FName AlphaCurveName; // 0x88(0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x90(0x30)
	unsigned char UnknownData_C0[0x0004]; // 0xC0(0x4)
	enum class EAnimAlphaInputType AlphaInputType; // 0xC4(0x1)
	bool bAlphaBoolEnabled; // 0xC5(0x1)
	unsigned char UnknownData_C6[0x0002]; // 0xC6(0x2)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ApplyLimits
// Size : 0xE8 (Inherited : 0xC8)
struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase {
	struct TArray<struct FAngularRangeLimit> AngularRangeLimits; // 0xC8(0x10)
	struct TArray<struct FVector> AngularOffsets; // 0xD8(0x10)
};

// ScriptStruct AnimGraphRuntime.AngularRangeLimit
// Size : 0x28 (Inherited : 0x0)
struct FAngularRangeLimit {
	struct FVector LimitMin; // 0x0(0xC)
	struct FVector LimitMax; // 0xC(0xC)
	struct FBoneReference Bone; // 0x18(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendBoneByChannel
// Size : 0x68 (Inherited : 0x10)
struct FAnimNode_BlendBoneByChannel : FAnimNode_Base {
	struct FPoseLink A; // 0x10(0x10)
	struct FPoseLink B; // 0x20(0x10)
	struct TArray<struct FBlendBoneByChannelEntry> BoneDefinitions; // 0x30(0x10)
	unsigned char UnknownData_40[0x0010]; // 0x40(0x10)
	float Alpha; // 0x50(0x4)
	unsigned char UnknownData_54[0x0004]; // 0x54(0x4)
	struct FInputScaleBias AlphaScaleBias; // 0x58(0x8)
	enum class EBoneControlSpace TransformsSpace; // 0x60(0x1)
	unsigned char UnknownData_61[0x0007]; // 0x61(0x7)
};

// ScriptStruct AnimGraphRuntime.BlendBoneByChannelEntry
// Size : 0x24 (Inherited : 0x0)
struct FBlendBoneByChannelEntry {
	struct FBoneReference SourceBone; // 0x0(0x10)
	struct FBoneReference TargetBone; // 0x10(0x10)
	bool bBlendTranslation; // 0x20(0x1)
	bool bBlendRotation; // 0x21(0x1)
	bool bBlendScale; // 0x22(0x1)
	unsigned char UnknownData_23[0x0001]; // 0x23(0x1)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListBase
// Size : 0x98 (Inherited : 0x10)
struct FAnimNode_BlendListBase : FAnimNode_Base {
	struct TArray<struct FPoseLink> BlendPose; // 0x10(0x10)
	struct TArray<float> BlendTime; // 0x20(0x10)
	enum class EBlendListTransitionType TransitionType; // 0x30(0x1)
	enum class EAlphaBlendOption BlendType; // 0x31(0x1)
	bool bResetChildOnActivation; // 0x32(0x1)
	unsigned char UnknownData_33[0x0005]; // 0x33(0x5)
	struct UCurveFloat* CustomBlendCurve; // 0x38(0x8)
	struct UBlendProfile* BlendProfile; // 0x40(0x8)
	unsigned char UnknownData_48[0x0050]; // 0x48(0x50)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByBool
// Size : 0xA0 (Inherited : 0x98)
struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	bool bActiveValue; // 0x98(0x1)
	unsigned char UnknownData_99[0x0007]; // 0x99(0x7)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByEnum
// Size : 0xB0 (Inherited : 0x98)
struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	struct TArray<int32_t> EnumToPoseIndex; // 0x98(0x10)
	enum class None ActiveEnumValue; // 0xA8(0x1)
	unsigned char UnknownData_A9[0x0007]; // 0xA9(0x7)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendListByInt
// Size : 0xA0 (Inherited : 0x98)
struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	int32_t ActiveChildIndex; // 0x98(0x4)
	unsigned char UnknownData_9C[0x0004]; // 0x9C(0x4)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BlendSpaceEvaluator
// Size : 0xE8 (Inherited : 0xE0)
struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	float NormalizedTime; // 0xE0(0x4)
	unsigned char UnknownData_E4[0x0004]; // 0xE4(0x4)
};

// ScriptStruct AnimGraphRuntime.AnimNode_BoneDrivenController
// Size : 0x118 (Inherited : 0xC8)
struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase {
	struct FBoneReference SourceBone; // 0xC8(0x10)
	struct UCurveFloat* DrivingCurve; // 0xD8(0x8)
	float Multiplier; // 0xE0(0x4)
	float RangeMin; // 0xE4(0x4)
	float RangeMax; // 0xE8(0x4)
	float RemappedMin; // 0xEC(0x4)
	float RemappedMax; // 0xF0(0x4)
	struct FName ParameterName; // 0xF4(0x8)
	struct FBoneReference TargetBone; // 0xFC(0x10)
	enum class EDrivenDestinationMode DestinationMode; // 0x10C(0x1)
	enum class EDrivenBoneModificationMode ModificationMode; // 0x10D(0x1)
	enum class EComponentType SourceComponent; // 0x10E(0x1)
	unsigned char bUseRange : 1; // 0x10F(0x1)
	unsigned char bAffectTargetTranslationX : 1; // 0x10F(0x1)
	unsigned char bAffectTargetTranslationY : 1; // 0x10F(0x1)
	unsigned char bAffectTargetTranslationZ : 1; // 0x10F(0x1)
	unsigned char bAffectTargetRotationX : 1; // 0x10F(0x1)
	unsigned char bAffectTargetRotationY : 1; // 0x10F(0x1)
	unsigned char bAffectTargetRotationZ : 1; // 0x10F(0x1)
	unsigned char bAffectTargetScaleX : 1; // 0x10F(0x1)
	unsigned char bAffectTargetScaleY : 1; // 0x110(0x1)
	unsigned char bAffectTargetScaleZ : 1; // 0x110(0x1)
	unsigned char UnknownData_110_2 : 6; // 0x110(0x1)
	unsigned char UnknownData_111[0x0007]; // 0x111(0x7)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CCDIK
// Size : 0x180 (Inherited : 0xC8)
struct FAnimNode_CCDIK : FAnimNode_SkeletalControlBase {
	struct FVector EffectorLocation; // 0xC8(0xC)
	enum class EBoneControlSpace EffectorLocationSpace; // 0xD4(0x1)
	unsigned char UnknownData_D5[0x000B]; // 0xD5(0xB)
	struct FBoneSocketTarget EffectorTarget; // 0xE0(0x60)
	struct FBoneReference TipBone; // 0x140(0x10)
	struct FBoneReference RootBone; // 0x150(0x10)
	float Precision; // 0x160(0x4)
	int32_t MaxIterations; // 0x164(0x4)
	bool bStartFromTail; // 0x168(0x1)
	bool bEnableRotationLimit; // 0x169(0x1)
	unsigned char UnknownData_16A[0x0006]; // 0x16A(0x6)
	struct TArray<float> RotationLimitPerJoints; // 0x170(0x10)
};

// ScriptStruct AnimGraphRuntime.BoneSocketTarget
// Size : 0x60 (Inherited : 0x0)
struct FBoneSocketTarget {
	bool bUseSocket; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	struct FBoneReference BoneReference; // 0x4(0x10)
	unsigned char UnknownData_14[0x000C]; // 0x14(0xC)
	struct FSocketReference SocketReference; // 0x20(0x40)
};

// ScriptStruct AnimGraphRuntime.SocketReference
// Size : 0x40 (Inherited : 0x0)
struct FSocketReference {
	unsigned char UnknownData_0[0x0030]; // 0x0(0x30)
	struct FName SocketName; // 0x30(0x8)
	unsigned char UnknownData_38[0x0008]; // 0x38(0x8)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Constraint
// Size : 0x108 (Inherited : 0xC8)
struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToModify; // 0xC8(0x10)
	struct TArray<struct FConstraint> ConstraintSetup; // 0xD8(0x10)
	struct TArray<float> ConstraintWeights; // 0xE8(0x10)
	unsigned char UnknownData_F8[0x0010]; // 0xF8(0x10)
};

// ScriptStruct AnimGraphRuntime.Constraint
// Size : 0x1C (Inherited : 0x0)
struct FConstraint {
	struct FBoneReference TargetBone; // 0x0(0x10)
	enum class EConstraintOffsetOption OffsetOption; // 0x10(0x1)
	enum class ETransformConstraintType TransformType; // 0x11(0x1)
	struct FFilterOptionPerAxis PerAxis; // 0x12(0x3)
	unsigned char UnknownData_15[0x0007]; // 0x15(0x7)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBone
// Size : 0xF0 (Inherited : 0xC8)
struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference SourceBone; // 0xC8(0x10)
	struct FBoneReference TargetBone; // 0xD8(0x10)
	bool bCopyTranslation; // 0xE8(0x1)
	bool bCopyRotation; // 0xE9(0x1)
	bool bCopyScale; // 0xEA(0x1)
	enum class EBoneControlSpace ControlSpace; // 0xEB(0x1)
	unsigned char UnknownData_EC[0x0004]; // 0xEC(0x4)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyBoneDelta
// Size : 0xF8 (Inherited : 0xC8)
struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase {
	struct FBoneReference SourceBone; // 0xC8(0x10)
	struct FBoneReference TargetBone; // 0xD8(0x10)
	bool bCopyTranslation; // 0xE8(0x1)
	bool bCopyRotation; // 0xE9(0x1)
	bool bCopyScale; // 0xEA(0x1)
	enum class CopyBoneDeltaMode CopyMode; // 0xEB(0x1)
	float TranslationMultiplier; // 0xEC(0x4)
	float RotationMultiplier; // 0xF0(0x4)
	float ScaleMultiplier; // 0xF4(0x4)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CopyPoseFromMesh
// Size : 0x140 (Inherited : 0x10)
struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	struct FWeakObjectPtr<struct USkeletalMeshComponent> SourceMeshComponent; // 0x10(0x8)
	bool bUseAttachedParent; // 0x18(0x1)
	bool bCopyCurves; // 0x19(0x1)
	unsigned char UnknownData_1A[0x0126]; // 0x1A(0x126)
};

// ScriptStruct AnimGraphRuntime.AnimNode_CurveSource
// Size : 0x40 (Inherited : 0x10)
struct FAnimNode_CurveSource : FAnimNode_Base {
	struct FPoseLink SourcePose; // 0x10(0x10)
	struct FName SourceBinding; // 0x20(0x8)
	float Alpha; // 0x28(0x4)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
	struct TScriptInterface<None> CurveSource; // 0x30(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Fabrik
// Size : 0x190 (Inherited : 0xC8)
struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase {
	unsigned char UnknownData_C8[0x0008]; // 0xC8(0x8)
	struct FTransform EffectorTransform; // 0xD0(0x30)
	struct FBoneSocketTarget EffectorTarget; // 0x100(0x60)
	struct FBoneReference TipBone; // 0x160(0x10)
	struct FBoneReference RootBone; // 0x170(0x10)
	float Precision; // 0x180(0x4)
	int32_t MaxIterations; // 0x184(0x4)
	enum class EBoneControlSpace EffectorTransformSpace; // 0x188(0x1)
	enum class EBoneRotationSource EffectorRotationSource; // 0x189(0x1)
	unsigned char UnknownData_18A[0x0006]; // 0x18A(0x6)
};

// ScriptStruct AnimGraphRuntime.AnimNode_HandIKRetargeting
// Size : 0x120 (Inherited : 0xC8)
struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	struct FBoneReference RightHandFK; // 0xC8(0x10)
	struct FBoneReference LeftHandFK; // 0xD8(0x10)
	struct FBoneReference RightHandIK; // 0xE8(0x10)
	struct FBoneReference LeftHandIK; // 0xF8(0x10)
	struct TArray<struct FBoneReference> IKBonesToMove; // 0x108(0x10)
	float HandFKWeight; // 0x118(0x4)
	unsigned char UnknownData_11C[0x0004]; // 0x11C(0x4)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LayeredBoneBlend
// Size : 0xC0 (Inherited : 0x10)
struct FAnimNode_LayeredBoneBlend : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	struct TArray<struct FPoseLink> BlendPoses; // 0x20(0x10)
	struct TArray<struct FInputBlendPose> LayerSetup; // 0x30(0x10)
	struct TArray<float> BlendWeights; // 0x40(0x10)
	bool bMeshSpaceRotationBlend; // 0x50(0x1)
	bool bMeshSpaceScaleBlend; // 0x51(0x1)
	enum class ECurveBlendOption CurveBlendOption; // 0x52(0x1)
	bool bBlendRootMotionBasedOnRootBone; // 0x53(0x1)
	unsigned char UnknownData_54[0x0004]; // 0x54(0x4)
	int32_t LODThreshold; // 0x58(0x4)
	unsigned char UnknownData_5C[0x0004]; // 0x5C(0x4)
	struct TArray<struct FPerBoneBlendWeight> PerBoneBlendWeights; // 0x60(0x10)
	struct FGuid SkeletonGuid; // 0x70(0x10)
	struct FGuid VirtualBoneGuid; // 0x80(0x10)
	unsigned char UnknownData_90[0x0030]; // 0x90(0x30)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LegIK
// Size : 0xF8 (Inherited : 0xC8)
struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase {
	float ReachPrecision; // 0xC8(0x4)
	int32_t MaxIterations; // 0xCC(0x4)
	struct TArray<struct FAnimLegIKDefinition> LegsDefinition; // 0xD0(0x10)
	unsigned char UnknownData_E0[0x0018]; // 0xE0(0x18)
};

// ScriptStruct AnimGraphRuntime.AnimLegIKDefinition
// Size : 0x2C (Inherited : 0x0)
struct FAnimLegIKDefinition {
	struct FBoneReference IKFootBone; // 0x0(0x10)
	struct FBoneReference FKFootBone; // 0x10(0x10)
	int32_t NumBonesInLimb; // 0x20(0x4)
	float MinRotationAngle; // 0x24(0x4)
	enum class EAxis FootBoneForwardAxis; // 0x28(0x1)
	enum class EAxis HingeRotationAxis; // 0x29(0x1)
	bool bEnableRotationLimit; // 0x2A(0x1)
	bool bEnableKneeTwistCorrection; // 0x2B(0x1)
};

// ScriptStruct AnimGraphRuntime.AnimLegIKData
// Size : 0xA0 (Inherited : 0x0)
struct FAnimLegIKData {
	unsigned char UnknownData_0[0x00A0]; // 0x0(0xA0)
};

// ScriptStruct AnimGraphRuntime.IKChain
// Size : 0x38 (Inherited : 0x0)
struct FIKChain {
	unsigned char UnknownData_0[0x0038]; // 0x0(0x38)
};

// ScriptStruct AnimGraphRuntime.IKChainLink
// Size : 0x3C (Inherited : 0x0)
struct FIKChainLink {
	unsigned char UnknownData_0[0x003C]; // 0x0(0x3C)
};

// ScriptStruct AnimGraphRuntime.AnimNode_LookAt
// Size : 0x1B0 (Inherited : 0xC8)
struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToModify; // 0xC8(0x10)
	unsigned char UnknownData_D8[0x0008]; // 0xD8(0x8)
	struct FBoneSocketTarget LookAtTarget; // 0xE0(0x60)
	struct FVector LookAtLocation; // 0x140(0xC)
	struct FAxis LookAt_Axis; // 0x14C(0x10)
	bool bUseLookUpAxis; // 0x15C(0x1)
	enum class EInterpolationBlend InterpolationType; // 0x15D(0x1)
	unsigned char UnknownData_15E[0x0002]; // 0x15E(0x2)
	struct FAxis LookUp_Axis; // 0x160(0x10)
	float LookAtClamp; // 0x170(0x4)
	float InterpolationTime; // 0x174(0x4)
	float InterpolationTriggerThreashold; // 0x178(0x4)
	unsigned char UnknownData_17C[0x0034]; // 0x17C(0x34)
};

// ScriptStruct AnimGraphRuntime.AnimNode_MakeDynamicAdditive
// Size : 0x38 (Inherited : 0x10)
struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base {
	struct FPoseLink Base; // 0x10(0x10)
	struct FPoseLink Additive; // 0x20(0x10)
	bool bMeshSpaceAdditive; // 0x30(0x1)
	unsigned char UnknownData_31[0x0007]; // 0x31(0x7)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyBone
// Size : 0x108 (Inherited : 0xC8)
struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToModify; // 0xC8(0x10)
	struct FVector Translation; // 0xD8(0xC)
	struct FRotator Rotation; // 0xE4(0xC)
	struct FVector Scale; // 0xF0(0xC)
	enum class EBoneModificationMode TranslationMode; // 0xFC(0x1)
	enum class EBoneModificationMode RotationMode; // 0xFD(0x1)
	enum class EBoneModificationMode ScaleMode; // 0xFE(0x1)
	enum class EBoneControlSpace TranslationSpace; // 0xFF(0x1)
	enum class EBoneControlSpace RotationSpace; // 0x100(0x1)
	enum class EBoneControlSpace ScaleSpace; // 0x101(0x1)
	unsigned char UnknownData_102[0x0006]; // 0x102(0x6)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ModifyCurve
// Size : 0x58 (Inherited : 0x10)
struct FAnimNode_ModifyCurve : FAnimNode_Base {
	struct FPoseLink SourcePose; // 0x10(0x10)
	struct TArray<float> CurveValues; // 0x20(0x10)
	struct TArray<struct FName> CurveNames; // 0x30(0x10)
	unsigned char UnknownData_40[0x0010]; // 0x40(0x10)
	float Alpha; // 0x50(0x4)
	enum class EModifyCurveApplyMode ApplyMode; // 0x54(0x1)
	unsigned char UnknownData_55[0x0003]; // 0x55(0x3)
};

// ScriptStruct AnimGraphRuntime.AnimNode_MultiWayBlend
// Size : 0x50 (Inherited : 0x10)
struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	struct TArray<struct FPoseLink> Poses; // 0x10(0x10)
	struct TArray<float> DesiredAlphas; // 0x20(0x10)
	unsigned char UnknownData_30[0x0010]; // 0x30(0x10)
	struct FInputScaleBias AlphaScaleBias; // 0x40(0x8)
	bool bAdditiveNode; // 0x48(0x1)
	bool bNormalizeAlpha; // 0x49(0x1)
	unsigned char UnknownData_4A[0x0006]; // 0x4A(0x6)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ObserveBone
// Size : 0x100 (Inherited : 0xC8)
struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference BoneToObserve; // 0xC8(0x10)
	enum class EBoneControlSpace DisplaySpace; // 0xD8(0x1)
	bool bRelativeToRefPose; // 0xD9(0x1)
	unsigned char UnknownData_DA[0x0002]; // 0xDA(0x2)
	struct FVector Translation; // 0xDC(0xC)
	struct FRotator Rotation; // 0xE8(0xC)
	struct FVector Scale; // 0xF4(0xC)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseHandler
// Size : 0x78 (Inherited : 0x30)
struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase {
	struct UPoseAsset* PoseAsset; // 0x30(0x8)
	unsigned char UnknownData_38[0x0040]; // 0x38(0x40)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseBlendNode
// Size : 0x98 (Inherited : 0x78)
struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler {
	struct FPoseLink SourcePose; // 0x78(0x10)
	enum class EAlphaBlendOption BlendOption; // 0x88(0x1)
	unsigned char UnknownData_89[0x0007]; // 0x89(0x7)
	struct UCurveFloat* CustomCurve; // 0x90(0x8)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseByName
// Size : 0x90 (Inherited : 0x78)
struct FAnimNode_PoseByName : FAnimNode_PoseHandler {
	struct FName PoseName; // 0x78(0x8)
	float PoseWeight; // 0x80(0x4)
	unsigned char UnknownData_84[0x000C]; // 0x84(0xC)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseDriver
// Size : 0x128 (Inherited : 0x78)
struct FAnimNode_PoseDriver : FAnimNode_PoseHandler {
	struct FPoseLink SourcePose; // 0x78(0x10)
	struct TArray<struct FBoneReference> SourceBones; // 0x88(0x10)
	struct TArray<struct FBoneReference> OnlyDriveBones; // 0x98(0x10)
	struct TArray<struct FPoseDriverTarget> PoseTargets; // 0xA8(0x10)
	unsigned char UnknownData_B8[0x0030]; // 0xB8(0x30)
	struct FBoneReference EvalSpaceBone; // 0xE8(0x10)
	struct FRBFParams RBFParams; // 0xF8(0x2C)
	enum class EPoseDriverSource DriveSource; // 0x124(0x1)
	enum class EPoseDriverOutput DriveOutput; // 0x125(0x1)
	unsigned char bOnlyDriveSelectedBones : 1; // 0x126(0x1)
	unsigned char UnknownData_126_1 : 7; // 0x126(0x1)
	unsigned char UnknownData_127[0x0001]; // 0x127(0x1)
};

// ScriptStruct AnimGraphRuntime.RBFParams
// Size : 0x2C (Inherited : 0x0)
struct FRBFParams {
	int32_t TargetDimensions; // 0x0(0x4)
	enum class ERBFSolverType SolverType; // 0x4(0x1)
	unsigned char UnknownData_5[0x0003]; // 0x5(0x3)
	float Radius; // 0x8(0x4)
	enum class ERBFFunctionType Function; // 0xC(0x1)
	enum class ERBFDistanceMethod DistanceMethod; // 0xD(0x1)
	enum class EBoneAxis TwistAxis; // 0xE(0x1)
	unsigned char UnknownData_F[0x0001]; // 0xF(0x1)
	float WeightThreshold; // 0x10(0x4)
	enum class ERBFNormalizeMethod NormalizeMethod; // 0x14(0x1)
	unsigned char UnknownData_15[0x0003]; // 0x15(0x3)
	struct FVector MedianReference; // 0x18(0xC)
	float MedianMin; // 0x24(0x4)
	float MedianMax; // 0x28(0x4)
};

// ScriptStruct AnimGraphRuntime.PoseDriverTarget
// Size : 0xC0 (Inherited : 0x0)
struct FPoseDriverTarget {
	struct TArray<struct FPoseDriverTransform> BoneTransforms; // 0x0(0x10)
	struct FRotator TargetRotation; // 0x10(0xC)
	float TargetScale; // 0x1C(0x4)
	enum class ERBFDistanceMethod DistanceMethod; // 0x20(0x1)
	enum class ERBFFunctionType FunctionType; // 0x21(0x1)
	bool bApplyCustomCurve; // 0x22(0x1)
	unsigned char UnknownData_23[0x0005]; // 0x23(0x5)
	struct FRichCurve CustomCurve; // 0x28(0x80)
	struct FName DrivenName; // 0xA8(0x8)
	unsigned char UnknownData_B0[0x0008]; // 0xB0(0x8)
	bool bIsHidden; // 0xB8(0x1)
	unsigned char UnknownData_B9[0x0007]; // 0xB9(0x7)
};

// ScriptStruct AnimGraphRuntime.PoseDriverTransform
// Size : 0x18 (Inherited : 0x0)
struct FPoseDriverTransform {
	struct FVector TargetTranslation; // 0x0(0xC)
	struct FRotator TargetRotation; // 0xC(0xC)
};

// ScriptStruct AnimGraphRuntime.AnimNode_PoseSnapshot
// Size : 0x90 (Inherited : 0x10)
struct FAnimNode_PoseSnapshot : FAnimNode_Base {
	struct FName SnapshotName; // 0x10(0x8)
	struct FPoseSnapshot Snapshot; // 0x18(0x38)
	enum class ESnapshotSourceMode Mode; // 0x50(0x1)
	unsigned char UnknownData_51[0x003F]; // 0x51(0x3F)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RandomPlayer
// Size : 0x78 (Inherited : 0x10)
struct FAnimNode_RandomPlayer : FAnimNode_Base {
	struct TArray<struct FRandomPlayerSequenceEntry> Entries; // 0x10(0x10)
	unsigned char UnknownData_20[0x0050]; // 0x20(0x50)
	bool bShuffleMode; // 0x70(0x1)
	unsigned char UnknownData_71[0x0007]; // 0x71(0x7)
};

// ScriptStruct AnimGraphRuntime.RandomPlayerSequenceEntry
// Size : 0x50 (Inherited : 0x0)
struct FRandomPlayerSequenceEntry {
	struct UAnimSequence* Sequence; // 0x0(0x8)
	float ChanceToPlay; // 0x8(0x4)
	int32_t MinLoopCount; // 0xC(0x4)
	int32_t MaxLoopCount; // 0x10(0x4)
	float MinPlayRate; // 0x14(0x4)
	float MaxPlayRate; // 0x18(0x4)
	unsigned char UnknownData_1C[0x0004]; // 0x1C(0x4)
	struct FAlphaBlend BlendIn; // 0x20(0x30)
};

// ScriptStruct AnimGraphRuntime.AnimNode_MeshSpaceRefPose
// Size : 0x10 (Inherited : 0x10)
struct FAnimNode_MeshSpaceRefPose : FAnimNode_Base {
};

// ScriptStruct AnimGraphRuntime.AnimNode_RefPose
// Size : 0x18 (Inherited : 0x10)
struct FAnimNode_RefPose : FAnimNode_Base {
	enum class ERefPoseType RefPoseType; // 0x10(0x1)
	unsigned char UnknownData_11[0x0007]; // 0x11(0x7)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ResetRoot
// Size : 0xD8 (Inherited : 0xC8)
struct FAnimNode_ResetRoot : FAnimNode_SkeletalControlBase {
	unsigned char UnknownData_C8[0x0010]; // 0xC8(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody
// Size : 0x590 (Inherited : 0xC8)
struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase {
	struct UPhysicsAsset* OverridePhysicsAsset; // 0xC8(0x8)
	unsigned char UnknownData_D0[0x0098]; // 0xD0(0x98)
	struct FVector OverrideWorldGravity; // 0x168(0xC)
	struct FVector ExternalForce; // 0x174(0xC)
	struct FVector ComponentLinearAccScale; // 0x180(0xC)
	struct FVector ComponentLinearVelScale; // 0x18C(0xC)
	struct FVector ComponentAppliedLinearAccClamp; // 0x198(0xC)
	float CachedBoundsScale; // 0x1A4(0x4)
	struct FBoneReference BaseBoneRef; // 0x1A8(0x10)
	enum class ECollisionChannel OverlapChannel; // 0x1B8(0x1)
	enum class ESimulationSpace SimulationSpace; // 0x1B9(0x1)
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x1BA(0x1)
	unsigned char UnknownData_1BB[0x0001]; // 0x1BB(0x1)
	unsigned char bEnableWorldGeometry : 1; // 0x1BC(0x1)
	unsigned char bOverrideWorldGravity : 1; // 0x1BC(0x1)
	unsigned char bTransferBoneVelocities : 1; // 0x1BC(0x1)
	unsigned char bFreezeIncomingPoseOnStart : 1; // 0x1BC(0x1)
	unsigned char bClampLinearTranslationLimitToRefPose : 1; // 0x1BC(0x1)
	unsigned char UnknownData_1BC_5 : 3; // 0x1BC(0x1)
	unsigned char UnknownData_1BD[0x0003]; // 0x1BD(0x3)
	struct FSolverIterations OverrideSolverIterations; // 0x1C0(0x18)
	unsigned char UnknownData_1D8[0x03B8]; // 0x1D8(0x3B8)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RigidBody_Chaos
// Size : 0x580 (Inherited : 0xC8)
struct FAnimNode_RigidBody_Chaos : FAnimNode_SkeletalControlBase {
	struct UPhysicsAsset* OverridePhysicsAsset; // 0xC8(0x8)
	struct FVector OverrideWorldGravity; // 0xD0(0xC)
	struct FVector ExternalForce; // 0xDC(0xC)
	struct FVector ComponentLinearAccScale; // 0xE8(0xC)
	struct FVector ComponentLinearVelScale; // 0xF4(0xC)
	struct FVector ComponentAppliedLinearAccClamp; // 0x100(0xC)
	float CachedBoundsScale; // 0x10C(0x4)
	struct FBoneReference BaseBoneRef; // 0x110(0x10)
	enum class ECollisionChannel OverlapChannel; // 0x120(0x1)
	enum class ESimulationSpace SimulationSpace; // 0x121(0x1)
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x122(0x1)
	unsigned char bEnableWorldGeometry : 1; // 0x123(0x1)
	unsigned char bOverrideWorldGravity : 1; // 0x123(0x1)
	unsigned char bTransferBoneVelocities : 1; // 0x123(0x1)
	unsigned char bFreezeIncomingPoseOnStart : 1; // 0x123(0x1)
	unsigned char bClampLinearTranslationLimitToRefPose : 1; // 0x123(0x1)
	unsigned char UnknownData_123_5 : 3; // 0x123(0x1)
	struct FSolverIterations OverrideSolverIterations; // 0x124(0x18)
	unsigned char UnknownData_13C[0x0444]; // 0x13C(0x444)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotateRootBone
// Size : 0xA0 (Inherited : 0x10)
struct FAnimNode_RotateRootBone : FAnimNode_Base {
	struct FPoseLink BasePose; // 0x10(0x10)
	float Pitch; // 0x20(0x4)
	float Yaw; // 0x24(0x4)
	struct FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28(0x30)
	struct FInputScaleBiasClamp YawScaleBiasClamp; // 0x58(0x30)
	struct FRotator MeshToComponent; // 0x88(0xC)
	unsigned char UnknownData_94[0x000C]; // 0x94(0xC)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationMultiplier
// Size : 0xF0 (Inherited : 0xC8)
struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	struct FBoneReference TargetBone; // 0xC8(0x10)
	struct FBoneReference SourceBone; // 0xD8(0x10)
	float Multiplier; // 0xE8(0x4)
	enum class EBoneAxis RotationAxisToRefer; // 0xEC(0x1)
	bool bIsAdditive; // 0xED(0x1)
	unsigned char UnknownData_EE[0x0002]; // 0xEE(0x2)
};

// ScriptStruct AnimGraphRuntime.AnimNode_RotationOffsetBlendSpace
// Size : 0x188 (Inherited : 0xE0)
struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer {
	struct FPoseLink BasePose; // 0xE0(0x10)
	int32_t LODThreshold; // 0xF0(0x4)
	float Alpha; // 0xF4(0x4)
	struct FInputScaleBias AlphaScaleBias; // 0xF8(0x8)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x100(0x48)
	struct FName AlphaCurveName; // 0x148(0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x150(0x30)
	unsigned char UnknownData_180[0x0004]; // 0x180(0x4)
	enum class EAnimAlphaInputType AlphaInputType; // 0x184(0x1)
	bool bAlphaBoolEnabled; // 0x185(0x1)
	unsigned char UnknownData_186[0x0002]; // 0x186(0x2)
};

// ScriptStruct AnimGraphRuntime.AnimNode_ScaleChainLength
// Size : 0x78 (Inherited : 0x10)
struct FAnimNode_ScaleChainLength : FAnimNode_Base {
	struct FPoseLink InputPose; // 0x10(0x10)
	float DefaultChainLength; // 0x20(0x4)
	struct FBoneReference ChainStartBone; // 0x24(0x10)
	struct FBoneReference ChainEndBone; // 0x34(0x10)
	struct FVector TargetLocation; // 0x44(0xC)
	float Alpha; // 0x50(0x4)
	unsigned char UnknownData_54[0x0004]; // 0x54(0x4)
	struct FInputScaleBias AlphaScaleBias; // 0x58(0x8)
	enum class EScaleChainInitialLength ChainInitialLength; // 0x60(0x1)
	unsigned char UnknownData_61[0x0017]; // 0x61(0x17)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SequenceEvaluator
// Size : 0x48 (Inherited : 0x30)
struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase {
	struct UAnimSequenceBase* Sequence; // 0x30(0x8)
	float ExplicitTime; // 0x38(0x4)
	bool bShouldLoop; // 0x3C(0x1)
	bool bTeleportToExplicitTime; // 0x3D(0x1)
	enum class ESequenceEvalReinit ReinitializationBehavior; // 0x3E(0x1)
	unsigned char UnknownData_3F[0x0001]; // 0x3F(0x1)
	float StartPosition; // 0x40(0x4)
	unsigned char UnknownData_44[0x0004]; // 0x44(0x4)
};

// ScriptStruct AnimGraphRuntime.AnimNode_Slot
// Size : 0x48 (Inherited : 0x10)
struct FAnimNode_Slot : FAnimNode_Base {
	struct FPoseLink Source; // 0x10(0x10)
	struct FName SlotName; // 0x20(0x8)
	bool bAlwaysUpdateSourcePose; // 0x28(0x1)
	unsigned char UnknownData_29[0x001F]; // 0x29(0x1F)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SplineIK
// Size : 0x260 (Inherited : 0xC8)
struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase {
	struct FBoneReference StartBone; // 0xC8(0x10)
	struct FBoneReference EndBone; // 0xD8(0x10)
	enum class ESplineBoneAxis BoneAxis; // 0xE8(0x1)
	bool bAutoCalculateSpline; // 0xE9(0x1)
	unsigned char UnknownData_EA[0x0002]; // 0xEA(0x2)
	int32_t PointCount; // 0xEC(0x4)
	struct TArray<struct FTransform> ControlPoints; // 0xF0(0x10)
	float Roll; // 0x100(0x4)
	float TwistStart; // 0x104(0x4)
	float TwistEnd; // 0x108(0x4)
	unsigned char UnknownData_10C[0x0004]; // 0x10C(0x4)
	struct FAlphaBlend TwistBlend; // 0x110(0x30)
	float Stretch; // 0x140(0x4)
	float Offset; // 0x144(0x4)
	unsigned char UnknownData_148[0x0118]; // 0x148(0x118)
};

// ScriptStruct AnimGraphRuntime.SplineIKCachedBoneData
// Size : 0x14 (Inherited : 0x0)
struct FSplineIKCachedBoneData {
	struct FBoneReference Bone; // 0x0(0x10)
	int32_t RefSkeletonIndex; // 0x10(0x4)
};

// ScriptStruct AnimGraphRuntime.AnimNode_SpringBone
// Size : 0x128 (Inherited : 0xC8)
struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase {
	struct FBoneReference SpringBone; // 0xC8(0x10)
	float MaxDisplacement; // 0xD8(0x4)
	float SpringStiffness; // 0xDC(0x4)
	float SpringDamping; // 0xE0(0x4)
	float ErrorResetThresh; // 0xE4(0x4)
	unsigned char UnknownData_E8[0x003C]; // 0xE8(0x3C)
	unsigned char bLimitDisplacement : 1; // 0x124(0x1)
	unsigned char bTranslateX : 1; // 0x124(0x1)
	unsigned char bTranslateY : 1; // 0x124(0x1)
	unsigned char bTranslateZ : 1; // 0x124(0x1)
	unsigned char bRotateX : 1; // 0x124(0x1)
	unsigned char bRotateY : 1; // 0x124(0x1)
	unsigned char bRotateZ : 1; // 0x124(0x1)
	unsigned char UnknownData_125[0x0003]; // 0x125(0x3)
};

// ScriptStruct AnimGraphRuntime.AnimNode_StateResult
// Size : 0x30 (Inherited : 0x30)
struct FAnimNode_StateResult : FAnimNode_Root {
};

// ScriptStruct AnimGraphRuntime.AnimNode_Trail
// Size : 0x260 (Inherited : 0xC8)
struct FAnimNode_Trail : FAnimNode_SkeletalControlBase {
	unsigned char UnknownData_C8[0x0038]; // 0xC8(0x38)
	struct FBoneReference TrailBone; // 0x100(0x10)
	int32_t ChainLength; // 0x110(0x4)
	enum class EAxis ChainBoneAxis; // 0x114(0x1)
	unsigned char bInvertChainBoneAxis : 1; // 0x115(0x1)
	unsigned char bLimitStretch : 1; // 0x115(0x1)
	unsigned char bLimitRotation : 1; // 0x115(0x1)
	unsigned char bUsePlanarLimit : 1; // 0x115(0x1)
	unsigned char bActorSpaceFakeVel : 1; // 0x115(0x1)
	unsigned char bReorientParentToChild : 1; // 0x115(0x1)
	unsigned char UnknownData_115_6 : 2; // 0x115(0x1)
	unsigned char UnknownData_116[0x0002]; // 0x116(0x2)
	float MaxDeltaTime; // 0x118(0x4)
	float RelaxationSpeedScale; // 0x11C(0x4)
	struct FRuntimeFloatCurve TrailRelaxationSpeed; // 0x120(0x88)
	struct FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor; // 0x1A8(0x30)
	struct TArray<struct FRotationLimit> RotationLimits; // 0x1D8(0x10)
	struct TArray<struct FVector> RotationOffsets; // 0x1E8(0x10)
	struct TArray<struct FAnimPhysPlanarLimit> PlanarLimits; // 0x1F8(0x10)
	float StretchLimit; // 0x208(0x4)
	struct FVector FakeVelocity; // 0x20C(0xC)
	struct FBoneReference BaseJoint; // 0x218(0x10)
	float LastBoneRotationAnimAlphaBlend; // 0x228(0x4)
	unsigned char UnknownData_22C[0x0034]; // 0x22C(0x34)
};

// ScriptStruct AnimGraphRuntime.RotationLimit
// Size : 0x18 (Inherited : 0x0)
struct FRotationLimit {
	struct FVector LimitMin; // 0x0(0xC)
	struct FVector LimitMax; // 0xC(0xC)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwistCorrectiveNode
// Size : 0x138 (Inherited : 0xC8)
struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase {
	struct FReferenceBoneFrame BaseFrame; // 0xC8(0x20)
	struct FReferenceBoneFrame TwistFrame; // 0xE8(0x20)
	struct FAxis TwistPlaneNormalAxis; // 0x108(0x10)
	float RangeMax; // 0x118(0x4)
	float RemappedMin; // 0x11C(0x4)
	float RemappedMax; // 0x120(0x4)
	struct FAnimCurveParam Curve; // 0x124(0xC)
	unsigned char UnknownData_130[0x0008]; // 0x130(0x8)
};

// ScriptStruct AnimGraphRuntime.ReferenceBoneFrame
// Size : 0x20 (Inherited : 0x0)
struct FReferenceBoneFrame {
	struct FBoneReference Bone; // 0x0(0x10)
	struct FAxis Axis; // 0x10(0x10)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoBoneIK
// Size : 0x1E0 (Inherited : 0xC8)
struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase {
	struct FBoneReference IKBone; // 0xC8(0x10)
	float StartStretchRatio; // 0xD8(0x4)
	float MaxStretchScale; // 0xDC(0x4)
	struct FVector EffectorLocation; // 0xE0(0xC)
	unsigned char UnknownData_EC[0x0004]; // 0xEC(0x4)
	struct FBoneSocketTarget EffectorTarget; // 0xF0(0x60)
	struct FVector JointTargetLocation; // 0x150(0xC)
	unsigned char UnknownData_15C[0x0004]; // 0x15C(0x4)
	struct FBoneSocketTarget JointTarget; // 0x160(0x60)
	struct FAxis TwistAxis; // 0x1C0(0x10)
	enum class EBoneControlSpace EffectorLocationSpace; // 0x1D0(0x1)
	enum class EBoneControlSpace JointTargetLocationSpace; // 0x1D1(0x1)
	unsigned char bAllowStretching : 1; // 0x1D2(0x1)
	unsigned char bTakeRotationFromEffectorSpace : 1; // 0x1D2(0x1)
	unsigned char bMaintainEffectorRelRot : 1; // 0x1D2(0x1)
	unsigned char bAllowTwist : 1; // 0x1D2(0x1)
	unsigned char UnknownData_1D2_4 : 4; // 0x1D2(0x1)
	unsigned char UnknownData_1D3[0x000D]; // 0x1D3(0xD)
};

// ScriptStruct AnimGraphRuntime.AnimNode_TwoWayBlend
// Size : 0xC8 (Inherited : 0x10)
struct FAnimNode_TwoWayBlend : FAnimNode_Base {
	struct FPoseLink A; // 0x10(0x10)
	struct FPoseLink B; // 0x20(0x10)
	enum class EAnimAlphaInputType AlphaInputType; // 0x30(0x1)
	unsigned char bAlphaBoolEnabled : 1; // 0x31(0x1)
	unsigned char UnknownData_31_1 : 2; // 0x31(0x1)
	unsigned char bResetChildOnActivation : 1; // 0x31(0x1)
	unsigned char UnknownData_31_4 : 4; // 0x31(0x1)
	unsigned char UnknownData_32[0x0002]; // 0x32(0x2)
	float Alpha; // 0x34(0x4)
	struct FInputScaleBias AlphaScaleBias; // 0x38(0x8)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x40(0x48)
	struct FName AlphaCurveName; // 0x88(0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x90(0x30)
	unsigned char UnknownData_C0[0x0008]; // 0xC0(0x8)
};

// ScriptStruct AnimGraphRuntime.AnimSequencerInstanceProxy
// Size : 0x930 (Inherited : 0x6E0)
struct FAnimSequencerInstanceProxy : FAnimInstanceProxy {
	unsigned char UnknownData_6E0[0x0250]; // 0x6E0(0x250)
};

// ScriptStruct AnimGraphRuntime.PositionHistory
// Size : 0x30 (Inherited : 0x0)
struct FPositionHistory {
	struct TArray<struct FVector> Positions; // 0x0(0x10)
	float Range; // 0x10(0x4)
	unsigned char UnknownData_14[0x001C]; // 0x14(0x1C)
};

// ScriptStruct AnimGraphRuntime.RBFEntry
// Size : 0x10 (Inherited : 0x0)
struct FRBFEntry {
	struct TArray<float> Values; // 0x0(0x10)
};

// ScriptStruct AnimGraphRuntime.RBFTarget
// Size : 0xA0 (Inherited : 0x10)
struct FRBFTarget : FRBFEntry {
	float ScaleFactor; // 0x10(0x4)
	bool bApplyCustomCurve; // 0x14(0x1)
	unsigned char UnknownData_15[0x0003]; // 0x15(0x3)
	struct FRichCurve CustomCurve; // 0x18(0x80)
	enum class ERBFDistanceMethod DistanceMethod; // 0x98(0x1)
	enum class ERBFFunctionType FunctionType; // 0x99(0x1)
	unsigned char UnknownData_9A[0x0006]; // 0x9A(0x6)
};

