// Class CableComponent.CableActor
// Size : 0x228 (Inherited : 0x220)
struct ACableActor : AActor {
	struct UCableComponent* CableComponent; // 0x220(0x8)
};

// Class CableComponent.CableComponent
// Size : 0x4C0 (Inherited : 0x430)
struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0x430(0x1)
	bool bAttachEnd; // 0x431(0x1)
	unsigned char UnknownData_432[0x0006]; // 0x432(0x6)
	struct FComponentReference AttachEndTo; // 0x438(0x28)
	struct FName AttachEndToSocketName; // 0x460(0x8)
	struct FVector EndLocation; // 0x468(0xC)
	float CableLength; // 0x474(0x4)
	int32_t NumSegments; // 0x478(0x4)
	float SubstepTime; // 0x47C(0x4)
	int32_t SolverIterations; // 0x480(0x4)
	bool bEnableStiffness; // 0x484(0x1)
	bool bEnableCollision; // 0x485(0x1)
	unsigned char UnknownData_486[0x0002]; // 0x486(0x2)
	float CollisionFriction; // 0x488(0x4)
	struct FVector CableForce; // 0x48C(0xC)
	float CableGravityScale; // 0x498(0x4)
	float CableWidth; // 0x49C(0x4)
	int32_t NumSides; // 0x4A0(0x4)
	float TileMaterial; // 0x4A4(0x4)
	unsigned char UnknownData_4A8[0x0018]; // 0x4A8(0x18)

	void SetAttachEndToComponent(struct USceneComponent* Component, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndToComponent // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF774D38D90
	void SetAttachEndTo(struct AActor* Actor, struct FName ComponentProperty, struct FName SocketName); // Function CableComponent.CableComponent.SetAttachEndTo // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF774D38C90
	void GetCableParticleLocations(struct TArray<struct FVector> Locations); // Function CableComponent.CableComponent.GetCableParticleLocations // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF774D38BE0
	struct USceneComponent* GetAttachedComponent(); // Function CableComponent.CableComponent.GetAttachedComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF774D38BB0
	struct AActor* GetAttachedActor(); // Function CableComponent.CableComponent.GetAttachedActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF774D38B80
};

