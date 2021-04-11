// Enum GameplayTasks.ETaskResourceOverlapPolicy
enum class FETaskResourceOverlapPolicy : uint8 {
	StartOnTop
	StartAtEnd
	ETaskResourceOverlapPolicy_MAX
};

// Enum GameplayTasks.EGameplayTaskState
enum class FEGameplayTaskState : uint8 {
	Uninitialized
	AwaitingActivation
	Paused
	Active
	Finished
	EGameplayTaskState_MAX
};

// Enum GameplayTasks.EGameplayTaskRunResult
enum class FEGameplayTaskRunResult : uint8 {
	Error
	Failed
	Success_Paused
	Success_Active
	Success_Finished
	EGameplayTaskRunResult_MAX
};

