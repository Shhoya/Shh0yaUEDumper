// Class AudioMixer.SynthComponent
// Size : 0x6D0 (Inherited : 0x1F0)
struct USynthComponent : USceneComponent {
	unsigned char bAutoDestroy : 1; // 0x1F0(0x1)
	unsigned char bStopWhenOwnerDestroyed : 1; // 0x1F0(0x1)
	unsigned char bAllowSpatialization : 1; // 0x1F0(0x1)
	unsigned char bOverrideAttenuation : 1; // 0x1F0(0x1)
	unsigned char UnknownData_1F0_4 : 4; // 0x1F0(0x1)
	unsigned char UnknownData_1F1[0x0003]; // 0x1F1(0x3)
	unsigned char bOutputToBusOnly : 1; // 0x1F4(0x1)
	unsigned char UnknownData_1F4_1 : 7; // 0x1F4(0x1)
	unsigned char UnknownData_1F5[0x0003]; // 0x1F5(0x3)
	struct USoundAttenuation* AttenuationSettings; // 0x1F8(0x8)
	struct FSoundAttenuationSettings AttenuationOverrides; // 0x200(0x3A0)
	struct USoundConcurrency* ConcurrencySettings; // 0x5A0(0x8)
	struct TSet<struct USoundConcurrency*> ConcurrencySet; // 0x5A8(0x50)
	struct USoundClass* SoundClass; // 0x5F8(0x8)
	struct USoundEffectSourcePresetChain* SourceEffectChain; // 0x600(0x8)
	struct USoundSubmixBase* SoundSubmix; // 0x608(0x8)
	struct TArray<struct FSoundSubmixSendInfo> SoundSubmixSends; // 0x610(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> BusSends; // 0x620(0x10)
	struct FSoundModulation Modulation; // 0x630(0x10)
	struct TArray<struct FSoundSourceBusSendInfo> PreEffectBusSends; // 0x640(0x10)
	unsigned char bIsUISound : 1; // 0x650(0x1)
	unsigned char bIsPreviewSound : 1; // 0x650(0x1)
	unsigned char UnknownData_650_2 : 6; // 0x650(0x1)
	unsigned char UnknownData_651[0x0003]; // 0x651(0x3)
	int32_t EnvelopeFollowerAttackTime; // 0x654(0x4)
	int32_t EnvelopeFollowerReleaseTime; // 0x658(0x4)
	unsigned char UnknownData_65C[0x0004]; // 0x65C(0x4)
	struct FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x660(0x10)
	unsigned char UnknownData_670[0x0020]; // 0x670(0x20)
	struct USynthSound* Synth; // 0x690(0x8)
	struct UAudioComponent* AudioComponent; // 0x698(0x8)
	unsigned char UnknownData_6A0[0x0030]; // 0x6A0(0x30)

	void Stop(); // Function AudioMixer.SynthComponent.Stop // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF776044490
	void Start(); // Function AudioMixer.SynthComponent.Start // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF7760441B0
	void SetVolumeMultiplier(float VolumeMultiplier); // Function AudioMixer.SynthComponent.SetVolumeMultiplier // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF776044130
	void SetSubmixSend(struct USoundSubmixBase* Submix, float SendLevel); // Function AudioMixer.SynthComponent.SetSubmixSend // (Final|Native|Public|BlueprintCallable) // Param Size : 0xC, 0x7FF776044060
	bool IsPlaying(); // Function AudioMixer.SynthComponent.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF7760432A0
};

// Class AudioMixer.AudioGenerator
// Size : 0xA8 (Inherited : 0x28)
struct UAudioGenerator : UObject {
	unsigned char UnknownData_28[0x0080]; // 0x28(0x80)
};

// Class AudioMixer.AudioMixerBlueprintLibrary
// Size : 0x28 (Inherited : 0x28)
struct UAudioMixerBlueprintLibrary : UBlueprintFunctionLibrary {

	float TrimAudioCache(float InMegabytesToFree); // Function AudioMixer.AudioMixerBlueprintLibrary.TrimAudioCache // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF776044770
	struct USoundWave* StopRecordingOutput(struct UObject* WorldContextObject, enum class EAudioRecordingExportType ExportType, struct FString Name, struct FString Path, struct USoundSubmix* SubmixToRecord, struct USoundWave* ExistingSoundWaveToOverwrite); // Function AudioMixer.AudioMixerBlueprintLibrary.StopRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x48, 0x7FF776044560
	void StopAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToStopAnalyzing); // Function AudioMixer.AudioMixerBlueprintLibrary.StopAnalyzingOutput // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF7760444B0
	void StartRecordingOutput(struct UObject* WorldContextObject, float ExpectedDuration, struct USoundSubmix* SubmixToRecord); // Function AudioMixer.AudioMixerBlueprintLibrary.StartRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF776044390
	void StartAnalyzingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToAnalyze, enum class EFFTSize FFTSize, enum class EFFTPeakInterpolationMethod InterpolationMethod, enum class EFFTWindowType WindowType, float HopSize); // Function AudioMixer.AudioMixerBlueprintLibrary.StartAnalyzingOutput // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF7760441D0
	void SetBypassSourceEffectChainEntry(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex, bool bBypassed); // Function AudioMixer.AudioMixerBlueprintLibrary.SetBypassSourceEffectChainEntry // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x15, 0x7FF776043A20
	void ResumeRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause); // Function AudioMixer.AudioMixerBlueprintLibrary.ResumeRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF776043970
	void ReplaceSoundEffectSubmix(struct UObject* WorldContextObject, struct USoundSubmix* InSoundSubmix, int32_t SubmixChainIndex, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.ReplaceSoundEffectSubmix // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF776043840
	void RemoveSubmixEffectPresetAtIndex(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, int32_t SubmixChainIndex); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPresetAtIndex // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x14, 0x7FF776043750
	void RemoveSubmixEffectPreset(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSubmixEffectPreset // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF776043660
	void RemoveSourceEffectFromPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, int32_t EntryIndex); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveSourceEffectFromPresetChain // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x14, 0x7FF776043570
	void RemoveMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.RemoveMasterSubmixEffect // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF7760434C0
	void PrimeSoundForPlayback(struct USoundWave* SoundWave, struct FDelegate OnLoadCompletion); // Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundForPlayback // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF7760433F0
	void PrimeSoundCueForPlayback(struct USoundCue* SoundCue); // Function AudioMixer.AudioMixerBlueprintLibrary.PrimeSoundCueForPlayback // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF776043380
	void PauseRecordingOutput(struct UObject* WorldContextObject, struct USoundSubmix* SubmixToPause); // Function AudioMixer.AudioMixerBlueprintLibrary.PauseRecordingOutput // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF7760432D0
	void GetPhaseForFrequencies(struct UObject* WorldContextObject, struct TArray<float> Frequencies, struct TArray<float> Phases, struct USoundSubmix* SubmixToAnalyze); // Function AudioMixer.AudioMixerBlueprintLibrary.GetPhaseForFrequencies // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x30, 0x7FF776043120
	int32_t GetNumberOfEntriesInSourceEffectChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain); // Function AudioMixer.AudioMixerBlueprintLibrary.GetNumberOfEntriesInSourceEffectChain // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x14, 0x7FF776043060
	void GetMagnitudeForFrequencies(struct UObject* WorldContextObject, struct TArray<float> Frequencies, struct TArray<float> Magnitudes, struct USoundSubmix* SubmixToAnalyze); // Function AudioMixer.AudioMixerBlueprintLibrary.GetMagnitudeForFrequencies // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x30, 0x7FF776042EE0
	void ClearSubmixEffects(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix); // Function AudioMixer.AudioMixerBlueprintLibrary.ClearSubmixEffects // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF776042E30
	void ClearMasterSubmixEffects(struct UObject* WorldContextObject); // Function AudioMixer.AudioMixerBlueprintLibrary.ClearMasterSubmixEffects // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF776042DC0
	int32_t AddSubmixEffect(struct UObject* WorldContextObject, struct USoundSubmix* SoundSubmix, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.AddSubmixEffect // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1C, 0x7FF776042CD0
	void AddSourceEffectToPresetChain(struct UObject* WorldContextObject, struct USoundEffectSourcePresetChain* PresetChain, struct FSourceEffectChainEntry Entry); // Function AudioMixer.AudioMixerBlueprintLibrary.AddSourceEffectToPresetChain // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF776042BD0
	void AddMasterSubmixEffect(struct UObject* WorldContextObject, struct USoundEffectSubmixPreset* SubmixEffectPreset); // Function AudioMixer.AudioMixerBlueprintLibrary.AddMasterSubmixEffect // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF776042B20
};

// Class AudioMixer.SubmixEffectDynamicsProcessorPreset
// Size : 0x108 (Inherited : 0x40)
struct USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset {
	unsigned char UnknownData_40[0x0078]; // 0x40(0x78)
	struct FSubmixEffectDynamicsProcessorSettings Settings; // 0xB8(0x50)

	void SetSettings(struct FSubmixEffectDynamicsProcessorSettings Settings); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x50, 0x7FF776043BD0
	void SetExternalSubmix(struct USoundSubmix* Submix); // Function AudioMixer.SubmixEffectDynamicsProcessorPreset.SetExternalSubmix // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF776043B50
};

// Class AudioMixer.SubmixEffectSubmixEQPreset
// Size : 0x88 (Inherited : 0x40)
struct USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset {
	unsigned char UnknownData_40[0x0038]; // 0x40(0x38)
	struct FSubmixEffectSubmixEQSettings Settings; // 0x78(0x10)

	void SetSettings(struct FSubmixEffectSubmixEQSettings InSettings); // Function AudioMixer.SubmixEffectSubmixEQPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF774DF4310
};

// Class AudioMixer.SubmixEffectReverbPreset
// Size : 0xD0 (Inherited : 0x40)
struct USubmixEffectReverbPreset : USoundEffectSubmixPreset {
	unsigned char UnknownData_40[0x005C]; // 0x40(0x5C)
	struct FSubmixEffectReverbSettings Settings; // 0x9C(0x34)

	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbPreset.SetSettingsWithReverbEffect // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF776043F60
	void SetSettings(struct FSubmixEffectReverbSettings InSettings); // Function AudioMixer.SubmixEffectReverbPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x34, 0x7FF776043DA0
};

// Class AudioMixer.SubmixEffectReverbFastPreset
// Size : 0xD8 (Inherited : 0x40)
struct USubmixEffectReverbFastPreset : USoundEffectSubmixPreset {
	unsigned char UnknownData_40[0x0060]; // 0x40(0x60)
	struct FSubmixEffectReverbFastSettings Settings; // 0xA0(0x38)

	void SetSettingsWithReverbEffect(struct UReverbEffect* InReverbEffect, float WetLevel, float DryLevel); // Function AudioMixer.SubmixEffectReverbFastPreset.SetSettingsWithReverbEffect // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF776043E60
	void SetSettings(struct FSubmixEffectReverbFastSettings InSettings); // Function AudioMixer.SubmixEffectReverbFastPreset.SetSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x38, 0x7FF776043CE0
};

// Class AudioMixer.SynthSound
// Size : 0x380 (Inherited : 0x360)
struct USynthSound : USoundWaveProcedural {
	struct USynthComponent* OwningSynthComponent; // 0x360(0x8)
	unsigned char UnknownData_368[0x0018]; // 0x368(0x18)
};

