// Class AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy
// Size : 0x88 (Inherited : 0x28)
struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFailure; // 0x40(0x10)
	unsigned char UnknownData_50[0x0010]; // 0x50(0x10)
	struct FAppleImageUtilsImageConversionResult ConversionResult; // 0x60(0x20)
	unsigned char UnknownData_80[0x0008]; // 0x80(0x8)

	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToTIFF(struct UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToTIFF // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF774D2F040
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToPNG(struct UTexture* SourceImage, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToPNG // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF774D2EEA0
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToJPEG(struct UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToJPEG // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF774D2ECD0
	struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy* CreateProxyObjectForConvertToHEIF(struct UTexture* SourceImage, int32_t Quality, bool bWantColor, bool bUseGpu, float Scale, enum class ETextureRotationDirection Rotate); // Function AppleImageUtils.AppleImageUtilsBaseAsyncTaskBlueprintProxy.CreateProxyObjectForConvertToHEIF // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF774D2EB00
};

// Class AppleImageUtils.AppleImageInterface
// Size : 0x28 (Inherited : 0x28)
struct UAppleImageInterface : UInterface {
};

