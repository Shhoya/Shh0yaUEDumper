// ScriptStruct GeometryCollectionEngine.GeomComponentCacheParameters
// Size : 0x50 (Inherited : 0x0)
struct FGeomComponentCacheParameters {
	enum class EGeometryCollectionCacheType CacheMode; // 0x0(0x1)
	unsigned char UnknownData_1[0x0007]; // 0x1(0x7)
	struct UGeometryCollectionCache* TargetCache; // 0x8(0x8)
	float ReverseCacheBeginTime; // 0x10(0x4)
	bool SaveCollisionData; // 0x14(0x1)
	bool DoGenerateCollisionData; // 0x15(0x1)
	unsigned char UnknownData_16[0x0002]; // 0x16(0x2)
	int32_t CollisionDataSizeMax; // 0x18(0x4)
	bool DoCollisionDataSpatialHash; // 0x1C(0x1)
	unsigned char UnknownData_1D[0x0003]; // 0x1D(0x3)
	float CollisionDataSpatialHashRadius; // 0x20(0x4)
	int32_t MaxCollisionPerCell; // 0x24(0x4)
	bool SaveBreakingData; // 0x28(0x1)
	bool DoGenerateBreakingData; // 0x29(0x1)
	unsigned char UnknownData_2A[0x0002]; // 0x2A(0x2)
	int32_t BreakingDataSizeMax; // 0x2C(0x4)
	bool DoBreakingDataSpatialHash; // 0x30(0x1)
	unsigned char UnknownData_31[0x0003]; // 0x31(0x3)
	float BreakingDataSpatialHashRadius; // 0x34(0x4)
	int32_t MaxBreakingPerCell; // 0x38(0x4)
	bool SaveTrailingData; // 0x3C(0x1)
	bool DoGenerateTrailingData; // 0x3D(0x1)
	unsigned char UnknownData_3E[0x0002]; // 0x3E(0x2)
	int32_t TrailingDataSizeMax; // 0x40(0x4)
	float TrailingMinSpeedThreshold; // 0x44(0x4)
	float TrailingMinVolumeThreshold; // 0x48(0x4)
	unsigned char UnknownData_4C[0x0004]; // 0x4C(0x4)
};

// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventData
// Size : 0x58 (Inherited : 0x0)
struct FChaosCollisionEventData {
	struct FVector Location; // 0x0(0xC)
	struct FVector Normal; // 0xC(0xC)
	struct FVector Velocity1; // 0x18(0xC)
	struct FVector Velocity2; // 0x24(0xC)
	float Mass1; // 0x30(0x4)
	float Mass2; // 0x34(0x4)
	struct FVector Impulse; // 0x38(0xC)
	unsigned char UnknownData_44[0x0014]; // 0x44(0x14)
};

// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventData
// Size : 0x1C (Inherited : 0x0)
struct FChaosBreakingEventData {
	struct FVector Location; // 0x0(0xC)
	struct FVector Velocity; // 0xC(0xC)
	float Mass; // 0x18(0x4)
};

// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventData
// Size : 0x2C (Inherited : 0x0)
struct FChaosTrailingEventData {
	struct FVector Location; // 0x0(0xC)
	struct FVector Velocity; // 0xC(0xC)
	struct FVector AngularVelocity; // 0x18(0xC)
	float Mass; // 0x24(0x4)
	int32_t ParticleIndex; // 0x28(0x4)
};

// ScriptStruct GeometryCollectionEngine.ChaosBreakingEventRequestSettings
// Size : 0x18 (Inherited : 0x0)
struct FChaosBreakingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0(0x4)
	float MinRadius; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinMass; // 0xC(0x4)
	float MaxDistance; // 0x10(0x4)
	enum class EChaosBreakingSortMethod SortMethod; // 0x14(0x1)
	unsigned char UnknownData_15[0x0003]; // 0x15(0x3)
};

// ScriptStruct GeometryCollectionEngine.ChaosCollisionEventRequestSettings
// Size : 0x18 (Inherited : 0x0)
struct FChaosCollisionEventRequestSettings {
	int32_t MaxNumberResults; // 0x0(0x4)
	float MinMass; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinImpulse; // 0xC(0x4)
	float MaxDistance; // 0x10(0x4)
	enum class EChaosCollisionSortMethod SortMethod; // 0x14(0x1)
	unsigned char UnknownData_15[0x0003]; // 0x15(0x3)
};

// ScriptStruct GeometryCollectionEngine.ChaosTrailingEventRequestSettings
// Size : 0x18 (Inherited : 0x0)
struct FChaosTrailingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0(0x4)
	float MinMass; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinAngularSpeed; // 0xC(0x4)
	float MaxDistance; // 0x10(0x4)
	enum class EChaosTrailingSortMethod SortMethod; // 0x14(0x1)
	unsigned char UnknownData_15[0x0003]; // 0x15(0x3)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawActorSelectedRigidBody
// Size : 0x18 (Inherited : 0x0)
struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
	int32_t ID; // 0x0(0x4)
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
	struct AChaosSolverActor* Solver; // 0x8(0x8)
	struct AGeometryCollectionActor* GeometryCollection; // 0x10(0x8)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionDebugDrawWarningMessage
// Size : 0x1 (Inherited : 0x0)
struct FGeometryCollectionDebugDrawWarningMessage {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
};

// ScriptStruct GeometryCollectionEngine.GeometryCollectionSizeSpecificData
// Size : 0x24 (Inherited : 0x0)
struct FGeometryCollectionSizeSpecificData {
	float MaxSize; // 0x0(0x4)
	enum class ECollisionTypeEnum CollisionType; // 0x4(0x1)
	enum class EImplicitTypeEnum ImplicitType; // 0x5(0x1)
	unsigned char UnknownData_6[0x0002]; // 0x6(0x2)
	int32_t MinLevelSetResolution; // 0x8(0x4)
	int32_t MaxLevelSetResolution; // 0xC(0x4)
	int32_t MinClusterLevelSetResolution; // 0x10(0x4)
	int32_t MaxClusterLevelSetResolution; // 0x14(0x4)
	int32_t CollisionObjectReductionPercentage; // 0x18(0x4)
	float CollisionParticlesFraction; // 0x1C(0x4)
	int32_t MaximumCollisionParticles; // 0x20(0x4)
};

