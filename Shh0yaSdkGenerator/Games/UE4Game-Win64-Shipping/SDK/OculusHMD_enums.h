// Enum OculusHMD.EOculusDeviceType
enum class FEOculusDeviceType : uint8 {
	OculusMobile_Deprecated0
	OculusQuest
	OculusQuest2
	Rift
	Rift_S
	Quest_Link
	OculusUnknown
	EOculusDeviceType_MAX
};

// Enum OculusHMD.EHandTrackingSupport
enum class FEHandTrackingSupport : uint8 {
	ControllersOnly
	ControllersAndHands
	HandsOnly
	EHandTrackingSupport_MAX
};

// Enum OculusHMD.EColorSpace
enum class FEColorSpace : uint8 {
	Unknown
	Unmanaged
	Rec_2021
	Rec_710
	Rift_CV1
	Rift_S
	Quest
	P3
	Adobe_RGB
	EColorSpace_MAX
};

// Enum OculusHMD.EBoundaryType
enum class FEBoundaryType : uint8 {
	Boundary_Outer
	Boundary_PlayArea
	Boundary_MAX
};

// Enum OculusHMD.EFixedFoveatedRenderingLevel
enum class FEFixedFoveatedRenderingLevel : uint8 {
	FFR_Off
	FFR_Low
	FFR_Medium
	FFR_High
	FFR_HighTop
	FFR_MAX
};

// Enum OculusHMD.ETrackedDeviceType
enum class FETrackedDeviceType : uint8 {
	None
	HMD
	LTouch
	RTouch
	Touch
	DeviceObjectZero
	All
	ETrackedDeviceType_MAX
};

