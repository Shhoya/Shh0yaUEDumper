// ScriptStruct Engine.DistributionLookupTable
// Size : 0x20 (Inherited : 0x0)
struct FDistributionLookupTable {
	float TimeScale; // 0x0(0x4)
	float TimeBias; // 0x4(0x4)
	struct TArray<float> Values; // 0x8(0x10)
	enum class None Op; // 0x18(0x1)
	enum class None EntryCount; // 0x19(0x1)
	enum class None EntryStride; // 0x1A(0x1)
	enum class None SubEntryStride; // 0x1B(0x1)
	enum class None LockFlag; // 0x1C(0x1)
	unsigned char UnknownData_1D[0x0003]; // 0x1D(0x3)
};

// ScriptStruct Engine.RawDistribution
// Size : 0x20 (Inherited : 0x0)
struct FRawDistribution {
	struct FDistributionLookupTable Table; // 0x0(0x20)
};

// ScriptStruct Engine.FloatDistribution
// Size : 0x20 (Inherited : 0x0)
struct FFloatDistribution {
	struct FDistributionLookupTable Table; // 0x0(0x20)
};

// ScriptStruct Engine.VectorDistribution
// Size : 0x20 (Inherited : 0x0)
struct FVectorDistribution {
	struct FDistributionLookupTable Table; // 0x0(0x20)
};

// ScriptStruct Engine.Vector4Distribution
// Size : 0x20 (Inherited : 0x0)
struct FVector4Distribution {
	struct FDistributionLookupTable Table; // 0x0(0x20)
};

// ScriptStruct Engine.FloatRK4SpringInterpolator
// Size : 0x8 (Inherited : 0x0)
struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; // 0x0(0x4)
	float DampeningRatio; // 0x4(0x4)
};

// ScriptStruct Engine.VectorRK4SpringInterpolator
// Size : 0x8 (Inherited : 0x0)
struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; // 0x0(0x4)
	float DampeningRatio; // 0x4(0x4)
};

// ScriptStruct Engine.FormatArgumentData
// Size : 0x40 (Inherited : 0x0)
struct FFormatArgumentData {
	struct FString ArgumentName; // 0x0(0x10)
	enum class EFormatArgumentType ArgumentValueType; // 0x10(0x1)
	unsigned char UnknownData_11[0x0007]; // 0x11(0x7)
	struct FText ArgumentValue; // 0x18(0x18)
	int32_t ArgumentValueInt; // 0x30(0x4)
	float ArgumentValueFloat; // 0x34(0x4)
	enum class ETextGender ArgumentValueGender; // 0x38(0x1)
	unsigned char UnknownData_39[0x0007]; // 0x39(0x7)
};

// ScriptStruct Engine.ExpressionInput
// Size : 0xC (Inherited : 0x0)
struct FExpressionInput {
	int32_t OutputIndex; // 0x0(0x4)
	struct FName ExpressionName; // 0x4(0x8)
};

// ScriptStruct Engine.MaterialAttributesInput
// Size : 0x10 (Inherited : 0xC)
struct FMaterialAttributesInput : FExpressionInput {
	int32_t PropertyConnectedBitmask; // 0xC(0x4)
};

// ScriptStruct Engine.ExpressionOutput
// Size : 0x8 (Inherited : 0x0)
struct FExpressionOutput {
	struct FName OutputName; // 0x0(0x8)
};

// ScriptStruct Engine.MaterialInput
// Size : 0xC (Inherited : 0x0)
struct FMaterialInput {
	int32_t OutputIndex; // 0x0(0x4)
	struct FName ExpressionName; // 0x4(0x8)
};

// ScriptStruct Engine.ColorMaterialInput
// Size : 0xC (Inherited : 0xC)
struct FColorMaterialInput : FMaterialInput {
};

// ScriptStruct Engine.ScalarMaterialInput
// Size : 0xC (Inherited : 0xC)
struct FScalarMaterialInput : FMaterialInput {
};

// ScriptStruct Engine.ShadingModelMaterialInput
// Size : 0xC (Inherited : 0xC)
struct FShadingModelMaterialInput : FMaterialInput {
};

// ScriptStruct Engine.VectorMaterialInput
// Size : 0xC (Inherited : 0xC)
struct FVectorMaterialInput : FMaterialInput {
};

// ScriptStruct Engine.Vector2MaterialInput
// Size : 0xC (Inherited : 0xC)
struct FVector2MaterialInput : FMaterialInput {
};

// ScriptStruct Engine.HitResult
// Size : 0x88 (Inherited : 0x0)
struct FHitResult {
	unsigned char bBlockingHit : 1; // 0x0(0x1)
	unsigned char bStartPenetrating : 1; // 0x0(0x1)
	unsigned char UnknownData_0_2 : 6; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	int32_t FaceIndex; // 0x4(0x4)
	float Time; // 0x8(0x4)
	float Distance; // 0xC(0x4)
	struct FVector_NetQuantize Location; // 0x10(0xC)
	struct FVector_NetQuantize ImpactPoint; // 0x1C(0xC)
	struct FVector_NetQuantizeNormal Normal; // 0x28(0xC)
	struct FVector_NetQuantizeNormal ImpactNormal; // 0x34(0xC)
	struct FVector_NetQuantize TraceStart; // 0x40(0xC)
	struct FVector_NetQuantize TraceEnd; // 0x4C(0xC)
	float PenetrationDepth; // 0x58(0x4)
	int32_t Item; // 0x5C(0x4)
	struct FWeakObjectPtr<struct UPhysicalMaterial> PhysMaterial; // 0x60(0x8)
	struct FWeakObjectPtr<struct AActor> Actor; // 0x68(0x8)
	struct FWeakObjectPtr<struct UPrimitiveComponent> Component; // 0x70(0x8)
	struct FName BoneName; // 0x78(0x8)
	struct FName MyBoneName; // 0x80(0x8)
};

// ScriptStruct Engine.Vector_NetQuantize
// Size : 0xC (Inherited : 0xC)
struct FVector_NetQuantize : FVector {
};

// ScriptStruct Engine.Vector_NetQuantizeNormal
// Size : 0xC (Inherited : 0xC)
struct FVector_NetQuantizeNormal : FVector {
};

// ScriptStruct Engine.BranchingPointNotifyPayload
// Size : 0x20 (Inherited : 0x0)
struct FBranchingPointNotifyPayload {
	unsigned char UnknownData_0[0x0020]; // 0x0(0x20)
};

// ScriptStruct Engine.SimpleMemberReference
// Size : 0x20 (Inherited : 0x0)
struct FSimpleMemberReference {
	struct UObject* MemberParent; // 0x0(0x8)
	struct FName MemberName; // 0x8(0x8)
	struct FGuid MemberGuid; // 0x10(0x10)
};

// ScriptStruct Engine.TickFunction
// Size : 0x28 (Inherited : 0x0)
struct FTickFunction {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
	enum class ETickingGroup TickGroup; // 0x8(0x1)
	enum class ETickingGroup EndTickGroup; // 0x9(0x1)
	unsigned char bTickEvenWhenPaused : 1; // 0xA(0x1)
	unsigned char bCanEverTick : 1; // 0xA(0x1)
	unsigned char bStartWithTickEnabled : 1; // 0xA(0x1)
	unsigned char bAllowTickOnDedicatedServer : 1; // 0xA(0x1)
	unsigned char UnknownData_A_4 : 4; // 0xA(0x1)
	unsigned char UnknownData_B[0x0001]; // 0xB(0x1)
	float TickInterval; // 0xC(0x4)
	unsigned char UnknownData_10[0x0018]; // 0x10(0x18)
};

// ScriptStruct Engine.ActorComponentTickFunction
// Size : 0x30 (Inherited : 0x28)
struct FActorComponentTickFunction : FTickFunction {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// ScriptStruct Engine.SubtitleCue
// Size : 0x20 (Inherited : 0x0)
struct FSubtitleCue {
	struct FText Text; // 0x0(0x18)
	float Time; // 0x18(0x4)
	unsigned char UnknownData_1C[0x0004]; // 0x1C(0x4)
};

// ScriptStruct Engine.InterpControlPoint
// Size : 0x1C (Inherited : 0x0)
struct FInterpControlPoint {
	struct FVector PositionControlPoint; // 0x0(0xC)
	bool bPositionIsRelative; // 0xC(0x1)
	unsigned char UnknownData_D[0x000F]; // 0xD(0xF)
};

// ScriptStruct Engine.PlatformInterfaceDelegateResult
// Size : 0x38 (Inherited : 0x0)
struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; // 0x0(0x1)
	unsigned char UnknownData_1[0x0007]; // 0x1(0x7)
	struct FPlatformInterfaceData Data; // 0x8(0x30)
};

// ScriptStruct Engine.PlatformInterfaceData
// Size : 0x30 (Inherited : 0x0)
struct FPlatformInterfaceData {
	struct FName DataName; // 0x0(0x8)
	enum class EPlatformInterfaceDataType Type; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
	int32_t IntValue; // 0xC(0x4)
	float FloatValue; // 0x10(0x4)
	unsigned char UnknownData_14[0x0004]; // 0x14(0x4)
	struct FString StringValue; // 0x18(0x10)
	struct UObject* ObjectValue; // 0x28(0x8)
};

// ScriptStruct Engine.DebugFloatHistory
// Size : 0x20 (Inherited : 0x0)
struct FDebugFloatHistory {
	struct TArray<float> Samples; // 0x0(0x10)
	float MaxSamples; // 0x10(0x4)
	float MinValue; // 0x14(0x4)
	float MaxValue; // 0x18(0x4)
	bool bAutoAdjustMinMax; // 0x1C(0x1)
	unsigned char UnknownData_1D[0x0003]; // 0x1D(0x3)
};

// ScriptStruct Engine.LatentActionInfo
// Size : 0x18 (Inherited : 0x0)
struct FLatentActionInfo {
	int32_t Linkage; // 0x0(0x4)
	int32_t UUID; // 0x4(0x4)
	struct FName ExecutionFunction; // 0x8(0x8)
	struct UObject* CallbackTarget; // 0x10(0x8)
};

// ScriptStruct Engine.TimerHandle
// Size : 0x8 (Inherited : 0x0)
struct FTimerHandle {
	uint64_t Handle; // 0x0(0x8)
};

// ScriptStruct Engine.CollisionProfileName
// Size : 0x8 (Inherited : 0x0)
struct FCollisionProfileName {
	struct FName Name; // 0x0(0x8)
};

// ScriptStruct Engine.GenericStruct
// Size : 0x4 (Inherited : 0x0)
struct FGenericStruct {
	int32_t Data; // 0x0(0x4)
};

// ScriptStruct Engine.UserActivity
// Size : 0x18 (Inherited : 0x0)
struct FUserActivity {
	struct FString ActionName; // 0x0(0x10)
	unsigned char UnknownData_10[0x0008]; // 0x10(0x8)
};

// ScriptStruct Engine.WalkableSlopeOverride
// Size : 0x10 (Inherited : 0x0)
struct FWalkableSlopeOverride {
	enum class EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float WalkableSlopeAngle; // 0x4(0x4)
	unsigned char UnknownData_8[0x0008]; // 0x8(0x8)
};

// ScriptStruct Engine.BodyInstance
// Size : 0x130 (Inherited : 0x0)
struct FBodyInstance {
	unsigned char UnknownData_0[0x0006]; // 0x0(0x6)
	enum class ECollisionChannel ObjectType; // 0x6(0x1)
	unsigned char UnknownData_7[0x0001]; // 0x7(0x1)
	enum class ECollisionEnabled CollisionEnabled; // 0x8(0x1)
	unsigned char UnknownData_9[0x0001]; // 0x9(0x1)
	enum class ESleepFamily SleepFamily; // 0xA(0x1)
	enum class EDOFMode DOFMode; // 0xB(0x1)
	unsigned char bUseCCD : 1; // 0xC(0x1)
	unsigned char bIgnoreAnalyticCollisions : 1; // 0xC(0x1)
	unsigned char bNotifyRigidBodyCollision : 1; // 0xC(0x1)
	unsigned char UnknownData_C_3 : 1; // 0xC(0x1)
	unsigned char bSimulatePhysics : 1; // 0xC(0x1)
	unsigned char bOverrideMass : 1; // 0xC(0x1)
	unsigned char bEnableGravity : 1; // 0xC(0x1)
	unsigned char bAutoWeld : 1; // 0xC(0x1)
	unsigned char bStartAwake : 1; // 0xD(0x1)
	unsigned char bGenerateWakeEvents : 1; // 0xD(0x1)
	unsigned char bUpdateMassWhenScaleChanges : 1; // 0xD(0x1)
	unsigned char bLockTranslation : 1; // 0xD(0x1)
	unsigned char bLockRotation : 1; // 0xD(0x1)
	unsigned char bLockXTranslation : 1; // 0xD(0x1)
	unsigned char bLockYTranslation : 1; // 0xD(0x1)
	unsigned char bLockZTranslation : 1; // 0xD(0x1)
	unsigned char bLockXRotation : 1; // 0xE(0x1)
	unsigned char bLockYRotation : 1; // 0xE(0x1)
	unsigned char bLockZRotation : 1; // 0xE(0x1)
	unsigned char bOverrideMaxAngularVelocity : 1; // 0xE(0x1)
	unsigned char UnknownData_E_4 : 2; // 0xE(0x1)
	unsigned char bOverrideMaxDepenetrationVelocity : 1; // 0xE(0x1)
	unsigned char bOverrideWalkableSlopeOnInstance : 1; // 0xE(0x1)
	unsigned char bInterpolateWhenSubStepping : 1; // 0xF(0x1)
	unsigned char UnknownData_F_1 : 7; // 0xF(0x1)
	unsigned char UnknownData_10[0x000C]; // 0x10(0xC)
	struct FName CollisionProfileName; // 0x1C(0x8)
	enum class None PositionSolverIterationCount; // 0x24(0x1)
	enum class None VelocitySolverIterationCount; // 0x25(0x1)
	unsigned char UnknownData_26[0x0002]; // 0x26(0x2)
	struct FCollisionResponse CollisionResponses; // 0x28(0x30)
	float MaxDepenetrationVelocity; // 0x58(0x4)
	float MassInKgOverride; // 0x5C(0x4)
	unsigned char UnknownData_60[0x0008]; // 0x60(0x8)
	float LinearDamping; // 0x68(0x4)
	float AngularDamping; // 0x6C(0x4)
	struct FVector CustomDOFPlaneNormal; // 0x70(0xC)
	struct FVector COMNudge; // 0x7C(0xC)
	float MassScale; // 0x88(0x4)
	struct FVector InertiaTensorScale; // 0x8C(0xC)
	unsigned char UnknownData_98[0x0010]; // 0x98(0x10)
	struct FWalkableSlopeOverride WalkableSlopeOverride; // 0xA8(0x10)
	struct UPhysicalMaterial* PhysMaterialOverride; // 0xB8(0x8)
	float MaxAngularVelocity; // 0xC0(0x4)
	float CustomSleepThresholdMultiplier; // 0xC4(0x4)
	float StabilizationThresholdMultiplier; // 0xC8(0x4)
	float PhysicsBlendWeight; // 0xCC(0x4)
	unsigned char UnknownData_D0[0x0060]; // 0xD0(0x60)
};

// ScriptStruct Engine.CollisionResponse
// Size : 0x30 (Inherited : 0x0)
struct FCollisionResponse {
	struct FCollisionResponseContainer ResponseToChannels; // 0x0(0x20)
	struct TArray<struct FResponseChannel> ResponseArray; // 0x20(0x10)
};

// ScriptStruct Engine.ResponseChannel
// Size : 0xC (Inherited : 0x0)
struct FResponseChannel {
	struct FName Channel; // 0x0(0x8)
	enum class ECollisionResponse Response; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
};

// ScriptStruct Engine.CollisionResponseContainer
// Size : 0x20 (Inherited : 0x0)
struct FCollisionResponseContainer {
	enum class ECollisionResponse WorldStatic; // 0x0(0x1)
	enum class ECollisionResponse WorldDynamic; // 0x1(0x1)
	enum class ECollisionResponse Pawn; // 0x2(0x1)
	enum class ECollisionResponse Visibility; // 0x3(0x1)
	enum class ECollisionResponse Camera; // 0x4(0x1)
	enum class ECollisionResponse PhysicsBody; // 0x5(0x1)
	enum class ECollisionResponse Vehicle; // 0x6(0x1)
	enum class ECollisionResponse Destructible; // 0x7(0x1)
	enum class ECollisionResponse EngineTraceChannel1; // 0x8(0x1)
	enum class ECollisionResponse EngineTraceChannel2; // 0x9(0x1)
	enum class ECollisionResponse EngineTraceChannel3; // 0xA(0x1)
	enum class ECollisionResponse EngineTraceChannel4; // 0xB(0x1)
	enum class ECollisionResponse EngineTraceChannel5; // 0xC(0x1)
	enum class ECollisionResponse EngineTraceChannel6; // 0xD(0x1)
	enum class ECollisionResponse GameTraceChannel1; // 0xE(0x1)
	enum class ECollisionResponse GameTraceChannel2; // 0xF(0x1)
	enum class ECollisionResponse GameTraceChannel3; // 0x10(0x1)
	enum class ECollisionResponse GameTraceChannel4; // 0x11(0x1)
	enum class ECollisionResponse GameTraceChannel5; // 0x12(0x1)
	enum class ECollisionResponse GameTraceChannel6; // 0x13(0x1)
	enum class ECollisionResponse GameTraceChannel7; // 0x14(0x1)
	enum class ECollisionResponse GameTraceChannel8; // 0x15(0x1)
	enum class ECollisionResponse GameTraceChannel9; // 0x16(0x1)
	enum class ECollisionResponse GameTraceChannel10; // 0x17(0x1)
	enum class ECollisionResponse GameTraceChannel11; // 0x18(0x1)
	enum class ECollisionResponse GameTraceChannel12; // 0x19(0x1)
	enum class ECollisionResponse GameTraceChannel13; // 0x1A(0x1)
	enum class ECollisionResponse GameTraceChannel14; // 0x1B(0x1)
	enum class ECollisionResponse GameTraceChannel15; // 0x1C(0x1)
	enum class ECollisionResponse GameTraceChannel16; // 0x1D(0x1)
	enum class ECollisionResponse GameTraceChannel17; // 0x1E(0x1)
	enum class ECollisionResponse GameTraceChannel18; // 0x1F(0x1)
};

// ScriptStruct Engine.CustomPrimitiveData
// Size : 0x10 (Inherited : 0x0)
struct FCustomPrimitiveData {
	struct TArray<float> Data; // 0x0(0x10)
};

// ScriptStruct Engine.LightingChannels
// Size : 0x1 (Inherited : 0x0)
struct FLightingChannels {
	unsigned char bChannel0 : 1; // 0x0(0x1)
	unsigned char bChannel1 : 1; // 0x0(0x1)
	unsigned char bChannel2 : 1; // 0x0(0x1)
	unsigned char UnknownData_0_3 : 5; // 0x0(0x1)
};

// ScriptStruct Engine.PerPlatformFloat
// Size : 0x4 (Inherited : 0x0)
struct FPerPlatformFloat {
	float Default; // 0x0(0x4)
};

// ScriptStruct Engine.PerPlatformInt
// Size : 0x4 (Inherited : 0x0)
struct FPerPlatformInt {
	int32_t Default; // 0x0(0x4)
};

// ScriptStruct Engine.PerPlatformBool
// Size : 0x1 (Inherited : 0x0)
struct FPerPlatformBool {
	bool Default; // 0x0(0x1)
};

// ScriptStruct Engine.KeyHandleLookupTable
// Size : 0x60 (Inherited : 0x0)
struct FKeyHandleLookupTable {
	unsigned char UnknownData_0[0x0060]; // 0x0(0x60)
};

// ScriptStruct Engine.RepAttachment
// Size : 0x40 (Inherited : 0x0)
struct FRepAttachment {
	struct AActor* AttachParent; // 0x0(0x8)
	struct FVector_NetQuantize100 LocationOffset; // 0x8(0xC)
	struct FVector_NetQuantize100 RelativeScale3D; // 0x14(0xC)
	struct FRotator RotationOffset; // 0x20(0xC)
	struct FName AttachSocket; // 0x2C(0x8)
	unsigned char UnknownData_34[0x0004]; // 0x34(0x4)
	struct USceneComponent* AttachComponent; // 0x38(0x8)
};

// ScriptStruct Engine.Vector_NetQuantize100
// Size : 0xC (Inherited : 0xC)
struct FVector_NetQuantize100 : FVector {
};

// ScriptStruct Engine.RepMovement
// Size : 0x34 (Inherited : 0x0)
struct FRepMovement {
	struct FVector LinearVelocity; // 0x0(0xC)
	struct FVector AngularVelocity; // 0xC(0xC)
	struct FVector Location; // 0x18(0xC)
	struct FRotator Rotation; // 0x24(0xC)
	unsigned char bSimulatedPhysicSleep : 1; // 0x30(0x1)
	unsigned char bRepPhysics : 1; // 0x30(0x1)
	unsigned char UnknownData_30_2 : 6; // 0x30(0x1)
	enum class EVectorQuantization LocationQuantizationLevel; // 0x31(0x1)
	enum class EVectorQuantization VelocityQuantizationLevel; // 0x32(0x1)
	enum class ERotatorQuantization RotationQuantizationLevel; // 0x33(0x1)
};

// ScriptStruct Engine.ActorTickFunction
// Size : 0x30 (Inherited : 0x28)
struct FActorTickFunction : FTickFunction {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// ScriptStruct Engine.UniqueNetIdRepl
// Size : 0x28 (Inherited : 0x1)
struct FUniqueNetIdRepl : FUniqueNetIdWrapper {
	unsigned char UnknownData_1[0x0017]; // 0x1(0x17)
	struct TArray<enum class None> ReplicationBytes; // 0x18(0x10)
};

// ScriptStruct Engine.AnimNode_Base
// Size : 0x10 (Inherited : 0x0)
struct FAnimNode_Base {
	unsigned char UnknownData_0[0x0010]; // 0x0(0x10)
};

// ScriptStruct Engine.InputScaleBiasClamp
// Size : 0x30 (Inherited : 0x0)
struct FInputScaleBiasClamp {
	bool bMapRange; // 0x0(0x1)
	bool bClampResult; // 0x1(0x1)
	bool bInterpResult; // 0x2(0x1)
	unsigned char UnknownData_3[0x0001]; // 0x3(0x1)
	struct FInputRange InRange; // 0x4(0x8)
	struct FInputRange OutRange; // 0xC(0x8)
	float Scale; // 0x14(0x4)
	float Bias; // 0x18(0x4)
	float ClampMin; // 0x1C(0x4)
	float ClampMax; // 0x20(0x4)
	float InterpSpeedIncreasing; // 0x24(0x4)
	float InterpSpeedDecreasing; // 0x28(0x4)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
};

// ScriptStruct Engine.InputRange
// Size : 0x8 (Inherited : 0x0)
struct FInputRange {
	float Min; // 0x0(0x4)
	float Max; // 0x4(0x4)
};

// ScriptStruct Engine.InputAlphaBoolBlend
// Size : 0x48 (Inherited : 0x0)
struct FInputAlphaBoolBlend {
	float BlendInTime; // 0x0(0x4)
	float BlendOutTime; // 0x4(0x4)
	enum class EAlphaBlendOption BlendOption; // 0x8(0x1)
	bool bInitialized; // 0x9(0x1)
	unsigned char UnknownData_A[0x0006]; // 0xA(0x6)
	struct UCurveFloat* CustomCurve; // 0x10(0x8)
	struct FAlphaBlend AlphaBlend; // 0x18(0x30)
};

// ScriptStruct Engine.AlphaBlend
// Size : 0x30 (Inherited : 0x0)
struct FAlphaBlend {
	struct UCurveFloat* CustomCurve; // 0x0(0x8)
	float BlendTime; // 0x8(0x4)
	unsigned char UnknownData_C[0x0018]; // 0xC(0x18)
	enum class EAlphaBlendOption BlendOption; // 0x24(0x1)
	unsigned char UnknownData_25[0x000B]; // 0x25(0xB)
};

// ScriptStruct Engine.InputScaleBias
// Size : 0x8 (Inherited : 0x0)
struct FInputScaleBias {
	float Scale; // 0x0(0x4)
	float Bias; // 0x4(0x4)
};

// ScriptStruct Engine.PoseLinkBase
// Size : 0x10 (Inherited : 0x0)
struct FPoseLinkBase {
	int32_t LinkID; // 0x0(0x4)
	unsigned char UnknownData_4[0x000C]; // 0x4(0xC)
};

// ScriptStruct Engine.ComponentSpacePoseLink
// Size : 0x10 (Inherited : 0x10)
struct FComponentSpacePoseLink : FPoseLinkBase {
};

// ScriptStruct Engine.AnimInstanceProxy
// Size : 0x6E0 (Inherited : 0x0)
struct FAnimInstanceProxy {
	unsigned char UnknownData_0[0x06E0]; // 0x0(0x6E0)
};

// ScriptStruct Engine.RuntimeFloatCurve
// Size : 0x88 (Inherited : 0x0)
struct FRuntimeFloatCurve {
	struct FRichCurve EditorCurveData; // 0x0(0x80)
	struct UCurveFloat* ExternalCurve; // 0x80(0x8)
};

// ScriptStruct Engine.IndexedCurve
// Size : 0x68 (Inherited : 0x0)
struct FIndexedCurve {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
	struct FKeyHandleMap KeyHandlesToIndices; // 0x8(0x60)
};

// ScriptStruct Engine.KeyHandleMap
// Size : 0x60 (Inherited : 0x0)
struct FKeyHandleMap {
	unsigned char UnknownData_0[0x0060]; // 0x0(0x60)
};

// ScriptStruct Engine.RealCurve
// Size : 0x70 (Inherited : 0x68)
struct FRealCurve : FIndexedCurve {
	float DefaultValue; // 0x68(0x4)
	enum class ERichCurveExtrapolation PreInfinityExtrap; // 0x6C(0x1)
	enum class ERichCurveExtrapolation PostInfinityExtrap; // 0x6D(0x1)
	unsigned char UnknownData_6E[0x0002]; // 0x6E(0x2)
};

// ScriptStruct Engine.RichCurve
// Size : 0x80 (Inherited : 0x70)
struct FRichCurve : FRealCurve {
	struct TArray<struct FRichCurveKey> Keys; // 0x70(0x10)
};

// ScriptStruct Engine.RichCurveKey
// Size : 0x1C (Inherited : 0x0)
struct FRichCurveKey {
	enum class ERichCurveInterpMode InterpMode; // 0x0(0x1)
	enum class ERichCurveTangentMode TangentMode; // 0x1(0x1)
	enum class ERichCurveTangentWeightMode TangentWeightMode; // 0x2(0x1)
	unsigned char UnknownData_3[0x0001]; // 0x3(0x1)
	float Time; // 0x4(0x4)
	float Value; // 0x8(0x4)
	float ArriveTangent; // 0xC(0x4)
	float ArriveTangentWeight; // 0x10(0x4)
	float LeaveTangent; // 0x14(0x4)
	float LeaveTangentWeight; // 0x18(0x4)
};

// ScriptStruct Engine.PoseLink
// Size : 0x10 (Inherited : 0x10)
struct FPoseLink : FPoseLinkBase {
};

// ScriptStruct Engine.TableRowBase
// Size : 0x8 (Inherited : 0x0)
struct FTableRowBase {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
};

// ScriptStruct Engine.AnimNode_AssetPlayerBase
// Size : 0x30 (Inherited : 0x10)
struct FAnimNode_AssetPlayerBase : FAnimNode_Base {
	int32_t GroupIndex; // 0x10(0x4)
	enum class EAnimGroupRole GroupRole; // 0x14(0x1)
	bool bIgnoreForRelevancyTest; // 0x15(0x1)
	unsigned char UnknownData_16[0x0002]; // 0x16(0x2)
	float BlendWeight; // 0x18(0x4)
	float InternalTimeAccumulator; // 0x1C(0x4)
	unsigned char UnknownData_20[0x0010]; // 0x20(0x10)
};

// ScriptStruct Engine.BoneReference
// Size : 0x10 (Inherited : 0x0)
struct FBoneReference {
	struct FName BoneName; // 0x0(0x8)
	unsigned char UnknownData_8[0x0008]; // 0x8(0x8)
};

// ScriptStruct Engine.PerBoneBlendWeight
// Size : 0x8 (Inherited : 0x0)
struct FPerBoneBlendWeight {
	int32_t SourceIndex; // 0x0(0x4)
	float BlendWeight; // 0x4(0x4)
};

// ScriptStruct Engine.InputBlendPose
// Size : 0x10 (Inherited : 0x0)
struct FInputBlendPose {
	struct TArray<struct FBranchFilter> BranchFilters; // 0x0(0x10)
};

// ScriptStruct Engine.BranchFilter
// Size : 0xC (Inherited : 0x0)
struct FBranchFilter {
	struct FName BoneName; // 0x0(0x8)
	int32_t BlendDepth; // 0x8(0x4)
};

// ScriptStruct Engine.PoseSnapshot
// Size : 0x38 (Inherited : 0x0)
struct FPoseSnapshot {
	struct TArray<struct FTransform> LocalTransforms; // 0x0(0x10)
	struct TArray<struct FName> BoneNames; // 0x10(0x10)
	struct FName SkeletalMeshName; // 0x20(0x8)
	struct FName SnapshotName; // 0x28(0x8)
	bool bIsValid; // 0x30(0x1)
	unsigned char UnknownData_31[0x0007]; // 0x31(0x7)
};

// ScriptStruct Engine.SolverIterations
// Size : 0x18 (Inherited : 0x0)
struct FSolverIterations {
	int32_t SolverIterations; // 0x0(0x4)
	int32_t JointIterations; // 0x4(0x4)
	int32_t CollisionIterations; // 0x8(0x4)
	int32_t SolverPushOutIterations; // 0xC(0x4)
	int32_t JointPushOutIterations; // 0x10(0x4)
	int32_t CollisionPushOutIterations; // 0x14(0x4)
};

// ScriptStruct Engine.AnimNode_Root
// Size : 0x30 (Inherited : 0x10)
struct FAnimNode_Root : FAnimNode_Base {
	struct FPoseLink Result; // 0x10(0x10)
	struct FName Name; // 0x20(0x8)
	struct FName Group; // 0x28(0x8)
};

// ScriptStruct Engine.AnimCurveParam
// Size : 0xC (Inherited : 0x0)
struct FAnimCurveParam {
	struct FName Name; // 0x0(0x8)
	unsigned char UnknownData_8[0x0004]; // 0x8(0x4)
};

// ScriptStruct Engine.ActorComponentInstanceData
// Size : 0x58 (Inherited : 0x0)
struct FActorComponentInstanceData {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
	struct UObject* SourceComponentTemplate; // 0x8(0x8)
	enum class EComponentCreationMethod SourceComponentCreationMethod; // 0x10(0x1)
	unsigned char UnknownData_11[0x0003]; // 0x11(0x3)
	int32_t SourceComponentTypeSerializedIndex; // 0x14(0x4)
	struct TArray<enum class None> SavedProperties; // 0x18(0x10)
	struct TArray<struct FActorComponentDuplicatedObjectData> DuplicatedObjects; // 0x28(0x10)
	struct TArray<struct UObject*> ReferencedObjects; // 0x38(0x10)
	struct TArray<struct FName> ReferencedNames; // 0x48(0x10)
};

// ScriptStruct Engine.ActorComponentDuplicatedObjectData
// Size : 0x10 (Inherited : 0x0)
struct FActorComponentDuplicatedObjectData {
	unsigned char UnknownData_0[0x0010]; // 0x0(0x10)
};

// ScriptStruct Engine.SceneComponentInstanceData
// Size : 0xA8 (Inherited : 0x58)
struct FSceneComponentInstanceData : FActorComponentInstanceData {
	struct TMap<struct USceneComponent*, struct FTransform> AttachedInstanceComponents; // 0x58(0x50)
};

// ScriptStruct Engine.DirectoryPath
// Size : 0x10 (Inherited : 0x0)
struct FDirectoryPath {
	struct FString Path; // 0x0(0x10)
};

// ScriptStruct Engine.KAggregateGeom
// Size : 0x58 (Inherited : 0x0)
struct FKAggregateGeom {
	struct TArray<struct FKSphereElem> SphereElems; // 0x0(0x10)
	struct TArray<struct FKBoxElem> BoxElems; // 0x10(0x10)
	struct TArray<struct FKSphylElem> SphylElems; // 0x20(0x10)
	struct TArray<struct FKConvexElem> ConvexElems; // 0x30(0x10)
	struct TArray<struct FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40(0x10)
	unsigned char UnknownData_50[0x0008]; // 0x50(0x8)
};

// ScriptStruct Engine.KShapeElem
// Size : 0x30 (Inherited : 0x0)
struct FKShapeElem {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
	float RestOffset; // 0x8(0x4)
	struct FName Name; // 0xC(0x8)
	unsigned char UnknownData_14[0x0004]; // 0x14(0x4)
	unsigned char bContributeToMass : 1; // 0x18(0x1)
	unsigned char UnknownData_18_1 : 7; // 0x18(0x1)
	unsigned char UnknownData_19[0x0017]; // 0x19(0x17)
};

// ScriptStruct Engine.KTaperedCapsuleElem
// Size : 0x58 (Inherited : 0x30)
struct FKTaperedCapsuleElem : FKShapeElem {
	struct FVector Center; // 0x30(0xC)
	struct FRotator Rotation; // 0x3C(0xC)
	float Radius0; // 0x48(0x4)
	float Radius1; // 0x4C(0x4)
	float Length; // 0x50(0x4)
	unsigned char UnknownData_54[0x0004]; // 0x54(0x4)
};

// ScriptStruct Engine.KConvexElem
// Size : 0xB0 (Inherited : 0x30)
struct FKConvexElem : FKShapeElem {
	struct TArray<struct FVector> VertexData; // 0x30(0x10)
	struct TArray<int32_t> IndexData; // 0x40(0x10)
	struct FBox ElemBox; // 0x50(0x1C)
	unsigned char UnknownData_6C[0x0004]; // 0x6C(0x4)
	struct FTransform Transform; // 0x70(0x30)
	unsigned char UnknownData_A0[0x0010]; // 0xA0(0x10)
};

// ScriptStruct Engine.KSphylElem
// Size : 0x50 (Inherited : 0x30)
struct FKSphylElem : FKShapeElem {
	struct FVector Center; // 0x30(0xC)
	struct FRotator Rotation; // 0x3C(0xC)
	float Radius; // 0x48(0x4)
	float Length; // 0x4C(0x4)
};

// ScriptStruct Engine.KBoxElem
// Size : 0x58 (Inherited : 0x30)
struct FKBoxElem : FKShapeElem {
	struct FVector Center; // 0x30(0xC)
	struct FRotator Rotation; // 0x3C(0xC)
	float X; // 0x48(0x4)
	float Y; // 0x4C(0x4)
	float Z; // 0x50(0x4)
	unsigned char UnknownData_54[0x0004]; // 0x54(0x4)
};

// ScriptStruct Engine.KSphereElem
// Size : 0x40 (Inherited : 0x30)
struct FKSphereElem : FKShapeElem {
	struct FVector Center; // 0x30(0xC)
	float Radius; // 0x3C(0x4)
};

// ScriptStruct Engine.AnimationGroupReference
// Size : 0xC (Inherited : 0x0)
struct FAnimationGroupReference {
	struct FName GroupName; // 0x0(0x8)
	enum class EAnimGroupRole GroupRole; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
};

// ScriptStruct Engine.RootMotionMovementParams
// Size : 0x40 (Inherited : 0x0)
struct FRootMotionMovementParams {
	bool bHasRootMotion; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float BlendWeight; // 0x4(0x4)
	unsigned char UnknownData_8[0x0008]; // 0x8(0x8)
	struct FTransform RootMotionTransform; // 0x10(0x30)
};

// ScriptStruct Engine.AnimGroupInstance
// Size : 0x70 (Inherited : 0x0)
struct FAnimGroupInstance {
	unsigned char UnknownData_0[0x0070]; // 0x0(0x70)
};

// ScriptStruct Engine.AnimTickRecord
// Size : 0x48 (Inherited : 0x0)
struct FAnimTickRecord {
	struct UAnimationAsset* SourceAsset; // 0x0(0x8)
	unsigned char UnknownData_8[0x0040]; // 0x8(0x40)
};

// ScriptStruct Engine.MarkerSyncAnimPosition
// Size : 0x14 (Inherited : 0x0)
struct FMarkerSyncAnimPosition {
	struct FName PreviousMarkerName; // 0x0(0x8)
	struct FName NextMarkerName; // 0x8(0x8)
	float PositionBetweenMarkers; // 0x10(0x4)
};

// ScriptStruct Engine.BlendFilter
// Size : 0x78 (Inherited : 0x0)
struct FBlendFilter {
	unsigned char UnknownData_0[0x0078]; // 0x0(0x78)
};

// ScriptStruct Engine.BlendSampleData
// Size : 0x40 (Inherited : 0x0)
struct FBlendSampleData {
	int32_t SampleDataIndex; // 0x0(0x4)
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
	struct UAnimSequence* Animation; // 0x8(0x8)
	float TotalWeight; // 0x10(0x4)
	float Time; // 0x14(0x4)
	float PreviousTime; // 0x18(0x4)
	float SamplePlayRate; // 0x1C(0x4)
	unsigned char UnknownData_20[0x0020]; // 0x20(0x20)
};

// ScriptStruct Engine.AnimationRecordingSettings
// Size : 0x10 (Inherited : 0x0)
struct FAnimationRecordingSettings {
	bool bRecordInWorldSpace; // 0x0(0x1)
	bool bRemoveRootAnimation; // 0x1(0x1)
	bool bAutoSaveAsset; // 0x2(0x1)
	unsigned char UnknownData_3[0x0001]; // 0x3(0x1)
	float SampleRate; // 0x4(0x4)
	float Length; // 0x8(0x4)
	enum class ERichCurveInterpMode InterpMode; // 0xC(0x1)
	enum class ERichCurveTangentMode TangentMode; // 0xD(0x1)
	unsigned char UnknownData_E[0x0002]; // 0xE(0x2)
};

// ScriptStruct Engine.ComponentSpacePose
// Size : 0x20 (Inherited : 0x0)
struct FComponentSpacePose {
	struct TArray<struct FTransform> Transforms; // 0x0(0x10)
	struct TArray<struct FName> Names; // 0x10(0x10)
};

// ScriptStruct Engine.LocalSpacePose
// Size : 0x20 (Inherited : 0x0)
struct FLocalSpacePose {
	struct TArray<struct FTransform> Transforms; // 0x0(0x10)
	struct TArray<struct FName> Names; // 0x10(0x10)
};

// ScriptStruct Engine.NamedTransform
// Size : 0x40 (Inherited : 0x0)
struct FNamedTransform {
	struct FTransform Value; // 0x0(0x30)
	struct FName Name; // 0x30(0x8)
	unsigned char UnknownData_38[0x0008]; // 0x38(0x8)
};

// ScriptStruct Engine.NamedColor
// Size : 0xC (Inherited : 0x0)
struct FNamedColor {
	struct FColor Value; // 0x0(0x4)
	struct FName Name; // 0x4(0x8)
};

// ScriptStruct Engine.NamedVector
// Size : 0x14 (Inherited : 0x0)
struct FNamedVector {
	struct FVector Value; // 0x0(0xC)
	struct FName Name; // 0xC(0x8)
};

// ScriptStruct Engine.NamedFloat
// Size : 0xC (Inherited : 0x0)
struct FNamedFloat {
	float Value; // 0x0(0x4)
	struct FName Name; // 0x4(0x8)
};

// ScriptStruct Engine.AnimParentNodeAssetOverride
// Size : 0x18 (Inherited : 0x0)
struct FAnimParentNodeAssetOverride {
	struct UAnimationAsset* NewAsset; // 0x0(0x8)
	struct FGuid ParentNodeGuid; // 0x8(0x10)
};

// ScriptStruct Engine.AnimGroupInfo
// Size : 0x18 (Inherited : 0x0)
struct FAnimGroupInfo {
	struct FName Name; // 0x0(0x8)
	struct FLinearColor Color; // 0x8(0x10)
};

// ScriptStruct Engine.AnimBlueprintDebugData
// Size : 0x1 (Inherited : 0x0)
struct FAnimBlueprintDebugData {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
};

// ScriptStruct Engine.AnimationFrameSnapshot
// Size : 0x1 (Inherited : 0x0)
struct FAnimationFrameSnapshot {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
};

// ScriptStruct Engine.StateMachineDebugData
// Size : 0xB0 (Inherited : 0x0)
struct FStateMachineDebugData {
	unsigned char UnknownData_0[0x00B0]; // 0x0(0xB0)
};

// ScriptStruct Engine.StateMachineStateDebugData
// Size : 0x10 (Inherited : 0x0)
struct FStateMachineStateDebugData {
	unsigned char UnknownData_0[0x0010]; // 0x0(0x10)
};

// ScriptStruct Engine.AnimBlueprintFunctionData
// Size : 0x40 (Inherited : 0x0)
struct FAnimBlueprintFunctionData {
	FieldPathProperty OutputPoseNodeProperty; // 0x0(0x20)
	struct TArray<FieldPathProperty> InputPoseNodeProperties; // 0x20(0x10)
	struct TArray<FieldPathProperty> InputProperties; // 0x30(0x10)
};

// ScriptStruct Engine.AnimGraphBlendOptions
// Size : 0x8 (Inherited : 0x0)
struct FAnimGraphBlendOptions {
	float BlendInTime; // 0x0(0x4)
	float BlendOutTime; // 0x4(0x4)
};

// ScriptStruct Engine.GraphAssetPlayerInformation
// Size : 0x10 (Inherited : 0x0)
struct FGraphAssetPlayerInformation {
	struct TArray<int32_t> PlayerNodeIndices; // 0x0(0x10)
};

// ScriptStruct Engine.CachedPoseIndices
// Size : 0x10 (Inherited : 0x0)
struct FCachedPoseIndices {
	struct TArray<int32_t> OrderedSavedPoseNodeIndices; // 0x0(0x10)
};

// ScriptStruct Engine.AnimBlueprintFunction
// Size : 0x68 (Inherited : 0x0)
struct FAnimBlueprintFunction {
	struct FName Name; // 0x0(0x8)
	struct FName Group; // 0x8(0x8)
	int32_t OutputPoseNodeIndex; // 0x10(0x4)
	unsigned char UnknownData_14[0x0004]; // 0x14(0x4)
	struct TArray<struct FName> InputPoseNames; // 0x18(0x10)
	struct TArray<int32_t> InputPoseNodeIndices; // 0x28(0x10)
	unsigned char UnknownData_38[0x0028]; // 0x38(0x28)
	bool bImplemented; // 0x60(0x1)
	unsigned char UnknownData_61[0x0007]; // 0x61(0x7)
};

// ScriptStruct Engine.AnimTrack
// Size : 0x10 (Inherited : 0x0)
struct FAnimTrack {
	struct TArray<struct FAnimSegment> AnimSegments; // 0x0(0x10)
};

// ScriptStruct Engine.AnimSegment
// Size : 0x20 (Inherited : 0x0)
struct FAnimSegment {
	struct UAnimSequenceBase* AnimReference; // 0x0(0x8)
	float StartPos; // 0x8(0x4)
	float AnimStartTime; // 0xC(0x4)
	float AnimEndTime; // 0x10(0x4)
	float AnimPlayRate; // 0x14(0x4)
	int32_t LoopingCount; // 0x18(0x4)
	unsigned char UnknownData_1C[0x0004]; // 0x1C(0x4)
};

// ScriptStruct Engine.RootMotionExtractionStep
// Size : 0x10 (Inherited : 0x0)
struct FRootMotionExtractionStep {
	struct UAnimSequence* AnimSequence; // 0x0(0x8)
	float StartPosition; // 0x8(0x4)
	float EndPosition; // 0xC(0x4)
};

// ScriptStruct Engine.AnimationErrorStats
// Size : 0x10 (Inherited : 0x0)
struct FAnimationErrorStats {
	unsigned char UnknownData_0[0x0010]; // 0x0(0x10)
};

// ScriptStruct Engine.RawCurveTracks
// Size : 0x10 (Inherited : 0x0)
struct FRawCurveTracks {
	struct TArray<struct FFloatCurve> FloatCurves; // 0x0(0x10)
};

// ScriptStruct Engine.AnimCurveBase
// Size : 0x18 (Inherited : 0x0)
struct FAnimCurveBase {
	struct FName LastObservedName; // 0x0(0x8)
	struct FSmartName Name; // 0x8(0xC)
	int32_t CurveTypeFlags; // 0x14(0x4)
};

// ScriptStruct Engine.SmartName
// Size : 0xC (Inherited : 0x0)
struct FSmartName {
	struct FName DisplayName; // 0x0(0x8)
	unsigned char UnknownData_8[0x0004]; // 0x8(0x4)
};

// ScriptStruct Engine.FloatCurve
// Size : 0x98 (Inherited : 0x18)
struct FFloatCurve : FAnimCurveBase {
	struct FRichCurve FloatCurve; // 0x18(0x80)
};

// ScriptStruct Engine.TransformCurve
// Size : 0x4E0 (Inherited : 0x18)
struct FTransformCurve : FAnimCurveBase {
	struct FVectorCurve TranslationCurve; // 0x18(0x198)
	struct FVectorCurve RotationCurve; // 0x1B0(0x198)
	struct FVectorCurve ScaleCurve; // 0x348(0x198)
};

// ScriptStruct Engine.VectorCurve
// Size : 0x198 (Inherited : 0x18)
struct FVectorCurve : FAnimCurveBase {
	struct FRichCurve FloatCurves[3]; // 0x18(0x180)
};

// ScriptStruct Engine.SlotEvaluationPose
// Size : 0x40 (Inherited : 0x0)
struct FSlotEvaluationPose {
	enum class EAdditiveAnimationType AdditiveType; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float Weight; // 0x4(0x4)
	unsigned char UnknownData_8[0x0038]; // 0x8(0x38)
};

// ScriptStruct Engine.A2Pose
// Size : 0x10 (Inherited : 0x0)
struct FA2Pose {
	struct TArray<struct FTransform> Bones; // 0x0(0x10)
};

// ScriptStruct Engine.A2CSPose
// Size : 0x28 (Inherited : 0x10)
struct FA2CSPose : FA2Pose {
	unsigned char UnknownData_10[0x0008]; // 0x10(0x8)
	struct TArray<enum class None> ComponentSpaceFlags; // 0x18(0x10)
};

// ScriptStruct Engine.QueuedDrawDebugItem
// Size : 0x68 (Inherited : 0x0)
struct FQueuedDrawDebugItem {
	enum class EDrawDebugItemType ItemType; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	struct FVector StartLoc; // 0x4(0xC)
	struct FVector EndLoc; // 0x10(0xC)
	struct FVector Center; // 0x1C(0xC)
	struct FRotator Rotation; // 0x28(0xC)
	float Radius; // 0x34(0x4)
	float Size; // 0x38(0x4)
	int32_t Segments; // 0x3C(0x4)
	struct FColor Color; // 0x40(0x4)
	bool bPersistentLines; // 0x44(0x1)
	unsigned char UnknownData_45[0x0003]; // 0x45(0x3)
	float LifeTime; // 0x48(0x4)
	float Thickness; // 0x4C(0x4)
	struct FString Message; // 0x50(0x10)
	struct FVector2D TextScale; // 0x60(0x8)
};

// ScriptStruct Engine.AnimLinkableElement
// Size : 0x30 (Inherited : 0x0)
struct FAnimLinkableElement {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
	struct UAnimMontage* LinkedMontage; // 0x8(0x8)
	int32_t SlotIndex; // 0x10(0x4)
	int32_t SegmentIndex; // 0x14(0x4)
	enum class EAnimLinkMethod LinkMethod; // 0x18(0x1)
	enum class EAnimLinkMethod CachedLinkMethod; // 0x19(0x1)
	unsigned char UnknownData_1A[0x0002]; // 0x1A(0x2)
	float SegmentBeginTime; // 0x1C(0x4)
	float SegmentLength; // 0x20(0x4)
	float LinkValue; // 0x24(0x4)
	struct UAnimSequenceBase* LinkedSequence; // 0x28(0x8)
};

// ScriptStruct Engine.AnimMontageInstance
// Size : 0x1B0 (Inherited : 0x0)
struct FAnimMontageInstance {
	struct UAnimMontage* Montage; // 0x0(0x8)
	unsigned char UnknownData_8[0x0020]; // 0x8(0x20)
	bool bPlaying; // 0x28(0x1)
	unsigned char UnknownData_29[0x0003]; // 0x29(0x3)
	float DefaultBlendTimeMultiplier; // 0x2C(0x4)
	unsigned char UnknownData_30[0x00B8]; // 0x30(0xB8)
	struct TArray<int32_t> NextSections; // 0xE8(0x10)
	struct TArray<int32_t> PrevSections; // 0xF8(0x10)
	unsigned char UnknownData_108[0x0010]; // 0x108(0x10)
	struct TArray<struct FAnimNotifyEvent> ActiveStateBranchingPoints; // 0x118(0x10)
	float Position; // 0x128(0x4)
	float PlayRate; // 0x12C(0x4)
	struct FAlphaBlend Blend; // 0x130(0x30)
	unsigned char UnknownData_160[0x0028]; // 0x160(0x28)
	int32_t DisableRootMotionCount; // 0x188(0x4)
	unsigned char UnknownData_18C[0x0024]; // 0x18C(0x24)
};

// ScriptStruct Engine.AnimNotifyEvent
// Size : 0xB8 (Inherited : 0x30)
struct FAnimNotifyEvent : FAnimLinkableElement {
	float DisplayTime; // 0x30(0x4)
	float TriggerTimeOffset; // 0x34(0x4)
	float EndTriggerTimeOffset; // 0x38(0x4)
	float TriggerWeightThreshold; // 0x3C(0x4)
	struct FName NotifyName; // 0x40(0x8)
	struct UAnimNotify* Notify; // 0x48(0x8)
	struct UAnimNotifyState* NotifyStateClass; // 0x50(0x8)
	float Duration; // 0x58(0x4)
	unsigned char UnknownData_5C[0x0004]; // 0x5C(0x4)
	struct FAnimLinkableElement EndLink; // 0x60(0x30)
	bool bConvertedFromBranchingPoint; // 0x90(0x1)
	enum class EMontageNotifyTickType MontageTickType; // 0x91(0x1)
	unsigned char UnknownData_92[0x0002]; // 0x92(0x2)
	float NotifyTriggerChance; // 0x94(0x4)
	enum class ENotifyFilterType NotifyFilterType; // 0x98(0x1)
	unsigned char UnknownData_99[0x0003]; // 0x99(0x3)
	int32_t NotifyFilterLOD; // 0x9C(0x4)
	bool bTriggerOnDedicatedServer; // 0xA0(0x1)
	bool bTriggerOnFollower; // 0xA1(0x1)
	unsigned char UnknownData_A2[0x0002]; // 0xA2(0x2)
	int32_t TrackIndex; // 0xA4(0x4)
	unsigned char UnknownData_A8[0x0010]; // 0xA8(0x10)
};

// ScriptStruct Engine.BranchingPointMarker
// Size : 0xC (Inherited : 0x0)
struct FBranchingPointMarker {
	int32_t NotifyIndex; // 0x0(0x4)
	float TriggerTime; // 0x4(0x4)
	enum class EAnimNotifyEventType NotifyEventType; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
};

// ScriptStruct Engine.BranchingPoint
// Size : 0x40 (Inherited : 0x30)
struct FBranchingPoint : FAnimLinkableElement {
	struct FName EventName; // 0x30(0x8)
	float DisplayTime; // 0x38(0x4)
	float TriggerTimeOffset; // 0x3C(0x4)
};

// ScriptStruct Engine.SlotAnimationTrack
// Size : 0x18 (Inherited : 0x0)
struct FSlotAnimationTrack {
	struct FName SlotName; // 0x0(0x8)
	struct FAnimTrack AnimTrack; // 0x8(0x10)
};

// ScriptStruct Engine.CompositeSection
// Size : 0x58 (Inherited : 0x30)
struct FCompositeSection : FAnimLinkableElement {
	struct FName SectionName; // 0x30(0x8)
	float StartTime; // 0x38(0x4)
	struct FName NextSectionName; // 0x3C(0x8)
	unsigned char UnknownData_44[0x0004]; // 0x44(0x4)
	struct TArray<struct UAnimMetaData*> MetaData; // 0x48(0x10)
};

// ScriptStruct Engine.AnimNode_ApplyMeshSpaceAdditive
// Size : 0xD0 (Inherited : 0x10)
struct FAnimNode_ApplyMeshSpaceAdditive : FAnimNode_Base {
	struct FPoseLink Base; // 0x10(0x10)
	struct FPoseLink Additive; // 0x20(0x10)
	enum class EAnimAlphaInputType AlphaInputType; // 0x30(0x1)
	unsigned char UnknownData_31[0x0003]; // 0x31(0x3)
	float Alpha; // 0x34(0x4)
	unsigned char bAlphaBoolEnabled : 1; // 0x38(0x1)
	unsigned char UnknownData_38_1 : 7; // 0x38(0x1)
	unsigned char UnknownData_39[0x0007]; // 0x39(0x7)
	struct FInputAlphaBoolBlend AlphaBoolBlend; // 0x40(0x48)
	struct FName AlphaCurveName; // 0x88(0x8)
	struct FInputScaleBias AlphaScaleBias; // 0x90(0x8)
	struct FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x98(0x30)
	int32_t LODThreshold; // 0xC8(0x4)
	unsigned char UnknownData_CC[0x0004]; // 0xCC(0x4)
};

// ScriptStruct Engine.AnimNode_CustomProperty
// Size : 0x58 (Inherited : 0x10)
struct FAnimNode_CustomProperty : FAnimNode_Base {
	struct TArray<struct FName> SourcePropertyNames; // 0x10(0x10)
	struct TArray<struct FName> DestPropertyNames; // 0x20(0x10)
	struct UObject* TargetInstance; // 0x30(0x8)
	unsigned char UnknownData_38[0x0020]; // 0x38(0x20)
};

// ScriptStruct Engine.AnimNode_Inertialization
// Size : 0x70 (Inherited : 0x10)
struct FAnimNode_Inertialization : FAnimNode_Base {
	struct FPoseLink Source; // 0x10(0x10)
	unsigned char UnknownData_20[0x0050]; // 0x20(0x50)
};

// ScriptStruct Engine.InertializationPoseDiff
// Size : 0x28 (Inherited : 0x0)
struct FInertializationPoseDiff {
	unsigned char UnknownData_0[0x0028]; // 0x0(0x28)
};

// ScriptStruct Engine.InertializationCurveDiff
// Size : 0x8 (Inherited : 0x0)
struct FInertializationCurveDiff {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
};

// ScriptStruct Engine.InertializationBoneDiff
// Size : 0x3C (Inherited : 0x0)
struct FInertializationBoneDiff {
	unsigned char UnknownData_0[0x003C]; // 0x0(0x3C)
};

// ScriptStruct Engine.InertializationPose
// Size : 0x90 (Inherited : 0x0)
struct FInertializationPose {
	unsigned char UnknownData_0[0x0090]; // 0x0(0x90)
};

// ScriptStruct Engine.AnimNode_LinkedAnimGraph
// Size : 0xA0 (Inherited : 0x58)
struct FAnimNode_LinkedAnimGraph : FAnimNode_CustomProperty {
	struct TArray<struct FPoseLink> InputPoses; // 0x58(0x10)
	struct TArray<struct FName> InputPoseNames; // 0x68(0x10)
	class UAnimInstance* InstanceClass; // 0x78(0x8)
	struct FName Tag; // 0x80(0x8)
	unsigned char UnknownData_88[0x0010]; // 0x88(0x10)
	unsigned char bReceiveNotifiesFromLinkedInstances : 1; // 0x98(0x1)
	unsigned char bPropagateNotifiesToLinkedInstances : 1; // 0x98(0x1)
	unsigned char UnknownData_98_2 : 6; // 0x98(0x1)
	unsigned char UnknownData_99[0x0007]; // 0x99(0x7)
};

// ScriptStruct Engine.AnimNode_LinkedAnimLayer
// Size : 0xB0 (Inherited : 0xA0)
struct FAnimNode_LinkedAnimLayer : FAnimNode_LinkedAnimGraph {
	class UAnimLayerInterface* Interface; // 0xA0(0x8)
	struct FName Layer; // 0xA8(0x8)
};

// ScriptStruct Engine.AnimNode_LinkedInputPose
// Size : 0x78 (Inherited : 0x10)
struct FAnimNode_LinkedInputPose : FAnimNode_Base {
	struct FName Name; // 0x10(0x8)
	struct FName Graph; // 0x18(0x8)
	struct FPoseLink InputPose; // 0x20(0x10)
	unsigned char UnknownData_30[0x0048]; // 0x30(0x48)
};

// ScriptStruct Engine.AnimNode_SaveCachedPose
// Size : 0xB8 (Inherited : 0x10)
struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	struct FPoseLink Pose; // 0x10(0x10)
	struct FName CachePoseName; // 0x20(0x8)
	unsigned char UnknownData_28[0x0090]; // 0x28(0x90)
};

// ScriptStruct Engine.AnimNode_SequencePlayer
// Size : 0x78 (Inherited : 0x30)
struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase {
	struct UAnimSequenceBase* Sequence; // 0x30(0x8)
	float PlayRateBasis; // 0x38(0x4)
	float PlayRate; // 0x3C(0x4)
	struct FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x40(0x30)
	float StartPosition; // 0x70(0x4)
	bool bLoopAnimation; // 0x74(0x1)
	unsigned char UnknownData_75[0x0003]; // 0x75(0x3)
};

// ScriptStruct Engine.AnimNode_StateMachine
// Size : 0xB0 (Inherited : 0x10)
struct FAnimNode_StateMachine : FAnimNode_Base {
	int32_t StateMachineIndexInClass; // 0x10(0x4)
	int32_t MaxTransitionsPerFrame; // 0x14(0x4)
	bool bSkipFirstUpdateTransition; // 0x18(0x1)
	bool bReinitializeOnBecomingRelevant; // 0x19(0x1)
	unsigned char UnknownData_1A[0x0096]; // 0x1A(0x96)
};

// ScriptStruct Engine.AnimationPotentialTransition
// Size : 0x30 (Inherited : 0x0)
struct FAnimationPotentialTransition {
	unsigned char UnknownData_0[0x0030]; // 0x0(0x30)
};

// ScriptStruct Engine.AnimationActiveTransitionEntry
// Size : 0xC8 (Inherited : 0x0)
struct FAnimationActiveTransitionEntry {
	unsigned char UnknownData_0[0x00B8]; // 0x0(0xB8)
	struct UBlendProfile* BlendProfile; // 0xB8(0x8)
	unsigned char UnknownData_C0[0x0008]; // 0xC0(0x8)
};

// ScriptStruct Engine.AnimNode_TransitionPoseEvaluator
// Size : 0x58 (Inherited : 0x10)
struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	unsigned char UnknownData_10[0x0038]; // 0x10(0x38)
	int32_t FramesToCachePose; // 0x48(0x4)
	unsigned char UnknownData_4C[0x0004]; // 0x4C(0x4)
	enum class EEvaluatorDataSource DataSource; // 0x50(0x1)
	enum class EEvaluatorMode EvaluatorMode; // 0x51(0x1)
	unsigned char UnknownData_52[0x0006]; // 0x52(0x6)
};

// ScriptStruct Engine.AnimNode_TransitionResult
// Size : 0x28 (Inherited : 0x10)
struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; // 0x10(0x1)
	unsigned char UnknownData_11[0x0017]; // 0x11(0x17)
};

// ScriptStruct Engine.AnimNode_UseCachedPose
// Size : 0x28 (Inherited : 0x10)
struct FAnimNode_UseCachedPose : FAnimNode_Base {
	struct FPoseLink LinkToCachingNode; // 0x10(0x10)
	struct FName CachePoseName; // 0x20(0x8)
};

// ScriptStruct Engine.ExposedValueHandler
// Size : 0x48 (Inherited : 0x0)
struct FExposedValueHandler {
	struct FName BoundFunction; // 0x0(0x8)
	struct TArray<struct FExposedValueCopyRecord> CopyRecords; // 0x8(0x10)
	struct UFunction* Function; // 0x18(0x8)
	FieldPathProperty ValueHandlerNodeProperty; // 0x20(0x20)
	unsigned char UnknownData_40[0x0008]; // 0x40(0x8)
};

// ScriptStruct Engine.ExposedValueCopyRecord
// Size : 0x80 (Inherited : 0x0)
struct FExposedValueCopyRecord {
	struct FName SourcePropertyName; // 0x0(0x8)
	struct FName SourceSubPropertyName; // 0x8(0x8)
	int32_t SourceArrayIndex; // 0x10(0x4)
	bool bInstanceIsTarget; // 0x14(0x1)
	enum class EPostCopyOperation PostCopyOperation; // 0x15(0x1)
	enum class ECopyType CopyType; // 0x16(0x1)
	unsigned char UnknownData_17[0x0001]; // 0x17(0x1)
	FieldPathProperty DestProperty; // 0x18(0x20)
	int32_t DestArrayIndex; // 0x38(0x4)
	int32_t Size; // 0x3C(0x4)
	FieldPathProperty CachedSourceProperty; // 0x40(0x20)
	FieldPathProperty CachedSourceStructSubProperty; // 0x60(0x20)
};

// ScriptStruct Engine.AnimNode_ConvertLocalToComponentSpace
// Size : 0x20 (Inherited : 0x10)
struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	struct FPoseLink LocalPose; // 0x10(0x10)
};

// ScriptStruct Engine.AnimNode_ConvertComponentToLocalSpace
// Size : 0x20 (Inherited : 0x10)
struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	struct FComponentSpacePoseLink ComponentPose; // 0x10(0x10)
};

// ScriptStruct Engine.AnimNotifyQueue
// Size : 0x70 (Inherited : 0x0)
struct FAnimNotifyQueue {
	unsigned char UnknownData_0[0x0010]; // 0x0(0x10)
	struct TArray<struct FAnimNotifyEventReference> AnimNotifies; // 0x10(0x10)
	struct TMap<struct FName, struct FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x20(0x50)
};

// ScriptStruct Engine.AnimNotifyArray
// Size : 0x10 (Inherited : 0x0)
struct FAnimNotifyArray {
	struct TArray<struct FAnimNotifyEventReference> Notifies; // 0x0(0x10)
};

// ScriptStruct Engine.AnimNotifyEventReference
// Size : 0x10 (Inherited : 0x0)
struct FAnimNotifyEventReference {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
	struct UObject* NotifySource; // 0x8(0x8)
};

// ScriptStruct Engine.CompressedTrack
// Size : 0x38 (Inherited : 0x0)
struct FCompressedTrack {
	struct TArray<enum class None> ByteStream; // 0x0(0x10)
	struct TArray<float> Times; // 0x10(0x10)
	float Mins[3]; // 0x20(0xC)
	float Ranges[3]; // 0x2C(0xC)
};

// ScriptStruct Engine.CurveTrack
// Size : 0x18 (Inherited : 0x0)
struct FCurveTrack {
	struct FName CurveName; // 0x0(0x8)
	struct TArray<float> CurveWeights; // 0x8(0x10)
};

// ScriptStruct Engine.ScaleTrack
// Size : 0x20 (Inherited : 0x0)
struct FScaleTrack {
	struct TArray<struct FVector> ScaleKeys; // 0x0(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.RotationTrack
// Size : 0x20 (Inherited : 0x0)
struct FRotationTrack {
	struct TArray<struct FQuat> RotKeys; // 0x0(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.TranslationTrack
// Size : 0x20 (Inherited : 0x0)
struct FTranslationTrack {
	struct TArray<struct FVector> PosKeys; // 0x0(0x10)
	struct TArray<float> Times; // 0x10(0x10)
};

// ScriptStruct Engine.AnimSequenceTrackContainer
// Size : 0x20 (Inherited : 0x0)
struct FAnimSequenceTrackContainer {
	struct TArray<struct FRawAnimSequenceTrack> AnimationTracks; // 0x0(0x10)
	struct TArray<struct FName> TrackNames; // 0x10(0x10)
};

// ScriptStruct Engine.RawAnimSequenceTrack
// Size : 0x30 (Inherited : 0x0)
struct FRawAnimSequenceTrack {
	struct TArray<struct FVector> PosKeys; // 0x0(0x10)
	struct TArray<struct FQuat> RotKeys; // 0x10(0x10)
	struct TArray<struct FVector> ScaleKeys; // 0x20(0x10)
};

// ScriptStruct Engine.AnimSetMeshLinkup
// Size : 0x10 (Inherited : 0x0)
struct FAnimSetMeshLinkup {
	struct TArray<int32_t> BoneToTrackTable; // 0x0(0x10)
};

// ScriptStruct Engine.AnimSingleNodeInstanceProxy
// Size : 0x830 (Inherited : 0x6E0)
struct FAnimSingleNodeInstanceProxy : FAnimInstanceProxy {
	unsigned char UnknownData_6E0[0x0150]; // 0x6E0(0x150)
};

// ScriptStruct Engine.AnimNode_SingleNode
// Size : 0x30 (Inherited : 0x10)
struct FAnimNode_SingleNode : FAnimNode_Base {
	struct FPoseLink SourcePose; // 0x10(0x10)
	unsigned char UnknownData_20[0x0010]; // 0x20(0x10)
};

// ScriptStruct Engine.BakedAnimationStateMachine
// Size : 0x30 (Inherited : 0x0)
struct FBakedAnimationStateMachine {
	struct FName MachineName; // 0x0(0x8)
	int32_t InitialState; // 0x8(0x4)
	unsigned char UnknownData_C[0x0004]; // 0xC(0x4)
	struct TArray<struct FBakedAnimationState> States; // 0x10(0x10)
	struct TArray<struct FAnimationTransitionBetweenStates> Transitions; // 0x20(0x10)
};

// ScriptStruct Engine.AnimationStateBase
// Size : 0x8 (Inherited : 0x0)
struct FAnimationStateBase {
	struct FName StateName; // 0x0(0x8)
};

// ScriptStruct Engine.AnimationTransitionBetweenStates
// Size : 0x40 (Inherited : 0x8)
struct FAnimationTransitionBetweenStates : FAnimationStateBase {
	int32_t PreviousState; // 0x8(0x4)
	int32_t NextState; // 0xC(0x4)
	float CrossfadeDuration; // 0x10(0x4)
	int32_t StartNotify; // 0x14(0x4)
	int32_t EndNotify; // 0x18(0x4)
	int32_t InterruptNotify; // 0x1C(0x4)
	enum class EAlphaBlendOption BlendMode; // 0x20(0x1)
	unsigned char UnknownData_21[0x0007]; // 0x21(0x7)
	struct UCurveFloat* CustomCurve; // 0x28(0x8)
	struct UBlendProfile* BlendProfile; // 0x30(0x8)
	enum class ETransitionLogicType LogicType; // 0x38(0x1)
	unsigned char UnknownData_39[0x0007]; // 0x39(0x7)
};

// ScriptStruct Engine.BakedAnimationState
// Size : 0x58 (Inherited : 0x0)
struct FBakedAnimationState {
	struct FName StateName; // 0x0(0x8)
	struct TArray<struct FBakedStateExitTransition> Transitions; // 0x8(0x10)
	int32_t StateRootNodeIndex; // 0x18(0x4)
	int32_t StartNotify; // 0x1C(0x4)
	int32_t EndNotify; // 0x20(0x4)
	int32_t FullyBlendedNotify; // 0x24(0x4)
	bool bIsAConduit; // 0x28(0x1)
	unsigned char UnknownData_29[0x0003]; // 0x29(0x3)
	int32_t EntryRuleNodeIndex; // 0x2C(0x4)
	struct TArray<int32_t> PlayerNodeIndices; // 0x30(0x10)
	struct TArray<int32_t> LayerNodeIndices; // 0x40(0x10)
	bool bAlwaysResetOnEntry; // 0x50(0x1)
	unsigned char UnknownData_51[0x0007]; // 0x51(0x7)
};

// ScriptStruct Engine.BakedStateExitTransition
// Size : 0x20 (Inherited : 0x0)
struct FBakedStateExitTransition {
	int32_t CanTakeDelegateIndex; // 0x0(0x4)
	int32_t CustomResultNodeIndex; // 0x4(0x4)
	int32_t TransitionIndex; // 0x8(0x4)
	bool bDesiredTransitionReturnValue; // 0xC(0x1)
	bool bAutomaticRemainingTimeRule; // 0xD(0x1)
	unsigned char UnknownData_E[0x0002]; // 0xE(0x2)
	struct TArray<int32_t> PoseEvaluatorLinks; // 0x10(0x10)
};

// ScriptStruct Engine.AnimationState
// Size : 0x28 (Inherited : 0x8)
struct FAnimationState : FAnimationStateBase {
	struct TArray<struct FAnimationTransitionRule> Transitions; // 0x8(0x10)
	int32_t StateRootNodeIndex; // 0x18(0x4)
	int32_t StartNotify; // 0x1C(0x4)
	int32_t EndNotify; // 0x20(0x4)
	int32_t FullyBlendedNotify; // 0x24(0x4)
};

// ScriptStruct Engine.AnimationTransitionRule
// Size : 0x10 (Inherited : 0x0)
struct FAnimationTransitionRule {
	struct FName RuleToExecute; // 0x0(0x8)
	bool TransitionReturnVal; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
	int32_t TransitionIndex; // 0xC(0x4)
};

// ScriptStruct Engine.TrackToSkeletonMap
// Size : 0x4 (Inherited : 0x0)
struct FTrackToSkeletonMap {
	int32_t BoneTreeIndex; // 0x0(0x4)
};

// ScriptStruct Engine.MarkerSyncData
// Size : 0x20 (Inherited : 0x0)
struct FMarkerSyncData {
	struct TArray<struct FAnimSyncMarker> AuthoredSyncMarkers; // 0x0(0x10)
	unsigned char UnknownData_10[0x0010]; // 0x10(0x10)
};

// ScriptStruct Engine.AnimSyncMarker
// Size : 0xC (Inherited : 0x0)
struct FAnimSyncMarker {
	struct FName MarkerName; // 0x0(0x8)
	float Time; // 0x8(0x4)
};

// ScriptStruct Engine.AnimNotifyTrack
// Size : 0x38 (Inherited : 0x0)
struct FAnimNotifyTrack {
	struct FName TrackName; // 0x0(0x8)
	struct FLinearColor TrackColor; // 0x8(0x10)
	unsigned char UnknownData_18[0x0020]; // 0x18(0x20)
};

// ScriptStruct Engine.PerBoneBlendWeights
// Size : 0x10 (Inherited : 0x0)
struct FPerBoneBlendWeights {
	struct TArray<struct FPerBoneBlendWeight> BoneBlendWeights; // 0x0(0x10)
};

// ScriptStruct Engine.AssetImportInfo
// Size : 0x1 (Inherited : 0x0)
struct FAssetImportInfo {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
};

// ScriptStruct Engine.PrimaryAssetRulesCustomOverride
// Size : 0x38 (Inherited : 0x0)
struct FPrimaryAssetRulesCustomOverride {
	struct FPrimaryAssetType PrimaryAssetType; // 0x0(0x8)
	struct FDirectoryPath FilterDirectory; // 0x8(0x10)
	struct FString FilterString; // 0x18(0x10)
	struct FPrimaryAssetRules Rules; // 0x28(0xC)
	unsigned char UnknownData_34[0x0004]; // 0x34(0x4)
};

// ScriptStruct Engine.PrimaryAssetRules
// Size : 0xC (Inherited : 0x0)
struct FPrimaryAssetRules {
	int32_t Priority; // 0x0(0x4)
	int32_t ChunkId; // 0x4(0x4)
	bool bApplyRecursively; // 0x8(0x1)
	enum class EPrimaryAssetCookRule CookRule; // 0x9(0x1)
	unsigned char UnknownData_A[0x0002]; // 0xA(0x2)
};

// ScriptStruct Engine.PrimaryAssetRulesOverride
// Size : 0x1C (Inherited : 0x0)
struct FPrimaryAssetRulesOverride {
	struct FPrimaryAssetId PrimaryAssetId; // 0x0(0x10)
	struct FPrimaryAssetRules Rules; // 0x10(0xC)
};

// ScriptStruct Engine.AssetManagerRedirect
// Size : 0x20 (Inherited : 0x0)
struct FAssetManagerRedirect {
	struct FString Old; // 0x0(0x10)
	struct FString New; // 0x10(0x10)
};

// ScriptStruct Engine.PrimaryAssetTypeInfo
// Size : 0x88 (Inherited : 0x0)
struct FPrimaryAssetTypeInfo {
	struct FName PrimaryAssetType; // 0x0(0x8)
	SoftClassProperty AssetBaseClass; // 0x8(0x28)
	class UObject* AssetBaseClassLoaded; // 0x30(0x8)
	bool bHasBlueprintClasses; // 0x38(0x1)
	bool bIsEditorOnly; // 0x39(0x1)
	unsigned char UnknownData_3A[0x0006]; // 0x3A(0x6)
	struct TArray<struct FDirectoryPath> Directories; // 0x40(0x10)
	struct TArray<struct FSoftObjectPath> SpecificAssets; // 0x50(0x10)
	struct FPrimaryAssetRules Rules; // 0x60(0xC)
	unsigned char UnknownData_6C[0x0004]; // 0x6C(0x4)
	struct TArray<struct FString> AssetScanPaths; // 0x70(0x10)
	bool bIsDynamicAsset; // 0x80(0x1)
	unsigned char UnknownData_81[0x0003]; // 0x81(0x3)
	int32_t NumberOfAssets; // 0x84(0x4)
};

// ScriptStruct Engine.AssetMapping
// Size : 0x10 (Inherited : 0x0)
struct FAssetMapping {
	struct UAnimationAsset* SourceAsset; // 0x0(0x8)
	struct UAnimationAsset* TargetAsset; // 0x8(0x8)
};

// ScriptStruct Engine.AtmospherePrecomputeInstanceData
// Size : 0x138 (Inherited : 0xA8)
struct FAtmospherePrecomputeInstanceData : FSceneComponentInstanceData {
	unsigned char UnknownData_A8[0x0090]; // 0xA8(0x90)
};

// ScriptStruct Engine.AtmospherePrecomputeParameters
// Size : 0x2C (Inherited : 0x0)
struct FAtmospherePrecomputeParameters {
	float DensityHeight; // 0x0(0x4)
	float DecayHeight; // 0x4(0x4)
	int32_t MaxScatteringOrder; // 0x8(0x4)
	int32_t TransmittanceTexWidth; // 0xC(0x4)
	int32_t TransmittanceTexHeight; // 0x10(0x4)
	int32_t IrradianceTexWidth; // 0x14(0x4)
	int32_t IrradianceTexHeight; // 0x18(0x4)
	int32_t InscatterAltitudeSampleNum; // 0x1C(0x4)
	int32_t InscatterMuNum; // 0x20(0x4)
	int32_t InscatterMuSNum; // 0x24(0x4)
	int32_t InscatterNuNum; // 0x28(0x4)
};

// ScriptStruct Engine.BaseAttenuationSettings
// Size : 0xB0 (Inherited : 0x0)
struct FBaseAttenuationSettings {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
	enum class EAttenuationDistanceModel DistanceAlgorithm; // 0x8(0x1)
	enum class EAttenuationShape AttenuationShape; // 0x9(0x1)
	unsigned char UnknownData_A[0x0002]; // 0xA(0x2)
	float dBAttenuationAtMax; // 0xC(0x4)
	enum class ENaturalSoundFalloffMode FalloffMode; // 0x10(0x1)
	unsigned char UnknownData_11[0x0003]; // 0x11(0x3)
	struct FVector AttenuationShapeExtents; // 0x14(0xC)
	float ConeOffset; // 0x20(0x4)
	float FalloffDistance; // 0x24(0x4)
	struct FRuntimeFloatCurve CustomAttenuationCurve; // 0x28(0x88)
};

// ScriptStruct Engine.AudioComponentParam
// Size : 0x20 (Inherited : 0x0)
struct FAudioComponentParam {
	struct FName ParamName; // 0x0(0x8)
	float FloatParam; // 0x8(0x4)
	bool BoolParam; // 0xC(0x1)
	unsigned char UnknownData_D[0x0003]; // 0xD(0x3)
	int32_t IntParam; // 0x10(0x4)
	unsigned char UnknownData_14[0x0004]; // 0x14(0x4)
	struct USoundWave* SoundWaveParam; // 0x18(0x8)
};

// ScriptStruct Engine.AudioEffectParameters
// Size : 0x8 (Inherited : 0x0)
struct FAudioEffectParameters {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
};

// ScriptStruct Engine.AudioReverbEffect
// Size : 0x48 (Inherited : 0x8)
struct FAudioReverbEffect : FAudioEffectParameters {
	unsigned char UnknownData_8[0x0040]; // 0x8(0x40)
};

// ScriptStruct Engine.AudioQualitySettings
// Size : 0x20 (Inherited : 0x0)
struct FAudioQualitySettings {
	struct FText DisplayName; // 0x0(0x18)
	int32_t MaxChannels; // 0x18(0x4)
	unsigned char UnknownData_1C[0x0004]; // 0x1C(0x4)
};

// ScriptStruct Engine.InteriorSettings
// Size : 0x24 (Inherited : 0x0)
struct FInteriorSettings {
	bool bIsWorldSettings; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float ExteriorVolume; // 0x4(0x4)
	float ExteriorTime; // 0x8(0x4)
	float ExteriorLPF; // 0xC(0x4)
	float ExteriorLPFTime; // 0x10(0x4)
	float InteriorVolume; // 0x14(0x4)
	float InteriorTime; // 0x18(0x4)
	float InteriorLPF; // 0x1C(0x4)
	float InteriorLPFTime; // 0x20(0x4)
};

// ScriptStruct Engine.LaunchOnTestSettings
// Size : 0x20 (Inherited : 0x0)
struct FLaunchOnTestSettings {
	struct FFilePath LaunchOnTestmap; // 0x0(0x10)
	struct FString DeviceID; // 0x10(0x10)
};

// ScriptStruct Engine.FilePath
// Size : 0x10 (Inherited : 0x0)
struct FFilePath {
	struct FString FilePath; // 0x0(0x10)
};

// ScriptStruct Engine.EditorMapPerformanceTestDefinition
// Size : 0x20 (Inherited : 0x0)
struct FEditorMapPerformanceTestDefinition {
	struct FSoftObjectPath PerformanceTestmap; // 0x0(0x18)
	int32_t TestTimer; // 0x18(0x4)
	unsigned char UnknownData_1C[0x0004]; // 0x1C(0x4)
};

// ScriptStruct Engine.BuildPromotionTestSettings
// Size : 0x1F0 (Inherited : 0x0)
struct FBuildPromotionTestSettings {
	struct FFilePath DefaultStaticMeshAsset; // 0x0(0x10)
	struct FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10(0x150)
	struct FBuildPromotionOpenAssetSettings OpenAssets; // 0x160(0x60)
	struct FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1C0(0x20)
	struct FFilePath SourceControlMaterial; // 0x1E0(0x10)
};

// ScriptStruct Engine.BuildPromotionNewProjectSettings
// Size : 0x20 (Inherited : 0x0)
struct FBuildPromotionNewProjectSettings {
	struct FDirectoryPath NewProjectFolderOverride; // 0x0(0x10)
	struct FString NewProjectNameOverride; // 0x10(0x10)
};

// ScriptStruct Engine.BuildPromotionOpenAssetSettings
// Size : 0x60 (Inherited : 0x0)
struct FBuildPromotionOpenAssetSettings {
	struct FFilePath BlueprintAsset; // 0x0(0x10)
	struct FFilePath MaterialAsset; // 0x10(0x10)
	struct FFilePath ParticleSystemAsset; // 0x20(0x10)
	struct FFilePath SkeletalMeshAsset; // 0x30(0x10)
	struct FFilePath StaticMeshAsset; // 0x40(0x10)
	struct FFilePath TextureAsset; // 0x50(0x10)
};

// ScriptStruct Engine.BuildPromotionImportWorkflowSettings
// Size : 0x150 (Inherited : 0x0)
struct FBuildPromotionImportWorkflowSettings {
	struct FEditorImportWorkflowDefinition Diffuse; // 0x0(0x20)
	struct FEditorImportWorkflowDefinition Normal; // 0x20(0x20)
	struct FEditorImportWorkflowDefinition StaticMesh; // 0x40(0x20)
	struct FEditorImportWorkflowDefinition ReimportStaticMesh; // 0x60(0x20)
	struct FEditorImportWorkflowDefinition BlendShapeMesh; // 0x80(0x20)
	struct FEditorImportWorkflowDefinition MorphMesh; // 0xA0(0x20)
	struct FEditorImportWorkflowDefinition SkeletalMesh; // 0xC0(0x20)
	struct FEditorImportWorkflowDefinition Animation; // 0xE0(0x20)
	struct FEditorImportWorkflowDefinition Sound; // 0x100(0x20)
	struct FEditorImportWorkflowDefinition SurroundSound; // 0x120(0x20)
	struct TArray<struct FEditorImportWorkflowDefinition> OtherAssetsToImport; // 0x140(0x10)
};

// ScriptStruct Engine.EditorImportWorkflowDefinition
// Size : 0x20 (Inherited : 0x0)
struct FEditorImportWorkflowDefinition {
	struct FFilePath ImportFilePath; // 0x0(0x10)
	struct TArray<struct FImportFactorySettingValues> FactorySettings; // 0x10(0x10)
};

// ScriptStruct Engine.ImportFactorySettingValues
// Size : 0x20 (Inherited : 0x0)
struct FImportFactorySettingValues {
	struct FString SettingName; // 0x0(0x10)
	struct FString Value; // 0x10(0x10)
};

// ScriptStruct Engine.BlueprintEditorPromotionSettings
// Size : 0x30 (Inherited : 0x0)
struct FBlueprintEditorPromotionSettings {
	struct FFilePath FirstMeshPath; // 0x0(0x10)
	struct FFilePath SecondMeshPath; // 0x10(0x10)
	struct FFilePath DefaultParticleAsset; // 0x20(0x10)
};

// ScriptStruct Engine.ParticleEditorPromotionSettings
// Size : 0x10 (Inherited : 0x0)
struct FParticleEditorPromotionSettings {
	struct FFilePath DefaultParticleAsset; // 0x0(0x10)
};

// ScriptStruct Engine.MaterialEditorPromotionSettings
// Size : 0x30 (Inherited : 0x0)
struct FMaterialEditorPromotionSettings {
	struct FFilePath DefaultMaterialAsset; // 0x0(0x10)
	struct FFilePath DefaultDiffuseTexture; // 0x10(0x10)
	struct FFilePath DefaultNormalTexture; // 0x20(0x10)
};

// ScriptStruct Engine.EditorImportExportTestDefinition
// Size : 0x38 (Inherited : 0x0)
struct FEditorImportExportTestDefinition {
	struct FFilePath ImportFilePath; // 0x0(0x10)
	struct FString ExportFileExtension; // 0x10(0x10)
	bool bSkipExport; // 0x20(0x1)
	unsigned char UnknownData_21[0x0007]; // 0x21(0x7)
	struct TArray<struct FImportFactorySettingValues> FactorySettings; // 0x28(0x10)
};

// ScriptStruct Engine.ExternalToolDefinition
// Size : 0x60 (Inherited : 0x0)
struct FExternalToolDefinition {
	struct FString ToolName; // 0x0(0x10)
	struct FFilePath ExecutablePath; // 0x10(0x10)
	struct FString CommandLineOptions; // 0x20(0x10)
	struct FDirectoryPath WorkingDirectory; // 0x30(0x10)
	struct FString ScriptExtension; // 0x40(0x10)
	struct FDirectoryPath ScriptDirectory; // 0x50(0x10)
};

// ScriptStruct Engine.NavAvoidanceData
// Size : 0x3C (Inherited : 0x0)
struct FNavAvoidanceData {
	unsigned char UnknownData_0[0x003C]; // 0x0(0x3C)
};

// ScriptStruct Engine.BandwidthTestGenerator
// Size : 0x20 (Inherited : 0x0)
struct FBandwidthTestGenerator {
	struct TArray<struct FBandwidthTestItem> ReplicatedBuffers; // 0x0(0x10)
	unsigned char UnknownData_10[0x0010]; // 0x10(0x10)
};

// ScriptStruct Engine.BandwidthTestItem
// Size : 0x10 (Inherited : 0x0)
struct FBandwidthTestItem {
	struct TArray<enum class None> Kilobyte; // 0x0(0x10)
};

// ScriptStruct Engine.BlendProfileBoneEntry
// Size : 0x14 (Inherited : 0x0)
struct FBlendProfileBoneEntry {
	struct FBoneReference BoneReference; // 0x0(0x10)
	float BlendScale; // 0x10(0x4)
};

// ScriptStruct Engine.PerBoneInterpolation
// Size : 0x14 (Inherited : 0x0)
struct FPerBoneInterpolation {
	struct FBoneReference BoneReference; // 0x0(0x10)
	float InterpolationSpeedPerSec; // 0x10(0x4)
};

// ScriptStruct Engine.GridBlendSample
// Size : 0x1C (Inherited : 0x0)
struct FGridBlendSample {
	struct FEditorElement GridElement; // 0x0(0x18)
	float BlendWeight; // 0x18(0x4)
};

// ScriptStruct Engine.EditorElement
// Size : 0x18 (Inherited : 0x0)
struct FEditorElement {
	int32_t Indices[3]; // 0x0(0xC)
	float Weights[3]; // 0xC(0xC)
};

// ScriptStruct Engine.BlendSample
// Size : 0x18 (Inherited : 0x0)
struct FBlendSample {
	struct UAnimSequence* Animation; // 0x0(0x8)
	struct FVector SampleValue; // 0x8(0xC)
	float RateScale; // 0x14(0x4)
};

// ScriptStruct Engine.BlendParameter
// Size : 0x20 (Inherited : 0x0)
struct FBlendParameter {
	struct FString DisplayName; // 0x0(0x10)
	float Min; // 0x10(0x4)
	float Max; // 0x14(0x4)
	int32_t GridNum; // 0x18(0x4)
	unsigned char UnknownData_1C[0x0004]; // 0x1C(0x4)
};

// ScriptStruct Engine.InterpolationParameter
// Size : 0x8 (Inherited : 0x0)
struct FInterpolationParameter {
	float InterpolationTime; // 0x0(0x4)
	enum class EFilterInterpolationType InterpolationType; // 0x4(0x1)
	unsigned char UnknownData_5[0x0003]; // 0x5(0x3)
};

// ScriptStruct Engine.BPEditorBookmarkNode
// Size : 0x38 (Inherited : 0x0)
struct FBPEditorBookmarkNode {
	struct FGuid NodeGuid; // 0x0(0x10)
	struct FGuid ParentGuid; // 0x10(0x10)
	struct FText DisplayName; // 0x20(0x18)
};

// ScriptStruct Engine.EditedDocumentInfo
// Size : 0x30 (Inherited : 0x0)
struct FEditedDocumentInfo {
	struct FSoftObjectPath EditedObjectPath; // 0x0(0x18)
	struct FVector2D SavedViewOffset; // 0x18(0x8)
	float SavedZoomAmount; // 0x20(0x4)
	unsigned char UnknownData_24[0x0004]; // 0x24(0x4)
	struct UObject* EditedObject; // 0x28(0x8)
};

// ScriptStruct Engine.BPInterfaceDescription
// Size : 0x18 (Inherited : 0x0)
struct FBPInterfaceDescription {
	class UInterface* Interface; // 0x0(0x8)
	struct TArray<struct UEdGraph*> Graphs; // 0x8(0x10)
};

// ScriptStruct Engine.BPVariableDescription
// Size : 0xD0 (Inherited : 0x0)
struct FBPVariableDescription {
	struct FName VarName; // 0x0(0x8)
	struct FGuid VarGuid; // 0x8(0x10)
	struct FEdGraphPinType VarType; // 0x18(0x58)
	struct FString FriendlyName; // 0x70(0x10)
	struct FText Category; // 0x80(0x18)
	uint64_t PropertyFlags; // 0x98(0x8)
	struct FName RepNotifyFunc; // 0xA0(0x8)
	enum class ELifetimeCondition ReplicationCondition; // 0xA8(0x1)
	unsigned char UnknownData_A9[0x0007]; // 0xA9(0x7)
	struct TArray<struct FBPVariableMetaDataEntry> MetaDataArray; // 0xB0(0x10)
	struct FString DefaultValue; // 0xC0(0x10)
};

// ScriptStruct Engine.BPVariableMetaDataEntry
// Size : 0x18 (Inherited : 0x0)
struct FBPVariableMetaDataEntry {
	struct FName DataKey; // 0x0(0x8)
	struct FString DataValue; // 0x8(0x10)
};

// ScriptStruct Engine.EdGraphPinType
// Size : 0x58 (Inherited : 0x0)
struct FEdGraphPinType {
	struct FName PinCategory; // 0x0(0x8)
	struct FName PinSubCategory; // 0x8(0x8)
	struct FWeakObjectPtr<struct UObject> PinSubCategoryObject; // 0x10(0x8)
	struct FSimpleMemberReference PinSubCategoryMemberReference; // 0x18(0x20)
	struct FEdGraphTerminalType PinValueType; // 0x38(0x1C)
	enum class EPinContainerType ContainerType; // 0x54(0x1)
	unsigned char bIsArray : 1; // 0x55(0x1)
	unsigned char bIsReference : 1; // 0x55(0x1)
	unsigned char bIsConst : 1; // 0x55(0x1)
	unsigned char bIsWeakPointer : 1; // 0x55(0x1)
	unsigned char UnknownData_55_4 : 4; // 0x55(0x1)
	unsigned char UnknownData_56[0x0002]; // 0x56(0x2)
};

// ScriptStruct Engine.EdGraphTerminalType
// Size : 0x1C (Inherited : 0x0)
struct FEdGraphTerminalType {
	struct FName TerminalCategory; // 0x0(0x8)
	struct FName TerminalSubCategory; // 0x8(0x8)
	struct FWeakObjectPtr<struct UObject> TerminalSubCategoryObject; // 0x10(0x8)
	bool bTerminalIsConst; // 0x18(0x1)
	bool bTerminalIsWeakPointer; // 0x19(0x1)
	unsigned char UnknownData_1A[0x0002]; // 0x1A(0x2)
};

// ScriptStruct Engine.BlueprintMacroCosmeticInfo
// Size : 0x1 (Inherited : 0x0)
struct FBlueprintMacroCosmeticInfo {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
};

// ScriptStruct Engine.CompilerNativizationOptions
// Size : 0x80 (Inherited : 0x0)
struct FCompilerNativizationOptions {
	struct FName PlatformName; // 0x0(0x8)
	bool ServerOnlyPlatform; // 0x8(0x1)
	bool ClientOnlyPlatform; // 0x9(0x1)
	bool bExcludeMonolithicHeaders; // 0xA(0x1)
	unsigned char UnknownData_B[0x0005]; // 0xB(0x5)
	struct TArray<struct FName> ExcludedModules; // 0x10(0x10)
	struct TSet<struct FSoftObjectPath> ExcludedAssets; // 0x20(0x50)
	struct TArray<struct FString> ExcludedFolderPaths; // 0x70(0x10)
};

// ScriptStruct Engine.BPComponentClassOverride
// Size : 0x10 (Inherited : 0x0)
struct FBPComponentClassOverride {
	struct FName ComponentName; // 0x0(0x8)
	class UObject* ComponentClass; // 0x8(0x8)
};

// ScriptStruct Engine.BlueprintCookedComponentInstancingData
// Size : 0x48 (Inherited : 0x0)
struct FBlueprintCookedComponentInstancingData {
	struct TArray<struct FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x0(0x10)
	unsigned char UnknownData_10[0x0011]; // 0x10(0x11)
	bool bHasValidCookedData; // 0x21(0x1)
	unsigned char UnknownData_22[0x0026]; // 0x22(0x26)
};

// ScriptStruct Engine.BlueprintComponentChangedPropertyInfo
// Size : 0x18 (Inherited : 0x0)
struct FBlueprintComponentChangedPropertyInfo {
	struct FName PropertyName; // 0x0(0x8)
	int32_t ArrayIndex; // 0x8(0x4)
	unsigned char UnknownData_C[0x0004]; // 0xC(0x4)
	struct UStruct* PropertyScope; // 0x10(0x8)
};

// ScriptStruct Engine.EventGraphFastCallPair
// Size : 0x10 (Inherited : 0x0)
struct FEventGraphFastCallPair {
	struct UFunction* FunctionToPatch; // 0x0(0x8)
	int32_t EventGraphCallOffset; // 0x8(0x4)
	unsigned char UnknownData_C[0x0004]; // 0xC(0x4)
};

// ScriptStruct Engine.BlueprintDebugData
// Size : 0x1 (Inherited : 0x0)
struct FBlueprintDebugData {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
};

// ScriptStruct Engine.PointerToUberGraphFrame
// Size : 0x8 (Inherited : 0x0)
struct FPointerToUberGraphFrame {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
};

// ScriptStruct Engine.DebuggingInfoForSingleFunction
// Size : 0x190 (Inherited : 0x0)
struct FDebuggingInfoForSingleFunction {
	unsigned char UnknownData_0[0x0190]; // 0x0(0x190)
};

// ScriptStruct Engine.NodeToCodeAssociation
// Size : 0x14 (Inherited : 0x0)
struct FNodeToCodeAssociation {
	unsigned char UnknownData_0[0x0014]; // 0x0(0x14)
};

// ScriptStruct Engine.AnimCurveType
// Size : 0x2 (Inherited : 0x0)
struct FAnimCurveType {
	unsigned char UnknownData_0[0x0002]; // 0x0(0x2)
};

// ScriptStruct Engine.BookmarkBaseJumpToSettings
// Size : 0x1 (Inherited : 0x0)
struct FBookmarkBaseJumpToSettings {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
};

// ScriptStruct Engine.BookmarkJumpToSettings
// Size : 0x1 (Inherited : 0x1)
struct FBookmarkJumpToSettings : FBookmarkBaseJumpToSettings {
};

// ScriptStruct Engine.Bookmark2DJumpToSettings
// Size : 0x1 (Inherited : 0x0)
struct FBookmark2DJumpToSettings {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
};

// ScriptStruct Engine.GeomSelection
// Size : 0xC (Inherited : 0x0)
struct FGeomSelection {
	int32_t Type; // 0x0(0x4)
	int32_t Index; // 0x4(0x4)
	int32_t SelectionIndex; // 0x8(0x4)
};

// ScriptStruct Engine.BuilderPoly
// Size : 0x20 (Inherited : 0x0)
struct FBuilderPoly {
	struct TArray<int32_t> VertexIndices; // 0x0(0x10)
	int32_t Direction; // 0x10(0x4)
	struct FName ItemName; // 0x14(0x8)
	int32_t PolyFlags; // 0x1C(0x4)
};

// ScriptStruct Engine.CachedAnimTransitionData
// Size : 0x24 (Inherited : 0x0)
struct FCachedAnimTransitionData {
	struct FName StateMachineName; // 0x0(0x8)
	struct FName FromStateName; // 0x8(0x8)
	struct FName ToStateName; // 0x10(0x8)
	unsigned char UnknownData_18[0x000C]; // 0x18(0xC)
};

// ScriptStruct Engine.CachedAnimRelevancyData
// Size : 0x1C (Inherited : 0x0)
struct FCachedAnimRelevancyData {
	struct FName StateMachineName; // 0x0(0x8)
	struct FName StateName; // 0x8(0x8)
	unsigned char UnknownData_10[0x000C]; // 0x10(0xC)
};

// ScriptStruct Engine.CachedAnimAssetPlayerData
// Size : 0x18 (Inherited : 0x0)
struct FCachedAnimAssetPlayerData {
	struct FName StateMachineName; // 0x0(0x8)
	struct FName StateName; // 0x8(0x8)
	unsigned char UnknownData_10[0x0008]; // 0x10(0x8)
};

// ScriptStruct Engine.CachedAnimStateArray
// Size : 0x18 (Inherited : 0x0)
struct FCachedAnimStateArray {
	struct TArray<struct FCachedAnimStateData> States; // 0x0(0x10)
	unsigned char UnknownData_10[0x0008]; // 0x10(0x8)
};

// ScriptStruct Engine.CachedAnimStateData
// Size : 0x1C (Inherited : 0x0)
struct FCachedAnimStateData {
	struct FName StateMachineName; // 0x0(0x8)
	struct FName StateName; // 0x8(0x8)
	unsigned char UnknownData_10[0x000C]; // 0x10(0xC)
};

// ScriptStruct Engine.ActiveCameraShakeInfo
// Size : 0x10 (Inherited : 0x0)
struct FActiveCameraShakeInfo {
	struct UCameraShake* ShakeInstance; // 0x0(0x8)
	struct FWeakObjectPtr<struct UCameraShakeSourceComponent> ShakeSource; // 0x8(0x8)
};

// ScriptStruct Engine.PooledCameraShakes
// Size : 0x10 (Inherited : 0x0)
struct FPooledCameraShakes {
	struct TArray<struct UCameraShake*> PooledShakes; // 0x0(0x10)
};

// ScriptStruct Engine.VOscillator
// Size : 0x24 (Inherited : 0x0)
struct FVOscillator {
	struct FFOscillator X; // 0x0(0xC)
	struct FFOscillator Y; // 0xC(0xC)
	struct FFOscillator Z; // 0x18(0xC)
};

// ScriptStruct Engine.FOscillator
// Size : 0xC (Inherited : 0x0)
struct FFOscillator {
	float Amplitude; // 0x0(0x4)
	float Frequency; // 0x4(0x4)
	enum class EInitialOscillatorOffset InitialOffset; // 0x8(0x1)
	enum class EOscillatorWaveform Waveform; // 0x9(0x1)
	unsigned char UnknownData_A[0x0002]; // 0xA(0x2)
};

// ScriptStruct Engine.ROscillator
// Size : 0x24 (Inherited : 0x0)
struct FROscillator {
	struct FFOscillator Pitch; // 0x0(0xC)
	struct FFOscillator Yaw; // 0xC(0xC)
	struct FFOscillator Roll; // 0x18(0xC)
};

// ScriptStruct Engine.DummySpacerCameraTypes
// Size : 0x1 (Inherited : 0x0)
struct FDummySpacerCameraTypes {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
};

// ScriptStruct Engine.MinimalViewInfo
// Size : 0x5D0 (Inherited : 0x0)
struct FMinimalViewInfo {
	struct FVector Location; // 0x0(0xC)
	struct FRotator Rotation; // 0xC(0xC)
	float FOV; // 0x18(0x4)
	float DesiredFOV; // 0x1C(0x4)
	float OrthoWidth; // 0x20(0x4)
	float OrthoNearClipPlane; // 0x24(0x4)
	float OrthoFarClipPlane; // 0x28(0x4)
	float AspectRatio; // 0x2C(0x4)
	unsigned char bConstrainAspectRatio : 1; // 0x30(0x1)
	unsigned char bUseFieldOfViewForLOD : 1; // 0x30(0x1)
	unsigned char UnknownData_30_2 : 6; // 0x30(0x1)
	unsigned char UnknownData_31[0x0003]; // 0x31(0x3)
	enum class ECameraProjectionMode ProjectionMode; // 0x34(0x1)
	unsigned char UnknownData_35[0x0003]; // 0x35(0x3)
	float PostProcessBlendWeight; // 0x38(0x4)
	unsigned char UnknownData_3C[0x0004]; // 0x3C(0x4)
	struct FPostProcessSettings PostProcessSettings; // 0x40(0x540)
	struct FVector2D OffCenterProjectionOffset; // 0x580(0x8)
	unsigned char UnknownData_588[0x0048]; // 0x588(0x48)
};

// ScriptStruct Engine.PostProcessSettings
// Size : 0x540 (Inherited : 0x0)
struct FPostProcessSettings {
	unsigned char bOverride_WhiteTemp : 1; // 0x0(0x1)
	unsigned char bOverride_WhiteTint : 1; // 0x0(0x1)
	unsigned char bOverride_ColorSaturation : 1; // 0x0(0x1)
	unsigned char bOverride_ColorContrast : 1; // 0x0(0x1)
	unsigned char bOverride_ColorGamma : 1; // 0x0(0x1)
	unsigned char bOverride_ColorGain : 1; // 0x0(0x1)
	unsigned char bOverride_ColorOffset : 1; // 0x0(0x1)
	unsigned char bOverride_ColorSaturationShadows : 1; // 0x0(0x1)
	unsigned char bOverride_ColorContrastShadows : 1; // 0x1(0x1)
	unsigned char bOverride_ColorGammaShadows : 1; // 0x1(0x1)
	unsigned char bOverride_ColorGainShadows : 1; // 0x1(0x1)
	unsigned char bOverride_ColorOffsetShadows : 1; // 0x1(0x1)
	unsigned char bOverride_ColorSaturationMidtones : 1; // 0x1(0x1)
	unsigned char bOverride_ColorContrastMidtones : 1; // 0x1(0x1)
	unsigned char bOverride_ColorGammaMidtones : 1; // 0x1(0x1)
	unsigned char bOverride_ColorGainMidtones : 1; // 0x1(0x1)
	unsigned char bOverride_ColorOffsetMidtones : 1; // 0x2(0x1)
	unsigned char bOverride_ColorSaturationHighlights : 1; // 0x2(0x1)
	unsigned char bOverride_ColorContrastHighlights : 1; // 0x2(0x1)
	unsigned char bOverride_ColorGammaHighlights : 1; // 0x2(0x1)
	unsigned char bOverride_ColorGainHighlights : 1; // 0x2(0x1)
	unsigned char bOverride_ColorOffsetHighlights : 1; // 0x2(0x1)
	unsigned char bOverride_ColorCorrectionShadowsMax : 1; // 0x2(0x1)
	unsigned char bOverride_ColorCorrectionHighlightsMin : 1; // 0x2(0x1)
	unsigned char bOverride_BlueCorrection : 1; // 0x3(0x1)
	unsigned char bOverride_ExpandGamut : 1; // 0x3(0x1)
	unsigned char bOverride_FilmWhitePoint : 1; // 0x3(0x1)
	unsigned char bOverride_FilmSaturation : 1; // 0x3(0x1)
	unsigned char bOverride_FilmChannelMixerRed : 1; // 0x3(0x1)
	unsigned char bOverride_FilmChannelMixerGreen : 1; // 0x3(0x1)
	unsigned char bOverride_FilmChannelMixerBlue : 1; // 0x3(0x1)
	unsigned char bOverride_FilmContrast : 1; // 0x3(0x1)
	unsigned char bOverride_FilmDynamicRange : 1; // 0x4(0x1)
	unsigned char bOverride_FilmHealAmount : 1; // 0x4(0x1)
	unsigned char bOverride_FilmToeAmount : 1; // 0x4(0x1)
	unsigned char bOverride_FilmShadowTint : 1; // 0x4(0x1)
	unsigned char bOverride_FilmShadowTintBlend : 1; // 0x4(0x1)
	unsigned char bOverride_FilmShadowTintAmount : 1; // 0x4(0x1)
	unsigned char bOverride_FilmSlope : 1; // 0x4(0x1)
	unsigned char bOverride_FilmToe : 1; // 0x4(0x1)
	unsigned char bOverride_FilmShoulder : 1; // 0x5(0x1)
	unsigned char bOverride_FilmBlackClip : 1; // 0x5(0x1)
	unsigned char bOverride_FilmWhiteClip : 1; // 0x5(0x1)
	unsigned char bOverride_SceneColorTint : 1; // 0x5(0x1)
	unsigned char bOverride_SceneFringeIntensity : 1; // 0x5(0x1)
	unsigned char bOverride_ChromaticAberrationStartOffset : 1; // 0x5(0x1)
	unsigned char bOverride_AmbientCubemapTint : 1; // 0x5(0x1)
	unsigned char bOverride_AmbientCubemapIntensity : 1; // 0x5(0x1)
	unsigned char bOverride_BloomMethod : 1; // 0x6(0x1)
	unsigned char bOverride_BloomIntensity : 1; // 0x6(0x1)
	unsigned char bOverride_BloomThreshold : 1; // 0x6(0x1)
	unsigned char bOverride_Bloom1Tint : 1; // 0x6(0x1)
	unsigned char bOverride_Bloom1Size : 1; // 0x6(0x1)
	unsigned char bOverride_Bloom2Size : 1; // 0x6(0x1)
	unsigned char bOverride_Bloom2Tint : 1; // 0x6(0x1)
	unsigned char bOverride_Bloom3Tint : 1; // 0x6(0x1)
	unsigned char bOverride_Bloom3Size : 1; // 0x7(0x1)
	unsigned char bOverride_Bloom4Tint : 1; // 0x7(0x1)
	unsigned char bOverride_Bloom4Size : 1; // 0x7(0x1)
	unsigned char bOverride_Bloom5Tint : 1; // 0x7(0x1)
	unsigned char bOverride_Bloom5Size : 1; // 0x7(0x1)
	unsigned char bOverride_Bloom6Tint : 1; // 0x7(0x1)
	unsigned char bOverride_Bloom6Size : 1; // 0x7(0x1)
	unsigned char bOverride_BloomSizeScale : 1; // 0x7(0x1)
	unsigned char bOverride_BloomConvolutionTexture : 1; // 0x8(0x1)
	unsigned char bOverride_BloomConvolutionSize : 1; // 0x8(0x1)
	unsigned char bOverride_BloomConvolutionCenterUV : 1; // 0x8(0x1)
	unsigned char bOverride_BloomConvolutionPreFilter : 1; // 0x8(0x1)
	unsigned char bOverride_BloomConvolutionPreFilterMin : 1; // 0x8(0x1)
	unsigned char bOverride_BloomConvolutionPreFilterMax : 1; // 0x8(0x1)
	unsigned char bOverride_BloomConvolutionPreFilterMult : 1; // 0x8(0x1)
	unsigned char bOverride_BloomConvolutionBufferScale : 1; // 0x8(0x1)
	unsigned char bOverride_BloomDirtMaskIntensity : 1; // 0x9(0x1)
	unsigned char bOverride_BloomDirtMaskTint : 1; // 0x9(0x1)
	unsigned char bOverride_BloomDirtMask : 1; // 0x9(0x1)
	unsigned char bOverride_CameraShutterSpeed : 1; // 0x9(0x1)
	unsigned char bOverride_CameraISO : 1; // 0x9(0x1)
	unsigned char bOverride_AutoExposureMethod : 1; // 0x9(0x1)
	unsigned char bOverride_AutoExposureLowPercent : 1; // 0x9(0x1)
	unsigned char bOverride_AutoExposureHighPercent : 1; // 0x9(0x1)
	unsigned char bOverride_AutoExposureMinBrightness : 1; // 0xA(0x1)
	unsigned char bOverride_AutoExposureMaxBrightness : 1; // 0xA(0x1)
	unsigned char bOverride_AutoExposureCalibrationConstant : 1; // 0xA(0x1)
	unsigned char bOverride_AutoExposureSpeedUp : 1; // 0xA(0x1)
	unsigned char bOverride_AutoExposureSpeedDown : 1; // 0xA(0x1)
	unsigned char bOverride_AutoExposureBias : 1; // 0xA(0x1)
	unsigned char bOverride_AutoExposureBiasCurve : 1; // 0xA(0x1)
	unsigned char bOverride_AutoExposureMeterMask : 1; // 0xA(0x1)
	unsigned char bOverride_AutoExposureApplyPhysicalCameraExposure : 1; // 0xB(0x1)
	unsigned char bOverride_HistogramLogMin : 1; // 0xB(0x1)
	unsigned char bOverride_HistogramLogMax : 1; // 0xB(0x1)
	unsigned char bOverride_LensFlareIntensity : 1; // 0xB(0x1)
	unsigned char bOverride_LensFlareTint : 1; // 0xB(0x1)
	unsigned char bOverride_LensFlareTints : 1; // 0xB(0x1)
	unsigned char bOverride_LensFlareBokehSize : 1; // 0xB(0x1)
	unsigned char bOverride_LensFlareBokehShape : 1; // 0xB(0x1)
	unsigned char bOverride_LensFlareThreshold : 1; // 0xC(0x1)
	unsigned char bOverride_VignetteIntensity : 1; // 0xC(0x1)
	unsigned char bOverride_GrainIntensity : 1; // 0xC(0x1)
	unsigned char bOverride_GrainJitter : 1; // 0xC(0x1)
	unsigned char bOverride_AmbientOcclusionIntensity : 1; // 0xC(0x1)
	unsigned char bOverride_AmbientOcclusionStaticFraction : 1; // 0xC(0x1)
	unsigned char bOverride_AmbientOcclusionRadius : 1; // 0xC(0x1)
	unsigned char bOverride_AmbientOcclusionFadeDistance : 1; // 0xC(0x1)
	unsigned char bOverride_AmbientOcclusionFadeRadius : 1; // 0xD(0x1)
	unsigned char bOverride_AmbientOcclusionDistance : 1; // 0xD(0x1)
	unsigned char bOverride_AmbientOcclusionRadiusInWS : 1; // 0xD(0x1)
	unsigned char bOverride_AmbientOcclusionPower : 1; // 0xD(0x1)
	unsigned char bOverride_AmbientOcclusionBias : 1; // 0xD(0x1)
	unsigned char bOverride_AmbientOcclusionQuality : 1; // 0xD(0x1)
	unsigned char bOverride_AmbientOcclusionMipBlend : 1; // 0xD(0x1)
	unsigned char bOverride_AmbientOcclusionMipScale : 1; // 0xD(0x1)
	unsigned char bOverride_AmbientOcclusionMipThreshold : 1; // 0xE(0x1)
	unsigned char UnknownData_E_1 : 7; // 0xE(0x1)
	unsigned char UnknownData_F[0x0001]; // 0xF(0x1)
	unsigned char bOverride_RayTracingAO : 1; // 0x10(0x1)
	unsigned char bOverride_RayTracingAOSamplesPerPixel : 1; // 0x10(0x1)
	unsigned char UnknownData_10_2 : 6; // 0x10(0x1)
	unsigned char UnknownData_11[0x0003]; // 0x11(0x3)
	unsigned char bOverride_LPVIntensity : 1; // 0x14(0x1)
	unsigned char bOverride_LPVDirectionalOcclusionIntensity : 1; // 0x14(0x1)
	unsigned char bOverride_LPVDirectionalOcclusionRadius : 1; // 0x14(0x1)
	unsigned char bOverride_LPVDiffuseOcclusionExponent : 1; // 0x14(0x1)
	unsigned char bOverride_LPVSpecularOcclusionExponent : 1; // 0x14(0x1)
	unsigned char bOverride_LPVDiffuseOcclusionIntensity : 1; // 0x14(0x1)
	unsigned char bOverride_LPVSpecularOcclusionIntensity : 1; // 0x14(0x1)
	unsigned char bOverride_LPVSize : 1; // 0x14(0x1)
	unsigned char bOverride_LPVSecondaryOcclusionIntensity : 1; // 0x15(0x1)
	unsigned char bOverride_LPVSecondaryBounceIntensity : 1; // 0x15(0x1)
	unsigned char bOverride_LPVGeometryVolumeBias : 1; // 0x15(0x1)
	unsigned char bOverride_LPVVplInjectionBias : 1; // 0x15(0x1)
	unsigned char bOverride_LPVEmissiveInjectionIntensity : 1; // 0x15(0x1)
	unsigned char bOverride_LPVFadeRange : 1; // 0x15(0x1)
	unsigned char bOverride_LPVDirectionalOcclusionFadeRange : 1; // 0x15(0x1)
	unsigned char bOverride_IndirectLightingColor : 1; // 0x15(0x1)
	unsigned char bOverride_IndirectLightingIntensity : 1; // 0x16(0x1)
	unsigned char bOverride_ColorGradingIntensity : 1; // 0x16(0x1)
	unsigned char bOverride_ColorGradingLUT : 1; // 0x16(0x1)
	unsigned char bOverride_DepthOfFieldFocalDistance : 1; // 0x16(0x1)
	unsigned char bOverride_DepthOfFieldFstop : 1; // 0x16(0x1)
	unsigned char bOverride_DepthOfFieldMinFstop : 1; // 0x16(0x1)
	unsigned char bOverride_DepthOfFieldBladeCount : 1; // 0x16(0x1)
	unsigned char bOverride_DepthOfFieldSensorWidth : 1; // 0x16(0x1)
	unsigned char bOverride_DepthOfFieldDepthBlurRadius : 1; // 0x17(0x1)
	unsigned char bOverride_DepthOfFieldDepthBlurAmount : 1; // 0x17(0x1)
	unsigned char bOverride_DepthOfFieldFocalRegion : 1; // 0x17(0x1)
	unsigned char bOverride_DepthOfFieldNearTransitionRegion : 1; // 0x17(0x1)
	unsigned char bOverride_DepthOfFieldFarTransitionRegion : 1; // 0x17(0x1)
	unsigned char bOverride_DepthOfFieldScale : 1; // 0x17(0x1)
	unsigned char bOverride_DepthOfFieldNearBlurSize : 1; // 0x17(0x1)
	unsigned char bOverride_DepthOfFieldFarBlurSize : 1; // 0x17(0x1)
	unsigned char bOverride_MobileHQGaussian : 1; // 0x18(0x1)
	unsigned char bOverride_DepthOfFieldOcclusion : 1; // 0x18(0x1)
	unsigned char bOverride_DepthOfFieldSkyFocusDistance : 1; // 0x18(0x1)
	unsigned char bOverride_DepthOfFieldVignetteSize : 1; // 0x18(0x1)
	unsigned char bOverride_MotionBlurAmount : 1; // 0x18(0x1)
	unsigned char bOverride_MotionBlurMax : 1; // 0x18(0x1)
	unsigned char bOverride_MotionBlurTargetFPS : 1; // 0x18(0x1)
	unsigned char bOverride_MotionBlurPerObjectSize : 1; // 0x18(0x1)
	unsigned char bOverride_ScreenPercentage : 1; // 0x19(0x1)
	unsigned char bOverride_ScreenSpaceReflectionIntensity : 1; // 0x19(0x1)
	unsigned char bOverride_ScreenSpaceReflectionQuality : 1; // 0x19(0x1)
	unsigned char bOverride_ScreenSpaceReflectionMaxRoughness : 1; // 0x19(0x1)
	unsigned char bOverride_ScreenSpaceReflectionRoughnessScale : 1; // 0x19(0x1)
	unsigned char UnknownData_19_5 : 3; // 0x19(0x1)
	unsigned char UnknownData_1A[0x0002]; // 0x1A(0x2)
	unsigned char bOverride_ReflectionsType : 1; // 0x1C(0x1)
	unsigned char bOverride_RayTracingReflectionsMaxRoughness : 1; // 0x1C(0x1)
	unsigned char bOverride_RayTracingReflectionsMaxBounces : 1; // 0x1C(0x1)
	unsigned char bOverride_RayTracingReflectionsSamplesPerPixel : 1; // 0x1C(0x1)
	unsigned char bOverride_RayTracingReflectionsShadows : 1; // 0x1C(0x1)
	unsigned char bOverride_RayTracingReflectionsTranslucency : 1; // 0x1C(0x1)
	unsigned char bOverride_TranslucencyType : 1; // 0x1C(0x1)
	unsigned char bOverride_RayTracingTranslucencyMaxRoughness : 1; // 0x1C(0x1)
	unsigned char bOverride_RayTracingTranslucencyRefractionRays : 1; // 0x1D(0x1)
	unsigned char bOverride_RayTracingTranslucencySamplesPerPixel : 1; // 0x1D(0x1)
	unsigned char bOverride_RayTracingTranslucencyShadows : 1; // 0x1D(0x1)
	unsigned char bOverride_RayTracingTranslucencyRefraction : 1; // 0x1D(0x1)
	unsigned char bOverride_RayTracingGI : 1; // 0x1D(0x1)
	unsigned char bOverride_RayTracingGIMaxBounces : 1; // 0x1D(0x1)
	unsigned char bOverride_RayTracingGISamplesPerPixel : 1; // 0x1D(0x1)
	unsigned char bOverride_PathTracingMaxBounces : 1; // 0x1D(0x1)
	unsigned char bOverride_PathTracingSamplesPerPixel : 1; // 0x1E(0x1)
	unsigned char UnknownData_1E_1 : 7; // 0x1E(0x1)
	unsigned char UnknownData_1F[0x0001]; // 0x1F(0x1)
	unsigned char bMobileHQGaussian : 1; // 0x20(0x1)
	unsigned char UnknownData_20_1 : 7; // 0x20(0x1)
	enum class EBloomMethod BloomMethod; // 0x21(0x1)
	enum class EAutoExposureMethod AutoExposureMethod; // 0x22(0x1)
	unsigned char UnknownData_23[0x0001]; // 0x23(0x1)
	float WhiteTemp; // 0x24(0x4)
	float WhiteTint; // 0x28(0x4)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
	struct FVector4 ColorSaturation; // 0x30(0x10)
	struct FVector4 ColorContrast; // 0x40(0x10)
	struct FVector4 ColorGamma; // 0x50(0x10)
	struct FVector4 ColorGain; // 0x60(0x10)
	struct FVector4 ColorOffset; // 0x70(0x10)
	struct FVector4 ColorSaturationShadows; // 0x80(0x10)
	struct FVector4 ColorContrastShadows; // 0x90(0x10)
	struct FVector4 ColorGammaShadows; // 0xA0(0x10)
	struct FVector4 ColorGainShadows; // 0xB0(0x10)
	struct FVector4 ColorOffsetShadows; // 0xC0(0x10)
	struct FVector4 ColorSaturationMidtones; // 0xD0(0x10)
	struct FVector4 ColorContrastMidtones; // 0xE0(0x10)
	struct FVector4 ColorGammaMidtones; // 0xF0(0x10)
	struct FVector4 ColorGainMidtones; // 0x100(0x10)
	struct FVector4 ColorOffsetMidtones; // 0x110(0x10)
	struct FVector4 ColorSaturationHighlights; // 0x120(0x10)
	struct FVector4 ColorContrastHighlights; // 0x130(0x10)
	struct FVector4 ColorGammaHighlights; // 0x140(0x10)
	struct FVector4 ColorGainHighlights; // 0x150(0x10)
	struct FVector4 ColorOffsetHighlights; // 0x160(0x10)
	float ColorCorrectionHighlightsMin; // 0x170(0x4)
	float ColorCorrectionShadowsMax; // 0x174(0x4)
	float BlueCorrection; // 0x178(0x4)
	float ExpandGamut; // 0x17C(0x4)
	float FilmSlope; // 0x180(0x4)
	float FilmToe; // 0x184(0x4)
	float FilmShoulder; // 0x188(0x4)
	float FilmBlackClip; // 0x18C(0x4)
	float FilmWhiteClip; // 0x190(0x4)
	struct FLinearColor FilmWhitePoint; // 0x194(0x10)
	struct FLinearColor FilmShadowTint; // 0x1A4(0x10)
	float FilmShadowTintBlend; // 0x1B4(0x4)
	float FilmShadowTintAmount; // 0x1B8(0x4)
	float FilmSaturation; // 0x1BC(0x4)
	struct FLinearColor FilmChannelMixerRed; // 0x1C0(0x10)
	struct FLinearColor FilmChannelMixerGreen; // 0x1D0(0x10)
	struct FLinearColor FilmChannelMixerBlue; // 0x1E0(0x10)
	float FilmContrast; // 0x1F0(0x4)
	float FilmToeAmount; // 0x1F4(0x4)
	float FilmHealAmount; // 0x1F8(0x4)
	float FilmDynamicRange; // 0x1FC(0x4)
	struct FLinearColor SceneColorTint; // 0x200(0x10)
	float SceneFringeIntensity; // 0x210(0x4)
	float ChromaticAberrationStartOffset; // 0x214(0x4)
	float BloomIntensity; // 0x218(0x4)
	float BloomThreshold; // 0x21C(0x4)
	float BloomSizeScale; // 0x220(0x4)
	float Bloom1Size; // 0x224(0x4)
	float Bloom2Size; // 0x228(0x4)
	float Bloom3Size; // 0x22C(0x4)
	float Bloom4Size; // 0x230(0x4)
	float Bloom5Size; // 0x234(0x4)
	float Bloom6Size; // 0x238(0x4)
	struct FLinearColor Bloom1Tint; // 0x23C(0x10)
	struct FLinearColor Bloom2Tint; // 0x24C(0x10)
	struct FLinearColor Bloom3Tint; // 0x25C(0x10)
	struct FLinearColor Bloom4Tint; // 0x26C(0x10)
	struct FLinearColor Bloom5Tint; // 0x27C(0x10)
	struct FLinearColor Bloom6Tint; // 0x28C(0x10)
	float BloomConvolutionSize; // 0x29C(0x4)
	struct UTexture2D* BloomConvolutionTexture; // 0x2A0(0x8)
	struct FVector2D BloomConvolutionCenterUV; // 0x2A8(0x8)
	float BloomConvolutionPreFilterMin; // 0x2B0(0x4)
	float BloomConvolutionPreFilterMax; // 0x2B4(0x4)
	float BloomConvolutionPreFilterMult; // 0x2B8(0x4)
	float BloomConvolutionBufferScale; // 0x2BC(0x4)
	struct UTexture* BloomDirtMask; // 0x2C0(0x8)
	float BloomDirtMaskIntensity; // 0x2C8(0x4)
	struct FLinearColor BloomDirtMaskTint; // 0x2CC(0x10)
	struct FLinearColor AmbientCubemapTint; // 0x2DC(0x10)
	float AmbientCubemapIntensity; // 0x2EC(0x4)
	struct UTextureCube* AmbientCubemap; // 0x2F0(0x8)
	float CameraShutterSpeed; // 0x2F8(0x4)
	float CameraISO; // 0x2FC(0x4)
	float DepthOfFieldFstop; // 0x300(0x4)
	float DepthOfFieldMinFstop; // 0x304(0x4)
	int32_t DepthOfFieldBladeCount; // 0x308(0x4)
	float AutoExposureBias; // 0x30C(0x4)
	float AutoExposureBiasBackup; // 0x310(0x4)
	unsigned char bOverride_AutoExposureBiasBackup : 1; // 0x314(0x1)
	unsigned char UnknownData_314_1 : 7; // 0x314(0x1)
	unsigned char UnknownData_315[0x0003]; // 0x315(0x3)
	unsigned char AutoExposureApplyPhysicalCameraExposure : 1; // 0x318(0x1)
	unsigned char UnknownData_318_1 : 7; // 0x318(0x1)
	unsigned char UnknownData_319[0x0007]; // 0x319(0x7)
	struct UCurveFloat* AutoExposureBiasCurve; // 0x320(0x8)
	struct UTexture* AutoExposureMeterMask; // 0x328(0x8)
	float AutoExposureLowPercent; // 0x330(0x4)
	float AutoExposureHighPercent; // 0x334(0x4)
	float AutoExposureMinBrightness; // 0x338(0x4)
	float AutoExposureMaxBrightness; // 0x33C(0x4)
	float AutoExposureSpeedUp; // 0x340(0x4)
	float AutoExposureSpeedDown; // 0x344(0x4)
	float HistogramLogMin; // 0x348(0x4)
	float HistogramLogMax; // 0x34C(0x4)
	float AutoExposureCalibrationConstant; // 0x350(0x4)
	float LensFlareIntensity; // 0x354(0x4)
	struct FLinearColor LensFlareTint; // 0x358(0x10)
	float LensFlareBokehSize; // 0x368(0x4)
	float LensFlareThreshold; // 0x36C(0x4)
	struct UTexture* LensFlareBokehShape; // 0x370(0x8)
	struct FLinearColor LensFlareTints[8]; // 0x378(0x80)
	float VignetteIntensity; // 0x3F8(0x4)
	float GrainJitter; // 0x3FC(0x4)
	float GrainIntensity; // 0x400(0x4)
	float AmbientOcclusionIntensity; // 0x404(0x4)
	float AmbientOcclusionStaticFraction; // 0x408(0x4)
	float AmbientOcclusionRadius; // 0x40C(0x4)
	unsigned char AmbientOcclusionRadiusInWS : 1; // 0x410(0x1)
	unsigned char UnknownData_410_1 : 7; // 0x410(0x1)
	unsigned char UnknownData_411[0x0003]; // 0x411(0x3)
	float AmbientOcclusionFadeDistance; // 0x414(0x4)
	float AmbientOcclusionFadeRadius; // 0x418(0x4)
	float AmbientOcclusionDistance; // 0x41C(0x4)
	float AmbientOcclusionPower; // 0x420(0x4)
	float AmbientOcclusionBias; // 0x424(0x4)
	float AmbientOcclusionQuality; // 0x428(0x4)
	float AmbientOcclusionMipBlend; // 0x42C(0x4)
	float AmbientOcclusionMipScale; // 0x430(0x4)
	float AmbientOcclusionMipThreshold; // 0x434(0x4)
	unsigned char RayTracingAO : 1; // 0x438(0x1)
	unsigned char UnknownData_438_1 : 7; // 0x438(0x1)
	unsigned char UnknownData_439[0x0003]; // 0x439(0x3)
	int32_t RayTracingAOSamplesPerPixel; // 0x43C(0x4)
	struct FLinearColor IndirectLightingColor; // 0x440(0x10)
	float IndirectLightingIntensity; // 0x450(0x4)
	enum class ERayTracingGlobalIlluminationType RayTracingGIType; // 0x454(0x1)
	unsigned char UnknownData_455[0x0003]; // 0x455(0x3)
	int32_t RayTracingGIMaxBounces; // 0x458(0x4)
	int32_t RayTracingGISamplesPerPixel; // 0x45C(0x4)
	float ColorGradingIntensity; // 0x460(0x4)
	unsigned char UnknownData_464[0x0004]; // 0x464(0x4)
	struct UTexture* ColorGradingLUT; // 0x468(0x8)
	float DepthOfFieldSensorWidth; // 0x470(0x4)
	float DepthOfFieldFocalDistance; // 0x474(0x4)
	float DepthOfFieldDepthBlurAmount; // 0x478(0x4)
	float DepthOfFieldDepthBlurRadius; // 0x47C(0x4)
	float DepthOfFieldFocalRegion; // 0x480(0x4)
	float DepthOfFieldNearTransitionRegion; // 0x484(0x4)
	float DepthOfFieldFarTransitionRegion; // 0x488(0x4)
	float DepthOfFieldScale; // 0x48C(0x4)
	float DepthOfFieldNearBlurSize; // 0x490(0x4)
	float DepthOfFieldFarBlurSize; // 0x494(0x4)
	float DepthOfFieldOcclusion; // 0x498(0x4)
	float DepthOfFieldSkyFocusDistance; // 0x49C(0x4)
	float DepthOfFieldVignetteSize; // 0x4A0(0x4)
	float MotionBlurAmount; // 0x4A4(0x4)
	float MotionBlurMax; // 0x4A8(0x4)
	int32_t MotionBlurTargetFPS; // 0x4AC(0x4)
	float MotionBlurPerObjectSize; // 0x4B0(0x4)
	float LPVIntensity; // 0x4B4(0x4)
	float LPVVplInjectionBias; // 0x4B8(0x4)
	float LPVSize; // 0x4BC(0x4)
	float LPVSecondaryOcclusionIntensity; // 0x4C0(0x4)
	float LPVSecondaryBounceIntensity; // 0x4C4(0x4)
	float LPVGeometryVolumeBias; // 0x4C8(0x4)
	float LPVEmissiveInjectionIntensity; // 0x4CC(0x4)
	float LPVDirectionalOcclusionIntensity; // 0x4D0(0x4)
	float LPVDirectionalOcclusionRadius; // 0x4D4(0x4)
	float LPVDiffuseOcclusionExponent; // 0x4D8(0x4)
	float LPVSpecularOcclusionExponent; // 0x4DC(0x4)
	float LPVDiffuseOcclusionIntensity; // 0x4E0(0x4)
	float LPVSpecularOcclusionIntensity; // 0x4E4(0x4)
	enum class EReflectionsType ReflectionsType; // 0x4E8(0x1)
	unsigned char UnknownData_4E9[0x0003]; // 0x4E9(0x3)
	float ScreenSpaceReflectionIntensity; // 0x4EC(0x4)
	float ScreenSpaceReflectionQuality; // 0x4F0(0x4)
	float ScreenSpaceReflectionMaxRoughness; // 0x4F4(0x4)
	float RayTracingReflectionsMaxRoughness; // 0x4F8(0x4)
	int32_t RayTracingReflectionsMaxBounces; // 0x4FC(0x4)
	int32_t RayTracingReflectionsSamplesPerPixel; // 0x500(0x4)
	enum class EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows; // 0x504(0x1)
	unsigned char RayTracingReflectionsTranslucency : 1; // 0x505(0x1)
	unsigned char UnknownData_505_1 : 7; // 0x505(0x1)
	enum class ETranslucencyType TranslucencyType; // 0x506(0x1)
	unsigned char UnknownData_507[0x0001]; // 0x507(0x1)
	float RayTracingTranslucencyMaxRoughness; // 0x508(0x4)
	int32_t RayTracingTranslucencyRefractionRays; // 0x50C(0x4)
	int32_t RayTracingTranslucencySamplesPerPixel; // 0x510(0x4)
	enum class EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows; // 0x514(0x1)
	unsigned char RayTracingTranslucencyRefraction : 1; // 0x515(0x1)
	unsigned char UnknownData_515_1 : 7; // 0x515(0x1)
	unsigned char UnknownData_516[0x0002]; // 0x516(0x2)
	int32_t PathTracingMaxBounces; // 0x518(0x4)
	int32_t PathTracingSamplesPerPixel; // 0x51C(0x4)
	float LPVFadeRange; // 0x520(0x4)
	float LPVDirectionalOcclusionFadeRange; // 0x524(0x4)
	float ScreenPercentage; // 0x528(0x4)
	unsigned char UnknownData_52C[0x0004]; // 0x52C(0x4)
	struct FWeightedBlendables WeightedBlendables; // 0x530(0x10)
};

// ScriptStruct Engine.WeightedBlendables
// Size : 0x10 (Inherited : 0x0)
struct FWeightedBlendables {
	struct TArray<struct FWeightedBlendable> Array; // 0x0(0x10)
};

// ScriptStruct Engine.WeightedBlendable
// Size : 0x10 (Inherited : 0x0)
struct FWeightedBlendable {
	float Weight; // 0x0(0x4)
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
	struct UObject* Object; // 0x8(0x8)
};

// ScriptStruct Engine.CanvasIcon
// Size : 0x18 (Inherited : 0x0)
struct FCanvasIcon {
	struct UTexture* Texture; // 0x0(0x8)
	float U; // 0x8(0x4)
	float V; // 0xC(0x4)
	float UL; // 0x10(0x4)
	float VL; // 0x14(0x4)
};

// ScriptStruct Engine.WrappedStringElement
// Size : 0x18 (Inherited : 0x0)
struct FWrappedStringElement {
	struct FString Value; // 0x0(0x10)
	struct FVector2D LineExtent; // 0x10(0x8)
};

// ScriptStruct Engine.TextSizingParameters
// Size : 0x28 (Inherited : 0x0)
struct FTextSizingParameters {
	float DrawX; // 0x0(0x4)
	float DrawY; // 0x4(0x4)
	float DrawXL; // 0x8(0x4)
	float DrawYL; // 0xC(0x4)
	struct FVector2D Scaling; // 0x10(0x8)
	struct UFont* DrawFont; // 0x18(0x8)
	struct FVector2D SpacingAdjust; // 0x20(0x8)
};

// ScriptStruct Engine.BasedMovementInfo
// Size : 0x30 (Inherited : 0x0)
struct FBasedMovementInfo {
	struct UPrimitiveComponent* MovementBase; // 0x0(0x8)
	struct FName BoneName; // 0x8(0x8)
	struct FVector_NetQuantize100 Location; // 0x10(0xC)
	struct FRotator Rotation; // 0x1C(0xC)
	bool bServerHasBaseComponent; // 0x28(0x1)
	bool bRelativeRotation; // 0x29(0x1)
	bool bServerHasVelocity; // 0x2A(0x1)
	unsigned char UnknownData_2B[0x0005]; // 0x2B(0x5)
};

// ScriptStruct Engine.SimulatedRootMotionReplicatedMove
// Size : 0xA0 (Inherited : 0x0)
struct FSimulatedRootMotionReplicatedMove {
	float Time; // 0x0(0x4)
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
	struct FRepRootMotionMontage RootMotion; // 0x8(0x98)
};

// ScriptStruct Engine.RepRootMotionMontage
// Size : 0x98 (Inherited : 0x0)
struct FRepRootMotionMontage {
	bool bIsActive; // 0x0(0x1)
	unsigned char UnknownData_1[0x0007]; // 0x1(0x7)
	struct UAnimMontage* AnimMontage; // 0x8(0x8)
	float Position; // 0x10(0x4)
	struct FVector_NetQuantize100 Location; // 0x14(0xC)
	struct FRotator Rotation; // 0x20(0xC)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
	struct UPrimitiveComponent* MovementBase; // 0x30(0x8)
	struct FName MovementBaseBoneName; // 0x38(0x8)
	bool bRelativePosition; // 0x40(0x1)
	bool bRelativeRotation; // 0x41(0x1)
	unsigned char UnknownData_42[0x0006]; // 0x42(0x6)
	struct FRootMotionSourceGroup AuthoritativeRootMotion; // 0x48(0x38)
	struct FVector_NetQuantize10 Acceleration; // 0x80(0xC)
	struct FVector_NetQuantize10 LinearVelocity; // 0x8C(0xC)
};

// ScriptStruct Engine.Vector_NetQuantize10
// Size : 0xC (Inherited : 0xC)
struct FVector_NetQuantize10 : FVector {
};

// ScriptStruct Engine.RootMotionSourceGroup
// Size : 0x38 (Inherited : 0x0)
struct FRootMotionSourceGroup {
	unsigned char UnknownData_0[0x0028]; // 0x0(0x28)
	unsigned char bHasAdditiveSources : 1; // 0x28(0x1)
	unsigned char bHasOverrideSources : 1; // 0x28(0x1)
	unsigned char bHasOverrideSourcesWithIgnoreZAccumulate : 1; // 0x28(0x1)
	unsigned char bIsAdditiveVelocityApplied : 1; // 0x28(0x1)
	unsigned char UnknownData_28_4 : 4; // 0x28(0x1)
	struct FRootMotionSourceSettings LastAccumulatedSettings; // 0x29(0x1)
	unsigned char UnknownData_2A[0x0002]; // 0x2A(0x2)
	struct FVector_NetQuantize10 LastPreAdditiveVelocity; // 0x2C(0xC)
};

// ScriptStruct Engine.RootMotionSourceSettings
// Size : 0x1 (Inherited : 0x0)
struct FRootMotionSourceSettings {
	enum class None Flags; // 0x0(0x1)
};

// ScriptStruct Engine.CharacterMovementComponentPostPhysicsTickFunction
// Size : 0x30 (Inherited : 0x28)
struct FCharacterMovementComponentPostPhysicsTickFunction : FTickFunction {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// ScriptStruct Engine.FindFloorResult
// Size : 0x94 (Inherited : 0x0)
struct FFindFloorResult {
	unsigned char bBlockingHit : 1; // 0x0(0x1)
	unsigned char bWalkableFloor : 1; // 0x0(0x1)
	unsigned char bLineTrace : 1; // 0x0(0x1)
	unsigned char UnknownData_0_3 : 5; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float FloorDist; // 0x4(0x4)
	float LineDist; // 0x8(0x4)
	struct FHitResult HitResult; // 0xC(0x88)
};

// ScriptStruct Engine.ChildActorComponentInstanceData
// Size : 0xD8 (Inherited : 0xA8)
struct FChildActorComponentInstanceData : FSceneComponentInstanceData {
	class AActor* ChildActorClass; // 0xA8(0x8)
	struct FName ChildActorName; // 0xB0(0x8)
	struct TArray<struct FChildActorAttachedActorInfo> AttachedActors; // 0xB8(0x10)
	unsigned char UnknownData_C8[0x0010]; // 0xC8(0x10)
};

// ScriptStruct Engine.ChildActorAttachedActorInfo
// Size : 0x40 (Inherited : 0x0)
struct FChildActorAttachedActorInfo {
	struct FWeakObjectPtr<struct AActor> Actor; // 0x0(0x8)
	struct FName SocketName; // 0x8(0x8)
	struct FTransform RelativeTransform; // 0x10(0x30)
};

// ScriptStruct Engine.CustomProfile
// Size : 0x18 (Inherited : 0x0)
struct FCustomProfile {
	struct FName Name; // 0x0(0x8)
	struct TArray<struct FResponseChannel> CustomResponses; // 0x8(0x10)
};

// ScriptStruct Engine.CustomChannelSetup
// Size : 0xC (Inherited : 0x0)
struct FCustomChannelSetup {
	enum class ECollisionChannel Channel; // 0x0(0x1)
	enum class ECollisionResponse DefaultResponse; // 0x1(0x1)
	bool bTraceType; // 0x2(0x1)
	bool bStaticObject; // 0x3(0x1)
	struct FName Name; // 0x4(0x8)
};

// ScriptStruct Engine.CollisionResponseTemplate
// Size : 0x48 (Inherited : 0x0)
struct FCollisionResponseTemplate {
	struct FName Name; // 0x0(0x8)
	enum class ECollisionEnabled CollisionEnabled; // 0x8(0x1)
	unsigned char UnknownData_9[0x0001]; // 0x9(0x1)
	bool bCanModify; // 0xA(0x1)
	unsigned char UnknownData_B[0x0021]; // 0xB(0x21)
	struct FName ObjectTypeName; // 0x2C(0x8)
	unsigned char UnknownData_34[0x0004]; // 0x34(0x4)
	struct TArray<struct FResponseChannel> CustomResponses; // 0x38(0x10)
};

// ScriptStruct Engine.BlueprintComponentDelegateBinding
// Size : 0x18 (Inherited : 0x0)
struct FBlueprintComponentDelegateBinding {
	struct FName ComponentPropertyName; // 0x0(0x8)
	struct FName DelegatePropertyName; // 0x8(0x8)
	struct FName FunctionNameToBind; // 0x10(0x8)
};

// ScriptStruct Engine.MeshUVChannelInfo
// Size : 0x14 (Inherited : 0x0)
struct FMeshUVChannelInfo {
	bool bInitialized; // 0x0(0x1)
	bool bOverrideDensities; // 0x1(0x1)
	unsigned char UnknownData_2[0x0002]; // 0x2(0x2)
	float LocalUVDensities[4]; // 0x4(0x10)
};

// ScriptStruct Engine.AutoCompleteNode
// Size : 0x28 (Inherited : 0x0)
struct FAutoCompleteNode {
	int32_t IndexChar; // 0x0(0x4)
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
	struct TArray<int32_t> AutoCompleteListIndices; // 0x8(0x10)
	unsigned char UnknownData_18[0x0010]; // 0x18(0x10)
};

// ScriptStruct Engine.AngularDriveConstraint
// Size : 0x4C (Inherited : 0x0)
struct FAngularDriveConstraint {
	struct FConstraintDrive TwistDrive; // 0x0(0x10)
	struct FConstraintDrive SwingDrive; // 0x10(0x10)
	struct FConstraintDrive SlerpDrive; // 0x20(0x10)
	struct FRotator OrientationTarget; // 0x30(0xC)
	struct FVector AngularVelocityTarget; // 0x3C(0xC)
	enum class EAngularDriveMode AngularDriveMode; // 0x48(0x1)
	unsigned char UnknownData_49[0x0003]; // 0x49(0x3)
};

// ScriptStruct Engine.ConstraintDrive
// Size : 0x10 (Inherited : 0x0)
struct FConstraintDrive {
	float Stiffness; // 0x0(0x4)
	float Damping; // 0x4(0x4)
	float MaxForce; // 0x8(0x4)
	unsigned char bEnablePositionDrive : 1; // 0xC(0x1)
	unsigned char bEnableVelocityDrive : 1; // 0xC(0x1)
	unsigned char UnknownData_C_2 : 6; // 0xC(0x1)
	unsigned char UnknownData_D[0x0003]; // 0xD(0x3)
};

// ScriptStruct Engine.LinearDriveConstraint
// Size : 0x4C (Inherited : 0x0)
struct FLinearDriveConstraint {
	struct FVector PositionTarget; // 0x0(0xC)
	struct FVector VelocityTarget; // 0xC(0xC)
	struct FConstraintDrive XDrive; // 0x18(0x10)
	struct FConstraintDrive YDrive; // 0x28(0x10)
	struct FConstraintDrive ZDrive; // 0x38(0x10)
	unsigned char bEnablePositionDrive : 1; // 0x48(0x1)
	unsigned char UnknownData_48_1 : 7; // 0x48(0x1)
	unsigned char UnknownData_49[0x0003]; // 0x49(0x3)
};

// ScriptStruct Engine.ConstraintInstance
// Size : 0x1B8 (Inherited : 0x0)
struct FConstraintInstance {
	unsigned char UnknownData_0[0x0018]; // 0x0(0x18)
	struct FName JointName; // 0x18(0x8)
	struct FName ConstraintBone1; // 0x20(0x8)
	struct FName ConstraintBone2; // 0x28(0x8)
	struct FVector Pos1; // 0x30(0xC)
	struct FVector PriAxis1; // 0x3C(0xC)
	struct FVector SecAxis1; // 0x48(0xC)
	struct FVector Pos2; // 0x54(0xC)
	struct FVector PriAxis2; // 0x60(0xC)
	struct FVector SecAxis2; // 0x6C(0xC)
	struct FRotator AngularRotationOffset; // 0x78(0xC)
	unsigned char bScaleLinearLimits : 1; // 0x84(0x1)
	unsigned char UnknownData_84_1 : 7; // 0x84(0x1)
	unsigned char UnknownData_85[0x0007]; // 0x85(0x7)
	struct FConstraintProfileProperties ProfileInstance; // 0x8C(0x104)
	unsigned char UnknownData_190[0x0028]; // 0x190(0x28)
};

// ScriptStruct Engine.ConstraintProfileProperties
// Size : 0x104 (Inherited : 0x0)
struct FConstraintProfileProperties {
	float ProjectionLinearTolerance; // 0x0(0x4)
	float ProjectionAngularTolerance; // 0x4(0x4)
	float LinearBreakThreshold; // 0x8(0x4)
	float AngularBreakThreshold; // 0xC(0x4)
	struct FLinearConstraint LinearLimit; // 0x10(0x1C)
	struct FConeConstraint ConeLimit; // 0x2C(0x20)
	struct FTwistConstraint TwistLimit; // 0x4C(0x1C)
	struct FLinearDriveConstraint LinearDrive; // 0x68(0x4C)
	struct FAngularDriveConstraint AngularDrive; // 0xB4(0x4C)
	unsigned char bDisableCollision : 1; // 0x100(0x1)
	unsigned char bParentDominates : 1; // 0x100(0x1)
	unsigned char bEnableProjection : 1; // 0x100(0x1)
	unsigned char bAngularBreakable : 1; // 0x100(0x1)
	unsigned char bLinearBreakable : 1; // 0x100(0x1)
	unsigned char UnknownData_100_5 : 3; // 0x100(0x1)
	unsigned char UnknownData_101[0x0003]; // 0x101(0x3)
};

// ScriptStruct Engine.ConstraintBaseParams
// Size : 0x14 (Inherited : 0x0)
struct FConstraintBaseParams {
	float Stiffness; // 0x0(0x4)
	float Damping; // 0x4(0x4)
	float Restitution; // 0x8(0x4)
	float ContactDistance; // 0xC(0x4)
	unsigned char bSoftConstraint : 1; // 0x10(0x1)
	unsigned char UnknownData_10_1 : 7; // 0x10(0x1)
	unsigned char UnknownData_11[0x0003]; // 0x11(0x3)
};

// ScriptStruct Engine.TwistConstraint
// Size : 0x1C (Inherited : 0x14)
struct FTwistConstraint : FConstraintBaseParams {
	float TwistLimitDegrees; // 0x14(0x4)
	enum class EAngularConstraintMotion TwistMotion; // 0x18(0x1)
	unsigned char UnknownData_19[0x0003]; // 0x19(0x3)
};

// ScriptStruct Engine.ConeConstraint
// Size : 0x20 (Inherited : 0x14)
struct FConeConstraint : FConstraintBaseParams {
	float Swing1LimitDegrees; // 0x14(0x4)
	float Swing2LimitDegrees; // 0x18(0x4)
	enum class EAngularConstraintMotion Swing1Motion; // 0x1C(0x1)
	enum class EAngularConstraintMotion Swing2Motion; // 0x1D(0x1)
	unsigned char UnknownData_1E[0x0002]; // 0x1E(0x2)
};

// ScriptStruct Engine.LinearConstraint
// Size : 0x1C (Inherited : 0x14)
struct FLinearConstraint : FConstraintBaseParams {
	float Limit; // 0x14(0x4)
	enum class ELinearConstraintMotion XMotion; // 0x18(0x1)
	enum class ELinearConstraintMotion YMotion; // 0x19(0x1)
	enum class ELinearConstraintMotion ZMotion; // 0x1A(0x1)
	unsigned char UnknownData_1B[0x0001]; // 0x1B(0x1)
};

// ScriptStruct Engine.CullDistanceSizePair
// Size : 0x8 (Inherited : 0x0)
struct FCullDistanceSizePair {
	float Size; // 0x0(0x4)
	float CullDistance; // 0x4(0x4)
};

// ScriptStruct Engine.RuntimeCurveLinearColor
// Size : 0x208 (Inherited : 0x0)
struct FRuntimeCurveLinearColor {
	struct FRichCurve ColorCurves[4]; // 0x0(0x200)
	struct UCurveLinearColor* ExternalCurve; // 0x200(0x8)
};

// ScriptStruct Engine.NamedCurveValue
// Size : 0xC (Inherited : 0x0)
struct FNamedCurveValue {
	struct FName Name; // 0x0(0x8)
	float Value; // 0x8(0x4)
};

// ScriptStruct Engine.CurveTableRowHandle
// Size : 0x10 (Inherited : 0x0)
struct FCurveTableRowHandle {
	struct UCurveTable* CurveTable; // 0x0(0x8)
	struct FName RowName; // 0x8(0x8)
};

// ScriptStruct Engine.DataTableCategoryHandle
// Size : 0x18 (Inherited : 0x0)
struct FDataTableCategoryHandle {
	struct UDataTable* DataTable; // 0x0(0x8)
	struct FName ColumnName; // 0x8(0x8)
	struct FName RowContents; // 0x10(0x8)
};

// ScriptStruct Engine.DataTableRowHandle
// Size : 0x10 (Inherited : 0x0)
struct FDataTableRowHandle {
	struct UDataTable* DataTable; // 0x0(0x8)
	struct FName RowName; // 0x8(0x8)
};

// ScriptStruct Engine.DebugCameraControllerSettingsViewModeIndex
// Size : 0x10 (Inherited : 0x0)
struct FDebugCameraControllerSettingsViewModeIndex {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
	enum class EViewModeIndex ViewModeIndex; // 0x8(0x1)
	unsigned char UnknownData_9[0x0007]; // 0x9(0x7)
};

// ScriptStruct Engine.DebugDisplayProperty
// Size : 0x20 (Inherited : 0x0)
struct FDebugDisplayProperty {
	struct UObject* Obj; // 0x0(0x8)
	class UObject* WithinClass; // 0x8(0x8)
	unsigned char UnknownData_10[0x0010]; // 0x10(0x10)
};

// ScriptStruct Engine.DebugTextInfo
// Size : 0x60 (Inherited : 0x0)
struct FDebugTextInfo {
	struct AActor* SrcActor; // 0x0(0x8)
	struct FVector SrcActorOffset; // 0x8(0xC)
	struct FVector SrcActorDesiredOffset; // 0x14(0xC)
	struct FString DebugText; // 0x20(0x10)
	float TimeRemaining; // 0x30(0x4)
	float Duration; // 0x34(0x4)
	struct FColor TextColor; // 0x38(0x4)
	unsigned char bAbsoluteLocation : 1; // 0x3C(0x1)
	unsigned char bKeepAttachedToActor : 1; // 0x3C(0x1)
	unsigned char bDrawShadow : 1; // 0x3C(0x1)
	unsigned char UnknownData_3C_3 : 5; // 0x3C(0x1)
	unsigned char UnknownData_3D[0x0003]; // 0x3D(0x3)
	struct FVector OrigActorLocation; // 0x40(0xC)
	unsigned char UnknownData_4C[0x0004]; // 0x4C(0x4)
	struct UFont* Font; // 0x50(0x8)
	float FontScale; // 0x58(0x4)
	unsigned char UnknownData_5C[0x0004]; // 0x5C(0x4)
};

// ScriptStruct Engine.MulticastRecordOptions
// Size : 0x18 (Inherited : 0x0)
struct FMulticastRecordOptions {
	struct FString FuncPathName; // 0x0(0x10)
	bool bServerSkip; // 0x10(0x1)
	bool bClientSkip; // 0x11(0x1)
	unsigned char UnknownData_12[0x0006]; // 0x12(0x6)
};

// ScriptStruct Engine.RollbackNetStartupActorInfo
// Size : 0xB0 (Inherited : 0x0)
struct FRollbackNetStartupActorInfo {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
	struct UObject* Archetype; // 0x8(0x8)
	unsigned char UnknownData_10[0x0028]; // 0x10(0x28)
	struct ULevel* Level; // 0x38(0x8)
	unsigned char UnknownData_40[0x0060]; // 0x40(0x60)
	struct TArray<struct UObject*> ObjReferences; // 0xA0(0x10)
};

// ScriptStruct Engine.LevelNameAndTime
// Size : 0x18 (Inherited : 0x0)
struct FLevelNameAndTime {
	struct FString LevelName; // 0x0(0x10)
	uint32_t LevelChangeTimeInMS; // 0x10(0x4)
	unsigned char UnknownData_14[0x0004]; // 0x14(0x4)
};

// ScriptStruct Engine.DialogueWaveParameter
// Size : 0x20 (Inherited : 0x0)
struct FDialogueWaveParameter {
	struct UDialogueWave* DialogueWave; // 0x0(0x8)
	struct FDialogueContext Context; // 0x8(0x18)
};

// ScriptStruct Engine.DialogueContext
// Size : 0x18 (Inherited : 0x0)
struct FDialogueContext {
	struct UDialogueVoice* Speaker; // 0x0(0x8)
	struct TArray<struct UDialogueVoice*> Targets; // 0x8(0x10)
};

// ScriptStruct Engine.DialogueContextMapping
// Size : 0x38 (Inherited : 0x0)
struct FDialogueContextMapping {
	struct FDialogueContext Context; // 0x0(0x18)
	struct USoundWave* SoundWave; // 0x18(0x8)
	struct FString LocalizationKeyFormat; // 0x20(0x10)
	struct UDialogueSoundWaveProxy* Proxy; // 0x30(0x8)
};

// ScriptStruct Engine.RawDistributionFloat
// Size : 0x30 (Inherited : 0x20)
struct FRawDistributionFloat : FRawDistribution {
	float MinValue; // 0x20(0x4)
	float MaxValue; // 0x24(0x4)
	struct UDistributionFloat* Distribution; // 0x28(0x8)
};

// ScriptStruct Engine.RawDistributionVector
// Size : 0x48 (Inherited : 0x20)
struct FRawDistributionVector : FRawDistribution {
	float MinValue; // 0x20(0x4)
	float MaxValue; // 0x24(0x4)
	struct FVector MinValueVec; // 0x28(0xC)
	struct FVector MaxValueVec; // 0x34(0xC)
	struct UDistributionVector* Distribution; // 0x40(0x8)
};

// ScriptStruct Engine.GraphReference
// Size : 0x20 (Inherited : 0x0)
struct FGraphReference {
	struct UEdGraph* MacroGraph; // 0x0(0x8)
	struct UBlueprint* GraphBlueprint; // 0x8(0x8)
	struct FGuid GraphGuid; // 0x10(0x10)
};

// ScriptStruct Engine.EdGraphPinReference
// Size : 0x18 (Inherited : 0x0)
struct FEdGraphPinReference {
	struct FWeakObjectPtr<struct UEdGraphNode> OwningNode; // 0x0(0x8)
	struct FGuid PinID; // 0x8(0x10)
};

// ScriptStruct Engine.EdGraphSchemaAction
// Size : 0x100 (Inherited : 0x0)
struct FEdGraphSchemaAction {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
	struct FText MenuDescription; // 0x8(0x18)
	struct FText TooltipDescription; // 0x20(0x18)
	struct FText Category; // 0x38(0x18)
	struct FText Keywords; // 0x50(0x18)
	int32_t Grouping; // 0x68(0x4)
	int32_t SectionID; // 0x6C(0x4)
	struct TArray<struct FString> MenuDescriptionArray; // 0x70(0x10)
	struct TArray<struct FString> FullSearchTitlesArray; // 0x80(0x10)
	struct TArray<struct FString> FullSearchKeywordsArray; // 0x90(0x10)
	struct TArray<struct FString> FullSearchCategoryArray; // 0xA0(0x10)
	struct TArray<struct FString> LocalizedMenuDescriptionArray; // 0xB0(0x10)
	struct TArray<struct FString> LocalizedFullSearchTitlesArray; // 0xC0(0x10)
	struct TArray<struct FString> LocalizedFullSearchKeywordsArray; // 0xD0(0x10)
	struct TArray<struct FString> LocalizedFullSearchCategoryArray; // 0xE0(0x10)
	struct FString SearchText; // 0xF0(0x10)
};

// ScriptStruct Engine.EdGraphSchemaAction_NewNode
// Size : 0x108 (Inherited : 0x100)
struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction {
	struct UEdGraphNode* NodeTemplate; // 0x100(0x8)
};

// ScriptStruct Engine.PluginRedirect
// Size : 0x20 (Inherited : 0x0)
struct FPluginRedirect {
	struct FString OldPluginName; // 0x0(0x10)
	struct FString NewPluginName; // 0x10(0x10)
};

// ScriptStruct Engine.StructRedirect
// Size : 0x10 (Inherited : 0x0)
struct FStructRedirect {
	struct FName OldStructName; // 0x0(0x8)
	struct FName NewStructName; // 0x8(0x8)
};

// ScriptStruct Engine.ClassRedirect
// Size : 0x3C (Inherited : 0x0)
struct FClassRedirect {
	struct FName ObjectName; // 0x0(0x8)
	struct FName OldClassName; // 0x8(0x8)
	struct FName NewClassName; // 0x10(0x8)
	struct FName OldSubobjName; // 0x18(0x8)
	struct FName NewSubobjName; // 0x20(0x8)
	struct FName NewClassClass; // 0x28(0x8)
	struct FName NewClassPackage; // 0x30(0x8)
	bool InstanceOnly; // 0x38(0x1)
	unsigned char UnknownData_39[0x0003]; // 0x39(0x3)
};

// ScriptStruct Engine.GameNameRedirect
// Size : 0x10 (Inherited : 0x0)
struct FGameNameRedirect {
	struct FName OldGameName; // 0x0(0x8)
	struct FName NewGameName; // 0x8(0x8)
};

// ScriptStruct Engine.ScreenMessageString
// Size : 0x30 (Inherited : 0x0)
struct FScreenMessageString {
	uint64_t Key; // 0x0(0x8)
	struct FString ScreenMessage; // 0x8(0x10)
	struct FColor DisplayColor; // 0x18(0x4)
	float TimeToDisplay; // 0x1C(0x4)
	float CurrentTimeDisplayed; // 0x20(0x4)
	struct FVector2D TextScale; // 0x24(0x8)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
};

// ScriptStruct Engine.DropNoteInfo
// Size : 0x28 (Inherited : 0x0)
struct FDropNoteInfo {
	struct FVector Location; // 0x0(0xC)
	struct FRotator Rotation; // 0xC(0xC)
	struct FString Comment; // 0x18(0x10)
};

// ScriptStruct Engine.StatColorMapping
// Size : 0x28 (Inherited : 0x0)
struct FStatColorMapping {
	struct FString StatName; // 0x0(0x10)
	struct TArray<struct FStatColorMapEntry> ColorMap; // 0x10(0x10)
	unsigned char DisableBlend : 1; // 0x20(0x1)
	unsigned char UnknownData_20_1 : 7; // 0x20(0x1)
	unsigned char UnknownData_21[0x0007]; // 0x21(0x7)
};

// ScriptStruct Engine.StatColorMapEntry
// Size : 0x8 (Inherited : 0x0)
struct FStatColorMapEntry {
	float In; // 0x0(0x4)
	struct FColor Out; // 0x4(0x4)
};

// ScriptStruct Engine.WorldContext
// Size : 0x280 (Inherited : 0x0)
struct FWorldContext {
	unsigned char UnknownData_0[0x00D0]; // 0x0(0xD0)
	struct FURL LastURL; // 0xD0(0x68)
	struct FURL LastRemoteURL; // 0x138(0x68)
	struct UPendingNetGame* PendingNetGame; // 0x1A0(0x8)
	struct TArray<struct FFullyLoadedPackagesInfo> PackagesToFullyLoad; // 0x1A8(0x10)
	unsigned char UnknownData_1B8[0x0010]; // 0x1B8(0x10)
	struct TArray<struct ULevel*> LoadedLevelsForPendingMapChange; // 0x1C8(0x10)
	unsigned char UnknownData_1D8[0x0018]; // 0x1D8(0x18)
	struct TArray<struct UObjectReferencer*> ObjectReferencers; // 0x1F0(0x10)
	struct TArray<struct FLevelStreamingStatus> PendingLevelStreamingStatusUpdates; // 0x200(0x10)
	struct UGameViewportClient* GameViewport; // 0x210(0x8)
	struct UGameInstance* OwningGameInstance; // 0x218(0x8)
	struct TArray<struct FNamedNetDriver> ActiveNetDrivers; // 0x220(0x10)
	unsigned char UnknownData_230[0x0050]; // 0x230(0x50)
};

// ScriptStruct Engine.NamedNetDriver
// Size : 0x10 (Inherited : 0x0)
struct FNamedNetDriver {
	struct UNetDriver* NetDriver; // 0x0(0x8)
	unsigned char UnknownData_8[0x0008]; // 0x8(0x8)
};

// ScriptStruct Engine.LevelStreamingStatus
// Size : 0x10 (Inherited : 0x0)
struct FLevelStreamingStatus {
	struct FName PackageName; // 0x0(0x8)
	unsigned char bShouldBeLoaded : 1; // 0x8(0x1)
	unsigned char bShouldBeVisible : 1; // 0x8(0x1)
	unsigned char UnknownData_8_2 : 6; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
	uint32_t LODIndex; // 0xC(0x4)
};

// ScriptStruct Engine.FullyLoadedPackagesInfo
// Size : 0x38 (Inherited : 0x0)
struct FFullyLoadedPackagesInfo {
	enum class EFullyLoadPackageType FullyLoadType; // 0x0(0x1)
	unsigned char UnknownData_1[0x0007]; // 0x1(0x7)
	struct FString Tag; // 0x8(0x10)
	struct TArray<struct FName> PackagesToLoad; // 0x18(0x10)
	struct TArray<struct UObject*> LoadedObjects; // 0x28(0x10)
};

// ScriptStruct Engine.URL
// Size : 0x68 (Inherited : 0x0)
struct FURL {
	struct FString Protocol; // 0x0(0x10)
	struct FString Host; // 0x10(0x10)
	int32_t Port; // 0x20(0x4)
	int32_t Valid; // 0x24(0x4)
	struct FString Map; // 0x28(0x10)
	struct FString RedirectURL; // 0x38(0x10)
	struct TArray<struct FString> Op; // 0x48(0x10)
	struct FString Portal; // 0x58(0x10)
};

// ScriptStruct Engine.NetDriverDefinition
// Size : 0x18 (Inherited : 0x0)
struct FNetDriverDefinition {
	struct FName DefName; // 0x0(0x8)
	struct FName DriverClassName; // 0x8(0x8)
	struct FName DriverClassNameFallback; // 0x10(0x8)
};

// ScriptStruct Engine.ExposureSettings
// Size : 0x8 (Inherited : 0x0)
struct FExposureSettings {
	float FixedEV100; // 0x0(0x4)
	bool bFixed; // 0x4(0x1)
	unsigned char UnknownData_5[0x0003]; // 0x5(0x3)
};

// ScriptStruct Engine.TickPrerequisite
// Size : 0x10 (Inherited : 0x0)
struct FTickPrerequisite {
	unsigned char UnknownData_0[0x0010]; // 0x0(0x10)
};

// ScriptStruct Engine.CanvasUVTri
// Size : 0x60 (Inherited : 0x0)
struct FCanvasUVTri {
	struct FVector2D V0_Pos; // 0x0(0x8)
	struct FVector2D V0_UV; // 0x8(0x8)
	struct FLinearColor V0_Color; // 0x10(0x10)
	struct FVector2D V1_Pos; // 0x20(0x8)
	struct FVector2D V1_UV; // 0x28(0x8)
	struct FLinearColor V1_Color; // 0x30(0x10)
	struct FVector2D V2_Pos; // 0x40(0x8)
	struct FVector2D V2_UV; // 0x48(0x8)
	struct FLinearColor V2_Color; // 0x50(0x10)
};

// ScriptStruct Engine.FontRenderInfo
// Size : 0x28 (Inherited : 0x0)
struct FFontRenderInfo {
	unsigned char bClipText : 1; // 0x0(0x1)
	unsigned char bEnableShadow : 1; // 0x0(0x1)
	unsigned char UnknownData_0_2 : 6; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	struct FDepthFieldGlowInfo GlowInfo; // 0x4(0x24)
};

// ScriptStruct Engine.DepthFieldGlowInfo
// Size : 0x24 (Inherited : 0x0)
struct FDepthFieldGlowInfo {
	unsigned char bEnableGlow : 1; // 0x0(0x1)
	unsigned char UnknownData_0_1 : 7; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	struct FLinearColor GlowColor; // 0x4(0x10)
	struct FVector2D GlowOuterRadius; // 0x14(0x8)
	struct FVector2D GlowInnerRadius; // 0x1C(0x8)
};

// ScriptStruct Engine.Redirector
// Size : 0x10 (Inherited : 0x0)
struct FRedirector {
	struct FName OldName; // 0x0(0x8)
	struct FName NewName; // 0x8(0x8)
};

// ScriptStruct Engine.CollectionReference
// Size : 0x8 (Inherited : 0x0)
struct FCollectionReference {
	struct FName CollectionName; // 0x0(0x8)
};

// ScriptStruct Engine.ComponentReference
// Size : 0x28 (Inherited : 0x0)
struct FComponentReference {
	struct AActor* OtherActor; // 0x0(0x8)
	struct FName ComponentProperty; // 0x8(0x8)
	struct FString PathToComponent; // 0x10(0x10)
	unsigned char UnknownData_20[0x0008]; // 0x20(0x8)
};

// ScriptStruct Engine.ConstrainComponentPropName
// Size : 0x8 (Inherited : 0x0)
struct FConstrainComponentPropName {
	struct FName ComponentName; // 0x0(0x8)
};

// ScriptStruct Engine.DamageEvent
// Size : 0x10 (Inherited : 0x0)
struct FDamageEvent {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
	class UDamageType* DamageTypeClass; // 0x8(0x8)
};

// ScriptStruct Engine.RadialDamageEvent
// Size : 0x40 (Inherited : 0x10)
struct FRadialDamageEvent : FDamageEvent {
	struct FRadialDamageParams Params; // 0x10(0x14)
	struct FVector Origin; // 0x24(0xC)
	struct TArray<struct FHitResult> ComponentHits; // 0x30(0x10)
};

// ScriptStruct Engine.RadialDamageParams
// Size : 0x14 (Inherited : 0x0)
struct FRadialDamageParams {
	float BaseDamage; // 0x0(0x4)
	float MinimumDamage; // 0x4(0x4)
	float InnerRadius; // 0x8(0x4)
	float OuterRadius; // 0xC(0x4)
	float DamageFalloff; // 0x10(0x4)
};

// ScriptStruct Engine.PointDamageEvent
// Size : 0xA8 (Inherited : 0x10)
struct FPointDamageEvent : FDamageEvent {
	float Damage; // 0x10(0x4)
	struct FVector_NetQuantizeNormal ShotDirection; // 0x14(0xC)
	struct FHitResult HitInfo; // 0x20(0x88)
};

// ScriptStruct Engine.SkeletalMeshBuildSettings
// Size : 0x14 (Inherited : 0x0)
struct FSkeletalMeshBuildSettings {
	unsigned char bRecomputeNormals : 1; // 0x0(0x1)
	unsigned char bRecomputeTangents : 1; // 0x0(0x1)
	unsigned char bUseMikkTSpace : 1; // 0x0(0x1)
	unsigned char bComputeWeightedNormals : 1; // 0x0(0x1)
	unsigned char bRemoveDegenerates : 1; // 0x0(0x1)
	unsigned char bUseHighPrecisionTangentBasis : 1; // 0x0(0x1)
	unsigned char bUseFullPrecisionUVs : 1; // 0x0(0x1)
	unsigned char bBuildAdjacencyBuffer : 1; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float ThresholdPosition; // 0x4(0x4)
	float ThresholdTangentNormal; // 0x8(0x4)
	float ThresholdUV; // 0xC(0x4)
	float MorphThresholdPosition; // 0x10(0x4)
};

// ScriptStruct Engine.MeshBuildSettings
// Size : 0x30 (Inherited : 0x0)
struct FMeshBuildSettings {
	unsigned char bUseMikkTSpace : 1; // 0x0(0x1)
	unsigned char bRecomputeNormals : 1; // 0x0(0x1)
	unsigned char bRecomputeTangents : 1; // 0x0(0x1)
	unsigned char bComputeWeightedNormals : 1; // 0x0(0x1)
	unsigned char bRemoveDegenerates : 1; // 0x0(0x1)
	unsigned char bBuildAdjacencyBuffer : 1; // 0x0(0x1)
	unsigned char bBuildReversedIndexBuffer : 1; // 0x0(0x1)
	unsigned char bUseHighPrecisionTangentBasis : 1; // 0x0(0x1)
	unsigned char bUseFullPrecisionUVs : 1; // 0x1(0x1)
	unsigned char bGenerateLightmapUVs : 1; // 0x1(0x1)
	unsigned char bGenerateDistanceFieldAsIfTwoSided : 1; // 0x1(0x1)
	unsigned char bSupportFaceRemap : 1; // 0x1(0x1)
	unsigned char UnknownData_1_4 : 4; // 0x1(0x1)
	unsigned char UnknownData_2[0x0002]; // 0x2(0x2)
	int32_t MinLightmapResolution; // 0x4(0x4)
	int32_t SrcLightmapIndex; // 0x8(0x4)
	int32_t DstLightmapIndex; // 0xC(0x4)
	float BuildScale; // 0x10(0x4)
	struct FVector BuildScale3D; // 0x14(0xC)
	float DistanceFieldResolutionScale; // 0x20(0x4)
	unsigned char UnknownData_24[0x0004]; // 0x24(0x4)
	struct UStaticMesh* DistanceFieldReplacementMesh; // 0x28(0x8)
};

// ScriptStruct Engine.POV
// Size : 0x1C (Inherited : 0x0)
struct FPOV {
	struct FVector Location; // 0x0(0xC)
	struct FRotator Rotation; // 0xC(0xC)
	float FOV; // 0x18(0x4)
};

// ScriptStruct Engine.AnimUpdateRateParameters
// Size : 0x88 (Inherited : 0x0)
struct FAnimUpdateRateParameters {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
	enum class EUpdateRateShiftBucket ShiftBucket; // 0x1(0x1)
	unsigned char bInterpolateSkippedFrames : 1; // 0x2(0x1)
	unsigned char bShouldUseLodMap : 1; // 0x2(0x1)
	unsigned char bShouldUseMinLod : 1; // 0x2(0x1)
	unsigned char bSkipUpdate : 1; // 0x2(0x1)
	unsigned char bSkipEvaluation : 1; // 0x2(0x1)
	unsigned char UnknownData_2_5 : 3; // 0x2(0x1)
	unsigned char UnknownData_3[0x0001]; // 0x3(0x1)
	int32_t UpdateRate; // 0x4(0x4)
	int32_t EvaluationRate; // 0x8(0x4)
	float TickedPoseOffestTime; // 0xC(0x4)
	float AdditionalTime; // 0x10(0x4)
	unsigned char UnknownData_14[0x0004]; // 0x14(0x4)
	int32_t BaseNonRenderedUpdateRate; // 0x18(0x4)
	int32_t MaxEvalRateForInterpolation; // 0x1C(0x4)
	struct TArray<float> BaseVisibleDistanceFactorThesholds; // 0x20(0x10)
	struct TMap<int32_t, int32_t> LODToFrameSkipMap; // 0x30(0x50)
	int32_t SkippedUpdateFrames; // 0x80(0x4)
	int32_t SkippedEvalFrames; // 0x84(0x4)
};

// ScriptStruct Engine.AnimSlotDesc
// Size : 0xC (Inherited : 0x0)
struct FAnimSlotDesc {
	struct FName SlotName; // 0x0(0x8)
	int32_t NumChannels; // 0x8(0x4)
};

// ScriptStruct Engine.AnimSlotInfo
// Size : 0x18 (Inherited : 0x0)
struct FAnimSlotInfo {
	struct FName SlotName; // 0x0(0x8)
	struct TArray<float> ChannelWeights; // 0x8(0x10)
};

// ScriptStruct Engine.MTDResult
// Size : 0x10 (Inherited : 0x0)
struct FMTDResult {
	struct FVector Direction; // 0x0(0xC)
	float Distance; // 0xC(0x4)
};

// ScriptStruct Engine.OverlapResult
// Size : 0x18 (Inherited : 0x0)
struct FOverlapResult {
	struct FWeakObjectPtr<struct AActor> Actor; // 0x0(0x8)
	struct FWeakObjectPtr<struct UPrimitiveComponent> Component; // 0x8(0x8)
	unsigned char UnknownData_10[0x0004]; // 0x10(0x4)
	unsigned char bBlockingHit : 1; // 0x14(0x1)
	unsigned char UnknownData_14_1 : 7; // 0x14(0x1)
	unsigned char UnknownData_15[0x0003]; // 0x15(0x3)
};

// ScriptStruct Engine.PrimitiveMaterialRef
// Size : 0x18 (Inherited : 0x0)
struct FPrimitiveMaterialRef {
	struct UPrimitiveComponent* Primitive; // 0x0(0x8)
	struct UDecalComponent* Decal; // 0x8(0x8)
	int32_t ElementIndex; // 0x10(0x4)
	unsigned char UnknownData_14[0x0004]; // 0x14(0x4)
};

// ScriptStruct Engine.SwarmDebugOptions
// Size : 0x4 (Inherited : 0x0)
struct FSwarmDebugOptions {
	unsigned char bDistributionEnabled : 1; // 0x0(0x1)
	unsigned char bForceContentExport : 1; // 0x0(0x1)
	unsigned char bInitialized : 1; // 0x0(0x1)
	unsigned char UnknownData_0_3 : 5; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
};

// ScriptStruct Engine.LightmassDebugOptions
// Size : 0x10 (Inherited : 0x0)
struct FLightmassDebugOptions {
	unsigned char bDebugMode : 1; // 0x0(0x1)
	unsigned char bStatsEnabled : 1; // 0x0(0x1)
	unsigned char bGatherBSPSurfacesAcrossComponents : 1; // 0x0(0x1)
	unsigned char UnknownData_0_3 : 5; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float CoplanarTolerance; // 0x4(0x4)
	unsigned char bUseImmediateImport : 1; // 0x8(0x1)
	unsigned char bImmediateProcessMappings : 1; // 0x8(0x1)
	unsigned char bSortMappings : 1; // 0x8(0x1)
	unsigned char bDumpBinaryFiles : 1; // 0x8(0x1)
	unsigned char bDebugMaterials : 1; // 0x8(0x1)
	unsigned char bPadMappings : 1; // 0x8(0x1)
	unsigned char bDebugPaddings : 1; // 0x8(0x1)
	unsigned char bOnlyCalcDebugTexelMappings : 1; // 0x8(0x1)
	unsigned char bUseRandomColors : 1; // 0x9(0x1)
	unsigned char bColorBordersGreen : 1; // 0x9(0x1)
	unsigned char bColorByExecutionTime : 1; // 0x9(0x1)
	unsigned char UnknownData_9_3 : 5; // 0x9(0x1)
	unsigned char UnknownData_A[0x0002]; // 0xA(0x2)
	float ExecutionTimeDivisor; // 0xC(0x4)
};

// ScriptStruct Engine.LightmassPrimitiveSettings
// Size : 0x18 (Inherited : 0x0)
struct FLightmassPrimitiveSettings {
	unsigned char bUseTwoSidedLighting : 1; // 0x0(0x1)
	unsigned char bShadowIndirectOnly : 1; // 0x0(0x1)
	unsigned char bUseEmissiveForStaticLighting : 1; // 0x0(0x1)
	unsigned char bUseVertexNormalForHemisphereGather : 1; // 0x0(0x1)
	unsigned char UnknownData_0_4 : 4; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float EmissiveLightFalloffExponent; // 0x4(0x4)
	float EmissiveLightExplicitInfluenceRadius; // 0x8(0x4)
	float EmissiveBoost; // 0xC(0x4)
	float DiffuseBoost; // 0x10(0x4)
	float FullyOccludedSamplesFraction; // 0x14(0x4)
};

// ScriptStruct Engine.LightmassLightSettings
// Size : 0xC (Inherited : 0x0)
struct FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x0(0x4)
	float ShadowExponent; // 0x4(0x4)
	bool bUseAreaShadowsForStationaryLight; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
};

// ScriptStruct Engine.LightmassDirectionalLightSettings
// Size : 0x10 (Inherited : 0xC)
struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float LightSourceAngle; // 0xC(0x4)
};

// ScriptStruct Engine.LightmassPointLightSettings
// Size : 0xC (Inherited : 0xC)
struct FLightmassPointLightSettings : FLightmassLightSettings {
};

// ScriptStruct Engine.BasedPosition
// Size : 0x38 (Inherited : 0x0)
struct FBasedPosition {
	struct AActor* Base; // 0x0(0x8)
	struct FVector Position; // 0x8(0xC)
	struct FVector CachedBaseLocation; // 0x14(0xC)
	struct FRotator CachedBaseRotation; // 0x20(0xC)
	struct FVector CachedTransPosition; // 0x2C(0xC)
};

// ScriptStruct Engine.FractureEffect
// Size : 0x10 (Inherited : 0x0)
struct FFractureEffect {
	struct UParticleSystem* ParticleSystem; // 0x0(0x8)
	struct USoundBase* Sound; // 0x8(0x8)
};

// ScriptStruct Engine.CollisionImpactData
// Size : 0x28 (Inherited : 0x0)
struct FCollisionImpactData {
	struct TArray<struct FRigidBodyContactInfo> ContactInfos; // 0x0(0x10)
	struct FVector TotalNormalImpulse; // 0x10(0xC)
	struct FVector TotalFrictionImpulse; // 0x1C(0xC)
};

// ScriptStruct Engine.RigidBodyContactInfo
// Size : 0x30 (Inherited : 0x0)
struct FRigidBodyContactInfo {
	struct FVector ContactPosition; // 0x0(0xC)
	struct FVector ContactNormal; // 0xC(0xC)
	float ContactPenetration; // 0x18(0x4)
	unsigned char UnknownData_1C[0x0004]; // 0x1C(0x4)
	struct UPhysicalMaterial* PhysMaterial[2]; // 0x20(0x10)
};

// ScriptStruct Engine.RigidBodyErrorCorrection
// Size : 0x34 (Inherited : 0x0)
struct FRigidBodyErrorCorrection {
	float PingExtrapolation; // 0x0(0x4)
	float PingLimit; // 0x4(0x4)
	float ErrorPerLinearDifference; // 0x8(0x4)
	float ErrorPerAngularDifference; // 0xC(0x4)
	float MaxRestoredStateError; // 0x10(0x4)
	float MaxLinearHardSnapDistance; // 0x14(0x4)
	float PositionLerp; // 0x18(0x4)
	float AngleLerp; // 0x1C(0x4)
	float LinearVelocityCoefficient; // 0x20(0x4)
	float AngularVelocityCoefficient; // 0x24(0x4)
	float ErrorAccumulationSeconds; // 0x28(0x4)
	float ErrorAccumulationDistanceSq; // 0x2C(0x4)
	float ErrorAccumulationSimilarity; // 0x30(0x4)
};

// ScriptStruct Engine.RigidBodyState
// Size : 0x40 (Inherited : 0x0)
struct FRigidBodyState {
	struct FVector_NetQuantize100 Position; // 0x0(0xC)
	unsigned char UnknownData_C[0x0004]; // 0xC(0x4)
	struct FQuat Quaternion; // 0x10(0x10)
	struct FVector_NetQuantize100 LinVel; // 0x20(0xC)
	struct FVector_NetQuantize100 AngVel; // 0x2C(0xC)
	enum class None Flags; // 0x38(0x1)
	unsigned char UnknownData_39[0x0007]; // 0x39(0x7)
};

// ScriptStruct Engine.MaterialShadingModelField
// Size : 0x2 (Inherited : 0x0)
struct FMaterialShadingModelField {
	uint16 ShadingModelField; // 0x0(0x2)
};

// ScriptStruct Engine.ExponentialHeightFogData
// Size : 0xC (Inherited : 0x0)
struct FExponentialHeightFogData {
	float FogDensity; // 0x0(0x4)
	float FogHeightFalloff; // 0x4(0x4)
	float FogHeightOffset; // 0x8(0x4)
};

// ScriptStruct Engine.FontCharacter
// Size : 0x18 (Inherited : 0x0)
struct FFontCharacter {
	int32_t StartU; // 0x0(0x4)
	int32_t StartV; // 0x4(0x4)
	int32_t USize; // 0x8(0x4)
	int32_t VSize; // 0xC(0x4)
	enum class None TextureIndex; // 0x10(0x1)
	unsigned char UnknownData_11[0x0003]; // 0x11(0x3)
	int32_t VerticalOffset; // 0x14(0x4)
};

// ScriptStruct Engine.FontImportOptionsData
// Size : 0xB0 (Inherited : 0x0)
struct FFontImportOptionsData {
	struct FString FontName; // 0x0(0x10)
	float Height; // 0x10(0x4)
	unsigned char bEnableAntialiasing : 1; // 0x14(0x1)
	unsigned char bEnableBold : 1; // 0x14(0x1)
	unsigned char bEnableItalic : 1; // 0x14(0x1)
	unsigned char bEnableUnderline : 1; // 0x14(0x1)
	unsigned char bAlphaOnly : 1; // 0x14(0x1)
	unsigned char UnknownData_14_5 : 3; // 0x14(0x1)
	unsigned char UnknownData_15[0x0003]; // 0x15(0x3)
	enum class EFontImportCharacterSet CharacterSet; // 0x18(0x1)
	unsigned char UnknownData_19[0x0007]; // 0x19(0x7)
	struct FString Chars; // 0x20(0x10)
	struct FString UnicodeRange; // 0x30(0x10)
	struct FString CharsFilePath; // 0x40(0x10)
	struct FString CharsFileWildcard; // 0x50(0x10)
	unsigned char bCreatePrintableOnly : 1; // 0x60(0x1)
	unsigned char bIncludeASCIIRange : 1; // 0x60(0x1)
	unsigned char UnknownData_60_2 : 6; // 0x60(0x1)
	unsigned char UnknownData_61[0x0003]; // 0x61(0x3)
	struct FLinearColor ForegroundColor; // 0x64(0x10)
	unsigned char bEnableDropShadow : 1; // 0x74(0x1)
	unsigned char UnknownData_74_1 : 7; // 0x74(0x1)
	unsigned char UnknownData_75[0x0003]; // 0x75(0x3)
	int32_t TexturePageWidth; // 0x78(0x4)
	int32_t TexturePageMaxHeight; // 0x7C(0x4)
	int32_t XPadding; // 0x80(0x4)
	int32_t YPadding; // 0x84(0x4)
	int32_t ExtendBoxTop; // 0x88(0x4)
	int32_t ExtendBoxBottom; // 0x8C(0x4)
	int32_t ExtendBoxRight; // 0x90(0x4)
	int32_t ExtendBoxLeft; // 0x94(0x4)
	unsigned char bEnableLegacyMode : 1; // 0x98(0x1)
	unsigned char UnknownData_98_1 : 7; // 0x98(0x1)
	unsigned char UnknownData_99[0x0003]; // 0x99(0x3)
	int32_t Kerning; // 0x9C(0x4)
	unsigned char bUseDistanceFieldAlpha : 1; // 0xA0(0x1)
	unsigned char UnknownData_A0_1 : 7; // 0xA0(0x1)
	unsigned char UnknownData_A1[0x0003]; // 0xA1(0x3)
	int32_t DistanceFieldScaleFactor; // 0xA4(0x4)
	float DistanceFieldScanRadiusScale; // 0xA8(0x4)
	unsigned char UnknownData_AC[0x0004]; // 0xAC(0x4)
};

// ScriptStruct Engine.ForceFeedbackAttenuationSettings
// Size : 0xB0 (Inherited : 0xB0)
struct FForceFeedbackAttenuationSettings : FBaseAttenuationSettings {
};

// ScriptStruct Engine.ActiveForceFeedbackEffect
// Size : 0x18 (Inherited : 0x0)
struct FActiveForceFeedbackEffect {
	struct UForceFeedbackEffect* ForceFeedbackEffect; // 0x0(0x8)
	unsigned char UnknownData_8[0x0010]; // 0x8(0x10)
};

// ScriptStruct Engine.ForceFeedbackParameters
// Size : 0xC (Inherited : 0x0)
struct FForceFeedbackParameters {
	struct FName Tag; // 0x0(0x8)
	bool bLooping; // 0x8(0x1)
	bool bIgnoreTimeDilation; // 0x9(0x1)
	bool bPlayWhilePaused; // 0xA(0x1)
	unsigned char UnknownData_B[0x0001]; // 0xB(0x1)
};

// ScriptStruct Engine.ForceFeedbackChannelDetails
// Size : 0x90 (Inherited : 0x0)
struct FForceFeedbackChannelDetails {
	unsigned char bAffectsLeftLarge : 1; // 0x0(0x1)
	unsigned char bAffectsLeftSmall : 1; // 0x0(0x1)
	unsigned char bAffectsRightLarge : 1; // 0x0(0x1)
	unsigned char bAffectsRightSmall : 1; // 0x0(0x1)
	unsigned char UnknownData_0_4 : 4; // 0x0(0x1)
	unsigned char UnknownData_1[0x0007]; // 0x1(0x7)
	struct FRuntimeFloatCurve Curve; // 0x8(0x88)
};

// ScriptStruct Engine.PredictProjectilePathResult
// Size : 0xB8 (Inherited : 0x0)
struct FPredictProjectilePathResult {
	struct TArray<struct FPredictProjectilePathPointData> PathData; // 0x0(0x10)
	struct FPredictProjectilePathPointData LastTraceDestination; // 0x10(0x1C)
	struct FHitResult HitResult; // 0x2C(0x88)
	unsigned char UnknownData_B4[0x0004]; // 0xB4(0x4)
};

// ScriptStruct Engine.PredictProjectilePathPointData
// Size : 0x1C (Inherited : 0x0)
struct FPredictProjectilePathPointData {
	struct FVector Location; // 0x0(0xC)
	struct FVector Velocity; // 0xC(0xC)
	float Time; // 0x18(0x4)
};

// ScriptStruct Engine.PredictProjectilePathParams
// Size : 0x60 (Inherited : 0x0)
struct FPredictProjectilePathParams {
	struct FVector StartLocation; // 0x0(0xC)
	struct FVector LaunchVelocity; // 0xC(0xC)
	bool bTraceWithCollision; // 0x18(0x1)
	unsigned char UnknownData_19[0x0003]; // 0x19(0x3)
	float ProjectileRadius; // 0x1C(0x4)
	float MaxSimTime; // 0x20(0x4)
	bool bTraceWithChannel; // 0x24(0x1)
	enum class ECollisionChannel TraceChannel; // 0x25(0x1)
	unsigned char UnknownData_26[0x0002]; // 0x26(0x2)
	struct TArray<enum class EObjectTypeQuery> ObjectTypes; // 0x28(0x10)
	struct TArray<struct AActor*> ActorsToIgnore; // 0x38(0x10)
	float SimFrequency; // 0x48(0x4)
	float OverrideGravityZ; // 0x4C(0x4)
	enum class EDrawDebugTrace DrawDebugType; // 0x50(0x1)
	unsigned char UnknownData_51[0x0003]; // 0x51(0x3)
	float DrawDebugTime; // 0x54(0x4)
	bool bTraceComplex; // 0x58(0x1)
	unsigned char UnknownData_59[0x0007]; // 0x59(0x7)
};

// ScriptStruct Engine.ActiveHapticFeedbackEffect
// Size : 0x18 (Inherited : 0x0)
struct FActiveHapticFeedbackEffect {
	struct UHapticFeedbackEffect_Base* HapticEffect; // 0x0(0x8)
	unsigned char UnknownData_8[0x0010]; // 0x8(0x10)
};

// ScriptStruct Engine.HapticFeedbackDetails_Curve
// Size : 0x110 (Inherited : 0x0)
struct FHapticFeedbackDetails_Curve {
	struct FRuntimeFloatCurve Frequency; // 0x0(0x88)
	struct FRuntimeFloatCurve Amplitude; // 0x88(0x88)
};

// ScriptStruct Engine.ClusterNode
// Size : 0x40 (Inherited : 0x0)
struct FClusterNode {
	struct FVector BoundMin; // 0x0(0xC)
	int32_t FirstChild; // 0xC(0x4)
	struct FVector BoundMax; // 0x10(0xC)
	int32_t LastChild; // 0x1C(0x4)
	int32_t FirstInstance; // 0x20(0x4)
	int32_t LastInstance; // 0x24(0x4)
	struct FVector MinInstanceScale; // 0x28(0xC)
	struct FVector MaxInstanceScale; // 0x34(0xC)
};

// ScriptStruct Engine.ClusterNode_DEPRECATED
// Size : 0x28 (Inherited : 0x0)
struct FClusterNode_DEPRECATED {
	struct FVector BoundMin; // 0x0(0xC)
	int32_t FirstChild; // 0xC(0x4)
	struct FVector BoundMax; // 0x10(0xC)
	int32_t LastChild; // 0x1C(0x4)
	int32_t FirstInstance; // 0x20(0x4)
	int32_t LastInstance; // 0x24(0x4)
};

// ScriptStruct Engine.HLODProxyMesh
// Size : 0x30 (Inherited : 0x0)
struct FHLODProxyMesh {
	LazyObjectProperty LODActor; // 0x0(0x1C)
	unsigned char UnknownData_1C[0x0004]; // 0x1C(0x4)
	struct UStaticMesh* StaticMesh; // 0x20(0x8)
	struct FName Key; // 0x28(0x8)
};

// ScriptStruct Engine.ImportanceTexture
// Size : 0x50 (Inherited : 0x0)
struct FImportanceTexture {
	struct FIntPoint Size; // 0x0(0x8)
	int32_t NumMips; // 0x8(0x4)
	unsigned char UnknownData_C[0x0004]; // 0xC(0x4)
	struct TArray<float> MarginalCDF; // 0x10(0x10)
	struct TArray<float> ConditionalCDF; // 0x20(0x10)
	struct TArray<struct FColor> TextureData; // 0x30(0x10)
	struct FWeakObjectPtr<struct UTexture2D> Texture; // 0x40(0x8)
	enum class EImportanceWeight Weighting; // 0x48(0x1)
	unsigned char UnknownData_49[0x0007]; // 0x49(0x7)
};

// ScriptStruct Engine.ComponentOverrideRecord
// Size : 0x78 (Inherited : 0x0)
struct FComponentOverrideRecord {
	class UObject* ComponentClass; // 0x0(0x8)
	struct UActorComponent* ComponentTemplate; // 0x8(0x8)
	struct FComponentKey ComponentKey; // 0x10(0x20)
	struct FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30(0x48)
};

// ScriptStruct Engine.ComponentKey
// Size : 0x20 (Inherited : 0x0)
struct FComponentKey {
	class UObject* OwnerClass; // 0x0(0x8)
	struct FName SCSVariableName; // 0x8(0x8)
	struct FGuid AssociatedGuid; // 0x10(0x10)
};

// ScriptStruct Engine.BlueprintInputDelegateBinding
// Size : 0x4 (Inherited : 0x0)
struct FBlueprintInputDelegateBinding {
	unsigned char bConsumeInput : 1; // 0x0(0x1)
	unsigned char bExecuteWhenPaused : 1; // 0x0(0x1)
	unsigned char bOverrideParentBinding : 1; // 0x0(0x1)
	unsigned char UnknownData_0_3 : 5; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
};

// ScriptStruct Engine.BlueprintInputActionDelegateBinding
// Size : 0x18 (Inherited : 0x4)
struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding {
	struct FName InputActionName; // 0x4(0x8)
	enum class EInputEvent InputKeyEvent; // 0xC(0x1)
	unsigned char UnknownData_D[0x0003]; // 0xD(0x3)
	struct FName FunctionNameToBind; // 0x10(0x8)
};

// ScriptStruct Engine.BlueprintInputAxisDelegateBinding
// Size : 0x14 (Inherited : 0x4)
struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding {
	struct FName InputAxisName; // 0x4(0x8)
	struct FName FunctionNameToBind; // 0xC(0x8)
};

// ScriptStruct Engine.BlueprintInputAxisKeyDelegateBinding
// Size : 0x28 (Inherited : 0x4)
struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding {
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
	struct FKey AxisKey; // 0x8(0x18)
	struct FName FunctionNameToBind; // 0x20(0x8)
};

// ScriptStruct Engine.CachedKeyToActionInfo
// Size : 0x70 (Inherited : 0x0)
struct FCachedKeyToActionInfo {
	struct UPlayerInput* PlayerInput; // 0x0(0x8)
	unsigned char UnknownData_8[0x0068]; // 0x8(0x68)
};

// ScriptStruct Engine.BlueprintInputKeyDelegateBinding
// Size : 0x38 (Inherited : 0x4)
struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding {
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
	struct FInputChord InputChord; // 0x8(0x20)
	enum class EInputEvent InputKeyEvent; // 0x28(0x1)
	unsigned char UnknownData_29[0x0003]; // 0x29(0x3)
	struct FName FunctionNameToBind; // 0x2C(0x8)
	unsigned char UnknownData_34[0x0004]; // 0x34(0x4)
};

// ScriptStruct Engine.BlueprintInputTouchDelegateBinding
// Size : 0x10 (Inherited : 0x4)
struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding {
	enum class EInputEvent InputKeyEvent; // 0x4(0x1)
	unsigned char UnknownData_5[0x0003]; // 0x5(0x3)
	struct FName FunctionNameToBind; // 0x8(0x8)
};

// ScriptStruct Engine.InstancedStaticMeshComponentInstanceData
// Size : 0x140 (Inherited : 0xA8)
struct FInstancedStaticMeshComponentInstanceData : FSceneComponentInstanceData {
	struct UStaticMesh* StaticMesh; // 0xA8(0x8)
	struct FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xB0(0x40)
	struct TArray<struct FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0xF0(0x10)
	struct TArray<float> PerInstanceSMCustomData; // 0x100(0x10)
	unsigned char UnknownData_110[0x0020]; // 0x110(0x20)
	int32_t InstancingRandomSeed; // 0x130(0x4)
	unsigned char UnknownData_134[0x000C]; // 0x134(0xC)
};

// ScriptStruct Engine.InstancedStaticMeshInstanceData
// Size : 0x40 (Inherited : 0x0)
struct FInstancedStaticMeshInstanceData {
	struct FMatrix Transform; // 0x0(0x40)
};

// ScriptStruct Engine.InstancedStaticMeshLightMapInstanceData
// Size : 0x40 (Inherited : 0x0)
struct FInstancedStaticMeshLightMapInstanceData {
	struct FTransform Transform; // 0x0(0x30)
	struct TArray<struct FGuid> MapBuildDataIds; // 0x30(0x10)
};

// ScriptStruct Engine.InstancedStaticMeshMappingInfo
// Size : 0x8 (Inherited : 0x0)
struct FInstancedStaticMeshMappingInfo {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
};

// ScriptStruct Engine.IntegralCurve
// Size : 0x80 (Inherited : 0x68)
struct FIntegralCurve : FIndexedCurve {
	struct TArray<struct FIntegralKey> Keys; // 0x68(0x10)
	int32_t DefaultValue; // 0x78(0x4)
	bool bUseDefaultValueBeforeFirstKey; // 0x7C(0x1)
	unsigned char UnknownData_7D[0x0003]; // 0x7D(0x3)
};

// ScriptStruct Engine.IntegralKey
// Size : 0x8 (Inherited : 0x0)
struct FIntegralKey {
	float Time; // 0x0(0x4)
	int32_t Value; // 0x4(0x4)
};

// ScriptStruct Engine.CurveEdTab
// Size : 0x30 (Inherited : 0x0)
struct FCurveEdTab {
	struct FString TabName; // 0x0(0x10)
	struct TArray<struct FCurveEdEntry> Curves; // 0x10(0x10)
	float ViewStartInput; // 0x20(0x4)
	float ViewEndInput; // 0x24(0x4)
	float ViewStartOutput; // 0x28(0x4)
	float ViewEndOutput; // 0x2C(0x4)
};

// ScriptStruct Engine.CurveEdEntry
// Size : 0x38 (Inherited : 0x0)
struct FCurveEdEntry {
	struct UObject* CurveObject; // 0x0(0x8)
	struct FColor CurveColor; // 0x8(0x4)
	unsigned char UnknownData_C[0x0004]; // 0xC(0x4)
	struct FString CurveName; // 0x10(0x10)
	int32_t bHideCurve; // 0x20(0x4)
	int32_t bColorCurve; // 0x24(0x4)
	int32_t bFloatingPointColorCurve; // 0x28(0x4)
	int32_t bClamp; // 0x2C(0x4)
	float ClampLow; // 0x30(0x4)
	float ClampHigh; // 0x34(0x4)
};

// ScriptStruct Engine.InterpEdSelKey
// Size : 0x18 (Inherited : 0x0)
struct FInterpEdSelKey {
	struct UInterpGroup* Group; // 0x0(0x8)
	struct UInterpTrack* Track; // 0x8(0x8)
	int32_t KeyIndex; // 0x10(0x4)
	float UnsnappedPosition; // 0x14(0x4)
};

// ScriptStruct Engine.CameraPreviewInfo
// Size : 0x30 (Inherited : 0x0)
struct FCameraPreviewInfo {
	class APawn* PawnClass; // 0x0(0x8)
	struct UAnimSequence* AnimSeq; // 0x8(0x8)
	struct FVector Location; // 0x10(0xC)
	struct FRotator Rotation; // 0x1C(0xC)
	struct APawn* PawnInst; // 0x28(0x8)
};

// ScriptStruct Engine.SubTrackGroup
// Size : 0x28 (Inherited : 0x0)
struct FSubTrackGroup {
	struct FString GroupName; // 0x0(0x10)
	struct TArray<int32_t> TrackIndices; // 0x10(0x10)
	unsigned char bIsCollapsed : 1; // 0x20(0x1)
	unsigned char bIsSelected : 1; // 0x20(0x1)
	unsigned char UnknownData_20_2 : 6; // 0x20(0x1)
	unsigned char UnknownData_21[0x0007]; // 0x21(0x7)
};

// ScriptStruct Engine.SupportedSubTrackInfo
// Size : 0x20 (Inherited : 0x0)
struct FSupportedSubTrackInfo {
	class UInterpTrack* SupportedClass; // 0x0(0x8)
	struct FString SubTrackName; // 0x8(0x10)
	int32_t GroupIndex; // 0x18(0x4)
	unsigned char UnknownData_1C[0x0004]; // 0x1C(0x4)
};

// ScriptStruct Engine.AnimControlTrackKey
// Size : 0x20 (Inherited : 0x0)
struct FAnimControlTrackKey {
	float StartTime; // 0x0(0x4)
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
	struct UAnimSequence* AnimSeq; // 0x8(0x8)
	float AnimStartOffset; // 0x10(0x4)
	float AnimEndOffset; // 0x14(0x4)
	float AnimPlayRate; // 0x18(0x4)
	unsigned char bLooping : 1; // 0x1C(0x1)
	unsigned char bReverse : 1; // 0x1C(0x1)
	unsigned char UnknownData_1C_2 : 6; // 0x1C(0x1)
	unsigned char UnknownData_1D[0x0003]; // 0x1D(0x3)
};

// ScriptStruct Engine.BoolTrackKey
// Size : 0x8 (Inherited : 0x0)
struct FBoolTrackKey {
	float Time; // 0x0(0x4)
	unsigned char Value : 1; // 0x4(0x1)
	unsigned char UnknownData_4_1 : 7; // 0x4(0x1)
	unsigned char UnknownData_5[0x0003]; // 0x5(0x3)
};

// ScriptStruct Engine.DirectorTrackCut
// Size : 0x14 (Inherited : 0x0)
struct FDirectorTrackCut {
	float Time; // 0x0(0x4)
	float TransitionTime; // 0x4(0x4)
	struct FName TargetCamGroup; // 0x8(0x8)
	int32_t ShotNumber; // 0x10(0x4)
};

// ScriptStruct Engine.EventTrackKey
// Size : 0xC (Inherited : 0x0)
struct FEventTrackKey {
	float Time; // 0x0(0x4)
	struct FName EventName; // 0x4(0x8)
};

// ScriptStruct Engine.InterpLookupTrack
// Size : 0x10 (Inherited : 0x0)
struct FInterpLookupTrack {
	struct TArray<struct FInterpLookupPoint> Points; // 0x0(0x10)
};

// ScriptStruct Engine.InterpLookupPoint
// Size : 0xC (Inherited : 0x0)
struct FInterpLookupPoint {
	struct FName GroupName; // 0x0(0x8)
	float Time; // 0x8(0x4)
};

// ScriptStruct Engine.ParticleReplayTrackKey
// Size : 0xC (Inherited : 0x0)
struct FParticleReplayTrackKey {
	float Time; // 0x0(0x4)
	float Duration; // 0x4(0x4)
	int32_t ClipIDNumber; // 0x8(0x4)
};

// ScriptStruct Engine.SoundTrackKey
// Size : 0x18 (Inherited : 0x0)
struct FSoundTrackKey {
	float Time; // 0x0(0x4)
	float Volume; // 0x4(0x4)
	float Pitch; // 0x8(0x4)
	unsigned char UnknownData_C[0x0004]; // 0xC(0x4)
	struct USoundBase* Sound; // 0x10(0x8)
};

// ScriptStruct Engine.ToggleTrackKey
// Size : 0x8 (Inherited : 0x0)
struct FToggleTrackKey {
	float Time; // 0x0(0x4)
	enum class ETrackToggleAction ToggleAction; // 0x4(0x1)
	unsigned char UnknownData_5[0x0003]; // 0x5(0x3)
};

// ScriptStruct Engine.VisibilityTrackKey
// Size : 0x8 (Inherited : 0x0)
struct FVisibilityTrackKey {
	float Time; // 0x0(0x4)
	enum class EVisibilityTrackAction Action; // 0x4(0x1)
	enum class EVisibilityTrackCondition ActiveCondition; // 0x5(0x1)
	unsigned char UnknownData_6[0x0002]; // 0x6(0x2)
};

// ScriptStruct Engine.VectorSpringState
// Size : 0x18 (Inherited : 0x0)
struct FVectorSpringState {
	unsigned char UnknownData_0[0x0018]; // 0x0(0x18)
};

// ScriptStruct Engine.FloatSpringState
// Size : 0x8 (Inherited : 0x0)
struct FFloatSpringState {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
};

// ScriptStruct Engine.DrawToRenderTargetContext
// Size : 0x10 (Inherited : 0x0)
struct FDrawToRenderTargetContext {
	struct UTextureRenderTarget2D* RenderTarget; // 0x0(0x8)
	unsigned char UnknownData_8[0x0008]; // 0x8(0x8)
};

// ScriptStruct Engine.LatentActionManager
// Size : 0x60 (Inherited : 0x0)
struct FLatentActionManager {
	unsigned char UnknownData_0[0x0060]; // 0x0(0x60)
};

// ScriptStruct Engine.LayerActorStats
// Size : 0x10 (Inherited : 0x0)
struct FLayerActorStats {
	class UObject* Type; // 0x0(0x8)
	int32_t Total; // 0x8(0x4)
	unsigned char UnknownData_C[0x0004]; // 0xC(0x4)
};

// ScriptStruct Engine.ReplicatedStaticActorDestructionInfo
// Size : 0x38 (Inherited : 0x0)
struct FReplicatedStaticActorDestructionInfo {
	unsigned char UnknownData_0[0x0030]; // 0x0(0x30)
	class UObject* ObjClass; // 0x30(0x8)
};

// ScriptStruct Engine.LevelSimplificationDetails
// Size : 0x12C (Inherited : 0x0)
struct FLevelSimplificationDetails {
	bool bCreatePackagePerAsset; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float DetailsPercentage; // 0x4(0x4)
	struct FMaterialProxySettings StaticMeshMaterialSettings; // 0x8(0x88)
	bool bOverrideLandscapeExportLOD; // 0x90(0x1)
	unsigned char UnknownData_91[0x0003]; // 0x91(0x3)
	int32_t LandscapeExportLOD; // 0x94(0x4)
	struct FMaterialProxySettings LandscapeMaterialSettings; // 0x98(0x88)
	bool bBakeFoliageToLandscape; // 0x120(0x1)
	bool bBakeGrassToLandscape; // 0x121(0x1)
	bool bGenerateMeshNormalMap; // 0x122(0x1)
	bool bGenerateMeshMetallicMap; // 0x123(0x1)
	bool bGenerateMeshRoughnessMap; // 0x124(0x1)
	bool bGenerateMeshSpecularMap; // 0x125(0x1)
	bool bGenerateLandscapeNormalMap; // 0x126(0x1)
	bool bGenerateLandscapeMetallicMap; // 0x127(0x1)
	bool bGenerateLandscapeRoughnessMap; // 0x128(0x1)
	bool bGenerateLandscapeSpecularMap; // 0x129(0x1)
	unsigned char UnknownData_12A[0x0002]; // 0x12A(0x2)
};

// ScriptStruct Engine.MaterialProxySettings
// Size : 0x88 (Inherited : 0x0)
struct FMaterialProxySettings {
	struct FIntPoint TextureSize; // 0x0(0x8)
	float GutterSpace; // 0x8(0x4)
	float MetallicConstant; // 0xC(0x4)
	float RoughnessConstant; // 0x10(0x4)
	float AnisotropyConstant; // 0x14(0x4)
	float SpecularConstant; // 0x18(0x4)
	float OpacityConstant; // 0x1C(0x4)
	float OpacityMaskConstant; // 0x20(0x4)
	float AmbientOcclusionConstant; // 0x24(0x4)
	enum class ETextureSizingType TextureSizingType; // 0x28(0x1)
	enum class EMaterialMergeType MaterialMergeType; // 0x29(0x1)
	enum class EBlendMode BlendMode; // 0x2A(0x1)
	unsigned char bAllowTwoSidedMaterial : 1; // 0x2B(0x1)
	unsigned char bNormalMap : 1; // 0x2B(0x1)
	unsigned char bTangentMap : 1; // 0x2B(0x1)
	unsigned char bMetallicMap : 1; // 0x2B(0x1)
	unsigned char bRoughnessMap : 1; // 0x2B(0x1)
	unsigned char bAnisotropyMap : 1; // 0x2B(0x1)
	unsigned char bSpecularMap : 1; // 0x2B(0x1)
	unsigned char bEmissiveMap : 1; // 0x2B(0x1)
	unsigned char bOpacityMap : 1; // 0x2C(0x1)
	unsigned char bOpacityMaskMap : 1; // 0x2C(0x1)
	unsigned char bAmbientOcclusionMap : 1; // 0x2C(0x1)
	unsigned char UnknownData_2C_3 : 5; // 0x2C(0x1)
	unsigned char UnknownData_2D[0x0003]; // 0x2D(0x3)
	struct FIntPoint DiffuseTextureSize; // 0x30(0x8)
	struct FIntPoint NormalTextureSize; // 0x38(0x8)
	struct FIntPoint TangentTextureSize; // 0x40(0x8)
	struct FIntPoint MetallicTextureSize; // 0x48(0x8)
	struct FIntPoint RoughnessTextureSize; // 0x50(0x8)
	struct FIntPoint AnisotropyTextureSize; // 0x58(0x8)
	struct FIntPoint SpecularTextureSize; // 0x60(0x8)
	struct FIntPoint EmissiveTextureSize; // 0x68(0x8)
	struct FIntPoint OpacityTextureSize; // 0x70(0x8)
	struct FIntPoint OpacityMaskTextureSize; // 0x78(0x8)
	struct FIntPoint AmbientOcclusionTextureSize; // 0x80(0x8)
};

// ScriptStruct Engine.StreamableTextureInstance
// Size : 0x28 (Inherited : 0x0)
struct FStreamableTextureInstance {
	unsigned char UnknownData_0[0x0028]; // 0x0(0x28)
};

// ScriptStruct Engine.DynamicTextureInstance
// Size : 0x38 (Inherited : 0x28)
struct FDynamicTextureInstance : FStreamableTextureInstance {
	struct UTexture2D* Texture; // 0x28(0x8)
	bool bAttached; // 0x30(0x1)
	unsigned char UnknownData_31[0x0003]; // 0x31(0x3)
	float OriginalRadius; // 0x34(0x4)
};

// ScriptStruct Engine.PrecomputedLightInstanceData
// Size : 0x100 (Inherited : 0xA8)
struct FPrecomputedLightInstanceData : FSceneComponentInstanceData {
	unsigned char UnknownData_A8[0x0008]; // 0xA8(0x8)
	struct FTransform Transform; // 0xB0(0x30)
	struct FGuid LightGuid; // 0xE0(0x10)
	int32_t PreviewShadowMapChannel; // 0xF0(0x4)
	unsigned char UnknownData_F4[0x000C]; // 0xF4(0xC)
};

// ScriptStruct Engine.BatchedPoint
// Size : 0x28 (Inherited : 0x0)
struct FBatchedPoint {
	struct FVector Position; // 0x0(0xC)
	struct FLinearColor Color; // 0xC(0x10)
	float PointSize; // 0x1C(0x4)
	float RemainingLifeTime; // 0x20(0x4)
	enum class None DepthPriority; // 0x24(0x1)
	unsigned char UnknownData_25[0x0003]; // 0x25(0x3)
};

// ScriptStruct Engine.BatchedLine
// Size : 0x34 (Inherited : 0x0)
struct FBatchedLine {
	struct FVector Start; // 0x0(0xC)
	struct FVector End; // 0xC(0xC)
	struct FLinearColor Color; // 0x18(0x10)
	float Thickness; // 0x28(0x4)
	float RemainingLifeTime; // 0x2C(0x4)
	enum class None DepthPriority; // 0x30(0x1)
	unsigned char UnknownData_31[0x0003]; // 0x31(0x3)
};

// ScriptStruct Engine.ClientReceiveData
// Size : 0x40 (Inherited : 0x0)
struct FClientReceiveData {
	struct APlayerController* LocalPC; // 0x0(0x8)
	struct FName MessageType; // 0x8(0x8)
	int32_t MessageIndex; // 0x10(0x4)
	unsigned char UnknownData_14[0x0004]; // 0x14(0x4)
	struct FString MessageString; // 0x18(0x10)
	struct APlayerState* RelatedPlayerState_2; // 0x28(0x8)
	struct APlayerState* RelatedPlayerState_3; // 0x30(0x8)
	struct UObject* OptionalObject; // 0x38(0x8)
};

// ScriptStruct Engine.ParameterGroupData
// Size : 0x18 (Inherited : 0x0)
struct FParameterGroupData {
	struct FString GroupName; // 0x0(0x10)
	int32_t GroupSortPriority; // 0x10(0x4)
	unsigned char UnknownData_14[0x0004]; // 0x14(0x4)
};

// ScriptStruct Engine.MaterialSpriteElement
// Size : 0x28 (Inherited : 0x0)
struct FMaterialSpriteElement {
	struct UMaterialInterface* Material; // 0x0(0x8)
	struct UCurveFloat* DistanceToOpacityCurve; // 0x8(0x8)
	unsigned char bSizeIsInScreenSpace : 1; // 0x10(0x1)
	unsigned char UnknownData_10_1 : 7; // 0x10(0x1)
	unsigned char UnknownData_11[0x0003]; // 0x11(0x3)
	float BaseSizeX; // 0x14(0x4)
	float BaseSizeY; // 0x18(0x4)
	unsigned char UnknownData_1C[0x0004]; // 0x1C(0x4)
	struct UCurveFloat* DistanceToSizeCurve; // 0x20(0x8)
};

// ScriptStruct Engine.MaterialCachedExpressionData
// Size : 0x228 (Inherited : 0x0)
struct FMaterialCachedExpressionData {
	struct FMaterialCachedParameters Parameters; // 0x0(0x1A0)
	struct TArray<struct UObject*> ReferencedTextures; // 0x1A0(0x10)
	struct TArray<struct FMaterialFunctionInfo> FunctionInfos; // 0x1B0(0x10)
	struct TArray<struct FMaterialParameterCollectionInfo> ParameterCollectionInfos; // 0x1C0(0x10)
	struct TArray<struct UMaterialFunctionInterface*> DefaultLayers; // 0x1D0(0x10)
	struct TArray<struct UMaterialFunctionInterface*> DefaultLayerBlends; // 0x1E0(0x10)
	struct TArray<struct ULandscapeGrassType*> GrassTypes; // 0x1F0(0x10)
	struct TArray<struct FName> DynamicParameterNames; // 0x200(0x10)
	struct TArray<bool> QualityLevelsUsed; // 0x210(0x10)
	unsigned char bHasRuntimeVirtualTextureOutput : 1; // 0x220(0x1)
	unsigned char bHasSceneColor : 1; // 0x220(0x1)
	unsigned char UnknownData_220_2 : 6; // 0x220(0x1)
	unsigned char UnknownData_221[0x0007]; // 0x221(0x7)
};

// ScriptStruct Engine.MaterialParameterCollectionInfo
// Size : 0x18 (Inherited : 0x0)
struct FMaterialParameterCollectionInfo {
	struct FGuid StateId; // 0x0(0x10)
	struct UMaterialParameterCollection* ParameterCollection; // 0x10(0x8)
};

// ScriptStruct Engine.MaterialFunctionInfo
// Size : 0x18 (Inherited : 0x0)
struct FMaterialFunctionInfo {
	struct FGuid StateId; // 0x0(0x10)
	struct UMaterialFunctionInterface* Function; // 0x10(0x8)
};

// ScriptStruct Engine.MaterialCachedParameters
// Size : 0x1A0 (Inherited : 0x0)
struct FMaterialCachedParameters {
	struct FMaterialCachedParameterEntry Entries[5]; // 0x0(0x140)
	struct TArray<float> ScalarValues; // 0x140(0x10)
	struct TArray<struct FLinearColor> VectorValues; // 0x150(0x10)
	struct TArray<struct UTexture*> TextureValues; // 0x160(0x10)
	struct TArray<struct UFont*> FontValues; // 0x170(0x10)
	struct TArray<int32_t> FontPageValues; // 0x180(0x10)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextureValues; // 0x190(0x10)
};

// ScriptStruct Engine.MaterialCachedParameterEntry
// Size : 0x40 (Inherited : 0x0)
struct FMaterialCachedParameterEntry {
	struct TArray<uint64_t> NameHashes; // 0x0(0x10)
	struct TArray<struct FMaterialParameterInfo> ParameterInfos; // 0x10(0x10)
	struct TArray<struct FGuid> ExpressionGuids; // 0x20(0x10)
	struct TArray<bool> Overrides; // 0x30(0x10)
};

// ScriptStruct Engine.MaterialParameterInfo
// Size : 0x10 (Inherited : 0x0)
struct FMaterialParameterInfo {
	struct FName Name; // 0x0(0x8)
	enum class EMaterialParameterAssociation Association; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
	int32_t Index; // 0xC(0x4)
};

// ScriptStruct Engine.ParameterChannelNames
// Size : 0x60 (Inherited : 0x0)
struct FParameterChannelNames {
	struct FText R; // 0x0(0x18)
	struct FText G; // 0x18(0x18)
	struct FText B; // 0x30(0x18)
	struct FText A; // 0x48(0x18)
};

// ScriptStruct Engine.CustomDefine
// Size : 0x20 (Inherited : 0x0)
struct FCustomDefine {
	struct FString DefineName; // 0x0(0x10)
	struct FString DefineValue; // 0x10(0x10)
};

// ScriptStruct Engine.CustomInput
// Size : 0x1C (Inherited : 0x0)
struct FCustomInput {
	struct FName InputName; // 0x0(0x8)
	struct FExpressionInput Input; // 0x8(0xC)
	unsigned char UnknownData_14[0x0008]; // 0x14(0x8)
};

// ScriptStruct Engine.FunctionExpressionOutput
// Size : 0x20 (Inherited : 0x0)
struct FFunctionExpressionOutput {
	struct UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x0(0x8)
	struct FGuid ExpressionOutputId; // 0x8(0x10)
	struct FExpressionOutput Output; // 0x18(0x8)
};

// ScriptStruct Engine.FunctionExpressionInput
// Size : 0x30 (Inherited : 0x0)
struct FFunctionExpressionInput {
	struct UMaterialExpressionFunctionInput* ExpressionInput; // 0x0(0x8)
	struct FGuid ExpressionInputId; // 0x8(0x10)
	struct FExpressionInput Input; // 0x18(0xC)
	unsigned char UnknownData_24[0x000C]; // 0x24(0xC)
};

// ScriptStruct Engine.FontParameterValue
// Size : 0x30 (Inherited : 0x0)
struct FFontParameterValue {
	struct FMaterialParameterInfo ParameterInfo; // 0x0(0x10)
	struct UFont* FontValue; // 0x10(0x8)
	int32_t FontPage; // 0x18(0x4)
	struct FGuid ExpressionGUID; // 0x1C(0x10)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
};

// ScriptStruct Engine.RuntimeVirtualTextureParameterValue
// Size : 0x28 (Inherited : 0x0)
struct FRuntimeVirtualTextureParameterValue {
	struct FMaterialParameterInfo ParameterInfo; // 0x0(0x10)
	struct URuntimeVirtualTexture* ParameterValue; // 0x10(0x8)
	struct FGuid ExpressionGUID; // 0x18(0x10)
};

// ScriptStruct Engine.TextureParameterValue
// Size : 0x28 (Inherited : 0x0)
struct FTextureParameterValue {
	struct FMaterialParameterInfo ParameterInfo; // 0x0(0x10)
	struct UTexture* ParameterValue; // 0x10(0x8)
	struct FGuid ExpressionGUID; // 0x18(0x10)
};

// ScriptStruct Engine.VectorParameterValue
// Size : 0x30 (Inherited : 0x0)
struct FVectorParameterValue {
	struct FMaterialParameterInfo ParameterInfo; // 0x0(0x10)
	struct FLinearColor ParameterValue; // 0x10(0x10)
	struct FGuid ExpressionGUID; // 0x20(0x10)
};

// ScriptStruct Engine.ScalarParameterValue
// Size : 0x24 (Inherited : 0x0)
struct FScalarParameterValue {
	struct FMaterialParameterInfo ParameterInfo; // 0x0(0x10)
	float ParameterValue; // 0x10(0x4)
	struct FGuid ExpressionGUID; // 0x14(0x10)
};

// ScriptStruct Engine.ScalarParameterAtlasInstanceData
// Size : 0x58 (Inherited : 0x0)
struct FScalarParameterAtlasInstanceData {
	bool bIsUsedAsAtlasPosition; // 0x0(0x1)
	unsigned char UnknownData_1[0x0007]; // 0x1(0x7)
	struct TSoftObjectPtr<struct UCurveLinearColor> Curve; // 0x8(0x28)
	struct TSoftObjectPtr<struct UCurveLinearColorAtlas> Atlas; // 0x30(0x28)
};

// ScriptStruct Engine.MaterialInstanceBasePropertyOverrides
// Size : 0x8 (Inherited : 0x0)
struct FMaterialInstanceBasePropertyOverrides {
	unsigned char bOverride_OpacityMaskClipValue : 1; // 0x0(0x1)
	unsigned char bOverride_BlendMode : 1; // 0x0(0x1)
	unsigned char bOverride_ShadingModel : 1; // 0x0(0x1)
	unsigned char bOverride_DitheredLODTransition : 1; // 0x0(0x1)
	unsigned char bOverride_CastDynamicShadowAsMasked : 1; // 0x0(0x1)
	unsigned char bOverride_TwoSided : 1; // 0x0(0x1)
	unsigned char TwoSided : 1; // 0x0(0x1)
	unsigned char DitheredLODTransition : 1; // 0x0(0x1)
	unsigned char bCastDynamicShadowAsMasked : 1; // 0x1(0x1)
	unsigned char UnknownData_1_1 : 7; // 0x1(0x1)
	enum class EBlendMode BlendMode; // 0x2(0x1)
	enum class EMaterialShadingModel ShadingModel; // 0x3(0x1)
	float OpacityMaskClipValue; // 0x4(0x4)
};

// ScriptStruct Engine.MaterialTextureInfo
// Size : 0x10 (Inherited : 0x0)
struct FMaterialTextureInfo {
	float SamplingScale; // 0x0(0x4)
	int32_t UVChannelIndex; // 0x4(0x4)
	struct FName TextureName; // 0x8(0x8)
};

// ScriptStruct Engine.LightmassMaterialInterfaceSettings
// Size : 0x10 (Inherited : 0x0)
struct FLightmassMaterialInterfaceSettings {
	float EmissiveBoost; // 0x0(0x4)
	float DiffuseBoost; // 0x4(0x4)
	float ExportResolutionScale; // 0x8(0x4)
	unsigned char bCastShadowAsMasked : 1; // 0xC(0x1)
	unsigned char bOverrideCastShadowAsMasked : 1; // 0xC(0x1)
	unsigned char bOverrideEmissiveBoost : 1; // 0xC(0x1)
	unsigned char bOverrideDiffuseBoost : 1; // 0xC(0x1)
	unsigned char bOverrideExportResolutionScale : 1; // 0xC(0x1)
	unsigned char UnknownData_C_5 : 3; // 0xC(0x1)
	unsigned char UnknownData_D[0x0003]; // 0xD(0x3)
};

// ScriptStruct Engine.MaterialLayersFunctions
// Size : 0x40 (Inherited : 0x0)
struct FMaterialLayersFunctions {
	struct TArray<struct UMaterialFunctionInterface*> Layers; // 0x0(0x10)
	struct TArray<struct UMaterialFunctionInterface*> Blends; // 0x10(0x10)
	struct TArray<bool> LayerStates; // 0x20(0x10)
	struct FString KeyString; // 0x30(0x10)
};

// ScriptStruct Engine.CollectionParameterBase
// Size : 0x18 (Inherited : 0x0)
struct FCollectionParameterBase {
	struct FName ParameterName; // 0x0(0x8)
	struct FGuid ID; // 0x8(0x10)
};

// ScriptStruct Engine.CollectionVectorParameter
// Size : 0x28 (Inherited : 0x18)
struct FCollectionVectorParameter : FCollectionParameterBase {
	struct FLinearColor DefaultValue; // 0x18(0x10)
};

// ScriptStruct Engine.CollectionScalarParameter
// Size : 0x1C (Inherited : 0x18)
struct FCollectionScalarParameter : FCollectionParameterBase {
	float DefaultValue; // 0x18(0x4)
};

// ScriptStruct Engine.InterpGroupActorInfo
// Size : 0x18 (Inherited : 0x0)
struct FInterpGroupActorInfo {
	struct FName ObjectName; // 0x0(0x8)
	struct TArray<struct AActor*> Actors; // 0x8(0x10)
};

// ScriptStruct Engine.CameraCutInfo
// Size : 0x10 (Inherited : 0x0)
struct FCameraCutInfo {
	struct FVector Location; // 0x0(0xC)
	float Timestamp; // 0xC(0x4)
};

// ScriptStruct Engine.MemberReference
// Size : 0x38 (Inherited : 0x0)
struct FMemberReference {
	struct UObject* MemberParent; // 0x0(0x8)
	struct FString MemberScope; // 0x8(0x10)
	struct FName MemberName; // 0x18(0x8)
	struct FGuid MemberGuid; // 0x20(0x10)
	bool bSelfContext; // 0x30(0x1)
	bool bWasDeprecated; // 0x31(0x1)
	unsigned char UnknownData_32[0x0006]; // 0x32(0x6)
};

// ScriptStruct Engine.MeshInstancingSettings
// Size : 0x18 (Inherited : 0x0)
struct FMeshInstancingSettings {
	class AActor* ActorClassToUse; // 0x0(0x8)
	int32_t InstanceReplacementThreshold; // 0x8(0x4)
	enum class EMeshInstancingReplacementMethod MeshReplacementMethod; // 0xC(0x1)
	bool bSkipMeshesWithVertexColors; // 0xD(0x1)
	bool bUseHLODVolumes; // 0xE(0x1)
	unsigned char UnknownData_F[0x0001]; // 0xF(0x1)
	class UInstancedStaticMeshComponent* ISMComponentToUse; // 0x10(0x8)
};

// ScriptStruct Engine.MeshMergingSettings
// Size : 0xA0 (Inherited : 0x0)
struct FMeshMergingSettings {
	int32_t TargetLightMapResolution; // 0x0(0x4)
	enum class EUVOutput OutputUVs[8]; // 0x4(0x8)
	struct FMaterialProxySettings MaterialSettings; // 0xC(0x88)
	int32_t GutterSize; // 0x94(0x4)
	int32_t SpecificLOD; // 0x98(0x4)
	enum class EMeshLODSelectionType LODSelectionType; // 0x9C(0x1)
	unsigned char bGenerateLightMapUV : 1; // 0x9D(0x1)
	unsigned char bComputedLightMapResolution : 1; // 0x9D(0x1)
	unsigned char bPivotPointAtZero : 1; // 0x9D(0x1)
	unsigned char bMergePhysicsData : 1; // 0x9D(0x1)
	unsigned char bMergeMaterials : 1; // 0x9D(0x1)
	unsigned char bCreateMergedMaterial : 1; // 0x9D(0x1)
	unsigned char bBakeVertexDataToMesh : 1; // 0x9D(0x1)
	unsigned char bUseVertexDataForBakingMaterial : 1; // 0x9D(0x1)
	unsigned char bUseTextureBinning : 1; // 0x9E(0x1)
	unsigned char bReuseMeshLightmapUVs : 1; // 0x9E(0x1)
	unsigned char bMergeEquivalentMaterials : 1; // 0x9E(0x1)
	unsigned char bUseLandscapeCulling : 1; // 0x9E(0x1)
	unsigned char bIncludeImposters : 1; // 0x9E(0x1)
	unsigned char bAllowDistanceField : 1; // 0x9E(0x1)
	unsigned char UnknownData_9E_6 : 2; // 0x9E(0x1)
	unsigned char UnknownData_9F[0x0001]; // 0x9F(0x1)
};

// ScriptStruct Engine.MeshProxySettings
// Size : 0xA8 (Inherited : 0x0)
struct FMeshProxySettings {
	int32_t ScreenSize; // 0x0(0x4)
	float VoxelSize; // 0x4(0x4)
	struct FMaterialProxySettings MaterialSettings; // 0x8(0x88)
	float MergeDistance; // 0x90(0x4)
	struct FColor UnresolvedGeometryColor; // 0x94(0x4)
	float MaxRayCastDist; // 0x98(0x4)
	float HardAngleThreshold; // 0x9C(0x4)
	int32_t LightMapResolution; // 0xA0(0x4)
	enum class EProxyNormalComputationMethod NormalCalculationMethod; // 0xA4(0x1)
	enum class ELandscapeCullingPrecision LandscapeCullingPrecision; // 0xA5(0x1)
	unsigned char bCalculateCorrectLODModel : 1; // 0xA6(0x1)
	unsigned char bOverrideVoxelSize : 1; // 0xA6(0x1)
	unsigned char bOverrideTransferDistance : 1; // 0xA6(0x1)
	unsigned char bUseHardAngleThreshold : 1; // 0xA6(0x1)
	unsigned char bComputeLightMapResolution : 1; // 0xA6(0x1)
	unsigned char bRecalculateNormals : 1; // 0xA6(0x1)
	unsigned char bUseLandscapeCulling : 1; // 0xA6(0x1)
	unsigned char bAllowAdjacency : 1; // 0xA6(0x1)
	unsigned char bAllowDistanceField : 1; // 0xA7(0x1)
	unsigned char bReuseMeshLightmapUVs : 1; // 0xA7(0x1)
	unsigned char bCreateCollision : 1; // 0xA7(0x1)
	unsigned char bAllowVertexColors : 1; // 0xA7(0x1)
	unsigned char bGenerateLightmapUVs : 1; // 0xA7(0x1)
	unsigned char UnknownData_A7_5 : 3; // 0xA7(0x1)
};

// ScriptStruct Engine.MeshReductionSettings
// Size : 0x24 (Inherited : 0x0)
struct FMeshReductionSettings {
	float PercentTriangles; // 0x0(0x4)
	float PercentVertices; // 0x4(0x4)
	float MaxDeviation; // 0x8(0x4)
	float PixelError; // 0xC(0x4)
	float WeldingThreshold; // 0x10(0x4)
	float HardAngleThreshold; // 0x14(0x4)
	int32_t BaseLODModel; // 0x18(0x4)
	enum class EMeshFeatureImportance SilhouetteImportance; // 0x1C(0x1)
	enum class EMeshFeatureImportance TextureImportance; // 0x1D(0x1)
	enum class EMeshFeatureImportance ShadingImportance; // 0x1E(0x1)
	unsigned char bRecalculateNormals : 1; // 0x1F(0x1)
	unsigned char bGenerateUniqueLightmapUVs : 1; // 0x1F(0x1)
	unsigned char bKeepSymmetry : 1; // 0x1F(0x1)
	unsigned char bVisibilityAided : 1; // 0x1F(0x1)
	unsigned char bCullOccluded : 1; // 0x1F(0x1)
	unsigned char UnknownData_1F_5 : 3; // 0x1F(0x1)
	enum class EStaticMeshReductionTerimationCriterion TerminationCriterion; // 0x20(0x1)
	enum class EMeshFeatureImportance VisibilityAggressiveness; // 0x21(0x1)
	enum class EMeshFeatureImportance VertexColorImportance; // 0x22(0x1)
	unsigned char UnknownData_23[0x0001]; // 0x23(0x1)
};

// ScriptStruct Engine.PurchaseInfo
// Size : 0x40 (Inherited : 0x0)
struct FPurchaseInfo {
	struct FString Identifier; // 0x0(0x10)
	struct FString DisplayName; // 0x10(0x10)
	struct FString DisplayDescription; // 0x20(0x10)
	struct FString DisplayPrice; // 0x30(0x10)
};

// ScriptStruct Engine.NameCurve
// Size : 0x78 (Inherited : 0x68)
struct FNameCurve : FIndexedCurve {
	struct TArray<struct FNameCurveKey> Keys; // 0x68(0x10)
};

// ScriptStruct Engine.NameCurveKey
// Size : 0xC (Inherited : 0x0)
struct FNameCurveKey {
	float Time; // 0x0(0x4)
	struct FName Value; // 0x4(0x8)
};

// ScriptStruct Engine.NavAvoidanceMask
// Size : 0x4 (Inherited : 0x0)
struct FNavAvoidanceMask {
	unsigned char bGroup0 : 1; // 0x0(0x1)
	unsigned char bGroup1 : 1; // 0x0(0x1)
	unsigned char bGroup2 : 1; // 0x0(0x1)
	unsigned char bGroup3 : 1; // 0x0(0x1)
	unsigned char bGroup4 : 1; // 0x0(0x1)
	unsigned char bGroup5 : 1; // 0x0(0x1)
	unsigned char bGroup6 : 1; // 0x0(0x1)
	unsigned char bGroup7 : 1; // 0x0(0x1)
	unsigned char bGroup8 : 1; // 0x1(0x1)
	unsigned char bGroup9 : 1; // 0x1(0x1)
	unsigned char bGroup10 : 1; // 0x1(0x1)
	unsigned char bGroup11 : 1; // 0x1(0x1)
	unsigned char bGroup12 : 1; // 0x1(0x1)
	unsigned char bGroup13 : 1; // 0x1(0x1)
	unsigned char bGroup14 : 1; // 0x1(0x1)
	unsigned char bGroup15 : 1; // 0x1(0x1)
	unsigned char bGroup16 : 1; // 0x2(0x1)
	unsigned char bGroup17 : 1; // 0x2(0x1)
	unsigned char bGroup18 : 1; // 0x2(0x1)
	unsigned char bGroup19 : 1; // 0x2(0x1)
	unsigned char bGroup20 : 1; // 0x2(0x1)
	unsigned char bGroup21 : 1; // 0x2(0x1)
	unsigned char bGroup22 : 1; // 0x2(0x1)
	unsigned char bGroup23 : 1; // 0x2(0x1)
	unsigned char bGroup24 : 1; // 0x3(0x1)
	unsigned char bGroup25 : 1; // 0x3(0x1)
	unsigned char bGroup26 : 1; // 0x3(0x1)
	unsigned char bGroup27 : 1; // 0x3(0x1)
	unsigned char bGroup28 : 1; // 0x3(0x1)
	unsigned char bGroup29 : 1; // 0x3(0x1)
	unsigned char bGroup30 : 1; // 0x3(0x1)
	unsigned char bGroup31 : 1; // 0x3(0x1)
};

// ScriptStruct Engine.MovementProperties
// Size : 0x1 (Inherited : 0x0)
struct FMovementProperties {
	unsigned char bCanCrouch : 1; // 0x0(0x1)
	unsigned char bCanJump : 1; // 0x0(0x1)
	unsigned char bCanWalk : 1; // 0x0(0x1)
	unsigned char bCanSwim : 1; // 0x0(0x1)
	unsigned char bCanFly : 1; // 0x0(0x1)
	unsigned char UnknownData_0_5 : 3; // 0x0(0x1)
};

// ScriptStruct Engine.NavAgentProperties
// Size : 0x30 (Inherited : 0x1)
struct FNavAgentProperties : FMovementProperties {
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float AgentRadius; // 0x4(0x4)
	float AgentHeight; // 0x8(0x4)
	float AgentStepHeight; // 0xC(0x4)
	float NavWalkingSearchHeightScale; // 0x10(0x4)
	unsigned char UnknownData_14[0x0004]; // 0x14(0x4)
	struct FSoftClassPath PreferredNavData; // 0x18(0x18)
};

// ScriptStruct Engine.NavDataConfig
// Size : 0x78 (Inherited : 0x30)
struct FNavDataConfig : FNavAgentProperties {
	struct FName Name; // 0x30(0x8)
	struct FColor Color; // 0x38(0x4)
	struct FVector DefaultQueryExtent; // 0x3C(0xC)
	class AActor* NavigationDataClass; // 0x48(0x8)
	SoftClassProperty NavDataClass; // 0x50(0x28)
};

// ScriptStruct Engine.NavAgentSelector
// Size : 0x4 (Inherited : 0x0)
struct FNavAgentSelector {
	unsigned char bSupportsAgent0 : 1; // 0x0(0x1)
	unsigned char bSupportsAgent1 : 1; // 0x0(0x1)
	unsigned char bSupportsAgent2 : 1; // 0x0(0x1)
	unsigned char bSupportsAgent3 : 1; // 0x0(0x1)
	unsigned char bSupportsAgent4 : 1; // 0x0(0x1)
	unsigned char bSupportsAgent5 : 1; // 0x0(0x1)
	unsigned char bSupportsAgent6 : 1; // 0x0(0x1)
	unsigned char bSupportsAgent7 : 1; // 0x0(0x1)
	unsigned char bSupportsAgent8 : 1; // 0x1(0x1)
	unsigned char bSupportsAgent9 : 1; // 0x1(0x1)
	unsigned char bSupportsAgent10 : 1; // 0x1(0x1)
	unsigned char bSupportsAgent11 : 1; // 0x1(0x1)
	unsigned char bSupportsAgent12 : 1; // 0x1(0x1)
	unsigned char bSupportsAgent13 : 1; // 0x1(0x1)
	unsigned char bSupportsAgent14 : 1; // 0x1(0x1)
	unsigned char bSupportsAgent15 : 1; // 0x1(0x1)
	unsigned char UnknownData_2[0x0002]; // 0x2(0x2)
};

// ScriptStruct Engine.NavigationLinkBase
// Size : 0x30 (Inherited : 0x0)
struct FNavigationLinkBase {
	float LeftProjectHeight; // 0x0(0x4)
	float MaxFallDownLength; // 0x4(0x4)
	unsigned char UnknownData_8[0x0004]; // 0x8(0x4)
	float SnapRadius; // 0xC(0x4)
	float SnapHeight; // 0x10(0x4)
	struct FNavAgentSelector SupportedAgents; // 0x14(0x4)
	unsigned char bSupportsAgent0 : 1; // 0x18(0x1)
	unsigned char bSupportsAgent1 : 1; // 0x18(0x1)
	unsigned char bSupportsAgent2 : 1; // 0x18(0x1)
	unsigned char bSupportsAgent3 : 1; // 0x18(0x1)
	unsigned char bSupportsAgent4 : 1; // 0x18(0x1)
	unsigned char bSupportsAgent5 : 1; // 0x18(0x1)
	unsigned char bSupportsAgent6 : 1; // 0x18(0x1)
	unsigned char bSupportsAgent7 : 1; // 0x18(0x1)
	unsigned char bSupportsAgent8 : 1; // 0x19(0x1)
	unsigned char bSupportsAgent9 : 1; // 0x19(0x1)
	unsigned char bSupportsAgent10 : 1; // 0x19(0x1)
	unsigned char bSupportsAgent11 : 1; // 0x19(0x1)
	unsigned char bSupportsAgent12 : 1; // 0x19(0x1)
	unsigned char bSupportsAgent13 : 1; // 0x19(0x1)
	unsigned char bSupportsAgent14 : 1; // 0x19(0x1)
	unsigned char bSupportsAgent15 : 1; // 0x19(0x1)
	unsigned char UnknownData_1A[0x0002]; // 0x1A(0x2)
	enum class ENavLinkDirection Direction; // 0x1C(0x1)
	unsigned char bUseSnapHeight : 1; // 0x1D(0x1)
	unsigned char bSnapToCheapestArea : 1; // 0x1D(0x1)
	unsigned char bCustomFlag0 : 1; // 0x1D(0x1)
	unsigned char bCustomFlag1 : 1; // 0x1D(0x1)
	unsigned char bCustomFlag2 : 1; // 0x1D(0x1)
	unsigned char bCustomFlag3 : 1; // 0x1D(0x1)
	unsigned char bCustomFlag4 : 1; // 0x1D(0x1)
	unsigned char bCustomFlag5 : 1; // 0x1D(0x1)
	unsigned char bCustomFlag6 : 1; // 0x1E(0x1)
	unsigned char bCustomFlag7 : 1; // 0x1E(0x1)
	unsigned char UnknownData_1E_2 : 6; // 0x1E(0x1)
	unsigned char UnknownData_1F[0x0001]; // 0x1F(0x1)
	class UNavAreaBase* AreaClass; // 0x20(0x8)
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// ScriptStruct Engine.NavigationSegmentLink
// Size : 0x60 (Inherited : 0x30)
struct FNavigationSegmentLink : FNavigationLinkBase {
	struct FVector LeftStart; // 0x30(0xC)
	struct FVector LeftEnd; // 0x3C(0xC)
	struct FVector RightStart; // 0x48(0xC)
	struct FVector RightEnd; // 0x54(0xC)
};

// ScriptStruct Engine.NavigationLink
// Size : 0x48 (Inherited : 0x30)
struct FNavigationLink : FNavigationLinkBase {
	struct FVector Left; // 0x30(0xC)
	struct FVector Right; // 0x3C(0xC)
};

// ScriptStruct Engine.ChannelDefinition
// Size : 0x28 (Inherited : 0x0)
struct FChannelDefinition {
	struct FName ChannelName; // 0x0(0x8)
	struct FName ClassName; // 0x8(0x8)
	class UObject* ChannelClass; // 0x10(0x8)
	int32_t StaticChannelIndex; // 0x18(0x4)
	bool bTickOnCreate; // 0x1C(0x1)
	bool bServerOpen; // 0x1D(0x1)
	bool bClientOpen; // 0x1E(0x1)
	bool bInitialServer; // 0x1F(0x1)
	bool bInitialClient; // 0x20(0x1)
	unsigned char UnknownData_21[0x0007]; // 0x21(0x7)
};

// ScriptStruct Engine.PacketSimulationSettings
// Size : 0x34 (Inherited : 0x0)
struct FPacketSimulationSettings {
	int32_t PktLoss; // 0x0(0x4)
	int32_t PktLossMaxSize; // 0x4(0x4)
	int32_t PktLossMinSize; // 0x8(0x4)
	int32_t PktOrder; // 0xC(0x4)
	int32_t PktDup; // 0x10(0x4)
	int32_t PktLag; // 0x14(0x4)
	int32_t PktLagVariance; // 0x18(0x4)
	int32_t PktLagMin; // 0x1C(0x4)
	int32_t PktLagMax; // 0x20(0x4)
	int32_t PktIncomingLagMin; // 0x24(0x4)
	int32_t PktIncomingLagMax; // 0x28(0x4)
	int32_t PktIncomingLoss; // 0x2C(0x4)
	int32_t PktJitter; // 0x30(0x4)
};

// ScriptStruct Engine.FastArraySerializer
// Size : 0x108 (Inherited : 0x0)
struct FFastArraySerializer {
	unsigned char UnknownData_0[0x0054]; // 0x0(0x54)
	int32_t ArrayReplicationKey; // 0x54(0x4)
	unsigned char UnknownData_58[0x00A8]; // 0x58(0xA8)
	enum class EFastArraySerializerDeltaFlags DeltaFlags; // 0x100(0x1)
	unsigned char UnknownData_101[0x0007]; // 0x101(0x7)
};

// ScriptStruct Engine.FastArraySerializerItem
// Size : 0xC (Inherited : 0x0)
struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x0(0x4)
	int32_t ReplicationKey; // 0x4(0x4)
	int32_t MostRecentArrayReplicationKey; // 0x8(0x4)
};

// ScriptStruct Engine.NetworkEmulationProfileDescription
// Size : 0x20 (Inherited : 0x0)
struct FNetworkEmulationProfileDescription {
	struct FString ProfileName; // 0x0(0x10)
	struct FString ToolTip; // 0x10(0x10)
};

// ScriptStruct Engine.NodeItem
// Size : 0x40 (Inherited : 0x0)
struct FNodeItem {
	struct FName ParentName; // 0x0(0x8)
	unsigned char UnknownData_8[0x0008]; // 0x8(0x8)
	struct FTransform Transform; // 0x10(0x30)
};

// ScriptStruct Engine.ParticleBurst
// Size : 0xC (Inherited : 0x0)
struct FParticleBurst {
	int32_t Count; // 0x0(0x4)
	int32_t CountLow; // 0x4(0x4)
	float Time; // 0x8(0x4)
};

// ScriptStruct Engine.ParticleRandomSeedInfo
// Size : 0x20 (Inherited : 0x0)
struct FParticleRandomSeedInfo {
	struct FName ParameterName; // 0x0(0x8)
	unsigned char bGetSeedFromInstance : 1; // 0x8(0x1)
	unsigned char bInstanceSeedIsIndex : 1; // 0x8(0x1)
	unsigned char bResetSeedOnEmitterLooping : 1; // 0x8(0x1)
	unsigned char bRandomlySelectSeedArray : 1; // 0x8(0x1)
	unsigned char UnknownData_8_4 : 4; // 0x8(0x1)
	unsigned char UnknownData_9[0x0007]; // 0x9(0x7)
	struct TArray<int32_t> RandomSeeds; // 0x10(0x10)
};

// ScriptStruct Engine.ParticleCurvePair
// Size : 0x18 (Inherited : 0x0)
struct FParticleCurvePair {
	struct FString CurveName; // 0x0(0x10)
	struct UObject* CurveObject; // 0x10(0x8)
};

// ScriptStruct Engine.BeamModifierOptions
// Size : 0x4 (Inherited : 0x0)
struct FBeamModifierOptions {
	unsigned char bModify : 1; // 0x0(0x1)
	unsigned char bScale : 1; // 0x0(0x1)
	unsigned char bLock : 1; // 0x0(0x1)
	unsigned char UnknownData_0_3 : 5; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
};

// ScriptStruct Engine.ParticleEvent_GenerateInfo
// Size : 0x28 (Inherited : 0x0)
struct FParticleEvent_GenerateInfo {
	enum class EParticleEventType Type; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	int32_t Frequency; // 0x4(0x4)
	int32_t ParticleFrequency; // 0x8(0x4)
	unsigned char FirstTimeOnly : 1; // 0xC(0x1)
	unsigned char LastTimeOnly : 1; // 0xC(0x1)
	unsigned char UseReflectedImpactVector : 1; // 0xC(0x1)
	unsigned char bUseOrbitOffset : 1; // 0xC(0x1)
	unsigned char UnknownData_C_4 : 4; // 0xC(0x1)
	unsigned char UnknownData_D[0x0003]; // 0xD(0x3)
	struct FName CustomName; // 0x10(0x8)
	struct TArray<struct UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame; // 0x18(0x10)
};

// ScriptStruct Engine.LocationBoneSocketInfo
// Size : 0x14 (Inherited : 0x0)
struct FLocationBoneSocketInfo {
	struct FName BoneSocketName; // 0x0(0x8)
	struct FVector Offset; // 0x8(0xC)
};

// ScriptStruct Engine.OrbitOptions
// Size : 0x4 (Inherited : 0x0)
struct FOrbitOptions {
	unsigned char bProcessDuringSpawn : 1; // 0x0(0x1)
	unsigned char bProcessDuringUpdate : 1; // 0x0(0x1)
	unsigned char bUseEmitterTime : 1; // 0x0(0x1)
	unsigned char UnknownData_0_3 : 5; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
};

// ScriptStruct Engine.EmitterDynamicParameter
// Size : 0x48 (Inherited : 0x0)
struct FEmitterDynamicParameter {
	struct FName ParamName; // 0x0(0x8)
	unsigned char bUseEmitterTime : 1; // 0x8(0x1)
	unsigned char bSpawnTimeOnly : 1; // 0x8(0x1)
	unsigned char UnknownData_8_2 : 6; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
	enum class EEmitterDynamicParameterValue ValueMethod; // 0xC(0x1)
	unsigned char UnknownData_D[0x0003]; // 0xD(0x3)
	unsigned char bScaleVelocityByParamValue : 1; // 0x10(0x1)
	unsigned char UnknownData_10_1 : 7; // 0x10(0x1)
	unsigned char UnknownData_11[0x0007]; // 0x11(0x7)
	struct FRawDistributionFloat ParamValue; // 0x18(0x30)
};

// ScriptStruct Engine.BeamTargetData
// Size : 0xC (Inherited : 0x0)
struct FBeamTargetData {
	struct FName TargetName; // 0x0(0x8)
	float TargetPercentage; // 0x8(0x4)
};

// ScriptStruct Engine.GPUSpriteResourceData
// Size : 0x160 (Inherited : 0x0)
struct FGPUSpriteResourceData {
	struct TArray<struct FColor> QuantizedColorSamples; // 0x0(0x10)
	struct TArray<struct FColor> QuantizedMiscSamples; // 0x10(0x10)
	struct TArray<struct FColor> QuantizedSimulationAttrSamples; // 0x20(0x10)
	struct FVector4 ColorScale; // 0x30(0x10)
	struct FVector4 ColorBias; // 0x40(0x10)
	struct FVector4 MiscScale; // 0x50(0x10)
	struct FVector4 MiscBias; // 0x60(0x10)
	struct FVector4 SimulationAttrCurveScale; // 0x70(0x10)
	struct FVector4 SimulationAttrCurveBias; // 0x80(0x10)
	struct FVector4 SubImageSize; // 0x90(0x10)
	struct FVector4 SizeBySpeed; // 0xA0(0x10)
	struct FVector ConstantAcceleration; // 0xB0(0xC)
	struct FVector OrbitOffsetBase; // 0xBC(0xC)
	struct FVector OrbitOffsetRange; // 0xC8(0xC)
	struct FVector OrbitFrequencyBase; // 0xD4(0xC)
	struct FVector OrbitFrequencyRange; // 0xE0(0xC)
	struct FVector OrbitPhaseBase; // 0xEC(0xC)
	struct FVector OrbitPhaseRange; // 0xF8(0xC)
	float GlobalVectorFieldScale; // 0x104(0x4)
	float GlobalVectorFieldTightness; // 0x108(0x4)
	float PerParticleVectorFieldScale; // 0x10C(0x4)
	float PerParticleVectorFieldBias; // 0x110(0x4)
	float DragCoefficientScale; // 0x114(0x4)
	float DragCoefficientBias; // 0x118(0x4)
	float ResilienceScale; // 0x11C(0x4)
	float ResilienceBias; // 0x120(0x4)
	float CollisionRadiusScale; // 0x124(0x4)
	float CollisionRadiusBias; // 0x128(0x4)
	float CollisionTimeBias; // 0x12C(0x4)
	float CollisionRandomSpread; // 0x130(0x4)
	float CollisionRandomDistribution; // 0x134(0x4)
	float OneMinusFriction; // 0x138(0x4)
	float RotationRateScale; // 0x13C(0x4)
	float CameraMotionBlurAmount; // 0x140(0x4)
	enum class EParticleScreenAlignment ScreenAlignment; // 0x144(0x1)
	enum class EParticleAxisLock LockAxisFlag; // 0x145(0x1)
	unsigned char UnknownData_146[0x0002]; // 0x146(0x2)
	struct FVector2D PivotOffset; // 0x148(0x8)
	unsigned char bRemoveHMDRoll : 1; // 0x150(0x1)
	unsigned char UnknownData_150_1 : 7; // 0x150(0x1)
	unsigned char UnknownData_151[0x0003]; // 0x151(0x3)
	float MinFacingCameraBlendDistance; // 0x154(0x4)
	float MaxFacingCameraBlendDistance; // 0x158(0x4)
	unsigned char UnknownData_15C[0x0004]; // 0x15C(0x4)
};

// ScriptStruct Engine.GPUSpriteEmitterInfo
// Size : 0x280 (Inherited : 0x0)
struct FGPUSpriteEmitterInfo {
	struct UParticleModuleRequired* RequiredModule; // 0x0(0x8)
	struct UParticleModuleSpawn* SpawnModule; // 0x8(0x8)
	struct UParticleModuleSpawnPerUnit* SpawnPerUnitModule; // 0x10(0x8)
	struct TArray<struct UParticleModule*> SpawnModules; // 0x18(0x10)
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
	struct FGPUSpriteLocalVectorFieldInfo LocalVectorField; // 0x30(0x70)
	struct FFloatDistribution VectorFieldScale; // 0xA0(0x20)
	struct FFloatDistribution DragCoefficient; // 0xC0(0x20)
	struct FFloatDistribution PointAttractorStrength; // 0xE0(0x20)
	struct FFloatDistribution Resilience; // 0x100(0x20)
	struct FVector ConstantAcceleration; // 0x120(0xC)
	struct FVector PointAttractorPosition; // 0x12C(0xC)
	float PointAttractorRadiusSq; // 0x138(0x4)
	struct FVector OrbitOffsetBase; // 0x13C(0xC)
	struct FVector OrbitOffsetRange; // 0x148(0xC)
	struct FVector2D InvMaxSize; // 0x154(0x8)
	float InvRotationRateScale; // 0x15C(0x4)
	float MaxLifetime; // 0x160(0x4)
	int32_t MaxParticleCount; // 0x164(0x4)
	enum class EParticleScreenAlignment ScreenAlignment; // 0x168(0x1)
	enum class EParticleAxisLock LockAxisFlag; // 0x169(0x1)
	unsigned char UnknownData_16A[0x0002]; // 0x16A(0x2)
	unsigned char bEnableCollision : 1; // 0x16C(0x1)
	unsigned char UnknownData_16C_1 : 7; // 0x16C(0x1)
	unsigned char UnknownData_16D[0x0003]; // 0x16D(0x3)
	enum class EParticleCollisionMode CollisionMode; // 0x170(0x1)
	unsigned char UnknownData_171[0x0003]; // 0x171(0x3)
	unsigned char bRemoveHMDRoll : 1; // 0x174(0x1)
	unsigned char UnknownData_174_1 : 7; // 0x174(0x1)
	unsigned char UnknownData_175[0x0003]; // 0x175(0x3)
	float MinFacingCameraBlendDistance; // 0x178(0x4)
	float MaxFacingCameraBlendDistance; // 0x17C(0x4)
	struct FRawDistributionVector DynamicColor; // 0x180(0x48)
	struct FRawDistributionFloat DynamicAlpha; // 0x1C8(0x30)
	struct FRawDistributionVector DynamicColorScale; // 0x1F8(0x48)
	struct FRawDistributionFloat DynamicAlphaScale; // 0x240(0x30)
	unsigned char UnknownData_270[0x0010]; // 0x270(0x10)
};

// ScriptStruct Engine.GPUSpriteLocalVectorFieldInfo
// Size : 0x70 (Inherited : 0x0)
struct FGPUSpriteLocalVectorFieldInfo {
	struct UVectorField* Field; // 0x0(0x8)
	unsigned char UnknownData_8[0x0008]; // 0x8(0x8)
	struct FTransform Transform; // 0x10(0x30)
	struct FRotator MinInitialRotation; // 0x40(0xC)
	struct FRotator MaxInitialRotation; // 0x4C(0xC)
	struct FRotator RotationRate; // 0x58(0xC)
	float Intensity; // 0x64(0x4)
	float Tightness; // 0x68(0x4)
	unsigned char bIgnoreComponentTransform : 1; // 0x6C(0x1)
	unsigned char bTileX : 1; // 0x6C(0x1)
	unsigned char bTileY : 1; // 0x6C(0x1)
	unsigned char bTileZ : 1; // 0x6C(0x1)
	unsigned char bUseFixDT : 1; // 0x6C(0x1)
	unsigned char UnknownData_6C_5 : 3; // 0x6C(0x1)
	unsigned char UnknownData_6D[0x0003]; // 0x6D(0x3)
};

// ScriptStruct Engine.NamedEmitterMaterial
// Size : 0x10 (Inherited : 0x0)
struct FNamedEmitterMaterial {
	struct FName Name; // 0x0(0x8)
	struct UMaterialInterface* Material; // 0x8(0x8)
};

// ScriptStruct Engine.LODSoloTrack
// Size : 0x10 (Inherited : 0x0)
struct FLODSoloTrack {
	struct TArray<enum class None> SoloEnableSetting; // 0x0(0x10)
};

// ScriptStruct Engine.ParticleSystemLOD
// Size : 0x1 (Inherited : 0x0)
struct FParticleSystemLOD {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
};

// ScriptStruct Engine.ParticleSysParam
// Size : 0x80 (Inherited : 0x0)
struct FParticleSysParam {
	struct FName Name; // 0x0(0x8)
	enum class EParticleSysParamType ParamType; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
	float Scalar; // 0xC(0x4)
	float Scalar_Low; // 0x10(0x4)
	struct FVector Vector; // 0x14(0xC)
	struct FVector Vector_Low; // 0x20(0xC)
	struct FColor Color; // 0x2C(0x4)
	struct AActor* Actor; // 0x30(0x8)
	struct UMaterialInterface* Material; // 0x38(0x8)
	unsigned char UnknownData_40[0x0040]; // 0x40(0x40)
};

// ScriptStruct Engine.ParticleSystemWorldManagerTickFunction
// Size : 0x30 (Inherited : 0x28)
struct FParticleSystemWorldManagerTickFunction : FTickFunction {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// ScriptStruct Engine.ParticleSystemReplayFrame
// Size : 0x10 (Inherited : 0x0)
struct FParticleSystemReplayFrame {
	unsigned char UnknownData_0[0x0010]; // 0x0(0x10)
};

// ScriptStruct Engine.ParticleEmitterReplayFrame
// Size : 0x10 (Inherited : 0x0)
struct FParticleEmitterReplayFrame {
	unsigned char UnknownData_0[0x0010]; // 0x0(0x10)
};

// ScriptStruct Engine.FreezablePerPlatformInt
// Size : 0x4 (Inherited : 0x0)
struct FFreezablePerPlatformInt {
	unsigned char UnknownData_0[0x0004]; // 0x0(0x4)
};

// ScriptStruct Engine.PhysicalAnimationData
// Size : 0x24 (Inherited : 0x0)
struct FPhysicalAnimationData {
	struct FName BodyName; // 0x0(0x8)
	unsigned char bIsLocalSimulation : 1; // 0x8(0x1)
	unsigned char UnknownData_8_1 : 7; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
	float OrientationStrength; // 0xC(0x4)
	float AngularVelocityStrength; // 0x10(0x4)
	float PositionStrength; // 0x14(0x4)
	float VelocityStrength; // 0x18(0x4)
	float MaxLinearForce; // 0x1C(0x4)
	float MaxAngularForce; // 0x20(0x4)
};

// ScriptStruct Engine.TireFrictionScalePair
// Size : 0x10 (Inherited : 0x0)
struct FTireFrictionScalePair {
	struct UTireType* TireType; // 0x0(0x8)
	float FrictionScale; // 0x8(0x4)
	unsigned char UnknownData_C[0x0004]; // 0xC(0x4)
};

// ScriptStruct Engine.PhysicalAnimationProfile
// Size : 0x2C (Inherited : 0x0)
struct FPhysicalAnimationProfile {
	struct FName ProfileName; // 0x0(0x8)
	struct FPhysicalAnimationData PhysicalAnimationData; // 0x8(0x24)
};

// ScriptStruct Engine.PhysicsConstraintProfileHandle
// Size : 0x10C (Inherited : 0x0)
struct FPhysicsConstraintProfileHandle {
	struct FConstraintProfileProperties ProfileProperties; // 0x0(0x104)
	struct FName ProfileName; // 0x104(0x8)
};

// ScriptStruct Engine.ChaosPhysicsSettings
// Size : 0x3 (Inherited : 0x0)
struct FChaosPhysicsSettings {
	enum class EChaosThreadingMode DefaultThreadingModel; // 0x0(0x1)
	enum class EChaosSolverTickMode DedicatedThreadTickMode; // 0x1(0x1)
	enum class EChaosBufferMode DedicatedThreadBufferMode; // 0x2(0x1)
};

// ScriptStruct Engine.PhysicalSurfaceName
// Size : 0xC (Inherited : 0x0)
struct FPhysicalSurfaceName {
	enum class EPhysicalSurface Type; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	struct FName Name; // 0x4(0x8)
};

// ScriptStruct Engine.DelegateArray
// Size : 0x10 (Inherited : 0x0)
struct FDelegateArray {
	struct TArray<struct FDelegate> Delegates; // 0x0(0x10)
};

// ScriptStruct Engine.ViewTargetTransitionParams
// Size : 0x10 (Inherited : 0x0)
struct FViewTargetTransitionParams {
	float BlendTime; // 0x0(0x4)
	enum class EViewTargetBlendFunction BlendFunction; // 0x4(0x1)
	unsigned char UnknownData_5[0x0003]; // 0x5(0x3)
	float BlendExp; // 0x8(0x4)
	unsigned char bLockOutgoing : 1; // 0xC(0x1)
	unsigned char UnknownData_C_1 : 7; // 0xC(0x1)
	unsigned char UnknownData_D[0x0003]; // 0xD(0x3)
};

// ScriptStruct Engine.TViewTarget
// Size : 0x5F0 (Inherited : 0x0)
struct FTViewTarget {
	struct AActor* Target; // 0x0(0x8)
	unsigned char UnknownData_8[0x0008]; // 0x8(0x8)
	struct FMinimalViewInfo POV; // 0x10(0x5D0)
	struct APlayerState* PlayerState; // 0x5E0(0x8)
	unsigned char UnknownData_5E8[0x0008]; // 0x5E8(0x8)
};

// ScriptStruct Engine.CameraCacheEntry
// Size : 0x5E0 (Inherited : 0x0)
struct FCameraCacheEntry {
	float Timestamp; // 0x0(0x4)
	unsigned char UnknownData_4[0x000C]; // 0x4(0xC)
	struct FMinimalViewInfo POV; // 0x10(0x5D0)
};

// ScriptStruct Engine.UpdateLevelVisibilityLevelInfo
// Size : 0x14 (Inherited : 0x0)
struct FUpdateLevelVisibilityLevelInfo {
	struct FName PackageName; // 0x0(0x8)
	struct FName Filename; // 0x8(0x8)
	unsigned char bIsVisible : 1; // 0x10(0x1)
	unsigned char UnknownData_10_1 : 7; // 0x10(0x1)
	unsigned char UnknownData_11[0x0003]; // 0x11(0x3)
};

// ScriptStruct Engine.UpdateLevelStreamingLevelStatus
// Size : 0x10 (Inherited : 0x0)
struct FUpdateLevelStreamingLevelStatus {
	struct FName PackageName; // 0x0(0x8)
	int32_t LODIndex; // 0x8(0x4)
	unsigned char bNewShouldBeLoaded : 1; // 0xC(0x1)
	unsigned char bNewShouldBeVisible : 1; // 0xC(0x1)
	unsigned char bNewShouldBlockOnLoad : 1; // 0xC(0x1)
	unsigned char UnknownData_C_3 : 5; // 0xC(0x1)
	unsigned char UnknownData_D[0x0003]; // 0xD(0x3)
};

// ScriptStruct Engine.InputActionSpeechMapping
// Size : 0x10 (Inherited : 0x0)
struct FInputActionSpeechMapping {
	struct FName ActionName; // 0x0(0x8)
	struct FName SpeechKeyword; // 0x8(0x8)
};

// ScriptStruct Engine.InputAxisKeyMapping
// Size : 0x28 (Inherited : 0x0)
struct FInputAxisKeyMapping {
	struct FName AxisName; // 0x0(0x8)
	float Scale; // 0x8(0x4)
	unsigned char UnknownData_C[0x0004]; // 0xC(0x4)
	struct FKey Key; // 0x10(0x18)
};

// ScriptStruct Engine.InputActionKeyMapping
// Size : 0x28 (Inherited : 0x0)
struct FInputActionKeyMapping {
	struct FName ActionName; // 0x0(0x8)
	unsigned char bShift : 1; // 0x8(0x1)
	unsigned char bCtrl : 1; // 0x8(0x1)
	unsigned char bAlt : 1; // 0x8(0x1)
	unsigned char bCmd : 1; // 0x8(0x1)
	unsigned char UnknownData_8_4 : 4; // 0x8(0x1)
	unsigned char UnknownData_9[0x0007]; // 0x9(0x7)
	struct FKey Key; // 0x10(0x18)
};

// ScriptStruct Engine.InputAxisConfigEntry
// Size : 0x18 (Inherited : 0x0)
struct FInputAxisConfigEntry {
	struct FName AxisKeyName; // 0x0(0x8)
	struct FInputAxisProperties AxisProperties; // 0x8(0x10)
};

// ScriptStruct Engine.InputAxisProperties
// Size : 0x10 (Inherited : 0x0)
struct FInputAxisProperties {
	float DeadZone; // 0x0(0x4)
	float Sensitivity; // 0x4(0x4)
	float Exponent; // 0x8(0x4)
	unsigned char bInvert : 1; // 0xC(0x1)
	unsigned char UnknownData_C_1 : 7; // 0xC(0x1)
	unsigned char UnknownData_D[0x0003]; // 0xD(0x3)
};

// ScriptStruct Engine.KeyBind
// Size : 0x30 (Inherited : 0x0)
struct FKeyBind {
	struct FKey Key; // 0x0(0x18)
	struct FString Command; // 0x18(0x10)
	unsigned char Control : 1; // 0x28(0x1)
	unsigned char Shift : 1; // 0x28(0x1)
	unsigned char Alt : 1; // 0x28(0x1)
	unsigned char Cmd : 1; // 0x28(0x1)
	unsigned char bIgnoreCtrl : 1; // 0x28(0x1)
	unsigned char bIgnoreShift : 1; // 0x28(0x1)
	unsigned char bIgnoreAlt : 1; // 0x28(0x1)
	unsigned char bIgnoreCmd : 1; // 0x28(0x1)
	unsigned char bDisabled : 1; // 0x29(0x1)
	unsigned char UnknownData_29_1 : 7; // 0x29(0x1)
	unsigned char UnknownData_2A[0x0006]; // 0x2A(0x6)
};

// ScriptStruct Engine.PlayerMuteList
// Size : 0x38 (Inherited : 0x0)
struct FPlayerMuteList {
	unsigned char UnknownData_0[0x0030]; // 0x0(0x30)
	bool bHasVoiceHandshakeCompleted; // 0x30(0x1)
	unsigned char UnknownData_31[0x0003]; // 0x31(0x3)
	int32_t VoiceChannelIdx; // 0x34(0x4)
};

// ScriptStruct Engine.PoseDataContainer
// Size : 0x90 (Inherited : 0x0)
struct FPoseDataContainer {
	struct TArray<struct FSmartName> PoseNames; // 0x0(0x10)
	struct TArray<struct FName> Tracks; // 0x10(0x10)
	struct TMap<struct FName, int32_t> TrackMap; // 0x20(0x50)
	struct TArray<struct FPoseData> Poses; // 0x70(0x10)
	struct TArray<struct FAnimCurveBase> Curves; // 0x80(0x10)
};

// ScriptStruct Engine.PoseData
// Size : 0x70 (Inherited : 0x0)
struct FPoseData {
	struct TArray<struct FTransform> LocalSpacePose; // 0x0(0x10)
	struct TMap<int32_t, int32_t> TrackToBufferIndex; // 0x10(0x50)
	struct TArray<float> CurveData; // 0x60(0x10)
};

// ScriptStruct Engine.PreviewAssetAttachContainer
// Size : 0x10 (Inherited : 0x0)
struct FPreviewAssetAttachContainer {
	struct TArray<struct FPreviewAttachedObjectPair> AttachedObjects; // 0x0(0x10)
};

// ScriptStruct Engine.PreviewAttachedObjectPair
// Size : 0x38 (Inherited : 0x0)
struct FPreviewAttachedObjectPair {
	struct TSoftObjectPtr<struct UObject> AttachedObject; // 0x0(0x28)
	struct UObject* Object; // 0x28(0x8)
	struct FName AttachedTo; // 0x30(0x8)
};

// ScriptStruct Engine.PreviewMeshCollectionEntry
// Size : 0x28 (Inherited : 0x0)
struct FPreviewMeshCollectionEntry {
	struct TSoftObjectPtr<struct USkeletalMesh> SkeletalMesh; // 0x0(0x28)
};

// ScriptStruct Engine.PrimitiveComponentInstanceData
// Size : 0xF0 (Inherited : 0xA8)
struct FPrimitiveComponentInstanceData : FSceneComponentInstanceData {
	unsigned char UnknownData_A8[0x0008]; // 0xA8(0x8)
	struct FTransform ComponentTransform; // 0xB0(0x30)
	int32_t VisibilityId; // 0xE0(0x4)
	unsigned char UnknownData_E4[0x0004]; // 0xE4(0x4)
	struct UPrimitiveComponent* LODParent; // 0xE8(0x8)
};

// ScriptStruct Engine.SpriteCategoryInfo
// Size : 0x38 (Inherited : 0x0)
struct FSpriteCategoryInfo {
	struct FName Category; // 0x0(0x8)
	struct FText DisplayName; // 0x8(0x18)
	struct FText Description; // 0x20(0x18)
};

// ScriptStruct Engine.ReverbSettings
// Size : 0x20 (Inherited : 0x0)
struct FReverbSettings {
	bool bApplyReverb; // 0x0(0x1)
	unsigned char UnknownData_1[0x0007]; // 0x1(0x7)
	struct UReverbEffect* ReverbEffect; // 0x8(0x8)
	struct USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10(0x8)
	float Volume; // 0x18(0x4)
	float FadeTime; // 0x1C(0x4)
};

// ScriptStruct Engine.CompressedRichCurve
// Size : 0x18 (Inherited : 0x0)
struct FCompressedRichCurve {
	unsigned char UnknownData_0[0x0018]; // 0x0(0x18)
};

// ScriptStruct Engine.TransformBase
// Size : 0x28 (Inherited : 0x0)
struct FTransformBase {
	struct FName Node; // 0x0(0x8)
	struct FTransformBaseConstraint Constraints[2]; // 0x8(0x20)
};

// ScriptStruct Engine.TransformBaseConstraint
// Size : 0x10 (Inherited : 0x0)
struct FTransformBaseConstraint {
	struct TArray<struct FRigTransformConstraint> TransformConstraints; // 0x0(0x10)
};

// ScriptStruct Engine.RigTransformConstraint
// Size : 0x10 (Inherited : 0x0)
struct FRigTransformConstraint {
	enum class EConstraintTransform TranformType; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	struct FName ParentSpace; // 0x4(0x8)
	float Weight; // 0xC(0x4)
};

// ScriptStruct Engine.Node
// Size : 0x60 (Inherited : 0x0)
struct FNode {
	struct FName Name; // 0x0(0x8)
	struct FName ParentName; // 0x8(0x8)
	struct FTransform Transform; // 0x10(0x30)
	struct FString DisplayName; // 0x40(0x10)
	bool bAdvanced; // 0x50(0x1)
	unsigned char UnknownData_51[0x000F]; // 0x51(0xF)
};

// ScriptStruct Engine.RootMotionSource
// Size : 0xA0 (Inherited : 0x0)
struct FRootMotionSource {
	unsigned char UnknownData_0[0x0010]; // 0x0(0x10)
	uint16 Priority; // 0x10(0x2)
	uint16 LocalID; // 0x12(0x2)
	enum class ERootMotionAccumulateMode AccumulateMode; // 0x14(0x1)
	unsigned char UnknownData_15[0x0003]; // 0x15(0x3)
	struct FName InstanceName; // 0x18(0x8)
	float StartTime; // 0x20(0x4)
	float CurrentTime; // 0x24(0x4)
	float PreviousTime; // 0x28(0x4)
	float Duration; // 0x2C(0x4)
	struct FRootMotionSourceStatus Status; // 0x30(0x1)
	struct FRootMotionSourceSettings Settings; // 0x31(0x1)
	bool bInLocalSpace; // 0x32(0x1)
	unsigned char UnknownData_33[0x000D]; // 0x33(0xD)
	struct FRootMotionMovementParams RootMotionParams; // 0x40(0x40)
	struct FRootMotionFinishVelocitySettings FinishVelocityParams; // 0x80(0x14)
	unsigned char UnknownData_94[0x000C]; // 0x94(0xC)
};

// ScriptStruct Engine.RootMotionFinishVelocitySettings
// Size : 0x14 (Inherited : 0x0)
struct FRootMotionFinishVelocitySettings {
	enum class ERootMotionFinishVelocityMode Mode; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	struct FVector SetVelocity; // 0x4(0xC)
	float ClampVelocity; // 0x10(0x4)
};

// ScriptStruct Engine.RootMotionSourceStatus
// Size : 0x1 (Inherited : 0x0)
struct FRootMotionSourceStatus {
	enum class None Flags; // 0x0(0x1)
};

// ScriptStruct Engine.RootMotionSource_JumpForce
// Size : 0xD0 (Inherited : 0xA0)
struct FRootMotionSource_JumpForce : FRootMotionSource {
	struct FRotator Rotation; // 0x98(0xC)
	float Distance; // 0xA4(0x4)
	float Height; // 0xA8(0x4)
	bool bDisableTimeout; // 0xAC(0x1)
	struct UCurveVector* PathOffsetCurve; // 0xB0(0x8)
	struct UCurveFloat* TimeMappingCurve; // 0xB8(0x8)
	unsigned char UnknownData_C5[0x000B]; // 0xC5(0xB)
};

// ScriptStruct Engine.RootMotionSource_MoveToDynamicForce
// Size : 0xD0 (Inherited : 0xA0)
struct FRootMotionSource_MoveToDynamicForce : FRootMotionSource {
	struct FVector StartLocation; // 0x98(0xC)
	struct FVector InitialTargetLocation; // 0xA4(0xC)
	struct FVector TargetLocation; // 0xB0(0xC)
	bool bRestrictSpeedToExpected; // 0xBC(0x1)
	struct UCurveVector* PathOffsetCurve; // 0xC0(0x8)
	struct UCurveFloat* TimeMappingCurve; // 0xC8(0x8)
};

// ScriptStruct Engine.RootMotionSource_MoveToForce
// Size : 0xC0 (Inherited : 0xA0)
struct FRootMotionSource_MoveToForce : FRootMotionSource {
	struct FVector StartLocation; // 0x98(0xC)
	struct FVector TargetLocation; // 0xA4(0xC)
	bool bRestrictSpeedToExpected; // 0xB0(0x1)
	struct UCurveVector* PathOffsetCurve; // 0xB8(0x8)
};

// ScriptStruct Engine.RootMotionSource_RadialForce
// Size : 0xE0 (Inherited : 0xA0)
struct FRootMotionSource_RadialForce : FRootMotionSource {
	struct FVector Location; // 0x98(0xC)
	struct AActor* LocationActor; // 0xA8(0x8)
	float Radius; // 0xB0(0x4)
	float Strength; // 0xB4(0x4)
	bool bIsPush; // 0xB8(0x1)
	bool bNoZForce; // 0xB9(0x1)
	unsigned char UnknownData_BE[0x0002]; // 0xBE(0x2)
	struct UCurveFloat* StrengthDistanceFalloff; // 0xC0(0x8)
	struct UCurveFloat* StrengthOverTime; // 0xC8(0x8)
	bool bUseFixedWorldDirection; // 0xD0(0x1)
	unsigned char UnknownData_D1[0x0003]; // 0xD1(0x3)
	struct FRotator FixedWorldDirection; // 0xD4(0xC)
};

// ScriptStruct Engine.RootMotionSource_ConstantForce
// Size : 0xB0 (Inherited : 0xA0)
struct FRootMotionSource_ConstantForce : FRootMotionSource {
	struct FVector Force; // 0x98(0xC)
	struct UCurveFloat* StrengthOverTime; // 0xA8(0x8)
};

// ScriptStruct Engine.CameraExposureSettings
// Size : 0x40 (Inherited : 0x0)
struct FCameraExposureSettings {
	enum class EAutoExposureMethod Method; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float LowPercent; // 0x4(0x4)
	float HighPercent; // 0x8(0x4)
	float MinBrightness; // 0xC(0x4)
	float MaxBrightness; // 0x10(0x4)
	float SpeedUp; // 0x14(0x4)
	float SpeedDown; // 0x18(0x4)
	float Bias; // 0x1C(0x4)
	struct UCurveFloat* BiasCurve; // 0x20(0x8)
	struct UTexture* MeterMask; // 0x28(0x8)
	float HistogramLogMin; // 0x30(0x4)
	float HistogramLogMax; // 0x34(0x4)
	float CalibrationConstant; // 0x38(0x4)
	unsigned char ApplyPhysicalCameraExposure : 1; // 0x3C(0x1)
	unsigned char UnknownData_3C_1 : 7; // 0x3C(0x1)
	unsigned char UnknownData_3D[0x0003]; // 0x3D(0x3)
};

// ScriptStruct Engine.LensSettings
// Size : 0xE0 (Inherited : 0x0)
struct FLensSettings {
	struct FLensBloomSettings Bloom; // 0x0(0xB8)
	struct FLensImperfectionSettings Imperfections; // 0xB8(0x20)
	float ChromaticAberration; // 0xD8(0x4)
	unsigned char UnknownData_DC[0x0004]; // 0xDC(0x4)
};

// ScriptStruct Engine.LensImperfectionSettings
// Size : 0x20 (Inherited : 0x0)
struct FLensImperfectionSettings {
	struct UTexture* DirtMask; // 0x0(0x8)
	float DirtMaskIntensity; // 0x8(0x4)
	struct FLinearColor DirtMaskTint; // 0xC(0x10)
	unsigned char UnknownData_1C[0x0004]; // 0x1C(0x4)
};

// ScriptStruct Engine.LensBloomSettings
// Size : 0xB8 (Inherited : 0x0)
struct FLensBloomSettings {
	struct FGaussianSumBloomSettings GaussianSum; // 0x0(0x84)
	unsigned char UnknownData_84[0x0004]; // 0x84(0x4)
	struct FConvolutionBloomSettings Convolution; // 0x88(0x28)
	enum class EBloomMethod Method; // 0xB0(0x1)
	unsigned char UnknownData_B1[0x0007]; // 0xB1(0x7)
};

// ScriptStruct Engine.ConvolutionBloomSettings
// Size : 0x28 (Inherited : 0x0)
struct FConvolutionBloomSettings {
	struct UTexture2D* Texture; // 0x0(0x8)
	float Size; // 0x8(0x4)
	struct FVector2D CenterUV; // 0xC(0x8)
	float PreFilterMin; // 0x14(0x4)
	float PreFilterMax; // 0x18(0x4)
	float PreFilterMult; // 0x1C(0x4)
	float BufferScale; // 0x20(0x4)
	unsigned char UnknownData_24[0x0004]; // 0x24(0x4)
};

// ScriptStruct Engine.GaussianSumBloomSettings
// Size : 0x84 (Inherited : 0x0)
struct FGaussianSumBloomSettings {
	float Intensity; // 0x0(0x4)
	float Threshold; // 0x4(0x4)
	float SizeScale; // 0x8(0x4)
	float Filter1Size; // 0xC(0x4)
	float Filter2Size; // 0x10(0x4)
	float Filter3Size; // 0x14(0x4)
	float Filter4Size; // 0x18(0x4)
	float Filter5Size; // 0x1C(0x4)
	float Filter6Size; // 0x20(0x4)
	struct FLinearColor Filter1Tint; // 0x24(0x10)
	struct FLinearColor Filter2Tint; // 0x34(0x10)
	struct FLinearColor Filter3Tint; // 0x44(0x10)
	struct FLinearColor Filter4Tint; // 0x54(0x10)
	struct FLinearColor Filter5Tint; // 0x64(0x10)
	struct FLinearColor Filter6Tint; // 0x74(0x10)
};

// ScriptStruct Engine.FilmStockSettings
// Size : 0x14 (Inherited : 0x0)
struct FFilmStockSettings {
	float Slope; // 0x0(0x4)
	float Toe; // 0x4(0x4)
	float Shoulder; // 0x8(0x4)
	float BlackClip; // 0xC(0x4)
	float WhiteClip; // 0x10(0x4)
};

// ScriptStruct Engine.ColorGradingSettings
// Size : 0x150 (Inherited : 0x0)
struct FColorGradingSettings {
	struct FColorGradePerRangeSettings Global; // 0x0(0x50)
	struct FColorGradePerRangeSettings Shadows; // 0x50(0x50)
	struct FColorGradePerRangeSettings Midtones; // 0xA0(0x50)
	struct FColorGradePerRangeSettings Highlights; // 0xF0(0x50)
	float ShadowsMax; // 0x140(0x4)
	float HighlightsMin; // 0x144(0x4)
	unsigned char UnknownData_148[0x0008]; // 0x148(0x8)
};

// ScriptStruct Engine.ColorGradePerRangeSettings
// Size : 0x50 (Inherited : 0x0)
struct FColorGradePerRangeSettings {
	struct FVector4 Saturation; // 0x0(0x10)
	struct FVector4 Contrast; // 0x10(0x10)
	struct FVector4 Gamma; // 0x20(0x10)
	struct FVector4 Gain; // 0x30(0x10)
	struct FVector4 Offset; // 0x40(0x10)
};

// ScriptStruct Engine.EngineShowFlagsSetting
// Size : 0x18 (Inherited : 0x0)
struct FEngineShowFlagsSetting {
	struct FString ShowFlagName; // 0x0(0x10)
	bool Enabled; // 0x10(0x1)
	unsigned char UnknownData_11[0x0007]; // 0x11(0x7)
};

// ScriptStruct Engine.SimpleCurve
// Size : 0x88 (Inherited : 0x70)
struct FSimpleCurve : FRealCurve {
	enum class ERichCurveInterpMode InterpMode; // 0x70(0x1)
	unsigned char UnknownData_71[0x0007]; // 0x71(0x7)
	struct TArray<struct FSimpleCurveKey> Keys; // 0x78(0x10)
};

// ScriptStruct Engine.SimpleCurveKey
// Size : 0x8 (Inherited : 0x0)
struct FSimpleCurveKey {
	float Time; // 0x0(0x4)
	float Value; // 0x4(0x4)
};

// ScriptStruct Engine.SingleAnimationPlayData
// Size : 0x18 (Inherited : 0x0)
struct FSingleAnimationPlayData {
	struct UAnimationAsset* AnimToPlay; // 0x0(0x8)
	unsigned char bSavedLooping : 1; // 0x8(0x1)
	unsigned char bSavedPlaying : 1; // 0x8(0x1)
	unsigned char UnknownData_8_2 : 6; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
	float SavedPosition; // 0xC(0x4)
	float SavedPlayRate; // 0x10(0x4)
	unsigned char UnknownData_14[0x0004]; // 0x14(0x4)
};

// ScriptStruct Engine.SkeletalMaterial
// Size : 0x28 (Inherited : 0x0)
struct FSkeletalMaterial {
	struct UMaterialInterface* MaterialInterface; // 0x0(0x8)
	struct FName MaterialSlotName; // 0x8(0x8)
	struct FMeshUVChannelInfo UVChannelData; // 0x10(0x14)
	unsigned char UnknownData_24[0x0004]; // 0x24(0x4)
};

// ScriptStruct Engine.ClothingAssetData_Legacy
// Size : 0x78 (Inherited : 0x0)
struct FClothingAssetData_Legacy {
	struct FName AssetName; // 0x0(0x8)
	struct FString ApexFileName; // 0x8(0x10)
	bool bClothPropertiesChanged; // 0x18(0x1)
	unsigned char UnknownData_19[0x0003]; // 0x19(0x3)
	struct FClothPhysicsProperties_Legacy PhysicsProperties; // 0x1C(0x50)
	unsigned char UnknownData_6C[0x000C]; // 0x6C(0xC)
};

// ScriptStruct Engine.ClothPhysicsProperties_Legacy
// Size : 0x50 (Inherited : 0x0)
struct FClothPhysicsProperties_Legacy {
	float VerticalResistance; // 0x0(0x4)
	float HorizontalResistance; // 0x4(0x4)
	float BendResistance; // 0x8(0x4)
	float ShearResistance; // 0xC(0x4)
	float Friction; // 0x10(0x4)
	float Damping; // 0x14(0x4)
	float TetherStiffness; // 0x18(0x4)
	float TetherLimit; // 0x1C(0x4)
	float Drag; // 0x20(0x4)
	float StiffnessFrequency; // 0x24(0x4)
	float GravityScale; // 0x28(0x4)
	float MassScale; // 0x2C(0x4)
	float InertiaBlend; // 0x30(0x4)
	float SelfCollisionThickness; // 0x34(0x4)
	float SelfCollisionSquashScale; // 0x38(0x4)
	float SelfCollisionStiffness; // 0x3C(0x4)
	float SolverFrequency; // 0x40(0x4)
	float FiberCompression; // 0x44(0x4)
	float FiberExpansion; // 0x48(0x4)
	float FiberResistance; // 0x4C(0x4)
};

// ScriptStruct Engine.SkeletalMeshLODInfo
// Size : 0xB8 (Inherited : 0x0)
struct FSkeletalMeshLODInfo {
	struct FPerPlatformFloat ScreenSize; // 0x0(0x4)
	float LODHysteresis; // 0x4(0x4)
	struct TArray<int32_t> LODMaterialMap; // 0x8(0x10)
	struct FSkeletalMeshBuildSettings BuildSettings; // 0x18(0x14)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x2C(0x3C)
	struct TArray<struct FBoneReference> BonesToRemove; // 0x68(0x10)
	struct TArray<struct FBoneReference> BonesToPrioritize; // 0x78(0x10)
	float WeightOfPrioritization; // 0x88(0x4)
	unsigned char UnknownData_8C[0x0004]; // 0x8C(0x4)
	struct UAnimSequence* BakePose; // 0x90(0x8)
	struct UAnimSequence* BakePoseOverride; // 0x98(0x8)
	struct FString SourceImportFilename; // 0xA0(0x10)
	enum class ESkinCacheUsage SkinCacheUsage; // 0xB0(0x1)
	unsigned char bHasBeenSimplified : 1; // 0xB1(0x1)
	unsigned char bHasPerLODVertexColors : 1; // 0xB1(0x1)
	unsigned char bAllowCPUAccess : 1; // 0xB1(0x1)
	unsigned char bSupportUniformlyDistributedSampling : 1; // 0xB1(0x1)
	unsigned char UnknownData_B1_4 : 4; // 0xB1(0x1)
	unsigned char UnknownData_B2[0x0006]; // 0xB2(0x6)
};

// ScriptStruct Engine.SkeletalMeshOptimizationSettings
// Size : 0x3C (Inherited : 0x0)
struct FSkeletalMeshOptimizationSettings {
	enum class SkeletalMeshTerminationCriterion TerminationCriterion; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float NumOfTrianglesPercentage; // 0x4(0x4)
	float NumOfVertPercentage; // 0x8(0x4)
	uint32_t MaxNumOfTriangles; // 0xC(0x4)
	uint32_t MaxNumOfVerts; // 0x10(0x4)
	float MaxDeviationPercentage; // 0x14(0x4)
	enum class SkeletalMeshOptimizationType ReductionMethod; // 0x18(0x1)
	enum class SkeletalMeshOptimizationImportance SilhouetteImportance; // 0x19(0x1)
	enum class SkeletalMeshOptimizationImportance TextureImportance; // 0x1A(0x1)
	enum class SkeletalMeshOptimizationImportance ShadingImportance; // 0x1B(0x1)
	enum class SkeletalMeshOptimizationImportance SkinningImportance; // 0x1C(0x1)
	unsigned char bRemapMorphTargets : 1; // 0x1D(0x1)
	unsigned char bRecalcNormals : 1; // 0x1D(0x1)
	unsigned char UnknownData_1D_2 : 6; // 0x1D(0x1)
	unsigned char UnknownData_1E[0x0002]; // 0x1E(0x2)
	float WeldingThreshold; // 0x20(0x4)
	float NormalsThreshold; // 0x24(0x4)
	int32_t MaxBonesPerVertex; // 0x28(0x4)
	unsigned char bEnforceBoneBoundaries : 1; // 0x2C(0x1)
	unsigned char UnknownData_2C_1 : 7; // 0x2C(0x1)
	unsigned char UnknownData_2D[0x0003]; // 0x2D(0x3)
	float VolumeImportance; // 0x30(0x4)
	unsigned char bLockEdges : 1; // 0x34(0x1)
	unsigned char bLockColorBounaries : 1; // 0x34(0x1)
	unsigned char UnknownData_34_2 : 6; // 0x34(0x1)
	unsigned char UnknownData_35[0x0003]; // 0x35(0x3)
	int32_t BaseLOD; // 0x38(0x4)
};

// ScriptStruct Engine.SkeletalMeshClothBuildParams
// Size : 0x58 (Inherited : 0x0)
struct FSkeletalMeshClothBuildParams {
	struct FWeakObjectPtr<struct UClothingAssetBase> TargetAsset; // 0x0(0x8)
	int32_t TargetLod; // 0x8(0x4)
	bool bRemapParameters; // 0xC(0x1)
	unsigned char UnknownData_D[0x0003]; // 0xD(0x3)
	struct FString AssetName; // 0x10(0x10)
	int32_t LODIndex; // 0x20(0x4)
	int32_t SourceSection; // 0x24(0x4)
	bool bRemoveFromMesh; // 0x28(0x1)
	unsigned char UnknownData_29[0x0007]; // 0x29(0x7)
	struct TSoftObjectPtr<struct UPhysicsAsset> PhysicsAsset; // 0x30(0x28)
};

// ScriptStruct Engine.BoneMirrorExport
// Size : 0x14 (Inherited : 0x0)
struct FBoneMirrorExport {
	struct FName BoneName; // 0x0(0x8)
	struct FName SourceBoneName; // 0x8(0x8)
	enum class EAxis BoneFlipAxis; // 0x10(0x1)
	unsigned char UnknownData_11[0x0003]; // 0x11(0x3)
};

// ScriptStruct Engine.BoneMirrorInfo
// Size : 0x8 (Inherited : 0x0)
struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x0(0x4)
	enum class EAxis BoneFlipAxis; // 0x4(0x1)
	unsigned char UnknownData_5[0x0003]; // 0x5(0x3)
};

// ScriptStruct Engine.SkeletalMeshComponentClothTickFunction
// Size : 0x30 (Inherited : 0x28)
struct FSkeletalMeshComponentClothTickFunction : FTickFunction {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// ScriptStruct Engine.SkeletalMeshComponentEndPhysicsTickFunction
// Size : 0x30 (Inherited : 0x28)
struct FSkeletalMeshComponentEndPhysicsTickFunction : FTickFunction {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// ScriptStruct Engine.SkeletalMeshLODGroupSettings
// Size : 0x80 (Inherited : 0x0)
struct FSkeletalMeshLODGroupSettings {
	struct FPerPlatformFloat ScreenSize; // 0x0(0x4)
	float LODHysteresis; // 0x4(0x4)
	enum class EBoneFilterActionOption BoneFilterActionOption; // 0x8(0x1)
	unsigned char UnknownData_9[0x0007]; // 0x9(0x7)
	struct TArray<struct FBoneFilter> BoneList; // 0x10(0x10)
	struct TArray<struct FName> BonesToPrioritize; // 0x20(0x10)
	float WeightOfPrioritization; // 0x30(0x4)
	unsigned char UnknownData_34[0x0004]; // 0x34(0x4)
	struct UAnimSequence* BakePose; // 0x38(0x8)
	struct FSkeletalMeshOptimizationSettings ReductionSettings; // 0x40(0x3C)
	unsigned char UnknownData_7C[0x0004]; // 0x7C(0x4)
};

// ScriptStruct Engine.BoneFilter
// Size : 0xC (Inherited : 0x0)
struct FBoneFilter {
	bool bExcludeSelf; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	struct FName BoneName; // 0x4(0x8)
};

// ScriptStruct Engine.SkeletalMeshSamplingInfo
// Size : 0x30 (Inherited : 0x0)
struct FSkeletalMeshSamplingInfo {
	struct TArray<struct FSkeletalMeshSamplingRegion> Regions; // 0x0(0x10)
	struct FSkeletalMeshSamplingBuiltData BuiltData; // 0x10(0x20)
};

// ScriptStruct Engine.SkeletalMeshSamplingBuiltData
// Size : 0x20 (Inherited : 0x0)
struct FSkeletalMeshSamplingBuiltData {
	struct TArray<struct FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x0(0x10)
	struct TArray<struct FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10(0x10)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBuiltData
// Size : 0x78 (Inherited : 0x0)
struct FSkeletalMeshSamplingRegionBuiltData {
	unsigned char UnknownData_0[0x0078]; // 0x0(0x78)
};

// ScriptStruct Engine.SkeletalMeshSamplingLODBuiltData
// Size : 0x48 (Inherited : 0x0)
struct FSkeletalMeshSamplingLODBuiltData {
	unsigned char UnknownData_0[0x0048]; // 0x0(0x48)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegion
// Size : 0x30 (Inherited : 0x0)
struct FSkeletalMeshSamplingRegion {
	struct FName Name; // 0x0(0x8)
	int32_t LODIndex; // 0x8(0x4)
	unsigned char bSupportUniformlyDistributedSampling : 1; // 0xC(0x1)
	unsigned char UnknownData_C_1 : 7; // 0xC(0x1)
	unsigned char UnknownData_D[0x0003]; // 0xD(0x3)
	struct TArray<struct FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x10(0x10)
	struct TArray<struct FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x20(0x10)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionBoneFilter
// Size : 0xC (Inherited : 0x0)
struct FSkeletalMeshSamplingRegionBoneFilter {
	struct FName BoneName; // 0x0(0x8)
	unsigned char bIncludeOrExclude : 1; // 0x8(0x1)
	unsigned char bApplyToChildren : 1; // 0x8(0x1)
	unsigned char UnknownData_8_2 : 6; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
};

// ScriptStruct Engine.SkeletalMeshSamplingRegionMaterialFilter
// Size : 0x8 (Inherited : 0x0)
struct FSkeletalMeshSamplingRegionMaterialFilter {
	struct FName MaterialName; // 0x0(0x8)
};

// ScriptStruct Engine.VirtualBone
// Size : 0x18 (Inherited : 0x0)
struct FVirtualBone {
	struct FName SourceBoneName; // 0x0(0x8)
	struct FName TargetBoneName; // 0x8(0x8)
	struct FName VirtualBoneName; // 0x10(0x8)
};

// ScriptStruct Engine.AnimSlotGroup
// Size : 0x18 (Inherited : 0x0)
struct FAnimSlotGroup {
	struct FName GroupName; // 0x0(0x8)
	struct TArray<struct FName> SlotNames; // 0x8(0x10)
};

// ScriptStruct Engine.RigConfiguration
// Size : 0x18 (Inherited : 0x0)
struct FRigConfiguration {
	struct URig* Rig; // 0x0(0x8)
	struct TArray<struct FNameMapping> BoneMappingTable; // 0x8(0x10)
};

// ScriptStruct Engine.NameMapping
// Size : 0x10 (Inherited : 0x0)
struct FNameMapping {
	struct FName NodeName; // 0x0(0x8)
	struct FName BoneName; // 0x8(0x8)
};

// ScriptStruct Engine.BoneReductionSetting
// Size : 0x10 (Inherited : 0x0)
struct FBoneReductionSetting {
	struct TArray<struct FName> BonesToRemove; // 0x0(0x10)
};

// ScriptStruct Engine.ReferencePose
// Size : 0x18 (Inherited : 0x0)
struct FReferencePose {
	struct FName PoseName; // 0x0(0x8)
	struct TArray<struct FTransform> ReferencePose; // 0x8(0x10)
};

// ScriptStruct Engine.BoneNode
// Size : 0x10 (Inherited : 0x0)
struct FBoneNode {
	struct FName Name; // 0x0(0x8)
	int32_t ParentIndex; // 0x8(0x4)
	enum class EBoneTranslationRetargetingMode TranslationRetargetingMode; // 0xC(0x1)
	unsigned char UnknownData_D[0x0003]; // 0xD(0x3)
};

// ScriptStruct Engine.SkeletonToMeshLinkup
// Size : 0x20 (Inherited : 0x0)
struct FSkeletonToMeshLinkup {
	struct TArray<int32_t> SkeletonToMeshTable; // 0x0(0x10)
	struct TArray<int32_t> MeshToSkeletonTable; // 0x10(0x10)
};

// ScriptStruct Engine.SkelMeshComponentLODInfo
// Size : 0x28 (Inherited : 0x0)
struct FSkelMeshComponentLODInfo {
	struct TArray<bool> HiddenMaterials; // 0x0(0x10)
	unsigned char UnknownData_10[0x0018]; // 0x10(0x18)
};

// ScriptStruct Engine.SkelMeshSkinWeightInfo
// Size : 0x3C (Inherited : 0x0)
struct FSkelMeshSkinWeightInfo {
	int32_t Bones[C]; // 0x0(0x30)
	enum class None Weights[C]; // 0x30(0xC)
};

// ScriptStruct Engine.SkinWeightProfileInfo
// Size : 0x10 (Inherited : 0x0)
struct FSkinWeightProfileInfo {
	struct FName Name; // 0x0(0x8)
	struct FPerPlatformBool DefaultProfile; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
	struct FPerPlatformInt DefaultProfileFromLODIndex; // 0xC(0x4)
};

// ScriptStruct Engine.TentDistribution
// Size : 0xC (Inherited : 0x0)
struct FTentDistribution {
	float TipAltitude; // 0x0(0x4)
	float TipValue; // 0x4(0x4)
	float Width; // 0x8(0x4)
};

// ScriptStruct Engine.PrecomputedSkyLightInstanceData
// Size : 0x160 (Inherited : 0xA8)
struct FPrecomputedSkyLightInstanceData : FSceneComponentInstanceData {
	struct FGuid LightGuid; // 0xA8(0x10)
	float AverageBrightness; // 0xB8(0x4)
	unsigned char UnknownData_BC[0x00A4]; // 0xBC(0xA4)
};

// ScriptStruct Engine.SmartNameContainer
// Size : 0x50 (Inherited : 0x0)
struct FSmartNameContainer {
	unsigned char UnknownData_0[0x0050]; // 0x0(0x50)
};

// ScriptStruct Engine.SmartNameMapping
// Size : 0x70 (Inherited : 0x0)
struct FSmartNameMapping {
	unsigned char UnknownData_0[0x0070]; // 0x0(0x70)
};

// ScriptStruct Engine.CurveMetaData
// Size : 0x20 (Inherited : 0x0)
struct FCurveMetaData {
	unsigned char UnknownData_0[0x0020]; // 0x0(0x20)
};

// ScriptStruct Engine.SoundAttenuationSettings
// Size : 0x3A0 (Inherited : 0xB0)
struct FSoundAttenuationSettings : FBaseAttenuationSettings {
	unsigned char bAttenuate : 1; // 0xB0(0x1)
	unsigned char bSpatialize : 1; // 0xB0(0x1)
	unsigned char bAttenuateWithLPF : 1; // 0xB0(0x1)
	unsigned char bEnableListenerFocus : 1; // 0xB0(0x1)
	unsigned char bEnableFocusInterpolation : 1; // 0xB0(0x1)
	unsigned char bEnableOcclusion : 1; // 0xB0(0x1)
	unsigned char bUseComplexCollisionForOcclusion : 1; // 0xB0(0x1)
	unsigned char bEnableReverbSend : 1; // 0xB0(0x1)
	unsigned char bEnablePriorityAttenuation : 1; // 0xB1(0x1)
	unsigned char bApplyNormalizationToStereoSounds : 1; // 0xB1(0x1)
	unsigned char bEnableLogFrequencyScaling : 1; // 0xB1(0x1)
	unsigned char bEnableSubmixSends : 1; // 0xB1(0x1)
	unsigned char UnknownData_B1_4 : 4; // 0xB1(0x1)
	enum class ESoundSpatializationAlgorithm SpatializationAlgorithm; // 0xB2(0x1)
	unsigned char UnknownData_B3[0x0001]; // 0xB3(0x1)
	float BinauralRadius; // 0xB4(0x4)
	enum class EAirAbsorptionMethod AbsorptionMethod; // 0xB8(0x1)
	enum class ECollisionChannel OcclusionTraceChannel; // 0xB9(0x1)
	enum class EReverbSendMethod ReverbSendMethod; // 0xBA(0x1)
	enum class EPriorityAttenuationMethod PriorityAttenuationMethod; // 0xBB(0x1)
	float OmniRadius; // 0xBC(0x4)
	float StereoSpread; // 0xC0(0x4)
	float LPFRadiusMin; // 0xC4(0x4)
	float LPFRadiusMax; // 0xC8(0x4)
	unsigned char UnknownData_CC[0x0004]; // 0xCC(0x4)
	struct FRuntimeFloatCurve CustomLowpassAirAbsorptionCurve; // 0xD0(0x88)
	struct FRuntimeFloatCurve CustomHighpassAirAbsorptionCurve; // 0x158(0x88)
	float LPFFrequencyAtMin; // 0x1E0(0x4)
	float LPFFrequencyAtMax; // 0x1E4(0x4)
	float HPFFrequencyAtMin; // 0x1E8(0x4)
	float HPFFrequencyAtMax; // 0x1EC(0x4)
	float FocusAzimuth; // 0x1F0(0x4)
	float NonFocusAzimuth; // 0x1F4(0x4)
	float FocusDistanceScale; // 0x1F8(0x4)
	float NonFocusDistanceScale; // 0x1FC(0x4)
	float FocusPriorityScale; // 0x200(0x4)
	float NonFocusPriorityScale; // 0x204(0x4)
	float FocusVolumeAttenuation; // 0x208(0x4)
	float NonFocusVolumeAttenuation; // 0x20C(0x4)
	float FocusAttackInterpSpeed; // 0x210(0x4)
	float FocusReleaseInterpSpeed; // 0x214(0x4)
	float OcclusionLowPassFilterFrequency; // 0x218(0x4)
	float OcclusionVolumeAttenuation; // 0x21C(0x4)
	float OcclusionInterpolationTime; // 0x220(0x4)
	float ReverbWetLevelMin; // 0x224(0x4)
	float ReverbWetLevelMax; // 0x228(0x4)
	float ReverbDistanceMin; // 0x22C(0x4)
	float ReverbDistanceMax; // 0x230(0x4)
	float ManualReverbSendLevel; // 0x234(0x4)
	struct FRuntimeFloatCurve CustomReverbSendCurve; // 0x238(0x88)
	struct TArray<struct FAttenuationSubmixSendSettings> SubmixSendSettings; // 0x2C0(0x10)
	float PriorityAttenuationMin; // 0x2D0(0x4)
	float PriorityAttenuationMax; // 0x2D4(0x4)
	float PriorityAttenuationDistanceMin; // 0x2D8(0x4)
	float PriorityAttenuationDistanceMax; // 0x2DC(0x4)
	float ManualPriorityAttenuation; // 0x2E0(0x4)
	unsigned char UnknownData_2E4[0x0004]; // 0x2E4(0x4)
	struct FRuntimeFloatCurve CustomPriorityAttenuationCurve; // 0x2E8(0x88)
	struct FSoundAttenuationPluginSettings PluginSettings; // 0x370(0x30)
};

// ScriptStruct Engine.SoundAttenuationPluginSettings
// Size : 0x30 (Inherited : 0x0)
struct FSoundAttenuationPluginSettings {
	struct TArray<struct USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x0(0x10)
	struct TArray<struct UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10(0x10)
	struct TArray<struct UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20(0x10)
};

// ScriptStruct Engine.AttenuationSubmixSendSettings
// Size : 0xA8 (Inherited : 0x0)
struct FAttenuationSubmixSendSettings {
	struct USoundSubmix* Submix; // 0x0(0x8)
	enum class ESubmixSendMethod SubmixSendMethod; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
	float SubmixSendLevelMin; // 0xC(0x4)
	float SubmixSendLevelMax; // 0x10(0x4)
	float SubmixSendDistanceMin; // 0x14(0x4)
	float SubmixSendDistanceMax; // 0x18(0x4)
	float ManualSubmixSendLevel; // 0x1C(0x4)
	struct FRuntimeFloatCurve CustomSubmixSendCurve; // 0x20(0x88)
};

// ScriptStruct Engine.PassiveSoundMixModifier
// Size : 0x10 (Inherited : 0x0)
struct FPassiveSoundMixModifier {
	struct USoundMix* SoundMix; // 0x0(0x8)
	float MinVolumeThreshold; // 0x8(0x4)
	float MaxVolumeThreshold; // 0xC(0x4)
};

// ScriptStruct Engine.SoundClassProperties
// Size : 0x58 (Inherited : 0x0)
struct FSoundClassProperties {
	float Volume; // 0x0(0x4)
	float Pitch; // 0x4(0x4)
	float LowPassFilterFrequency; // 0x8(0x4)
	float AttenuationDistanceScale; // 0xC(0x4)
	float StereoBleed; // 0x10(0x4)
	float LFEBleed; // 0x14(0x4)
	float VoiceCenterChannelVolume; // 0x18(0x4)
	float RadioFilterVolume; // 0x1C(0x4)
	float RadioFilterVolumeThreshold; // 0x20(0x4)
	unsigned char bApplyEffects : 1; // 0x24(0x1)
	unsigned char bAlwaysPlay : 1; // 0x24(0x1)
	unsigned char bIsUISound : 1; // 0x24(0x1)
	unsigned char bIsMusic : 1; // 0x24(0x1)
	unsigned char bCenterChannelOnly : 1; // 0x24(0x1)
	unsigned char bApplyAmbientVolumes : 1; // 0x24(0x1)
	unsigned char bReverb : 1; // 0x24(0x1)
	unsigned char UnknownData_25[0x0003]; // 0x25(0x3)
	float Default2DReverbSendAmount; // 0x28(0x4)
	enum class EAudioOutputTarget OutputTarget; // 0x2C(0x1)
	enum class ESoundWaveLoadingBehavior LoadingBehavior; // 0x2D(0x1)
	unsigned char UnknownData_2E[0x0002]; // 0x2E(0x2)
	struct USoundSubmix* DefaultSubmix; // 0x30(0x8)
	unsigned char UnknownData_38[0x0020]; // 0x38(0x20)
};

// ScriptStruct Engine.SoundClassEditorData
// Size : 0x8 (Inherited : 0x0)
struct FSoundClassEditorData {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
};

// ScriptStruct Engine.SoundConcurrencySettings
// Size : 0x20 (Inherited : 0x0)
struct FSoundConcurrencySettings {
	int32_t MaxCount; // 0x0(0x4)
	unsigned char bLimitToOwner : 1; // 0x4(0x1)
	unsigned char UnknownData_4_1 : 7; // 0x4(0x1)
	unsigned char UnknownData_5[0x0003]; // 0x5(0x3)
	enum class EMaxConcurrentResolutionRule ResolutionRule; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
	float VolumeScale; // 0xC(0x4)
	float VolumeScaleAttackTime; // 0x10(0x4)
	unsigned char bVolumeScaleCanRelease : 1; // 0x14(0x1)
	unsigned char UnknownData_14_1 : 7; // 0x14(0x1)
	unsigned char UnknownData_15[0x0003]; // 0x15(0x3)
	float VolumeScaleReleaseTime; // 0x18(0x4)
	float VoiceStealReleaseTime; // 0x1C(0x4)
};

// ScriptStruct Engine.SoundNodeEditorData
// Size : 0x8 (Inherited : 0x0)
struct FSoundNodeEditorData {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
};

// ScriptStruct Engine.SourceEffectChainEntry
// Size : 0x10 (Inherited : 0x0)
struct FSourceEffectChainEntry {
	struct USoundEffectSourcePreset* Preset; // 0x0(0x8)
	unsigned char bBypass : 1; // 0x8(0x1)
	unsigned char UnknownData_8_1 : 7; // 0x8(0x1)
	unsigned char UnknownData_9[0x0007]; // 0x9(0x7)
};

// ScriptStruct Engine.SoundGroup
// Size : 0x20 (Inherited : 0x0)
struct FSoundGroup {
	enum class ESoundGroup SoundGroup; // 0x0(0x1)
	unsigned char UnknownData_1[0x0007]; // 0x1(0x7)
	struct FString DisplayName; // 0x8(0x10)
	unsigned char bAlwaysDecompressOnLoad : 1; // 0x18(0x1)
	unsigned char UnknownData_18_1 : 7; // 0x18(0x1)
	unsigned char UnknownData_19[0x0003]; // 0x19(0x3)
	float DecompressedDuration; // 0x1C(0x4)
};

// ScriptStruct Engine.SoundClassAdjuster
// Size : 0x20 (Inherited : 0x0)
struct FSoundClassAdjuster {
	struct USoundClass* SoundClassObject; // 0x0(0x8)
	float VolumeAdjuster; // 0x8(0x4)
	float PitchAdjuster; // 0xC(0x4)
	float LowPassFilterFrequency; // 0x10(0x4)
	unsigned char bApplyToChildren : 1; // 0x14(0x1)
	unsigned char UnknownData_14_1 : 7; // 0x14(0x1)
	unsigned char UnknownData_15[0x0003]; // 0x15(0x3)
	float VoiceCenterChannelVolumeAdjuster; // 0x18(0x4)
	unsigned char UnknownData_1C[0x0004]; // 0x1C(0x4)
};

// ScriptStruct Engine.AudioEQEffect
// Size : 0x40 (Inherited : 0x8)
struct FAudioEQEffect : FAudioEffectParameters {
	unsigned char UnknownData_8[0x0008]; // 0x8(0x8)
	float FrequencyCenter0; // 0x10(0x4)
	float Gain0; // 0x14(0x4)
	float Bandwidth0; // 0x18(0x4)
	float FrequencyCenter1; // 0x1C(0x4)
	float Gain1; // 0x20(0x4)
	float Bandwidth1; // 0x24(0x4)
	float FrequencyCenter2; // 0x28(0x4)
	float Gain2; // 0x2C(0x4)
	float Bandwidth2; // 0x30(0x4)
	float FrequencyCenter3; // 0x34(0x4)
	float Gain3; // 0x38(0x4)
	float Bandwidth3; // 0x3C(0x4)
};

// ScriptStruct Engine.DistanceDatum
// Size : 0x14 (Inherited : 0x0)
struct FDistanceDatum {
	float FadeInDistanceStart; // 0x0(0x4)
	float FadeInDistanceEnd; // 0x4(0x4)
	float FadeOutDistanceStart; // 0x8(0x4)
	float FadeOutDistanceEnd; // 0xC(0x4)
	float Volume; // 0x10(0x4)
};

// ScriptStruct Engine.ModulatorContinuousParams
// Size : 0x20 (Inherited : 0x0)
struct FModulatorContinuousParams {
	struct FName ParameterName; // 0x0(0x8)
	float Default; // 0x8(0x4)
	float MinInput; // 0xC(0x4)
	float MaxInput; // 0x10(0x4)
	float MinOutput; // 0x14(0x4)
	float MaxOutput; // 0x18(0x4)
	enum class ModulationParamMode ParamMode; // 0x1C(0x1)
	unsigned char UnknownData_1D[0x0003]; // 0x1D(0x3)
};

// ScriptStruct Engine.SoundSourceBusSendInfo
// Size : 0xB0 (Inherited : 0x0)
struct FSoundSourceBusSendInfo {
	enum class ESourceBusSendLevelControlMethod SourceBusSendLevelControlMethod; // 0x0(0x1)
	unsigned char UnknownData_1[0x0007]; // 0x1(0x7)
	struct USoundSourceBus* SoundSourceBus; // 0x8(0x8)
	float SendLevel; // 0x10(0x4)
	float MinSendLevel; // 0x14(0x4)
	float MaxSendLevel; // 0x18(0x4)
	float MinSendDistance; // 0x1C(0x4)
	float MaxSendDistance; // 0x20(0x4)
	unsigned char UnknownData_24[0x0004]; // 0x24(0x4)
	struct FRuntimeFloatCurve CustomSendLevelCurve; // 0x28(0x88)
};

// ScriptStruct Engine.SoundSubmixSendInfo
// Size : 0xB0 (Inherited : 0x0)
struct FSoundSubmixSendInfo {
	enum class ESendLevelControlMethod SendLevelControlMethod; // 0x0(0x1)
	unsigned char UnknownData_1[0x0007]; // 0x1(0x7)
	struct USoundSubmixBase* SoundSubmix; // 0x8(0x8)
	float SendLevel; // 0x10(0x4)
	float MinSendLevel; // 0x14(0x4)
	float MaxSendLevel; // 0x18(0x4)
	float MinSendDistance; // 0x1C(0x4)
	float MaxSendDistance; // 0x20(0x4)
	unsigned char UnknownData_24[0x0004]; // 0x24(0x4)
	struct FRuntimeFloatCurve CustomSendLevelCurve; // 0x28(0x88)
};

// ScriptStruct Engine.SoundWaveEnvelopeTimeData
// Size : 0x8 (Inherited : 0x0)
struct FSoundWaveEnvelopeTimeData {
	float Amplitude; // 0x0(0x4)
	float TimeSec; // 0x4(0x4)
};

// ScriptStruct Engine.SoundWaveSpectralTimeData
// Size : 0x18 (Inherited : 0x0)
struct FSoundWaveSpectralTimeData {
	struct TArray<struct FSoundWaveSpectralDataEntry> Data; // 0x0(0x10)
	float TimeSec; // 0x10(0x4)
	unsigned char UnknownData_14[0x0004]; // 0x14(0x4)
};

// ScriptStruct Engine.SoundWaveSpectralDataEntry
// Size : 0x8 (Inherited : 0x0)
struct FSoundWaveSpectralDataEntry {
	float Magnitude; // 0x0(0x4)
	float NormalizedMagnitude; // 0x4(0x4)
};

// ScriptStruct Engine.SoundWaveEnvelopeDataPerSound
// Size : 0x10 (Inherited : 0x0)
struct FSoundWaveEnvelopeDataPerSound {
	float Envelope; // 0x0(0x4)
	float PlaybackTime; // 0x4(0x4)
	struct USoundWave* SoundWave; // 0x8(0x8)
};

// ScriptStruct Engine.SoundWaveSpectralDataPerSound
// Size : 0x20 (Inherited : 0x0)
struct FSoundWaveSpectralDataPerSound {
	struct TArray<struct FSoundWaveSpectralData> SpectralData; // 0x0(0x10)
	float PlaybackTime; // 0x10(0x4)
	unsigned char UnknownData_14[0x0004]; // 0x14(0x4)
	struct USoundWave* SoundWave; // 0x18(0x8)
};

// ScriptStruct Engine.SoundWaveSpectralData
// Size : 0xC (Inherited : 0x0)
struct FSoundWaveSpectralData {
	float FrequencyHz; // 0x0(0x4)
	float Magnitude; // 0x4(0x4)
	float NormalizedMagnitude; // 0x8(0x4)
};

// ScriptStruct Engine.StreamedAudioPlatformData
// Size : 0x20 (Inherited : 0x0)
struct FStreamedAudioPlatformData {
	unsigned char UnknownData_0[0x0020]; // 0x0(0x20)
};

// ScriptStruct Engine.SplineInstanceData
// Size : 0x180 (Inherited : 0xA8)
struct FSplineInstanceData : FSceneComponentInstanceData {
	bool bSplineHasBeenEdited; // 0xA8(0x1)
	unsigned char UnknownData_A9[0x0007]; // 0xA9(0x7)
	struct FSplineCurves SplineCurves; // 0xB0(0x68)
	struct FSplineCurves SplineCurvesPreUCS; // 0x118(0x68)
};

// ScriptStruct Engine.SplineCurves
// Size : 0x68 (Inherited : 0x0)
struct FSplineCurves {
	struct FInterpCurveVector Position; // 0x0(0x18)
	struct FInterpCurveQuat Rotation; // 0x18(0x18)
	struct FInterpCurveVector Scale; // 0x30(0x18)
	struct FInterpCurveFloat ReparamTable; // 0x48(0x18)
	struct USplineMetadata* MetaData; // 0x60(0x8)
};

// ScriptStruct Engine.SplinePoint
// Size : 0x44 (Inherited : 0x0)
struct FSplinePoint {
	float InputKey; // 0x0(0x4)
	struct FVector Position; // 0x4(0xC)
	struct FVector ArriveTangent; // 0x10(0xC)
	struct FVector LeaveTangent; // 0x1C(0xC)
	struct FRotator Rotation; // 0x28(0xC)
	struct FVector Scale; // 0x34(0xC)
	enum class ESplinePointType Type; // 0x40(0x1)
	unsigned char UnknownData_41[0x0003]; // 0x41(0x3)
};

// ScriptStruct Engine.SplineMeshInstanceData
// Size : 0xD8 (Inherited : 0xA8)
struct FSplineMeshInstanceData : FSceneComponentInstanceData {
	struct FVector StartPos; // 0xA8(0xC)
	struct FVector EndPos; // 0xB4(0xC)
	struct FVector StartTangent; // 0xC0(0xC)
	struct FVector EndTangent; // 0xCC(0xC)
};

// ScriptStruct Engine.SplineMeshParams
// Size : 0x58 (Inherited : 0x0)
struct FSplineMeshParams {
	struct FVector StartPos; // 0x0(0xC)
	struct FVector StartTangent; // 0xC(0xC)
	struct FVector2D StartScale; // 0x18(0x8)
	float StartRoll; // 0x20(0x4)
	struct FVector2D StartOffset; // 0x24(0x8)
	struct FVector EndPos; // 0x2C(0xC)
	struct FVector2D EndScale; // 0x38(0x8)
	struct FVector EndTangent; // 0x40(0xC)
	float EndRoll; // 0x4C(0x4)
	struct FVector2D EndOffset; // 0x50(0x8)
};

// ScriptStruct Engine.MaterialRemapIndex
// Size : 0x18 (Inherited : 0x0)
struct FMaterialRemapIndex {
	uint32_t ImportVersionKey; // 0x0(0x4)
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
	struct TArray<int32_t> MaterialRemap; // 0x8(0x10)
};

// ScriptStruct Engine.StaticMaterial
// Size : 0x30 (Inherited : 0x0)
struct FStaticMaterial {
	struct UMaterialInterface* MaterialInterface; // 0x0(0x8)
	struct FName MaterialSlotName; // 0x8(0x8)
	struct FName ImportedMaterialSlotName; // 0x10(0x8)
	struct FMeshUVChannelInfo UVChannelData; // 0x18(0x14)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
};

// ScriptStruct Engine.AssetEditorOrbitCameraPosition
// Size : 0x28 (Inherited : 0x0)
struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	struct FVector CamOrbitPoint; // 0x4(0xC)
	struct FVector CamOrbitZoom; // 0x10(0xC)
	struct FRotator CamOrbitRotation; // 0x1C(0xC)
};

// ScriptStruct Engine.MeshSectionInfoMap
// Size : 0x50 (Inherited : 0x0)
struct FMeshSectionInfoMap {
	struct TMap<uint32_t, struct FMeshSectionInfo> Map; // 0x0(0x50)
};

// ScriptStruct Engine.MeshSectionInfo
// Size : 0x8 (Inherited : 0x0)
struct FMeshSectionInfo {
	int32_t MaterialIndex; // 0x0(0x4)
	bool bEnableCollision; // 0x4(0x1)
	bool bCastShadow; // 0x5(0x1)
	bool bForceOpaque; // 0x6(0x1)
	unsigned char UnknownData_7[0x0001]; // 0x7(0x1)
};

// ScriptStruct Engine.StaticMeshSourceModel
// Size : 0x70 (Inherited : 0x0)
struct FStaticMeshSourceModel {
	struct FMeshBuildSettings BuildSettings; // 0x0(0x30)
	struct FMeshReductionSettings ReductionSettings; // 0x30(0x24)
	float LODDistance; // 0x54(0x4)
	struct FPerPlatformFloat ScreenSize; // 0x58(0x4)
	unsigned char UnknownData_5C[0x0004]; // 0x5C(0x4)
	struct FString SourceImportFilename; // 0x60(0x10)
};

// ScriptStruct Engine.StaticMeshOptimizationSettings
// Size : 0x1C (Inherited : 0x0)
struct FStaticMeshOptimizationSettings {
	enum class EOptimizationType ReductionMethod; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float NumOfTrianglesPercentage; // 0x4(0x4)
	float MaxDeviationPercentage; // 0x8(0x4)
	float WeldingThreshold; // 0xC(0x4)
	bool bRecalcNormals; // 0x10(0x1)
	unsigned char UnknownData_11[0x0003]; // 0x11(0x3)
	float NormalsThreshold; // 0x14(0x4)
	enum class None SilhouetteImportance; // 0x18(0x1)
	enum class None TextureImportance; // 0x19(0x1)
	enum class None ShadingImportance; // 0x1A(0x1)
	unsigned char UnknownData_1B[0x0001]; // 0x1B(0x1)
};

// ScriptStruct Engine.StaticMeshComponentInstanceData
// Size : 0x130 (Inherited : 0xF0)
struct FStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData {
	struct UStaticMesh* StaticMesh; // 0xF0(0x8)
	struct TArray<struct FStaticMeshVertexColorLODData> VertexColorLODs; // 0xF8(0x10)
	struct TArray<struct FGuid> CachedStaticLighting; // 0x108(0x10)
	struct TArray<struct FStreamingTextureBuildInfo> StreamingTextureData; // 0x118(0x10)
	unsigned char UnknownData_128[0x0008]; // 0x128(0x8)
};

// ScriptStruct Engine.StreamingTextureBuildInfo
// Size : 0xC (Inherited : 0x0)
struct FStreamingTextureBuildInfo {
	uint32_t PackedRelativeBox; // 0x0(0x4)
	int32_t TextureLevelIndex; // 0x4(0x4)
	float TexelFactor; // 0x8(0x4)
};

// ScriptStruct Engine.StaticMeshVertexColorLODData
// Size : 0x28 (Inherited : 0x0)
struct FStaticMeshVertexColorLODData {
	struct TArray<struct FPaintedVertex> PaintedVertices; // 0x0(0x10)
	struct TArray<struct FColor> VertexBufferColors; // 0x10(0x10)
	uint32_t LODIndex; // 0x20(0x4)
	unsigned char UnknownData_24[0x0004]; // 0x24(0x4)
};

// ScriptStruct Engine.PaintedVertex
// Size : 0x20 (Inherited : 0x0)
struct FPaintedVertex {
	struct FVector Position; // 0x0(0xC)
	struct FColor Color; // 0xC(0x4)
	struct FVector4 Normal; // 0x10(0x10)
};

// ScriptStruct Engine.StaticMeshComponentLODInfo
// Size : 0x90 (Inherited : 0x0)
struct FStaticMeshComponentLODInfo {
	unsigned char UnknownData_0[0x0090]; // 0x0(0x90)
};

// ScriptStruct Engine.StaticParameterSet
// Size : 0x40 (Inherited : 0x0)
struct FStaticParameterSet {
	struct TArray<struct FStaticSwitchParameter> StaticSwitchParameters; // 0x0(0x10)
	struct TArray<struct FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10(0x10)
	struct TArray<struct FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20(0x10)
	struct TArray<struct FStaticMaterialLayersParameter> MaterialLayersParameters; // 0x30(0x10)
};

// ScriptStruct Engine.StaticParameterBase
// Size : 0x24 (Inherited : 0x0)
struct FStaticParameterBase {
	struct FMaterialParameterInfo ParameterInfo; // 0x0(0x10)
	bool bOverride; // 0x10(0x1)
	unsigned char UnknownData_11[0x0003]; // 0x11(0x3)
	struct FGuid ExpressionGUID; // 0x14(0x10)
};

// ScriptStruct Engine.StaticMaterialLayersParameter
// Size : 0x68 (Inherited : 0x24)
struct FStaticMaterialLayersParameter : FStaticParameterBase {
	unsigned char UnknownData_24[0x0004]; // 0x24(0x4)
	struct FMaterialLayersFunctions Value; // 0x28(0x40)
};

// ScriptStruct Engine.StaticTerrainLayerWeightParameter
// Size : 0x2C (Inherited : 0x24)
struct FStaticTerrainLayerWeightParameter : FStaticParameterBase {
	int32_t WeightmapIndex; // 0x24(0x4)
	bool bWeightBasedBlend; // 0x28(0x1)
	unsigned char UnknownData_29[0x0003]; // 0x29(0x3)
};

// ScriptStruct Engine.StaticComponentMaskParameter
// Size : 0x28 (Inherited : 0x24)
struct FStaticComponentMaskParameter : FStaticParameterBase {
	bool R; // 0x24(0x1)
	bool G; // 0x25(0x1)
	bool B; // 0x26(0x1)
	bool A; // 0x27(0x1)
};

// ScriptStruct Engine.StaticSwitchParameter
// Size : 0x28 (Inherited : 0x24)
struct FStaticSwitchParameter : FStaticParameterBase {
	bool Value; // 0x24(0x1)
	unsigned char UnknownData_25[0x0003]; // 0x25(0x3)
};

// ScriptStruct Engine.EquirectProps
// Size : 0x48 (Inherited : 0x0)
struct FEquirectProps {
	struct FBox2D LeftUVRect; // 0x0(0x14)
	struct FBox2D RightUVRect; // 0x14(0x14)
	struct FVector2D LeftScale; // 0x28(0x8)
	struct FVector2D RightScale; // 0x30(0x8)
	struct FVector2D LeftBias; // 0x38(0x8)
	struct FVector2D RightBias; // 0x40(0x8)
};

// ScriptStruct Engine.StringCurve
// Size : 0x88 (Inherited : 0x68)
struct FStringCurve : FIndexedCurve {
	struct FString DefaultValue; // 0x68(0x10)
	struct TArray<struct FStringCurveKey> Keys; // 0x78(0x10)
};

// ScriptStruct Engine.StringCurveKey
// Size : 0x18 (Inherited : 0x0)
struct FStringCurveKey {
	float Time; // 0x0(0x4)
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
	struct FString Value; // 0x8(0x10)
};

// ScriptStruct Engine.SubsurfaceProfileStruct
// Size : 0x8C (Inherited : 0x0)
struct FSubsurfaceProfileStruct {
	struct FLinearColor SurfaceAlbedo; // 0x0(0x10)
	struct FLinearColor MeanFreePathColor; // 0x10(0x10)
	float MeanFreePathDistance; // 0x20(0x4)
	float WorldUnitScale; // 0x24(0x4)
	bool bEnableBurley; // 0x28(0x1)
	unsigned char UnknownData_29[0x0003]; // 0x29(0x3)
	float ScatterRadius; // 0x2C(0x4)
	struct FLinearColor SubsurfaceColor; // 0x30(0x10)
	struct FLinearColor FalloffColor; // 0x40(0x10)
	struct FLinearColor BoundaryColorBleed; // 0x50(0x10)
	float ExtinctionScale; // 0x60(0x4)
	float NormalScale; // 0x64(0x4)
	float ScatteringDistribution; // 0x68(0x4)
	float IOR; // 0x6C(0x4)
	float Roughness0; // 0x70(0x4)
	float Roughness1; // 0x74(0x4)
	float LobeMix; // 0x78(0x4)
	struct FLinearColor TransmissionTintColor; // 0x7C(0x10)
};

// ScriptStruct Engine.TextureFormatSettings
// Size : 0x2 (Inherited : 0x0)
struct FTextureFormatSettings {
	enum class TextureCompressionSettings CompressionSettings; // 0x0(0x1)
	unsigned char CompressionNoAlpha : 1; // 0x1(0x1)
	unsigned char CompressionNone : 1; // 0x1(0x1)
	unsigned char CompressionYCoCg : 1; // 0x1(0x1)
	unsigned char SRGB : 1; // 0x1(0x1)
	unsigned char UnknownData_1_4 : 4; // 0x1(0x1)
};

// ScriptStruct Engine.TexturePlatformData
// Size : 0x30 (Inherited : 0x0)
struct FTexturePlatformData {
	unsigned char UnknownData_0[0x0030]; // 0x0(0x30)
};

// ScriptStruct Engine.TextureSource
// Size : 0x30 (Inherited : 0x0)
struct FTextureSource {
	unsigned char UnknownData_0[0x0030]; // 0x0(0x30)
};

// ScriptStruct Engine.TextureSourceBlock
// Size : 0x18 (Inherited : 0x0)
struct FTextureSourceBlock {
	int32_t BlockX; // 0x0(0x4)
	int32_t BlockY; // 0x4(0x4)
	int32_t SizeX; // 0x8(0x4)
	int32_t SizeY; // 0xC(0x4)
	int32_t NumSlices; // 0x10(0x4)
	int32_t NumMips; // 0x14(0x4)
};

// ScriptStruct Engine.TextureLODGroup
// Size : 0x54 (Inherited : 0x0)
struct FTextureLODGroup {
	enum class TextureGroup Group; // 0x0(0x1)
	unsigned char UnknownData_1[0x000B]; // 0x1(0xB)
	int32_t LODBias; // 0xC(0x4)
	int32_t LODBias_Smaller; // 0x10(0x4)
	int32_t LODBias_Smallest; // 0x14(0x4)
	unsigned char UnknownData_18[0x0004]; // 0x18(0x4)
	int32_t NumStreamedMips; // 0x1C(0x4)
	enum class TextureMipGenSettings MipGenSettings; // 0x20(0x1)
	unsigned char UnknownData_21[0x0003]; // 0x21(0x3)
	int32_t MinLODSize; // 0x24(0x4)
	int32_t MaxLODSize; // 0x28(0x4)
	int32_t MaxLODSize_Smaller; // 0x2C(0x4)
	int32_t MaxLODSize_Smallest; // 0x30(0x4)
	int32_t OptionalLODBias; // 0x34(0x4)
	int32_t OptionalMaxLODSize; // 0x38(0x4)
	unsigned char UnknownData_3C[0x0004]; // 0x3C(0x4)
	struct FName MinMagFilter; // 0x40(0x8)
	struct FName MipFilter; // 0x48(0x8)
	enum class ETextureMipLoadOptions MipLoadOptions; // 0x50(0x1)
	bool DuplicateNonOptionalMips; // 0x51(0x1)
	unsigned char UnknownData_52[0x0002]; // 0x52(0x2)
};

// ScriptStruct Engine.StreamingRenderAssetPrimitiveInfo
// Size : 0x30 (Inherited : 0x0)
struct FStreamingRenderAssetPrimitiveInfo {
	struct UStreamableRenderAsset* RenderAsset; // 0x0(0x8)
	struct FBoxSphereBounds Bounds; // 0x8(0x1C)
	float TexelFactor; // 0x24(0x4)
	uint32_t PackedRelativeBox; // 0x28(0x4)
	unsigned char bAllowInvalidTexelFactorWhenUnregistered : 1; // 0x2C(0x1)
	unsigned char UnknownData_2C_1 : 7; // 0x2C(0x1)
	unsigned char UnknownData_2D[0x0003]; // 0x2D(0x3)
};

// ScriptStruct Engine.Timeline
// Size : 0x98 (Inherited : 0x0)
struct FTimeline {
	enum class ETimelineLengthMode LengthMode; // 0x0(0x1)
	unsigned char bLooping : 1; // 0x1(0x1)
	unsigned char bReversePlayback : 1; // 0x1(0x1)
	unsigned char bPlaying : 1; // 0x1(0x1)
	unsigned char UnknownData_1_3 : 5; // 0x1(0x1)
	unsigned char UnknownData_2[0x0002]; // 0x2(0x2)
	float Length; // 0x4(0x4)
	float PlayRate; // 0x8(0x4)
	float Position; // 0xC(0x4)
	struct TArray<struct FTimelineEventEntry> Events; // 0x10(0x10)
	struct TArray<struct FTimelineVectorTrack> InterpVectors; // 0x20(0x10)
	struct TArray<struct FTimelineFloatTrack> InterpFloats; // 0x30(0x10)
	struct TArray<struct FTimelineLinearColorTrack> InterpLinearColors; // 0x40(0x10)
	struct FDelegate TimelinePostUpdateFunc; // 0x50(0x10)
	struct FDelegate TimelineFinishedFunc; // 0x60(0x10)
	struct FWeakObjectPtr<struct UObject> PropertySetObject; // 0x70(0x8)
	struct FName DirectionPropertyName; // 0x78(0x8)
	unsigned char UnknownData_80[0x0018]; // 0x80(0x18)
};

// ScriptStruct Engine.TimelineLinearColorTrack
// Size : 0x40 (Inherited : 0x0)
struct FTimelineLinearColorTrack {
	struct UCurveLinearColor* LinearColorCurve; // 0x0(0x8)
	struct FDelegate InterpFunc; // 0x8(0x10)
	struct FName TrackName; // 0x18(0x8)
	struct FName LinearColorPropertyName; // 0x20(0x8)
	unsigned char UnknownData_28[0x0018]; // 0x28(0x18)
};

// ScriptStruct Engine.TimelineFloatTrack
// Size : 0x40 (Inherited : 0x0)
struct FTimelineFloatTrack {
	struct UCurveFloat* FloatCurve; // 0x0(0x8)
	struct FDelegate InterpFunc; // 0x8(0x10)
	struct FName TrackName; // 0x18(0x8)
	struct FName FloatPropertyName; // 0x20(0x8)
	unsigned char UnknownData_28[0x0018]; // 0x28(0x18)
};

// ScriptStruct Engine.TimelineVectorTrack
// Size : 0x40 (Inherited : 0x0)
struct FTimelineVectorTrack {
	struct UCurveVector* VectorCurve; // 0x0(0x8)
	struct FDelegate InterpFunc; // 0x8(0x10)
	struct FName TrackName; // 0x18(0x8)
	struct FName VectorPropertyName; // 0x20(0x8)
	unsigned char UnknownData_28[0x0018]; // 0x28(0x18)
};

// ScriptStruct Engine.TimelineEventEntry
// Size : 0x14 (Inherited : 0x0)
struct FTimelineEventEntry {
	float Time; // 0x0(0x4)
	struct FDelegate EventFunc; // 0x4(0x10)
};

// ScriptStruct Engine.TTTrackBase
// Size : 0x18 (Inherited : 0x0)
struct FTTTrackBase {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
	struct FName TrackName; // 0x8(0x8)
	bool bIsExternalCurve; // 0x10(0x1)
	unsigned char UnknownData_11[0x0007]; // 0x11(0x7)
};

// ScriptStruct Engine.TTPropertyTrack
// Size : 0x20 (Inherited : 0x18)
struct FTTPropertyTrack : FTTTrackBase {
	struct FName PropertyName; // 0x18(0x8)
};

// ScriptStruct Engine.TTLinearColorTrack
// Size : 0x28 (Inherited : 0x20)
struct FTTLinearColorTrack : FTTPropertyTrack {
	struct UCurveLinearColor* CurveLinearColor; // 0x20(0x8)
};

// ScriptStruct Engine.TTVectorTrack
// Size : 0x28 (Inherited : 0x20)
struct FTTVectorTrack : FTTPropertyTrack {
	struct UCurveVector* CurveVector; // 0x20(0x8)
};

// ScriptStruct Engine.TTFloatTrack
// Size : 0x28 (Inherited : 0x20)
struct FTTFloatTrack : FTTPropertyTrack {
	struct UCurveFloat* CurveFloat; // 0x20(0x8)
};

// ScriptStruct Engine.TTEventTrack
// Size : 0x28 (Inherited : 0x18)
struct FTTEventTrack : FTTTrackBase {
	struct FName FunctionName; // 0x18(0x8)
	struct UCurveFloat* CurveKeys; // 0x20(0x8)
};

// ScriptStruct Engine.TimeStretchCurveInstance
// Size : 0x30 (Inherited : 0x0)
struct FTimeStretchCurveInstance {
	bool bHasValidData; // 0x0(0x1)
	unsigned char UnknownData_1[0x002F]; // 0x1(0x2F)
};

// ScriptStruct Engine.TimeStretchCurve
// Size : 0x28 (Inherited : 0x0)
struct FTimeStretchCurve {
	float SamplingRate; // 0x0(0x4)
	float CurveValueMinPrecision; // 0x4(0x4)
	struct TArray<struct FTimeStretchCurveMarker> Markers; // 0x8(0x10)
	float Sum_dT_i_by_C_i[3]; // 0x18(0xC)
	unsigned char UnknownData_24[0x0004]; // 0x24(0x4)
};

// ScriptStruct Engine.TimeStretchCurveMarker
// Size : 0x10 (Inherited : 0x0)
struct FTimeStretchCurveMarker {
	float Time[3]; // 0x0(0xC)
	float Alpha; // 0xC(0x4)
};

// ScriptStruct Engine.TouchInputControl
// Size : 0x68 (Inherited : 0x0)
struct FTouchInputControl {
	struct UTexture2D* Image1; // 0x0(0x8)
	struct UTexture2D* Image2; // 0x8(0x8)
	struct FVector2D Center; // 0x10(0x8)
	struct FVector2D VisualSize; // 0x18(0x8)
	struct FVector2D ThumbSize; // 0x20(0x8)
	struct FVector2D InteractionSize; // 0x28(0x8)
	struct FVector2D InputScale; // 0x30(0x8)
	struct FKey MainInputKey; // 0x38(0x18)
	struct FKey AltInputKey; // 0x50(0x18)
};

// ScriptStruct Engine.HardwareCursorReference
// Size : 0x10 (Inherited : 0x0)
struct FHardwareCursorReference {
	struct FName CursorPath; // 0x0(0x8)
	struct FVector2D HotSpot; // 0x8(0x8)
};

// ScriptStruct Engine.VirtualTextureBuildSettings
// Size : 0xC (Inherited : 0x0)
struct FVirtualTextureBuildSettings {
	int32_t TileSize; // 0x0(0x4)
	int32_t TileBorderSize; // 0x4(0x4)
	bool bEnableCompressCrunch; // 0x8(0x1)
	bool bEnableCompressZlib; // 0x9(0x1)
	unsigned char UnknownData_A[0x0002]; // 0xA(0x2)
};

// ScriptStruct Engine.VirtualTextureSpacePoolConfig
// Size : 0x20 (Inherited : 0x0)
struct FVirtualTextureSpacePoolConfig {
	int32_t MinTileSize; // 0x0(0x4)
	int32_t MaxTileSize; // 0x4(0x4)
	struct TArray<enum class EPixelFormat> Formats; // 0x8(0x10)
	int32_t SizeInMegabyte; // 0x18(0x4)
	bool bAllowSizeScale; // 0x1C(0x1)
	unsigned char UnknownData_1D[0x0003]; // 0x1D(0x3)
};

// ScriptStruct Engine.VoiceSettings
// Size : 0x18 (Inherited : 0x0)
struct FVoiceSettings {
	struct USceneComponent* ComponentToAttachTo; // 0x0(0x8)
	struct USoundAttenuation* AttenuationSettings; // 0x8(0x8)
	struct USoundEffectSourcePresetChain* SourceEffectChain; // 0x10(0x8)
};

// ScriptStruct Engine.StreamingLevelsToConsider
// Size : 0x28 (Inherited : 0x0)
struct FStreamingLevelsToConsider {
	struct TArray<struct FLevelStreamingWrapper> StreamingLevels; // 0x0(0x10)
	unsigned char UnknownData_10[0x0018]; // 0x10(0x18)
};

// ScriptStruct Engine.LevelStreamingWrapper
// Size : 0x8 (Inherited : 0x0)
struct FLevelStreamingWrapper {
	struct ULevelStreaming* StreamingLevel; // 0x0(0x8)
};

// ScriptStruct Engine.LevelCollection
// Size : 0x78 (Inherited : 0x0)
struct FLevelCollection {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
	struct AGameStateBase* GameState; // 0x8(0x8)
	struct UNetDriver* NetDriver; // 0x10(0x8)
	struct UDemoNetDriver* DemoNetDriver; // 0x18(0x8)
	struct ULevel* PersistentLevel; // 0x20(0x8)
	struct TSet<struct ULevel*> Levels; // 0x28(0x50)
};

// ScriptStruct Engine.EndPhysicsTickFunction
// Size : 0x30 (Inherited : 0x28)
struct FEndPhysicsTickFunction : FTickFunction {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// ScriptStruct Engine.StartPhysicsTickFunction
// Size : 0x30 (Inherited : 0x28)
struct FStartPhysicsTickFunction : FTickFunction {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// ScriptStruct Engine.LevelViewportInfo
// Size : 0x20 (Inherited : 0x0)
struct FLevelViewportInfo {
	struct FVector CamPosition; // 0x0(0xC)
	struct FRotator CamRotation; // 0xC(0xC)
	float CamOrthoZoom; // 0x18(0x4)
	bool CamUpdated; // 0x1C(0x1)
	unsigned char UnknownData_1D[0x0003]; // 0x1D(0x3)
};

// ScriptStruct Engine.WorldPSCPool
// Size : 0x58 (Inherited : 0x0)
struct FWorldPSCPool {
	struct TMap<struct UParticleSystem*, struct FPSCPool> WorldParticleSystemPools; // 0x0(0x50)
	unsigned char UnknownData_50[0x0008]; // 0x50(0x8)
};

// ScriptStruct Engine.PSCPool
// Size : 0x38 (Inherited : 0x0)
struct FPSCPool {
	struct TArray<struct FPSCPoolElem> FreeElements; // 0x0(0x10)
	struct TArray<struct UParticleSystemComponent*> InUseComponents_Auto; // 0x10(0x10)
	struct TArray<struct UParticleSystemComponent*> InUseComponents_Manual; // 0x20(0x10)
	unsigned char UnknownData_30[0x0008]; // 0x30(0x8)
};

// ScriptStruct Engine.PSCPoolElem
// Size : 0x10 (Inherited : 0x0)
struct FPSCPoolElem {
	struct UParticleSystemComponent* PSC; // 0x0(0x8)
	unsigned char UnknownData_8[0x0008]; // 0x8(0x8)
};

// ScriptStruct Engine.BroadphaseSettings
// Size : 0x40 (Inherited : 0x0)
struct FBroadphaseSettings {
	bool bUseMBPOnClient; // 0x0(0x1)
	bool bUseMBPOnServer; // 0x1(0x1)
	bool bUseMBPOuterBounds; // 0x2(0x1)
	unsigned char UnknownData_3[0x0001]; // 0x3(0x1)
	struct FBox MBPBounds; // 0x4(0x1C)
	struct FBox MBPOuterBounds; // 0x20(0x1C)
	uint32_t MBPNumSubdivs; // 0x3C(0x4)
};

// ScriptStruct Engine.HierarchicalSimplification
// Size : 0x160 (Inherited : 0x0)
struct FHierarchicalSimplification {
	float TransitionScreenSize; // 0x0(0x4)
	float OverrideDrawDistance; // 0x4(0x4)
	unsigned char bUseOverrideDrawDistance : 1; // 0x8(0x1)
	unsigned char bAllowSpecificExclusion : 1; // 0x8(0x1)
	unsigned char bSimplifyMesh : 1; // 0x8(0x1)
	unsigned char bOnlyGenerateClustersForVolumes : 1; // 0x8(0x1)
	unsigned char bReusePreviousLevelClusters : 1; // 0x8(0x1)
	unsigned char UnknownData_8_5 : 3; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
	struct FMeshProxySettings ProxySetting; // 0xC(0xA8)
	struct FMeshMergingSettings MergeSetting; // 0xB4(0xA0)
	float DesiredBoundRadius; // 0x154(0x4)
	float DesiredFillingPercentage; // 0x158(0x4)
	int32_t MinNumberOfActorsToBuild; // 0x15C(0x4)
};

// ScriptStruct Engine.NetViewer
// Size : 0x30 (Inherited : 0x0)
struct FNetViewer {
	struct UNetConnection* Connection; // 0x0(0x8)
	struct AActor* InViewer; // 0x8(0x8)
	struct AActor* ViewTarget; // 0x10(0x8)
	struct FVector ViewLocation; // 0x18(0xC)
	struct FVector ViewDir; // 0x24(0xC)
};

// ScriptStruct Engine.LightmassWorldInfoSettings
// Size : 0x4C (Inherited : 0x0)
struct FLightmassWorldInfoSettings {
	float StaticLightingLevelScale; // 0x0(0x4)
	int32_t NumIndirectLightingBounces; // 0x4(0x4)
	int32_t NumSkyLightingBounces; // 0x8(0x4)
	float IndirectLightingQuality; // 0xC(0x4)
	float IndirectLightingSmoothness; // 0x10(0x4)
	struct FColor EnvironmentColor; // 0x14(0x4)
	float EnvironmentIntensity; // 0x18(0x4)
	float EmissiveBoost; // 0x1C(0x4)
	float DiffuseBoost; // 0x20(0x4)
	enum class EVolumeLightingMethod VolumeLightingMethod; // 0x24(0x1)
	unsigned char bUseAmbientOcclusion : 1; // 0x25(0x1)
	unsigned char bGenerateAmbientOcclusionMaterialMask : 1; // 0x25(0x1)
	unsigned char bVisualizeMaterialDiffuse : 1; // 0x25(0x1)
	unsigned char bVisualizeAmbientOcclusion : 1; // 0x25(0x1)
	unsigned char bCompressLightmaps : 1; // 0x25(0x1)
	unsigned char UnknownData_25_5 : 3; // 0x25(0x1)
	unsigned char UnknownData_26[0x0002]; // 0x26(0x2)
	float VolumetricLightmapDetailCellSize; // 0x28(0x4)
	float VolumetricLightmapMaximumBrickMemoryMb; // 0x2C(0x4)
	float VolumetricLightmapSphericalHarmonicSmoothing; // 0x30(0x4)
	float VolumeLightSamplePlacementScale; // 0x34(0x4)
	float DirectIlluminationOcclusionFraction; // 0x38(0x4)
	float IndirectIlluminationOcclusionFraction; // 0x3C(0x4)
	float OcclusionExponent; // 0x40(0x4)
	float FullyOccludedSamplesFraction; // 0x44(0x4)
	float MaxOcclusionDistance; // 0x48(0x4)
};

