// BlueprintGeneratedClass FirstPersonHUD.FirstPersonHUD_C
// Size : 0x321 (Inherited : 0x310)
struct AFirstPersonHUD_C : AHUD {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x310(0x8)
	struct USceneComponent* DefaultSceneRoot; // 0x318(0x8)
	bool HMDEnabled?; // 0x320(0x1)

	void ReceiveDrawHUD(int32_t SizeX, int32_t SizeY); // Function FirstPersonHUD.FirstPersonHUD_C.ReceiveDrawHUD // (BlueprintCosmetic|Event|Public|BlueprintEvent) // Param Size : 0x8, 0x7FF77510D9D0
	void ExecuteUbergraph_FirstPersonHUD(int32_t EntryPoint); // Function FirstPersonHUD.FirstPersonHUD_C.ExecuteUbergraph_FirstPersonHUD // (Final|UbergraphFunction) // Param Size : 0x4, 0x7FF77510D9D0
};

