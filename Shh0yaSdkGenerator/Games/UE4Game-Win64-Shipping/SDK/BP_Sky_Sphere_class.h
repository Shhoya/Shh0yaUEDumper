// BlueprintGeneratedClass BP_Sky_Sphere.BP_Sky_Sphere_C
// Size : 0x2C0 (Inherited : 0x220)
struct ABP_Sky_Sphere_C : AActor {
	struct UStaticMeshComponent* SkySphereMesh; // 0x220(0x8)
	struct USceneComponent* Base; // 0x228(0x8)
	struct UMaterialInstanceDynamic* Sky material; // 0x230(0x8)
	bool Refresh material; // 0x238(0x1)
	unsigned char UnknownData_239[0x0007]; // 0x239(0x7)
	struct ADirectionalLight* Directional light actor; // 0x240(0x8)
	bool Colors determined by sun position; // 0x248(0x1)
	unsigned char UnknownData_249[0x0003]; // 0x249(0x3)
	float Sun height; // 0x24C(0x4)
	float Sun brightness; // 0x250(0x4)
	float Horizon falloff; // 0x254(0x4)
	struct FLinearColor Zenith color; // 0x258(0x10)
	struct FLinearColor Horizon color; // 0x268(0x10)
	struct FLinearColor Cloud color; // 0x278(0x10)
	struct FLinearColor Overall Color; // 0x288(0x10)
	float Cloud speed; // 0x298(0x4)
	float Cloud opacity; // 0x29C(0x4)
	float Stars brightness; // 0x2A0(0x4)
	unsigned char UnknownData_2A4[0x0004]; // 0x2A4(0x4)
	struct UCurveLinearColor* Horizon color curve; // 0x2A8(0x8)
	struct UCurveLinearColor* Zenith color curve; // 0x2B0(0x8)
	struct UCurveLinearColor* Cloud color curve; // 0x2B8(0x8)

	void RefreshMaterial(); // Function BP_Sky_Sphere.BP_Sky_Sphere_C.RefreshMaterial // (Public|BlueprintCallable|BlueprintEvent) // Param Size : 0x0, 0x7FF77510D9D0
	void UpdateSunDirection(); // Function BP_Sky_Sphere.BP_Sky_Sphere_C.UpdateSunDirection // (Public|BlueprintCallable|BlueprintEvent) // Param Size : 0x0, 0x7FF77510D9D0
	void UserConstructionScript(); // Function BP_Sky_Sphere.BP_Sky_Sphere_C.UserConstructionScript // (Event|Public|BlueprintCallable|BlueprintEvent) // Param Size : 0x0, 0x7FF77510D9D0
};

