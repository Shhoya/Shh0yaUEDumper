// Class OculusMR.OculusMR_BoundaryActor
// Size : 0x228 (Inherited : 0x220)
struct AOculusMR_BoundaryActor : AActor {
	struct UOculusMR_BoundaryMeshComponent* BoundaryMeshComponent; // 0x220(0x8)
};

// Class OculusMR.OculusMR_BoundaryMeshComponent
// Size : 0x460 (Inherited : 0x430)
struct UOculusMR_BoundaryMeshComponent : UMeshComponent {
	enum class EOculusMR_BoundaryType BoundaryType; // 0x430(0x1)
	unsigned char UnknownData_431[0x0003]; // 0x431(0x3)
	float BottomZ; // 0x434(0x4)
	float TopZ; // 0x438(0x4)
	unsigned char UnknownData_43C[0x0004]; // 0x43C(0x4)
	struct UMaterial* WhiteMaterial; // 0x440(0x8)
	struct AOculusMR_CastingCameraActor* CastingCameraActor; // 0x448(0x8)
	unsigned char UnknownData_450[0x0010]; // 0x450(0x10)
};

// Class OculusMR.OculusMR_CastingCameraActor
// Size : 0x330 (Inherited : 0x238)
struct AOculusMR_CastingCameraActor : ASceneCapture2D {
	struct UVRNotificationsComponent* VRNotificationComponent; // 0x238(0x8)
	struct UTexture2D* CameraColorTexture; // 0x240(0x8)
	struct UTexture2D* CameraDepthTexture; // 0x248(0x8)
	struct UOculusMR_PlaneMeshComponent* PlaneMeshComponent; // 0x250(0x8)
	struct UMaterial* ChromaKeyMaterial; // 0x258(0x8)
	struct UMaterial* ChromaKeyLitMaterial; // 0x260(0x8)
	struct UMaterial* OpaqueColoredMaterial; // 0x268(0x8)
	struct UMaterialInstanceDynamic* ChromaKeyMaterialInstance; // 0x270(0x8)
	struct UMaterialInstanceDynamic* ChromaKeyLitMaterialInstance; // 0x278(0x8)
	struct UMaterialInstanceDynamic* CameraFrameMaterialInstance; // 0x280(0x8)
	struct UMaterialInstanceDynamic* BackdropMaterialInstance; // 0x288(0x8)
	struct AOculusMR_BoundaryActor* BoundaryActor; // 0x290(0x8)
	struct ASceneCapture2D* BoundarySceneCaptureActor; // 0x298(0x8)
	struct UTexture2D* DefaultTexture_White; // 0x2A0(0x8)
	unsigned char UnknownData_2A8[0x0050]; // 0x2A8(0x50)
	struct TArray<struct UTextureRenderTarget2D*> BackgroundRenderTargets; // 0x2F8(0x10)
	struct ASceneCapture2D* ForegroundCaptureActor; // 0x308(0x8)
	struct TArray<struct UTextureRenderTarget2D*> ForegroundRenderTargets; // 0x310(0x10)
	struct UOculusMR_Settings* MRSettings; // 0x320(0x8)
	struct UOculusMR_State* MRState; // 0x328(0x8)
};

// Class OculusMR.OculusMR_PlaneMeshComponent
// Size : 0x450 (Inherited : 0x430)
struct UOculusMR_PlaneMeshComponent : UMeshComponent {
	unsigned char UnknownData_430[0x0020]; // 0x430(0x20)

	bool SetCustomMeshTriangles(struct TArray<struct FOculusMR_PlaneMeshTriangle> Triangles); // Function OculusMR.OculusMR_PlaneMeshComponent.SetCustomMeshTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x11, 0x7FF774D72130
	void ClearCustomMeshTriangles(); // Function OculusMR.OculusMR_PlaneMeshComponent.ClearCustomMeshTriangles // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF774D71E20
	void AddCustomMeshTriangles(struct TArray<struct FOculusMR_PlaneMeshTriangle> Triangles); // Function OculusMR.OculusMR_PlaneMeshComponent.AddCustomMeshTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF774D71CF0
};

// Class OculusMR.OculusMR_Settings
// Size : 0xC8 (Inherited : 0x28)
struct UOculusMR_Settings : UObject {
	enum class EOculusMR_ClippingReference ClippingReference; // 0x28(0x1)
	bool bUseTrackedCameraResolution; // 0x29(0x1)
	unsigned char UnknownData_2A[0x0002]; // 0x2A(0x2)
	int32_t WidthPerView; // 0x2C(0x4)
	int32_t HeightPerView; // 0x30(0x4)
	float CastingLatency; // 0x34(0x4)
	struct FColor BackdropColor; // 0x38(0x4)
	float HandPoseStateLatency; // 0x3C(0x4)
	struct FColor ChromaKeyColor; // 0x40(0x4)
	float ChromaKeySimilarity; // 0x44(0x4)
	float ChromaKeySmoothRange; // 0x48(0x4)
	float ChromaKeySpillRange; // 0x4C(0x4)
	enum class EOculusMR_VirtualGreenScreenType VirtualGreenScreenType; // 0x50(0x1)
	unsigned char UnknownData_51[0x0003]; // 0x51(0x3)
	float DynamicLightingDepthSmoothFactor; // 0x54(0x4)
	float DynamicLightingDepthVariationClampingValue; // 0x58(0x4)
	enum class EOculusMR_PostProcessEffects ExternalCompositionPostProcessEffects; // 0x5C(0x1)
	bool bIsCasting; // 0x5D(0x1)
	enum class EOculusMR_CompositionMethod CompositionMethod; // 0x5E(0x1)
	enum class EOculusMR_CameraDeviceEnum CapturingCamera; // 0x5F(0x1)
	bool bUseDynamicLighting; // 0x60(0x1)
	enum class EOculusMR_DepthQuality DepthQuality; // 0x61(0x1)
	unsigned char UnknownData_62[0x0066]; // 0x62(0x66)

	void SetUseDynamicLighting(bool Val); // Function OculusMR.OculusMR_Settings.SetUseDynamicLighting // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D72400
	void SetIsCasting(bool Val); // Function OculusMR.OculusMR_Settings.SetIsCasting // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D72270
	void SetDepthQuality(enum class EOculusMR_DepthQuality Val); // Function OculusMR.OculusMR_Settings.SetDepthQuality // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D721F0
	void SetCompositionMethod(enum class EOculusMR_CompositionMethod Val); // Function OculusMR.OculusMR_Settings.SetCompositionMethod // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D720B0
	void SetCapturingCamera(enum class EOculusMR_CameraDeviceEnum Val); // Function OculusMR.OculusMR_Settings.SetCapturingCamera // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D72030
	void SaveToIni(); // Function OculusMR.OculusMR_Settings.SaveToIni // (Final|Native|Public|BlueprintCallable|Const) // Param Size : 0x0, 0x7FF774D72010
	void LoadFromIni(); // Function OculusMR.OculusMR_Settings.LoadFromIni // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF774D71FF0
	bool GetUseDynamicLighting(); // Function OculusMR.OculusMR_Settings.GetUseDynamicLighting // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D71F70
	bool GetIsCasting(); // Function OculusMR.OculusMR_Settings.GetIsCasting // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D71EC0
	enum class EOculusMR_DepthQuality GetDepthQuality(); // Function OculusMR.OculusMR_Settings.GetDepthQuality // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D71EA0
	enum class EOculusMR_CompositionMethod GetCompositionMethod(); // Function OculusMR.OculusMR_Settings.GetCompositionMethod // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D71E80
	enum class EOculusMR_CameraDeviceEnum GetCapturingCamera(); // Function OculusMR.OculusMR_Settings.GetCapturingCamera // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D71E60
	int32_t GetBindToTrackedCameraIndex(); // Function OculusMR.OculusMR_Settings.GetBindToTrackedCameraIndex // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774D71E40
	void BindToTrackedCameraIndexIfAvailable(int32_t InTrackedCameraIndex); // Function OculusMR.OculusMR_Settings.BindToTrackedCameraIndexIfAvailable // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774D71DA0
};

// Class OculusMR.OculusMR_State
// Size : 0xB0 (Inherited : 0x28)
struct UOculusMR_State : UObject {
	struct FTrackedCamera TrackedCamera; // 0x28(0x70)
	struct USceneComponent* TrackingReferenceComponent; // 0x98(0x8)
	double ScalingFactor; // 0xA0(0x8)
	unsigned char UnknownData_A8[0x0004]; // 0xA8(0x4)
	bool ChangeCameraStateRequested; // 0xAC(0x1)
	bool BindToTrackedCameraIndexRequested; // 0xAD(0x1)
	unsigned char UnknownData_AE[0x0002]; // 0xAE(0x2)
};

// Class OculusMR.OculusMRFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct UOculusMRFunctionLibrary : UBlueprintFunctionLibrary {

	bool SetTrackingReferenceComponent(struct USceneComponent* Component); // Function OculusMR.OculusMRFunctionLibrary.SetTrackingReferenceComponent // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF774D72380
	bool SetMrcScalingFactor(float ScalingFactor); // Function OculusMR.OculusMRFunctionLibrary.SetMrcScalingFactor // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x5, 0x7FF774D72300
	bool IsMrcEnabled(); // Function OculusMR.OculusMRFunctionLibrary.IsMrcEnabled // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D71FC0
	bool IsMrcActive(); // Function OculusMR.OculusMRFunctionLibrary.IsMrcActive // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D71F90
	struct USceneComponent* GetTrackingReferenceComponent(); // Function OculusMR.OculusMRFunctionLibrary.GetTrackingReferenceComponent // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774D71F40
	struct UOculusMR_Settings* GetOculusMRSettings(); // Function OculusMR.OculusMRFunctionLibrary.GetOculusMRSettings // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774D71F10
	float GetMrcScalingFactor(); // Function OculusMR.OculusMRFunctionLibrary.GetMrcScalingFactor // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774D71EE0
};

