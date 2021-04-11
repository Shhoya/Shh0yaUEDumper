// ScriptStruct LuminRuntimeSettings.LocalizedIconInfos
// Size : 0x10 (Inherited : 0x0)
struct FLocalizedIconInfos {
	struct TArray<struct FLocalizedIconInfo> IconData; // 0x0(0x10)
};

// ScriptStruct LuminRuntimeSettings.LocalizedIconInfo
// Size : 0x30 (Inherited : 0x0)
struct FLocalizedIconInfo {
	struct FString LanguageCode; // 0x0(0x10)
	struct FDirectoryPath IconModelPath; // 0x10(0x10)
	struct FDirectoryPath IconPortalPath; // 0x20(0x10)
};

// ScriptStruct LuminRuntimeSettings.LocalizedAppName
// Size : 0x20 (Inherited : 0x0)
struct FLocalizedAppName {
	struct FString LanguageCode; // 0x0(0x10)
	struct FString AppName; // 0x10(0x10)
};

// ScriptStruct LuminRuntimeSettings.LuminComponentElement
// Size : 0x48 (Inherited : 0x0)
struct FLuminComponentElement {
	struct FString Name; // 0x0(0x10)
	struct FString VisibleName; // 0x10(0x10)
	struct FString ExecutableName; // 0x20(0x10)
	enum class ELuminComponentType ComponentType; // 0x30(0x1)
	unsigned char UnknownData_31[0x0007]; // 0x31(0x7)
	struct TArray<struct FLuminComponentSubElement> ExtraComponentSubElements; // 0x38(0x10)
};

// ScriptStruct LuminRuntimeSettings.LuminComponentSubElement
// Size : 0x18 (Inherited : 0x0)
struct FLuminComponentSubElement {
	enum class ELuminComponentSubElementType ElementType; // 0x0(0x1)
	unsigned char UnknownData_1[0x0007]; // 0x1(0x7)
	struct FString Value; // 0x8(0x10)
};

