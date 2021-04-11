// Class AudioSynesthesia.AudioSynesthesiaNRTSettings
// Size : 0x28 (Inherited : 0x28)
struct UAudioSynesthesiaNRTSettings : UAudioAnalyzerNRTSettings {
};

// Class AudioSynesthesia.AudioSynesthesiaNRT
// Size : 0x78 (Inherited : 0x78)
struct UAudioSynesthesiaNRT : UAudioAnalyzerNRT {
};

// Class AudioSynesthesia.ConstantQNRTSettings
// Size : 0x48 (Inherited : 0x28)
struct UConstantQNRTSettings : UAudioSynesthesiaNRTSettings {
	float StartingFrequency; // 0x28(0x4)
	int32_t NumBands; // 0x2C(0x4)
	float NumBandsPerOctave; // 0x30(0x4)
	float AnalysisPeriod; // 0x34(0x4)
	bool bDownmixToMono; // 0x38(0x1)
	enum class EConstantQFFTSizeEnum FFTSize; // 0x39(0x1)
	enum class EFFTWindowType WindowType; // 0x3A(0x1)
	enum class EAudioSpectrumType SpectrumType; // 0x3B(0x1)
	float BandWidthStretch; // 0x3C(0x4)
	enum class EConstantQNormalizationEnum CQTNormalization; // 0x40(0x1)
	unsigned char UnknownData_41[0x0003]; // 0x41(0x3)
	float NoiseFloorDb; // 0x44(0x4)
};

// Class AudioSynesthesia.ConstantQNRT
// Size : 0x80 (Inherited : 0x78)
struct UConstantQNRT : UAudioSynesthesiaNRT {
	struct UConstantQNRTSettings* Settings; // 0x78(0x8)

	void GetNormalizedChannelConstantQAtTime(float InSeconds, int32_t InChannel, struct TArray<float> OutConstantQ); // Function AudioSynesthesia.ConstantQNRT.GetNormalizedChannelConstantQAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF624B50DE0
	void GetChannelConstantQAtTime(float InSeconds, int32_t InChannel, struct TArray<float> OutConstantQ); // Function AudioSynesthesia.ConstantQNRT.GetChannelConstantQAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF624B508D0
};

// Class AudioSynesthesia.LoudnessNRTSettings
// Size : 0x40 (Inherited : 0x28)
struct ULoudnessNRTSettings : UAudioSynesthesiaNRTSettings {
	float AnalysisPeriod; // 0x28(0x4)
	float MinimumFrequency; // 0x2C(0x4)
	float MaximumFrequency; // 0x30(0x4)
	enum class ELoudnessNRTCurveTypeEnum CurveType; // 0x34(0x1)
	unsigned char UnknownData_35[0x0003]; // 0x35(0x3)
	float NoiseFloorDb; // 0x38(0x4)
	unsigned char UnknownData_3C[0x0004]; // 0x3C(0x4)
};

// Class AudioSynesthesia.LoudnessNRT
// Size : 0x80 (Inherited : 0x78)
struct ULoudnessNRT : UAudioSynesthesiaNRT {
	struct ULoudnessNRTSettings* Settings; // 0x78(0x8)

	void GetNormalizedLoudnessAtTime(float InSeconds, float OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF624B51210
	void GetNormalizedChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0xC, 0x7FF624B50F10
	void GetLoudnessAtTime(float InSeconds, float OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF624B50D00
	void GetChannelLoudnessAtTime(float InSeconds, int32_t InChannel, float OutLoudness); // Function AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0xC, 0x7FF624B50A00
};

// Class AudioSynesthesia.OnsetNRTSettings
// Size : 0x40 (Inherited : 0x28)
struct UOnsetNRTSettings : UAudioSynesthesiaNRTSettings {
	bool bDownmixToMono; // 0x28(0x1)
	unsigned char UnknownData_29[0x0003]; // 0x29(0x3)
	float GranularityInSeconds; // 0x2C(0x4)
	float Sensitivity; // 0x30(0x4)
	float MinimumFrequency; // 0x34(0x4)
	float MaximumFrequency; // 0x38(0x4)
	unsigned char UnknownData_3C[0x0004]; // 0x3C(0x4)
};

// Class AudioSynesthesia.OnsetNRT
// Size : 0x80 (Inherited : 0x78)
struct UOnsetNRT : UAudioSynesthesiaNRT {
	struct UOnsetNRTSettings* Settings; // 0x78(0x8)

	void GetNormalizedChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, struct TArray<float> OutOnsetTimestamps, struct TArray<float> OutOnsetStrengths); // Function AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x30, 0x7FF624B51030
	void GetChannelOnsetsBetweenTimes(float InStartSeconds, float InEndSeconds, int32_t InChannel, struct TArray<float> OutOnsetTimestamps, struct TArray<float> OutOnsetStrengths); // Function AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x30, 0x7FF624B50B20
};

