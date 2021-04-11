// Enum GameplayTags.EGameplayTagQueryExprType
enum class FEGameplayTagQueryExprType : uint8 {
	Undefined
	AnyTagsMatch
	AllTagsMatch
	NoTagsMatch
	AnyExprMatch
	AllExprMatch
	NoExprMatch
	EGameplayTagQueryExprType_MAX
};

// Enum GameplayTags.EGameplayContainerMatchType
enum class FEGameplayContainerMatchType : uint8 {
	Any
	All
	EGameplayContainerMatchType_MAX
};

// Enum GameplayTags.EGameplayTagMatchType
enum class FEGameplayTagMatchType : uint8 {
	Explicit
	IncludeParentTags
	EGameplayTagMatchType_MAX
};

// Enum GameplayTags.EGameplayTagSelectionType
enum class FEGameplayTagSelectionType : uint8 {
	None
	NonRestrictedOnly
	RestrictedOnly
	All
	EGameplayTagSelectionType_MAX
};

// Enum GameplayTags.EGameplayTagSourceType
enum class FEGameplayTagSourceType : uint8 {
	Native
	DefaultTagList
	TagList
	RestrictedTagList
	DataTable
	Invalid
	EGameplayTagSourceType_MAX
};

