// ScriptStruct ProceduralMeshComponent.ProcMeshSection
// Size : 0x40 (Inherited : 0x0)
struct FProcMeshSection {
	struct TArray<struct FProcMeshVertex> ProcVertexBuffer; // 0x0(0x10)
	struct TArray<uint32_t> ProcIndexBuffer; // 0x10(0x10)
	struct FBox SectionLocalBox; // 0x20(0x1C)
	bool bEnableCollision; // 0x3C(0x1)
	bool bSectionVisible; // 0x3D(0x1)
	unsigned char UnknownData_3E[0x0002]; // 0x3E(0x2)
};

// ScriptStruct ProceduralMeshComponent.ProcMeshVertex
// Size : 0x4C (Inherited : 0x0)
struct FProcMeshVertex {
	struct FVector Position; // 0x0(0xC)
	struct FVector Normal; // 0xC(0xC)
	struct FProcMeshTangent Tangent; // 0x18(0x10)
	struct FColor Color; // 0x28(0x4)
	struct FVector2D UV0; // 0x2C(0x8)
	struct FVector2D UV1; // 0x34(0x8)
	struct FVector2D UV2; // 0x3C(0x8)
	struct FVector2D UV3; // 0x44(0x8)
};

// ScriptStruct ProceduralMeshComponent.ProcMeshTangent
// Size : 0x10 (Inherited : 0x0)
struct FProcMeshTangent {
	struct FVector TangentX; // 0x0(0xC)
	bool bFlipTangentY; // 0xC(0x1)
	unsigned char UnknownData_D[0x0003]; // 0xD(0x3)
};

