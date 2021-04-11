// Enum AudioMixer.EAudioSpectrumType
enum class FEAudioSpectrumType : uint8 {
	MagnitudeSpectrum
	PowerSpectrum
	EAudioSpectrumType_MAX
};

// Enum AudioMixer.EFFTWindowType
enum class FEFFTWindowType : uint8 {
	None
	Hamming
	Hann
	Blackman
	EFFTWindowType_MAX
};

// Enum AudioMixer.EFFTPeakInterpolationMethod
enum class FEFFTPeakInterpolationMethod : uint8 {
	NearestNeighbor
	Linear
	Quadratic
	EFFTPeakInterpolationMethod_MAX
};

// Enum AudioMixer.EFFTSize
enum class FEFFTSize : uint8 {
	DefaultSize
	Min
	Small
	Medium
	Large
	Max
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

