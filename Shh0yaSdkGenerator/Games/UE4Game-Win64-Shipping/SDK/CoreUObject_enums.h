// Enum CoreUObject.EInterpCurveMode
enum class FEInterpCurveMode : uint8 {
	CIM_Linear
	CIM_CurveAuto
	CIM_Constant
	CIM_CurveUser
	CIM_CurveBreak
	CIM_CurveAutoClamped
	CIM_MAX
};

// Enum CoreUObject.ERangeBoundTypes
enum class FERangeBoundTypes : uint8 {
	Exclusive
	Inclusive
	Open
	ERangeBoundTypes_MAX
};

// Enum CoreUObject.ELocalizedTextSourceCategory
enum class FELocalizedTextSourceCategory : uint8 {
	Game
	Engine
	Editor
	ELocalizedTextSourceCategory_MAX
};

// Enum CoreUObject.EAutomationEventType
enum class FEAutomationEventType : uint8 {
	Info
	Warning
	Error
	EAutomationEventType_MAX
};

// Enum CoreUObject.ELifetimeCondition
enum class FELifetimeCondition : uint8 {
	COND_None
	COND_InitialOnly
	COND_OwnerOnly
	COND_SkipOwner
	COND_SimulatedOnly
	COND_AutonomousOnly
	COND_SimulatedOrPhysics
	COND_InitialOrOwner
	COND_Custom
	COND_ReplayOrOwner
	COND_ReplayOnly
	COND_SimulatedOnlyNoReplay
	COND_SimulatedOrPhysicsNoReplay
	COND_SkipReplay
	COND_Never
	COND_Max
};

// Enum CoreUObject.EDataValidationResult
enum class FEDataValidationResult : uint8 {
	Invalid
	Valid
	NotValidated
	EDataValidationResult_MAX
};

// Enum CoreUObject.EAppMsgType
enum class FEAppMsgType : uint8 {
	Ok
	YesNo
	OkCancel
	YesNoCancel
	CancelRetryContinue
	YesNoYesAllNoAll
	YesNoYesAllNoAllCancel
	YesNoYesAll
	EAppMsgType_MAX
};

// Enum CoreUObject.EAppReturnType
enum class FEAppReturnType : uint8 {
	No
	Yes
	YesAll
	NoAll
	Cancel
	Ok
	Retry
	Continue
	EAppReturnType_MAX
};

// Enum CoreUObject.EPropertyAccessChangeNotifyMode
enum class FEPropertyAccessChangeNotifyMode : uint8 {
	Default
	Never
	Always
	EPropertyAccessChangeNotifyMode_MAX
};

// Enum CoreUObject.EUnit
enum class FEUnit : uint8 {
	Micrometers
	Millimeters
	Centimeters
	Meters
	Kilometers
	Inches
	Feet
	Yards
	Miles
	Lightyears
	Degrees
	Radians
	MetersPerSecond
	KilometersPerHour
	MilesPerHour
	Celsius
	Farenheit
	Kelvin
	Micrograms
	Milligrams
	Grams
	Kilograms
	MetricTons
	Ounces
	Pounds
	Stones
	Newtons
	PoundsForce
	KilogramsForce
	Hertz
	Kilohertz
	Megahertz
	Gigahertz
	RevolutionsPerMinute
	Bytes
	Kilobytes
	Megabytes
	Gigabytes
	Terabytes
	Lumens
	Milliseconds
	Seconds
	Minutes
	Hours
	Days
	Months
	Years
	Multiplier
	Percentage
	Unspecified
	EUnit_MAX
};

// Enum CoreUObject.EMouseCursor
enum class FEMouseCursor : uint8 {
	None
	Default
	TextEditBeam
	ResizeLeftRight
	ResizeUpDown
	ResizeSouthEast
	ResizeSouthWest
	CardinalCross
	Crosshairs
	Hand
	GrabHand
	GrabHandClosed
	SlashedCircle
	EyeDropper
	EMouseCursor_MAX
};

// Enum CoreUObject.EPixelFormat
enum class FEPixelFormat : uint8 {
	PF_Unknown
	PF_A32B32G32R32F
	PF_B8G8R8A8
	PF_G8
	PF_G16
	PF_DXT1
	PF_DXT3
	PF_DXT5
	PF_UYVY
	PF_FloatRGB
	PF_FloatRGBA
	PF_DepthStencil
	PF_ShadowDepth
	PF_R32_FLOAT
	PF_G16R16
	PF_G16R16F
	PF_G16R16F_FILTER
	PF_G32R32F
	PF_A2B10G10R10
	PF_A16B16G16R16
	PF_D24
	PF_R16F
	PF_R16F_FILTER
	PF_BC5
	PF_V8U8
	PF_A1
	PF_FloatR11G11B10
	PF_A8
	PF_R32_UINT
	PF_R32_SINT
	PF_PVRTC2
	PF_PVRTC4
	PF_R16_UINT
	PF_R16_SINT
	PF_R16G16B16A16_UINT
	PF_R16G16B16A16_SINT
	PF_R5G6B5_UNORM
	PF_R8G8B8A8
	PF_A8R8G8B8
	PF_BC4
	PF_R8G8
	PF_ATC_RGB
	PF_ATC_RGBA_E
	PF_ATC_RGBA_I
	PF_X24_G8
	PF_ETC1
	PF_ETC2_RGB
	PF_ETC2_RGBA
	PF_R32G32B32A32_UINT
	PF_R16G16_UINT
	PF_ASTC_4x4
	PF_ASTC_6x6
	PF_ASTC_8x8
	PF_ASTC_10x10
	PF_ASTC_12x12
	PF_BC6H
	PF_BC7
	PF_R8_UINT
	PF_L8
	PF_XGXR8
	PF_R8G8B8A8_UINT
	PF_R8G8B8A8_SNORM
	PF_R16G16B16A16_UNORM
	PF_R16G16B16A16_SNORM
	PF_PLATFORM_HDR_1
	PF_PLATFORM_HDR_2
	PF_PLATFORM_HDR_3
	PF_NV12
	PF_R32G32_UINT
	PF_ETC2_R11_EAC
	PF_ETC2_RG11_EAC
	PF_MAX
};

// Enum CoreUObject.EAxis
enum class FEAxis : uint8 {
	None
	X
	Y
	Z
	EAxis_MAX
};

// Enum CoreUObject.ELogTimes
enum class FELogTimes : uint8 {
	None
	UTC
	SinceGStartTime
	Local
	ELogTimes_MAX
};

// Enum CoreUObject.ESearchDir
enum class FESearchDir : uint8 {
	FromStart
	FromEnd
	ESearchDir_MAX
};

// Enum CoreUObject.ESearchCase
enum class FESearchCase : uint8 {
	CaseSensitive
	IgnoreCase
	ESearchCase_MAX
};

