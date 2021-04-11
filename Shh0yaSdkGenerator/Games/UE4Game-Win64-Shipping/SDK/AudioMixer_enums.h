// Enum AudioMixer.EMusicalNoteName
enum class FEMusicalNoteName : uint8 {
	C
	Db
	D
	Eb
	E
	F
	Gb
	G
	Ab
	A
	Bb
	B
	EMusicalNoteName_MAX
};

// Enum AudioMixer.ESubmixEffectDynamicsChannelLinkMode
enum class FESubmixEffectDynamicsChannelLinkMode : uint8 {
	Disabled
	Average
	Peak
	Count
	ESubmixEffectDynamicsChannelLinkMode_MAX
};

// Enum AudioMixer.ESubmixEffectDynamicsPeakMode
enum class FESubmixEffectDynamicsPeakMode : uint8 {
	MeanSquared
	RootMeanSquared
	Peak
	Count
	ESubmixEffectDynamicsPeakMode_MAX
};

// Enum AudioMixer.ESubmixEffectDynamicsProcessorType
enum class FESubmixEffectDynamicsProcessorType : uint8 {
	Compressor
	Limiter
	Expander
	Gate
	Count
	ESubmixEffectDynamicsProcessorType_MAX
};

