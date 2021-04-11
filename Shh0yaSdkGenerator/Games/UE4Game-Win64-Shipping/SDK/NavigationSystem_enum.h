// Enum NavigationSystem.ERuntimeGenerationType
enum class FERuntimeGenerationType : uint8 {
	Static
	DynamicModifiersOnly
	Dynamic
	LegacyGeneration
	ERuntimeGenerationType_MAX
};

// Enum NavigationSystem.ENavCostDisplay
enum class FENavCostDisplay : uint8 {
	TotalCost
	HeuristicOnly
	RealCostOnly
	ENavCostDisplay_MAX
};

// Enum NavigationSystem.ENavSystemOverridePolicy
enum class FENavSystemOverridePolicy : uint8 {
	Override
	Append
	Skip
	ENavSystemOverridePolicy_MAX
};

// Enum NavigationSystem.ERecastPartitioning
enum class FERecastPartitioning : uint8 {
	Monotone
	Watershed
	ChunkyMonotone
	ERecastPartitioning_MAX
};

