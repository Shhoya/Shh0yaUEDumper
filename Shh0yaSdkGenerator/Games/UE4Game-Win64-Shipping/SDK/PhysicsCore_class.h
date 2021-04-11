// Class PhysicsCore.BodySetupCore
// Size : 0x48 (Inherited : 0x28)
struct UBodySetupCore : UObject {
	struct FName BoneName; // 0x28(0x8)
	enum class EPhysicsType PhysicsType; // 0x30(0x1)
	enum class ECollisionTraceFlag CollisionTraceFlag; // 0x31(0x1)
	enum class EBodyCollisionResponse CollisionReponse; // 0x32(0x1)
	unsigned char UnknownData_33[0x0015]; // 0x33(0x15)
};

// Class PhysicsCore.ChaosPhysicalMaterial
// Size : 0x48 (Inherited : 0x28)
struct UChaosPhysicalMaterial : UObject {
	float Friction; // 0x28(0x4)
	float StaticFriction; // 0x2C(0x4)
	float Restitution; // 0x30(0x4)
	float LinearEtherDrag; // 0x34(0x4)
	float AngularEtherDrag; // 0x38(0x4)
	float SleepingLinearVelocityThreshold; // 0x3C(0x4)
	float SleepingAngularVelocityThreshold; // 0x40(0x4)
	unsigned char UnknownData_44[0x0004]; // 0x44(0x4)
};

// Class PhysicsCore.PhysicalMaterial
// Size : 0x80 (Inherited : 0x28)
struct UPhysicalMaterial : UObject {
	float Friction; // 0x28(0x4)
	float StaticFriction; // 0x2C(0x4)
	enum class EFrictionCombineMode FrictionCombineMode; // 0x30(0x1)
	bool bOverrideFrictionCombineMode; // 0x31(0x1)
	unsigned char UnknownData_32[0x0002]; // 0x32(0x2)
	float Restitution; // 0x34(0x4)
	enum class EFrictionCombineMode RestitutionCombineMode; // 0x38(0x1)
	bool bOverrideRestitutionCombineMode; // 0x39(0x1)
	unsigned char UnknownData_3A[0x0002]; // 0x3A(0x2)
	float Density; // 0x3C(0x4)
	float SleepLinearVelocityThreshold; // 0x40(0x4)
	float SleepAngularVelocityThreshold; // 0x44(0x4)
	int32_t SleepCounterThreshold; // 0x48(0x4)
	float RaiseMassToPower; // 0x4C(0x4)
	float DestructibleDamageThresholdScale; // 0x50(0x4)
	unsigned char UnknownData_54[0x0004]; // 0x54(0x4)
	struct UPhysicalMaterialPropertyBase* PhysicalMaterialProperty; // 0x58(0x8)
	enum class EPhysicalSurface SurfaceType; // 0x60(0x1)
	unsigned char UnknownData_61[0x001F]; // 0x61(0x1F)
};

// Class PhysicsCore.PhysicalMaterialPropertyBase
// Size : 0x28 (Inherited : 0x28)
struct UPhysicalMaterialPropertyBase : UObject {
};

// Class PhysicsCore.PhysicsSettingsCore
// Size : 0xE0 (Inherited : 0x38)
struct UPhysicsSettingsCore : UDeveloperSettings {
	float DefaultGravityZ; // 0x38(0x4)
	float DefaultTerminalVelocity; // 0x3C(0x4)
	float DefaultFluidFriction; // 0x40(0x4)
	int32_t SimulateScratchMemorySize; // 0x44(0x4)
	int32_t RagdollAggregateThreshold; // 0x48(0x4)
	float TriangleMeshTriangleMinAreaThreshold; // 0x4C(0x4)
	bool bEnableShapeSharing; // 0x50(0x1)
	bool bEnablePCM; // 0x51(0x1)
	bool bEnableStabilization; // 0x52(0x1)
	bool bWarnMissingLocks; // 0x53(0x1)
	bool bEnable2DPhysics; // 0x54(0x1)
	bool bDefaultHasComplexCollision; // 0x55(0x1)
	unsigned char UnknownData_56[0x0002]; // 0x56(0x2)
	float BounceThresholdVelocity; // 0x58(0x4)
	enum class EFrictionCombineMode FrictionCombineMode; // 0x5C(0x1)
	enum class EFrictionCombineMode RestitutionCombineMode; // 0x5D(0x1)
	unsigned char UnknownData_5E[0x0002]; // 0x5E(0x2)
	float MaxAngularVelocity; // 0x60(0x4)
	float MaxDepenetrationVelocity; // 0x64(0x4)
	float ContactOffsetMultiplier; // 0x68(0x4)
	float MinContactOffset; // 0x6C(0x4)
	float MaxContactOffset; // 0x70(0x4)
	bool bSimulateSkeletalMeshOnDedicatedServer; // 0x74(0x1)
	enum class ECollisionTraceFlag DefaultShapeComplexity; // 0x75(0x1)
	unsigned char UnknownData_76[0x0002]; // 0x76(0x2)
	struct FChaosSolverConfiguration SolverOptions; // 0x78(0x68)
};

