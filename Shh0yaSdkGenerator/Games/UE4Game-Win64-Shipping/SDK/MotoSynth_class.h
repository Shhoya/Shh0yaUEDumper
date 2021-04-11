// Class MotoSynth.MotoSynthPreset
// Size : 0x90 (Inherited : 0x28)
struct UMotoSynthPreset : UObject {
	struct FMotoSynthRuntimeSettings Settings; // 0x28(0x68)
};

// Class MotoSynth.MotoSynthSource
// Size : 0xF8 (Inherited : 0x28)
struct UMotoSynthSource : UObject {
	bool bConvertTo8Bit; // 0x28(0x1)
	unsigned char UnknownData_29[0x0003]; // 0x29(0x3)
	float DownSampleFactor; // 0x2C(0x4)
	struct FRuntimeFloatCurve RPMCurve; // 0x30(0x88)
	struct TArray<float> SourceData; // 0xB8(0x10)
	struct TArray<int16_t> SourceDataPCM; // 0xC8(0x10)
	int32_t SourceSampleRate; // 0xD8(0x4)
	unsigned char UnknownData_DC[0x0004]; // 0xDC(0x4)
	struct TArray<struct FGrainTableEntry> GrainTable; // 0xE0(0x10)
	unsigned char UnknownData_F0[0x0008]; // 0xF0(0x8)
};

// Class MotoSynth.SynthComponentMoto
// Size : 0x780 (Inherited : 0x6C0)
struct USynthComponentMoto : USynthComponent {
	struct UMotoSynthPreset* MotoSynthPreset; // 0x6C0(0x8)
	float RPM; // 0x6C8(0x4)
	unsigned char UnknownData_6CC[0x00B4]; // 0x6CC(0xB4)

	void SetSettings(struct FMotoSynthRuntimeSettings InSettings); // Function MotoSynth.SynthComponentMoto.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x68, 0x7FF624943780
	void SetRPM(float InRPM, float InTimeSec); // Function MotoSynth.SynthComponentMoto.SetRPM // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF6249436B0
	bool IsEnabled(); // Function MotoSynth.SynthComponentMoto.IsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF624943680
	void GetRPMRange(float OutMinRPM, float OutMaxRPM); // Function MotoSynth.SynthComponentMoto.GetRPMRange // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x8, 0x7FF6249435A0
};

