// Class MagicLeapLightEstimation.MagicLeapLightingTrackingComponent
// Size : 0xC0 (Inherited : 0xB0)
struct UMagicLeapLightingTrackingComponent : UActorComponent {
	bool UseGlobalAmbience; // 0xB0(0x1)
	bool UseColorTemp; // 0xB1(0x1)
	unsigned char UnknownData_B2[0x000E]; // 0xB2(0xE)
};

// Class MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct UMagicLeapLightEstimationFunctionLibrary : UBlueprintFunctionLibrary {

	bool IsTrackerValid(); // Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.IsTrackerValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF774C611C0
	bool GetColorTemperatureState(struct FMagicLeapLightEstimationColorTemperatureState ColorTemperatureState); // Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetColorTemperatureState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x21, 0x7FF774C61130
	bool GetAmbientGlobalState(struct FMagicLeapLightEstimationAmbientGlobalState GlobalAmbientState); // Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.GetAmbientGlobalState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x19, 0x7FF774C61080
	void DestroyTracker(); // Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.DestroyTracker // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF774C61060
	bool CreateTracker(); // Function MagicLeapLightEstimation.MagicLeapLightEstimationFunctionLibrary.CreateTracker // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774C61030
};

