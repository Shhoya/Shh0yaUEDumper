// Class ClothingSystemRuntimeInterface.ClothConfigBase
// Size : 0x28 (Inherited : 0x28)
struct UClothConfigBase : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingSimulationFactory
// Size : 0x28 (Inherited : 0x28)
struct UClothingSimulationFactory : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingSimulationInteractor
// Size : 0x30 (Inherited : 0x28)
struct UClothingSimulationInteractor : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)

	void SetAnimDriveSpringStiffness(float InStiffness); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.SetAnimDriveSpringStiffness // (Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF77610A5F0
	void PhysicsAssetUpdated(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.PhysicsAssetUpdated // (Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775B89820
	void EnableGravityOverride(struct FVector InVector); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.EnableGravityOverride // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0xC, 0x7FF77610A560
	void DisableGravityOverride(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.DisableGravityOverride // (Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF77610A540
	void ClothConfigUpdated(); // Function ClothingSystemRuntimeInterface.ClothingSimulationInteractor.ClothConfigUpdated // (Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775B89840
};

// Class ClothingSystemRuntimeInterface.ClothSharedSimConfigBase
// Size : 0x28 (Inherited : 0x28)
struct UClothSharedSimConfigBase : UObject {
};

// Class ClothingSystemRuntimeInterface.ClothingAssetBase
// Size : 0x48 (Inherited : 0x28)
struct UClothingAssetBase : UObject {
	struct FString ImportedFilePath; // 0x28(0x10)
	struct FGuid AssetGuid; // 0x38(0x10)
};

// Class ClothingSystemRuntimeInterface.ClothPhysicalMeshDataBase_Legacy
// Size : 0xE0 (Inherited : 0x28)
struct UClothPhysicalMeshDataBase_Legacy : UObject {
	struct TArray<struct FVector> Vertices; // 0x28(0x10)
	struct TArray<struct FVector> Normals; // 0x38(0x10)
	struct TArray<uint32_t> Indices; // 0x48(0x10)
	struct TArray<float> InverseMasses; // 0x58(0x10)
	struct TArray<struct FClothVertBoneData> BoneData; // 0x68(0x10)
	int32_t NumFixedVerts; // 0x78(0x4)
	int32_t MaxBoneWeights; // 0x7C(0x4)
	struct TArray<uint32_t> SelfCollisionIndices; // 0x80(0x10)
	unsigned char UnknownData_90[0x0050]; // 0x90(0x50)
};

