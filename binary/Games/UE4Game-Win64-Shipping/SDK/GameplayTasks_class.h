// Class GameplayTasks.GameplayTask
// Size : 0x68 (Inherited : 0x28)
struct UGameplayTask : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
	struct FName InstanceName; // 0x30(0x8)
	unsigned char UnknownData_38[0x0002]; // 0x38(0x2)
	enum class ETaskResourceOverlapPolicy ResourceOverlapPolicy; // 0x3A(0x1)
	unsigned char UnknownData_3B[0x0025]; // 0x3B(0x25)
	struct UGameplayTask* ChildTask; // 0x60(0x8)

	void ReadyForActivation(); // Function GameplayTasks.GameplayTask.ReadyForActivation // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF776A67240
	void GenericGameplayTaskDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask.GenericGameplayTaskDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // Param Size : 0x0, 0x7FF77510D9D0
	void EndTask(); // Function GameplayTasks.GameplayTask.EndTask // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF776A66EF0
};

// Class GameplayTasks.GameplayTask_ClaimResource
// Size : 0x68 (Inherited : 0x68)
struct UGameplayTask_ClaimResource : UGameplayTask {

	struct UGameplayTask_ClaimResource* ClaimResources(struct TScriptInterface<None> InTaskOwner, struct TArray<class UGameplayTaskResource*> ResourceClasses, enum class None Priority, struct FName TaskInstanceName); // Function GameplayTasks.GameplayTask_ClaimResource.ClaimResources // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x38, 0x7FF776A66D50
	struct UGameplayTask_ClaimResource* ClaimResource(struct TScriptInterface<None> InTaskOwner, class UGameplayTaskResource* ResourceClass, enum class None Priority, struct FName TaskInstanceName); // Function GameplayTasks.GameplayTask_ClaimResource.ClaimResource // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x30, 0x7FF776A66C00
};

// Class GameplayTasks.GameplayTask_SpawnActor
// Size : 0xA8 (Inherited : 0x68)
struct UGameplayTask_SpawnActor : UGameplayTask {
	struct FMulticastInlineDelegate Success; // 0x68(0x10)
	struct FMulticastInlineDelegate DidNotSpawn; // 0x78(0x10)
	unsigned char UnknownData_88[0x0018]; // 0x88(0x18)
	class AActor* ClassToSpawn; // 0xA0(0x8)

	struct UGameplayTask_SpawnActor* SpawnActor(struct TScriptInterface<None> TaskOwner, struct FVector SpawnLocation, struct FRotator SpawnRotation, class AActor* Class, bool bSpawnOnlyOnAuthority); // Function GameplayTasks.GameplayTask_SpawnActor.SpawnActor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x40, 0x7FF776A67260
	void FinishSpawningActor(struct UObject* WorldContextObject, struct AActor* SpawnedActor); // Function GameplayTasks.GameplayTask_SpawnActor.FinishSpawningActor // (Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF776A66F10
	bool BeginSpawningActor(struct UObject* WorldContextObject, struct AActor* SpawnedActor); // Function GameplayTasks.GameplayTask_SpawnActor.BeginSpawningActor // (Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x11, 0x7FF776A66B20
};

// Class GameplayTasks.GameplayTask_TimeLimitedExecution
// Size : 0x98 (Inherited : 0x68)
struct UGameplayTask_TimeLimitedExecution : UGameplayTask {
	struct FMulticastInlineDelegate OnFinished; // 0x68(0x10)
	struct FMulticastInlineDelegate OnTimeExpired; // 0x78(0x10)
	unsigned char UnknownData_88[0x0010]; // 0x88(0x10)
};

// Class GameplayTasks.GameplayTask_WaitDelay
// Size : 0x80 (Inherited : 0x68)
struct UGameplayTask_WaitDelay : UGameplayTask {
	struct FMulticastInlineDelegate OnFinish; // 0x68(0x10)
	unsigned char UnknownData_78[0x0008]; // 0x78(0x8)

	struct UGameplayTask_WaitDelay* TaskWaitDelay(struct TScriptInterface<None> TaskOwner, float Time, enum class None Priority); // Function GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF776A67410
	void TaskDelayDelegate__DelegateSignature(); // DelegateFunction GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // Param Size : 0x0, 0x7FF77510D9D0
};

// Class GameplayTasks.GameplayTaskOwnerInterface
// Size : 0x28 (Inherited : 0x28)
struct UGameplayTaskOwnerInterface : UInterface {
};

// Class GameplayTasks.GameplayTaskResource
// Size : 0x38 (Inherited : 0x28)
struct UGameplayTaskResource : UObject {
	int32_t ManualResourceID; // 0x28(0x4)
	int8_t AutoResourceID; // 0x2C(0x1)
	unsigned char UnknownData_2D[0x0003]; // 0x2D(0x3)
	unsigned char bManuallySetID : 1; // 0x30(0x1)
	unsigned char UnknownData_30_1 : 7; // 0x30(0x1)
	unsigned char UnknownData_31[0x0007]; // 0x31(0x7)
};

// Class GameplayTasks.GameplayTasksComponent
// Size : 0x120 (Inherited : 0xB0)
struct UGameplayTasksComponent : UActorComponent {
	unsigned char UnknownData_B0[0x000C]; // 0xB0(0xC)
	unsigned char UnknownData_BC_0 : 1; // 0xBC(0x1)
	unsigned char bIsNetDirty : 1; // 0xBC(0x1)
	unsigned char UnknownData_BC_2 : 6; // 0xBC(0x1)
	unsigned char UnknownData_BD[0x0003]; // 0xBD(0x3)
	struct TArray<struct UGameplayTask*> SimulatedTasks; // 0xC0(0x10)
	struct TArray<struct UGameplayTask*> TaskPriorityQueue; // 0xD0(0x10)
	unsigned char UnknownData_E0[0x0010]; // 0xE0(0x10)
	struct TArray<struct UGameplayTask*> TickingTasks; // 0xF0(0x10)
	struct TArray<struct UGameplayTask*> KnownTasks; // 0x100(0x10)
	struct FMulticastInlineDelegate OnClaimedResourcesChange; // 0x110(0x10)

	void OnRep_SimulatedTasks(); // Function GameplayTasks.GameplayTasksComponent.OnRep_SimulatedTasks // (Final|Native|Public) // Param Size : 0x0, 0x7FF776A67220
	enum class EGameplayTaskRunResult K2_RunGameplayTask(struct TScriptInterface<None> TaskOwner, struct UGameplayTask* Task, enum class None Priority, struct TArray<class UGameplayTaskResource*> AdditionalRequiredResources, struct TArray<class UGameplayTaskResource*> AdditionalClaimedResources); // Function GameplayTasks.GameplayTasksComponent.K2_RunGameplayTask // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x41, 0x7FF776A66FE0
};

