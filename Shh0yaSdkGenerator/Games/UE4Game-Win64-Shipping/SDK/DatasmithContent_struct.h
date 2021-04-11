// ScriptStruct DatasmithContent.DatasmithCameraLookatTrackingSettingsTemplate
// Size : 0x30 (Inherited : 0x0)
struct FDatasmithCameraLookatTrackingSettingsTemplate {
	unsigned char bEnableLookAtTracking : 1; // 0x0(0x1)
	unsigned char bAllowRoll : 1; // 0x0(0x1)
	unsigned char UnknownData_0_2 : 6; // 0x0(0x1)
	unsigned char UnknownData_1[0x0007]; // 0x1(0x7)
	struct TSoftObjectPtr<struct AActor> ActorToTrack; // 0x8(0x28)
};

// ScriptStruct DatasmithContent.DatasmithPostProcessSettingsTemplate
// Size : 0x40 (Inherited : 0x0)
struct FDatasmithPostProcessSettingsTemplate {
	unsigned char bOverride_WhiteTemp : 1; // 0x0(0x1)
	unsigned char bOverride_ColorSaturation : 1; // 0x0(0x1)
	unsigned char bOverride_VignetteIntensity : 1; // 0x0(0x1)
	unsigned char bOverride_FilmWhitePoint : 1; // 0x0(0x1)
	unsigned char bOverride_AutoExposureMethod : 1; // 0x0(0x1)
	unsigned char bOverride_CameraISO : 1; // 0x0(0x1)
	unsigned char bOverride_CameraShutterSpeed : 1; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	unsigned char bOverride_DepthOfFieldFstop : 1; // 0x4(0x1)
	unsigned char UnknownData_4_1 : 7; // 0x4(0x1)
	unsigned char UnknownData_5[0x0003]; // 0x5(0x3)
	float WhiteTemp; // 0x8(0x4)
	float VignetteIntensity; // 0xC(0x4)
	struct FLinearColor FilmWhitePoint; // 0x10(0x10)
	struct FVector4 ColorSaturation; // 0x20(0x10)
	enum class EAutoExposureMethod AutoExposureMethod; // 0x30(0x1)
	unsigned char UnknownData_31[0x0003]; // 0x31(0x3)
	float CameraISO; // 0x34(0x4)
	float CameraShutterSpeed; // 0x38(0x4)
	float DepthOfFieldFstop; // 0x3C(0x4)
};

// ScriptStruct DatasmithContent.DatasmithCameraFocusSettingsTemplate
// Size : 0x8 (Inherited : 0x0)
struct FDatasmithCameraFocusSettingsTemplate {
	enum class ECameraFocusMethod FocusMethod; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float ManualFocusDistance; // 0x4(0x4)
};

// ScriptStruct DatasmithContent.DatasmithCameraLensSettingsTemplate
// Size : 0x4 (Inherited : 0x0)
struct FDatasmithCameraLensSettingsTemplate {
	float MaxFStop; // 0x0(0x4)
};

// ScriptStruct DatasmithContent.DatasmithCameraFilmbackSettingsTemplate
// Size : 0x8 (Inherited : 0x0)
struct FDatasmithCameraFilmbackSettingsTemplate {
	float SensorWidth; // 0x0(0x4)
	float SensorHeight; // 0x4(0x4)
};

// ScriptStruct DatasmithContent.DatasmithTessellationOptions
// Size : 0x10 (Inherited : 0x0)
struct FDatasmithTessellationOptions {
	float ChordTolerance; // 0x0(0x4)
	float MaxEdgeLength; // 0x4(0x4)
	float NormalTolerance; // 0x8(0x4)
	enum class EDatasmithCADStitchingTechnique StitchingTechnique; // 0xC(0x1)
	unsigned char UnknownData_D[0x0003]; // 0xD(0x3)
};

// ScriptStruct DatasmithContent.DatasmithImportBaseOptions
// Size : 0x14 (Inherited : 0x0)
struct FDatasmithImportBaseOptions {
	enum class EDatasmithImportScene SceneHandling; // 0x0(0x1)
	bool bIncludeGeometry; // 0x1(0x1)
	bool bIncludeMaterial; // 0x2(0x1)
	bool bIncludeLight; // 0x3(0x1)
	bool bIncludeCamera; // 0x4(0x1)
	bool bIncludeAnimation; // 0x5(0x1)
	unsigned char UnknownData_6[0x0002]; // 0x6(0x2)
	struct FDatasmithAssetImportOptions AssetOptions; // 0x8(0x8)
	struct FDatasmithStaticMeshImportOptions StaticMeshOptions; // 0x10(0x4)
};

// ScriptStruct DatasmithContent.DatasmithStaticMeshImportOptions
// Size : 0x4 (Inherited : 0x0)
struct FDatasmithStaticMeshImportOptions {
	enum class EDatasmithImportLightmapMin MinLightmapResolution; // 0x0(0x1)
	enum class EDatasmithImportLightmapMax MaxLightmapResolution; // 0x1(0x1)
	bool bGenerateLightmapUVs; // 0x2(0x1)
	bool bRemoveDegenerates; // 0x3(0x1)
};

// ScriptStruct DatasmithContent.DatasmithAssetImportOptions
// Size : 0x8 (Inherited : 0x0)
struct FDatasmithAssetImportOptions {
	struct FName PackagePath; // 0x0(0x8)
};

// ScriptStruct DatasmithContent.DatasmithReimportOptions
// Size : 0x2 (Inherited : 0x0)
struct FDatasmithReimportOptions {
	bool bUpdateActors; // 0x0(0x1)
	bool bRespawnDeletedActors; // 0x1(0x1)
};

// ScriptStruct DatasmithContent.DatasmithStaticParameterSetTemplate
// Size : 0x50 (Inherited : 0x0)
struct FDatasmithStaticParameterSetTemplate {
	struct TMap<struct FName, bool> StaticSwitchParameters; // 0x0(0x50)
};

// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoMapTemplate
// Size : 0x50 (Inherited : 0x0)
struct FDatasmithMeshSectionInfoMapTemplate {
	struct TMap<uint32_t, struct FDatasmithMeshSectionInfoTemplate> Map; // 0x0(0x50)
};

// ScriptStruct DatasmithContent.DatasmithMeshSectionInfoTemplate
// Size : 0x4 (Inherited : 0x0)
struct FDatasmithMeshSectionInfoTemplate {
	int32_t MaterialIndex; // 0x0(0x4)
};

// ScriptStruct DatasmithContent.DatasmithStaticMaterialTemplate
// Size : 0x10 (Inherited : 0x0)
struct FDatasmithStaticMaterialTemplate {
	struct FName MaterialSlotName; // 0x0(0x8)
	struct UMaterialInterface* MaterialInterface; // 0x8(0x8)
};

// ScriptStruct DatasmithContent.DatasmithMeshBuildSettingsTemplate
// Size : 0x10 (Inherited : 0x0)
struct FDatasmithMeshBuildSettingsTemplate {
	unsigned char bUseMikkTSpace : 1; // 0x0(0x1)
	unsigned char bRecomputeNormals : 1; // 0x0(0x1)
	unsigned char bRecomputeTangents : 1; // 0x0(0x1)
	unsigned char bRemoveDegenerates : 1; // 0x0(0x1)
	unsigned char bBuildAdjacencyBuffer : 1; // 0x0(0x1)
	unsigned char bUseHighPrecisionTangentBasis : 1; // 0x0(0x1)
	unsigned char bUseFullPrecisionUVs : 1; // 0x0(0x1)
	unsigned char bGenerateLightmapUVs : 1; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	int32_t MinLightmapResolution; // 0x4(0x4)
	int32_t SrcLightmapIndex; // 0x8(0x4)
	int32_t DstLightmapIndex; // 0xC(0x4)
};

