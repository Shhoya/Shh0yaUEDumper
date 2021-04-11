// Class ClothingSystemRuntimeCommon.ClothConfigCommon
// Size : 0x28 (Inherited : 0x28)
struct UClothConfigCommon : UClothConfigBase {
};

// Class ClothingSystemRuntimeCommon.ClothSharedConfigCommon
// Size : 0x28 (Inherited : 0x28)
struct UClothSharedConfigCommon : UClothConfigCommon {
};

// Class ClothingSystemRuntimeCommon.ClothingAssetCustomData
// Size : 0x28 (Inherited : 0x28)
struct UClothingAssetCustomData : UObject {
};

// Class ClothingSystemRuntimeCommon.ClothingAssetCommon
// Size : 0x1F0 (Inherited : 0x48)
struct UClothingAssetCommon : UClothingAssetBase {
	struct UPhysicsAsset* PhysicsAsset; // 0x48(0x8)
	struct TMap<struct FName, struct UClothConfigBase*> ClothConfigs; // 0x50(0x50)
	struct UClothConfigBase* ClothSharedSimConfig; // 0xA0(0x8)
	struct UClothConfigBase* ClothSimConfig; // 0xA8(0x8)
	struct UClothConfigBase* ChaosClothSimConfig; // 0xB0(0x8)
	struct TArray<struct UClothLODDataCommon_Legacy*> ClothLODData; // 0xB8(0x10)
	struct TArray<struct FClothLODDataCommon> LODData; // 0xC8(0x10)
	struct TArray<int32_t> LodMap; // 0xD8(0x10)
	struct TArray<struct FName> UsedBoneNames; // 0xE8(0x10)
	struct TArray<int32_t> UsedBoneIndices; // 0xF8(0x10)
	int32_t ReferenceBoneIndex; // 0x108(0x4)
	unsigned char UnknownData_10C[0x0004]; // 0x10C(0x4)
	struct UClothingAssetCustomData* CustomData; // 0x110(0x8)
	struct FClothConfig_Legacy ClothConfig; // 0x118(0xD4)
	unsigned char UnknownData_1EC[0x0004]; // 0x1EC(0x4)
};

// Class ClothingSystemRuntimeCommon.ClothLODDataCommon_Legacy
// Size : 0x188 (Inherited : 0x28)
struct UClothLODDataCommon_Legacy : UObject {
	struct UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData; // 0x28(0x8)
	struct FClothPhysicalMeshData ClothPhysicalMeshData; // 0x30(0xF8)
	struct FClothCollisionData CollisionData; // 0x128(0x40)
	unsigned char UnknownData_168[0x0020]; // 0x168(0x20)
};

