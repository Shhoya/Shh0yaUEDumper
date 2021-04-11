// Enum AIModule.EPathFollowingResult
enum class FEPathFollowingResult : uint8 {
	Success
	Blocked
	OffPath
	Aborted
	Skipped_DEPRECATED
	Invalid
	EPathFollowingResult_MAX
};

// Enum AIModule.EEnvQueryStatus
enum class FEEnvQueryStatus : uint8 {
	Processing
	Success
	Failed
	Aborted
	OwnerLost
	MissingParam
	EEnvQueryStatus_MAX
};

// Enum AIModule.EAISenseNotifyType
enum class FEAISenseNotifyType : uint8 {
	OnEveryPerception
	OnPerceptionChange
	EAISenseNotifyType_MAX
};

// Enum AIModule.EAITaskPriority
enum class FEAITaskPriority : uint8 {
	Lowest
	Low
	AutonomousAI
	High
	Ultimate
	EAITaskPriority_MAX
};

// Enum AIModule.EGenericAICheck
enum class FEGenericAICheck : uint8 {
	Less
	LessOrEqual
	Equal
	NotEqual
	GreaterOrEqual
	Greater
	IsTrue
	MAX
};

// Enum AIModule.EAILockSource
enum class FEAILockSource : uint8 {
	Animation
	Logic
	Script
	Gameplay
	MAX
};

// Enum AIModule.EAIRequestPriority
enum class FEAIRequestPriority : uint8 {
	SoftScript
	Logic
	HardScript
	Reaction
	Ultimate
	MAX
};

// Enum AIModule.EPawnActionEventType
enum class FEPawnActionEventType : uint8 {
	Invalid
	FailedToStart
	InstantAbort
	FinishedAborting
	FinishedExecution
	Push
	EPawnActionEventType_MAX
};

// Enum AIModule.EPawnActionResult
enum class FEPawnActionResult : uint8 {
	NotStarted
	InProgress
	Success
	Failed
	Aborted
	EPawnActionResult_MAX
};

// Enum AIModule.EPawnActionAbortState
enum class FEPawnActionAbortState : uint8 {
	NeverStarted
	NotBeingAborted
	MarkPendingAbort
	LatentAbortInProgress
	AbortDone
	MAX
};

// Enum AIModule.FAIDistanceType
enum class FFAIDistanceType : uint8 {
	Distance3D
	Distance2D
	DistanceZ
	MAX
};

// Enum AIModule.EAIOptionFlag
enum class FEAIOptionFlag : uint8 {
	Default
	Enable
	Disable
	MAX
};

// Enum AIModule.EBTFlowAbortMode
enum class FEBTFlowAbortMode : uint8 {
	None
	LowerPriority
	Self
	Both
	EBTFlowAbortMode_MAX
};

// Enum AIModule.EBTNodeResult
enum class FEBTNodeResult : uint8 {
	Succeeded
	Failed
	Aborted
	InProgress
	EBTNodeResult_MAX
};

// Enum AIModule.ETextKeyOperation
enum class FETextKeyOperation : uint8 {
	Equal
	NotEqual
	Contain
	NotContain
	ETextKeyOperation_MAX
};

// Enum AIModule.EArithmeticKeyOperation
enum class FEArithmeticKeyOperation : uint8 {
	Equal
	NotEqual
	Less
	LessOrEqual
	Greater
	GreaterOrEqual
	EArithmeticKeyOperation_MAX
};

// Enum AIModule.EBasicKeyOperation
enum class FEBasicKeyOperation : uint8 {
	Set
	NotSet
	EBasicKeyOperation_MAX
};

// Enum AIModule.EBTParallelMode
enum class FEBTParallelMode : uint8 {
	AbortBackground
	WaitForBackground
	EBTParallelMode_MAX
};

// Enum AIModule.EBTDecoratorLogic
enum class FEBTDecoratorLogic : uint8 {
	Invalid
	Test
	And
	Or
	Not
	EBTDecoratorLogic_MAX
};

// Enum AIModule.EBTChildIndex
enum class FEBTChildIndex : uint8 {
	FirstNode
	TaskNode
	EBTChildIndex_MAX
};

// Enum AIModule.EBTBlackboardRestart
enum class FEBTBlackboardRestart : uint8 {
	ValueChange
	ResultChange
	EBTBlackboardRestart_MAX
};

// Enum AIModule.EBlackBoardEntryComparison
enum class FEBlackBoardEntryComparison : uint8 {
	Equal
	NotEqual
	EBlackBoardEntryComparison_MAX
};

// Enum AIModule.EPathExistanceQueryType
enum class FEPathExistanceQueryType : uint8 {
	NavmeshRaycast2D
	HierarchicalQuery
	RegularPathFinding
	EPathExistanceQueryType_MAX
};

// Enum AIModule.EPointOnCircleSpacingMethod
enum class FEPointOnCircleSpacingMethod : uint8 {
	BySpaceBetween
	ByNumberOfPoints
	EPointOnCircleSpacingMethod_MAX
};

// Enum AIModule.EEQSNormalizationType
enum class FEEQSNormalizationType : uint8 {
	Absolute
	RelativeToScores
	EEQSNormalizationType_MAX
};

// Enum AIModule.EEnvTestDistance
enum class FEEnvTestDistance : uint8 {
	Distance3D
	Distance2D
	DistanceZ
	DistanceAbsoluteZ
	EEnvTestDistance_MAX
};

// Enum AIModule.EEnvTestDot
enum class FEEnvTestDot : uint8 {
	Dot3D
	Dot2D
	EEnvTestDot_MAX
};

// Enum AIModule.EEnvTestPathfinding
enum class FEEnvTestPathfinding : uint8 {
	PathExist
	PathCost
	PathLength
	EEnvTestPathfinding_MAX
};

// Enum AIModule.EEnvQueryTestClamping
enum class FEEnvQueryTestClamping : uint8 {
	None
	SpecifiedValue
	FilterThreshold
	EEnvQueryTestClamping_MAX
};

// Enum AIModule.EEnvDirection
enum class FEEnvDirection : uint8 {
	TwoPoints
	Rotation
	EEnvDirection_MAX
};

// Enum AIModule.EEnvOverlapShape
enum class FEEnvOverlapShape : uint8 {
	Box
	Sphere
	Capsule
	EEnvOverlapShape_MAX
};

// Enum AIModule.EEnvTraceShape
enum class FEEnvTraceShape : uint8 {
	Line
	Box
	Sphere
	Capsule
	EEnvTraceShape_MAX
};

// Enum AIModule.EEnvQueryTrace
enum class FEEnvQueryTrace : uint8 {
	None
	Navigation
	Geometry
	NavigationOverLedges
	EEnvQueryTrace_MAX
};

// Enum AIModule.EAIParamType
enum class FEAIParamType : uint8 {
	Float
	Int
	Bool
	MAX
};

// Enum AIModule.EEnvQueryParam
enum class FEEnvQueryParam : uint8 {
	Float
	Int
	Bool
	EEnvQueryParam_MAX
};

// Enum AIModule.EEnvQueryRunMode
enum class FEEnvQueryRunMode : uint8 {
	SingleResult
	RandomBest5Pct
	RandomBest25Pct
	AllMatching
	EEnvQueryRunMode_MAX
};

// Enum AIModule.EEnvTestScoreOperator
enum class FEEnvTestScoreOperator : uint8 {
	AverageScore
	MinScore
	MaxScore
	Multiply
	EEnvTestScoreOperator_MAX
};

// Enum AIModule.EEnvTestFilterOperator
enum class FEEnvTestFilterOperator : uint8 {
	AllPass
	AnyPass
	EEnvTestFilterOperator_MAX
};

// Enum AIModule.EEnvTestCost
enum class FEEnvTestCost : uint8 {
	Low
	Medium
	High
	EEnvTestCost_MAX
};

// Enum AIModule.EEnvTestWeight
enum class FEEnvTestWeight : uint8 {
	None
	Square
	Inverse
	Unused
	Constant
	Skip
	EEnvTestWeight_MAX
};

// Enum AIModule.EEnvTestScoreEquation
enum class FEEnvTestScoreEquation : uint8 {
	Linear
	Square
	InverseLinear
	SquareRoot
	Constant
	EEnvTestScoreEquation_MAX
};

// Enum AIModule.EEnvTestFilterType
enum class FEEnvTestFilterType : uint8 {
	Minimum
	Maximum
	Range
	Match
	EEnvTestFilterType_MAX
};

// Enum AIModule.EEnvTestPurpose
enum class FEEnvTestPurpose : uint8 {
	Filter
	Score
	FilterAndScore
	EEnvTestPurpose_MAX
};

// Enum AIModule.EEnvQueryHightlightMode
enum class FEEnvQueryHightlightMode : uint8 {
	All
	Best5Pct
	Best25Pct
	EEnvQueryHightlightMode_MAX
};

// Enum AIModule.ETeamAttitude
enum class FETeamAttitude : uint8 {
	Friendly
	Neutral
	Hostile
	ETeamAttitude_MAX
};

// Enum AIModule.EPathFollowingRequestResult
enum class FEPathFollowingRequestResult : uint8 {
	Failed
	AlreadyAtGoal
	RequestSuccessful
	EPathFollowingRequestResult_MAX
};

// Enum AIModule.EPathFollowingAction
enum class FEPathFollowingAction : uint8 {
	Error
	NoMove
	DirectMove
	PartialPath
	PathToGoal
	EPathFollowingAction_MAX
};

// Enum AIModule.EPathFollowingStatus
enum class FEPathFollowingStatus : uint8 {
	Idle
	Waiting
	Paused
	Moving
	EPathFollowingStatus_MAX
};

// Enum AIModule.EPawnActionFailHandling
enum class FEPawnActionFailHandling : uint8 {
	RequireSuccess
	IgnoreFailure
	EPawnActionFailHandling_MAX
};

// Enum AIModule.EPawnSubActionTriggeringPolicy
enum class FEPawnSubActionTriggeringPolicy : uint8 {
	CopyBeforeTriggering
	ReuseInstances
	EPawnSubActionTriggeringPolicy_MAX
};

// Enum AIModule.EPawnActionMoveMode
enum class FEPawnActionMoveMode : uint8 {
	UsePathfinding
	StraightLine
	EPawnActionMoveMode_MAX
};

