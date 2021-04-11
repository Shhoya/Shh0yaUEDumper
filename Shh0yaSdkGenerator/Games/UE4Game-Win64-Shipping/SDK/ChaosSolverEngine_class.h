// Class ChaosSolverEngine.ChaosDebugDrawComponent
// Size : 0xB8 (Inherited : 0xB0)
struct UChaosDebugDrawComponent : UActorComponent {
	unsigned char UnknownData_B0[0x0008]; // 0xB0(0x8)
};

// Class ChaosSolverEngine.ChaosEventListenerComponent
// Size : 0xB8 (Inherited : 0xB0)
struct UChaosEventListenerComponent : UActorComponent {
	unsigned char UnknownData_B0[0x0008]; // 0xB0(0x8)
};

// Class ChaosSolverEngine.ChaosGameplayEventDispatcher
// Size : 0x270 (Inherited : 0xB8)
struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent {
	unsigned char UnknownData_B8[0x0110]; // 0xB8(0x110)
	struct TMap<struct UPrimitiveComponent*, struct FChaosHandlerSet> CollisionEventRegistrations; // 0x1C8(0x50)
	struct TMap<struct UPrimitiveComponent*, struct FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x218(0x50)
	unsigned char UnknownData_268[0x0008]; // 0x268(0x8)
};

// Class ChaosSolverEngine.ChaosNotifyHandlerInterface
// Size : 0x28 (Inherited : 0x28)
struct UChaosNotifyHandlerInterface : UInterface {
};

// Class ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary
// Size : 0x28 (Inherited : 0x28)
struct UChaosSolverEngineBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FHitResult ConvertPhysicsCollisionToHitResult(struct FChaosPhysicsCollisionInfo PhysicsCollision); // Function ChaosSolverEngine.ChaosSolverEngineBlueprintLibrary.ConvertPhysicsCollisionToHitResult // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0xF8, 0x7FF776B09F20
};

// Class ChaosSolverEngine.ChaosSolver
// Size : 0x28 (Inherited : 0x28)
struct UChaosSolver : UObject {
};

// Class ChaosSolverEngine.ChaosSolverActor
// Size : 0x2A8 (Inherited : 0x220)
struct AChaosSolverActor : AActor {
	float TimeStepMultiplier; // 0x220(0x4)
	int32_t CollisionIterations; // 0x224(0x4)
	int32_t PushOutIterations; // 0x228(0x4)
	int32_t PushOutPairIterations; // 0x22C(0x4)
	float ClusterConnectionFactor; // 0x230(0x4)
	enum class EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x234(0x1)
	bool DoGenerateCollisionData; // 0x235(0x1)
	unsigned char UnknownData_236[0x0002]; // 0x236(0x2)
	struct FSolverCollisionFilterSettings CollisionFilterSettings; // 0x238(0x10)
	bool DoGenerateBreakingData; // 0x248(0x1)
	unsigned char UnknownData_249[0x0003]; // 0x249(0x3)
	struct FSolverBreakingFilterSettings BreakingFilterSettings; // 0x24C(0x10)
	bool DoGenerateTrailingData; // 0x25C(0x1)
	unsigned char UnknownData_25D[0x0003]; // 0x25D(0x3)
	struct FSolverTrailingFilterSettings TrailingFilterSettings; // 0x260(0x10)
	bool bHasFloor; // 0x270(0x1)
	unsigned char UnknownData_271[0x0003]; // 0x271(0x3)
	float FloorHeight; // 0x274(0x4)
	float MassScale; // 0x278(0x4)
	bool bGenerateContactGraph; // 0x27C(0x1)
	struct FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x27D(0x3)
	struct UBillboardComponent* SpriteComponent; // 0x280(0x8)
	unsigned char UnknownData_288[0x0018]; // 0x288(0x18)
	struct UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x2A0(0x8)

	void SetSolverActive(bool bActive); // Function ChaosSolverEngine.ChaosSolverActor.SetSolverActive // (Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF776B0A030
	void SetAsCurrentWorldSolver(); // Function ChaosSolverEngine.ChaosSolverActor.SetAsCurrentWorldSolver // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF776B0A010
};

// Class ChaosSolverEngine.ChaosSolverSettings
// Size : 0x58 (Inherited : 0x38)
struct UChaosSolverSettings : UDeveloperSettings {
	unsigned char UnknownData_38[0x0008]; // 0x38(0x8)
	struct FSoftClassPath DefaultChaosSolverActorClass; // 0x40(0x18)
};

