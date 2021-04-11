// Class ImgMedia.ImgMediaSource
// Size : 0xB0 (Inherited : 0x88)
struct UImgMediaSource : UBaseMediaSource {
	struct FFrameRate FrameRateOverride; // 0x88(0x8)
	struct FString ProxyOverride; // 0x90(0x10)
	struct FDirectoryPath SequencePath; // 0xA0(0x10)

	void SetSequencePath(struct FString Path); // Function ImgMedia.ImgMediaSource.SetSequencePath // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF774C6E910
	struct FString GetSequencePath(); // Function ImgMedia.ImgMediaSource.GetSequencePath // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF774C6E840
	void GetProxies(struct TArray<struct FString> OutProxies); // Function ImgMedia.ImgMediaSource.GetProxies // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF774C6E770
};

