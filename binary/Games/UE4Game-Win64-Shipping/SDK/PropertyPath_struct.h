// ScriptStruct PropertyPath.CachedPropertyPath
// Size : 0x28 (Inherited : 0x0)
struct FCachedPropertyPath {
	struct TArray<struct FPropertyPathSegment> Segments; // 0x0(0x10)
	unsigned char UnknownData_10[0x0008]; // 0x10(0x8)
	struct UFunction* CachedFunction; // 0x18(0x8)
	unsigned char UnknownData_20[0x0008]; // 0x20(0x8)
};

// ScriptStruct PropertyPath.PropertyPathSegment
// Size : 0x28 (Inherited : 0x0)
struct FPropertyPathSegment {
	struct FName Name; // 0x0(0x8)
	int32_t ArrayIndex; // 0x8(0x4)
	unsigned char UnknownData_C[0x0004]; // 0xC(0x4)
	struct UStruct* Struct; // 0x10(0x8)
	unsigned char UnknownData_18[0x0010]; // 0x18(0x10)
};

