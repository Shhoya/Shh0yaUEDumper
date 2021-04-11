// Enum HeadMountedDisplay.EXRTrackedDeviceType
enum class FEXRTrackedDeviceType : uint8 {
	HeadMountedDisplay
	Controller
	TrackingReference
	Other
	Invalid
	Any
	EXRTrackedDeviceType_MAX
};

// Enum HeadMountedDisplay.ESpectatorScreenMode
enum class FESpectatorScreenMode : uint8 {
	Disabled
	SingleEyeLetterboxed
	Undistorted
	Distorted
	SingleEye
	SingleEyeCroppedToFill
	Texture
	TexturePlusEye
	ESpectatorScreenMode_MAX
};

// Enum HeadMountedDisplay.EHMDWornState
enum class FEHMDWornState : uint8 {
	Unknown
	Worn
	NotWorn
	EHMDWornState_MAX
};

// Enum HeadMountedDisplay.EHMDTrackingOrigin
enum class FEHMDTrackingOrigin : uint8 {
	Floor
	Eye
	Stage
	EHMDTrackingOrigin_MAX
};

// Enum HeadMountedDisplay.EOrientPositionSelector
enum class FEOrientPositionSelector : uint8 {
	Orientation
	Position
	OrientationAndPosition
	EOrientPositionSelector_MAX
};

// Enum HeadMountedDisplay.ETrackingStatus
enum class FETrackingStatus : uint8 {
	NotTracked
	InertialOnly
	Tracked
	ETrackingStatus_MAX
};

