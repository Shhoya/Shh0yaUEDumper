// Enum MagicLeapController.EMagicLeapTouchpadGestureDirection
enum class FEMagicLeapTouchpadGestureDirection : uint8 {
	None
	Up
	Down
	Left
	Right
	In
	Out
	Clockwise
	CounterClockwise
	EMagicLeapTouchpadGestureDirection_MAX
};

// Enum MagicLeapController.EMagicLeapTouchpadGestureType
enum class FEMagicLeapTouchpadGestureType : uint8 {
	None
	Tap
	ForceTapDown
	ForceTapUp
	ForceDwell
	SecondForceDown
	LongHold
	RadialScroll
	Swipe
	Scroll
	Pinch
	EMagicLeapTouchpadGestureType_MAX
};

// Enum MagicLeapController.EMagicLeapControllerTrackingMode
enum class FEMagicLeapControllerTrackingMode : uint8 {
	InputService
	CoordinateFrameUID
	EMagicLeapControllerTrackingMode_MAX
};

// Enum MagicLeapController.EMagicLeapControllerHapticIntensity
enum class FEMagicLeapControllerHapticIntensity : uint8 {
	Low
	Medium
	High
	EMagicLeapControllerHapticIntensity_MAX
};

// Enum MagicLeapController.EMagicLeapControllerHapticPattern
enum class FEMagicLeapControllerHapticPattern : uint8 {
	None
	Click
	Bump
	DoubleClick
	Buzz
	Tick
	ForceDown
	ForceUp
	ForceDwell
	SecondForceDown
	EMagicLeapControllerHapticPattern_MAX
};

// Enum MagicLeapController.EMagicLeapControllerLEDSpeed
enum class FEMagicLeapControllerLEDSpeed : uint8 {
	Slow
	Medium
	Fast
	EMagicLeapControllerLEDSpeed_MAX
};

// Enum MagicLeapController.EMagicLeapControllerLEDColor
enum class FEMagicLeapControllerLEDColor : uint8 {
	BrightMissionRed
	PastelMissionRed
	BrightFloridaOrange
	PastelFloridaOrange
	BrightLunaYellow
	PastelLunaYellow
	BrightNebulaPink
	PastelNebulaPink
	BrightCosmicPurple
	PastelCosmicPurple
	BrightMysticBlue
	PastelMysticBlue
	BrightCelestialBlue
	PastelCelestialBlue
	BrightShaggleGreen
	PastelShaggleGreen
	EMagicLeapControllerLEDColor_MAX
};

// Enum MagicLeapController.EMagicLeapControllerLEDEffect
enum class FEMagicLeapControllerLEDEffect : uint8 {
	RotateCW
	RotateCCW
	Pulse
	PaintCW
	PaintCCW
	Blink
	EMagicLeapControllerLEDEffect_MAX
};

// Enum MagicLeapController.EMagicLeapControllerLEDPattern
enum class FEMagicLeapControllerLEDPattern : uint8 {
	None
	Clock01
	Clock02
	Clock03
	Clock04
	Clock05
	Clock06
	Clock07
	Clock08
	Clock09
	Clock10
	Clock11
	Clock12
	Clock01_07
	Clock02_08
	Clock03_09
	Clock04_11
	Clock05_12
	Clock06_13
	EMagicLeapControllerLEDPattern_MAX
};

// Enum MagicLeapController.EMagicLeapControllerType
enum class FEMagicLeapControllerType : uint8 {
	None
	Device
	MobileApp
	EMagicLeapControllerType_MAX
};

