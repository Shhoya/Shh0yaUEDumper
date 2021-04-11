// ScriptStruct ChaosNiagara.ChaosDestructionEvent
// Size : 0x44 (Inherited : 0x0)
struct FChaosDestructionEvent {
	struct FVector Position; // 0x0(0xC)
	struct FVector Normal; // 0xC(0xC)
	struct FVector Velocity; // 0x18(0xC)
	struct FVector AngularVelocity; // 0x24(0xC)
	float ExtentMin; // 0x30(0x4)
	float ExtentMax; // 0x34(0x4)
	int32_t ParticleID; // 0x38(0x4)
	float Time; // 0x3C(0x4)
	int32_t Type; // 0x40(0x4)
};

