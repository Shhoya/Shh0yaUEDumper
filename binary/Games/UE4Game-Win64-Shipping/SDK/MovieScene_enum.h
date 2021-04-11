// Enum MovieScene.EMovieSceneKeyInterpolation
enum class FEMovieSceneKeyInterpolation : uint8 {
	Auto
	User
	Break
	Linear
	Constant
	EMovieSceneKeyInterpolation_MAX
};

// Enum MovieScene.EMovieSceneBlendType
enum class FEMovieSceneBlendType : uint8 {
	Invalid
	Absolute
	Additive
	Relative
	EMovieSceneBlendType_MAX
};

// Enum MovieScene.EMovieSceneBuiltInEasing
enum class FEMovieSceneBuiltInEasing : uint8 {
	Linear
	SinIn
	SinOut
	SinInOut
	QuadIn
	QuadOut
	QuadInOut
	CubicIn
	CubicOut
	CubicInOut
	QuartIn
	QuartOut
	QuartInOut
	QuintIn
	QuintOut
	QuintInOut
	ExpoIn
	ExpoOut
	ExpoInOut
	CircIn
	CircOut
	CircInOut
	EMovieSceneBuiltInEasing_MAX
};

// Enum MovieScene.EEvaluationMethod
enum class FEEvaluationMethod : uint8 {
	Static
	Swept
	EEvaluationMethod_MAX
};

// Enum MovieScene.EUpdateClockSource
enum class FEUpdateClockSource : uint8 {
	Tick
	Platform
	Audio
	RelativeTimecode
	Timecode
	Custom
	EUpdateClockSource_MAX
};

// Enum MovieScene.EMovieSceneEvaluationType
enum class FEMovieSceneEvaluationType : uint8 {
	FrameLocked
	WithSubFrames
	EMovieSceneEvaluationType_MAX
};

// Enum MovieScene.EMovieScenePlayerStatus
enum class FEMovieScenePlayerStatus : uint8 {
	Stopped
	Playing
	Recording
	Scrubbing
	Jumping
	Stepping
	Paused
	MAX
};

// Enum MovieScene.EMovieSceneObjectBindingSpace
enum class FEMovieSceneObjectBindingSpace : uint8 {
	Local
	Root
	EMovieSceneObjectBindingSpace_MAX
};

// Enum MovieScene.EMovieSceneCompletionMode
enum class FEMovieSceneCompletionMode : uint8 {
	KeepState
	RestoreState
	ProjectDefault
	EMovieSceneCompletionMode_MAX
};

// Enum MovieScene.ESectionEvaluationFlags
enum class FESectionEvaluationFlags : uint8 {
	None
	PreRoll
	PostRoll
	ESectionEvaluationFlags_MAX
};

// Enum MovieScene.EUpdatePositionMethod
enum class FEUpdatePositionMethod : uint8 {
	Play
	Jump
	Scrub
	EUpdatePositionMethod_MAX
};

// Enum MovieScene.ESpawnOwnership
enum class FESpawnOwnership : uint8 {
	InnerSequence
	MasterSequence
	External
	ESpawnOwnership_MAX
};

