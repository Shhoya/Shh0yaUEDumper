// ScriptStruct AIModule.AIRequestID
// Size : 0x4 (Inherited : 0x0)
struct FAIRequestID {
	uint32_t RequestID; // 0x0(0x4)
};

// ScriptStruct AIModule.AIStimulus
// Size : 0x3C (Inherited : 0x0)
struct FAIStimulus {
	float Age; // 0x0(0x4)
	float ExpirationAge; // 0x4(0x4)
	float Strength; // 0x8(0x4)
	struct FVector StimulusLocation; // 0xC(0xC)
	struct FVector ReceiverLocation; // 0x18(0xC)
	struct FName Tag; // 0x24(0x8)
	unsigned char UnknownData_2C[0x000C]; // 0x2C(0xC)
	unsigned char UnknownData_38_0 : 1; // 0x38(0x1)
	unsigned char bSuccessfullySensed : 1; // 0x38(0x1)
	unsigned char UnknownData_38_2 : 6; // 0x38(0x1)
	unsigned char UnknownData_39[0x0003]; // 0x39(0x3)
};

// ScriptStruct AIModule.AIDataProviderValue
// Size : 0x20 (Inherited : 0x0)
struct FAIDataProviderValue {
	unsigned char UnknownData_0[0x0010]; // 0x0(0x10)
	struct UAIDataProvider* DataBinding; // 0x10(0x8)
	struct FName DataField; // 0x18(0x8)
};

// ScriptStruct AIModule.AIDataProviderTypedValue
// Size : 0x30 (Inherited : 0x20)
struct FAIDataProviderTypedValue : FAIDataProviderValue {
	class UObject* PropertyType; // 0x20(0x8)
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// ScriptStruct AIModule.AIDataProviderBoolValue
// Size : 0x38 (Inherited : 0x30)
struct FAIDataProviderBoolValue : FAIDataProviderTypedValue {
	bool DefaultValue; // 0x30(0x1)
	unsigned char UnknownData_31[0x0007]; // 0x31(0x7)
};

// ScriptStruct AIModule.AIDataProviderFloatValue
// Size : 0x38 (Inherited : 0x30)
struct FAIDataProviderFloatValue : FAIDataProviderTypedValue {
	float DefaultValue; // 0x30(0x4)
	unsigned char UnknownData_34[0x0004]; // 0x34(0x4)
};

// ScriptStruct AIModule.AIDataProviderIntValue
// Size : 0x38 (Inherited : 0x30)
struct FAIDataProviderIntValue : FAIDataProviderTypedValue {
	int32_t DefaultValue; // 0x30(0x4)
	unsigned char UnknownData_34[0x0004]; // 0x34(0x4)
};

// ScriptStruct AIModule.AIDataProviderStructValue
// Size : 0x30 (Inherited : 0x20)
struct FAIDataProviderStructValue : FAIDataProviderValue {
	unsigned char UnknownData_20[0x0010]; // 0x20(0x10)
};

// ScriptStruct AIModule.ActorPerceptionBlueprintInfo
// Size : 0x20 (Inherited : 0x0)
struct FActorPerceptionBlueprintInfo {
	struct AActor* Target; // 0x0(0x8)
	struct TArray<struct FAIStimulus> LastSensedStimuli; // 0x8(0x10)
	unsigned char bIsHostile : 1; // 0x18(0x1)
	unsigned char UnknownData_18_1 : 7; // 0x18(0x1)
	unsigned char UnknownData_19[0x0007]; // 0x19(0x7)
};

// ScriptStruct AIModule.AISenseAffiliationFilter
// Size : 0x4 (Inherited : 0x0)
struct FAISenseAffiliationFilter {
	unsigned char bDetectEnemies : 1; // 0x0(0x1)
	unsigned char bDetectNeutrals : 1; // 0x0(0x1)
	unsigned char bDetectFriendlies : 1; // 0x0(0x1)
	unsigned char UnknownData_0_3 : 5; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
};

// ScriptStruct AIModule.AIDamageEvent
// Size : 0x30 (Inherited : 0x0)
struct FAIDamageEvent {
	float Amount; // 0x0(0x4)
	struct FVector Location; // 0x4(0xC)
	struct FVector HitLocation; // 0x10(0xC)
	unsigned char UnknownData_1C[0x0004]; // 0x1C(0x4)
	struct AActor* DamagedActor; // 0x20(0x8)
	struct AActor* Instigator; // 0x28(0x8)
};

// ScriptStruct AIModule.AINoiseEvent
// Size : 0x30 (Inherited : 0x0)
struct FAINoiseEvent {
	unsigned char UnknownData_0[0x0004]; // 0x0(0x4)
	struct FVector NoiseLocation; // 0x4(0xC)
	float Loudness; // 0x10(0x4)
	float MaxRange; // 0x14(0x4)
	struct AActor* Instigator; // 0x18(0x8)
	struct FName Tag; // 0x20(0x8)
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// ScriptStruct AIModule.AIPredictionEvent
// Size : 0x18 (Inherited : 0x0)
struct FAIPredictionEvent {
	struct AActor* Requestor; // 0x0(0x8)
	struct AActor* PredictedActor; // 0x8(0x8)
	unsigned char UnknownData_10[0x0008]; // 0x10(0x8)
};

// ScriptStruct AIModule.AISightEvent
// Size : 0x18 (Inherited : 0x0)
struct FAISightEvent {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
	struct AActor* SeenActor; // 0x8(0x8)
	struct AActor* Observer; // 0x10(0x8)
};

// ScriptStruct AIModule.AITeamStimulusEvent
// Size : 0x38 (Inherited : 0x0)
struct FAITeamStimulusEvent {
	unsigned char UnknownData_0[0x0028]; // 0x0(0x28)
	struct AActor* Broadcaster; // 0x28(0x8)
	struct AActor* Enemy; // 0x30(0x8)
};

// ScriptStruct AIModule.AITouchEvent
// Size : 0x20 (Inherited : 0x0)
struct FAITouchEvent {
	unsigned char UnknownData_0[0x0010]; // 0x0(0x10)
	struct AActor* TouchReceiver; // 0x10(0x8)
	struct AActor* OtherActor; // 0x18(0x8)
};

// ScriptStruct AIModule.IntervalCountdown
// Size : 0x8 (Inherited : 0x0)
struct FIntervalCountdown {
	float Interval; // 0x0(0x4)
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
};

// ScriptStruct AIModule.AIMoveRequest
// Size : 0x40 (Inherited : 0x0)
struct FAIMoveRequest {
	struct AActor* GoalActor; // 0x0(0x8)
	unsigned char UnknownData_8[0x0038]; // 0x8(0x38)
};

// ScriptStruct AIModule.BehaviorTreeTemplateInfo
// Size : 0x18 (Inherited : 0x0)
struct FBehaviorTreeTemplateInfo {
	struct UBehaviorTree* Asset; // 0x0(0x8)
	struct UBTCompositeNode* Template; // 0x8(0x8)
	unsigned char UnknownData_10[0x0008]; // 0x10(0x8)
};

// ScriptStruct AIModule.BlackboardKeySelector
// Size : 0x28 (Inherited : 0x0)
struct FBlackboardKeySelector {
	struct TArray<struct UBlackboardKeyType*> AllowedTypes; // 0x0(0x10)
	struct FName SelectedKeyName; // 0x10(0x8)
	class UBlackboardKeyType* SelectedKeyType; // 0x18(0x8)
	enum class None SelectedKeyID; // 0x20(0x1)
	unsigned char UnknownData_21[0x0003]; // 0x21(0x3)
	unsigned char bNoneIsAllowedValue : 1; // 0x24(0x1)
	unsigned char UnknownData_24_1 : 7; // 0x24(0x1)
	unsigned char UnknownData_25[0x0003]; // 0x25(0x3)
};

// ScriptStruct AIModule.BlackboardEntry
// Size : 0x18 (Inherited : 0x0)
struct FBlackboardEntry {
	struct FName EntryName; // 0x0(0x8)
	struct UBlackboardKeyType* KeyType; // 0x8(0x8)
	unsigned char bInstanceSynced : 1; // 0x10(0x1)
	unsigned char UnknownData_10_1 : 7; // 0x10(0x1)
	unsigned char UnknownData_11[0x0007]; // 0x11(0x7)
};

// ScriptStruct AIModule.BTCompositeChild
// Size : 0x30 (Inherited : 0x0)
struct FBTCompositeChild {
	struct UBTCompositeNode* ChildComposite; // 0x0(0x8)
	struct UBTTaskNode* ChildTask; // 0x8(0x8)
	struct TArray<struct UBTDecorator*> Decorators; // 0x10(0x10)
	struct TArray<struct FBTDecoratorLogic> DecoratorOps; // 0x20(0x10)
};

// ScriptStruct AIModule.BTDecoratorLogic
// Size : 0x4 (Inherited : 0x0)
struct FBTDecoratorLogic {
	enum class EBTDecoratorLogic Operation; // 0x0(0x1)
	unsigned char UnknownData_1[0x0001]; // 0x1(0x1)
	uint16 Number; // 0x2(0x2)
};

// ScriptStruct AIModule.CrowdAvoidanceSamplingPattern
// Size : 0x20 (Inherited : 0x0)
struct FCrowdAvoidanceSamplingPattern {
	struct TArray<float> Angles; // 0x0(0x10)
	struct TArray<float> Radii; // 0x10(0x10)
};

// ScriptStruct AIModule.CrowdAvoidanceConfig
// Size : 0x1C (Inherited : 0x0)
struct FCrowdAvoidanceConfig {
	float VelocityBias; // 0x0(0x4)
	float DesiredVelocityWeight; // 0x4(0x4)
	float CurrentVelocityWeight; // 0x8(0x4)
	float SideBiasWeight; // 0xC(0x4)
	float ImpactTimeWeight; // 0x10(0x4)
	float ImpactTimeRange; // 0x14(0x4)
	enum class None CustomPatternIdx; // 0x18(0x1)
	enum class None AdaptiveDivisions; // 0x19(0x1)
	enum class None AdaptiveRings; // 0x1A(0x1)
	enum class None AdaptiveDepth; // 0x1B(0x1)
};

// ScriptStruct AIModule.EnvQueryInstanceCache
// Size : 0x178 (Inherited : 0x0)
struct FEnvQueryInstanceCache {
	struct UEnvQuery* Template; // 0x0(0x8)
	unsigned char UnknownData_8[0x0170]; // 0x8(0x170)
};

// ScriptStruct AIModule.EnvQueryRequest
// Size : 0x68 (Inherited : 0x0)
struct FEnvQueryRequest {
	struct UEnvQuery* QueryTemplate; // 0x0(0x8)
	struct UObject* Owner; // 0x8(0x8)
	struct UWorld* World; // 0x10(0x8)
	unsigned char UnknownData_18[0x0050]; // 0x18(0x50)
};

// ScriptStruct AIModule.EQSParametrizedQueryExecutionRequest
// Size : 0x48 (Inherited : 0x0)
struct FEQSParametrizedQueryExecutionRequest {
	struct UEnvQuery* QueryTemplate; // 0x0(0x8)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0x8(0x10)
	struct FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18(0x28)
	enum class EEnvQueryRunMode RunMode; // 0x40(0x1)
	unsigned char UnknownData_41[0x0003]; // 0x41(0x3)
	unsigned char bUseBBKeyForQueryTemplate : 1; // 0x44(0x1)
	unsigned char UnknownData_44_1 : 7; // 0x44(0x1)
	unsigned char UnknownData_45[0x0003]; // 0x45(0x3)
};

// ScriptStruct AIModule.AIDynamicParam
// Size : 0x38 (Inherited : 0x0)
struct FAIDynamicParam {
	struct FName ParamName; // 0x0(0x8)
	enum class EAIParamType ParamType; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
	float Value; // 0xC(0x4)
	struct FBlackboardKeySelector BBKey; // 0x10(0x28)
};

// ScriptStruct AIModule.EnvQueryResult
// Size : 0x40 (Inherited : 0x0)
struct FEnvQueryResult {
	unsigned char UnknownData_0[0x0010]; // 0x0(0x10)
	class UEnvQueryItemType* ItemType; // 0x10(0x8)
	unsigned char UnknownData_18[0x0014]; // 0x18(0x14)
	int32_t OptionIndex; // 0x2C(0x4)
	int32_t QueryID; // 0x30(0x4)
	unsigned char UnknownData_34[0x000C]; // 0x34(0xC)
};

// ScriptStruct AIModule.EnvOverlapData
// Size : 0x20 (Inherited : 0x0)
struct FEnvOverlapData {
	float ExtentX; // 0x0(0x4)
	float ExtentY; // 0x4(0x4)
	float ExtentZ; // 0x8(0x4)
	struct FVector ShapeOffset; // 0xC(0xC)
	enum class ECollisionChannel OverlapChannel; // 0x18(0x1)
	enum class EEnvOverlapShape OverlapShape; // 0x19(0x1)
	unsigned char UnknownData_1A[0x0002]; // 0x1A(0x2)
	unsigned char bOnlyBlockingHits : 1; // 0x1C(0x1)
	unsigned char bOverlapComplex : 1; // 0x1C(0x1)
	unsigned char bSkipOverlapQuerier : 1; // 0x1C(0x1)
	unsigned char UnknownData_1C_3 : 5; // 0x1C(0x1)
	unsigned char UnknownData_1D[0x0003]; // 0x1D(0x3)
};

// ScriptStruct AIModule.EnvTraceData
// Size : 0x30 (Inherited : 0x0)
struct FEnvTraceData {
	int32_t VersionNum; // 0x0(0x4)
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
	class UNavigationQueryFilter* NavigationFilter; // 0x8(0x8)
	float ProjectDown; // 0x10(0x4)
	float ProjectUp; // 0x14(0x4)
	float ExtentX; // 0x18(0x4)
	float ExtentY; // 0x1C(0x4)
	float ExtentZ; // 0x20(0x4)
	float PostProjectionVerticalOffset; // 0x24(0x4)
	enum class ETraceTypeQuery TraceChannel; // 0x28(0x1)
	enum class ECollisionChannel SerializedChannel; // 0x29(0x1)
	enum class EEnvTraceShape TraceShape; // 0x2A(0x1)
	enum class EEnvQueryTrace TraceMode; // 0x2B(0x1)
	unsigned char bTraceComplex : 1; // 0x2C(0x1)
	unsigned char bOnlyBlockingHits : 1; // 0x2C(0x1)
	unsigned char bCanTraceOnNavMesh : 1; // 0x2C(0x1)
	unsigned char bCanTraceOnGeometry : 1; // 0x2C(0x1)
	unsigned char bCanDisableTrace : 1; // 0x2C(0x1)
	unsigned char bCanProjectDown : 1; // 0x2C(0x1)
	unsigned char UnknownData_2C_6 : 2; // 0x2C(0x1)
	unsigned char UnknownData_2D[0x0003]; // 0x2D(0x3)
};

// ScriptStruct AIModule.EnvDirection
// Size : 0x20 (Inherited : 0x0)
struct FEnvDirection {
	class UEnvQueryContext* LineFrom; // 0x0(0x8)
	class UEnvQueryContext* LineTo; // 0x8(0x8)
	class UEnvQueryContext* Rotation; // 0x10(0x8)
	enum class EEnvDirection DirMode; // 0x18(0x1)
	unsigned char UnknownData_19[0x0007]; // 0x19(0x7)
};

// ScriptStruct AIModule.EnvNamedValue
// Size : 0x10 (Inherited : 0x0)
struct FEnvNamedValue {
	struct FName ParamName; // 0x0(0x8)
	enum class EAIParamType ParamType; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
	float Value; // 0xC(0x4)
};

// ScriptStruct AIModule.GenericTeamId
// Size : 0x1 (Inherited : 0x0)
struct FGenericTeamId {
	enum class None TeamID; // 0x0(0x1)
};

// ScriptStruct AIModule.PawnActionStack
// Size : 0x8 (Inherited : 0x0)
struct FPawnActionStack {
	struct UPawnAction* TopAction; // 0x0(0x8)
};

// ScriptStruct AIModule.PawnActionEvent
// Size : 0x18 (Inherited : 0x0)
struct FPawnActionEvent {
	struct UPawnAction* Action; // 0x0(0x8)
	unsigned char UnknownData_8[0x0010]; // 0x8(0x10)
};

