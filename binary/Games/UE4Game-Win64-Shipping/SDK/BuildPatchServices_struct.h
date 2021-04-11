// ScriptStruct BuildPatchServices.FileManifestData
// Size : 0x68 (Inherited : 0x0)
struct FFileManifestData {
	struct FString Filename; // 0x0(0x10)
	struct FSHAHashData FileHash; // 0x10(0x14)
	unsigned char UnknownData_24[0x0004]; // 0x24(0x4)
	struct TArray<struct FChunkPartData> FileChunkParts; // 0x28(0x10)
	struct TArray<struct FString> InstallTags; // 0x38(0x10)
	bool bIsUnixExecutable; // 0x48(0x1)
	unsigned char UnknownData_49[0x0007]; // 0x49(0x7)
	struct FString SymlinkTarget; // 0x50(0x10)
	bool bIsReadOnly; // 0x60(0x1)
	bool bIsCompressed; // 0x61(0x1)
	unsigned char UnknownData_62[0x0006]; // 0x62(0x6)
};

// ScriptStruct BuildPatchServices.ChunkPartData
// Size : 0x18 (Inherited : 0x0)
struct FChunkPartData {
	struct FGuid Guid; // 0x0(0x10)
	uint32_t Offset; // 0x10(0x4)
	uint32_t Size; // 0x14(0x4)
};

// ScriptStruct BuildPatchServices.SHAHashData
// Size : 0x14 (Inherited : 0x0)
struct FSHAHashData {
	enum class None Hash[14]; // 0x0(0x14)
};

// ScriptStruct BuildPatchServices.ChunkInfoData
// Size : 0x40 (Inherited : 0x0)
struct FChunkInfoData {
	struct FGuid Guid; // 0x0(0x10)
	uint64_t Hash; // 0x10(0x8)
	struct FSHAHashData ShaHash; // 0x18(0x14)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
	int64_t FileSize; // 0x30(0x8)
	enum class None GroupNumber; // 0x38(0x1)
	unsigned char UnknownData_39[0x0007]; // 0x39(0x7)
};

// ScriptStruct BuildPatchServices.CustomFieldData
// Size : 0x20 (Inherited : 0x0)
struct FCustomFieldData {
	struct FString Key; // 0x0(0x10)
	struct FString Value; // 0x10(0x10)
};

