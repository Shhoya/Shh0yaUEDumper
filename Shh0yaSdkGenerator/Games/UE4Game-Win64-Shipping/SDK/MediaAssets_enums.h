// Enum MediaAssets.EMediaWebcamCaptureDeviceFilter
enum class FEMediaWebcamCaptureDeviceFilter : uint8 {
	None
	DepthSensor
	Front
	Rear
	Unknown
	EMediaWebcamCaptureDeviceFilter_MAX
};

// Enum MediaAssets.EMediaVideoCaptureDeviceFilter
enum class FEMediaVideoCaptureDeviceFilter : uint8 {
	None
	Card
	Software
	Unknown
	Webcam
	EMediaVideoCaptureDeviceFilter_MAX
};

// Enum MediaAssets.EMediaAudioCaptureDeviceFilter
enum class FEMediaAudioCaptureDeviceFilter : uint8 {
	None
	Card
	Microphone
	Software
	Unknown
	EMediaAudioCaptureDeviceFilter_MAX
};

// Enum MediaAssets.EMediaPlayerTrack
enum class FEMediaPlayerTrack : uint8 {
	Audio
	Caption
	Metadata
	Script
	Subtitle
	Text
	Video
	EMediaPlayerTrack_MAX
};

// Enum MediaAssets.EMediaSoundComponentFFTSize
enum class FEMediaSoundComponentFFTSize : uint8 {
	Min_65
	Small_257
	Medium_513
	Large_1025
	EMediaSoundComponentFFTSize_MAX
};

// Enum MediaAssets.EMediaSoundChannels
enum class FEMediaSoundChannels : uint8 {
	Mono
	Stereo
	Surround
	EMediaSoundChannels_MAX
};

// Enum MediaAssets.MediaTextureOrientation
enum class FMediaTextureOrientation : uint8 {
	MTORI_Original
	MTORI_CW90
	MTORI_CW180
	MTORI_CW270
	MTORI_MAX
};

// Enum MediaAssets.MediaTextureOutputFormat
enum class FMediaTextureOutputFormat : uint8 {
	MTOF_Default
	MTOF_SRGB_LINOUT
	MTOF_MAX
};

