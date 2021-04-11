// ScriptStruct Synthesis.ModularSynthPresetBankEntry
// Size : 0xF0 (Inherited : 0x0)
struct FModularSynthPresetBankEntry {
	struct FString PresetName; // 0x0(0x10)
	struct FModularSynthPreset Preset; // 0x10(0xE0)
};

// ScriptStruct Synthesis.ModularSynthPreset
// Size : 0xE0 (Inherited : 0x8)
struct FModularSynthPreset : FTableRowBase {
	unsigned char bEnablePolyphony : 1; // 0x8(0x1)
	unsigned char UnknownData_8_1 : 7; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
	enum class ESynth1OscType Osc1Type; // 0xC(0x1)
	unsigned char UnknownData_D[0x0003]; // 0xD(0x3)
	float Osc1Gain; // 0x10(0x4)
	float Osc1Octave; // 0x14(0x4)
	float Osc1Semitones; // 0x18(0x4)
	float Osc1Cents; // 0x1C(0x4)
	float Osc1PulseWidth; // 0x20(0x4)
	enum class ESynth1OscType Osc2Type; // 0x24(0x1)
	unsigned char UnknownData_25[0x0003]; // 0x25(0x3)
	float Osc2Gain; // 0x28(0x4)
	float Osc2Octave; // 0x2C(0x4)
	float Osc2Semitones; // 0x30(0x4)
	float Osc2Cents; // 0x34(0x4)
	float Osc2PulseWidth; // 0x38(0x4)
	float Portamento; // 0x3C(0x4)
	unsigned char bEnableUnison : 1; // 0x40(0x1)
	unsigned char bEnableOscillatorSync : 1; // 0x40(0x1)
	unsigned char UnknownData_40_2 : 6; // 0x40(0x1)
	unsigned char UnknownData_41[0x0003]; // 0x41(0x3)
	float Spread; // 0x44(0x4)
	float Pan; // 0x48(0x4)
	float LFO1Frequency; // 0x4C(0x4)
	float LFO1Gain; // 0x50(0x4)
	enum class ESynthLFOType LFO1Type; // 0x54(0x1)
	enum class ESynthLFOMode LFO1Mode; // 0x55(0x1)
	enum class ESynthLFOPatchType LFO1PatchType; // 0x56(0x1)
	unsigned char UnknownData_57[0x0001]; // 0x57(0x1)
	float LFO2Frequency; // 0x58(0x4)
	float LFO2Gain; // 0x5C(0x4)
	enum class ESynthLFOType LFO2Type; // 0x60(0x1)
	enum class ESynthLFOMode LFO2Mode; // 0x61(0x1)
	enum class ESynthLFOPatchType LFO2PatchType; // 0x62(0x1)
	unsigned char UnknownData_63[0x0001]; // 0x63(0x1)
	float GainDb; // 0x64(0x4)
	float AttackTime; // 0x68(0x4)
	float DecayTime; // 0x6C(0x4)
	float SustainGain; // 0x70(0x4)
	float ReleaseTime; // 0x74(0x4)
	enum class ESynthModEnvPatch ModEnvPatchType; // 0x78(0x1)
	enum class ESynthModEnvBiasPatch ModEnvBiasPatchType; // 0x79(0x1)
	unsigned char UnknownData_7A[0x0002]; // 0x7A(0x2)
	unsigned char bInvertModulationEnvelope : 1; // 0x7C(0x1)
	unsigned char bInvertModulationEnvelopeBias : 1; // 0x7C(0x1)
	unsigned char UnknownData_7C_2 : 6; // 0x7C(0x1)
	unsigned char UnknownData_7D[0x0003]; // 0x7D(0x3)
	float ModulationEnvelopeDepth; // 0x80(0x4)
	float ModulationEnvelopeAttackTime; // 0x84(0x4)
	float ModulationEnvelopeDecayTime; // 0x88(0x4)
	float ModulationEnvelopeSustainGain; // 0x8C(0x4)
	float ModulationEnvelopeReleaseTime; // 0x90(0x4)
	unsigned char bLegato : 1; // 0x94(0x1)
	unsigned char bRetrigger : 1; // 0x94(0x1)
	unsigned char UnknownData_94_2 : 6; // 0x94(0x1)
	unsigned char UnknownData_95[0x0003]; // 0x95(0x3)
	float FilterFrequency; // 0x98(0x4)
	float FilterQ; // 0x9C(0x4)
	enum class ESynthFilterType FilterType; // 0xA0(0x1)
	enum class ESynthFilterAlgorithm FilterAlgorithm; // 0xA1(0x1)
	unsigned char UnknownData_A2[0x0002]; // 0xA2(0x2)
	unsigned char bStereoDelayEnabled : 1; // 0xA4(0x1)
	unsigned char UnknownData_A4_1 : 7; // 0xA4(0x1)
	unsigned char UnknownData_A5[0x0003]; // 0xA5(0x3)
	enum class ESynthStereoDelayMode StereoDelayMode; // 0xA8(0x1)
	unsigned char UnknownData_A9[0x0003]; // 0xA9(0x3)
	float StereoDelayTime; // 0xAC(0x4)
	float StereoDelayFeedback; // 0xB0(0x4)
	float StereoDelayWetlevel; // 0xB4(0x4)
	float StereoDelayRatio; // 0xB8(0x4)
	unsigned char bChorusEnabled : 1; // 0xBC(0x1)
	unsigned char UnknownData_BC_1 : 7; // 0xBC(0x1)
	unsigned char UnknownData_BD[0x0003]; // 0xBD(0x3)
	float ChorusDepth; // 0xC0(0x4)
	float ChorusFeedback; // 0xC4(0x4)
	float ChorusFrequency; // 0xC8(0x4)
	unsigned char UnknownData_CC[0x0004]; // 0xCC(0x4)
	struct TArray<struct FEpicSynth1Patch> Patches; // 0xD0(0x10)
};

// ScriptStruct Synthesis.EpicSynth1Patch
// Size : 0x18 (Inherited : 0x0)
struct FEpicSynth1Patch {
	enum class ESynth1PatchSource PatchSource; // 0x0(0x1)
	unsigned char UnknownData_1[0x0007]; // 0x1(0x7)
	struct TArray<struct FSynth1PatchCable> PatchCables; // 0x8(0x10)
};

// ScriptStruct Synthesis.Synth1PatchCable
// Size : 0x8 (Inherited : 0x0)
struct FSynth1PatchCable {
	float Depth; // 0x0(0x4)
	enum class ESynth1PatchDestination Destination; // 0x4(0x1)
	unsigned char UnknownData_5[0x0003]; // 0x5(0x3)
};

// ScriptStruct Synthesis.PatchId
// Size : 0x4 (Inherited : 0x0)
struct FPatchId {
	int32_t ID; // 0x0(0x4)
};

// ScriptStruct Synthesis.SourceEffectBitCrusherSettings
// Size : 0x8 (Inherited : 0x0)
struct FSourceEffectBitCrusherSettings {
	float CrushedSampleRate; // 0x0(0x4)
	float CrushedBits; // 0x4(0x4)
};

// ScriptStruct Synthesis.SourceEffectChorusSettings
// Size : 0x18 (Inherited : 0x0)
struct FSourceEffectChorusSettings {
	float Depth; // 0x0(0x4)
	float Frequency; // 0x4(0x4)
	float Feedback; // 0x8(0x4)
	float WetLevel; // 0xC(0x4)
	float DryLevel; // 0x10(0x4)
	float Spread; // 0x14(0x4)
};

// ScriptStruct Synthesis.SourceEffectDynamicsProcessorSettings
// Size : 0x28 (Inherited : 0x0)
struct FSourceEffectDynamicsProcessorSettings {
	enum class ESourceEffectDynamicsProcessorType DynamicsProcessorType; // 0x0(0x1)
	enum class ESourceEffectDynamicsPeakMode PeakMode; // 0x1(0x1)
	unsigned char UnknownData_2[0x0002]; // 0x2(0x2)
	float LookAheadMsec; // 0x4(0x4)
	float AttackTimeMsec; // 0x8(0x4)
	float ReleaseTimeMsec; // 0xC(0x4)
	float ThresholdDb; // 0x10(0x4)
	float Ratio; // 0x14(0x4)
	float KneeBandwidthDb; // 0x18(0x4)
	float InputGainDb; // 0x1C(0x4)
	float OutputGainDb; // 0x20(0x4)
	unsigned char bStereoLinked : 1; // 0x24(0x1)
	unsigned char bAnalogMode : 1; // 0x24(0x1)
	unsigned char UnknownData_24_2 : 6; // 0x24(0x1)
	unsigned char UnknownData_25[0x0003]; // 0x25(0x3)
};

// ScriptStruct Synthesis.SourceEffectEnvelopeFollowerSettings
// Size : 0xC (Inherited : 0x0)
struct FSourceEffectEnvelopeFollowerSettings {
	float AttackTime; // 0x0(0x4)
	float ReleaseTime; // 0x4(0x4)
	enum class EEnvelopeFollowerPeakMode PeakMode; // 0x8(0x1)
	bool bIsAnalogMode; // 0x9(0x1)
	unsigned char UnknownData_A[0x0002]; // 0xA(0x2)
};

// ScriptStruct Synthesis.SourceEffectEQSettings
// Size : 0x10 (Inherited : 0x0)
struct FSourceEffectEQSettings {
	struct TArray<struct FSourceEffectEQBand> EQBands; // 0x0(0x10)
};

// ScriptStruct Synthesis.SourceEffectEQBand
// Size : 0x10 (Inherited : 0x0)
struct FSourceEffectEQBand {
	float Frequency; // 0x0(0x4)
	float Bandwidth; // 0x4(0x4)
	float GainDb; // 0x8(0x4)
	unsigned char bEnabled : 1; // 0xC(0x1)
	unsigned char UnknownData_C_1 : 7; // 0xC(0x1)
	unsigned char UnknownData_D[0x0003]; // 0xD(0x3)
};

// ScriptStruct Synthesis.SourceEffectFilterSettings
// Size : 0xC (Inherited : 0x0)
struct FSourceEffectFilterSettings {
	enum class ESourceEffectFilterCircuit FilterCircuit; // 0x0(0x1)
	enum class ESourceEffectFilterType FilterType; // 0x1(0x1)
	unsigned char UnknownData_2[0x0002]; // 0x2(0x2)
	float CutoffFrequency; // 0x4(0x4)
	float FilterQ; // 0x8(0x4)
};

// ScriptStruct Synthesis.SourceEffectFoldbackDistortionSettings
// Size : 0xC (Inherited : 0x0)
struct FSourceEffectFoldbackDistortionSettings {
	float InputGainDb; // 0x0(0x4)
	float ThresholdDb; // 0x4(0x4)
	float OutputGainDb; // 0x8(0x4)
};

// ScriptStruct Synthesis.SourceEffectMidSideSpreaderSettings
// Size : 0xC (Inherited : 0x0)
struct FSourceEffectMidSideSpreaderSettings {
	enum class EStereoChannelMode InputMode; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float SpreadAmount; // 0x4(0x4)
	enum class EStereoChannelMode OutputMode; // 0x8(0x1)
	bool bEqualPower; // 0x9(0x1)
	unsigned char UnknownData_A[0x0002]; // 0xA(0x2)
};

// ScriptStruct Synthesis.SourceEffectPannerSettings
// Size : 0x8 (Inherited : 0x0)
struct FSourceEffectPannerSettings {
	float Spread; // 0x0(0x4)
	float Pan; // 0x4(0x4)
};

// ScriptStruct Synthesis.SourceEffectPhaserSettings
// Size : 0x10 (Inherited : 0x0)
struct FSourceEffectPhaserSettings {
	float WetLevel; // 0x0(0x4)
	float Frequency; // 0x4(0x4)
	float Feedback; // 0x8(0x4)
	enum class EPhaserLFOType LFOType; // 0xC(0x1)
	bool UseQuadraturePhase; // 0xD(0x1)
	unsigned char UnknownData_E[0x0002]; // 0xE(0x2)
};

// ScriptStruct Synthesis.SourceEffectRingModulationSettings
// Size : 0x14 (Inherited : 0x0)
struct FSourceEffectRingModulationSettings {
	enum class ERingModulatorTypeSourceEffect ModulatorType; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float Frequency; // 0x4(0x4)
	float Depth; // 0x8(0x4)
	float DryLevel; // 0xC(0x4)
	float WetLevel; // 0x10(0x4)
};

// ScriptStruct Synthesis.SourceEffectSimpleDelaySettings
// Size : 0x18 (Inherited : 0x0)
struct FSourceEffectSimpleDelaySettings {
	float SpeedOfSound; // 0x0(0x4)
	float DelayAmount; // 0x4(0x4)
	float DryAmount; // 0x8(0x4)
	float WetAmount; // 0xC(0x4)
	float Feedback; // 0x10(0x4)
	unsigned char bDelayBasedOnDistance : 1; // 0x14(0x1)
	unsigned char UnknownData_14_1 : 7; // 0x14(0x1)
	unsigned char UnknownData_15[0x0003]; // 0x15(0x3)
};

// ScriptStruct Synthesis.SourceEffectStereoDelaySettings
// Size : 0x14 (Inherited : 0x0)
struct FSourceEffectStereoDelaySettings {
	enum class EStereoDelaySourceEffect DelayMode; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float DelayTimeMsec; // 0x4(0x4)
	float Feedback; // 0x8(0x4)
	float DelayRatio; // 0xC(0x4)
	float WetLevel; // 0x10(0x4)
};

// ScriptStruct Synthesis.SourceEffectWaveShaperSettings
// Size : 0x8 (Inherited : 0x0)
struct FSourceEffectWaveShaperSettings {
	float Amount; // 0x0(0x4)
	float OutputGainDb; // 0x4(0x4)
};

// ScriptStruct Synthesis.SubmixEffectConvolutionReverbSettings
// Size : 0x20 (Inherited : 0x0)
struct FSubmixEffectConvolutionReverbSettings {
	float NormalizationVolumeDb; // 0x0(0x4)
	float SurroundRearChannelBleedDb; // 0x4(0x4)
	bool bInvertRearChannelBleedPhase; // 0x8(0x1)
	bool bSurroundRearChannelFlip; // 0x9(0x1)
	unsigned char UnknownData_A[0x0002]; // 0xA(0x2)
	float SurroundRearChannelBleedAmount; // 0xC(0x4)
	struct UAudioImpulseResponse* ImpulseResponse; // 0x10(0x8)
	bool AllowHArdwareAcceleration; // 0x18(0x1)
	unsigned char UnknownData_19[0x0007]; // 0x19(0x7)
};

// ScriptStruct Synthesis.SubmixEffectDelaySettings
// Size : 0xC (Inherited : 0x0)
struct FSubmixEffectDelaySettings {
	float MaximumDelayLength; // 0x0(0x4)
	float InterpolationTime; // 0x4(0x4)
	float DelayLength; // 0x8(0x4)
};

// ScriptStruct Synthesis.SubmixEffectFilterSettings
// Size : 0xC (Inherited : 0x0)
struct FSubmixEffectFilterSettings {
	enum class ESubmixFilterType FilterType; // 0x0(0x1)
	enum class ESubmixFilterAlgorithm FilterAlgorithm; // 0x1(0x1)
	unsigned char UnknownData_2[0x0002]; // 0x2(0x2)
	float FilterFrequency; // 0x4(0x4)
	float FilterQ; // 0x8(0x4)
};

// ScriptStruct Synthesis.SubmixEffectFlexiverbSettings
// Size : 0x10 (Inherited : 0x0)
struct FSubmixEffectFlexiverbSettings {
	float PreDelay; // 0x0(0x4)
	float DecayTime; // 0x4(0x4)
	float RoomDampening; // 0x8(0x4)
	int32_t Complexity; // 0xC(0x4)
};

// ScriptStruct Synthesis.SubmixEffectTapDelaySettings
// Size : 0x18 (Inherited : 0x0)
struct FSubmixEffectTapDelaySettings {
	float MaximumDelayLength; // 0x0(0x4)
	float InterpolationTime; // 0x4(0x4)
	struct TArray<struct FTapDelayInfo> Taps; // 0x8(0x10)
};

// ScriptStruct Synthesis.TapDelayInfo
// Size : 0x18 (Inherited : 0x0)
struct FTapDelayInfo {
	enum class ETapLineMode TapLineMode; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float DelayLength; // 0x4(0x4)
	float Gain; // 0x8(0x4)
	int32_t OutputChannel; // 0xC(0x4)
	float PanInDegrees; // 0x10(0x4)
	int32_t TapId; // 0x14(0x4)
};

// ScriptStruct Synthesis.Synth2DSliderStyle
// Size : 0x2B8 (Inherited : 0x8)
struct FSynth2DSliderStyle : FSlateWidgetStyle {
	struct FSlateBrush NormalThumbImage; // 0x8(0x88)
	struct FSlateBrush DisabledThumbImage; // 0x90(0x88)
	struct FSlateBrush NormalBarImage; // 0x118(0x88)
	struct FSlateBrush DisabledBarImage; // 0x1A0(0x88)
	struct FSlateBrush BackgroundImage; // 0x228(0x88)
	float BarThickness; // 0x2B0(0x4)
	unsigned char UnknownData_2B4[0x0004]; // 0x2B4(0x4)
};

// ScriptStruct Synthesis.SynthKnobStyle
// Size : 0x238 (Inherited : 0x8)
struct FSynthKnobStyle : FSlateWidgetStyle {
	struct FSlateBrush LargeKnob; // 0x8(0x88)
	struct FSlateBrush LargeKnobOverlay; // 0x90(0x88)
	struct FSlateBrush MediumKnob; // 0x118(0x88)
	struct FSlateBrush MediumKnobOverlay; // 0x1A0(0x88)
	float MinValueAngle; // 0x228(0x4)
	float MaxValueAngle; // 0x22C(0x4)
	enum class ESynthKnobSize KnobSize; // 0x230(0x1)
	unsigned char UnknownData_231[0x0007]; // 0x231(0x7)
};

// ScriptStruct Synthesis.SynthSlateStyle
// Size : 0x10 (Inherited : 0x8)
struct FSynthSlateStyle : FSlateWidgetStyle {
	enum class ESynthSlateSizeType SizeType; // 0x8(0x1)
	enum class ESynthSlateColorStyle ColorStyle; // 0x9(0x1)
	unsigned char UnknownData_A[0x0006]; // 0xA(0x6)
};

