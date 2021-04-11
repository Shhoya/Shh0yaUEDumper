// ScriptStruct Serialization.StructSerializerTestStruct
// Size : 0x450 (Inherited : 0x0)
struct FStructSerializerTestStruct {
	struct FStructSerializerNumericTestStruct Numerics; // 0x0(0x30)
	struct FStructSerializerBooleanTestStruct Booleans; // 0x30(0x3)
	unsigned char UnknownData_33[0x0005]; // 0x33(0x5)
	struct FStructSerializerObjectTestStruct Objects; // 0x38(0xA0)
	unsigned char UnknownData_D8[0x0008]; // 0xD8(0x8)
	struct FStructSerializerBuiltinTestStruct Builtins; // 0xE0(0x90)
	struct FStructSerializerArrayTestStruct Arrays; // 0x170(0x60)
	struct FStructSerializerMapTestStruct Maps; // 0x1D0(0x140)
	struct FStructSerializerSetTestStruct Sets; // 0x310(0x140)
};

// ScriptStruct Serialization.StructSerializerSetTestStruct
// Size : 0x140 (Inherited : 0x0)
struct FStructSerializerSetTestStruct {
	struct TSet<struct FString> StrSet; // 0x0(0x50)
	struct TSet<int32_t> IntSet; // 0x50(0x50)
	struct TSet<struct FName> NameSet; // 0xA0(0x50)
	struct TSet<struct FStructSerializerBuiltinTestStruct> StructSet; // 0xF0(0x50)
};

// ScriptStruct Serialization.StructSerializerBuiltinTestStruct
// Size : 0x90 (Inherited : 0x0)
struct FStructSerializerBuiltinTestStruct {
	struct FGuid Guid; // 0x0(0x10)
	struct FName Name; // 0x10(0x8)
	struct FString String; // 0x18(0x10)
	struct FText Text; // 0x28(0x18)
	struct FVector Vector; // 0x40(0xC)
	unsigned char UnknownData_4C[0x0004]; // 0x4C(0x4)
	struct FVector4 Vector4; // 0x50(0x10)
	struct FRotator Rotator; // 0x60(0xC)
	unsigned char UnknownData_6C[0x0004]; // 0x6C(0x4)
	struct FQuat Quat; // 0x70(0x10)
	struct FColor Color; // 0x80(0x4)
	unsigned char UnknownData_84[0x000C]; // 0x84(0xC)
};

// ScriptStruct Serialization.StructSerializerMapTestStruct
// Size : 0x140 (Inherited : 0x0)
struct FStructSerializerMapTestStruct {
	struct TMap<int32_t, struct FString> IntToStr; // 0x0(0x50)
	struct TMap<struct FString, struct FString> StrToStr; // 0x50(0x50)
	struct TMap<struct FString, struct FVector> StrToVec; // 0xA0(0x50)
	struct TMap<struct FString, struct FStructSerializerBuiltinTestStruct> StrToStruct; // 0xF0(0x50)
};

// ScriptStruct Serialization.StructSerializerArrayTestStruct
// Size : 0x60 (Inherited : 0x0)
struct FStructSerializerArrayTestStruct {
	struct TArray<int32_t> Int32Array; // 0x0(0x10)
	struct TArray<enum class None> ByteArray; // 0x10(0x10)
	int32_t StaticSingleElement; // 0x20(0x4)
	int32_t StaticInt32Array[3]; // 0x24(0xC)
	float StaticFloatArray[3]; // 0x30(0xC)
	unsigned char UnknownData_3C[0x0004]; // 0x3C(0x4)
	struct TArray<struct FVector> VectorArray; // 0x40(0x10)
	struct TArray<struct FStructSerializerBuiltinTestStruct> StructArray; // 0x50(0x10)
};

// ScriptStruct Serialization.StructSerializerObjectTestStruct
// Size : 0xA0 (Inherited : 0x0)
struct FStructSerializerObjectTestStruct {
	class UObject* Class; // 0x0(0x8)
	class UMetaData* SubClass; // 0x8(0x8)
	SoftClassProperty SoftClass; // 0x10(0x28)
	struct UObject* Object; // 0x38(0x8)
	struct FWeakObjectPtr<struct UMetaData> WeakObject; // 0x40(0x8)
	struct TSoftObjectPtr<struct UMetaData> SoftObject; // 0x48(0x28)
	struct FSoftClassPath ClassPath; // 0x70(0x18)
	struct FSoftObjectPath ObjectPath; // 0x88(0x18)
};

// ScriptStruct Serialization.StructSerializerBooleanTestStruct
// Size : 0x3 (Inherited : 0x0)
struct FStructSerializerBooleanTestStruct {
	bool BoolFalse; // 0x0(0x1)
	bool BoolTrue; // 0x1(0x1)
	unsigned char Bitfield0 : 1; // 0x2(0x1)
	unsigned char Bitfield1 : 1; // 0x2(0x1)
	unsigned char Bitfield2Set : 1; // 0x2(0x1)
	unsigned char Bitfield3 : 1; // 0x2(0x1)
	unsigned char Bitfield4Set : 1; // 0x2(0x1)
	unsigned char Bitfield5Set : 1; // 0x2(0x1)
	unsigned char Bitfield6 : 1; // 0x2(0x1)
	unsigned char Bitfield7Set : 1; // 0x2(0x1)
};

// ScriptStruct Serialization.StructSerializerNumericTestStruct
// Size : 0x30 (Inherited : 0x0)
struct FStructSerializerNumericTestStruct {
	int8_t Int8; // 0x0(0x1)
	unsigned char UnknownData_1[0x0001]; // 0x1(0x1)
	int16_t Int16; // 0x2(0x2)
	int32_t Int32; // 0x4(0x4)
	int64_t Int64; // 0x8(0x8)
	enum class None UInt8; // 0x10(0x1)
	unsigned char UnknownData_11[0x0001]; // 0x11(0x1)
	uint16 UInt16; // 0x12(0x2)
	uint32_t UInt32; // 0x14(0x4)
	uint64_t UInt64; // 0x18(0x8)
	float Float; // 0x20(0x4)
	unsigned char UnknownData_24[0x0004]; // 0x24(0x4)
	double Double; // 0x28(0x8)
};

// ScriptStruct Serialization.StructSerializerByteArray
// Size : 0x38 (Inherited : 0x0)
struct FStructSerializerByteArray {
	int32_t Dummy1; // 0x0(0x4)
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
	struct TArray<enum class None> ByteArray; // 0x8(0x10)
	int32_t Dummy2; // 0x18(0x4)
	unsigned char UnknownData_1C[0x0004]; // 0x1C(0x4)
	struct TArray<int8_t> Int8Array; // 0x20(0x10)
	int32_t Dummy3; // 0x30(0x4)
	unsigned char UnknownData_34[0x0004]; // 0x34(0x4)
};

