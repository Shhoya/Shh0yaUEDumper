// Class ArchVisCharacter.ArchVisCharacter
// Size : 0x520 (Inherited : 0x4C0)
struct AArchVisCharacter : ACharacter {
	struct FString LookUpAxisName; // 0x4B8(0x10)
	struct FString LookUpAtRateAxisName; // 0x4C8(0x10)
	struct FString TurnAxisName; // 0x4D8(0x10)
	struct FString TurnAtRateAxisName; // 0x4E8(0x10)
	struct FString MoveForwardAxisName; // 0x4F8(0x10)
	struct FString MoveRightAxisName; // 0x508(0x10)
	float MouseSensitivityScale_Pitch; // 0x518(0x4)
	float MouseSensitivityScale_Yaw; // 0x51C(0x4)
};

// Class ArchVisCharacter.ArchVisCharMovementComponent
// Size : 0x660 (Inherited : 0x610)
struct UArchVisCharMovementComponent : UCharacterMovementComponent {
	struct FRotator RotationalAcceleration; // 0x610(0xC)
	struct FRotator RotationalDeceleration; // 0x61C(0xC)
	struct FRotator MaxRotationalVelocity; // 0x628(0xC)
	float MinPitch; // 0x634(0x4)
	float MaxPitch; // 0x638(0x4)
	float WalkingFriction; // 0x63C(0x4)
	float WalkingSpeed; // 0x640(0x4)
	float WalkingAcceleration; // 0x644(0x4)
	unsigned char UnknownData_648[0x0018]; // 0x648(0x18)
};

