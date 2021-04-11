// Enum TimeManagement.EFrameNumberDisplayFormats
enum class FEFrameNumberDisplayFormats : uint8 {
	NonDropFrameTimecode
	DropFrameTimecode
	Seconds
	Frames
	MAX_Count
	EFrameNumberDisplayFormats_MAX
};

// Enum TimeManagement.ETimedDataInputState
enum class FETimedDataInputState : uint8 {
	Connected
	Unresponsive
	Disconnected
	ETimedDataInputState_MAX
};

// Enum TimeManagement.ETimedDataInputEvaluationType
enum class FETimedDataInputEvaluationType : uint8 {
	None
	Timecode
	PlatformTime
	ETimedDataInputEvaluationType_MAX
};

