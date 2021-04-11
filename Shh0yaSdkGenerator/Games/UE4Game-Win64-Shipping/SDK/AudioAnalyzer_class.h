// Class AudioAnalyzer.AudioAnalyzerAsset
// Size : 0x28 (Inherited : 0x28)
struct UAudioAnalyzerAsset : UObject {
};

// Class AudioAnalyzer.AudioAnalyzerNRTSettings
// Size : 0x28 (Inherited : 0x28)
struct UAudioAnalyzerNRTSettings : UAudioAnalyzerAsset {
};

// Class AudioAnalyzer.AudioAnalyzerNRT
// Size : 0x78 (Inherited : 0x28)
struct UAudioAnalyzerNRT : UAudioAnalyzerAsset {
	struct USoundWave* Sound; // 0x28(0x8)
	float DurationInSeconds; // 0x30(0x4)
	unsigned char UnknownData_34[0x0044]; // 0x34(0x44)
};

