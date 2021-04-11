// Class SteamVR.SteamVRChaperoneComponent
// Size : 0xD8 (Inherited : 0xB0)
struct USteamVRChaperoneComponent : UActorComponent {
	struct FMulticastInlineDelegate OnLeaveBounds; // 0xB0(0x10)
	struct FMulticastInlineDelegate OnReturnToBounds; // 0xC0(0x10)
	unsigned char UnknownData_D0[0x0008]; // 0xD0(0x8)

	void SteamVRChaperoneEvent__DelegateSignature(); // DelegateFunction SteamVR.SteamVRChaperoneComponent.SteamVRChaperoneEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // Param Size : 0x0, 0x7FF77510D9D0
	struct TArray<struct FVector> GetBounds(); // Function SteamVR.SteamVRChaperoneComponent.GetBounds // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF774D9A400
};

// Class SteamVR.SteamVRFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct USteamVRFunctionLibrary : UBlueprintFunctionLibrary {

	void GetValidTrackedDeviceIds(enum class ESteamVRTrackedDeviceType DeviceType, struct TArray<int32_t> OutTrackedDeviceIds); // Function SteamVR.SteamVRFunctionLibrary.GetValidTrackedDeviceIds // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x18, 0x7FF774D9A6F0
	bool GetTrackedDevicePositionAndOrientation(int32_t DeviceID, struct FVector OutPosition, struct FRotator OutOrientation); // Function SteamVR.SteamVRFunctionLibrary.GetTrackedDevicePositionAndOrientation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x1D, 0x7FF774D9A5D0
	bool GetHandPositionAndOrientation(int32_t ControllerIndex, enum class EControllerHand hand, struct FVector OutPosition, struct FRotator OutOrientation); // Function SteamVR.SteamVRFunctionLibrary.GetHandPositionAndOrientation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x21, 0x7FF774D9A480
};

// Class SteamVR.SteamVRHQStereoLayerShape
// Size : 0x38 (Inherited : 0x28)
struct USteamVRHQStereoLayerShape : UStereoLayerShapeQuad {
	bool bCurved; // 0x28(0x1)
	bool bAntiAlias; // 0x29(0x1)
	unsigned char UnknownData_2A[0x0002]; // 0x2A(0x2)
	float AutoCurveMinDistance; // 0x2C(0x4)
	float AutoCurveMaxDistance; // 0x30(0x4)
	unsigned char UnknownData_34[0x0004]; // 0x34(0x4)

	void SetCurved(bool InCurved); // Function SteamVR.SteamVRHQStereoLayerShape.SetCurved // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D9A960
	void SetAutoCurveMinDistance(float InDistance); // Function SteamVR.SteamVRHQStereoLayerShape.SetAutoCurveMinDistance // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774D9A8E0
	void SetAutoCurveMaxDistance(float InDistance); // Function SteamVR.SteamVRHQStereoLayerShape.SetAutoCurveMaxDistance // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774D9A860
	void SetAntiAlias(bool InAntiAlias); // Function SteamVR.SteamVRHQStereoLayerShape.SetAntiAlias // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D9A7D0
};

