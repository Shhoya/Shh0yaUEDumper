// Enum AugmentedReality.EARTrackingState
enum class FEARTrackingState : uint8 {
	Unknown
	Tracking
	NotTracking
	StoppedTracking
	EARTrackingState_MAX
};

// Enum AugmentedReality.EARSessionTrackingFeature
enum class FEARSessionTrackingFeature : uint8 {
	None
	PoseDetection2D
	PersonSegmentation
	PersonSegmentationWithDepth
	EARSessionTrackingFeature_MAX
};

// Enum AugmentedReality.EARFaceTrackingUpdate
enum class FEARFaceTrackingUpdate : uint8 {
	CurvesAndGeo
	CurvesOnly
	EARFaceTrackingUpdate_MAX
};

// Enum AugmentedReality.EAREnvironmentCaptureProbeType
enum class FEAREnvironmentCaptureProbeType : uint8 {
	None
	Manual
	Automatic
	EAREnvironmentCaptureProbeType_MAX
};

// Enum AugmentedReality.EARFrameSyncMode
enum class FEARFrameSyncMode : uint8 {
	SyncTickWithCameraImage
	SyncTickWithoutCameraImage
	EARFrameSyncMode_MAX
};

// Enum AugmentedReality.EARLightEstimationMode
enum class FEARLightEstimationMode : uint8 {
	None
	AmbientLightEstimate
	DirectionalLightEstimate
	EARLightEstimationMode_MAX
};

// Enum AugmentedReality.EARPlaneDetectionMode
enum class FEARPlaneDetectionMode : uint8 {
	None
	HorizontalPlaneDetection
	VerticalPlaneDetection
	EARPlaneDetectionMode_MAX
};

// Enum AugmentedReality.EARSessionType
enum class FEARSessionType : uint8 {
	None
	Orientation
	World
	Face
	Image
	ObjectScanning
	PoseTracking
	EARSessionType_MAX
};

// Enum AugmentedReality.EARWorldAlignment
enum class FEARWorldAlignment : uint8 {
	Gravity
	GravityAndHeading
	Camera
	EARWorldAlignment_MAX
};

// Enum AugmentedReality.EARDepthAccuracy
enum class FEARDepthAccuracy : uint8 {
	Unkown
	Approximate
	Accurate
	EARDepthAccuracy_MAX
};

// Enum AugmentedReality.EARDepthQuality
enum class FEARDepthQuality : uint8 {
	Unkown
	Low
	High
	EARDepthQuality_MAX
};

// Enum AugmentedReality.EARTextureType
enum class FEARTextureType : uint8 {
	CameraImage
	CameraDepth
	EnvironmentCapture
	EARTextureType_MAX
};

// Enum AugmentedReality.EAREye
enum class FEAREye : uint8 {
	LeftEye
	RightEye
	EAREye_MAX
};

// Enum AugmentedReality.EARFaceBlendShape
enum class FEARFaceBlendShape : uint8 {
	EyeBlinkLeft
	EyeLookDownLeft
	EyeLookInLeft
	EyeLookOutLeft
	EyeLookUpLeft
	EyeSquintLeft
	EyeWideLeft
	EyeBlinkRight
	EyeLookDownRight
	EyeLookInRight
	EyeLookOutRight
	EyeLookUpRight
	EyeSquintRight
	EyeWideRight
	JawForward
	JawLeft
	JawRight
	JawOpen
	MouthClose
	MouthFunnel
	MouthPucker
	MouthLeft
	MouthRight
	MouthSmileLeft
	MouthSmileRight
	MouthFrownLeft
	MouthFrownRight
	MouthDimpleLeft
	MouthDimpleRight
	MouthStretchLeft
	MouthStretchRight
	MouthRollLower
	MouthRollUpper
	MouthShrugLower
	MouthShrugUpper
	MouthPressLeft
	MouthPressRight
	MouthLowerDownLeft
	MouthLowerDownRight
	MouthUpperUpLeft
	MouthUpperUpRight
	BrowDownLeft
	BrowDownRight
	BrowInnerUp
	BrowOuterUpLeft
	BrowOuterUpRight
	CheekPuff
	CheekSquintLeft
	CheekSquintRight
	NoseSneerLeft
	NoseSneerRight
	TongueOut
	HeadYaw
	HeadPitch
	HeadRoll
	LeftEyeYaw
	LeftEyePitch
	LeftEyeRoll
	RightEyeYaw
	RightEyePitch
	RightEyeRoll
	MAX
};

// Enum AugmentedReality.EARFaceTrackingDirection
enum class FEARFaceTrackingDirection : uint8 {
	FaceRelative
	FaceMirrored
	EARFaceTrackingDirection_MAX
};

// Enum AugmentedReality.EARCandidateImageOrientation
enum class FEARCandidateImageOrientation : uint8 {
	Landscape
	Portrait
	EARCandidateImageOrientation_MAX
};

// Enum AugmentedReality.EARJointTransformSpace
enum class FEARJointTransformSpace : uint8 {
	Model
	ParentJoint
	EARJointTransformSpace_MAX
};

// Enum AugmentedReality.EARObjectClassification
enum class FEARObjectClassification : uint8 {
	NotApplicable
	Unknown
	Wall
	Ceiling
	Floor
	Table
	Seat
	Face
	Image
	World
	SceneObject
	HandMesh
	EARObjectClassification_MAX
};

// Enum AugmentedReality.EARPlaneOrientation
enum class FEARPlaneOrientation : uint8 {
	Horizontal
	Vertical
	Diagonal
	EARPlaneOrientation_MAX
};

// Enum AugmentedReality.EARWorldMappingState
enum class FEARWorldMappingState : uint8 {
	NotAvailable
	StillMappingNotRelocalizable
	StillMappingRelocalizable
	Mapped
	EARWorldMappingState_MAX
};

// Enum AugmentedReality.EARSessionStatus
enum class FEARSessionStatus : uint8 {
	NotStarted
	Running
	NotSupported
	FatalError
	PermissionNotGranted
	UnsupportedConfiguration
	Other
	EARSessionStatus_MAX
};

// Enum AugmentedReality.EARTrackingQualityReason
enum class FEARTrackingQualityReason : uint8 {
	None
	Initializing
	Relocalizing
	ExcessiveMotion
	InsufficientFeatures
	EARTrackingQualityReason_MAX
};

// Enum AugmentedReality.EARTrackingQuality
enum class FEARTrackingQuality : uint8 {
	NotTracking
	OrientationOnly
	OrientationAndPosition
	EARTrackingQuality_MAX
};

// Enum AugmentedReality.EARLineTraceChannels
enum class FEARLineTraceChannels : uint8 {
	None
	FeaturePoint
	GroundPlane
	PlaneUsingExtent
	PlaneUsingBoundaryPolygon
	EARLineTraceChannels_MAX
};

