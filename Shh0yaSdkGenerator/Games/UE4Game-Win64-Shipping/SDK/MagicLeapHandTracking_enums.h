// Enum MagicLeapHandTracking.EMagicLeapGestureTransformSpace
enum class FEMagicLeapGestureTransformSpace : uint8 {
	World
	Hand
	Tracking
	EMagicLeapGestureTransformSpace_MAX
};

// Enum MagicLeapHandTracking.EMagicLeapHandTrackingGestureFilterLevel
enum class FEMagicLeapHandTrackingGestureFilterLevel : uint8 {
	NoFilter
	SlightRobustnessToFlicker
	MoreRobustnessToFlicker
	EMagicLeapHandTrackingGestureFilterLevel_MAX
};

// Enum MagicLeapHandTracking.EMagicLeapHandTrackingKeypointFilterLevel
enum class FEMagicLeapHandTrackingKeypointFilterLevel : uint8 {
	NoFilter
	SimpleSmoothing
	PredictiveSmoothing
	EMagicLeapHandTrackingKeypointFilterLevel_MAX
};

// Enum MagicLeapHandTracking.EMagicLeapHandTrackingGesture
enum class FEMagicLeapHandTrackingGesture : uint8 {
	Finger
	Fist
	Pinch
	Thumb
	L
	OpenHand
	OpenHandBack
	Ok
	C
	NoPose
	NoHand
	EMagicLeapHandTrackingGesture_MAX
};

// Enum MagicLeapHandTracking.EMagicLeapHandTrackingKeypoint
enum class FEMagicLeapHandTrackingKeypoint : uint8 {
	Thumb_Tip
	Thumb_IP
	Thumb_MCP
	Thumb_CMC
	Index_Tip
	Index_DIP
	Index_PIP
	Index_MCP
	Middle_Tip
	Middle_DIP
	Middle_PIP
	Middle_MCP
	Ring_Tip
	Ring_DIP
	Ring_PIP
	Ring_MCP
	Pinky_Tip
	Pinky_DIP
	Pinky_PIP
	Pinky_MCP
	Wrist_Center
	Wrist_Ulnar
	Wrist_Radial
	Hand_Center
	EMagicLeapHandTrackingKeypoint_MAX
};

