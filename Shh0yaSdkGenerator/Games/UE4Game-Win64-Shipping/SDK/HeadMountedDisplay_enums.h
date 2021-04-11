// Enum HeadMountedDisplay.EXRVisualType
enum class FEXRVisualType : uint8 {
	Controller
	Hand
	EXRVisualType_MAX
};

// Enum HeadMountedDisplay.EHandKeypoint
enum class FEHandKeypoint : uint8 {
	Palm
	Wrist
	ThumbMetacarpal
	ThumbProximal
	ThumbDistal
	ThumbTip
	IndexMetacarpal
	IndexProximal
	IndexIntermediate
	IndexDistal
	IndexTip
	MiddleMetacarpal
	MiddleProximal
	MiddleIntermediate
	MiddleDistal
	MiddleTip
	RingMetacarpal
	RingProximal
	RingIntermediate
	RingDistal
	RingTip
	LittleMetacarpal
	LittleProximal
	LittleIntermediate
	LittleDistal
	LittleTip
	EHandKeypoint_MAX
};

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

// Enum HeadMountedDisplay.EXRSystemFlags
enum class FEXRSystemFlags : uint8 {
	NoFlags
	IsAR
	IsTablet
	IsHeadMounted
	SupportsHandTracking
	EXRSystemFlags_MAX
};

// Enum HeadMountedDisplay.EXRDeviceConnectionResult
enum class FEXRDeviceConnectionResult : uint8 {
	NoTrackingSystem
	FeatureNotSupported
	NoValidViewport
	MiscFailure
	Success
	EXRDeviceConnectionResult_MAX
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
	Unbounded
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

// Enum HeadMountedDisplay.ESpatialInputGestureAxis
enum class FESpatialInputGestureAxis : uint8 {
	None
	Manipulation
	Navigation
	NavigationRails
	ESpatialInputGestureAxis_MAX
};

