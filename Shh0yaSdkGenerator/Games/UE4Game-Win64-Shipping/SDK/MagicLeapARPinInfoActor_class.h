// BlueprintGeneratedClass MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C
// Size : 0x2C4 (Inherited : 0x238)
struct AMagicLeapARPinInfoActor_C : AMagicLeapARPinInfoActorBase {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x238(0x8)
	struct UStaticMeshComponent* Right; // 0x240(0x8)
	struct UStaticMeshComponent* Forward; // 0x248(0x8)
	struct UStaticMeshComponent* Up; // 0x250(0x8)
	struct USphereComponent* ValidRadiusVisualizer; // 0x258(0x8)
	struct USceneComponent* AxisRoot; // 0x260(0x8)
	struct USceneComponent* VisualizerRoot; // 0x268(0x8)
	struct UTextRenderComponent* TypeValue; // 0x270(0x8)
	struct UTextRenderComponent* TransErrValue; // 0x278(0x8)
	struct UTextRenderComponent* RotErrValue; // 0x280(0x8)
	struct UTextRenderComponent* ConfidenceValue; // 0x288(0x8)
	struct UTextRenderComponent* TransErrLabel; // 0x290(0x8)
	struct UTextRenderComponent* RotErrLabel; // 0x298(0x8)
	struct UTextRenderComponent* ConfidenceLabel; // 0x2A0(0x8)
	struct UTextRenderComponent* PinIDValue; // 0x2A8(0x8)
	struct USceneComponent* InfoRoot; // 0x2B0(0x8)
	struct USceneComponent* Root; // 0x2B8(0x8)
	float RotationSmoothSpeed; // 0x2C0(0x4)

	void UpdatePinState(); // Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UpdatePinState // (Public|BlueprintCallable|BlueprintEvent) // Param Size : 0x0, 0x7FF624E715D0
	void UserConstructionScript(); // Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // Param Size : 0x0, 0x7FF624E715D0
	void OnUpdateARPinState(); // Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.OnUpdateARPinState // (Event|Public|BlueprintCallable|BlueprintEvent) // Param Size : 0x0, 0x7FF624E715D0
	void ReceiveTick(float DeltaSeconds); // Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ReceiveTick // (Event|Public|BlueprintEvent) // Param Size : 0x4, 0x7FF624E715D0
	void ExecuteUbergraph_MagicLeapARPinInfoActor(int32_t EntryPoint); // Function MagicLeapARPinInfoActor.MagicLeapARPinInfoActor_C.ExecuteUbergraph_MagicLeapARPinInfoActor // (Final|UbergraphFunction|HasDefaults) // Param Size : 0x4, 0x7FF624E715D0
};

