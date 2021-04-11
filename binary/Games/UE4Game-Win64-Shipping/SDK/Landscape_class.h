// Class Landscape.ControlPointMeshActor
// Size : 0x228 (Inherited : 0x220)
struct AControlPointMeshActor : AActor {
	struct UControlPointMeshComponent* ControlPointMeshComponent; // 0x220(0x8)
};

// Class Landscape.ControlPointMeshComponent
// Size : 0x4A0 (Inherited : 0x4A0)
struct UControlPointMeshComponent : UStaticMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x498(0x4)
};

// Class Landscape.LandscapeProxy
// Size : 0x560 (Inherited : 0x220)
struct ALandscapeProxy : AActor {
	struct ULandscapeSplinesComponent* SplineComponent; // 0x220(0x8)
	struct FGuid LandscapeGuid; // 0x228(0x10)
	struct FIntPoint LandscapeSectionOffset; // 0x238(0x8)
	int32_t MaxLODLevel; // 0x240(0x4)
	float LODDistanceFactor; // 0x244(0x4)
	enum class ELandscapeLODFalloff LODFalloff; // 0x248(0x1)
	unsigned char UnknownData_249[0x0003]; // 0x249(0x3)
	float ComponentScreenSizeToUseSubSections; // 0x24C(0x4)
	float LOD0ScreenSize; // 0x250(0x4)
	float LOD0DistributionSetting; // 0x254(0x4)
	float LODDistributionSetting; // 0x258(0x4)
	float TessellationComponentScreenSize; // 0x25C(0x4)
	bool UseTessellationComponentScreenSizeFalloff; // 0x260(0x1)
	unsigned char UnknownData_261[0x0003]; // 0x261(0x3)
	float TessellationComponentScreenSizeFalloff; // 0x264(0x4)
	int32_t OccluderGeometryLOD; // 0x268(0x4)
	int32_t StaticLightingLOD; // 0x26C(0x4)
	struct UPhysicalMaterial* DefaultPhysMaterial; // 0x270(0x8)
	float StreamingDistanceMultiplier; // 0x278(0x4)
	unsigned char UnknownData_27C[0x0004]; // 0x27C(0x4)
	struct UMaterialInterface* LandscapeMaterial; // 0x280(0x8)
	unsigned char UnknownData_288[0x0020]; // 0x288(0x20)
	struct UMaterialInterface* LandscapeHoleMaterial; // 0x2A8(0x8)
	struct TArray<struct FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x2B0(0x10)
	bool bMeshHoles; // 0x2C0(0x1)
	enum class None MeshHolesMaxLod; // 0x2C1(0x1)
	unsigned char UnknownData_2C2[0x0006]; // 0x2C2(0x6)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x2C8(0x10)
	int32_t VirtualTextureNumLods; // 0x2D8(0x4)
	int32_t VirtualTextureLodBias; // 0x2DC(0x4)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x2E0(0x1)
	unsigned char UnknownData_2E1[0x0003]; // 0x2E1(0x3)
	float NegativeZBoundsExtension; // 0x2E4(0x4)
	float PositiveZBoundsExtension; // 0x2E8(0x4)
	unsigned char UnknownData_2EC[0x0004]; // 0x2EC(0x4)
	struct TArray<struct ULandscapeComponent*> LandscapeComponents; // 0x2F0(0x10)
	struct TArray<struct ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x300(0x10)
	struct TArray<struct UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x310(0x10)
	unsigned char UnknownData_320[0x0064]; // 0x320(0x64)
	bool bHasLandscapeGrass; // 0x384(0x1)
	unsigned char UnknownData_385[0x0003]; // 0x385(0x3)
	float StaticLightingResolution; // 0x388(0x4)
	unsigned char bCastStaticShadow : 1; // 0x38C(0x1)
	unsigned char bCastShadowAsTwoSided : 1; // 0x38C(0x1)
	unsigned char bCastFarShadow : 1; // 0x38C(0x1)
	unsigned char UnknownData_38C_3 : 5; // 0x38C(0x1)
	unsigned char UnknownData_38D[0x0003]; // 0x38D(0x3)
	unsigned char bAffectDistanceFieldLighting : 1; // 0x390(0x1)
	unsigned char UnknownData_390_1 : 7; // 0x390(0x1)
	struct FLightingChannels LightingChannels; // 0x391(0x1)
	unsigned char UnknownData_392[0x0002]; // 0x392(0x2)
	unsigned char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x394(0x1)
	unsigned char bRenderCustomDepth : 1; // 0x394(0x1)
	unsigned char UnknownData_394_2 : 6; // 0x394(0x1)
	unsigned char UnknownData_395[0x0003]; // 0x395(0x3)
	int32_t CustomDepthStencilValue; // 0x398(0x4)
	float LDMaxDrawDistance; // 0x39C(0x4)
	struct FLightmassPrimitiveSettings LightmassSettings; // 0x3A0(0x18)
	int32_t CollisionMipLevel; // 0x3B8(0x4)
	int32_t SimpleCollisionMipLevel; // 0x3BC(0x4)
	float CollisionThickness; // 0x3C0(0x4)
	unsigned char UnknownData_3C4[0x0004]; // 0x3C4(0x4)
	struct FBodyInstance BodyInstance; // 0x3C8(0x130)
	unsigned char bGenerateOverlapEvents : 1; // 0x4F8(0x1)
	unsigned char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x4F8(0x1)
	unsigned char UnknownData_4F8_2 : 6; // 0x4F8(0x1)
	unsigned char UnknownData_4F9[0x0003]; // 0x4F9(0x3)
	int32_t ComponentSizeQuads; // 0x4FC(0x4)
	int32_t SubsectionSizeQuads; // 0x500(0x4)
	int32_t NumSubsections; // 0x504(0x4)
	unsigned char bUsedForNavigation : 1; // 0x508(0x1)
	unsigned char bFillCollisionUnderLandscapeForNavmesh : 1; // 0x508(0x1)
	unsigned char UnknownData_508_2 : 6; // 0x508(0x1)
	unsigned char UnknownData_509[0x0003]; // 0x509(0x3)
	bool bUseDynamicMaterialInstance; // 0x50C(0x1)
	enum class ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x50D(0x1)
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x50E(0x1)
	bool bHasLayersContent; // 0x50F(0x1)
	struct TMap<struct UTexture2D*, struct ULandscapeWeightmapUsage*> WeightmapUsageMap; // 0x510(0x50)

	void SetLandscapeMaterialVectorParameterValue(struct FName ParameterName, struct FLinearColor Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialVectorParameterValue // (Final|RequiredAPI|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x18, 0x7FF775DE27C0
	void SetLandscapeMaterialTextureParameterValue(struct FName ParameterName, struct UTexture* Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialTextureParameterValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775DE2700
	void SetLandscapeMaterialScalarParameterValue(struct FName ParameterName, float Value); // Function Landscape.LandscapeProxy.SetLandscapeMaterialScalarParameterValue // (Final|RequiredAPI|Native|Public|BlueprintCallable) // Param Size : 0xC, 0x7FF775DE2630
	void EditorSetLandscapeMaterial(struct UMaterialInterface* NewLandscapeMaterial); // Function Landscape.LandscapeProxy.EditorSetLandscapeMaterial // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774980870
	void EditorApplySpline(struct USplineComponent* InSplineComponent, float StartWidth, float EndWidth, float StartSideFalloff, float EndSideFalloff, float StartRoll, float EndRoll, int32_t NumSubdivisions, bool bRaiseHeights, bool bLowerHeights, struct ULandscapeLayerInfoObject* PaintLayer); // Function Landscape.LandscapeProxy.EditorApplySpline // (Final|Native|Public|BlueprintCallable) // Param Size : 0x30, 0x7FF775DE22A0
	void ChangeUseTessellationComponentScreenSizeFalloff(bool InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeUseTessellationComponentScreenSizeFalloff // (Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775DE2210
	void ChangeTessellationComponentScreenSizeFalloff(float InUseTessellationComponentScreenSizeFalloff); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSizeFalloff // (Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775DE2190
	void ChangeTessellationComponentScreenSize(float InTessellationComponentScreenSize); // Function Landscape.LandscapeProxy.ChangeTessellationComponentScreenSize // (Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775DE2110
	void ChangeLODDistanceFactor(float InLODDistanceFactor); // Function Landscape.LandscapeProxy.ChangeLODDistanceFactor // (Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775DE2090
	void ChangeComponentScreenSizeToUseSubSections(float InComponentScreenSizeToUseSubSections); // Function Landscape.LandscapeProxy.ChangeComponentScreenSizeToUseSubSections // (Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775DE2010
};

// Class Landscape.Landscape
// Size : 0x560 (Inherited : 0x560)
struct ALandscape : ALandscapeProxy {
};

// Class Landscape.LandscapeBlueprintBrushBase
// Size : 0x220 (Inherited : 0x220)
struct ALandscapeBlueprintBrushBase : AActor {

	void RequestLandscapeUpdate(); // Function Landscape.LandscapeBlueprintBrushBase.RequestLandscapeUpdate // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF774A435E0
	struct UTextureRenderTarget2D* Render(bool InIsHeightmap, struct UTextureRenderTarget2D* InCombinedResult, struct FName InWeightmapLayerName); // Function Landscape.LandscapeBlueprintBrushBase.Render // (Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0x20, 0x7FF77510D9D0
	void Initialize(struct FTransform InLandscapeTransform, struct FIntPoint InLandscapeSize, struct FIntPoint InLandscapeRenderTargetSize); // Function Landscape.LandscapeBlueprintBrushBase.Initialize // (Event|Public|HasOutParms|HasDefaults|BlueprintEvent) // Param Size : 0x40, 0x7FF77510D9D0
	void GetBlueprintRenderDependencies(struct TArray<struct UTexture2D*> OutStreamableAssets); // Function Landscape.LandscapeBlueprintBrushBase.GetBlueprintRenderDependencies // (Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0x10, 0x7FF77510D9D0
};

// Class Landscape.LandscapeComponent
// Size : 0x600 (Inherited : 0x410)
struct ULandscapeComponent : UPrimitiveComponent {
	int32_t SectionBaseX; // 0x408(0x4)
	int32_t SectionBaseY; // 0x40C(0x4)
	int32_t ComponentSizeQuads; // 0x410(0x4)
	int32_t SubsectionSizeQuads; // 0x414(0x4)
	int32_t NumSubsections; // 0x418(0x4)
	struct UMaterialInterface* OverrideMaterial; // 0x420(0x8)
	struct UMaterialInterface* OverrideHoleMaterial; // 0x428(0x8)
	struct TArray<struct FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x430(0x10)
	struct TArray<struct UMaterialInstanceConstant*> MaterialInstances; // 0x440(0x10)
	struct TArray<struct UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x450(0x10)
	struct TArray<int8_t> LODIndexToMaterialIndex; // 0x460(0x10)
	struct TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x470(0x10)
	struct UTexture2D* XYOffsetmapTexture; // 0x480(0x8)
	unsigned char UnknownData_48C[0x0004]; // 0x48C(0x4)
	struct FVector4 WeightmapScaleBias; // 0x490(0x10)
	float WeightmapSubsectionOffset; // 0x4A0(0x4)
	unsigned char UnknownData_4A4[0x000C]; // 0x4A4(0xC)
	struct FVector4 HeightmapScaleBias; // 0x4B0(0x10)
	struct FBox CachedLocalBox; // 0x4C0(0x1C)
	LazyObjectProperty CollisionComponent; // 0x4DC(0x1C)
	struct UTexture2D* HeightmapTexture; // 0x4F8(0x8)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x500(0x10)
	struct TArray<struct UTexture2D*> WeightmapTextures; // 0x510(0x10)
	struct FGuid MapBuildDataId; // 0x520(0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0x530(0x10)
	int32_t CollisionMipLevel; // 0x540(0x4)
	int32_t SimpleCollisionMipLevel; // 0x544(0x4)
	float NegativeZBoundsExtension; // 0x548(0x4)
	float PositiveZBoundsExtension; // 0x54C(0x4)
	float StaticLightingResolution; // 0x550(0x4)
	int32_t ForcedLOD; // 0x554(0x4)
	int32_t LODBias; // 0x558(0x4)
	struct FGuid StateId; // 0x55C(0x10)
	struct FGuid BakedTextureMaterialGuid; // 0x56C(0x10)
	unsigned char UnknownData_57C[0x0004]; // 0x57C(0x4)
	struct UTexture2D* GIBakedBaseColorTexture; // 0x580(0x8)
	enum class None MobileBlendableLayerMask; // 0x588(0x1)
	unsigned char UnknownData_589[0x0007]; // 0x589(0x7)
	struct UMaterialInterface* MobileMaterialInterface; // 0x590(0x8)
	struct TArray<struct UMaterialInterface*> MobileMaterialInterfaces; // 0x598(0x10)
	struct TArray<struct UTexture2D*> MobileWeightmapTextures; // 0x5A8(0x10)
	unsigned char UnknownData_5B8[0x0048]; // 0x5B8(0x48)

	struct UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int32_t InIndex); // Function Landscape.LandscapeComponent.GetMaterialInstanceDynamic // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF775DE0770
	float EditorGetPaintLayerWeightByNameAtLocation(struct FVector InLocation, struct FName InPaintLayerName); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x18, 0x7FF775DE0690
	float EditorGetPaintLayerWeightAtLocation(struct FVector InLocation, struct ULandscapeLayerInfoObject* PaintLayer); // Function Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation // (Final|RequiredAPI|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x1C, 0x7FF775DE0690
};

// Class Landscape.LandscapeGizmoActor
// Size : 0x220 (Inherited : 0x220)
struct ALandscapeGizmoActor : AActor {
};

// Class Landscape.LandscapeGizmoActiveActor
// Size : 0x270 (Inherited : 0x220)
struct ALandscapeGizmoActiveActor : ALandscapeGizmoActor {
	unsigned char UnknownData_220[0x0050]; // 0x220(0x50)
};

// Class Landscape.LandscapeGizmoRenderComponent
// Size : 0x410 (Inherited : 0x410)
struct ULandscapeGizmoRenderComponent : UPrimitiveComponent {
};

// Class Landscape.LandscapeGrassType
// Size : 0x60 (Inherited : 0x28)
struct ULandscapeGrassType : UObject {
	struct TArray<struct FGrassVariety> GrassVarieties; // 0x28(0x10)
	unsigned char bEnableDensityScaling : 1; // 0x38(0x1)
	unsigned char UnknownData_38_1 : 7; // 0x38(0x1)
	unsigned char UnknownData_39[0x0007]; // 0x39(0x7)
	struct UStaticMesh* GrassMesh; // 0x40(0x8)
	float GrassDensity; // 0x48(0x4)
	float PlacementJitter; // 0x4C(0x4)
	int32_t StartCullDistance; // 0x50(0x4)
	int32_t EndCullDistance; // 0x54(0x4)
	bool RandomRotation; // 0x58(0x1)
	bool AlignToSurface; // 0x59(0x1)
	unsigned char UnknownData_5A[0x0006]; // 0x5A(0x6)
};

// Class Landscape.LandscapeHeightfieldCollisionComponent
// Size : 0x4F0 (Inherited : 0x410)
struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x408(0x10)
	int32_t SectionBaseX; // 0x418(0x4)
	int32_t SectionBaseY; // 0x41C(0x4)
	int32_t CollisionSizeQuads; // 0x420(0x4)
	float CollisionScale; // 0x424(0x4)
	int32_t SimpleCollisionSizeQuads; // 0x428(0x4)
	struct TArray<enum class None> CollisionQuadFlags; // 0x430(0x10)
	struct FGuid HeightfieldGuid; // 0x440(0x10)
	struct FBox CachedLocalBox; // 0x450(0x1C)
	LazyObjectProperty RenderComponent; // 0x46C(0x1C)
	unsigned char UnknownData_48C[0x000C]; // 0x48C(0xC)
	struct TArray<struct UPhysicalMaterial*> CookedPhysicalMaterials; // 0x498(0x10)
	unsigned char UnknownData_4A8[0x0048]; // 0x4A8(0x48)

	struct ULandscapeComponent* GetRenderComponent(); // Function Landscape.LandscapeHeightfieldCollisionComponent.GetRenderComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775DE0800
};

// Class Landscape.LandscapeInfo
// Size : 0x210 (Inherited : 0x28)
struct ULandscapeInfo : UObject {
	LazyObjectProperty LandscapeActor; // 0x28(0x1C)
	struct FGuid LandscapeGuid; // 0x44(0x10)
	int32_t ComponentSizeQuads; // 0x54(0x4)
	int32_t SubsectionSizeQuads; // 0x58(0x4)
	int32_t ComponentNumSubsections; // 0x5C(0x4)
	struct FVector DrawScale; // 0x60(0xC)
	unsigned char UnknownData_6C[0x00A4]; // 0x6C(0xA4)
	struct TArray<struct ALandscapeStreamingProxy*> Proxies; // 0x110(0x10)
	unsigned char UnknownData_120[0x00F0]; // 0x120(0xF0)
};

// Class Landscape.LandscapeInfoMap
// Size : 0x80 (Inherited : 0x28)
struct ULandscapeInfoMap : UObject {
	unsigned char UnknownData_28[0x0058]; // 0x28(0x58)
};

// Class Landscape.LandscapeLayerInfoObject
// Size : 0x50 (Inherited : 0x28)
struct ULandscapeLayerInfoObject : UObject {
	struct FName LayerName; // 0x28(0x8)
	struct UPhysicalMaterial* PhysMaterial; // 0x30(0x8)
	float Hardness; // 0x38(0x4)
	struct FLinearColor LayerUsageDebugColor; // 0x3C(0x10)
	unsigned char UnknownData_4C[0x0004]; // 0x4C(0x4)
};

// Class Landscape.LandscapeMaterialInstanceConstant
// Size : 0x428 (Inherited : 0x410)
struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	struct TArray<struct FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x410(0x10)
	unsigned char bIsLayerThumbnail : 1; // 0x420(0x1)
	unsigned char bDisableTessellation : 1; // 0x420(0x1)
	unsigned char bMobile : 1; // 0x420(0x1)
	unsigned char bEditorToolUsage : 1; // 0x420(0x1)
	unsigned char UnknownData_420_4 : 4; // 0x420(0x1)
	unsigned char UnknownData_421[0x0007]; // 0x421(0x7)
};

// Class Landscape.LandscapeMeshCollisionComponent
// Size : 0x500 (Inherited : 0x4F0)
struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	struct FGuid MeshGuid; // 0x4E8(0x10)
};

// Class Landscape.LandscapeMeshProxyActor
// Size : 0x228 (Inherited : 0x220)
struct ALandscapeMeshProxyActor : AActor {
	struct ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x220(0x8)
};

// Class Landscape.LandscapeMeshProxyComponent
// Size : 0x4C0 (Inherited : 0x4A0)
struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	struct FGuid LandscapeGuid; // 0x498(0x10)
	struct TArray<struct FIntPoint> ProxyComponentBases; // 0x4A8(0x10)
	int8_t ProxyLOD; // 0x4B8(0x1)
};

// Class Landscape.LandscapeSettings
// Size : 0x40 (Inherited : 0x38)
struct ULandscapeSettings : UDeveloperSettings {
	int32_t MaxNumberOfLayers; // 0x38(0x4)
	unsigned char UnknownData_3C[0x0004]; // 0x3C(0x4)
};

// Class Landscape.LandscapeSplinesComponent
// Size : 0x440 (Inherited : 0x410)
struct ULandscapeSplinesComponent : UPrimitiveComponent {
	struct TArray<struct ULandscapeSplineControlPoint*> ControlPoints; // 0x408(0x10)
	struct TArray<struct ULandscapeSplineSegment*> Segments; // 0x418(0x10)
	struct TArray<struct UMeshComponent*> CookedForeignMeshComponents; // 0x428(0x10)

	struct TArray<struct USplineMeshComponent*> GetSplineMeshComponents(); // Function Landscape.LandscapeSplinesComponent.GetSplineMeshComponents // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775DE25B0
};

// Class Landscape.LandscapeSplineControlPoint
// Size : 0xA8 (Inherited : 0x28)
struct ULandscapeSplineControlPoint : UObject {
	struct FVector Location; // 0x28(0xC)
	struct FRotator Rotation; // 0x34(0xC)
	float Width; // 0x40(0x4)
	float LayerWidthRatio; // 0x44(0x4)
	float SideFalloff; // 0x48(0x4)
	float LeftSideFalloffFactor; // 0x4C(0x4)
	float RightSideFalloffFactor; // 0x50(0x4)
	float LeftSideLayerFalloffFactor; // 0x54(0x4)
	float RightSideLayerFalloffFactor; // 0x58(0x4)
	float EndFalloff; // 0x5C(0x4)
	struct TArray<struct FLandscapeSplineConnection> ConnectedSegments; // 0x60(0x10)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x70(0x10)
	struct FBox Bounds; // 0x80(0x1C)
	unsigned char UnknownData_9C[0x0004]; // 0x9C(0x4)
	struct UControlPointMeshComponent* LocalMeshComponent; // 0xA0(0x8)
};

// Class Landscape.LandscapeSplineSegment
// Size : 0xB0 (Inherited : 0x28)
struct ULandscapeSplineSegment : UObject {
	struct FLandscapeSplineSegmentConnection Connections[2]; // 0x28(0x30)
	struct FInterpCurveVector SplineInfo; // 0x58(0x18)
	struct TArray<struct FLandscapeSplineInterpPoint> Points; // 0x70(0x10)
	struct FBox Bounds; // 0x80(0x1C)
	unsigned char UnknownData_9C[0x0004]; // 0x9C(0x4)
	struct TArray<struct USplineMeshComponent*> LocalMeshComponents; // 0xA0(0x10)
};

// Class Landscape.LandscapeStreamingProxy
// Size : 0x580 (Inherited : 0x560)
struct ALandscapeStreamingProxy : ALandscapeProxy {
	LazyObjectProperty LandscapeActor; // 0x560(0x1C)
	unsigned char UnknownData_57C[0x0004]; // 0x57C(0x4)
};

// Class Landscape.LandscapeSubsystem
// Size : 0x98 (Inherited : 0x30)
struct ULandscapeSubsystem : UWorldSubsystem {
	unsigned char UnknownData_30[0x0068]; // 0x30(0x68)
};

// Class Landscape.LandscapeWeightmapUsage
// Size : 0x58 (Inherited : 0x28)
struct ULandscapeWeightmapUsage : UObject {
	struct ULandscapeComponent* ChannelUsage[4]; // 0x28(0x20)
	struct FGuid LayerGuid; // 0x48(0x10)
};

// Class Landscape.MaterialExpressionLandscapeGrassOutput
// Size : 0x50 (Inherited : 0x40)
struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	struct TArray<struct FGrassInput> GrassTypes; // 0x40(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerBlend
// Size : 0x60 (Inherited : 0x40)
struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	struct TArray<struct FLayerBlendInput> Layers; // 0x40(0x10)
	struct FGuid ExpressionGUID; // 0x50(0x10)
};

// Class Landscape.MaterialExpressionLandscapeLayerCoords
// Size : 0x58 (Inherited : 0x40)
struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	enum class ETerrainCoordMappingType MappingType; // 0x40(0x1)
	enum class ELandscapeCustomizedCoordType CustomUVType; // 0x41(0x1)
	unsigned char UnknownData_42[0x0002]; // 0x42(0x2)
	float MappingScale; // 0x44(0x4)
	float MappingRotation; // 0x48(0x4)
	float MappingPanU; // 0x4C(0x4)
	float MappingPanV; // 0x50(0x4)
	unsigned char UnknownData_54[0x0004]; // 0x54(0x4)
};

// Class Landscape.MaterialExpressionLandscapeLayerSample
// Size : 0x60 (Inherited : 0x40)
struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	struct FName ParameterName; // 0x40(0x8)
	float PreviewWeight; // 0x48(0x4)
	struct FGuid ExpressionGUID; // 0x4C(0x10)
	unsigned char UnknownData_5C[0x0004]; // 0x5C(0x4)
};

// Class Landscape.MaterialExpressionLandscapeLayerSwitch
// Size : 0x88 (Inherited : 0x40)
struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	struct FExpressionInput LayerUsed; // 0x40(0xC)
	unsigned char UnknownData_4C[0x0008]; // 0x4C(0x8)
	struct FExpressionInput LayerNotUsed; // 0x54(0xC)
	unsigned char UnknownData_60[0x0008]; // 0x60(0x8)
	struct FName ParameterName; // 0x68(0x8)
	unsigned char PreviewUsed : 1; // 0x70(0x1)
	unsigned char UnknownData_70_1 : 7; // 0x70(0x1)
	unsigned char UnknownData_71[0x0003]; // 0x71(0x3)
	struct FGuid ExpressionGUID; // 0x74(0x10)
	unsigned char UnknownData_84[0x0004]; // 0x84(0x4)
};

// Class Landscape.MaterialExpressionLandscapeLayerWeight
// Size : 0x90 (Inherited : 0x40)
struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	struct FExpressionInput Base; // 0x40(0xC)
	unsigned char UnknownData_4C[0x0008]; // 0x4C(0x8)
	struct FExpressionInput Layer; // 0x54(0xC)
	unsigned char UnknownData_60[0x0008]; // 0x60(0x8)
	struct FName ParameterName; // 0x68(0x8)
	float PreviewWeight; // 0x70(0x4)
	struct FVector ConstBase; // 0x74(0xC)
	struct FGuid ExpressionGUID; // 0x80(0x10)
};

// Class Landscape.MaterialExpressionLandscapeVisibilityMask
// Size : 0x50 (Inherited : 0x40)
struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	struct FGuid ExpressionGUID; // 0x40(0x10)
};

