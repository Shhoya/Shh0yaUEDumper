// ScriptStruct MagicLeapLightEstimation.MagicLeapLightEstimationColorTemperatureState
// Size : 0x20 (Inherited : 0x0)
struct FMagicLeapLightEstimationColorTemperatureState {
	float ColorTemperatureKelvin; // 0x0(0x4)
	struct FLinearColor AmbientColor; // 0x4(0x10)
	unsigned char UnknownData_14[0x0004]; // 0x14(0x4)
	struct FTimespan Timestamp; // 0x18(0x8)
};

// ScriptStruct MagicLeapLightEstimation.MagicLeapLightEstimationAmbientGlobalState
// Size : 0x18 (Inherited : 0x0)
struct FMagicLeapLightEstimationAmbientGlobalState {
	struct TArray<float> AmbientIntensityNits; // 0x0(0x10)
	struct FTimespan Timestamp; // 0x10(0x8)
};

