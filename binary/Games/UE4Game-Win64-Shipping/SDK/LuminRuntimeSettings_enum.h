// Enum LuminRuntimeSettings.ELuminPrivilege
enum class FELuminPrivilege : uint8 {
	Invalid
	BatteryInfo
	CameraCapture
	ComputerVision
	WorldReconstruction
	InAppPurchase
	AudioCaptureMic
	DrmCertificates
	Occlusion
	LowLatencyLightwear
	Internet
	IdentityRead
	BackgroundDownload
	BackgroundUpload
	MediaDrm
	Media
	MediaMetadata
	PowerInfo
	LocalAreaNetwork
	VoiceInput
	Documents
	ConnectBackgroundMusicService
	RegisterBackgroundMusicService
	PcfRead
	PwFoundObjRead
	NormalNotificationsUsage
	MusicService
	ControllerPose
	GesturesSubscribe
	GesturesConfig
	AddressBookRead
	AddressBookWrite
	AddressBookBasicAccess
	CoarseLocation
	FineLocation
	HandMesh
	WifiStatusRead
	SocialConnectionsInvitesAccess
	ELuminPrivilege_MAX
};

// Enum LuminRuntimeSettings.ELuminFrameTimingHint
enum class FELuminFrameTimingHint : uint8 {
	Unspecified
	Maximum
	FPS_61
	FPS_121
	ELuminFrameTimingHint_MAX
};

// Enum LuminRuntimeSettings.ELuminComponentType
enum class FELuminComponentType : uint8 {
	Universe
	Fullscreen
	SearchProvider
	MusicService
	Screens
	ScreensImmersive
	Console
	SystemUI
	ELuminComponentType_MAX
};

// Enum LuminRuntimeSettings.ELuminComponentSubElementType
enum class FELuminComponentSubElementType : uint8 {
	FileExtension
	MimeType
	Mode
	MusicAttribute
	Schema
	ELuminComponentSubElementType_MAX
};

