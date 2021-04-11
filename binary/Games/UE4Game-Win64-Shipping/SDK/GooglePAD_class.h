// Class GooglePAD.GooglePADFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct UGooglePADFunctionLibrary : UBlueprintFunctionLibrary {

	enum class EGooglePADErrorCode ShowCellularDataConfirmation(); // Function GooglePAD.GooglePADFunctionLibrary.ShowCellularDataConfirmation // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D3BB80
	enum class EGooglePADErrorCode RequestRemoval(struct FString Name); // Function GooglePAD.GooglePADFunctionLibrary.RequestRemoval // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF774D3BAE0
	enum class EGooglePADErrorCode RequestInfo(struct TArray<struct FString> AssetPacks); // Function GooglePAD.GooglePADFunctionLibrary.RequestInfo // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF774D3B560
	enum class EGooglePADErrorCode RequestDownload(struct TArray<struct FString> AssetPacks); // Function GooglePAD.GooglePADFunctionLibrary.RequestDownload // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF774D3B560
	void ReleaseDownloadState(int32_t State); // Function GooglePAD.GooglePADFunctionLibrary.ReleaseDownloadState // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774D3BA70
	void ReleaseAssetPackLocation(int32_t Location); // Function GooglePAD.GooglePADFunctionLibrary.ReleaseAssetPackLocation // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774D3BA70
	int32_t GetTotalBytesToDownload(int32_t State); // Function GooglePAD.GooglePADFunctionLibrary.GetTotalBytesToDownload // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774D3B860
	enum class EGooglePADStorageMethod GetStorageMethod(int32_t Location); // Function GooglePAD.GooglePADFunctionLibrary.GetStorageMethod // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x5, 0x7FF774D3B9F0
	enum class EGooglePADErrorCode GetShowCellularDataConfirmationStatus(enum class EGooglePADCellularDataConfirmStatus Status); // Function GooglePAD.GooglePADFunctionLibrary.GetShowCellularDataConfirmationStatus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x2, 0x7FF774D3B960
	enum class EGooglePADDownloadStatus GetDownloadStatus(int32_t State); // Function GooglePAD.GooglePADFunctionLibrary.GetDownloadStatus // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x5, 0x7FF774D3B8E0
	enum class EGooglePADErrorCode GetDownloadState(struct FString Name, int32_t State); // Function GooglePAD.GooglePADFunctionLibrary.GetDownloadState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x15, 0x7FF774D3B6C0
	int32_t GetBytesDownloaded(int32_t State); // Function GooglePAD.GooglePADFunctionLibrary.GetBytesDownloaded // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774D3B860
	struct FString GetAssetsPath(int32_t Location); // Function GooglePAD.GooglePADFunctionLibrary.GetAssetsPath // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF774D3B7A0
	enum class EGooglePADErrorCode GetAssetPackLocation(struct FString Name, int32_t Location); // Function GooglePAD.GooglePADFunctionLibrary.GetAssetPackLocation // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x15, 0x7FF774D3B6C0
	enum class EGooglePADErrorCode CancelDownload(struct TArray<struct FString> AssetPacks); // Function GooglePAD.GooglePADFunctionLibrary.CancelDownload // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF774D3B560
};

