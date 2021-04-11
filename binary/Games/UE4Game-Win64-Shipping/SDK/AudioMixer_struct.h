// ScriptStruct AudioMixer.SubmixEffectDynamicsProcessorSettings
// Size : 0x50 (Inherited : 0x0)
struct FSubmixEffectDynamicsProcessorSettings {
	enum class ESubmixEffectDynamicsProcessorType DynamicsProcessorType; // 0x0(0x1)
	enum class ESubmixEffectDynamicsPeakMode PeakMode; // 0x1(0x1)
	enum class ESubmixEffectDynamicsChannelLinkMode LinkMode; // 0x2(0x1)
	unsigned char UnknownData_3[0x0001]; // 0x3(0x1)
	float InputGainDb; // 0x4(0x4)
	float ThresholdDb; // 0x8(0x4)
	float Ratio; // 0xC(0x4)
	float KneeBandwidthDb; // 0x10(0x4)
	float LookAheadMsec; // 0x14(0x4)
	float AttackTimeMsec; // 0x18(0x4)
	float ReleaseTimeMsec; // 0x1C(0x4)
	struct USoundSubmix* ExternalSubmix; // 0x20(0x8)
	unsigned char bChannelLinked : 1; // 0x28(0x1)
	unsigned char bAnalogMode : 1; // 0x28(0x1)
	unsigned char bKeyAudition : 1; // 0x28(0x1)
	unsigned char UnknownData_28_3 : 5; // 0x28(0x1)
	unsigned char UnknownData_29[0x0003]; // 0x29(0x3)
	float KeyGainDb; // 0x2C(0x4)
	float OutputGainDb; // 0x30(0x4)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf; // 0x34(0xC)
	struct FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf; // 0x40(0xC)
	unsigned char UnknownData_4C[0x0004]; // 0x4C(0x4)
};

// ScriptStruct AudioMixer.SubmixEffectDynamicProcessorFilterSettings
// Size : 0xC (Inherited : 0x0)
struct FSubmixEffectDynamicProcessorFilterSettings {
	unsigned char bEnabled : 1; // 0x0(0x1)
	unsigned char UnknownData_0_1 : 7; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float Cutoff; // 0x4(0x4)
	float GainDb; // 0x8(0x4)
};

// ScriptStruct AudioMixer.SubmixEffectSubmixEQSettings
// Size : 0x10 (Inherited : 0x0)
struct FSubmixEffectSubmixEQSettings {
	struct TArray<struct FSubmixEffectEQBand> EQBands; // 0x0(0x10)
};

// ScriptStruct AudioMixer.SubmixEffectEQBand
// Size : 0x10 (Inherited : 0x0)
struct FSubmixEffectEQBand {
	float Frequency; // 0x0(0x4)
	float Bandwidth; // 0x4(0x4)
	float GainDb; // 0x8(0x4)
	unsigned char bEnabled : 1; // 0xC(0x1)
	unsigned char UnknownData_C_1 : 7; // 0xC(0x1)
	unsigned char UnknownData_D[0x0003]; // 0xD(0x3)
};

// ScriptStruct AudioMixer.SubmixEffectReverbSettings
// Size : 0x34 (Inherited : 0x0)
struct FSubmixEffectReverbSettings {
	float Density; // 0x0(0x4)
	float Diffusion; // 0x4(0x4)
	float Gain; // 0x8(0x4)
	float GainHF; // 0xC(0x4)
	float DecayTime; // 0x10(0x4)
	float DecayHFRatio; // 0x14(0x4)
	float ReflectionsGain; // 0x18(0x4)
	float ReflectionsDelay; // 0x1C(0x4)
	float LateGain; // 0x20(0x4)
	float LateDelay; // 0x24(0x4)
	float AirAbsorptionGainHF; // 0x28(0x4)
	float WetLevel; // 0x2C(0x4)
	float DryLevel; // 0x30(0x4)
};

// ScriptStruct AudioMixer.SubmixEffectReverbFastSettings
// Size : 0x38 (Inherited : 0x0)
struct FSubmixEffectReverbFastSettings {
	bool bBypass; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float Density; // 0x4(0x4)
	float Diffusion; // 0x8(0x4)
	float Gain; // 0xC(0x4)
	float GainHF; // 0x10(0x4)
	float DecayTime; // 0x14(0x4)
	float DecayHFRatio; // 0x18(0x4)
	float ReflectionsGain; // 0x1C(0x4)
	float ReflectionsDelay; // 0x20(0x4)
	float LateGain; // 0x24(0x4)
	float LateDelay; // 0x28(0x4)
	float AirAbsorptionGainHF; // 0x2C(0x4)
	float WetLevel; // 0x30(0x4)
	float DryLevel; // 0x34(0x4)
};

