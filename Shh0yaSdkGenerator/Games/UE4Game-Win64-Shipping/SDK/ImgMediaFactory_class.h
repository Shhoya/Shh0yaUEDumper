// Class ImgMediaFactory.ImgMediaSettings
// Size : 0x68 (Inherited : 0x28)
struct UImgMediaSettings : UObject {
	struct FFrameRate DefaultFrameRate; // 0x28(0x8)
	float CacheBehindPercentage; // 0x30(0x4)
	float CacheSizeGB; // 0x34(0x4)
	int32_t CacheThreads; // 0x38(0x4)
	int32_t CacheThreadStackSizeKB; // 0x3C(0x4)
	float GlobalCacheSizeGB; // 0x40(0x4)
	bool UseGlobalCache; // 0x44(0x1)
	unsigned char UnknownData_45[0x0003]; // 0x45(0x3)
	uint32_t ExrDecoderThreads; // 0x48(0x4)
	unsigned char UnknownData_4C[0x0004]; // 0x4C(0x4)
	struct FString DefaultProxy; // 0x50(0x10)
	bool UseDefaultProxy; // 0x60(0x1)
	unsigned char UnknownData_61[0x0007]; // 0x61(0x7)
};

