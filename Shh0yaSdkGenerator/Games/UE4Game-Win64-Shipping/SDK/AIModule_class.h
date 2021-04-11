// Class AIModule.AIAsyncTaskBlueprintProxy
// Size : 0x68 (Inherited : 0x28)
struct UAIAsyncTaskBlueprintProxy : UObject {
	struct FMulticastInlineDelegate OnSuccess; // 0x28(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x38(0x10)
	unsigned char UnknownData_48[0x0020]; // 0x48(0x20)

	void OnMoveCompleted(struct FAIRequestID RequestID, enum class EPathFollowingResult MovementResult); // Function AIModule.AIAsyncTaskBlueprintProxy.OnMoveCompleted // (Final|Native|Public) // Param Size : 0x5, 0x7FF776AEDB40
};

// Class AIModule.AIBlueprintHelperLibrary
// Size : 0x28 (Inherited : 0x28)
struct UAIBlueprintHelperLibrary : UBlueprintFunctionLibrary {

	void UnlockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bUnlockMovement, bool UnlockAILogic); // Function AIModule.AIBlueprintHelperLibrary.UnlockAIResourcesWithAnimation // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // Param Size : 0xA, 0x7FF776AEE810
	struct APawn* SpawnAIFromClass(struct UObject* WorldContextObject, class APawn* PawnClass, struct UBehaviorTree* BehaviorTree, struct FVector Location, struct FRotator Rotation, bool bNoCollisionFail, struct AActor* Owner); // Function AIModule.AIBlueprintHelperLibrary.SpawnAIFromClass // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x48, 0x7FF776AEE580
	void SimpleMoveToLocation(struct AController* Controller, struct FVector Goal); // Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x14, 0x7FF776AEE4C0
	void SimpleMoveToActor(struct AController* Controller, struct AActor* Goal); // Function AIModule.AIBlueprintHelperLibrary.SimpleMoveToActor // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF776AEE410
	void SendAIMessage(struct APawn* Target, struct FName Message, struct UObject* MessageSource, bool bSuccess); // Function AIModule.AIBlueprintHelperLibrary.SendAIMessage // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x19, 0x7FF776AEE100
	void LockAIResourcesWithAnimation(struct UAnimInstance* AnimInstance, bool bLockMovement, bool LockAILogic); // Function AIModule.AIBlueprintHelperLibrary.LockAIResourcesWithAnimation // (Final|BlueprintAuthorityOnly|Native|Static|Public|BlueprintCallable) // Param Size : 0xA, 0x7FF776AED4D0
	bool IsValidAIRotation(struct FRotator Rotation); // Function AIModule.AIBlueprintHelperLibrary.IsValidAIRotation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0xD, 0x7FF776AED310
	bool IsValidAILocation(struct FVector Location); // Function AIModule.AIBlueprintHelperLibrary.IsValidAILocation // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0xD, 0x7FF776AED280
	bool IsValidAIDirection(struct FVector DirectionVector); // Function AIModule.AIBlueprintHelperLibrary.IsValidAIDirection // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0xD, 0x7FF776AED1F0
	struct UNavigationPath* GetCurrentPath(struct AController* Controller); // Function AIModule.AIBlueprintHelperLibrary.GetCurrentPath // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF776AECAE0
	struct UBlackboardComponent* GetBlackboard(struct AActor* Target); // Function AIModule.AIBlueprintHelperLibrary.GetBlackboard // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF776AECA60
	struct AAIController* GetAIController(struct AActor* ControlledActor); // Function AIModule.AIBlueprintHelperLibrary.GetAIController // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF776AEC8C0
	struct UAIAsyncTaskBlueprintProxy* CreateMoveToProxyObject(struct UObject* WorldContextObject, struct APawn* Pawn, struct FVector Destination, struct AActor* TargetActor, float AcceptanceRadius, bool bStopOnOverlap); // Function AIModule.AIBlueprintHelperLibrary.CreateMoveToProxyObject // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x38, 0x7FF776AEC6E0
};

// Class AIModule.AIController
// Size : 0x328 (Inherited : 0x298)
struct AAIController : AController {
	unsigned char UnknownData_298[0x0038]; // 0x298(0x38)
	unsigned char bStartAILogicOnPossess : 1; // 0x2D0(0x1)
	unsigned char bStopAILogicOnUnposses : 1; // 0x2D0(0x1)
	unsigned char bLOSflag : 1; // 0x2D0(0x1)
	unsigned char bSkipExtraLOSChecks : 1; // 0x2D0(0x1)
	unsigned char bAllowStrafe : 1; // 0x2D0(0x1)
	unsigned char bWantsPlayerState : 1; // 0x2D0(0x1)
	unsigned char bSetControlRotationFromPawnOrientation : 1; // 0x2D0(0x1)
	unsigned char UnknownData_2D1[0x0007]; // 0x2D1(0x7)
	struct UPathFollowingComponent* PathFollowingComponent; // 0x2D8(0x8)
	struct UBrainComponent* BrainComponent; // 0x2E0(0x8)
	struct UAIPerceptionComponent* PerceptionComponent; // 0x2E8(0x8)
	struct UPawnActionsComponent* ActionsComp; // 0x2F0(0x8)
	struct UBlackboardComponent* Blackboard; // 0x2F8(0x8)
	struct UGameplayTasksComponent* CachedGameplayTasksComponent; // 0x300(0x8)
	class UNavigationQueryFilter* DefaultNavigationFilterClass; // 0x308(0x8)
	struct FMulticastInlineDelegate ReceiveMoveCompleted; // 0x310(0x10)
	unsigned char UnknownData_320[0x0008]; // 0x320(0x8)

	bool UseBlackboard(struct UBlackboardData* BlackboardAsset, struct UBlackboardComponent* BlackboardComponent); // Function AIModule.AIController.UseBlackboard // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x11, 0x7FF776AEE9C0
	void UnclaimTaskResource(class UGameplayTaskResource* ResourceClass); // Function AIModule.AIController.UnclaimTaskResource // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF776AEE790
	void SetPathFollowingComponent(struct UPathFollowingComponent* NewPFComponent); // Function AIModule.AIController.SetPathFollowingComponent // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF776AEE2C0
	void SetMoveBlockDetection(bool bEnable); // Function AIModule.AIController.SetMoveBlockDetection // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF776AEE230
	bool RunBehaviorTree(struct UBehaviorTree* BTAsset); // Function AIModule.AIController.RunBehaviorTree // (Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF776AEE060
	void OnUsingBlackBoard(struct UBlackboardComponent* BlackboardComp, struct UBlackboardData* BlackboardAsset); // Function AIModule.AIController.OnUsingBlackBoard // (Event|Protected|BlueprintEvent) // Param Size : 0x10, 0x7FF77510D9D0
	void OnGameplayTaskResourcesClaimed(struct FGameplayResourceSet NewlyClaimed, struct FGameplayResourceSet FreshlyReleased); // Function AIModule.AIController.OnGameplayTaskResourcesClaimed // (Native|Public) // Param Size : 0x4, 0x7FF776AEDA70
	enum class EPathFollowingRequestResult MoveToLocation(struct FVector Dest, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bProjectDestinationToNavigation, bool bCanStrafe, class UNavigationQueryFilter* FilterClass, bool bAllowPartialPath); // Function AIModule.AIController.MoveToLocation // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x22, 0x7FF776AED800
	enum class EPathFollowingRequestResult MoveToActor(struct AActor* Goal, float AcceptanceRadius, bool bStopOnOverlap, bool bUsePathfinding, bool bCanStrafe, class UNavigationQueryFilter* FilterClass, bool bAllowPartialPath); // Function AIModule.AIController.MoveToActor // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1A, 0x7FF776AED5E0
	void K2_SetFocus(struct AActor* NewFocus); // Function AIModule.AIController.K2_SetFocus // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF776AED450
	void K2_SetFocalPoint(struct FVector FP); // Function AIModule.AIController.K2_SetFocalPoint // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0xC, 0x7FF776AED3C0
	void K2_ClearFocus(); // Function AIModule.AIController.K2_ClearFocus // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF776AED3A0
	bool HasPartialPath(); // Function AIModule.AIController.HasPartialPath // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF776AED1C0
	struct UPathFollowingComponent* GetPathFollowingComponent(); // Function AIModule.AIController.GetPathFollowingComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF776AECED0
	enum class EPathFollowingStatus GetMoveStatus(); // Function AIModule.AIController.GetMoveStatus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF776AECEA0
	struct FVector GetImmediateMoveDestination(); // Function AIModule.AIController.GetImmediateMoveDestination // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0xC, 0x7FF776AECD70
	struct AActor* GetFocusActor(); // Function AIModule.AIController.GetFocusActor // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF776AECD40
	struct FVector GetFocalPointOnActor(struct AActor* Actor); // Function AIModule.AIController.GetFocalPointOnActor // (Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x14, 0x7FF776AECC90
	struct FVector GetFocalPoint(); // Function AIModule.AIController.GetFocalPoint // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0xC, 0x7FF776AECC50
	struct UAIPerceptionComponent* GetAIPerceptionComponent(); // Function AIModule.AIController.GetAIPerceptionComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x8, 0x7FF776AEC940
	void ClaimTaskResource(class UGameplayTaskResource* ResourceClass); // Function AIModule.AIController.ClaimTaskResource // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF776AEC660
};

// Class AIModule.AIDataProvider
// Size : 0x28 (Inherited : 0x28)
struct UAIDataProvider : UObject {
};

// Class AIModule.AIDataProvider_QueryParams
// Size : 0x40 (Inherited : 0x28)
struct UAIDataProvider_QueryParams : UAIDataProvider {
	struct FName ParamName; // 0x28(0x8)
	float FloatValue; // 0x30(0x4)
	int32_t IntValue; // 0x34(0x4)
	bool BoolValue; // 0x38(0x1)
	unsigned char UnknownData_39[0x0007]; // 0x39(0x7)
};

// Class AIModule.AIDataProvider_Random
// Size : 0x50 (Inherited : 0x40)
struct UAIDataProvider_Random : UAIDataProvider_QueryParams {
	float Min; // 0x40(0x4)
	float Max; // 0x44(0x4)
	unsigned char bInteger : 1; // 0x48(0x1)
	unsigned char UnknownData_48_1 : 7; // 0x48(0x1)
	unsigned char UnknownData_49[0x0007]; // 0x49(0x7)
};

// Class AIModule.AIHotSpotManager
// Size : 0x28 (Inherited : 0x28)
struct UAIHotSpotManager : UObject {
};

// Class AIModule.AIPerceptionComponent
// Size : 0x180 (Inherited : 0xB0)
struct UAIPerceptionComponent : UActorComponent {
	struct TArray<struct UAISenseConfig*> SensesConfig; // 0xB0(0x10)
	class UAISense* DominantSense; // 0xC0(0x8)
	unsigned char UnknownData_C8[0x0010]; // 0xC8(0x10)
	struct AAIController* AIOwner; // 0xD8(0x8)
	unsigned char UnknownData_E0[0x0080]; // 0xE0(0x80)
	struct FMulticastInlineDelegate OnPerceptionUpdated; // 0x160(0x10)
	struct FMulticastInlineDelegate OnTargetPerceptionUpdated; // 0x170(0x10)

	void SetSenseEnabled(class UAISense* SenseClass, bool bEnable); // Function AIModule.AIPerceptionComponent.SetSenseEnabled // (Final|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF776AEE340
	void RequestStimuliListenerUpdate(); // Function AIModule.AIPerceptionComponent.RequestStimuliListenerUpdate // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF776AEE040
	void OnOwnerEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function AIModule.AIPerceptionComponent.OnOwnerEndPlay // (Final|Native|Public) // Param Size : 0x9, 0x7FF776AEDC00
	void GetPerceivedHostileActors(struct TArray<struct AActor*> OutActors); // Function AIModule.AIPerceptionComponent.GetPerceivedHostileActors // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF776AECFE0
	void GetPerceivedActors(class UAISense* SenseToUse, struct TArray<struct AActor*> OutActors); // Function AIModule.AIPerceptionComponent.GetPerceivedActors // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF776AECEF0
	void GetKnownPerceivedActors(class UAISense* SenseToUse, struct TArray<struct AActor*> OutActors); // Function AIModule.AIPerceptionComponent.GetKnownPerceivedActors // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF776AECDB0
	void GetCurrentlyPerceivedActors(class UAISense* SenseToUse, struct TArray<struct AActor*> OutActors); // Function AIModule.AIPerceptionComponent.GetCurrentlyPerceivedActors // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF776AECB60
	bool GetActorsPerception(struct AActor* Actor, struct FActorPerceptionBlueprintInfo Info); // Function AIModule.AIPerceptionComponent.GetActorsPerception // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x29, 0x7FF776AEC960
	void ForgetAll(); // Function AIModule.AIPerceptionComponent.ForgetAll // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF776AEC8A0
};

// Class AIModule.AIPerceptionListenerInterface
// Size : 0x28 (Inherited : 0x28)
struct UAIPerceptionListenerInterface : UInterface {
};

// Class AIModule.AIPerceptionStimuliSourceComponent
// Size : 0xC8 (Inherited : 0xB0)
struct UAIPerceptionStimuliSourceComponent : UActorComponent {
	unsigned char bAutoRegisterAsSource : 1; // 0xB0(0x1)
	unsigned char UnknownData_B0_1 : 7; // 0xB0(0x1)
	unsigned char UnknownData_B1[0x0007]; // 0xB1(0x7)
	struct TArray<class UAISense*> RegisterAsSourceForSenses; // 0xB8(0x10)

	void UnregisterFromSense(class UAISense* SenseClass); // Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromSense // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF776AEE940
	void UnregisterFromPerceptionSystem(); // Function AIModule.AIPerceptionStimuliSourceComponent.UnregisterFromPerceptionSystem // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF776AEE920
	void RegisterWithPerceptionSystem(); // Function AIModule.AIPerceptionStimuliSourceComponent.RegisterWithPerceptionSystem // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF776AEDEF0
	void RegisterForSense(class UAISense* SenseClass); // Function AIModule.AIPerceptionStimuliSourceComponent.RegisterForSense // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF776AEDD80
};

// Class AIModule.AISubsystem
// Size : 0x38 (Inherited : 0x28)
struct UAISubsystem : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
	struct UAISystem* AISystem; // 0x30(0x8)
};

// Class AIModule.AIPerceptionSystem
// Size : 0x138 (Inherited : 0x38)
struct UAIPerceptionSystem : UAISubsystem {
	unsigned char UnknownData_38[0x0050]; // 0x38(0x50)
	struct TArray<struct UAISense*> Senses; // 0x88(0x10)
	float PerceptionAgingRate; // 0x98(0x4)
	unsigned char UnknownData_9C[0x009C]; // 0x9C(0x9C)

	void ReportPerceptionEvent(struct UObject* WorldContextObject, struct UAISenseEvent* PerceptionEvent); // Function AIModule.AIPerceptionSystem.ReportPerceptionEvent // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF776AEDF90
	void ReportEvent(struct UAISenseEvent* PerceptionEvent); // Function AIModule.AIPerceptionSystem.ReportEvent // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF776AEDF10
	bool RegisterPerceptionStimuliSource(struct UObject* WorldContextObject, class UAISense* Sense, struct AActor* Target); // Function AIModule.AIPerceptionSystem.RegisterPerceptionStimuliSource // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x19, 0x7FF776AEDE00
	void OnPerceptionStimuliSourceEndPlay(struct AActor* Actor, enum class EEndPlayReason EndPlayReason); // Function AIModule.AIPerceptionSystem.OnPerceptionStimuliSourceEndPlay // (Final|Native|Protected) // Param Size : 0x9, 0x7FF776AEDCC0
	class UAISense* GetSenseClassForStimulus(struct UObject* WorldContextObject, struct FAIStimulus Stimulus); // Function AIModule.AIPerceptionSystem.GetSenseClassForStimulus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x50, 0x7FF776AED090
};

// Class AIModule.AIResourceInterface
// Size : 0x28 (Inherited : 0x28)
struct UAIResourceInterface : UInterface {
};

// Class AIModule.AIResource_Movement
// Size : 0x38 (Inherited : 0x38)
struct UAIResource_Movement : UGameplayTaskResource {
};

// Class AIModule.AIResource_Logic
// Size : 0x38 (Inherited : 0x38)
struct UAIResource_Logic : UGameplayTaskResource {
};

// Class AIModule.AISense
// Size : 0x80 (Inherited : 0x28)
struct UAISense : UObject {
	float DefaultExpirationAge; // 0x28(0x4)
	enum class EAISenseNotifyType NotifyType; // 0x2C(0x1)
	unsigned char UnknownData_2D[0x0003]; // 0x2D(0x3)
	unsigned char bWantsNewPawnNotification : 1; // 0x30(0x1)
	unsigned char bAutoRegisterAllPawnsAsSources : 1; // 0x30(0x1)
	unsigned char UnknownData_30_2 : 6; // 0x30(0x1)
	unsigned char UnknownData_31[0x0007]; // 0x31(0x7)
	struct UAIPerceptionSystem* PerceptionSystemInstance; // 0x38(0x8)
	unsigned char UnknownData_40[0x0040]; // 0x40(0x40)
};

// Class AIModule.AISense_Blueprint
// Size : 0xA8 (Inherited : 0x80)
struct UAISense_Blueprint : UAISense {
	class UUserDefinedStruct* ListenerDataType; // 0x80(0x8)
	struct TArray<struct UAIPerceptionComponent*> ListenerContainer; // 0x88(0x10)
	struct TArray<struct UAISenseEvent*> UnprocessedEvents; // 0x98(0x10)

	float OnUpdate(struct TArray<struct UAISenseEvent*> EventsToProcess); // Function AIModule.AISense_Blueprint.OnUpdate // (Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0x14, 0x7FF77510D9D0
	void OnListenerUpdated(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerUpdated // (Event|Public|BlueprintEvent) // Param Size : 0x10, 0x7FF77510D9D0
	void OnListenerUnregistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerUnregistered // (Event|Public|BlueprintEvent) // Param Size : 0x10, 0x7FF77510D9D0
	void OnListenerRegistered(struct AActor* ActorListener, struct UAIPerceptionComponent* PerceptionComponent); // Function AIModule.AISense_Blueprint.OnListenerRegistered // (Event|Public|BlueprintEvent) // Param Size : 0x10, 0x7FF77510D9D0
	void K2_OnNewPawn(struct APawn* NewPawn); // Function AIModule.AISense_Blueprint.K2_OnNewPawn // (Event|Public|BlueprintEvent) // Param Size : 0x8, 0x7FF77510D9D0
	void GetAllListenerComponents(struct TArray<struct UAIPerceptionComponent*> ListenerComponents); // Function AIModule.AISense_Blueprint.GetAllListenerComponents // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF776AF28A0
	void GetAllListenerActors(struct TArray<struct AActor*> ListenerActors); // Function AIModule.AISense_Blueprint.GetAllListenerActors // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF776AF27F0
};

// Class AIModule.AISense_Damage
// Size : 0x90 (Inherited : 0x80)
struct UAISense_Damage : UAISense {
	struct TArray<struct FAIDamageEvent> RegisteredEvents; // 0x80(0x10)

	void ReportDamageEvent(struct UObject* WorldContextObject, struct AActor* DamagedActor, struct AActor* Instigator, float DamageAmount, struct FVector EventLocation, struct FVector HitLocation); // Function AIModule.AISense_Damage.ReportDamageEvent // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x34, 0x7FF776AF29F0
};

// Class AIModule.AISense_Hearing
// Size : 0xE8 (Inherited : 0x80)
struct UAISense_Hearing : UAISense {
	struct TArray<struct FAINoiseEvent> NoiseEvents; // 0x80(0x10)
	float SpeedOfSoundSq; // 0x90(0x4)
	unsigned char UnknownData_94[0x0054]; // 0x94(0x54)

	void ReportNoiseEvent(struct UObject* WorldContextObject, struct FVector NoiseLocation, float Loudness, struct AActor* Instigator, float MaxRange, struct FName Tag); // Function AIModule.AISense_Hearing.ReportNoiseEvent // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x2C, 0x7FF776AF2BC0
};

// Class AIModule.AISense_Prediction
// Size : 0x90 (Inherited : 0x80)
struct UAISense_Prediction : UAISense {
	struct TArray<struct FAIPredictionEvent> RegisteredEvents; // 0x80(0x10)

	void RequestPawnPredictionEvent(struct APawn* Requestor, struct AActor* PredictedActor, float PredictionTime); // Function AIModule.AISense_Prediction.RequestPawnPredictionEvent // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x14, 0x7FF776AF2E80
	void RequestControllerPredictionEvent(struct AAIController* Requestor, struct AActor* PredictedActor, float PredictionTime); // Function AIModule.AISense_Prediction.RequestControllerPredictionEvent // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x14, 0x7FF776AF2D80
};

// Class AIModule.AISense_Sight
// Size : 0x170 (Inherited : 0x80)
struct UAISense_Sight : UAISense {
	unsigned char UnknownData_80[0x00C8]; // 0x80(0xC8)
	int32_t MaxTracesPerTick; // 0x148(0x4)
	int32_t MinQueriesPerTimeSliceCheck; // 0x14C(0x4)
	double MaxTimeSlicePerTick; // 0x150(0x8)
	float HighImportanceQueryDistanceThreshold; // 0x158(0x4)
	unsigned char UnknownData_15C[0x0004]; // 0x15C(0x4)
	float MaxQueryImportance; // 0x160(0x4)
	float SightLimitQueryImportance; // 0x164(0x4)
	unsigned char UnknownData_168[0x0008]; // 0x168(0x8)
};

// Class AIModule.AISense_Team
// Size : 0x90 (Inherited : 0x80)
struct UAISense_Team : UAISense {
	struct TArray<struct FAITeamStimulusEvent> RegisteredEvents; // 0x80(0x10)
};

// Class AIModule.AISense_Touch
// Size : 0x90 (Inherited : 0x80)
struct UAISense_Touch : UAISense {
	struct TArray<struct FAITouchEvent> RegisteredEvents; // 0x80(0x10)
};

// Class AIModule.AISenseBlueprintListener
// Size : 0x108 (Inherited : 0x108)
struct UAISenseBlueprintListener : UUserDefinedStruct {
};

// Class AIModule.AISenseConfig
// Size : 0x48 (Inherited : 0x28)
struct UAISenseConfig : UObject {
	struct FColor DebugColor; // 0x28(0x4)
	float MaxAge; // 0x2C(0x4)
	unsigned char bStartsEnabled : 1; // 0x30(0x1)
	unsigned char UnknownData_30_1 : 7; // 0x30(0x1)
	unsigned char UnknownData_31[0x0017]; // 0x31(0x17)
};

// Class AIModule.AISenseConfig_Blueprint
// Size : 0x50 (Inherited : 0x48)
struct UAISenseConfig_Blueprint : UAISenseConfig {
	class UAISense_Blueprint* Implementation; // 0x48(0x8)
};

// Class AIModule.AISenseConfig_Damage
// Size : 0x50 (Inherited : 0x48)
struct UAISenseConfig_Damage : UAISenseConfig {
	class UAISense_Damage* Implementation; // 0x48(0x8)
};

// Class AIModule.AISenseConfig_Hearing
// Size : 0x60 (Inherited : 0x48)
struct UAISenseConfig_Hearing : UAISenseConfig {
	class UAISense_Hearing* Implementation; // 0x48(0x8)
	float HearingRange; // 0x50(0x4)
	float LoSHearingRange; // 0x54(0x4)
	unsigned char bUseLoSHearing : 1; // 0x58(0x1)
	unsigned char UnknownData_58_1 : 7; // 0x58(0x1)
	unsigned char UnknownData_59[0x0003]; // 0x59(0x3)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x5C(0x4)
};

// Class AIModule.AISenseConfig_Prediction
// Size : 0x48 (Inherited : 0x48)
struct UAISenseConfig_Prediction : UAISenseConfig {
};

// Class AIModule.AISenseConfig_Sight
// Size : 0x68 (Inherited : 0x48)
struct UAISenseConfig_Sight : UAISenseConfig {
	class UAISense_Sight* Implementation; // 0x48(0x8)
	float SightRadius; // 0x50(0x4)
	float LoseSightRadius; // 0x54(0x4)
	float PeripheralVisionAngleDegrees; // 0x58(0x4)
	struct FAISenseAffiliationFilter DetectionByAffiliation; // 0x5C(0x4)
	float AutoSuccessRangeFromLastSeenLocation; // 0x60(0x4)
	unsigned char UnknownData_64[0x0004]; // 0x64(0x4)
};

// Class AIModule.AISenseConfig_Team
// Size : 0x48 (Inherited : 0x48)
struct UAISenseConfig_Team : UAISenseConfig {
};

// Class AIModule.AISenseConfig_Touch
// Size : 0x48 (Inherited : 0x48)
struct UAISenseConfig_Touch : UAISenseConfig {
};

// Class AIModule.AISenseEvent
// Size : 0x28 (Inherited : 0x28)
struct UAISenseEvent : UObject {
};

// Class AIModule.AISenseEvent_Damage
// Size : 0x58 (Inherited : 0x28)
struct UAISenseEvent_Damage : UAISenseEvent {
	struct FAIDamageEvent Event; // 0x28(0x30)
};

// Class AIModule.AISenseEvent_Hearing
// Size : 0x58 (Inherited : 0x28)
struct UAISenseEvent_Hearing : UAISenseEvent {
	struct FAINoiseEvent Event; // 0x28(0x30)
};

// Class AIModule.AISightTargetInterface
// Size : 0x28 (Inherited : 0x28)
struct UAISightTargetInterface : UInterface {
};

// Class AIModule.AISystem
// Size : 0x130 (Inherited : 0x58)
struct UAISystem : UAISystemBase {
	struct FSoftClassPath PerceptionSystemClassName; // 0x58(0x18)
	struct FSoftClassPath HotSpotManagerClassName; // 0x70(0x18)
	float AcceptanceRadius; // 0x88(0x4)
	float PathfollowingRegularPathPointAcceptanceRadius; // 0x8C(0x4)
	float PathfollowingNavLinkAcceptanceRadius; // 0x90(0x4)
	bool bFinishMoveOnGoalOverlap; // 0x94(0x1)
	bool bAcceptPartialPaths; // 0x95(0x1)
	bool bAllowStrafing; // 0x96(0x1)
	bool bEnableBTAITasks; // 0x97(0x1)
	bool bAllowControllersAsEQSQuerier; // 0x98(0x1)
	bool bEnableDebuggerPlugin; // 0x99(0x1)
	bool bForgetStaleActors; // 0x9A(0x1)
	enum class ECollisionChannel DefaultSightCollisionChannel; // 0x9B(0x1)
	unsigned char UnknownData_9C[0x0004]; // 0x9C(0x4)
	struct UBehaviorTreeManager* BehaviorTreeManager; // 0xA0(0x8)
	struct UEnvQueryManager* EnvironmentQueryManager; // 0xA8(0x8)
	struct UAIPerceptionSystem* PerceptionSystem; // 0xB0(0x8)
	struct TArray<struct UAIAsyncTaskBlueprintProxy*> AllProxyObjects; // 0xB8(0x10)
	struct UAIHotSpotManager* HotSpotManager; // 0xC8(0x8)
	struct UNavLocalGridManager* NavLocalGrids; // 0xD0(0x8)
	unsigned char UnknownData_D8[0x0058]; // 0xD8(0x58)

	void AILoggingVerbose(); // Function AIModule.AISystem.AILoggingVerbose // (Exec|Native|Public) // Param Size : 0x0, 0x7FF775B896A0
	void AIIgnorePlayers(); // Function AIModule.AISystem.AIIgnorePlayers // (Exec|Native|Public) // Param Size : 0x0, 0x7FF77610A540
};

// Class AIModule.AITask
// Size : 0x70 (Inherited : 0x68)
struct UAITask : UGameplayTask {
	struct AAIController* OwnerController; // 0x68(0x8)
};

// Class AIModule.AITask_LockLogic
// Size : 0x70 (Inherited : 0x70)
struct UAITask_LockLogic : UAITask {
};

// Class AIModule.AITask_MoveTo
// Size : 0x110 (Inherited : 0x70)
struct UAITask_MoveTo : UAITask {
	struct FMulticastInlineDelegate OnRequestFailed; // 0x70(0x10)
	struct FMulticastInlineDelegate OnMoveFinished; // 0x80(0x10)
	struct FAIMoveRequest MoveRequest; // 0x90(0x40)
	unsigned char UnknownData_D0[0x0040]; // 0xD0(0x40)

	struct UAITask_MoveTo* AIMoveTo(struct AAIController* Controller, struct FVector GoalLocation, struct AActor* GoalActor, float AcceptanceRadius, enum class EAIOptionFlag StopOnOverlap, enum class EAIOptionFlag AcceptPartialPath, bool bUsePathfinding, bool bLockAILogic, bool bUseContinuosGoalTracking, enum class EAIOptionFlag ProjectGoalOnNavigation); // Function AIModule.AITask_MoveTo.AIMoveTo // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x38, 0x7FF776AF2410
};

// Class AIModule.AITask_RunEQS
// Size : 0xE8 (Inherited : 0x70)
struct UAITask_RunEQS : UAITask {
	unsigned char UnknownData_70[0x0078]; // 0x70(0x78)

	struct UAITask_RunEQS* RunEQS(struct AAIController* Controller, struct UEnvQuery* QueryTemplate); // Function AIModule.AITask_RunEQS.RunEQS // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF776AF2F80
};

// Class AIModule.BehaviorTree
// Size : 0x68 (Inherited : 0x28)
struct UBehaviorTree : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
	struct UBTCompositeNode* RootNode; // 0x30(0x8)
	struct UBlackboardData* BlackboardAsset; // 0x38(0x8)
	struct TArray<struct UBTDecorator*> RootDecorators; // 0x40(0x10)
	struct TArray<struct FBTDecoratorLogic> RootDecoratorOps; // 0x50(0x10)
	unsigned char UnknownData_60[0x0008]; // 0x60(0x8)
};

// Class AIModule.BrainComponent
// Size : 0x110 (Inherited : 0xB0)
struct UBrainComponent : UActorComponent {
	unsigned char UnknownData_B0[0x0008]; // 0xB0(0x8)
	struct UBlackboardComponent* BlackboardComp; // 0xB8(0x8)
	struct AAIController* AIOwner; // 0xC0(0x8)
	unsigned char UnknownData_C8[0x0048]; // 0xC8(0x48)

	void StopLogic(struct FString reason); // Function AIModule.BrainComponent.StopLogic // (Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF776AF79C0
	void StartLogic(); // Function AIModule.BrainComponent.StartLogic // (Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF776928A90
	void RestartLogic(); // Function AIModule.BrainComponent.RestartLogic // (Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF776AF70E0
	bool IsRunning(); // Function AIModule.BrainComponent.IsRunning // (Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF776AF7010
	bool IsPaused(); // Function AIModule.BrainComponent.IsPaused // (Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF776AF6FE0
};

// Class AIModule.BehaviorTreeComponent
// Size : 0x270 (Inherited : 0x110)
struct UBehaviorTreeComponent : UBrainComponent {
	unsigned char UnknownData_110[0x0020]; // 0x110(0x20)
	struct TArray<struct UBTNode*> NodeInstances; // 0x130(0x10)
	unsigned char UnknownData_140[0x0128]; // 0x140(0x128)
	struct UBehaviorTree* DefaultBehaviorTreeAsset; // 0x268(0x8)

	void SetDynamicSubtree(struct FGameplayTag InjectTag, struct UBehaviorTree* BehaviorAsset); // Function AIModule.BehaviorTreeComponent.SetDynamicSubtree // (Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF776AF3040
	float GetTagCooldownEndTime(struct FGameplayTag CooldownTag); // Function AIModule.BehaviorTreeComponent.GetTagCooldownEndTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0xC, 0x7FF776AF2950
	void AddCooldownTagDuration(struct FGameplayTag CooldownTag, float CooldownDuration, bool bAddToExistingDuration); // Function AIModule.BehaviorTreeComponent.AddCooldownTagDuration // (Final|Native|Public|BlueprintCallable) // Param Size : 0xD, 0x7FF776AF26E0
};

// Class AIModule.BehaviorTreeManager
// Size : 0x50 (Inherited : 0x28)
struct UBehaviorTreeManager : UObject {
	int32_t MaxDebuggerSteps; // 0x28(0x4)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
	struct TArray<struct FBehaviorTreeTemplateInfo> LoadedTemplates; // 0x30(0x10)
	struct TArray<struct UBehaviorTreeComponent*> ActiveComponents; // 0x40(0x10)
};

// Class AIModule.BehaviorTreeTypes
// Size : 0x28 (Inherited : 0x28)
struct UBehaviorTreeTypes : UObject {
};

// Class AIModule.BlackboardAssetProvider
// Size : 0x28 (Inherited : 0x28)
struct UBlackboardAssetProvider : UInterface {

	struct UBlackboardData* GetBlackboardAsset(); // Function AIModule.BlackboardAssetProvider.GetBlackboardAsset // (Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF776AF66D0
};

// Class AIModule.BlackboardComponent
// Size : 0x1B0 (Inherited : 0xB0)
struct UBlackboardComponent : UActorComponent {
	struct UBrainComponent* BrainComp; // 0xB0(0x8)
	struct UBlackboardData* DefaultBlackboardAsset; // 0xB8(0x8)
	struct UBlackboardData* BlackboardAsset; // 0xC0(0x8)
	unsigned char UnknownData_C8[0x0020]; // 0xC8(0x20)
	struct TArray<struct UBlackboardKeyType*> KeyInstances; // 0xE8(0x10)
	unsigned char UnknownData_F8[0x00B8]; // 0xF8(0xB8)

	void SetValueAsVector(struct FName KeyName, struct FVector VectorValue); // Function AIModule.BlackboardComponent.SetValueAsVector // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x14, 0x7FF776AF78D0
	void SetValueAsString(struct FName KeyName, struct FString StringValue); // Function AIModule.BlackboardComponent.SetValueAsString // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x18, 0x7FF776AF77A0
	void SetValueAsRotator(struct FName KeyName, struct FRotator VectorValue); // Function AIModule.BlackboardComponent.SetValueAsRotator // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x14, 0x7FF776AF76B0
	void SetValueAsObject(struct FName KeyName, struct UObject* ObjectValue); // Function AIModule.BlackboardComponent.SetValueAsObject // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF776AF75E0
	void SetValueAsName(struct FName KeyName, struct FName NameValue); // Function AIModule.BlackboardComponent.SetValueAsName // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF776AF7510
	void SetValueAsInt(struct FName KeyName, int32_t IntValue); // Function AIModule.BlackboardComponent.SetValueAsInt // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0xC, 0x7FF776AF7440
	void SetValueAsFloat(struct FName KeyName, float FloatValue); // Function AIModule.BlackboardComponent.SetValueAsFloat // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0xC, 0x7FF776AF7370
	void SetValueAsEnum(struct FName KeyName, enum class None EnumValue); // Function AIModule.BlackboardComponent.SetValueAsEnum // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x9, 0x7FF776AF72A0
	void SetValueAsClass(struct FName KeyName, class UObject* ClassValue); // Function AIModule.BlackboardComponent.SetValueAsClass // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF776AF71D0
	void SetValueAsBool(struct FName KeyName, bool BoolValue); // Function AIModule.BlackboardComponent.SetValueAsBool // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x9, 0x7FF776AF7100
	bool IsVectorValueSet(struct FName KeyName); // Function AIModule.BlackboardComponent.IsVectorValueSet // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x9, 0x7FF776AF7040
	struct FVector GetValueAsVector(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsVector // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x14, 0x7FF776AF6ED0
	struct FString GetValueAsString(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsString // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF776AF6DF0
	struct FRotator GetValueAsRotator(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsRotator // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x14, 0x7FF776AF6D40
	struct UObject* GetValueAsObject(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsObject // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF776AF6CA0
	struct FName GetValueAsName(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsName // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF776AF6C00
	int32_t GetValueAsInt(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsInt // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0xC, 0x7FF776AF6B60
	float GetValueAsFloat(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsFloat // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0xC, 0x7FF776AF6AC0
	enum class None GetValueAsEnum(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsEnum // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x9, 0x7FF776AF6A20
	class UObject* GetValueAsClass(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsClass // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF776AF6980
	bool GetValueAsBool(struct FName KeyName); // Function AIModule.BlackboardComponent.GetValueAsBool // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x9, 0x7FF776AF68E0
	bool GetRotationFromEntry(struct FName KeyName, struct FRotator ResultRotation); // Function AIModule.BlackboardComponent.GetRotationFromEntry // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x15, 0x7FF776AF67F0
	bool GetLocationFromEntry(struct FName KeyName, struct FVector ResultLocation); // Function AIModule.BlackboardComponent.GetLocationFromEntry // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x15, 0x7FF776AF6700
	void ClearValue(struct FName KeyName); // Function AIModule.BlackboardComponent.ClearValue // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x8, 0x7FF776AF6640
};

// Class AIModule.BlackboardData
// Size : 0x50 (Inherited : 0x30)
struct UBlackboardData : UDataAsset {
	struct UBlackboardData* Parent; // 0x30(0x8)
	struct TArray<struct FBlackboardEntry> Keys; // 0x38(0x10)
	unsigned char bHasSynchronizedKeys : 1; // 0x48(0x1)
	unsigned char UnknownData_48_1 : 7; // 0x48(0x1)
	unsigned char UnknownData_49[0x0007]; // 0x49(0x7)
};

// Class AIModule.BlackboardKeyType
// Size : 0x30 (Inherited : 0x28)
struct UBlackboardKeyType : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// Class AIModule.BlackboardKeyType_Bool
// Size : 0x30 (Inherited : 0x30)
struct UBlackboardKeyType_Bool : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Class
// Size : 0x38 (Inherited : 0x30)
struct UBlackboardKeyType_Class : UBlackboardKeyType {
	class UObject* BaseClass; // 0x30(0x8)
};

// Class AIModule.BlackboardKeyType_Enum
// Size : 0x50 (Inherited : 0x30)
struct UBlackboardKeyType_Enum : UBlackboardKeyType {
	struct UEnum* EnumType; // 0x30(0x8)
	struct FString EnumName; // 0x38(0x10)
	unsigned char bIsEnumNameValid : 1; // 0x48(0x1)
	unsigned char UnknownData_48_1 : 7; // 0x48(0x1)
	unsigned char UnknownData_49[0x0007]; // 0x49(0x7)
};

// Class AIModule.BlackboardKeyType_Float
// Size : 0x30 (Inherited : 0x30)
struct UBlackboardKeyType_Float : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Int
// Size : 0x30 (Inherited : 0x30)
struct UBlackboardKeyType_Int : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_Name
// Size : 0x30 (Inherited : 0x30)
struct UBlackboardKeyType_Name : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_NativeEnum
// Size : 0x48 (Inherited : 0x30)
struct UBlackboardKeyType_NativeEnum : UBlackboardKeyType {
	struct FString EnumName; // 0x30(0x10)
	struct UEnum* EnumType; // 0x40(0x8)
};

// Class AIModule.BlackboardKeyType_Object
// Size : 0x38 (Inherited : 0x30)
struct UBlackboardKeyType_Object : UBlackboardKeyType {
	class UObject* BaseClass; // 0x30(0x8)
};

// Class AIModule.BlackboardKeyType_Rotator
// Size : 0x30 (Inherited : 0x30)
struct UBlackboardKeyType_Rotator : UBlackboardKeyType {
};

// Class AIModule.BlackboardKeyType_String
// Size : 0x40 (Inherited : 0x30)
struct UBlackboardKeyType_String : UBlackboardKeyType {
	struct FString StringValue; // 0x30(0x10)
};

// Class AIModule.BlackboardKeyType_Vector
// Size : 0x30 (Inherited : 0x30)
struct UBlackboardKeyType_Vector : UBlackboardKeyType {
};

// Class AIModule.BTNode
// Size : 0x58 (Inherited : 0x28)
struct UBTNode : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
	struct FString NodeName; // 0x30(0x10)
	struct UBehaviorTree* TreeAsset; // 0x40(0x8)
	struct UBTCompositeNode* ParentNode; // 0x48(0x8)
	unsigned char UnknownData_50[0x0008]; // 0x50(0x8)
};

// Class AIModule.BTAuxiliaryNode
// Size : 0x60 (Inherited : 0x58)
struct UBTAuxiliaryNode : UBTNode {
	unsigned char UnknownData_58[0x0008]; // 0x58(0x8)
};

// Class AIModule.BTCompositeNode
// Size : 0x90 (Inherited : 0x58)
struct UBTCompositeNode : UBTNode {
	struct TArray<struct FBTCompositeChild> Children; // 0x58(0x10)
	struct TArray<struct UBTService*> Services; // 0x68(0x10)
	unsigned char UnknownData_78[0x0010]; // 0x78(0x10)
	unsigned char bApplyDecoratorScope : 1; // 0x88(0x1)
	unsigned char UnknownData_88_1 : 7; // 0x88(0x1)
	unsigned char UnknownData_89[0x0007]; // 0x89(0x7)
};

// Class AIModule.BTComposite_Selector
// Size : 0x90 (Inherited : 0x90)
struct UBTComposite_Selector : UBTCompositeNode {
};

// Class AIModule.BTComposite_Sequence
// Size : 0x90 (Inherited : 0x90)
struct UBTComposite_Sequence : UBTCompositeNode {
};

// Class AIModule.BTComposite_SimpleParallel
// Size : 0x98 (Inherited : 0x90)
struct UBTComposite_SimpleParallel : UBTCompositeNode {
	enum class EBTParallelMode FinishMode; // 0x90(0x1)
	unsigned char UnknownData_91[0x0007]; // 0x91(0x7)
};

// Class AIModule.BTDecorator
// Size : 0x68 (Inherited : 0x60)
struct UBTDecorator : UBTAuxiliaryNode {
	unsigned char UnknownData_60_0 : 7; // 0x60(0x1)
	unsigned char bInverseCondition : 1; // 0x60(0x1)
	unsigned char UnknownData_61[0x0003]; // 0x61(0x3)
	enum class EBTFlowAbortMode FlowAbortMode; // 0x64(0x1)
	unsigned char UnknownData_65[0x0003]; // 0x65(0x3)
};

// Class AIModule.BTDecorator_BlackboardBase
// Size : 0x90 (Inherited : 0x68)
struct UBTDecorator_BlackboardBase : UBTDecorator {
	struct FBlackboardKeySelector BlackboardKey; // 0x68(0x28)
};

// Class AIModule.BTDecorator_Blackboard
// Size : 0xC0 (Inherited : 0x90)
struct UBTDecorator_Blackboard : UBTDecorator_BlackboardBase {
	int32_t IntValue; // 0x90(0x4)
	float FloatValue; // 0x94(0x4)
	struct FString StringValue; // 0x98(0x10)
	struct FString CachedDescription; // 0xA8(0x10)
	enum class None OperationType; // 0xB8(0x1)
	enum class EBTBlackboardRestart NotifyObserver; // 0xB9(0x1)
	unsigned char UnknownData_BA[0x0006]; // 0xBA(0x6)
};

// Class AIModule.BTDecorator_BlueprintBase
// Size : 0xA0 (Inherited : 0x68)
struct UBTDecorator_BlueprintBase : UBTDecorator {
	struct AAIController* AIOwner; // 0x68(0x8)
	struct AActor* ActorOwner; // 0x70(0x8)
	struct TArray<struct FName> ObservedKeyNames; // 0x78(0x10)
	unsigned char UnknownData_88[0x0010]; // 0x88(0x10)
	unsigned char bShowPropertyDetails : 1; // 0x98(0x1)
	unsigned char bCheckConditionOnlyBlackBoardChanges : 1; // 0x98(0x1)
	unsigned char bIsObservingBB : 1; // 0x98(0x1)
	unsigned char UnknownData_98_3 : 5; // 0x98(0x1)
	unsigned char UnknownData_99[0x0007]; // 0x99(0x7)

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTickAI // (Event|Protected|BlueprintEvent) // Param Size : 0x14, 0x7FF77510D9D0
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTDecorator_BlueprintBase.ReceiveTick // (Event|Protected|BlueprintEvent) // Param Size : 0xC, 0x7FF77510D9D0
	void ReceiveObserverDeactivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI // (Event|Protected|BlueprintEvent) // Param Size : 0x10, 0x7FF77510D9D0
	void ReceiveObserverDeactivated(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated // (Event|Protected|BlueprintEvent) // Param Size : 0x8, 0x7FF77510D9D0
	void ReceiveObserverActivatedAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI // (Event|Protected|BlueprintEvent) // Param Size : 0x10, 0x7FF77510D9D0
	void ReceiveObserverActivated(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated // (Event|Protected|BlueprintEvent) // Param Size : 0x8, 0x7FF77510D9D0
	void ReceiveExecutionStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI // (Event|Protected|BlueprintEvent) // Param Size : 0x10, 0x7FF77510D9D0
	void ReceiveExecutionStart(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart // (Event|Protected|BlueprintEvent) // Param Size : 0x8, 0x7FF77510D9D0
	void ReceiveExecutionFinishAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, enum class EBTNodeResult NodeResult); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI // (Event|Protected|BlueprintEvent) // Param Size : 0x11, 0x7FF77510D9D0
	void ReceiveExecutionFinish(struct AActor* OwnerActor, enum class EBTNodeResult NodeResult); // Function AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish // (Event|Protected|BlueprintEvent) // Param Size : 0x9, 0x7FF77510D9D0
	bool PerformConditionCheckAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI // (Event|Protected|BlueprintEvent) // Param Size : 0x11, 0x7FF77510D9D0
	bool PerformConditionCheck(struct AActor* OwnerActor); // Function AIModule.BTDecorator_BlueprintBase.PerformConditionCheck // (Event|Protected|BlueprintEvent) // Param Size : 0x9, 0x7FF77510D9D0
	bool IsDecoratorObserverActive(); // Function AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF776AF6FB0
	bool IsDecoratorExecutionActive(); // Function AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF776AF6F80
};

// Class AIModule.BTDecorator_CheckGameplayTagsOnActor
// Size : 0xC8 (Inherited : 0x68)
struct UBTDecorator_CheckGameplayTagsOnActor : UBTDecorator {
	struct FBlackboardKeySelector ActorToCheck; // 0x68(0x28)
	enum class EGameplayContainerMatchType TagsToMatch; // 0x90(0x1)
	unsigned char UnknownData_91[0x0007]; // 0x91(0x7)
	struct FGameplayTagContainer GameplayTags; // 0x98(0x20)
	struct FString CachedDescription; // 0xB8(0x10)
};

// Class AIModule.BTDecorator_CompareBBEntries
// Size : 0xC0 (Inherited : 0x68)
struct UBTDecorator_CompareBBEntries : UBTDecorator {
	enum class EBlackBoardEntryComparison Operator; // 0x68(0x1)
	unsigned char UnknownData_69[0x0007]; // 0x69(0x7)
	struct FBlackboardKeySelector BlackboardKeyA; // 0x70(0x28)
	struct FBlackboardKeySelector BlackboardKeyB; // 0x98(0x28)
};

// Class AIModule.BTDecorator_ConditionalLoop
// Size : 0xC0 (Inherited : 0xC0)
struct UBTDecorator_ConditionalLoop : UBTDecorator_Blackboard {
};

// Class AIModule.BTDecorator_ConeCheck
// Size : 0xF0 (Inherited : 0x68)
struct UBTDecorator_ConeCheck : UBTDecorator {
	float ConeHalfAngle; // 0x68(0x4)
	unsigned char UnknownData_6C[0x0004]; // 0x6C(0x4)
	struct FBlackboardKeySelector ConeOrigin; // 0x70(0x28)
	struct FBlackboardKeySelector ConeDirection; // 0x98(0x28)
	struct FBlackboardKeySelector Observed; // 0xC0(0x28)
	unsigned char UnknownData_E8[0x0008]; // 0xE8(0x8)
};

// Class AIModule.BTDecorator_Cooldown
// Size : 0x70 (Inherited : 0x68)
struct UBTDecorator_Cooldown : UBTDecorator {
	float CoolDownTime; // 0x68(0x4)
	unsigned char UnknownData_6C[0x0004]; // 0x6C(0x4)
};

// Class AIModule.BTDecorator_DoesPathExist
// Size : 0xC8 (Inherited : 0x68)
struct UBTDecorator_DoesPathExist : UBTDecorator {
	struct FBlackboardKeySelector BlackboardKeyA; // 0x68(0x28)
	struct FBlackboardKeySelector BlackboardKeyB; // 0x90(0x28)
	unsigned char bUseSelf : 1; // 0xB8(0x1)
	unsigned char UnknownData_B8_1 : 7; // 0xB8(0x1)
	unsigned char UnknownData_B9[0x0003]; // 0xB9(0x3)
	enum class EPathExistanceQueryType PathQueryType; // 0xBC(0x1)
	unsigned char UnknownData_BD[0x0003]; // 0xBD(0x3)
	class UNavigationQueryFilter* FilterClass; // 0xC0(0x8)
};

// Class AIModule.BTDecorator_ForceSuccess
// Size : 0x68 (Inherited : 0x68)
struct UBTDecorator_ForceSuccess : UBTDecorator {
};

// Class AIModule.BTDecorator_IsAtLocation
// Size : 0xD8 (Inherited : 0x90)
struct UBTDecorator_IsAtLocation : UBTDecorator_BlackboardBase {
	float AcceptableRadius; // 0x90(0x4)
	unsigned char UnknownData_94[0x0004]; // 0x94(0x4)
	struct FAIDataProviderFloatValue ParametrizedAcceptableRadius; // 0x98(0x38)
	enum class FAIDistanceType GeometricDistanceType; // 0xD0(0x1)
	unsigned char UnknownData_D1[0x0003]; // 0xD1(0x3)
	unsigned char bUseParametrizedRadius : 1; // 0xD4(0x1)
	unsigned char bUseNavAgentGoalLocation : 1; // 0xD4(0x1)
	unsigned char bPathFindingBasedTest : 1; // 0xD4(0x1)
	unsigned char UnknownData_D4_3 : 5; // 0xD4(0x1)
	unsigned char UnknownData_D5[0x0003]; // 0xD5(0x3)
};

// Class AIModule.BTDecorator_IsBBEntryOfClass
// Size : 0x98 (Inherited : 0x90)
struct UBTDecorator_IsBBEntryOfClass : UBTDecorator_BlackboardBase {
	class UObject* TestClass; // 0x90(0x8)
};

// Class AIModule.BTDecorator_KeepInCone
// Size : 0xC8 (Inherited : 0x68)
struct UBTDecorator_KeepInCone : UBTDecorator {
	float ConeHalfAngle; // 0x68(0x4)
	unsigned char UnknownData_6C[0x0004]; // 0x6C(0x4)
	struct FBlackboardKeySelector ConeOrigin; // 0x70(0x28)
	struct FBlackboardKeySelector Observed; // 0x98(0x28)
	unsigned char bUseSelfAsOrigin : 1; // 0xC0(0x1)
	unsigned char bUseSelfAsObserved : 1; // 0xC0(0x1)
	unsigned char UnknownData_C0_2 : 6; // 0xC0(0x1)
	unsigned char UnknownData_C1[0x0007]; // 0xC1(0x7)
};

// Class AIModule.BTDecorator_Loop
// Size : 0x78 (Inherited : 0x68)
struct UBTDecorator_Loop : UBTDecorator {
	int32_t NumLoops; // 0x68(0x4)
	bool bInfiniteLoop; // 0x6C(0x1)
	unsigned char UnknownData_6D[0x0003]; // 0x6D(0x3)
	float InfiniteLoopTimeoutTime; // 0x70(0x4)
	unsigned char UnknownData_74[0x0004]; // 0x74(0x4)
};

// Class AIModule.BTDecorator_ReachedMoveGoal
// Size : 0x68 (Inherited : 0x68)
struct UBTDecorator_ReachedMoveGoal : UBTDecorator {
};

// Class AIModule.BTDecorator_SetTagCooldown
// Size : 0x78 (Inherited : 0x68)
struct UBTDecorator_SetTagCooldown : UBTDecorator {
	struct FGameplayTag CooldownTag; // 0x68(0x8)
	float CooldownDuration; // 0x70(0x4)
	bool bAddToExistingDuration; // 0x74(0x1)
	unsigned char UnknownData_75[0x0003]; // 0x75(0x3)
};

// Class AIModule.BTDecorator_TagCooldown
// Size : 0x78 (Inherited : 0x68)
struct UBTDecorator_TagCooldown : UBTDecorator {
	struct FGameplayTag CooldownTag; // 0x68(0x8)
	float CooldownDuration; // 0x70(0x4)
	bool bAddToExistingDuration; // 0x74(0x1)
	bool bActivatesCooldown; // 0x75(0x1)
	unsigned char UnknownData_76[0x0002]; // 0x76(0x2)
};

// Class AIModule.BTDecorator_TimeLimit
// Size : 0x70 (Inherited : 0x68)
struct UBTDecorator_TimeLimit : UBTDecorator {
	float TimeLimit; // 0x68(0x4)
	unsigned char UnknownData_6C[0x0004]; // 0x6C(0x4)
};

// Class AIModule.BTFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct UBTFunctionLibrary : UBlueprintFunctionLibrary {

	void StopUsingExternalEvent(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.StopUsingExternalEvent // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF7768DC890
	void StartUsingExternalEvent(struct UBTNode* NodeOwner, struct AActor* OwningActor); // Function AIModule.BTFunctionLibrary.StartUsingExternalEvent // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF776912DA0
	void SetBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, struct FVector Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsVector // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x3C, 0x7FF776AFBE20
	void SetBlackboardValueAsString(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, struct FString Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x40, 0x7FF776AFBCA0
	void SetBlackboardValueAsRotator(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, struct FRotator Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsRotator // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x3C, 0x7FF776AFBB60
	void SetBlackboardValueAsObject(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, struct UObject* Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x38, 0x7FF776AFBA20
	void SetBlackboardValueAsName(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, struct FName Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x38, 0x7FF776AFB8E0
	void SetBlackboardValueAsInt(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, int32_t Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsInt // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x34, 0x7FF776AFB7A0
	void SetBlackboardValueAsFloat(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, float Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsFloat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x34, 0x7FF776AFB660
	void SetBlackboardValueAsEnum(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, enum class None Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsEnum // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x31, 0x7FF776AFB520
	void SetBlackboardValueAsClass(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, class UObject* Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsClass // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x38, 0x7FF776AFB3E0
	void SetBlackboardValueAsBool(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key, bool Value); // Function AIModule.BTFunctionLibrary.SetBlackboardValueAsBool // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x31, 0x7FF776AFB2A0
	struct UBlackboardComponent* GetOwnersBlackboard(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.GetOwnersBlackboard // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF776AFB190
	struct UBehaviorTreeComponent* GetOwnerComponent(struct UBTNode* NodeOwner); // Function AIModule.BTFunctionLibrary.GetOwnerComponent // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF776AFB110
	struct FVector GetBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsVector // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x3C, 0x7FF776AFB000
	struct FString GetBlackboardValueAsString(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x40, 0x7FF776AFAEC0
	struct FRotator GetBlackboardValueAsRotator(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsRotator // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x3C, 0x7FF776AFADB0
	struct UObject* GetBlackboardValueAsObject(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x38, 0x7FF776AFACB0
	struct FName GetBlackboardValueAsName(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x38, 0x7FF776AFABB0
	int32_t GetBlackboardValueAsInt(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsInt // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x34, 0x7FF776AFAAB0
	float GetBlackboardValueAsFloat(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsFloat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x34, 0x7FF776AFA9B0
	enum class None GetBlackboardValueAsEnum(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsEnum // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x31, 0x7FF776AFA8B0
	class UObject* GetBlackboardValueAsClass(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsClass // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x38, 0x7FF776AFA7B0
	bool GetBlackboardValueAsBool(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsBool // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x31, 0x7FF776AFA6B0
	struct AActor* GetBlackboardValueAsActor(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.GetBlackboardValueAsActor // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x38, 0x7FF776AFA5B0
	void ClearBlackboardValueAsVector(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.ClearBlackboardValueAsVector // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x30, 0x7FF776AFA410
	void ClearBlackboardValue(struct UBTNode* NodeOwner, struct FBlackboardKeySelector Key); // Function AIModule.BTFunctionLibrary.ClearBlackboardValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x30, 0x7FF776AFA410
};

// Class AIModule.BTService
// Size : 0x70 (Inherited : 0x60)
struct UBTService : UBTAuxiliaryNode {
	float Interval; // 0x60(0x4)
	float RandomDeviation; // 0x64(0x4)
	unsigned char bCallTickOnSearchStart : 1; // 0x68(0x1)
	unsigned char bRestartTimerOnEachActivation : 1; // 0x68(0x1)
	unsigned char UnknownData_68_2 : 6; // 0x68(0x1)
	unsigned char UnknownData_69[0x0007]; // 0x69(0x7)
};

// Class AIModule.BTService_BlackboardBase
// Size : 0x98 (Inherited : 0x70)
struct UBTService_BlackboardBase : UBTService {
	struct FBlackboardKeySelector BlackboardKey; // 0x70(0x28)
};

// Class AIModule.BTService_BlueprintBase
// Size : 0x98 (Inherited : 0x70)
struct UBTService_BlueprintBase : UBTService {
	struct AAIController* AIOwner; // 0x70(0x8)
	struct AActor* ActorOwner; // 0x78(0x8)
	unsigned char UnknownData_80[0x0010]; // 0x80(0x10)
	unsigned char bShowPropertyDetails : 1; // 0x90(0x1)
	unsigned char bShowEventDetails : 1; // 0x90(0x1)
	unsigned char UnknownData_90_2 : 6; // 0x90(0x1)
	unsigned char UnknownData_91[0x0007]; // 0x91(0x7)

	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTService_BlueprintBase.ReceiveTickAI // (Event|Protected|BlueprintEvent) // Param Size : 0x14, 0x7FF77510D9D0
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTService_BlueprintBase.ReceiveTick // (Event|Protected|BlueprintEvent) // Param Size : 0xC, 0x7FF77510D9D0
	void ReceiveSearchStartAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStartAI // (Event|Protected|BlueprintEvent) // Param Size : 0x10, 0x7FF77510D9D0
	void ReceiveSearchStart(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveSearchStart // (Event|Protected|BlueprintEvent) // Param Size : 0x8, 0x7FF77510D9D0
	void ReceiveDeactivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivationAI // (Event|Protected|BlueprintEvent) // Param Size : 0x10, 0x7FF77510D9D0
	void ReceiveDeactivation(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveDeactivation // (Event|Protected|BlueprintEvent) // Param Size : 0x8, 0x7FF77510D9D0
	void ReceiveActivationAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTService_BlueprintBase.ReceiveActivationAI // (Event|Protected|BlueprintEvent) // Param Size : 0x10, 0x7FF77510D9D0
	void ReceiveActivation(struct AActor* OwnerActor); // Function AIModule.BTService_BlueprintBase.ReceiveActivation // (Event|Protected|BlueprintEvent) // Param Size : 0x8, 0x7FF77510D9D0
	bool IsServiceActive(); // Function AIModule.BTService_BlueprintBase.IsServiceActive // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF776AFB210
};

// Class AIModule.BTService_DefaultFocus
// Size : 0xA0 (Inherited : 0x98)
struct UBTService_DefaultFocus : UBTService_BlackboardBase {
	enum class None FocusPriority; // 0x98(0x1)
	unsigned char UnknownData_99[0x0007]; // 0x99(0x7)
};

// Class AIModule.BTService_RunEQS
// Size : 0xF0 (Inherited : 0x98)
struct UBTService_RunEQS : UBTService_BlackboardBase {
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x98(0x48)
	unsigned char UnknownData_E0[0x0010]; // 0xE0(0x10)
};

// Class AIModule.BTTaskNode
// Size : 0x70 (Inherited : 0x58)
struct UBTTaskNode : UBTNode {
	struct TArray<struct UBTService*> Services; // 0x58(0x10)
	unsigned char bIgnoreRestartSelf : 1; // 0x68(0x1)
	unsigned char UnknownData_68_1 : 7; // 0x68(0x1)
	unsigned char UnknownData_69[0x0007]; // 0x69(0x7)
};

// Class AIModule.BTTask_BlackboardBase
// Size : 0x98 (Inherited : 0x70)
struct UBTTask_BlackboardBase : UBTTaskNode {
	struct FBlackboardKeySelector BlackboardKey; // 0x70(0x28)
};

// Class AIModule.BTTask_BlueprintBase
// Size : 0xA8 (Inherited : 0x70)
struct UBTTask_BlueprintBase : UBTTaskNode {
	struct AAIController* AIOwner; // 0x70(0x8)
	struct AActor* ActorOwner; // 0x78(0x8)
	struct FIntervalCountdown TickInterval; // 0x80(0x8)
	unsigned char UnknownData_88[0x0018]; // 0x88(0x18)
	unsigned char bShowPropertyDetails : 1; // 0xA0(0x1)
	unsigned char UnknownData_A0_1 : 7; // 0xA0(0x1)
	unsigned char UnknownData_A1[0x0007]; // 0xA1(0x7)

	void SetFinishOnMessageWithId(struct FName MessageName, int32_t RequestID); // Function AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId // (Final|Native|Protected|BlueprintCallable) // Param Size : 0xC, 0x7FF776AFBFE0
	void SetFinishOnMessage(struct FName MessageName); // Function AIModule.BTTask_BlueprintBase.SetFinishOnMessage // (Final|Native|Protected|BlueprintCallable) // Param Size : 0x8, 0x7FF776AFBF60
	void ReceiveTickAI(struct AAIController* OwnerController, struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.BTTask_BlueprintBase.ReceiveTickAI // (Event|Protected|BlueprintEvent) // Param Size : 0x14, 0x7FF77510D9D0
	void ReceiveTick(struct AActor* OwnerActor, float DeltaSeconds); // Function AIModule.BTTask_BlueprintBase.ReceiveTick // (Event|Protected|BlueprintEvent) // Param Size : 0xC, 0x7FF77510D9D0
	void ReceiveExecuteAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTTask_BlueprintBase.ReceiveExecuteAI // (Event|Protected|BlueprintEvent) // Param Size : 0x10, 0x7FF77510D9D0
	void ReceiveExecute(struct AActor* OwnerActor); // Function AIModule.BTTask_BlueprintBase.ReceiveExecute // (Event|Protected|BlueprintEvent) // Param Size : 0x8, 0x7FF77510D9D0
	void ReceiveAbortAI(struct AAIController* OwnerController, struct APawn* ControlledPawn); // Function AIModule.BTTask_BlueprintBase.ReceiveAbortAI // (Event|Protected|BlueprintEvent) // Param Size : 0x10, 0x7FF77510D9D0
	void ReceiveAbort(struct AActor* OwnerActor); // Function AIModule.BTTask_BlueprintBase.ReceiveAbort // (Event|Protected|BlueprintEvent) // Param Size : 0x8, 0x7FF77510D9D0
	bool IsTaskExecuting(); // Function AIModule.BTTask_BlueprintBase.IsTaskExecuting // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF776AFB270
	bool IsTaskAborting(); // Function AIModule.BTTask_BlueprintBase.IsTaskAborting // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF776AFB240
	void FinishExecute(bool bSuccess); // Function AIModule.BTTask_BlueprintBase.FinishExecute // (Final|Native|Protected|BlueprintCallable) // Param Size : 0x1, 0x7FF776AFA520
	void FinishAbort(); // Function AIModule.BTTask_BlueprintBase.FinishAbort // (Final|Native|Protected|BlueprintCallable) // Param Size : 0x0, 0x7FF776AFA500
};

// Class AIModule.BTTask_FinishWithResult
// Size : 0x78 (Inherited : 0x70)
struct UBTTask_FinishWithResult : UBTTaskNode {
	enum class EBTNodeResult Result; // 0x70(0x1)
	unsigned char UnknownData_71[0x0007]; // 0x71(0x7)
};

// Class AIModule.BTTask_GameplayTaskBase
// Size : 0x78 (Inherited : 0x70)
struct UBTTask_GameplayTaskBase : UBTTaskNode {
	unsigned char bWaitForGameplayTask : 1; // 0x70(0x1)
	unsigned char UnknownData_70_1 : 7; // 0x70(0x1)
	unsigned char UnknownData_71[0x0007]; // 0x71(0x7)
};

// Class AIModule.BTTask_MakeNoise
// Size : 0x78 (Inherited : 0x70)
struct UBTTask_MakeNoise : UBTTaskNode {
	float Loudnes; // 0x70(0x4)
	unsigned char UnknownData_74[0x0004]; // 0x74(0x4)
};

// Class AIModule.BTTask_MoveTo
// Size : 0xB0 (Inherited : 0x98)
struct UBTTask_MoveTo : UBTTask_BlackboardBase {
	float AcceptableRadius; // 0x98(0x4)
	unsigned char UnknownData_9C[0x0004]; // 0x9C(0x4)
	class UNavigationQueryFilter* FilterClass; // 0xA0(0x8)
	float ObservedBlackboardValueTolerance; // 0xA8(0x4)
	unsigned char bObserveBlackboardValue : 1; // 0xAC(0x1)
	unsigned char bAllowStrafe : 1; // 0xAC(0x1)
	unsigned char bAllowPartialPath : 1; // 0xAC(0x1)
	unsigned char bTrackMovingGoal : 1; // 0xAC(0x1)
	unsigned char bProjectGoalLocation : 1; // 0xAC(0x1)
	unsigned char bReachTestIncludesAgentRadius : 1; // 0xAC(0x1)
	unsigned char bReachTestIncludesGoalRadius : 1; // 0xAC(0x1)
	unsigned char bStopOnOverlap : 1; // 0xAC(0x1)
	unsigned char bStopOnOverlapNeedsUpdate : 1; // 0xAD(0x1)
	unsigned char UnknownData_AD_1 : 7; // 0xAD(0x1)
	unsigned char UnknownData_AE[0x0002]; // 0xAE(0x2)
};

// Class AIModule.BTTask_MoveDirectlyToward
// Size : 0xB8 (Inherited : 0xB0)
struct UBTTask_MoveDirectlyToward : UBTTask_MoveTo {
	unsigned char bDisablePathUpdateOnGoalLocationChange : 1; // 0xB0(0x1)
	unsigned char bProjectVectorGoalToNavigation : 1; // 0xB0(0x1)
	unsigned char bUpdatedDeprecatedProperties : 1; // 0xB0(0x1)
	unsigned char UnknownData_B0_3 : 5; // 0xB0(0x1)
	unsigned char UnknownData_B1[0x0007]; // 0xB1(0x7)
};

// Class AIModule.BTTask_PawnActionBase
// Size : 0x70 (Inherited : 0x70)
struct UBTTask_PawnActionBase : UBTTaskNode {
};

// Class AIModule.BTTask_PlayAnimation
// Size : 0xB0 (Inherited : 0x70)
struct UBTTask_PlayAnimation : UBTTaskNode {
	struct UAnimationAsset* AnimationToPlay; // 0x70(0x8)
	unsigned char bLooping : 1; // 0x78(0x1)
	unsigned char bNonBlocking : 1; // 0x78(0x1)
	unsigned char UnknownData_78_2 : 6; // 0x78(0x1)
	unsigned char UnknownData_79[0x0007]; // 0x79(0x7)
	struct UBehaviorTreeComponent* MyOwnerComp; // 0x80(0x8)
	struct USkeletalMeshComponent* CachedSkelMesh; // 0x88(0x8)
	unsigned char UnknownData_90[0x0020]; // 0x90(0x20)
};

// Class AIModule.BTTask_PlaySound
// Size : 0x78 (Inherited : 0x70)
struct UBTTask_PlaySound : UBTTaskNode {
	struct USoundCue* SoundToPlay; // 0x70(0x8)
};

// Class AIModule.BTTask_PushPawnAction
// Size : 0x78 (Inherited : 0x70)
struct UBTTask_PushPawnAction : UBTTask_PawnActionBase {
	struct UPawnAction* Action; // 0x70(0x8)
};

// Class AIModule.BTTask_RotateToFaceBBEntry
// Size : 0xA0 (Inherited : 0x98)
struct UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase {
	float Precision; // 0x98(0x4)
	unsigned char UnknownData_9C[0x0004]; // 0x9C(0x4)
};

// Class AIModule.BTTask_RunBehavior
// Size : 0x78 (Inherited : 0x70)
struct UBTTask_RunBehavior : UBTTaskNode {
	struct UBehaviorTree* BehaviorAsset; // 0x70(0x8)
};

// Class AIModule.BTTask_RunBehaviorDynamic
// Size : 0x88 (Inherited : 0x70)
struct UBTTask_RunBehaviorDynamic : UBTTaskNode {
	struct FGameplayTag InjectionTag; // 0x70(0x8)
	struct UBehaviorTree* DefaultBehaviorAsset; // 0x78(0x8)
	struct UBehaviorTree* BehaviorAsset; // 0x80(0x8)
};

// Class AIModule.BTTask_RunEQSQuery
// Size : 0x150 (Inherited : 0x98)
struct UBTTask_RunEQSQuery : UBTTask_BlackboardBase {
	struct UEnvQuery* QueryTemplate; // 0x98(0x8)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0xA0(0x10)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0xB0(0x10)
	enum class EEnvQueryRunMode RunMode; // 0xC0(0x1)
	unsigned char UnknownData_C1[0x0007]; // 0xC1(0x7)
	struct FBlackboardKeySelector EQSQueryBlackboardKey; // 0xC8(0x28)
	bool bUseBBKey; // 0xF0(0x1)
	unsigned char UnknownData_F1[0x0007]; // 0xF1(0x7)
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0xF8(0x48)
	unsigned char UnknownData_140[0x0010]; // 0x140(0x10)
};

// Class AIModule.BTTask_SetTagCooldown
// Size : 0x80 (Inherited : 0x70)
struct UBTTask_SetTagCooldown : UBTTaskNode {
	struct FGameplayTag CooldownTag; // 0x70(0x8)
	bool bAddToExistingDuration; // 0x78(0x1)
	unsigned char UnknownData_79[0x0003]; // 0x79(0x3)
	float CooldownDuration; // 0x7C(0x4)
};

// Class AIModule.BTTask_Wait
// Size : 0x78 (Inherited : 0x70)
struct UBTTask_Wait : UBTTaskNode {
	float WaitTime; // 0x70(0x4)
	float RandomDeviation; // 0x74(0x4)
};

// Class AIModule.BTTask_WaitBlackboardTime
// Size : 0xA0 (Inherited : 0x78)
struct UBTTask_WaitBlackboardTime : UBTTask_Wait {
	struct FBlackboardKeySelector BlackboardKey; // 0x78(0x28)
};

// Class AIModule.CrowdAgentInterface
// Size : 0x28 (Inherited : 0x28)
struct UCrowdAgentInterface : UInterface {
};

// Class AIModule.PathFollowingComponent
// Size : 0x258 (Inherited : 0xB0)
struct UPathFollowingComponent : UActorComponent {
	unsigned char UnknownData_B0[0x0038]; // 0xB0(0x38)
	struct UNavMovementComponent* MovementComp; // 0xE8(0x8)
	unsigned char UnknownData_F0[0x0008]; // 0xF0(0x8)
	struct ANavigationData* MyNavData; // 0xF8(0x8)
	unsigned char UnknownData_100[0x0158]; // 0x100(0x158)

	void OnNavDataRegistered(struct ANavigationData* NavData); // Function AIModule.PathFollowingComponent.OnNavDataRegistered // (Final|Native|Protected) // Param Size : 0x8, 0x7FF776B06380
	void OnActorBump(struct AActor* SelfActor, struct AActor* OtherActor, struct FVector NormalImpulse, struct FHitResult Hit); // Function AIModule.PathFollowingComponent.OnActorBump // (Native|Public|HasOutParms|HasDefaults) // Param Size : 0xA4, 0x7FF776B061E0
	struct FVector GetPathDestination(); // Function AIModule.PathFollowingComponent.GetPathDestination // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0xC, 0x7FF776B05DF0
	enum class EPathFollowingAction GetPathActionType(); // Function AIModule.PathFollowingComponent.GetPathActionType // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF776B05DC0
};

// Class AIModule.CrowdFollowingComponent
// Size : 0x298 (Inherited : 0x258)
struct UCrowdFollowingComponent : UPathFollowingComponent {
	unsigned char UnknownData_258[0x0008]; // 0x258(0x8)
	struct UCharacterMovementComponent* CharacterMovement; // 0x260(0x8)
	struct FVector CrowdAgentMoveDirection; // 0x268(0xC)
	unsigned char UnknownData_274[0x0024]; // 0x274(0x24)

	void SuspendCrowdSteering(bool bSuspend); // Function AIModule.CrowdFollowingComponent.SuspendCrowdSteering // (Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF776AFF4C0
};

// Class AIModule.CrowdManager
// Size : 0xF0 (Inherited : 0x28)
struct UCrowdManager : UCrowdManagerBase {
	struct ANavigationData* MyNavData; // 0x28(0x8)
	struct TArray<struct FCrowdAvoidanceConfig> AvoidanceConfig; // 0x30(0x10)
	struct TArray<struct FCrowdAvoidanceSamplingPattern> SamplingPatterns; // 0x40(0x10)
	int32_t MaxAgents; // 0x50(0x4)
	float MaxAgentRadius; // 0x54(0x4)
	int32_t MaxAvoidedAgents; // 0x58(0x4)
	int32_t MaxAvoidedWalls; // 0x5C(0x4)
	float NavmeshCheckInterval; // 0x60(0x4)
	float PathOptimizationInterval; // 0x64(0x4)
	float SeparationDirClamp; // 0x68(0x4)
	float PathOffsetRadiusMultiplier; // 0x6C(0x4)
	unsigned char UnknownData_70_0 : 4; // 0x70(0x1)
	unsigned char bResolveCollisions : 1; // 0x70(0x1)
	unsigned char UnknownData_70_5 : 3; // 0x70(0x1)
	unsigned char UnknownData_71[0x007F]; // 0x71(0x7F)
};

// Class AIModule.DetourCrowdAIController
// Size : 0x328 (Inherited : 0x328)
struct ADetourCrowdAIController : AAIController {
};

// Class AIModule.EnvQuery
// Size : 0x48 (Inherited : 0x30)
struct UEnvQuery : UDataAsset {
	struct FName QueryName; // 0x30(0x8)
	struct TArray<struct UEnvQueryOption*> Options; // 0x38(0x10)
};

// Class AIModule.EnvQueryContext
// Size : 0x28 (Inherited : 0x28)
struct UEnvQueryContext : UObject {
};

// Class AIModule.EnvQueryContext_BlueprintBase
// Size : 0x30 (Inherited : 0x28)
struct UEnvQueryContext_BlueprintBase : UEnvQueryContext {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)

	void ProvideSingleLocation(struct UObject* QuerierObject, struct AActor* QuerierActor, struct FVector ResultingLocation); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleLocation // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent|Const) // Param Size : 0x1C, 0x7FF77510D9D0
	void ProvideSingleActor(struct UObject* QuerierObject, struct AActor* QuerierActor, struct AActor* ResultingActor); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideSingleActor // (Event|Public|HasOutParms|BlueprintEvent|Const) // Param Size : 0x18, 0x7FF77510D9D0
	void ProvideLocationsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct FVector> ResultingLocationSet); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideLocationsSet // (Event|Public|HasOutParms|BlueprintEvent|Const) // Param Size : 0x20, 0x7FF77510D9D0
	void ProvideActorsSet(struct UObject* QuerierObject, struct AActor* QuerierActor, struct TArray<struct AActor*> ResultingActorsSet); // Function AIModule.EnvQueryContext_BlueprintBase.ProvideActorsSet // (Event|Public|HasOutParms|BlueprintEvent|Const) // Param Size : 0x20, 0x7FF77510D9D0
};

// Class AIModule.EnvQueryContext_Item
// Size : 0x28 (Inherited : 0x28)
struct UEnvQueryContext_Item : UEnvQueryContext {
};

// Class AIModule.EnvQueryContext_Querier
// Size : 0x28 (Inherited : 0x28)
struct UEnvQueryContext_Querier : UEnvQueryContext {
};

// Class AIModule.EnvQueryDebugHelpers
// Size : 0x28 (Inherited : 0x28)
struct UEnvQueryDebugHelpers : UObject {
};

// Class AIModule.EnvQueryNode
// Size : 0x30 (Inherited : 0x28)
struct UEnvQueryNode : UObject {
	int32_t VerNum; // 0x28(0x4)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
};

// Class AIModule.EnvQueryGenerator
// Size : 0x50 (Inherited : 0x30)
struct UEnvQueryGenerator : UEnvQueryNode {
	struct FString OptionName; // 0x30(0x10)
	class UEnvQueryItemType* ItemType; // 0x40(0x8)
	unsigned char bAutoSortTests : 1; // 0x48(0x1)
	unsigned char UnknownData_48_1 : 7; // 0x48(0x1)
	unsigned char UnknownData_49[0x0007]; // 0x49(0x7)
};

// Class AIModule.EnvQueryGenerator_ActorsOfClass
// Size : 0xD0 (Inherited : 0x50)
struct UEnvQueryGenerator_ActorsOfClass : UEnvQueryGenerator {
	class AActor* SearchedActorClass; // 0x50(0x8)
	struct FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x58(0x38)
	struct FAIDataProviderFloatValue SearchRadius; // 0x90(0x38)
	class UEnvQueryContext* SearchCenter; // 0xC8(0x8)
};

// Class AIModule.EnvQueryGenerator_BlueprintBase
// Size : 0x80 (Inherited : 0x50)
struct UEnvQueryGenerator_BlueprintBase : UEnvQueryGenerator {
	struct FText GeneratorsActionDescription; // 0x50(0x18)
	class UEnvQueryContext* Context; // 0x68(0x8)
	class UEnvQueryItemType* GeneratedItemType; // 0x70(0x8)
	unsigned char UnknownData_78[0x0008]; // 0x78(0x8)

	struct UObject* GetQuerier(); // Function AIModule.EnvQueryGenerator_BlueprintBase.GetQuerier // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF776AFF490
	void DoItemGeneration(struct TArray<struct FVector> ContextLocations); // Function AIModule.EnvQueryGenerator_BlueprintBase.DoItemGeneration // (Event|Public|HasOutParms|BlueprintEvent|Const) // Param Size : 0x10, 0x7FF77510D9D0
	void AddGeneratedVector(struct FVector GeneratedVector); // Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedVector // (Final|Native|Public|HasDefaults|BlueprintCallable|Const) // Param Size : 0xC, 0x7FF776AFF400
	void AddGeneratedActor(struct AActor* GeneratedActor); // Function AIModule.EnvQueryGenerator_BlueprintBase.AddGeneratedActor // (Final|Native|Public|BlueprintCallable|Const) // Param Size : 0x8, 0x7FF776AFF380
};

// Class AIModule.EnvQueryGenerator_Composite
// Size : 0x70 (Inherited : 0x50)
struct UEnvQueryGenerator_Composite : UEnvQueryGenerator {
	struct TArray<struct UEnvQueryGenerator*> Generators; // 0x50(0x10)
	unsigned char bAllowDifferentItemTypes : 1; // 0x60(0x1)
	unsigned char bHasMatchingItemType : 1; // 0x60(0x1)
	unsigned char UnknownData_60_2 : 6; // 0x60(0x1)
	unsigned char UnknownData_61[0x0007]; // 0x61(0x7)
	class UEnvQueryItemType* ForcedItemType; // 0x68(0x8)
};

// Class AIModule.EnvQueryGenerator_ProjectedPoints
// Size : 0x80 (Inherited : 0x50)
struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator {
	struct FEnvTraceData ProjectionData; // 0x50(0x30)
};

// Class AIModule.EnvQueryGenerator_Cone
// Size : 0x170 (Inherited : 0x80)
struct UEnvQueryGenerator_Cone : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue AlignedPointsDistance; // 0x80(0x38)
	struct FAIDataProviderFloatValue ConeDegrees; // 0xB8(0x38)
	struct FAIDataProviderFloatValue AngleStep; // 0xF0(0x38)
	struct FAIDataProviderFloatValue Range; // 0x128(0x38)
	class UEnvQueryContext* CenterActor; // 0x160(0x8)
	unsigned char bIncludeContextLocation : 1; // 0x168(0x1)
	unsigned char UnknownData_168_1 : 7; // 0x168(0x1)
	unsigned char UnknownData_169[0x0007]; // 0x169(0x7)
};

// Class AIModule.EnvQueryGenerator_CurrentLocation
// Size : 0x58 (Inherited : 0x50)
struct UEnvQueryGenerator_CurrentLocation : UEnvQueryGenerator {
	class UEnvQueryContext* QueryContext; // 0x50(0x8)
};

// Class AIModule.EnvQueryGenerator_Donut
// Size : 0x1D0 (Inherited : 0x80)
struct UEnvQueryGenerator_Donut : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue InnerRadius; // 0x80(0x38)
	struct FAIDataProviderFloatValue OuterRadius; // 0xB8(0x38)
	struct FAIDataProviderIntValue NumberOfRings; // 0xF0(0x38)
	struct FAIDataProviderIntValue PointsPerRing; // 0x128(0x38)
	struct FEnvDirection ArcDirection; // 0x160(0x20)
	struct FAIDataProviderFloatValue ArcAngle; // 0x180(0x38)
	bool bUseSpiralPattern; // 0x1B8(0x1)
	unsigned char UnknownData_1B9[0x0007]; // 0x1B9(0x7)
	class UEnvQueryContext* Center; // 0x1C0(0x8)
	unsigned char bDefineArc : 1; // 0x1C8(0x1)
	unsigned char UnknownData_1C8_1 : 7; // 0x1C8(0x1)
	unsigned char UnknownData_1C9[0x0007]; // 0x1C9(0x7)
};

// Class AIModule.EnvQueryGenerator_OnCircle
// Size : 0x210 (Inherited : 0x80)
struct UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue CircleRadius; // 0x80(0x38)
	struct FAIDataProviderFloatValue SpaceBetween; // 0xB8(0x38)
	struct FAIDataProviderIntValue NumberOfPoints; // 0xF0(0x38)
	enum class EPointOnCircleSpacingMethod PointOnCircleSpacingMethod; // 0x128(0x1)
	unsigned char UnknownData_129[0x0007]; // 0x129(0x7)
	struct FEnvDirection ArcDirection; // 0x130(0x20)
	struct FAIDataProviderFloatValue ArcAngle; // 0x150(0x38)
	float AngleRadians; // 0x188(0x4)
	unsigned char UnknownData_18C[0x0004]; // 0x18C(0x4)
	class UEnvQueryContext* CircleCenter; // 0x190(0x8)
	bool bIgnoreAnyContextActorsWhenGeneratingCircle; // 0x198(0x1)
	unsigned char UnknownData_199[0x0007]; // 0x199(0x7)
	struct FAIDataProviderFloatValue CircleCenterZOffset; // 0x1A0(0x38)
	struct FEnvTraceData TraceData; // 0x1D8(0x30)
	unsigned char bDefineArc : 1; // 0x208(0x1)
	unsigned char UnknownData_208_1 : 7; // 0x208(0x1)
	unsigned char UnknownData_209[0x0007]; // 0x209(0x7)
};

// Class AIModule.EnvQueryGenerator_SimpleGrid
// Size : 0xF8 (Inherited : 0x80)
struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints {
	struct FAIDataProviderFloatValue GridSize; // 0x80(0x38)
	struct FAIDataProviderFloatValue SpaceBetween; // 0xB8(0x38)
	class UEnvQueryContext* GenerateAround; // 0xF0(0x8)
};

// Class AIModule.EnvQueryGenerator_PathingGrid
// Size : 0x170 (Inherited : 0xF8)
struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid {
	struct FAIDataProviderBoolValue PathToItem; // 0xF8(0x38)
	class UNavigationQueryFilter* NavigationFilter; // 0x130(0x8)
	struct FAIDataProviderFloatValue ScanRangeMultiplier; // 0x138(0x38)
};

// Class AIModule.EnvQueryInstanceBlueprintWrapper
// Size : 0x78 (Inherited : 0x28)
struct UEnvQueryInstanceBlueprintWrapper : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
	int32_t QueryID; // 0x30(0x4)
	unsigned char UnknownData_34[0x0024]; // 0x34(0x24)
	class UEnvQueryItemType* ItemType; // 0x58(0x8)
	int32_t OptionIndex; // 0x60(0x4)
	unsigned char UnknownData_64[0x0004]; // 0x64(0x4)
	struct FMulticastInlineDelegate OnQueryFinishedEvent; // 0x68(0x10)

	void SetNamedParam(struct FName ParamName, float Value); // Function AIModule.EnvQueryInstanceBlueprintWrapper.SetNamedParam // (Final|Native|Public|BlueprintCallable) // Param Size : 0xC, 0x7FF776B03010
	struct TArray<struct FVector> GetResultsAsLocations(); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsLocations // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF776B02E10
	struct TArray<struct AActor*> GetResultsAsActors(); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetResultsAsActors // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF776B02D90
	bool GetQueryResultsAsLocations(struct TArray<struct FVector> ResultLocations); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsLocations // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // Param Size : 0x11, 0x7FF776B02CD0
	bool GetQueryResultsAsActors(struct TArray<struct AActor*> ResultActors); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetQueryResultsAsActors // (Final|Native|Public|HasOutParms|BlueprintCallable|Const) // Param Size : 0x11, 0x7FF776B02C10
	float GetItemScore(int32_t ItemIndex); // Function AIModule.EnvQueryInstanceBlueprintWrapper.GetItemScore // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF776B02B80
	void EQSQueryDoneSignature__DelegateSignature(struct UEnvQueryInstanceBlueprintWrapper* QueryInstance, enum class EEnvQueryStatus QueryStatus); // DelegateFunction AIModule.EnvQueryInstanceBlueprintWrapper.EQSQueryDoneSignature__DelegateSignature // (MulticastDelegate|Public|Delegate) // Param Size : 0x9, 0x7FF77510D9D0
};

// Class AIModule.EnvQueryItemType
// Size : 0x30 (Inherited : 0x28)
struct UEnvQueryItemType : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// Class AIModule.EnvQueryItemType_VectorBase
// Size : 0x30 (Inherited : 0x30)
struct UEnvQueryItemType_VectorBase : UEnvQueryItemType {
};

// Class AIModule.EnvQueryItemType_ActorBase
// Size : 0x30 (Inherited : 0x30)
struct UEnvQueryItemType_ActorBase : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryItemType_Actor
// Size : 0x30 (Inherited : 0x30)
struct UEnvQueryItemType_Actor : UEnvQueryItemType_ActorBase {
};

// Class AIModule.EnvQueryItemType_Direction
// Size : 0x30 (Inherited : 0x30)
struct UEnvQueryItemType_Direction : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryItemType_Point
// Size : 0x30 (Inherited : 0x30)
struct UEnvQueryItemType_Point : UEnvQueryItemType_VectorBase {
};

// Class AIModule.EnvQueryManager
// Size : 0x140 (Inherited : 0x38)
struct UEnvQueryManager : UAISubsystem {
	unsigned char UnknownData_38[0x0070]; // 0x38(0x70)
	struct TArray<struct FEnvQueryInstanceCache> InstanceCache; // 0xA8(0x10)
	struct TArray<struct UEnvQueryContext*> LocalContexts; // 0xB8(0x10)
	struct TArray<struct UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers; // 0xC8(0x10)
	unsigned char UnknownData_D8[0x0054]; // 0xD8(0x54)
	float MaxAllowedTestingTime; // 0x12C(0x4)
	bool bTestQueriesUsingBreadth; // 0x130(0x1)
	unsigned char UnknownData_131[0x0003]; // 0x131(0x3)
	int32_t QueryCountWarningThreshold; // 0x134(0x4)
	double QueryCountWarningInterval; // 0x138(0x8)

	struct UEnvQueryInstanceBlueprintWrapper* RunEQSQuery(struct UObject* WorldContextObject, struct UEnvQuery* QueryTemplate, struct UObject* Querier, enum class EEnvQueryRunMode RunMode, class UEnvQueryInstanceBlueprintWrapper* WrapperClass); // Function AIModule.EnvQueryManager.RunEQSQuery // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x30, 0x7FF776B02E90
};

// Class AIModule.EnvQueryOption
// Size : 0x40 (Inherited : 0x28)
struct UEnvQueryOption : UObject {
	struct UEnvQueryGenerator* Generator; // 0x28(0x8)
	struct TArray<struct UEnvQueryTest*> Tests; // 0x30(0x10)
};

// Class AIModule.EnvQueryTest
// Size : 0x1F8 (Inherited : 0x30)
struct UEnvQueryTest : UEnvQueryNode {
	int32_t TestOrder; // 0x30(0x4)
	enum class EEnvTestPurpose TestPurpose; // 0x34(0x1)
	unsigned char UnknownData_35[0x0003]; // 0x35(0x3)
	struct FString TestComment; // 0x38(0x10)
	enum class EEnvTestFilterOperator MultipleContextFilterOp; // 0x48(0x1)
	enum class EEnvTestScoreOperator MultipleContextScoreOp; // 0x49(0x1)
	enum class EEnvTestFilterType FilterType; // 0x4A(0x1)
	unsigned char UnknownData_4B[0x0005]; // 0x4B(0x5)
	struct FAIDataProviderBoolValue BoolValue; // 0x50(0x38)
	struct FAIDataProviderFloatValue FloatValueMin; // 0x88(0x38)
	struct FAIDataProviderFloatValue FloatValueMax; // 0xC0(0x38)
	unsigned char UnknownData_F8[0x0001]; // 0xF8(0x1)
	enum class EEnvTestScoreEquation ScoringEquation; // 0xF9(0x1)
	enum class EEnvQueryTestClamping ClampMinType; // 0xFA(0x1)
	enum class EEnvQueryTestClamping ClampMaxType; // 0xFB(0x1)
	enum class EEQSNormalizationType NormalizationType; // 0xFC(0x1)
	unsigned char UnknownData_FD[0x0003]; // 0xFD(0x3)
	struct FAIDataProviderFloatValue ScoreClampMin; // 0x100(0x38)
	struct FAIDataProviderFloatValue ScoreClampMax; // 0x138(0x38)
	struct FAIDataProviderFloatValue ScoringFactor; // 0x170(0x38)
	struct FAIDataProviderFloatValue ReferenceValue; // 0x1A8(0x38)
	bool bDefineReferenceValue; // 0x1E0(0x1)
	unsigned char UnknownData_1E1[0x000F]; // 0x1E1(0xF)
	unsigned char bWorkOnFloatValues : 1; // 0x1F0(0x1)
	unsigned char UnknownData_1F0_1 : 7; // 0x1F0(0x1)
	unsigned char UnknownData_1F1[0x0007]; // 0x1F1(0x7)
};

// Class AIModule.EnvQueryTest_Distance
// Size : 0x208 (Inherited : 0x1F8)
struct UEnvQueryTest_Distance : UEnvQueryTest {
	enum class EEnvTestDistance TestMode; // 0x1F8(0x1)
	unsigned char UnknownData_1F9[0x0007]; // 0x1F9(0x7)
	class UEnvQueryContext* DistanceTo; // 0x200(0x8)
};

// Class AIModule.EnvQueryTest_Dot
// Size : 0x240 (Inherited : 0x1F8)
struct UEnvQueryTest_Dot : UEnvQueryTest {
	struct FEnvDirection LineA; // 0x1F8(0x20)
	struct FEnvDirection LineB; // 0x218(0x20)
	enum class EEnvTestDot TestMode; // 0x238(0x1)
	bool bAbsoluteValue; // 0x239(0x1)
	unsigned char UnknownData_23A[0x0006]; // 0x23A(0x6)
};

// Class AIModule.EnvQueryTest_GameplayTags
// Size : 0x268 (Inherited : 0x1F8)
struct UEnvQueryTest_GameplayTags : UEnvQueryTest {
	struct FGameplayTagQuery TagQueryToMatch; // 0x1F8(0x48)
	bool bUpdatedToUseQuery; // 0x240(0x1)
	enum class EGameplayContainerMatchType TagsToMatch; // 0x241(0x1)
	unsigned char UnknownData_242[0x0006]; // 0x242(0x6)
	struct FGameplayTagContainer GameplayTags; // 0x248(0x20)
};

// Class AIModule.EnvQueryTest_Overlap
// Size : 0x218 (Inherited : 0x1F8)
struct UEnvQueryTest_Overlap : UEnvQueryTest {
	struct FEnvOverlapData OverlapData; // 0x1F8(0x20)
};

// Class AIModule.EnvQueryTest_Pathfinding
// Size : 0x280 (Inherited : 0x1F8)
struct UEnvQueryTest_Pathfinding : UEnvQueryTest {
	enum class EEnvTestPathfinding TestMode; // 0x1F8(0x1)
	unsigned char UnknownData_1F9[0x0007]; // 0x1F9(0x7)
	class UEnvQueryContext* Context; // 0x200(0x8)
	struct FAIDataProviderBoolValue PathFromContext; // 0x208(0x38)
	struct FAIDataProviderBoolValue SkipUnreachable; // 0x240(0x38)
	class UNavigationQueryFilter* FilterClass; // 0x278(0x8)
};

// Class AIModule.EnvQueryTest_PathfindingBatch
// Size : 0x2B8 (Inherited : 0x280)
struct UEnvQueryTest_PathfindingBatch : UEnvQueryTest_Pathfinding {
	struct FAIDataProviderFloatValue ScanRangeMultiplier; // 0x280(0x38)
};

// Class AIModule.EnvQueryTest_Project
// Size : 0x228 (Inherited : 0x1F8)
struct UEnvQueryTest_Project : UEnvQueryTest {
	struct FEnvTraceData ProjectionData; // 0x1F8(0x30)
};

// Class AIModule.EnvQueryTest_Random
// Size : 0x1F8 (Inherited : 0x1F8)
struct UEnvQueryTest_Random : UEnvQueryTest {
};

// Class AIModule.EnvQueryTest_Trace
// Size : 0x2D8 (Inherited : 0x1F8)
struct UEnvQueryTest_Trace : UEnvQueryTest {
	struct FEnvTraceData TraceData; // 0x1F8(0x30)
	struct FAIDataProviderBoolValue TraceFromContext; // 0x228(0x38)
	struct FAIDataProviderFloatValue ItemHeightOffset; // 0x260(0x38)
	struct FAIDataProviderFloatValue ContextHeightOffset; // 0x298(0x38)
	class UEnvQueryContext* Context; // 0x2D0(0x8)
};

// Class AIModule.EnvQueryTest_Volume
// Size : 0x210 (Inherited : 0x1F8)
struct UEnvQueryTest_Volume : UEnvQueryTest {
	class UEnvQueryContext* VolumeContext; // 0x1F8(0x8)
	class AVolume* VolumeClass; // 0x200(0x8)
	unsigned char bDoComplexVolumeTest : 1; // 0x208(0x1)
	unsigned char UnknownData_208_1 : 7; // 0x208(0x1)
	unsigned char UnknownData_209[0x0007]; // 0x209(0x7)
};

// Class AIModule.EnvQueryTypes
// Size : 0x28 (Inherited : 0x28)
struct UEnvQueryTypes : UObject {
};

// Class AIModule.EQSQueryResultSourceInterface
// Size : 0x28 (Inherited : 0x28)
struct UEQSQueryResultSourceInterface : UInterface {
};

// Class AIModule.EQSRenderingComponent
// Size : 0x440 (Inherited : 0x410)
struct UEQSRenderingComponent : UPrimitiveComponent {
	unsigned char UnknownData_410[0x0030]; // 0x410(0x30)
};

// Class AIModule.EQSTestingPawn
// Size : 0x550 (Inherited : 0x4C0)
struct AEQSTestingPawn : ACharacter {
	struct UEnvQuery* QueryTemplate; // 0x4C0(0x8)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0x4C8(0x10)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0x4D8(0x10)
	float TimeLimitPerStep; // 0x4E8(0x4)
	int32_t StepToDebugDraw; // 0x4EC(0x4)
	enum class EEnvQueryHightlightMode HighlightMode; // 0x4F0(0x1)
	unsigned char UnknownData_4F1[0x0003]; // 0x4F1(0x3)
	unsigned char bDrawLabels : 1; // 0x4F4(0x1)
	unsigned char bDrawFailedItems : 1; // 0x4F4(0x1)
	unsigned char bReRunQueryOnlyOnFinishedMove : 1; // 0x4F4(0x1)
	unsigned char bShouldBeVisibleInGame : 1; // 0x4F4(0x1)
	unsigned char bTickDuringGame : 1; // 0x4F4(0x1)
	unsigned char UnknownData_4F4_5 : 3; // 0x4F4(0x1)
	unsigned char UnknownData_4F5[0x0003]; // 0x4F5(0x3)
	enum class EEnvQueryRunMode QueryingMode; // 0x4F8(0x1)
	unsigned char UnknownData_4F9[0x0007]; // 0x4F9(0x7)
	struct FNavAgentProperties NavAgentProperties; // 0x500(0x30)
	unsigned char UnknownData_530[0x0020]; // 0x530(0x20)
};

// Class AIModule.GenericTeamAgentInterface
// Size : 0x28 (Inherited : 0x28)
struct UGenericTeamAgentInterface : UInterface {
};

// Class AIModule.GridPathAIController
// Size : 0x328 (Inherited : 0x328)
struct AGridPathAIController : AAIController {
};

// Class AIModule.GridPathFollowingComponent
// Size : 0x288 (Inherited : 0x258)
struct UGridPathFollowingComponent : UPathFollowingComponent {
	struct UNavLocalGridManager* GridManager; // 0x258(0x8)
	unsigned char UnknownData_260[0x0028]; // 0x260(0x28)
};

// Class AIModule.NavFilter_AIControllerDefault
// Size : 0x48 (Inherited : 0x48)
struct UNavFilter_AIControllerDefault : UNavigationQueryFilter {
};

// Class AIModule.NavLinkProxy
// Size : 0x270 (Inherited : 0x220)
struct ANavLinkProxy : AActor {
	unsigned char UnknownData_220[0x0010]; // 0x220(0x10)
	struct TArray<struct FNavigationLink> PointLinks; // 0x230(0x10)
	struct TArray<struct FNavigationSegmentLink> SegmentLinks; // 0x240(0x10)
	struct UNavLinkCustomComponent* SmartLinkComp; // 0x250(0x8)
	bool bSmartLinkIsRelevant; // 0x258(0x1)
	unsigned char UnknownData_259[0x0007]; // 0x259(0x7)
	struct FMulticastInlineDelegate OnSmartLinkReached; // 0x260(0x10)

	void SetSmartLinkEnabled(bool bEnabled); // Function AIModule.NavLinkProxy.SetSmartLinkEnabled // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF776B067D0
	void ResumePathFollowing(struct AActor* Agent); // Function AIModule.NavLinkProxy.ResumePathFollowing // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF776B064F0
	void ReceiveSmartLinkReached(struct AActor* Agent, struct FVector Destination); // Function AIModule.NavLinkProxy.ReceiveSmartLinkReached // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // Param Size : 0x14, 0x7FF77510D9D0
	bool IsSmartLinkEnabled(); // Function AIModule.NavLinkProxy.IsSmartLinkEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF776B05EA0
	bool HasMovingAgents(); // Function AIModule.NavLinkProxy.HasMovingAgents // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF776B05E70
};

// Class AIModule.NavLocalGridManager
// Size : 0x58 (Inherited : 0x28)
struct UNavLocalGridManager : UObject {
	unsigned char UnknownData_28[0x0030]; // 0x28(0x30)

	bool SetLocalNavigationGridDensity(struct UObject* WorldContextObject, float CellSize); // Function AIModule.NavLocalGridManager.SetLocalNavigationGridDensity // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0xD, 0x7FF776B06570
	void RemoveLocalNavigationGrid(struct UObject* WorldContextObject, int32_t GridId, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.RemoveLocalNavigationGrid // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0xD, 0x7FF776B06400
	bool FindLocalNavigationGridPath(struct UObject* WorldContextObject, struct FVector Start, struct FVector End, struct TArray<struct FVector> PathPoints); // Function AIModule.NavLocalGridManager.FindLocalNavigationGridPath // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x31, 0x7FF776B05C30
	int32_t AddLocalNavigationGridForPoints(struct UObject* WorldContextObject, struct TArray<struct FVector> Locations, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoints // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x28, 0x7FF776B059B0
	int32_t AddLocalNavigationGridForPoint(struct UObject* WorldContextObject, struct FVector Location, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForPoint // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x24, 0x7FF776B05800
	int32_t AddLocalNavigationGridForCapsule(struct UObject* WorldContextObject, struct FVector Location, float CapsuleRadius, float CapsuleHalfHeight, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForCapsule // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x2C, 0x7FF776B05600
	int32_t AddLocalNavigationGridForBox(struct UObject* WorldContextObject, struct FVector Location, struct FVector Extent, struct FRotator Rotation, int32_t Radius2D, float Height, bool bRebuildGrids); // Function AIModule.NavLocalGridManager.AddLocalNavigationGridForBox // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x3C, 0x7FF776B053E0
};

// Class AIModule.PathFollowingManager
// Size : 0x28 (Inherited : 0x28)
struct UPathFollowingManager : UObject {
};

// Class AIModule.PawnAction
// Size : 0x98 (Inherited : 0x28)
struct UPawnAction : UObject {
	struct UPawnAction* ChildAction; // 0x28(0x8)
	struct UPawnAction* ParentAction; // 0x30(0x8)
	struct UPawnActionsComponent* OwnerComponent; // 0x38(0x8)
	struct UObject* Instigator; // 0x40(0x8)
	struct UBrainComponent* BrainComp; // 0x48(0x8)
	unsigned char UnknownData_50[0x0030]; // 0x50(0x30)
	unsigned char bAllowNewSameClassInstance : 1; // 0x80(0x1)
	unsigned char bReplaceActiveSameClassInstance : 1; // 0x80(0x1)
	unsigned char bShouldPauseMovement : 1; // 0x80(0x1)
	unsigned char bAlwaysNotifyOnFinished : 1; // 0x80(0x1)
	unsigned char UnknownData_80_4 : 4; // 0x80(0x1)
	unsigned char UnknownData_81[0x0017]; // 0x81(0x17)

	enum class EAIRequestPriority GetActionPriority(); // Function AIModule.PawnAction.GetActionPriority // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF774D71F70
	void Finish(enum class EPawnActionResult WithResult); // Function AIModule.PawnAction.Finish // (Native|Protected|BlueprintCallable) // Param Size : 0x1, 0x7FF775FD72E0
	struct UPawnAction* CreateActionInstance(struct UObject* WorldContextObject, class UPawnAction* ActionClass); // Function AIModule.PawnAction.CreateActionInstance // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF776B05B70
};

// Class AIModule.PawnAction_BlueprintBase
// Size : 0x98 (Inherited : 0x98)
struct UPawnAction_BlueprintBase : UPawnAction {

	void ActionTick(struct APawn* ControlledPawn, float DeltaSeconds); // Function AIModule.PawnAction_BlueprintBase.ActionTick // (Event|Public|BlueprintEvent) // Param Size : 0xC, 0x7FF77510D9D0
	void ActionStart(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionStart // (Event|Public|BlueprintEvent) // Param Size : 0x8, 0x7FF77510D9D0
	void ActionResume(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionResume // (Event|Public|BlueprintEvent) // Param Size : 0x8, 0x7FF77510D9D0
	void ActionPause(struct APawn* ControlledPawn); // Function AIModule.PawnAction_BlueprintBase.ActionPause // (Event|Public|BlueprintEvent) // Param Size : 0x8, 0x7FF77510D9D0
	void ActionFinished(struct APawn* ControlledPawn, enum class EPawnActionResult WithResult); // Function AIModule.PawnAction_BlueprintBase.ActionFinished // (Event|Public|BlueprintEvent) // Param Size : 0x9, 0x7FF77510D9D0
};

// Class AIModule.PawnAction_Move
// Size : 0xE8 (Inherited : 0x98)
struct UPawnAction_Move : UPawnAction {
	struct AActor* GoalActor; // 0x98(0x8)
	struct FVector GoalLocation; // 0xA0(0xC)
	float AcceptableRadius; // 0xAC(0x4)
	class UNavigationQueryFilter* FilterClass; // 0xB0(0x8)
	unsigned char bAllowStrafe : 1; // 0xB8(0x1)
	unsigned char bFinishOnOverlap : 1; // 0xB8(0x1)
	unsigned char bUsePathfinding : 1; // 0xB8(0x1)
	unsigned char bAllowPartialPath : 1; // 0xB8(0x1)
	unsigned char bProjectGoalToNavigation : 1; // 0xB8(0x1)
	unsigned char bUpdatePathToGoal : 1; // 0xB8(0x1)
	unsigned char bAbortChildActionOnPathChange : 1; // 0xB8(0x1)
	unsigned char UnknownData_B9[0x002F]; // 0xB9(0x2F)
};

// Class AIModule.PawnAction_Repeat
// Size : 0xB8 (Inherited : 0x98)
struct UPawnAction_Repeat : UPawnAction {
	struct UPawnAction* ActionToRepeat; // 0x98(0x8)
	struct UPawnAction* RecentActionCopy; // 0xA0(0x8)
	enum class EPawnActionFailHandling ChildFailureHandlingMode; // 0xA8(0x1)
	unsigned char UnknownData_A9[0x000F]; // 0xA9(0xF)
};

// Class AIModule.PawnAction_Sequence
// Size : 0xC0 (Inherited : 0x98)
struct UPawnAction_Sequence : UPawnAction {
	struct TArray<struct UPawnAction*> ActionSequence; // 0x98(0x10)
	enum class EPawnActionFailHandling ChildFailureHandlingMode; // 0xA8(0x1)
	unsigned char UnknownData_A9[0x0007]; // 0xA9(0x7)
	struct UPawnAction* RecentActionCopy; // 0xB0(0x8)
	unsigned char UnknownData_B8[0x0008]; // 0xB8(0x8)
};

// Class AIModule.PawnAction_Wait
// Size : 0xA8 (Inherited : 0x98)
struct UPawnAction_Wait : UPawnAction {
	float TimeToWait; // 0x98(0x4)
	unsigned char UnknownData_9C[0x000C]; // 0x9C(0xC)
};

// Class AIModule.PawnActionsComponent
// Size : 0xE8 (Inherited : 0xB0)
struct UPawnActionsComponent : UActorComponent {
	struct APawn* ControlledPawn; // 0xB0(0x8)
	struct TArray<struct FPawnActionStack> ActionStacks; // 0xB8(0x10)
	struct TArray<struct FPawnActionEvent> ActionEvents; // 0xC8(0x10)
	struct UPawnAction* CurrentAction; // 0xD8(0x8)
	unsigned char UnknownData_E0[0x0008]; // 0xE0(0x8)

	bool K2_PushAction(struct UPawnAction* NewAction, enum class EAIRequestPriority Priority, struct UObject* Instigator); // Function AIModule.PawnActionsComponent.K2_PushAction // (Final|Native|Public|BlueprintCallable) // Param Size : 0x19, 0x7FF776B060E0
	bool K2_PerformAction(struct APawn* Pawn, struct UPawnAction* Action, enum class EAIRequestPriority Priority); // Function AIModule.PawnActionsComponent.K2_PerformAction // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x12, 0x7FF776B05FF0
	enum class EPawnActionAbortState K2_ForceAbortAction(struct UPawnAction* ActionToAbort); // Function AIModule.PawnActionsComponent.K2_ForceAbortAction // (Final|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF776B05F60
	enum class EPawnActionAbortState K2_AbortAction(struct UPawnAction* ActionToAbort); // Function AIModule.PawnActionsComponent.K2_AbortAction // (Final|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF776B05ED0
};

// Class AIModule.PawnSensingComponent
// Size : 0xF8 (Inherited : 0xB0)
struct UPawnSensingComponent : UActorComponent {
	float HearingThreshold; // 0xB0(0x4)
	float LOSHearingThreshold; // 0xB4(0x4)
	float SightRadius; // 0xB8(0x4)
	float SensingInterval; // 0xBC(0x4)
	float HearingMaxSoundAge; // 0xC0(0x4)
	unsigned char bEnableSensingUpdates : 1; // 0xC4(0x1)
	unsigned char bOnlySensePlayers : 1; // 0xC4(0x1)
	unsigned char bSeePawns : 1; // 0xC4(0x1)
	unsigned char bHearNoises : 1; // 0xC4(0x1)
	unsigned char UnknownData_C4_4 : 4; // 0xC4(0x1)
	unsigned char UnknownData_C5[0x000B]; // 0xC5(0xB)
	struct FMulticastInlineDelegate OnSeePawn; // 0xD0(0x10)
	struct FMulticastInlineDelegate OnHearNoise; // 0xE0(0x10)
	float PeripheralVisionAngle; // 0xF0(0x4)
	float PeripheralVisionCosine; // 0xF4(0x4)

	void SetSensingUpdatesEnabled(bool bEnabled); // Function AIModule.PawnSensingComponent.SetSensingUpdatesEnabled // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF776B06740
	void SetSensingInterval(float NewSensingInterval); // Function AIModule.PawnSensingComponent.SetSensingInterval // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF776B066C0
	void SetPeripheralVisionAngle(float NewPeripheralVisionAngle); // Function AIModule.PawnSensingComponent.SetPeripheralVisionAngle // (BlueprintAuthorityOnly|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF776B06640
	void SeePawnDelegate__DelegateSignature(struct APawn* Pawn); // DelegateFunction AIModule.PawnSensingComponent.SeePawnDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate) // Param Size : 0x8, 0x7FF77510D9D0
	void HearNoiseDelegate__DelegateSignature(struct APawn* Instigator, struct FVector Location, float Volume); // DelegateFunction AIModule.PawnSensingComponent.HearNoiseDelegate__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms|HasDefaults) // Param Size : 0x18, 0x7FF77510D9D0
	float GetPeripheralVisionCosine(); // Function AIModule.PawnSensingComponent.GetPeripheralVisionCosine // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF776B05E50
	float GetPeripheralVisionAngle(); // Function AIModule.PawnSensingComponent.GetPeripheralVisionAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF776B05E30
};

// Class AIModule.VisualLoggerExtension
// Size : 0x28 (Inherited : 0x28)
struct UVisualLoggerExtension : UObject {
};

