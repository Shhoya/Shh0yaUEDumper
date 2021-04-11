// ScriptStruct Slate.VirtualKeyboardOptions
// Size : 0x1 (Inherited : 0x0)
struct FVirtualKeyboardOptions {
	bool bEnableAutocorrect; // 0x0(0x1)
};

// ScriptStruct Slate.InputChord
// Size : 0x20 (Inherited : 0x0)
struct FInputChord {
	struct FKey Key; // 0x0(0x18)
	unsigned char bShift : 1; // 0x18(0x1)
	unsigned char bCtrl : 1; // 0x18(0x1)
	unsigned char bAlt : 1; // 0x18(0x1)
	unsigned char bCmd : 1; // 0x18(0x1)
	unsigned char UnknownData_18_4 : 4; // 0x18(0x1)
	unsigned char UnknownData_19[0x0007]; // 0x19(0x7)
};

// ScriptStruct Slate.Anchors
// Size : 0x10 (Inherited : 0x0)
struct FAnchors {
	struct FVector2D Minimum; // 0x0(0x8)
	struct FVector2D Maximum; // 0x8(0x8)
};

// ScriptStruct Slate.CustomizedToolMenu
// Size : 0x1E8 (Inherited : 0x0)
struct FCustomizedToolMenu {
	struct FName Name; // 0x0(0x8)
	struct TMap<struct FName, struct FCustomizedToolMenuEntry> Entries; // 0x8(0x50)
	struct TMap<struct FName, struct FCustomizedToolMenuSection> Sections; // 0x58(0x50)
	struct TMap<struct FName, struct FCustomizedToolMenuNameArray> EntryOrder; // 0xA8(0x50)
	struct TArray<struct FName> SectionOrder; // 0xF8(0x10)
	unsigned char UnknownData_108[0x00E0]; // 0x108(0xE0)
};

// ScriptStruct Slate.CustomizedToolMenuNameArray
// Size : 0x10 (Inherited : 0x0)
struct FCustomizedToolMenuNameArray {
	struct TArray<struct FName> Names; // 0x0(0x10)
};

// ScriptStruct Slate.CustomizedToolMenuSection
// Size : 0x4 (Inherited : 0x0)
struct FCustomizedToolMenuSection {
	enum class ECustomizedToolMenuVisibility Visibility; // 0x0(0x4)
};

// ScriptStruct Slate.CustomizedToolMenuEntry
// Size : 0x4 (Inherited : 0x0)
struct FCustomizedToolMenuEntry {
	enum class ECustomizedToolMenuVisibility Visibility; // 0x0(0x4)
};

