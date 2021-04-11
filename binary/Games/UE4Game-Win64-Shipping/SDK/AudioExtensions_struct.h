// ScriptStruct AudioExtensions.SoundModulationParameter
// Size : 0x14 (Inherited : 0x0)
struct FSoundModulationParameter {
	struct FName Control; // 0x0(0x8)
	float Value; // 0x8(0x4)
	unsigned char UnknownData_C[0x0008]; // 0xC(0x8)
};

// ScriptStruct AudioExtensions.SoundModulation
// Size : 0x10 (Inherited : 0x0)
struct FSoundModulation {
	struct TArray<struct USoundModulationPluginSourceSettingsBase*> Settings; // 0x0(0x10)
};

