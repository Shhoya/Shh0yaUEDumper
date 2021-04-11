// ScriptStruct EngineSettings.AutoCompleteCommand
// Size : 0x28 (Inherited : 0x0)
struct FAutoCompleteCommand {
	struct FString Command; // 0x0(0x10)
	struct FString Desc; // 0x10(0x10)
	unsigned char UnknownData_20[0x0008]; // 0x20(0x8)
};

// ScriptStruct EngineSettings.GameModeName
// Size : 0x28 (Inherited : 0x0)
struct FGameModeName {
	struct FString Name; // 0x0(0x10)
	struct FSoftClassPath GameMode; // 0x10(0x18)
};

