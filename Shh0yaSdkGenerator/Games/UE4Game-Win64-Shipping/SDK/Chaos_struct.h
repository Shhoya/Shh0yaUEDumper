// ScriptStruct Chaos.ChaosSolverConfiguration
// Size : 0x68 (Inherited : 0x0)
struct FChaosSolverConfiguration {
	int32_t Iterations; // 0x0(0x4)
	int32_t CollisionPairIterations; // 0x4(0x4)
	int32_t PushOutIterations; // 0x8(0x4)
	int32_t CollisionPushOutPairIterations; // 0xC(0x4)
	float CollisionMarginFraction; // 0x10(0x4)
	float CollisionMarginMax; // 0x14(0x4)
	float CollisionCullDistance; // 0x18(0x4)
	int32_t JointPairIterations; // 0x1C(0x4)
	int32_t JointPushOutPairIterations; // 0x20(0x4)
	float ClusterConnectionFactor; // 0x24(0x4)
	enum class EClusterUnionMethod ClusterUnionConnectionType; // 0x28(0x1)
	bool bGenerateCollisionData; // 0x29(0x1)
	unsigned char UnknownData_2A[0x0002]; // 0x2A(0x2)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x2C(0x10)
	bool bGenerateBreakData; // 0x3C(0x1)
	unsigned char UnknownData_3D[0x0003]; // 0x3D(0x3)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x40(0x10)
	bool bGenerateTrailingData; // 0x50(0x1)
	unsigned char UnknownData_51[0x0003]; // 0x51(0x3)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x54(0x10)
	bool bGenerateContactGraph; // 0x64(0x1)
	unsigned char UnknownData_65[0x0003]; // 0x65(0x3)
};

// ScriptStruct Chaos.SolverTrailingFilterSettings
// Size : 0x10 (Inherited : 0x0)
struct FSolverTrailingFilterSettings {
	bool FilterEnabled; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float MinMass; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinVolume; // 0xC(0x4)
};

// ScriptStruct Chaos.SolverBreakingFilterSettings
// Size : 0x10 (Inherited : 0x0)
struct FSolverBreakingFilterSettings {
	bool FilterEnabled; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float MinMass; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinVolume; // 0xC(0x4)
};

// ScriptStruct Chaos.SolverCollisionFilterSettings
// Size : 0x10 (Inherited : 0x0)
struct FSolverCollisionFilterSettings {
	bool FilterEnabled; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float MinMass; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinImpulse; // 0xC(0x4)
};

// ScriptStruct Chaos.RecordedTransformTrack
// Size : 0x10 (Inherited : 0x0)
struct FRecordedTransformTrack {
	struct TArray<struct FRecordedFrame> Records; // 0x0(0x10)
};

// ScriptStruct Chaos.RecordedFrame
// Size : 0xB8 (Inherited : 0x0)
struct FRecordedFrame {
	struct TArray<struct FTransform> Transforms; // 0x0(0x10)
	struct TArray<int32_t> TransformIndices; // 0x10(0x10)
	struct TArray<int32_t> PreviousTransformIndices; // 0x20(0x10)
	struct TArray<bool> DisabledFlags; // 0x30(0x10)
	struct TArray<struct FSolverCollisionData> Collisions; // 0x40(0x10)
	struct TArray<struct FSolverBreakingData> Breakings; // 0x50(0x10)
	struct TSet<struct FSolverTrailingData> Trailings; // 0x60(0x50)
	float Timestamp; // 0xB0(0x4)
	unsigned char UnknownData_B4[0x0004]; // 0xB4(0x4)
};

// ScriptStruct Chaos.SolverTrailingData
// Size : 0x30 (Inherited : 0x0)
struct FSolverTrailingData {
	struct FVector Location; // 0x0(0xC)
	struct FVector Velocity; // 0xC(0xC)
	struct FVector AngularVelocity; // 0x18(0xC)
	float Mass; // 0x24(0x4)
	int32_t ParticleIndex; // 0x28(0x4)
	int32_t ParticleIndexMesh; // 0x2C(0x4)
};

// ScriptStruct Chaos.SolverBreakingData
// Size : 0x30 (Inherited : 0x0)
struct FSolverBreakingData {
	struct FVector Location; // 0x0(0xC)
	struct FVector Velocity; // 0xC(0xC)
	struct FVector AngularVelocity; // 0x18(0xC)
	float Mass; // 0x24(0x4)
	int32_t ParticleIndex; // 0x28(0x4)
	int32_t ParticleIndexMesh; // 0x2C(0x4)
};

// ScriptStruct Chaos.SolverCollisionData
// Size : 0x6C (Inherited : 0x0)
struct FSolverCollisionData {
	struct FVector Location; // 0x0(0xC)
	struct FVector AccumulatedImpulse; // 0xC(0xC)
	struct FVector Normal; // 0x18(0xC)
	struct FVector Velocity1; // 0x24(0xC)
	struct FVector Velocity2; // 0x30(0xC)
	struct FVector AngularVelocity1; // 0x3C(0xC)
	struct FVector AngularVelocity2; // 0x48(0xC)
	float Mass1; // 0x54(0x4)
	float Mass2; // 0x58(0x4)
	int32_t ParticleIndex; // 0x5C(0x4)
	int32_t LevelsetIndex; // 0x60(0x4)
	int32_t ParticleIndexMesh; // 0x64(0x4)
	int32_t LevelsetIndexMesh; // 0x68(0x4)
};

