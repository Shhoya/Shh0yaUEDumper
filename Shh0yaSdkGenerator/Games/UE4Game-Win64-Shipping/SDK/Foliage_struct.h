// ScriptStruct Foliage.FoliageVertexColorChannelMask
// Size : 0xC (Inherited : 0x0)
struct FFoliageVertexColorChannelMask {
	unsigned char UseMask : 1; // 0x0(0x1)
	unsigned char UnknownData_0_1 : 7; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float MaskThreshold; // 0x4(0x4)
	unsigned char InvertMask : 1; // 0x8(0x1)
	unsigned char UnknownData_8_1 : 7; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
};

// ScriptStruct Foliage.FoliageTypeObject
// Size : 0x20 (Inherited : 0x0)
struct FFoliageTypeObject {
	struct UObject* FoliageTypeObject; // 0x0(0x8)
	struct UFoliageType* TypeInstance; // 0x8(0x8)
	bool bIsAsset; // 0x10(0x1)
	unsigned char UnknownData_11[0x0007]; // 0x11(0x7)
	class UFoliageType_InstancedStaticMesh* Type; // 0x18(0x8)
};

// ScriptStruct Foliage.ProceduralFoliageInstance
// Size : 0x60 (Inherited : 0x0)
struct FProceduralFoliageInstance {
	struct FVector Location; // 0x0(0xC)
	unsigned char UnknownData_C[0x0004]; // 0xC(0x4)
	struct FQuat Rotation; // 0x10(0x10)
	struct FVector Normal; // 0x20(0xC)
	float Age; // 0x2C(0x4)
	float Scale; // 0x30(0x4)
	unsigned char UnknownData_34[0x0004]; // 0x34(0x4)
	struct UFoliageType* Type; // 0x38(0x8)
	unsigned char UnknownData_40[0x0020]; // 0x40(0x20)
};

