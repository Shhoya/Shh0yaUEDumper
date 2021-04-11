// ScriptStruct PropertyAccess.PropertyAccessLibrary
// Size : 0xC8 (Inherited : 0x0)
struct FPropertyAccessLibrary {
	struct TArray<struct FPropertyAccessSegment> PathSegments; // 0x0(0x10)
	struct TArray<struct FPropertyAccessPath> SrcPaths; // 0x10(0x10)
	struct TArray<struct FPropertyAccessPath> DestPaths; // 0x20(0x10)
	struct FPropertyAccessCopyBatch CopyBatches[4]; // 0x30(0x40)
	struct TArray<struct FPropertyAccessIndirectionChain> SrcAccesses; // 0x70(0x10)
	struct TArray<struct FPropertyAccessIndirectionChain> DestAccesses; // 0x80(0x10)
	struct TArray<struct FPropertyAccessIndirection> Indirections; // 0x90(0x10)
	struct TArray<int32_t> EventAccessIndices; // 0xA0(0x10)
	unsigned char UnknownData_B0[0x0018]; // 0xB0(0x18)
};

// ScriptStruct PropertyAccess.PropertyAccessIndirection
// Size : 0x40 (Inherited : 0x0)
struct FPropertyAccessIndirection {
	FieldPathProperty ArrayProperty; // 0x0(0x20)
	struct UFunction* Function; // 0x20(0x8)
	int32_t ReturnBufferSize; // 0x28(0x4)
	int32_t ReturnBufferAlignment; // 0x2C(0x4)
	int32_t ArrayIndex; // 0x30(0x4)
	uint32_t Offset; // 0x34(0x4)
	enum class EPropertyAccessObjectType ObjectType; // 0x38(0x1)
	enum class EPropertyAccessIndirectionType Type; // 0x39(0x1)
	unsigned char UnknownData_3A[0x0006]; // 0x3A(0x6)
};

// ScriptStruct PropertyAccess.PropertyAccessIndirectionChain
// Size : 0x30 (Inherited : 0x0)
struct FPropertyAccessIndirectionChain {
	FieldPathProperty Property; // 0x0(0x20)
	int32_t IndirectionStartIndex; // 0x20(0x4)
	int32_t IndirectionEndIndex; // 0x24(0x4)
	int32_t EventId; // 0x28(0x4)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
};

// ScriptStruct PropertyAccess.PropertyAccessCopyBatch
// Size : 0x10 (Inherited : 0x0)
struct FPropertyAccessCopyBatch {
	struct TArray<struct FPropertyAccessCopy> Copies; // 0x0(0x10)
};

// ScriptStruct PropertyAccess.PropertyAccessCopy
// Size : 0x10 (Inherited : 0x0)
struct FPropertyAccessCopy {
	int32_t AccessIndex; // 0x0(0x4)
	int32_t DestAccessStartIndex; // 0x4(0x4)
	int32_t DestAccessEndIndex; // 0x8(0x4)
	enum class EPropertyAccessCopyType Type; // 0xC(0x1)
	unsigned char UnknownData_D[0x0003]; // 0xD(0x3)
};

// ScriptStruct PropertyAccess.PropertyAccessPath
// Size : 0xC (Inherited : 0x0)
struct FPropertyAccessPath {
	int32_t PathSegmentStartIndex; // 0x0(0x4)
	int32_t PathSegmentCount; // 0x4(0x4)
	unsigned char bHasEvents : 1; // 0x8(0x1)
	unsigned char UnknownData_8_1 : 7; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
};

// ScriptStruct PropertyAccess.PropertyAccessSegment
// Size : 0x40 (Inherited : 0x0)
struct FPropertyAccessSegment {
	struct FName Name; // 0x0(0x8)
	struct UStruct* Struct; // 0x8(0x8)
	FieldPathProperty Property; // 0x10(0x20)
	struct UFunction* Function; // 0x30(0x8)
	int32_t ArrayIndex; // 0x38(0x4)
	uint16 Flags; // 0x3C(0x2)
	unsigned char UnknownData_3E[0x0002]; // 0x3E(0x2)
};

