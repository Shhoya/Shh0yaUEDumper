// Class SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct USteamVRInputDeviceFunctionLibrary : UBlueprintFunctionLibrary {

	void ShowSteamVR_ActionOrigin(struct FSteamVRAction SteamVRAction, struct FSteamVRActionSet SteamVRActionSet); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowSteamVR_ActionOrigin // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x40, 0x7FF774DC7250
	void ShowAllSteamVR_ActionOrigins(); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ShowAllSteamVR_ActionOrigins // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF774DC7230
	float SetSteamVR_GlobalPredictedSecondsFromNow(float NewValue); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetSteamVR_GlobalPredictedSecondsFromNow // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774DC71B0
	void SetPoseSource(bool bUseSkeletonPose); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetPoseSource // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DC7130
	void SetCurlsAndSplaysState(bool NewLeftHandState, bool NewRightHandState); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.SetCurlsAndSplaysState // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x2, 0x7FF774DC7060
	bool ResetSeatedPosition(); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.ResetSeatedPosition // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774DC7030
	void PlaySteamVR_HapticFeedback(enum class ESteamVRHand hand, float StartSecondsFromNow, float DurationSeconds, float Frequency, float Amplitude); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.PlaySteamVR_HapticFeedback // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x14, 0x7FF774DC6EB0
	float GetUserIPD(); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetUserIPD // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DC6E60
	bool GetSteamVR_OriginTrackedDeviceInfo(struct FSteamVRAction SteamVRAction, struct FSteamVRInputOriginInfo InputOriginInfo); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginTrackedDeviceInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x51, 0x7FF774DC6D10
	void GetSteamVR_OriginLocalizedName(struct FSteamVRAction SteamVRAction, struct TArray<enum class ESteamVRInputStringBits> LocalizedParts, struct FString OriginLocalizedName); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_OriginLocalizedName // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x48, 0x7FF774DC6B50
	struct TArray<struct FSteamVRInputBindingInfo> GetSteamVR_InputBindingInfo(struct FSteamVRAction SteamVRActionHandle); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_InputBindingInfo // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x38, 0x7FF774DC6A40
	bool GetSteamVR_HandPoseRelativeToNow(struct FVector Position, struct FRotator Orientation, enum class ESteamVRHand hand, float PredictedSecondsFromNow); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_HandPoseRelativeToNow // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x21, 0x7FF774DC68D0
	float GetSteamVR_GlobalPredictedSecondsFromNow(); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_GlobalPredictedSecondsFromNow // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774DC68A0
	void GetSteamVR_ActionSetArray(struct TArray<struct FSteamVRActionSet> SteamVRActionSets); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionSetArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF774DC67E0
	void GetSteamVR_ActionArray(struct TArray<struct FSteamVRAction> SteamVRActions); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSteamVR_ActionArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF774DC6720
	void GetSkeletalTransform(struct FSteamVRSkeletonTransform LeftHand, struct FSteamVRSkeletonTransform RightHand, bool bWithController); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalTransform // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0xBA1, 0x7FF774DC65B0
	void GetSkeletalState(bool LeftHandState, bool RightHandState); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetSkeletalState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x2, 0x7FF774DC64D0
	void GetRightHandPoseData(struct FVector Position, struct FRotator Orientation, struct FVector AngularVelocity, struct FVector Velocity); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetRightHandPoseData // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x30, 0x7FF774DC6350
	void GetPoseSource(bool bUsingSkeletonPose); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetPoseSource // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x1, 0x7FF774DC62D0
	void GetLeftHandPoseData(struct FVector Position, struct FRotator Orientation, struct FVector AngularVelocity, struct FVector Velocity); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetLeftHandPoseData // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x30, 0x7FF774DC6150
	void GetFingerCurlsAndSplays(enum class EHand hand, struct FSteamVRFingerCurls FingerCurls, struct FSteamVRFingerSplays FingerSplays, enum class ESkeletalSummaryDataType SummaryDataType); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetFingerCurlsAndSplays // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x29, 0x7FF774DC5FD0
	void GetCurlsAndSplaysState(bool LeftHandState, bool RightHandState); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetCurlsAndSplaysState // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x2, 0x7FF774DC5EF0
	void GetControllerFidelity(enum class EControllerFidelity LeftControllerFidelity, enum class EControllerFidelity RightControllerFidelity); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.GetControllerFidelity // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x2, 0x7FF774DC5E10
	void FindSteamVR_OriginTrackedDeviceInfo(struct FName ActionName, bool bResult, struct FSteamVRInputOriginInfo InputOriginInfo, struct FName ActionSet); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_OriginTrackedDeviceInfo // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x40, 0x7FF774DC5C80
	struct TArray<struct FSteamVRInputBindingInfo> FindSteamVR_InputBindingInfo(struct FName ActionName, struct FName ActionSet); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_InputBindingInfo // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF774DC5B80
	bool FindSteamVR_ActionOrigin(struct FName ActionName, struct FName ActionSet); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_ActionOrigin // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF774DC5AC0
	void FindSteamVR_Action(struct FName ActionName, bool bResult, struct FSteamVRAction FoundAction, struct FSteamVRActionSet FoundActionSet, struct FName ActionSet); // Function SteamVRInputDevice.SteamVRInputDeviceFunctionLibrary.FindSteamVR_Action // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x58, 0x7FF774DC58E0
};

// Class SteamVRInputDevice.SteamVRTrackingReferences
// Size : 0x108 (Inherited : 0xB0)
struct USteamVRTrackingReferences : UActorComponent {
	struct FMulticastInlineDelegate OnTrackedDeviceActivated; // 0xB0(0x10)
	struct FMulticastInlineDelegate OnTrackedDeviceDeactivated; // 0xC0(0x10)
	float ActiveDevicePollFrequency; // 0xD0(0x4)
	struct FVector TrackingReferenceScale; // 0xD4(0xC)
	struct TArray<struct UStaticMeshComponent*> TrackingReferences; // 0xE0(0x10)
	unsigned char UnknownData_F0[0x0018]; // 0xF0(0x18)

	bool ShowTrackingReferences(struct UStaticMesh* TrackingReferenceMesh); // Function SteamVRInputDevice.SteamVRTrackingReferences.ShowTrackingReferences // (Final|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF774DC7370
	void HideTrackingReferences(); // Function SteamVRInputDevice.SteamVRTrackingReferences.HideTrackingReferences // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF774DC6E90
};

