// Enum OculusMR.EOculusMR_BoundaryType
enum class FEOculusMR_BoundaryType : uint8 {
	BT_OuterBoundary
	BT_PlayArea
	BT_MAX
};

// Enum OculusMR.EOculusMR_CompositionMethod
enum class FEOculusMR_CompositionMethod : uint8 {
	ExternalComposition
	DirectComposition
	EOculusMR_MAX
};

// Enum OculusMR.EOculusMR_DepthQuality
enum class FEOculusMR_DepthQuality : uint8 {
	DQ_Low
	DQ_Medium
	DQ_High
	DQ_MAX
};

// Enum OculusMR.EOculusMR_PostProcessEffects
enum class FEOculusMR_PostProcessEffects : uint8 {
	PPE_Off
	PPE_On
	PPE_MAX
};

// Enum OculusMR.EOculusMR_VirtualGreenScreenType
enum class FEOculusMR_VirtualGreenScreenType : uint8 {
	VGS_Off
	VGS_OuterBoundary
	VGS_PlayArea
	VGS_MAX
};

// Enum OculusMR.EOculusMR_ClippingReference
enum class FEOculusMR_ClippingReference : uint8 {
	CR_TrackingReference
	CR_Head
	CR_MAX
};

// Enum OculusMR.EOculusMR_CameraDeviceEnum
enum class FEOculusMR_CameraDeviceEnum : uint8 {
	CD_None
	CD_WebCamera0
	CD_WebCamera1
	CD_ZEDCamera
	CD_MAX
};

