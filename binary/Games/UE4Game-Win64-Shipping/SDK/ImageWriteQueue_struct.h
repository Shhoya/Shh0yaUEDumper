// ScriptStruct ImageWriteQueue.ImageWriteOptions
// Size : 0x60 (Inherited : 0x0)
struct FImageWriteOptions {
	enum class EDesiredImageFormat Format; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	struct FDelegate OnComplete; // 0x4(0x10)
	int32_t CompressionQuality; // 0x14(0x4)
	bool bOverwriteFile; // 0x18(0x1)
	bool bAsync; // 0x19(0x1)
	unsigned char UnknownData_1A[0x0046]; // 0x1A(0x46)
};

