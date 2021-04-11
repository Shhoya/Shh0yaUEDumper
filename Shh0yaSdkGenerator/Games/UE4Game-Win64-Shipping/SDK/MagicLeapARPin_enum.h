// Enum MagicLeapARPin.EMagicLeapAutoPinType
enum class FEMagicLeapAutoPinType : uint8 {
	OnlyOnDataRestoration
	Always
	Never
	EMagicLeapAutoPinType_MAX
};

// Enum MagicLeapARPin.EMagicLeapPassableWorldError
enum class FEMagicLeapPassableWorldError : uint8 {
	None
	LowMapQuality
	UnableToLocalize
	Unavailable
	PrivilegeDenied
	InvalidParam
	UnspecifiedFailure
	PrivilegeRequestPending
	StartupPending
	NotImplemented
	PinNotFound
	EMagicLeapPassableWorldError_MAX
};

