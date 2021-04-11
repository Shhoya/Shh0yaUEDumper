// ScriptStruct MagicLeapController.MagicLeapTouchpadGesture
// Size : 0x30 (Inherited : 0x0)
struct FMagicLeapTouchpadGesture {
	enum class EControllerHand hand; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	struct FName MotionSource; // 0x4(0x8)
	enum class EMagicLeapTouchpadGestureType Type; // 0xC(0x1)
	enum class EMagicLeapTouchpadGestureDirection Direction; // 0xD(0x1)
	unsigned char UnknownData_E[0x0002]; // 0xE(0x2)
	struct FVector PositionAndForce; // 0x10(0xC)
	float Speed; // 0x1C(0x4)
	float Distance; // 0x20(0x4)
	float FingerGap; // 0x24(0x4)
	float Radius; // 0x28(0x4)
	float Angle; // 0x2C(0x4)
};

