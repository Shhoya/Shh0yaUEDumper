// ScriptStruct AssetRegistry.ARFilter
// Size : 0xE8 (Inherited : 0x0)
struct FARFilter {
	struct TArray<struct FName> PackageNames; // 0x0(0x10)
	struct TArray<struct FName> PackagePaths; // 0x10(0x10)
	struct TArray<struct FName> ObjectPaths; // 0x20(0x10)
	struct TArray<struct FName> ClassNames; // 0x30(0x10)
	unsigned char UnknownData_40[0x0050]; // 0x40(0x50)
	struct TSet<struct FName> RecursiveClassesExclusionSet; // 0x90(0x50)
	bool bRecursivePaths; // 0xE0(0x1)
	bool bRecursiveClasses; // 0xE1(0x1)
	bool bIncludeOnlyOnDiskAssets; // 0xE2(0x1)
	unsigned char UnknownData_E3[0x0005]; // 0xE3(0x5)
};

// ScriptStruct AssetRegistry.AssetBundleData
// Size : 0x10 (Inherited : 0x0)
struct FAssetBundleData {
	struct TArray<struct FAssetBundleEntry> Bundles; // 0x0(0x10)
};

// ScriptStruct AssetRegistry.AssetBundleEntry
// Size : 0x28 (Inherited : 0x0)
struct FAssetBundleEntry {
	struct FPrimaryAssetId BundleScope; // 0x0(0x10)
	struct FName BundleName; // 0x10(0x8)
	struct TArray<struct FSoftObjectPath> BundleAssets; // 0x18(0x10)
};

// ScriptStruct AssetRegistry.AssetData
// Size : 0x50 (Inherited : 0x0)
struct FAssetData {
	struct FName ObjectPath; // 0x0(0x8)
	struct FName PackageName; // 0x8(0x8)
	struct FName PackagePath; // 0x10(0x8)
	struct FName AssetName; // 0x18(0x8)
	struct FName AssetClass; // 0x20(0x8)
	unsigned char UnknownData_28[0x0028]; // 0x28(0x28)
};

// ScriptStruct AssetRegistry.TagAndValue
// Size : 0x18 (Inherited : 0x0)
struct FTagAndValue {
	struct FName Tag; // 0x0(0x8)
	struct FString Value; // 0x8(0x10)
};

// ScriptStruct AssetRegistry.AssetRegistryDependencyOptions
// Size : 0x5 (Inherited : 0x0)
struct FAssetRegistryDependencyOptions {
	bool bIncludeSoftPackageReferences; // 0x0(0x1)
	bool bIncludeHardPackageReferences; // 0x1(0x1)
	bool bIncludeSearchableNames; // 0x2(0x1)
	bool bIncludeSoftManagementReferences; // 0x3(0x1)
	bool bIncludeHardManagementReferences; // 0x4(0x1)
};

