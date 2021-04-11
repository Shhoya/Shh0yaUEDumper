// ScriptStruct Landscape.LandscapeLayer
// Size : 0x88 (Inherited : 0x0)
struct FLandscapeLayer {
	struct FGuid Guid; // 0x0(0x10)
	struct FName Name; // 0x10(0x8)
	bool bVisible; // 0x18(0x1)
	bool bLocked; // 0x19(0x1)
	unsigned char UnknownData_1A[0x0002]; // 0x1A(0x2)
	float HeightmapAlpha; // 0x1C(0x4)
	float WeightmapAlpha; // 0x20(0x4)
	enum class ELandscapeBlendMode BlendMode; // 0x24(0x1)
	unsigned char UnknownData_25[0x0003]; // 0x25(0x3)
	struct TArray<struct FLandscapeLayerBrush> Brushes; // 0x28(0x10)
	struct TMap<struct ULandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend; // 0x38(0x50)
};

// ScriptStruct Landscape.LandscapeLayerBrush
// Size : 0x1 (Inherited : 0x0)
struct FLandscapeLayerBrush {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
};

// ScriptStruct Landscape.LandscapeLayerComponentData
// Size : 0x38 (Inherited : 0x0)
struct FLandscapeLayerComponentData {
	struct FHeightmapData HeightmapData; // 0x0(0x8)
	struct FWeightmapData WeightmapData; // 0x8(0x30)
};

// ScriptStruct Landscape.WeightmapData
// Size : 0x30 (Inherited : 0x0)
struct FWeightmapData {
	struct TArray<struct UTexture2D*> Textures; // 0x0(0x10)
	struct TArray<struct FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10(0x10)
	struct TArray<struct ULandscapeWeightmapUsage*> TextureUsages; // 0x20(0x10)
};

// ScriptStruct Landscape.WeightmapLayerAllocationInfo
// Size : 0x10 (Inherited : 0x0)
struct FWeightmapLayerAllocationInfo {
	struct ULandscapeLayerInfoObject* LayerInfo; // 0x0(0x8)
	enum class None WeightmapTextureIndex; // 0x8(0x1)
	enum class None WeightmapTextureChannel; // 0x9(0x1)
	unsigned char UnknownData_A[0x0006]; // 0xA(0x6)
};

// ScriptStruct Landscape.HeightmapData
// Size : 0x8 (Inherited : 0x0)
struct FHeightmapData {
	struct UTexture2D* Texture; // 0x0(0x8)
};

// ScriptStruct Landscape.LandscapeComponentMaterialOverride
// Size : 0x10 (Inherited : 0x0)
struct FLandscapeComponentMaterialOverride {
	struct FPerPlatformInt LODIndex; // 0x0(0x4)
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
	struct UMaterialInterface* Material; // 0x8(0x8)
};

// ScriptStruct Landscape.LandscapeEditToolRenderData
// Size : 0x38 (Inherited : 0x0)
struct FLandscapeEditToolRenderData {
	struct UMaterialInterface* ToolMaterial; // 0x0(0x8)
	struct UMaterialInterface* GizmoMaterial; // 0x8(0x8)
	int32_t SelectedType; // 0x10(0x4)
	int32_t DebugChannelR; // 0x14(0x4)
	int32_t DebugChannelG; // 0x18(0x4)
	int32_t DebugChannelB; // 0x1C(0x4)
	struct UTexture2D* DataTexture; // 0x20(0x8)
	struct UTexture2D* LayerContributionTexture; // 0x28(0x8)
	struct UTexture2D* DirtyTexture; // 0x30(0x8)
};

// ScriptStruct Landscape.GizmoSelectData
// Size : 0x50 (Inherited : 0x0)
struct FGizmoSelectData {
	unsigned char UnknownData_0[0x0050]; // 0x0(0x50)
};

// ScriptStruct Landscape.GrassVariety
// Size : 0x48 (Inherited : 0x0)
struct FGrassVariety {
	struct UStaticMesh* GrassMesh; // 0x0(0x8)
	struct FPerPlatformFloat GrassDensity; // 0x8(0x4)
	bool bUseGrid; // 0xC(0x1)
	unsigned char UnknownData_D[0x0003]; // 0xD(0x3)
	float PlacementJitter; // 0x10(0x4)
	struct FPerPlatformInt StartCullDistance; // 0x14(0x4)
	struct FPerPlatformInt EndCullDistance; // 0x18(0x4)
	int32_t MinLOD; // 0x1C(0x4)
	enum class EGrassScaling Scaling; // 0x20(0x1)
	unsigned char UnknownData_21[0x0003]; // 0x21(0x3)
	struct FFloatInterval ScaleX; // 0x24(0x8)
	struct FFloatInterval ScaleY; // 0x2C(0x8)
	struct FFloatInterval ScaleZ; // 0x34(0x8)
	bool RandomRotation; // 0x3C(0x1)
	bool AlignToSurface; // 0x3D(0x1)
	bool bUseLandscapeLightmap; // 0x3E(0x1)
	struct FLightingChannels LightingChannels; // 0x3F(0x1)
	bool bReceivesDecals; // 0x40(0x1)
	bool bCastDynamicShadow; // 0x41(0x1)
	bool bKeepInstanceBufferCPUCopy; // 0x42(0x1)
	unsigned char UnknownData_43[0x0005]; // 0x43(0x5)
};

// ScriptStruct Landscape.LandscapeInfoLayerSettings
// Size : 0x10 (Inherited : 0x0)
struct FLandscapeInfoLayerSettings {
	struct ULandscapeLayerInfoObject* LayerInfoObj; // 0x0(0x8)
	struct FName LayerName; // 0x8(0x8)
};

// ScriptStruct Landscape.LandscapeMaterialTextureStreamingInfo
// Size : 0xC (Inherited : 0x0)
struct FLandscapeMaterialTextureStreamingInfo {
	struct FName TextureName; // 0x0(0x8)
	float TexelFactor; // 0x8(0x4)
};

// ScriptStruct Landscape.LandscapeProxyMaterialOverride
// Size : 0x10 (Inherited : 0x0)
struct FLandscapeProxyMaterialOverride {
	struct FPerPlatformInt LODIndex; // 0x0(0x4)
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
	struct UMaterialInterface* Material; // 0x8(0x8)
};

// ScriptStruct Landscape.LandscapeImportLayerInfo
// Size : 0x1 (Inherited : 0x0)
struct FLandscapeImportLayerInfo {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
};

// ScriptStruct Landscape.LandscapeLayerStruct
// Size : 0x8 (Inherited : 0x0)
struct FLandscapeLayerStruct {
	struct ULandscapeLayerInfoObject* LayerInfoObj; // 0x0(0x8)
};

// ScriptStruct Landscape.LandscapeEditorLayerSettings
// Size : 0x1 (Inherited : 0x0)
struct FLandscapeEditorLayerSettings {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
};

// ScriptStruct Landscape.LandscapeSplineConnection
// Size : 0x10 (Inherited : 0x0)
struct FLandscapeSplineConnection {
	struct ULandscapeSplineSegment* Segment; // 0x0(0x8)
	unsigned char End : 1; // 0x8(0x1)
	unsigned char UnknownData_8_1 : 7; // 0x8(0x1)
	unsigned char UnknownData_9[0x0007]; // 0x9(0x7)
};

// ScriptStruct Landscape.ForeignWorldSplineData
// Size : 0x1 (Inherited : 0x0)
struct FForeignWorldSplineData {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
};

// ScriptStruct Landscape.ForeignSplineSegmentData
// Size : 0x1 (Inherited : 0x0)
struct FForeignSplineSegmentData {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
};

// ScriptStruct Landscape.ForeignControlPointData
// Size : 0x1 (Inherited : 0x0)
struct FForeignControlPointData {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
};

// ScriptStruct Landscape.LandscapeSplineMeshEntry
// Size : 0x38 (Inherited : 0x0)
struct FLandscapeSplineMeshEntry {
	struct UStaticMesh* Mesh; // 0x0(0x8)
	struct TArray<struct UMaterialInterface*> MaterialOverrides; // 0x8(0x10)
	unsigned char bCenterH : 1; // 0x18(0x1)
	unsigned char UnknownData_18_1 : 7; // 0x18(0x1)
	unsigned char UnknownData_19[0x0003]; // 0x19(0x3)
	struct FVector2D CenterAdjust; // 0x1C(0x8)
	unsigned char bScaleToWidth : 1; // 0x24(0x1)
	unsigned char UnknownData_24_1 : 7; // 0x24(0x1)
	unsigned char UnknownData_25[0x0003]; // 0x25(0x3)
	struct FVector Scale; // 0x28(0xC)
	enum class LandscapeSplineMeshOrientation Orientation; // 0x34(0x1)
	enum class ESplineMeshAxis ForwardAxis; // 0x35(0x1)
	enum class ESplineMeshAxis UpAxis; // 0x36(0x1)
	unsigned char UnknownData_37[0x0001]; // 0x37(0x1)
};

// ScriptStruct Landscape.LandscapeSplineSegmentConnection
// Size : 0x18 (Inherited : 0x0)
struct FLandscapeSplineSegmentConnection {
	struct ULandscapeSplineControlPoint* ControlPoint; // 0x0(0x8)
	float TangentLen; // 0x8(0x4)
	struct FName SocketName; // 0xC(0x8)
	unsigned char UnknownData_14[0x0004]; // 0x14(0x4)
};

// ScriptStruct Landscape.LandscapeSplineInterpPoint
// Size : 0x70 (Inherited : 0x0)
struct FLandscapeSplineInterpPoint {
	struct FVector Center; // 0x0(0xC)
	struct FVector Left; // 0xC(0xC)
	struct FVector Right; // 0x18(0xC)
	struct FVector FalloffLeft; // 0x24(0xC)
	struct FVector FalloffRight; // 0x30(0xC)
	struct FVector LayerLeft; // 0x3C(0xC)
	struct FVector LayerRight; // 0x48(0xC)
	struct FVector LayerFalloffLeft; // 0x54(0xC)
	struct FVector LayerFalloffRight; // 0x60(0xC)
	float StartEndFalloff; // 0x6C(0x4)
};

// ScriptStruct Landscape.GrassInput
// Size : 0x28 (Inherited : 0x0)
struct FGrassInput {
	struct FName Name; // 0x0(0x8)
	struct ULandscapeGrassType* GrassType; // 0x8(0x8)
	struct FExpressionInput Input; // 0x10(0xC)
	unsigned char UnknownData_1C[0x000C]; // 0x1C(0xC)
};

// ScriptStruct Landscape.LayerBlendInput
// Size : 0x48 (Inherited : 0x0)
struct FLayerBlendInput {
	struct FName LayerName; // 0x0(0x8)
	enum class ELandscapeLayerBlendType BlendType; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
	struct FExpressionInput LayerInput; // 0xC(0xC)
	unsigned char UnknownData_18[0x0008]; // 0x18(0x8)
	struct FExpressionInput HeightInput; // 0x20(0xC)
	unsigned char UnknownData_2C[0x0008]; // 0x2C(0x8)
	float PreviewWeight; // 0x34(0x4)
	struct FVector ConstLayerInput; // 0x38(0xC)
	float ConstHeightInput; // 0x44(0x4)
};

