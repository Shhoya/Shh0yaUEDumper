// Class ChaosCloth.ChaosClothConfig
// Size : 0x88 (Inherited : 0x28)
struct UChaosClothConfig : UClothConfigCommon {
	enum class EClothMassMode MassMode; // 0x28(0x1)
	unsigned char UnknownData_29[0x0003]; // 0x29(0x3)
	float UniformMass; // 0x2C(0x4)
	float TotalMass; // 0x30(0x4)
	float Density; // 0x34(0x4)
	float MinPerParticleMass; // 0x38(0x4)
	float EdgeStiffness; // 0x3C(0x4)
	float BendingStiffness; // 0x40(0x4)
	float AreaStiffness; // 0x44(0x4)
	float VolumeStiffness; // 0x48(0x4)
	float StrainLimitingStiffness; // 0x4C(0x4)
	float LimitScale; // 0x50(0x4)
	bool bUseGeodesicDistance; // 0x54(0x1)
	unsigned char UnknownData_55[0x0003]; // 0x55(0x3)
	float ShapeTargetStiffness; // 0x58(0x4)
	float CollisionThickness; // 0x5C(0x4)
	float FrictionCoefficient; // 0x60(0x4)
	float DampingCoefficient; // 0x64(0x4)
	float DragCoefficient; // 0x68(0x4)
	float AnimDriveSpringStiffness; // 0x6C(0x4)
	bool bUseBendingElements; // 0x70(0x1)
	bool bUseTetrahedralConstraints; // 0x71(0x1)
	bool bUseThinShellVolumeConstraints; // 0x72(0x1)
	bool bUseSelfCollisions; // 0x73(0x1)
	bool bUseContinuousCollisionDetection; // 0x74(0x1)
	unsigned char UnknownData_75[0x0003]; // 0x75(0x3)
	struct FVector LinearVelocityScale; // 0x78(0xC)
	float AngularVelocityScale; // 0x84(0x4)
};

// Class ChaosCloth.ChaosClothSharedSimConfig
// Size : 0x58 (Inherited : 0x28)
struct UChaosClothSharedSimConfig : UClothSharedConfigCommon {
	int32_t IterationCount; // 0x28(0x4)
	int32_t SubdivisionCount; // 0x2C(0x4)
	float SelfCollisionThickness; // 0x30(0x4)
	float CollisionThickness; // 0x34(0x4)
	bool bUseDampingOverride; // 0x38(0x1)
	unsigned char UnknownData_39[0x0003]; // 0x39(0x3)
	float Damping; // 0x3C(0x4)
	bool bUseGravityOverride; // 0x40(0x1)
	unsigned char UnknownData_41[0x0003]; // 0x41(0x3)
	float GravityScale; // 0x44(0x4)
	struct FVector Gravity; // 0x48(0xC)
	bool bUseLocalSpaceSimulation; // 0x54(0x1)
	bool bUseXPBDConstraints; // 0x55(0x1)
	unsigned char UnknownData_56[0x0002]; // 0x56(0x2)
};

// Class ChaosCloth.ChaosClothingSimulationFactory
// Size : 0x28 (Inherited : 0x28)
struct UChaosClothingSimulationFactory : UClothingSimulationFactory {
};

// Class ChaosCloth.ChaosClothingSimulationInteractor
// Size : 0x40 (Inherited : 0x30)
struct UChaosClothingSimulationInteractor : UClothingSimulationInteractor {
	unsigned char UnknownData_30[0x0010]; // 0x30(0x10)
};

