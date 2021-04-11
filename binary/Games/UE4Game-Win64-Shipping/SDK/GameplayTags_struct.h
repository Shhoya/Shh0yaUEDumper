// ScriptStruct GameplayTags.GameplayTagQuery
// Size : 0x48 (Inherited : 0x0)
struct FGameplayTagQuery {
	int32_t TokenStreamVersion; // 0x0(0x4)
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
	struct TArray<struct FGameplayTag> TagDictionary; // 0x8(0x10)
	struct TArray<enum class None> QueryTokenStream; // 0x18(0x10)
	struct FString UserDescription; // 0x28(0x10)
	struct FString AutoDescription; // 0x38(0x10)
};

// ScriptStruct GameplayTags.GameplayTag
// Size : 0x8 (Inherited : 0x0)
struct FGameplayTag {
	struct FName TagName; // 0x0(0x8)
};

// ScriptStruct GameplayTags.GameplayTagCreationWidgetHelper
// Size : 0x1 (Inherited : 0x0)
struct FGameplayTagCreationWidgetHelper {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
};

// ScriptStruct GameplayTags.GameplayTagReferenceHelper
// Size : 0x10 (Inherited : 0x0)
struct FGameplayTagReferenceHelper {
	unsigned char UnknownData_0[0x0010]; // 0x0(0x10)
};

// ScriptStruct GameplayTags.GameplayTagContainer
// Size : 0x20 (Inherited : 0x0)
struct FGameplayTagContainer {
	struct TArray<struct FGameplayTag> GameplayTags; // 0x0(0x10)
	struct TArray<struct FGameplayTag> ParentTags; // 0x10(0x10)
};

// ScriptStruct GameplayTags.GameplayTagNode
// Size : 0x50 (Inherited : 0x0)
struct FGameplayTagNode {
	unsigned char UnknownData_0[0x0050]; // 0x0(0x50)
};

// ScriptStruct GameplayTags.GameplayTagSource
// Size : 0x20 (Inherited : 0x0)
struct FGameplayTagSource {
	struct FName SourceName; // 0x0(0x8)
	enum class EGameplayTagSourceType SourceType; // 0x8(0x1)
	unsigned char UnknownData_9[0x0007]; // 0x9(0x7)
	struct UGameplayTagsList* SourceTagList; // 0x10(0x8)
	struct URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18(0x8)
};

// ScriptStruct GameplayTags.GameplayTagTableRow
// Size : 0x20 (Inherited : 0x8)
struct FGameplayTagTableRow : FTableRowBase {
	struct FName Tag; // 0x8(0x8)
	struct FString DevComment; // 0x10(0x10)
};

// ScriptStruct GameplayTags.RestrictedGameplayTagTableRow
// Size : 0x28 (Inherited : 0x20)
struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow {
	bool bAllowNonRestrictedChildren; // 0x20(0x1)
	unsigned char UnknownData_21[0x0007]; // 0x21(0x7)
};

// ScriptStruct GameplayTags.RestrictedConfigInfo
// Size : 0x20 (Inherited : 0x0)
struct FRestrictedConfigInfo {
	struct FString RestrictedConfigName; // 0x0(0x10)
	struct TArray<struct FString> Owners; // 0x10(0x10)
};

// ScriptStruct GameplayTags.GameplayTagCategoryRemap
// Size : 0x20 (Inherited : 0x0)
struct FGameplayTagCategoryRemap {
	struct FString BaseCategory; // 0x0(0x10)
	struct TArray<struct FString> RemapCategories; // 0x10(0x10)
};

// ScriptStruct GameplayTags.GameplayTagRedirect
// Size : 0x10 (Inherited : 0x0)
struct FGameplayTagRedirect {
	struct FName OldTagName; // 0x0(0x8)
	struct FName NewTagName; // 0x8(0x8)
};

