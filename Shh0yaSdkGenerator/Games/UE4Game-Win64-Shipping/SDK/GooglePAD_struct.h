// Enum GooglePAD.EGooglePADCellularDataConfirmStatus
enum class FEGooglePADCellularDataConfirmStatus : uint8 {
	AssetPack_CONFIRM_UNKNOWN
	AssetPack_CONFIRM_PENDING
	AssetPack_CONFIRM_USER_APPROVED
	AssetPack_CONFIRM_USER_CANCELED
	AssetPack_CONFIRM_MAX
};

// Enum GooglePAD.EGooglePADStorageMethod
enum class FEGooglePADStorageMethod : uint8 {
	AssetPack_STORAGE_FILES
	AssetPack_STORAGE_APK
	AssetPack_STORAGE_UNKNOWN
	AssetPack_STORAGE_NOT_INSTALLED
	AssetPack_STORAGE_MAX
};

// Enum GooglePAD.EGooglePADDownloadStatus
enum class FEGooglePADDownloadStatus : uint8 {
	AssetPack_UNKNOWN
	AssetPack_DOWNLOAD_PENDING
	AssetPack_DOWNLOADING
	AssetPack_TRANSFERRING
	AssetPack_DOWNLOAD_COMPLETED
	AssetPack_DOWNLOAD_FAILED
	AssetPack_DOWNLOAD_CANCELED
	AssetPack_WAITING_FOR_WIFI
	AssetPack_NOT_INSTALLED
	AssetPack_INFO_PENDING
	AssetPack_INFO_FAILED
	AssetPack_REMOVAL_PENDING
	AssetPack_REMOVAL_FAILED
	AssetPack_MAX
};

// Enum GooglePAD.EGooglePADErrorCode
enum class FEGooglePADErrorCode : uint8 {
	AssetPack_NO_ERROR
	AssetPack_APP_UNAVAILABLE
	AssetPack_UNAVAILABLE
	AssetPack_INVALID_REQUEST
	AssetPack_DOWNLOAD_NOT_FOUND
	AssetPack_API_NOT_AVAILABLE
	AssetPack_NETWORK_ERROR
	AssetPack_ACCESS_DENIED
	AssetPack_INSUFFICIENT_STORAGE
	AssetPack_PLAY_STORE_NOT_FOUND
	AssetPack_NETWORK_UNRESTRICTED
	AssetPack_INTERNAL_ERROR
	AssetPack_INITIALIZATION_NEEDED
	AssetPack_INITIALIZATION_FAILED
	AssetPack_MAX
};

