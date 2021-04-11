// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
// Size : 0x90 (Inherited : 0x38)
struct UAnimNotify_PlayNiagaraEffect : UAnimNotify {
	struct UNiagaraSystem* Template; // 0x38(0x8)
	struct FVector LocationOffset; // 0x40(0xC)
	struct FRotator RotationOffset; // 0x4C(0xC)
	struct FVector Scale; // 0x58(0xC)
	unsigned char UnknownData_64[0x001C]; // 0x64(0x1C)
	unsigned char Attached : 1; // 0x80(0x1)
	unsigned char UnknownData_80_1 : 7; // 0x80(0x1)
	unsigned char UnknownData_81[0x0003]; // 0x81(0x3)
	struct FName SocketName; // 0x84(0x8)
	unsigned char UnknownData_8C[0x0004]; // 0x8C(0x4)

	struct UFXSystemComponent* GetSpawnedEffect(); // Function NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect.GetSpawnedEffect // (Final|Native|Public|BlueprintCallable|Const) // Param Size : 0x8, 0x7FF77498AC10
};

// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
// Size : 0x60 (Inherited : 0x30)
struct UAnimNotifyState_TimedNiagaraEffect : UAnimNotifyState {
	struct UNiagaraSystem* Template; // 0x30(0x8)
	struct FName SocketName; // 0x38(0x8)
	struct FVector LocationOffset; // 0x40(0xC)
	struct FRotator RotationOffset; // 0x4C(0xC)
	bool bDestroyAtEnd; // 0x58(0x1)
	unsigned char UnknownData_59[0x0007]; // 0x59(0x7)
};

