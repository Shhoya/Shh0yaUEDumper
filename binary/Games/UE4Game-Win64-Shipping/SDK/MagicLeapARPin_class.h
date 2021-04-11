// Class MagicLeapARPin.MagicLeapARPinComponent
// Size : 0x320 (Inherited : 0x1F0)
struct UMagicLeapARPinComponent : USceneComponent {
	struct FString ObjectUID; // 0x1F0(0x10)
	int32_t UserIndex; // 0x200(0x4)
	enum class EMagicLeapAutoPinType AutoPinType; // 0x204(0x1)
	bool bShouldPinActor; // 0x205(0x1)
	unsigned char UnknownData_206[0x0002]; // 0x206(0x2)
	class UMagicLeapARPinSaveGame* PinDataClass; // 0x208(0x8)
	struct FMulticastInlineDelegate OnPersistentEntityPinned; // 0x210(0x10)
	struct FMulticastInlineDelegate OnPersistentEntityPinLost; // 0x220(0x10)
	struct FGuid PinnedCFUID; // 0x230(0x10)
	struct USceneComponent* PinnedSceneComponent; // 0x240(0x8)
	struct UMagicLeapARPinSaveGame* PinData; // 0x248(0x8)
	unsigned char UnknownData_250[0x00D0]; // 0x250(0xD0)

	void UnPin(); // Function MagicLeapARPin.MagicLeapARPinComponent.UnPin // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF774C2AE30
	bool PinSceneComponent(struct USceneComponent* ComponentToPin); // Function MagicLeapARPin.MagicLeapARPinComponent.PinSceneComponent // (Final|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF774C2AD00
	bool PinRestoredOrSynced(); // Function MagicLeapARPin.MagicLeapARPinComponent.PinRestoredOrSynced // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF774C2ACD0
	bool PinActor(struct AActor* ActorToPin); // Function MagicLeapARPin.MagicLeapARPinComponent.PinActor // (Final|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF774C2AC40
	void PersistentEntityPinned__DelegateSignature(bool bRestoredOrSynced); // DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinned__DelegateSignature // (MulticastDelegate|Public|Delegate) // Param Size : 0x1, 0x7FF77510D9D0
	void PersistentEntityPinLost__DelegateSignature(); // DelegateFunction MagicLeapARPin.MagicLeapARPinComponent.PersistentEntityPinLost__DelegateSignature // (MulticastDelegate|Public|Delegate) // Param Size : 0x0, 0x7FF77510D9D0
	bool IsPinned(); // Function MagicLeapARPin.MagicLeapARPinComponent.IsPinned // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF774C2ABE0
	bool GetPinState(struct FMagicLeapARPinState State); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinState // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x11, 0x7FF774C2AA80
	bool GetPinnedPinID(struct FGuid PinID); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinnedPinID // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x11, 0x7FF774C2AB30
	struct UMagicLeapARPinSaveGame* GetPinData(class UMagicLeapARPinSaveGame* PinDataClass); // Function MagicLeapARPin.MagicLeapARPinComponent.GetPinData // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF774C2A9F0
};

// Class MagicLeapARPin.MagicLeapARPinFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct UMagicLeapARPinFunctionLibrary : UBlueprintFunctionLibrary {

	void UnBindToOnMagicLeapARPinUpdatedDelegate(struct FDelegate Delegate); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.UnBindToOnMagicLeapARPinUpdatedDelegate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF774C2AD90
	bool IsTrackerValid(); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.IsTrackerValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF774C2AC10
	enum class EMagicLeapPassableWorldError GetNumAvailableARPins(int32_t Count); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetNumAvailableARPins // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x5, 0x7FF774C2A960
	enum class EMagicLeapPassableWorldError GetClosestARPin(struct FVector SearchPoint, struct FGuid PinID); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetClosestARPin // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x1D, 0x7FF774C2A870
	enum class EMagicLeapPassableWorldError GetAvailableARPins(int32_t NumRequested, struct TArray<struct FGuid> Pins); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetAvailableARPins // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x19, 0x7FF774C2A790
	struct FString GetARPinStateToString(struct FMagicLeapARPinState State); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinStateToString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x20, 0x7FF774C2A6B0
	enum class EMagicLeapPassableWorldError GetARPinState(struct FGuid PinID, struct FMagicLeapARPinState State); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinState // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x21, 0x7FF774C2A5B0
	bool GetARPinPositionAndOrientation_TrackingSpace(struct FGuid PinID, struct FVector Position, struct FRotator Orientation, bool PinFoundInEnvironment); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation_TrackingSpace // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x2A, 0x7FF774C2A420
	bool GetARPinPositionAndOrientation(struct FGuid PinID, struct FVector Position, struct FRotator Orientation, bool PinFoundInEnvironment); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.GetARPinPositionAndOrientation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x2A, 0x7FF774C2A290
	enum class EMagicLeapPassableWorldError DestroyTracker(); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.DestroyTracker // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774C2A260
	enum class EMagicLeapPassableWorldError CreateTracker(); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.CreateTracker // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774C2A230
	void BindToOnMagicLeapARPinUpdatedDelegate(struct FDelegate Delegate); // Function MagicLeapARPin.MagicLeapARPinFunctionLibrary.BindToOnMagicLeapARPinUpdatedDelegate // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF774C2A190
};

// Class MagicLeapARPin.MagicLeapARPinSettings
// Size : 0x40 (Inherited : 0x28)
struct UMagicLeapARPinSettings : UObject {
	float UpdateCheckFrequency; // 0x28(0x4)
	struct FMagicLeapARPinState OnUpdatedEventTriggerDelta; // 0x2C(0x10)
	unsigned char UnknownData_3C[0x0004]; // 0x3C(0x4)
};

// Class MagicLeapARPin.MagicLeapARPinSaveGame
// Size : 0xA0 (Inherited : 0x28)
struct UMagicLeapARPinSaveGame : USaveGame {
	struct FGuid PinnedID; // 0x28(0x10)
	unsigned char UnknownData_38[0x0008]; // 0x38(0x8)
	struct FTransform ComponentWorldTransform; // 0x40(0x30)
	struct FTransform PinTransform; // 0x70(0x30)
};

