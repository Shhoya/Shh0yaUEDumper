// Class Synthesis.ModularSynthPresetBank
// Size : 0x38 (Inherited : 0x28)
struct UModularSynthPresetBank : UObject {
	struct TArray<struct FModularSynthPresetBankEntry> Presets; // 0x28(0x10)
};

// Class Synthesis.ModularSynthLibrary
// Size : 0x28 (Inherited : 0x28)
struct UModularSynthLibrary : UBlueprintFunctionLibrary {

	void AddModularSynthPresetToBankAsset(struct UModularSynthPresetBank* InBank, struct FModularSynthPreset Preset, struct FString PresetName); // Function Synthesis.ModularSynthLibrary.AddModularSynthPresetToBankAsset // (Final|Native|Static|Private|HasOutParms|BlueprintCallable) // Param Size : 0xF8, 0x7FF774DED090
};

// Class Synthesis.ModularSynthComponent
// Size : 0xD70 (Inherited : 0x6D0)
struct UModularSynthComponent : USynthComponent {
	int32_t VoiceCount; // 0x6D0(0x4)
	unsigned char UnknownData_6D4[0x069C]; // 0x6D4(0x69C)

	void SetSynthPreset(struct FModularSynthPreset SynthPreset); // Function Synthesis.ModularSynthComponent.SetSynthPreset // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0xE0, 0x7FF774DEF600
	void SetSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetSustainGain // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DEF580
	void SetStereoDelayWetlevel(float DelayWetlevel); // Function Synthesis.ModularSynthComponent.SetStereoDelayWetlevel // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DEF500
	void SetStereoDelayTime(float DelayTimeMsec); // Function Synthesis.ModularSynthComponent.SetStereoDelayTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DEF480
	void SetStereoDelayRatio(float DelayRatio); // Function Synthesis.ModularSynthComponent.SetStereoDelayRatio // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DEF400
	void SetStereoDelayMode(enum class ESynthStereoDelayMode StereoDelayMode); // Function Synthesis.ModularSynthComponent.SetStereoDelayMode // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DEF380
	void SetStereoDelayIsEnabled(bool StereoDelayEnabled); // Function Synthesis.ModularSynthComponent.SetStereoDelayIsEnabled // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DEF2F0
	void SetStereoDelayFeedback(float DelayFeedback); // Function Synthesis.ModularSynthComponent.SetStereoDelayFeedback // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DEF270
	void SetSpread(float Spread); // Function Synthesis.ModularSynthComponent.SetSpread // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DEF1F0
	void SetReleaseTime(float ReleaseTimeMsec); // Function Synthesis.ModularSynthComponent.SetReleaseTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DEF170
	void SetPortamento(float Portamento); // Function Synthesis.ModularSynthComponent.SetPortamento // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DEF0F0
	void SetPitchBend(float PitchBend); // Function Synthesis.ModularSynthComponent.SetPitchBend // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DEF070
	void SetPan(float Pan); // Function Synthesis.ModularSynthComponent.SetPan // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DEEFF0
	void SetOscType(int32_t OscIndex, enum class ESynth1OscType OscType); // Function Synthesis.ModularSynthComponent.SetOscType // (Final|Native|Public|BlueprintCallable) // Param Size : 0x5, 0x7FF774DEEF30
	void SetOscSync(bool bIsSynced); // Function Synthesis.ModularSynthComponent.SetOscSync // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DEEEA0
	void SetOscSemitones(int32_t OscIndex, float Semitones); // Function Synthesis.ModularSynthComponent.SetOscSemitones // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774DEEDD0
	void SetOscPulsewidth(int32_t OscIndex, float Pulsewidth); // Function Synthesis.ModularSynthComponent.SetOscPulsewidth // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774DEED00
	void SetOscOctave(int32_t OscIndex, float Octave); // Function Synthesis.ModularSynthComponent.SetOscOctave // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774DEEC30
	void SetOscGainMod(int32_t OscIndex, float OscGainMod); // Function Synthesis.ModularSynthComponent.SetOscGainMod // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774DEEB60
	void SetOscGain(int32_t OscIndex, float OscGain); // Function Synthesis.ModularSynthComponent.SetOscGain // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774DEEA90
	void SetOscFrequencyMod(int32_t OscIndex, float OscFreqMod); // Function Synthesis.ModularSynthComponent.SetOscFrequencyMod // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774DEE9C0
	void SetOscCents(int32_t OscIndex, float Cents); // Function Synthesis.ModularSynthComponent.SetOscCents // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774DEE8F0
	void SetModEnvSustainGain(float SustainGain); // Function Synthesis.ModularSynthComponent.SetModEnvSustainGain // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DEE870
	void SetModEnvReleaseTime(float Release); // Function Synthesis.ModularSynthComponent.SetModEnvReleaseTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DEE7F0
	void SetModEnvPatch(enum class ESynthModEnvPatch InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvPatch // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DEE770
	void SetModEnvInvert(bool bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvInvert // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DEE6E0
	void SetModEnvDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetModEnvDepth // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DEE660
	void SetModEnvDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvDecayTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DEE5E0
	void SetModEnvBiasPatch(enum class ESynthModEnvBiasPatch InPatchType); // Function Synthesis.ModularSynthComponent.SetModEnvBiasPatch // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DEE560
	void SetModEnvBiasInvert(bool bInvert); // Function Synthesis.ModularSynthComponent.SetModEnvBiasInvert // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DEE4D0
	void SetModEnvAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetModEnvAttackTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DEE450
	void SetLFOType(int32_t LFOIndex, enum class ESynthLFOType LFOType); // Function Synthesis.ModularSynthComponent.SetLFOType // (Final|Native|Public|BlueprintCallable) // Param Size : 0x5, 0x7FF774DEE390
	void SetLFOPatch(int32_t LFOIndex, enum class ESynthLFOPatchType LFOPatchType); // Function Synthesis.ModularSynthComponent.SetLFOPatch // (Final|Native|Public|BlueprintCallable) // Param Size : 0x5, 0x7FF774DEE2D0
	void SetLFOMode(int32_t LFOIndex, enum class ESynthLFOMode LFOMode); // Function Synthesis.ModularSynthComponent.SetLFOMode // (Final|Native|Public|BlueprintCallable) // Param Size : 0x5, 0x7FF774DEE210
	void SetLFOGainMod(int32_t LFOIndex, float GainMod); // Function Synthesis.ModularSynthComponent.SetLFOGainMod // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774DEE140
	void SetLFOGain(int32_t LFOIndex, float Gain); // Function Synthesis.ModularSynthComponent.SetLFOGain // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774DEE070
	void SetLFOFrequencyMod(int32_t LFOIndex, float FrequencyModHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequencyMod // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774DEDFA0
	void SetLFOFrequency(int32_t LFOIndex, float FrequencyHz); // Function Synthesis.ModularSynthComponent.SetLFOFrequency // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774DEDED0
	void SetGainDb(float GainDb); // Function Synthesis.ModularSynthComponent.SetGainDb // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DEDE50
	void SetFilterType(enum class ESynthFilterType FilterType); // Function Synthesis.ModularSynthComponent.SetFilterType // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DEDDD0
	void SetFilterQMod(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQMod // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DEDD50
	void SetFilterQ(float FilterQ); // Function Synthesis.ModularSynthComponent.SetFilterQ // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DEDCD0
	void SetFilterFrequencyMod(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequencyMod // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DEDC50
	void SetFilterFrequency(float FilterFrequencyHz); // Function Synthesis.ModularSynthComponent.SetFilterFrequency // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DEDBD0
	void SetFilterAlgorithm(enum class ESynthFilterAlgorithm FilterAlgorithm); // Function Synthesis.ModularSynthComponent.SetFilterAlgorithm // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DEDB50
	void SetEnableUnison(bool EnableUnison); // Function Synthesis.ModularSynthComponent.SetEnableUnison // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DEDAC0
	void SetEnableRetrigger(bool RetriggerEnabled); // Function Synthesis.ModularSynthComponent.SetEnableRetrigger // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DEDA30
	void SetEnablePolyphony(bool bEnablePolyphony); // Function Synthesis.ModularSynthComponent.SetEnablePolyphony // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DED9A0
	bool SetEnablePatch(struct FPatchId PatchId, bool bIsEnabled); // Function Synthesis.ModularSynthComponent.SetEnablePatch // (Final|Native|Public|BlueprintCallable) // Param Size : 0x6, 0x7FF774DED8D0
	void SetEnableLegato(bool LegatoEnabled); // Function Synthesis.ModularSynthComponent.SetEnableLegato // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DED840
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.ModularSynthComponent.SetDecayTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DED7C0
	void SetChorusFrequency(float Frequency); // Function Synthesis.ModularSynthComponent.SetChorusFrequency // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DED740
	void SetChorusFeedback(float Feedback); // Function Synthesis.ModularSynthComponent.SetChorusFeedback // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DED6C0
	void SetChorusEnabled(bool EnableChorus); // Function Synthesis.ModularSynthComponent.SetChorusEnabled // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DED630
	void SetChorusDepth(float Depth); // Function Synthesis.ModularSynthComponent.SetChorusDepth // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DED5B0
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.ModularSynthComponent.SetAttackTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DED530
	void NoteOn(float Note, int32_t Velocity, float Duration); // Function Synthesis.ModularSynthComponent.NoteOn // (Final|Native|Public|BlueprintCallable) // Param Size : 0xC, 0x7FF774DED420
	void NoteOff(float Note, bool bAllNotesOff, bool bKillAllNotes); // Function Synthesis.ModularSynthComponent.NoteOff // (Final|Native|Public|BlueprintCallable) // Param Size : 0x6, 0x7FF774DED310
	struct FPatchId CreatePatch(enum class ESynth1PatchSource PatchSource, struct TArray<struct FSynth1PatchCable> PatchCables, bool bEnableByDefault); // Function Synthesis.ModularSynthComponent.CreatePatch // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x20, 0x7FF774DED1D0
};

// Class Synthesis.SourceEffectBitCrusherPreset
// Size : 0x78 (Inherited : 0x40)
struct USourceEffectBitCrusherPreset : USoundEffectSourcePreset {
	unsigned char UnknownData_40[0x0030]; // 0x40(0x30)
	struct FSourceEffectBitCrusherSettings Settings; // 0x70(0x8)

	void SetSettings(struct FSourceEffectBitCrusherSettings InSettings); // Function Synthesis.SourceEffectBitCrusherPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x8, 0x7FF774DF4100
};

// Class Synthesis.SourceEffectChorusPreset
// Size : 0x98 (Inherited : 0x40)
struct USourceEffectChorusPreset : USoundEffectSourcePreset {
	unsigned char UnknownData_40[0x0040]; // 0x40(0x40)
	struct FSourceEffectChorusSettings Settings; // 0x80(0x18)

	void SetSettings(struct FSourceEffectChorusSettings InSettings); // Function Synthesis.SourceEffectChorusPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x18, 0x7FF774DF41B0
};

// Class Synthesis.SourceEffectDynamicsProcessorPreset
// Size : 0xB8 (Inherited : 0x40)
struct USourceEffectDynamicsProcessorPreset : USoundEffectSourcePreset {
	unsigned char UnknownData_40[0x0050]; // 0x40(0x50)
	struct FSourceEffectDynamicsProcessorSettings Settings; // 0x90(0x28)

	void SetSettings(struct FSourceEffectDynamicsProcessorSettings InSettings); // Function Synthesis.SourceEffectDynamicsProcessorPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x28, 0x7FF774DF4260
};

// Class Synthesis.EnvelopeFollowerListener
// Size : 0xD0 (Inherited : 0xB0)
struct UEnvelopeFollowerListener : UActorComponent {
	struct FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0xB0(0x10)
	unsigned char UnknownData_C0[0x0010]; // 0xC0(0x10)
};

// Class Synthesis.SourceEffectEnvelopeFollowerPreset
// Size : 0x80 (Inherited : 0x40)
struct USourceEffectEnvelopeFollowerPreset : USoundEffectSourcePreset {
	unsigned char UnknownData_40[0x0034]; // 0x40(0x34)
	struct FSourceEffectEnvelopeFollowerSettings Settings; // 0x74(0xC)

	void UnregisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.UnregisterEnvelopeFollowerListener // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774DF4A80
	void SetSettings(struct FSourceEffectEnvelopeFollowerSettings InSettings); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0xC, 0x7FF774DF43C0
	void RegisterEnvelopeFollowerListener(struct UEnvelopeFollowerListener* EnvelopeFollowerListener); // Function Synthesis.SourceEffectEnvelopeFollowerPreset.RegisterEnvelopeFollowerListener // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774DF4000
};

// Class Synthesis.SourceEffectEQPreset
// Size : 0x88 (Inherited : 0x40)
struct USourceEffectEQPreset : USoundEffectSourcePreset {
	unsigned char UnknownData_40[0x0038]; // 0x40(0x38)
	struct FSourceEffectEQSettings Settings; // 0x78(0x10)

	void SetSettings(struct FSourceEffectEQSettings InSettings); // Function Synthesis.SourceEffectEQPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF774DF4310
};

// Class Synthesis.SourceEffectFilterPreset
// Size : 0x80 (Inherited : 0x40)
struct USourceEffectFilterPreset : USoundEffectSourcePreset {
	unsigned char UnknownData_40[0x0034]; // 0x40(0x34)
	struct FSourceEffectFilterSettings Settings; // 0x74(0xC)

	void SetSettings(struct FSourceEffectFilterSettings InSettings); // Function Synthesis.SourceEffectFilterPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0xC, 0x7FF774DF4470
};

// Class Synthesis.SourceEffectFoldbackDistortionPreset
// Size : 0x80 (Inherited : 0x40)
struct USourceEffectFoldbackDistortionPreset : USoundEffectSourcePreset {
	unsigned char UnknownData_40[0x0034]; // 0x40(0x34)
	struct FSourceEffectFoldbackDistortionSettings Settings; // 0x74(0xC)

	void SetSettings(struct FSourceEffectFoldbackDistortionSettings InSettings); // Function Synthesis.SourceEffectFoldbackDistortionPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0xC, 0x7FF774DF4520
};

// Class Synthesis.SourceEffectMidSideSpreaderPreset
// Size : 0x80 (Inherited : 0x40)
struct USourceEffectMidSideSpreaderPreset : USoundEffectSourcePreset {
	unsigned char UnknownData_40[0x0034]; // 0x40(0x34)
	struct FSourceEffectMidSideSpreaderSettings Settings; // 0x74(0xC)

	void SetSettings(struct FSourceEffectMidSideSpreaderSettings InSettings); // Function Synthesis.SourceEffectMidSideSpreaderPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0xC, 0x7FF774DF45D0
};

// Class Synthesis.SourceEffectPannerPreset
// Size : 0x78 (Inherited : 0x40)
struct USourceEffectPannerPreset : USoundEffectSourcePreset {
	unsigned char UnknownData_40[0x0030]; // 0x40(0x30)
	struct FSourceEffectPannerSettings Settings; // 0x70(0x8)

	void SetSettings(struct FSourceEffectPannerSettings InSettings); // Function Synthesis.SourceEffectPannerPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x8, 0x7FF774DF4680
};

// Class Synthesis.SourceEffectPhaserPreset
// Size : 0x88 (Inherited : 0x40)
struct USourceEffectPhaserPreset : USoundEffectSourcePreset {
	unsigned char UnknownData_40[0x0038]; // 0x40(0x38)
	struct FSourceEffectPhaserSettings Settings; // 0x78(0x10)

	void SetSettings(struct FSourceEffectPhaserSettings InSettings); // Function Synthesis.SourceEffectPhaserPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF774DF4730
};

// Class Synthesis.SourceEffectRingModulationPreset
// Size : 0x90 (Inherited : 0x40)
struct USourceEffectRingModulationPreset : USoundEffectSourcePreset {
	unsigned char UnknownData_40[0x003C]; // 0x40(0x3C)
	struct FSourceEffectRingModulationSettings Settings; // 0x7C(0x14)

	void SetSettings(struct FSourceEffectRingModulationSettings InSettings); // Function Synthesis.SourceEffectRingModulationPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x14, 0x7FF774DF47F0
};

// Class Synthesis.SourceEffectSimpleDelayPreset
// Size : 0x98 (Inherited : 0x40)
struct USourceEffectSimpleDelayPreset : USoundEffectSourcePreset {
	unsigned char UnknownData_40[0x0040]; // 0x40(0x40)
	struct FSourceEffectSimpleDelaySettings Settings; // 0x80(0x18)

	void SetSettings(struct FSourceEffectSimpleDelaySettings InSettings); // Function Synthesis.SourceEffectSimpleDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x18, 0x7FF774DF4890
};

// Class Synthesis.SourceEffectStereoDelayPreset
// Size : 0x90 (Inherited : 0x40)
struct USourceEffectStereoDelayPreset : USoundEffectSourcePreset {
	unsigned char UnknownData_40[0x003C]; // 0x40(0x3C)
	struct FSourceEffectStereoDelaySettings Settings; // 0x7C(0x14)

	void SetSettings(struct FSourceEffectStereoDelaySettings InSettings); // Function Synthesis.SourceEffectStereoDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x14, 0x7FF774DF4940
};

// Class Synthesis.SourceEffectWaveShaperPreset
// Size : 0x78 (Inherited : 0x40)
struct USourceEffectWaveShaperPreset : USoundEffectSourcePreset {
	unsigned char UnknownData_40[0x0030]; // 0x40(0x30)
	struct FSourceEffectWaveShaperSettings Settings; // 0x70(0x8)

	void SetSettings(struct FSourceEffectWaveShaperSettings InSettings); // Function Synthesis.SourceEffectWaveShaperPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x8, 0x7FF774DF4680
};

// Class Synthesis.AudioImpulseResponse
// Size : 0x58 (Inherited : 0x28)
struct UAudioImpulseResponse : UObject {
	struct TArray<float> ImpulseResponse; // 0x28(0x10)
	int32_t NumChannels; // 0x38(0x4)
	int32_t SampleRate; // 0x3C(0x4)
	float NormalizationVolumeDb; // 0x40(0x4)
	unsigned char UnknownData_44[0x0004]; // 0x44(0x4)
	struct TArray<float> IRData; // 0x48(0x10)
};

// Class Synthesis.SubmixEffectConvolutionReverbPreset
// Size : 0xB8 (Inherited : 0x40)
struct USubmixEffectConvolutionReverbPreset : USoundEffectSubmixPreset {
	struct FSubmixEffectConvolutionReverbSettings Settings; // 0x40(0x20)
	struct UAudioImpulseResponse* ImpulseResponse; // 0x60(0x8)
	enum class ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0x68(0x1)
	bool bEnableHardwareAcceleration; // 0x69(0x1)
	unsigned char UnknownData_6A[0x004E]; // 0x6A(0x4E)

	void SetSettings(struct FSubmixEffectConvolutionReverbSettings InSettings); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x20, 0x7FF774DF49E0
	void SetImpulseResponse(struct UAudioImpulseResponse* InImpulseResponse); // Function Synthesis.SubmixEffectConvolutionReverbPreset.SetImpulseResponse // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774DF4080
};

// Class Synthesis.SubmixEffectDelayPreset
// Size : 0x90 (Inherited : 0x40)
struct USubmixEffectDelayPreset : USoundEffectSubmixPreset {
	unsigned char UnknownData_40[0x0034]; // 0x40(0x34)
	struct FSubmixEffectDelaySettings Settings; // 0x74(0xC)
	struct FSubmixEffectDelaySettings DynamicSettings; // 0x80(0xC)
	unsigned char UnknownData_8C[0x0004]; // 0x8C(0x4)

	void SetSettings(struct FSubmixEffectDelaySettings InSettings); // Function Synthesis.SubmixEffectDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0xC, 0x7FF774DFA1A0
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectDelayPreset.SetInterpolationTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF96E0
	void SetDelay(float Length); // Function Synthesis.SubmixEffectDelayPreset.SetDelay // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF88B0
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectDelayPreset.GetMaxDelayInMilliseconds // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF7A60
};

// Class Synthesis.SubmixEffectFilterPreset
// Size : 0x80 (Inherited : 0x40)
struct USubmixEffectFilterPreset : USoundEffectSubmixPreset {
	unsigned char UnknownData_40[0x0034]; // 0x40(0x34)
	struct FSubmixEffectFilterSettings Settings; // 0x74(0xC)

	void SetSettings(struct FSubmixEffectFilterSettings InSettings); // Function Synthesis.SubmixEffectFilterPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0xC, 0x7FF774DFA260
	void SetFilterType(enum class ESubmixFilterType InType); // Function Synthesis.SubmixEffectFilterPreset.SetFilterType // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DF8FD0
	void SetFilterQMod(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQMod // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF8F50
	void SetFilterQ(float InQ); // Function Synthesis.SubmixEffectFilterPreset.SetFilterQ // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF8ED0
	void SetFilterCutoffFrequencyMod(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequencyMod // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF8A30
	void SetFilterCutoffFrequency(float InFrequency); // Function Synthesis.SubmixEffectFilterPreset.SetFilterCutoffFrequency // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF89B0
	void SetFilterAlgorithm(enum class ESubmixFilterAlgorithm InAlgorithm); // Function Synthesis.SubmixEffectFilterPreset.SetFilterAlgorithm // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DF8930
};

// Class Synthesis.SubmixEffectFlexiverbPreset
// Size : 0x88 (Inherited : 0x40)
struct USubmixEffectFlexiverbPreset : USoundEffectSubmixPreset {
	unsigned char UnknownData_40[0x0038]; // 0x40(0x38)
	struct FSubmixEffectFlexiverbSettings Settings; // 0x78(0x10)

	void SetSettings(struct FSubmixEffectFlexiverbSettings InSettings); // Function Synthesis.SubmixEffectFlexiverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF774DFA310
};

// Class Synthesis.SubmixEffectTapDelayPreset
// Size : 0xB0 (Inherited : 0x40)
struct USubmixEffectTapDelayPreset : USoundEffectSubmixPreset {
	unsigned char UnknownData_40[0x0040]; // 0x40(0x40)
	struct FSubmixEffectTapDelaySettings Settings; // 0x80(0x18)
	unsigned char UnknownData_98[0x0018]; // 0x98(0x18)

	void SetTap(int32_t TapId, struct FTapDelayInfo TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.SetTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x1C, 0x7FF774DFA720
	void SetSettings(struct FSubmixEffectTapDelaySettings InSettings); // Function Synthesis.SubmixEffectTapDelayPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x18, 0x7FF774DFA3D0
	void SetInterpolationTime(float Time); // Function Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF9760
	void RemoveTap(int32_t TapId); // Function Synthesis.SubmixEffectTapDelayPreset.RemoveTap // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF8100
	void GetTapIds(struct TArray<int32_t> TapIds); // Function Synthesis.SubmixEffectTapDelayPreset.GetTapIds // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF774DF7C20
	void GetTap(int32_t TapId, struct FTapDelayInfo TapInfo); // Function Synthesis.SubmixEffectTapDelayPreset.GetTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x1C, 0x7FF774DF7B40
	float GetMaxDelayInMilliseconds(); // Function Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF7A80
	void AddTap(int32_t TapId); // Function Synthesis.SubmixEffectTapDelayPreset.AddTap // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF7830
};

// Class Synthesis.Synth2DSlider
// Size : 0x478 (Inherited : 0x108)
struct USynth2DSlider : UWidget {
	float ValueX; // 0x108(0x4)
	float ValueY; // 0x10C(0x4)
	struct FDelegate ValueXDelegate; // 0x110(0x10)
	struct FDelegate ValueYDelegate; // 0x120(0x10)
	struct FSynth2DSliderStyle WidgetStyle; // 0x130(0x2B8)
	struct FLinearColor SliderHandleColor; // 0x3E8(0x10)
	bool IndentHandle; // 0x3F8(0x1)
	bool Locked; // 0x3F9(0x1)
	unsigned char UnknownData_3FA[0x0002]; // 0x3FA(0x2)
	float StepSize; // 0x3FC(0x4)
	bool IsFocusable; // 0x400(0x1)
	unsigned char UnknownData_401[0x0007]; // 0x401(0x7)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x408(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x418(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x428(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x438(0x10)
	struct FMulticastInlineDelegate OnValueChangedX; // 0x448(0x10)
	struct FMulticastInlineDelegate OnValueChangedY; // 0x458(0x10)
	unsigned char UnknownData_468[0x0010]; // 0x468(0x10)

	void SetValue(struct FVector2D InValue); // Function Synthesis.Synth2DSlider.SetValue // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x8, 0x7FF774DFA800
	void SetStepSize(float InValue); // Function Synthesis.Synth2DSlider.SetStepSize // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DFA590
	void SetSliderHandleColor(struct FLinearColor InValue); // Function Synthesis.Synth2DSlider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF774DFA490
	void SetLocked(bool InValue); // Function Synthesis.Synth2DSlider.SetLocked // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DF97E0
	void SetIndentHandle(bool InValue); // Function Synthesis.Synth2DSlider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DF9650
	struct FVector2D GetValue(); // Function Synthesis.Synth2DSlider.GetValue // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF774DF7CD0
};

// Class Synthesis.GranularSynth
// Size : 0xA90 (Inherited : 0x6D0)
struct UGranularSynth : USynthComponent {
	struct USoundWave* GranulatedSoundWave; // 0x6D0(0x8)
	unsigned char UnknownData_6D8[0x03B8]; // 0x6D8(0x3B8)

	void SetSustainGain(float SustainGain); // Function Synthesis.GranularSynth.SetSustainGain // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DFA610
	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.GranularSynth.SetSoundWave // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774DFA510
	void SetScrubMode(bool bScrubMode); // Function Synthesis.GranularSynth.SetScrubMode // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DFA110
	void SetReleaseTimeMsec(float ReleaseTimeMsec); // Function Synthesis.GranularSynth.SetReleaseTimeMsec // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DFA090
	void SetPlayheadTime(float InPositionSec, float LerpTimeSec, enum class EGranularSynthSeekType SeekType); // Function Synthesis.GranularSynth.SetPlayheadTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF774DF99F0
	void SetPlaybackSpeed(float InPlayheadRate); // Function Synthesis.GranularSynth.SetPlaybackSpeed // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF9970
	void SetGrainVolume(float BaseVolume, struct FVector2D VolumeRange); // Function Synthesis.GranularSynth.SetGrainVolume // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0xC, 0x7FF774DF9510
	void SetGrainsPerSecond(float InGrainsPerSecond); // Function Synthesis.GranularSynth.SetGrainsPerSecond // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF95D0
	void SetGrainProbability(float InGrainProbability); // Function Synthesis.GranularSynth.SetGrainProbability // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF9490
	void SetGrainPitch(float BasePitch, struct FVector2D PitchRange); // Function Synthesis.GranularSynth.SetGrainPitch // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0xC, 0x7FF774DF93D0
	void SetGrainPan(float BasePan, struct FVector2D PanRange); // Function Synthesis.GranularSynth.SetGrainPan // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0xC, 0x7FF774DF9310
	void SetGrainEnvelopeType(enum class EGranularSynthEnvelopeType EnvelopeType); // Function Synthesis.GranularSynth.SetGrainEnvelopeType // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DF9290
	void SetGrainDuration(float BaseDurationMsec, struct FVector2D DurationRange); // Function Synthesis.GranularSynth.SetGrainDuration // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0xC, 0x7FF774DF91D0
	void SetDecayTime(float DecayTimeMsec); // Function Synthesis.GranularSynth.SetDecayTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF85A0
	void SetAttackTime(float AttackTimeMsec); // Function Synthesis.GranularSynth.SetAttackTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF85A0
	void NoteOn(float Note, int32_t Velocity, float Duration); // Function Synthesis.GranularSynth.NoteOn // (Final|Native|Public|BlueprintCallable) // Param Size : 0xC, 0x7FF774DF7E90
	void NoteOff(float Note, bool bKill); // Function Synthesis.GranularSynth.NoteOff // (Final|Native|Public|BlueprintCallable) // Param Size : 0x5, 0x7FF774DF7D40
	bool IsLoaded(); // Function Synthesis.GranularSynth.IsLoaded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF774DF7D10
	float GetSampleDuration(); // Function Synthesis.GranularSynth.GetSampleDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774DF7B10
	float GetCurrentPlayheadTime(); // Function Synthesis.GranularSynth.GetCurrentPlayheadTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774DF78C0
};

// Class Synthesis.MonoWaveTableSynthPreset
// Size : 0x170 (Inherited : 0x28)
struct UMonoWaveTableSynthPreset : UObject {
	struct FString PresetName; // 0x28(0x10)
	unsigned char bLockKeyframesToGridBool : 1; // 0x38(0x1)
	unsigned char UnknownData_38_1 : 7; // 0x38(0x1)
	unsigned char UnknownData_39[0x0003]; // 0x39(0x3)
	int32_t LockKeyframesToGrid; // 0x3C(0x4)
	int32_t WaveTableResolution; // 0x40(0x4)
	unsigned char UnknownData_44[0x0004]; // 0x44(0x4)
	struct TArray<struct FRuntimeFloatCurve> WaveTable; // 0x48(0x10)
	unsigned char bNormalizeWaveTables : 1; // 0x58(0x1)
	unsigned char UnknownData_58_1 : 7; // 0x58(0x1)
	unsigned char UnknownData_59[0x0117]; // 0x59(0x117)
};

// Class Synthesis.SynthComponentMonoWaveTable
// Size : 0xE10 (Inherited : 0x6D0)
struct USynthComponentMonoWaveTable : USynthComponent {
	struct FMulticastInlineDelegate OnTableAltered; // 0x6D0(0x10)
	struct FMulticastInlineDelegate OnNumTablesChanged; // 0x6E0(0x10)
	struct UMonoWaveTableSynthPreset* CurrentPreset; // 0x6F0(0x8)
	unsigned char UnknownData_6F8[0x0718]; // 0x6F8(0x718)

	void SetWaveTablePosition(float InPosition); // Function Synthesis.SynthComponentMonoWaveTable.SetWaveTablePosition // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DFA880
	void SetSustainPedalState(bool InSustainPedalState); // Function Synthesis.SynthComponentMonoWaveTable.SetSustainPedalState // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DFA690
	void SetPosLfoType(enum class ESynthLFOType InLfoType); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoType // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DF9BF0
	void SetPosLfoFrequency(float InLfoFrequency); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoFrequency // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF9B70
	void SetPosLfoDepth(float InLfoDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPosLfoDepth // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF9AF0
	void SetPositionEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DFA010
	void SetPositionEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF9F90
	void SetPositionEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DF9F00
	void SetPositionEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF9E80
	void SetPositionEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeDecayTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF9E00
	void SetPositionEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DF9D70
	void SetPositionEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF9CF0
	void SetPositionEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetPositionEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF9C70
	void SetLowPassFilterResonance(float InNewQ); // Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterResonance // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF98F0
	void SetLowPassFilterFrequency(float InNewFrequency); // Function Synthesis.SynthComponentMonoWaveTable.SetLowPassFilterFrequency // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF9870
	void SetFrequencyWithMidiNote(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyWithMidiNote // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF9150
	void SetFrequencyPitchBend(float FrequencyOffsetCents); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequencyPitchBend // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF90D0
	void SetFrequency(float FrequencyHz); // Function Synthesis.SynthComponentMonoWaveTable.SetFrequency // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF9050
	void SetFilterEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF8DD0
	void SetFilterEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF8D50
	void SetFilterEnvelopenDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopenDecayTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF8E50
	void SetFilterEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DF8CC0
	void SetFilterEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF8C40
	void SetFilterEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DF8BB0
	void SetFilterEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF8B30
	void SetFilterEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetFilterEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF8AB0
	bool SetCurveValue(int32_t TableIndex, int32_t KeyframeIndex, float NewValue); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveValue // (Final|Native|Public|BlueprintCallable) // Param Size : 0xD, 0x7FF774DF87B0
	bool SetCurveTangent(int32_t TableIndex, float InNewTangent); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveTangent // (Final|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF774DF86E0
	bool SetCurveInterpolationType(enum class CurveInterpolationType InterpolationType, int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.SetCurveInterpolationType // (Final|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF774DF8620
	void SetAmpEnvelopeSustainGain(float InSustainGain); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeSustainGain // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF8520
	void SetAmpEnvelopeReleaseTime(float InReleaseTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeReleaseTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF84A0
	void SetAmpEnvelopeInvert(bool bInInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeInvert // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DF8410
	void SetAmpEnvelopeDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDepth // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF8390
	void SetAmpEnvelopeDecayTime(float InDecayTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeDecayTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF8310
	void SetAmpEnvelopeBiasInvert(bool bInBiasInvert); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasInvert // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DF8280
	void SetAmpEnvelopeBiasDepth(float InDepth); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeBiasDepth // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF8200
	void SetAmpEnvelopeAttackTime(float InAttackTimeMsec); // Function Synthesis.SynthComponentMonoWaveTable.SetAmpEnvelopeAttackTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF8180
	void RefreshWaveTable(int32_t Index); // Function Synthesis.SynthComponentMonoWaveTable.RefreshWaveTable // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF8080
	void RefreshAllWaveTables(); // Function Synthesis.SynthComponentMonoWaveTable.RefreshAllWaveTables // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF774DF8060
	void NoteOn(float InMidiNote, float InVelocity); // Function Synthesis.SynthComponentMonoWaveTable.NoteOn // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774DF7FA0
	void NoteOff(float InMidiNote); // Function Synthesis.SynthComponentMonoWaveTable.NoteOff // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF7E10
	int32_t GetNumTableEntries(); // Function Synthesis.SynthComponentMonoWaveTable.GetNumTableEntries // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DF7AE0
	int32_t GetMaxTableIndex(); // Function Synthesis.SynthComponentMonoWaveTable.GetMaxTableIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774DF7AA0
	struct TArray<float> GetKeyFrameValuesForTable(float TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetKeyFrameValuesForTable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF774DF7980
	float GetCurveTangent(int32_t TableIndex); // Function Synthesis.SynthComponentMonoWaveTable.GetCurveTangent // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774DF78F0
};

// Class Synthesis.SynthSamplePlayer
// Size : 0x800 (Inherited : 0x6D0)
struct USynthSamplePlayer : USynthComponent {
	struct USoundWave* SoundWave; // 0x6D0(0x8)
	struct FMulticastInlineDelegate OnSampleLoaded; // 0x6D8(0x10)
	struct FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x6E8(0x10)
	unsigned char UnknownData_6F8[0x0108]; // 0x6F8(0x108)

	void SetSoundWave(struct USoundWave* InSoundWave); // Function Synthesis.SynthSamplePlayer.SetSoundWave // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774DFB980
	void SetScrubTimeWidth(float InScrubTimeWidthSec); // Function Synthesis.SynthSamplePlayer.SetScrubTimeWidth // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DFB900
	void SetScrubMode(bool bScrubMode); // Function Synthesis.SynthSamplePlayer.SetScrubMode // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DFB870
	void SetPitch(float InPitch, float TimeSec); // Function Synthesis.SynthSamplePlayer.SetPitch // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774DFB7B0
	void SeekToTime(float TimeSec, enum class ESamplePlayerSeekType SeekType, bool bWrap); // Function Synthesis.SynthSamplePlayer.SeekToTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x6, 0x7FF774DFB610
	bool IsLoaded(); // Function Synthesis.SynthSamplePlayer.IsLoaded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF774DFB5E0
	float GetSampleDuration(); // Function Synthesis.SynthSamplePlayer.GetSampleDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774DFB580
	float GetCurrentPlaybackProgressTime(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774DFB550
	float GetCurrentPlaybackProgressPercent(); // Function Synthesis.SynthSamplePlayer.GetCurrentPlaybackProgressPercent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774DFB520
};

// Class Synthesis.SynthKnob
// Size : 0x400 (Inherited : 0x108)
struct USynthKnob : UWidget {
	float Value; // 0x108(0x4)
	float StepSize; // 0x10C(0x4)
	float MouseSpeed; // 0x110(0x4)
	float MouseFineTuneSpeed; // 0x114(0x4)
	unsigned char ShowTooltipInfo : 1; // 0x118(0x1)
	unsigned char UnknownData_118_1 : 7; // 0x118(0x1)
	unsigned char UnknownData_119[0x0007]; // 0x119(0x7)
	struct FText ParameterName; // 0x120(0x18)
	struct FText ParameterUnits; // 0x138(0x18)
	struct FDelegate ValueDelegate; // 0x150(0x10)
	struct FSynthKnobStyle WidgetStyle; // 0x160(0x238)
	bool Locked; // 0x398(0x1)
	bool IsFocusable; // 0x399(0x1)
	unsigned char UnknownData_39A[0x0006]; // 0x39A(0x6)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x3A0(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x3B0(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x3C0(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x3D0(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x3E0(0x10)
	unsigned char UnknownData_3F0[0x0010]; // 0x3F0(0x10)

	void SetValue(float InValue); // Function Synthesis.SynthKnob.SetValue // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DFBA80
	void SetStepSize(float InValue); // Function Synthesis.SynthKnob.SetStepSize // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DFBA00
	void SetLocked(bool InValue); // Function Synthesis.SynthKnob.SetLocked // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DFB720
	float GetValue(); // Function Synthesis.SynthKnob.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774DFB5B0
};

