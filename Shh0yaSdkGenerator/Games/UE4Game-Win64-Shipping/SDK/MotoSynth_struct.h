// ScriptStruct MotoSynth.MotoSynthRuntimeSettings
// Size : 0x68 (Inherited : 0x0)
struct FMotoSynthRuntimeSettings {
	bool bSynthToneEnabled; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float SynthToneVolume; // 0x4(0x4)
	float SynthToneFilterFrequency; // 0x8(0x4)
	int32_t SynthOctaveShift; // 0xC(0x4)
	bool bGranularEngineEnabled; // 0x10(0x1)
	unsigned char UnknownData_11[0x0003]; // 0x11(0x3)
	float GranularEngineVolume; // 0x14(0x4)
	float GranularEnginePitchScale; // 0x18(0x4)
	int32_t NumSamplesToCrossfadeBetweenGrains; // 0x1C(0x4)
	int32_t NumGrainTableEntriesPerGrain; // 0x20(0x4)
	int32_t GrainTableRandomOffsetForConstantRPMs; // 0x24(0x4)
	int32_t GrainCrossfadeSamplesForConstantRPMs; // 0x28(0x4)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
	struct UMotoSynthSource* AccelerationSource; // 0x30(0x8)
	struct UMotoSynthSource* DecelerationSource; // 0x38(0x8)
	bool bStereoWidenerEnabled; // 0x40(0x1)
	unsigned char UnknownData_41[0x0003]; // 0x41(0x3)
	float StereoDelayMsec; // 0x44(0x4)
	float StereoFeedback; // 0x48(0x4)
	float StereoWidenerWetlevel; // 0x4C(0x4)
	float StereoWidenerDryLevel; // 0x50(0x4)
	float StereoWidenerDelayRatio; // 0x54(0x4)
	bool bStereoWidenerFilterEnabled; // 0x58(0x1)
	unsigned char UnknownData_59[0x0003]; // 0x59(0x3)
	float StereoWidenerFilterFrequency; // 0x5C(0x4)
	float StereoWidenerFilterQ; // 0x60(0x4)
	unsigned char UnknownData_64[0x0004]; // 0x64(0x4)
};

// ScriptStruct MotoSynth.GrainTableEntry
// Size : 0x8 (Inherited : 0x0)
struct FGrainTableEntry {
	int32_t SampleIndex; // 0x0(0x4)
	float RPM; // 0x4(0x4)
};

