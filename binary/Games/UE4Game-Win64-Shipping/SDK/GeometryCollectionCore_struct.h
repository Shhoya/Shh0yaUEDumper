// ScriptStruct GeometryCollectionCore.RecordedTransformTrack
// Size : 0x10 (Inherited : 0x0)
struct FRecordedTransformTrack {
	struct TArray<struct FRecordedFrame> Records; // 0x0(0x10)
};

// ScriptStruct GeometryCollectionCore.RecordedFrame
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

// ScriptStruct GeometryCollectionCore.SolverTrailingData
// Size : 0x30 (Inherited : 0x0)
struct FSolverTrailingData {
	struct FVector Location; // 0x0(0xC)
	struct FVector Velocity; // 0xC(0xC)
	struct FVector AngularVelocity; // 0x18(0xC)
	float Mass; // 0x24(0x4)
	int32_t ParticleIndex; // 0x28(0x4)
	int32_t ParticleIndexMesh; // 0x2C(0x4)
};

// ScriptStruct GeometryCollectionCore.SolverBreakingData
// Size : 0x30 (Inherited : 0x0)
struct FSolverBreakingData {
	struct FVector Location; // 0x0(0xC)
	struct FVector Velocity; // 0xC(0xC)
	struct FVector AngularVelocity; // 0x18(0xC)
	float Mass; // 0x24(0x4)
	int32_t ParticleIndex; // 0x28(0x4)
	int32_t ParticleIndexMesh; // 0x2C(0x4)
};

// ScriptStruct GeometryCollectionCore.SolverCollisionData
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

