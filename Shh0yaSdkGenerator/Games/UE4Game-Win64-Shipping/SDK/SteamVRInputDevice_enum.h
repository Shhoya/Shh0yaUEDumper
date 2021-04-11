// Enum SteamVRInputDevice.ESkeletalSummaryDataType
enum class FESkeletalSummaryDataType : uint8 {
	VR_SummaryType_FromAnimation
	VR_SummaryType_FromDevice
	VR_SummaryType_MAX
};

// Enum SteamVRInputDevice.ESteamVRInputStringBits
enum class FESteamVRInputStringBits : uint8 {
	VR_InputString_Hand
	VR_InputString_ControllerType
	VR_InputString_InputSource
	VR_InputString_All
	VR_InputString_MAX
};

// Enum SteamVRInputDevice.EControllerFidelity
enum class FEControllerFidelity : uint8 {
	VR_ControllerFidelity_Estimated
	VR_ControllerFidelity_Full
	VR_ControllerFidelity_Partial
	VR_ControllerFidelity_MAX
};

// Enum SteamVRInputDevice.EHandSkeleton
enum class FEHandSkeleton : uint8 {
	VR_SteamVRHandSkeleton
	VR_UE4HandSkeleton
	VR_MAX
};

// Enum SteamVRInputDevice.EHand
enum class FEHand : uint8 {
	VR_LeftHand
	VR_RightHand
	VR_MAX
};

// Enum SteamVRInputDevice.EMotionRange
enum class FEMotionRange : uint8 {
	VR_WithoutController
	VR_WithController
	VR_MAX
};

// Enum SteamVRInputDevice.ESteamVRHand
enum class FESteamVRHand : uint8 {
	VR_Left
	VR_Right
	VR_MAX
};

