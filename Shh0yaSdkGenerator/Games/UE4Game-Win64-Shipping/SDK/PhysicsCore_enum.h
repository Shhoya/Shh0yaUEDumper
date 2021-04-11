// Enum PhysicsCore.EChaosBufferMode
enum class FEChaosBufferMode : uint8 {
	Double
	Triple
	Num
	Invalid
	EChaosBufferMode_MAX
};

// Enum PhysicsCore.EChaosThreadingMode
enum class FEChaosThreadingMode : uint8 {
	DedicatedThread
	TaskGraph
	SingleThread
	Num
	Invalid
	EChaosThreadingMode_MAX
};

// Enum PhysicsCore.EChaosSolverTickMode
enum class FEChaosSolverTickMode : uint8 {
	Fixed
	Variable
	VariableCapped
	VariableCappedWithTarget
	EChaosSolverTickMode_MAX
};

