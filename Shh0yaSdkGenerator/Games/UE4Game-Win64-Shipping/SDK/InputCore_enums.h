// Enum InputCore.ETouchIndex
enum class FETouchIndex : uint8 {
	Touch1
	Touch2
	Touch3
	Touch4
	Touch5
	Touch6
	Touch7
	Touch8
	Touch9
	Touch10
	CursorPointerIndex
	MAX_TOUCHES
	ETouchIndex_MAX
};

// Enum InputCore.EControllerHand
enum class FEControllerHand : uint8 {
	Left
	Right
	AnyHand
	Pad
	ExternalCamera
	Gun
	Special_2
	Special_3
	Special_4
	Special_5
	Special_6
	Special_7
	Special_8
	Special_9
	Special_10
	Special_11
	Special_12
	ControllerHand_Count
	EControllerHand_MAX
};

// Enum InputCore.ETouchType
enum class FETouchType : uint8 {
	Began
	Moved
	Stationary
	ForceChanged
	FirstMove
	Ended
	NumTypes
	ETouchType_MAX
};

// Enum InputCore.EConsoleForGamepadLabels
enum class FEConsoleForGamepadLabels : uint8 {
	None
	XBoxOne
	PS4
	EConsoleForGamepadLabels_MAX
};

