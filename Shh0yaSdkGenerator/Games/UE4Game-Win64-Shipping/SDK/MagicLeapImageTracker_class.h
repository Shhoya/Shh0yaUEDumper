// Class MagicLeapImageTracker.MagicLeapImageTrackerComponent
// Size : 0x270 (Inherited : 0x1F0)
struct UMagicLeapImageTrackerComponent : USceneComponent {
	struct UTexture2D* TargetImageTexture; // 0x1F0(0x8)
	struct FString Name; // 0x1F8(0x10)
	float LongerDimension; // 0x208(0x4)
	bool bIsStationary; // 0x20C(0x1)
	bool bUseUnreliablePose; // 0x20D(0x1)
	unsigned char UnknownData_20E[0x0002]; // 0x20E(0x2)
	struct FMulticastInlineDelegate OnSetImageTargetSucceeded; // 0x210(0x10)
	struct FMulticastInlineDelegate OnSetImageTargetFailed; // 0x220(0x10)
	struct FMulticastInlineDelegate OnImageTargetFound; // 0x230(0x10)
	struct FMulticastInlineDelegate OnImageTargetLost; // 0x240(0x10)
	struct FMulticastInlineDelegate OnImageTargetUnreliableTracking; // 0x250(0x10)
	unsigned char UnknownData_260[0x0010]; // 0x260(0x10)

	bool SetTargetAsync(struct UTexture2D* ImageTarget); // Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.SetTargetAsync // (Final|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF774C59A40
	bool RemoveTargetAsync(); // Function MagicLeapImageTracker.MagicLeapImageTrackerComponent.RemoveTargetAsync // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774C599A0
};

// Class MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct UMagicLeapImageTrackerFunctionLibrary : UBlueprintFunctionLibrary {

	void SetMaxSimultaneousTargets(int32_t MaxSimultaneousTargets); // Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.SetMaxSimultaneousTargets // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774C599D0
	bool IsImageTrackingEnabled(); // Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.IsImageTrackingEnabled // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774C59970
	int32_t GetMaxSimultaneousTargets(); // Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.GetMaxSimultaneousTargets // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774C59940
	void EnableImageTracking(bool bEnable); // Function MagicLeapImageTracker.MagicLeapImageTrackerFunctionLibrary.EnableImageTracking // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774C598C0
};

