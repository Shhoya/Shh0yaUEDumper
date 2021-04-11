// Class DatasmithContent.DatasmithObjectTemplate
// Size : 0x30 (Inherited : 0x28)
struct UDatasmithObjectTemplate : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// Class DatasmithContent.DatasmithActorTemplate
// Size : 0xD0 (Inherited : 0x30)
struct UDatasmithActorTemplate : UDatasmithObjectTemplate {
	struct TSet<struct FName> Layers; // 0x30(0x50)
	struct TSet<struct FName> Tags; // 0x80(0x50)
};

// Class DatasmithContent.DatasmithAdditionalData
// Size : 0x28 (Inherited : 0x28)
struct UDatasmithAdditionalData : UObject {
};

// Class DatasmithContent.DatasmithAreaLightActor
// Size : 0x278 (Inherited : 0x220)
struct ADatasmithAreaLightActor : AActor {
	enum class EDatasmithAreaLightActorType LightType; // 0x220(0x1)
	enum class EDatasmithAreaLightActorShape LightShape; // 0x221(0x1)
	unsigned char UnknownData_222[0x0002]; // 0x222(0x2)
	struct FVector2D Dimensions; // 0x224(0x8)
	float Intensity; // 0x22C(0x4)
	enum class ELightUnits IntensityUnits; // 0x230(0x1)
	unsigned char UnknownData_231[0x0003]; // 0x231(0x3)
	struct FLinearColor Color; // 0x234(0x10)
	float Temperature; // 0x244(0x4)
	struct UTextureLightProfile* IESTexture; // 0x248(0x8)
	bool bUseIESBrightness; // 0x250(0x1)
	unsigned char UnknownData_251[0x0003]; // 0x251(0x3)
	float IESBrightnessScale; // 0x254(0x4)
	struct FRotator Rotation; // 0x258(0xC)
	float SourceRadius; // 0x264(0x4)
	float SourceLength; // 0x268(0x4)
	float AttenuationRadius; // 0x26C(0x4)
	float SpotlightInnerAngle; // 0x270(0x4)
	float SpotlightOuterAngle; // 0x274(0x4)
};

// Class DatasmithContent.DatasmithAreaLightActorTemplate
// Size : 0xA0 (Inherited : 0x30)
struct UDatasmithAreaLightActorTemplate : UDatasmithObjectTemplate {
	enum class EDatasmithAreaLightActorType LightType; // 0x30(0x1)
	enum class EDatasmithAreaLightActorShape LightShape; // 0x31(0x1)
	unsigned char UnknownData_32[0x0002]; // 0x32(0x2)
	struct FVector2D Dimensions; // 0x34(0x8)
	struct FLinearColor Color; // 0x3C(0x10)
	float Intensity; // 0x4C(0x4)
	enum class ELightUnits IntensityUnits; // 0x50(0x1)
	unsigned char UnknownData_51[0x0003]; // 0x51(0x3)
	float Temperature; // 0x54(0x4)
	struct TSoftObjectPtr<struct UTextureLightProfile> IESTexture; // 0x58(0x28)
	bool bUseIESBrightness; // 0x80(0x1)
	unsigned char UnknownData_81[0x0003]; // 0x81(0x3)
	float IESBrightnessScale; // 0x84(0x4)
	struct FRotator Rotation; // 0x88(0xC)
	float SourceRadius; // 0x94(0x4)
	float SourceLength; // 0x98(0x4)
	float AttenuationRadius; // 0x9C(0x4)
};

// Class DatasmithContent.DatasmithAssetImportData
// Size : 0x28 (Inherited : 0x28)
struct UDatasmithAssetImportData : UAssetImportData {
};

// Class DatasmithContent.DatasmithStaticMeshImportData
// Size : 0x28 (Inherited : 0x28)
struct UDatasmithStaticMeshImportData : UDatasmithAssetImportData {
};

// Class DatasmithContent.DatasmithStaticMeshCADImportData
// Size : 0x28 (Inherited : 0x28)
struct UDatasmithStaticMeshCADImportData : UDatasmithStaticMeshImportData {
};

// Class DatasmithContent.DatasmithSceneImportData
// Size : 0x28 (Inherited : 0x28)
struct UDatasmithSceneImportData : UAssetImportData {
};

// Class DatasmithContent.DatasmithTranslatedSceneImportData
// Size : 0x28 (Inherited : 0x28)
struct UDatasmithTranslatedSceneImportData : UDatasmithSceneImportData {
};

// Class DatasmithContent.DatasmithCADImportSceneData
// Size : 0x28 (Inherited : 0x28)
struct UDatasmithCADImportSceneData : UDatasmithSceneImportData {
};

// Class DatasmithContent.DatasmithMDLSceneImportData
// Size : 0x28 (Inherited : 0x28)
struct UDatasmithMDLSceneImportData : UDatasmithSceneImportData {
};

// Class DatasmithContent.DatasmithGLTFSceneImportData
// Size : 0x70 (Inherited : 0x28)
struct UDatasmithGLTFSceneImportData : UDatasmithSceneImportData {
	struct FString Generator; // 0x28(0x10)
	float Version; // 0x38(0x4)
	unsigned char UnknownData_3C[0x0004]; // 0x3C(0x4)
	struct FString Author; // 0x40(0x10)
	struct FString License; // 0x50(0x10)
	struct FString Source; // 0x60(0x10)
};

// Class DatasmithContent.DatasmithStaticMeshGLTFImportData
// Size : 0x38 (Inherited : 0x28)
struct UDatasmithStaticMeshGLTFImportData : UDatasmithStaticMeshImportData {
	struct FString SourceMeshName; // 0x28(0x10)
};

// Class DatasmithContent.DatasmithFBXSceneImportData
// Size : 0x48 (Inherited : 0x28)
struct UDatasmithFBXSceneImportData : UDatasmithSceneImportData {
	bool bGenerateLightmapUVs; // 0x28(0x1)
	unsigned char UnknownData_29[0x0007]; // 0x29(0x7)
	struct FString TexturesDir; // 0x30(0x10)
	enum class None IntermediateSerialization; // 0x40(0x1)
	bool bColorizeMaterials; // 0x41(0x1)
	unsigned char UnknownData_42[0x0006]; // 0x42(0x6)
};

// Class DatasmithContent.DatasmithDeltaGenAssetImportData
// Size : 0x28 (Inherited : 0x28)
struct UDatasmithDeltaGenAssetImportData : UDatasmithAssetImportData {
};

// Class DatasmithContent.DatasmithDeltaGenSceneImportData
// Size : 0x90 (Inherited : 0x48)
struct UDatasmithDeltaGenSceneImportData : UDatasmithFBXSceneImportData {
	bool bMergeNodes; // 0x48(0x1)
	bool bOptimizeDuplicatedNodes; // 0x49(0x1)
	bool bRemoveInvisibleNodes; // 0x4A(0x1)
	bool bSimplifyNodeHierarchy; // 0x4B(0x1)
	bool bImportVar; // 0x4C(0x1)
	unsigned char UnknownData_4D[0x0003]; // 0x4D(0x3)
	struct FString VarPath; // 0x50(0x10)
	bool bImportPos; // 0x60(0x1)
	unsigned char UnknownData_61[0x0007]; // 0x61(0x7)
	struct FString PosPath; // 0x68(0x10)
	bool bImportTml; // 0x78(0x1)
	unsigned char UnknownData_79[0x0007]; // 0x79(0x7)
	struct FString TmlPath; // 0x80(0x10)
};

// Class DatasmithContent.DatasmithVREDAssetImportData
// Size : 0x28 (Inherited : 0x28)
struct UDatasmithVREDAssetImportData : UDatasmithAssetImportData {
};

// Class DatasmithContent.DatasmithVREDSceneImportData
// Size : 0xA8 (Inherited : 0x48)
struct UDatasmithVREDSceneImportData : UDatasmithFBXSceneImportData {
	bool bMergeNodes; // 0x48(0x1)
	bool bOptimizeDuplicatedNodes; // 0x49(0x1)
	bool bImportMats; // 0x4A(0x1)
	unsigned char UnknownData_4B[0x0005]; // 0x4B(0x5)
	struct FString MatsPath; // 0x50(0x10)
	bool bImportVar; // 0x60(0x1)
	bool bCleanVar; // 0x61(0x1)
	unsigned char UnknownData_62[0x0006]; // 0x62(0x6)
	struct FString VarPath; // 0x68(0x10)
	bool bImportLightInfo; // 0x78(0x1)
	unsigned char UnknownData_79[0x0007]; // 0x79(0x7)
	struct FString LightInfoPath; // 0x80(0x10)
	bool bImportClipInfo; // 0x90(0x1)
	unsigned char UnknownData_91[0x0007]; // 0x91(0x7)
	struct FString ClipInfoPath; // 0x98(0x10)
};

// Class DatasmithContent.DatasmithIFCSceneImportData
// Size : 0x28 (Inherited : 0x28)
struct UDatasmithIFCSceneImportData : UDatasmithSceneImportData {
};

// Class DatasmithContent.DatasmithStaticMeshIFCImportData
// Size : 0x38 (Inherited : 0x28)
struct UDatasmithStaticMeshIFCImportData : UDatasmithStaticMeshImportData {
	struct FString SourceGlobalId; // 0x28(0x10)
};

// Class DatasmithContent.DatasmithAssetUserData
// Size : 0x78 (Inherited : 0x28)
struct UDatasmithAssetUserData : UAssetUserData {
	struct TMap<struct FName, struct FString> MetaData; // 0x28(0x50)
};

// Class DatasmithContent.DatasmithCineCameraActorTemplate
// Size : 0x60 (Inherited : 0x30)
struct UDatasmithCineCameraActorTemplate : UDatasmithObjectTemplate {
	struct FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings; // 0x30(0x30)
};

// Class DatasmithContent.DatasmithCineCameraComponentTemplate
// Size : 0x90 (Inherited : 0x30)
struct UDatasmithCineCameraComponentTemplate : UDatasmithObjectTemplate {
	struct FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings; // 0x30(0x8)
	struct FDatasmithCameraLensSettingsTemplate LensSettings; // 0x38(0x4)
	struct FDatasmithCameraFocusSettingsTemplate FocusSettings; // 0x3C(0x8)
	float CurrentFocalLength; // 0x44(0x4)
	float CurrentAperture; // 0x48(0x4)
	unsigned char UnknownData_4C[0x0004]; // 0x4C(0x4)
	struct FDatasmithPostProcessSettingsTemplate PostProcessSettings; // 0x50(0x40)
};

// Class DatasmithContent.DatasmithContentBlueprintLibrary
// Size : 0x28 (Inherited : 0x28)
struct UDatasmithContentBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FString GetDatasmithUserDataValueForKey(struct UObject* Object, struct FName Key); // Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataValueForKey // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF774980770
	void GetDatasmithUserDataKeysAndValuesForValue(struct UObject* Object, struct FString StringToMatch, struct TArray<struct FName> OutKeys, struct TArray<struct FString> OutValues); // Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserDataKeysAndValuesForValue // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x38, 0x7FF7749805C0
	struct UDatasmithAssetUserData* GetDatasmithUserData(struct UObject* Object); // Function DatasmithContent.DatasmithContentBlueprintLibrary.GetDatasmithUserData // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF774980540
};

// Class DatasmithContent.DatasmithCustomActionBase
// Size : 0x30 (Inherited : 0x28)
struct UDatasmithCustomActionBase : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// Class DatasmithContent.DatasmithImportedSequencesActor
// Size : 0x230 (Inherited : 0x220)
struct ADatasmithImportedSequencesActor : AActor {
	struct TArray<struct ULevelSequence*> ImportedSequences; // 0x220(0x10)

	void PlayLevelSequence(struct ULevelSequence* SequenceToPlay); // Function DatasmithContent.DatasmithImportedSequencesActor.PlayLevelSequence // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774980870
};

// Class DatasmithContent.DatasmithOptionsBase
// Size : 0x28 (Inherited : 0x28)
struct UDatasmithOptionsBase : UObject {
};

// Class DatasmithContent.DatasmithCommonTessellationOptions
// Size : 0x38 (Inherited : 0x28)
struct UDatasmithCommonTessellationOptions : UDatasmithOptionsBase {
	struct FDatasmithTessellationOptions Options; // 0x28(0x10)
};

// Class DatasmithContent.DatasmithImportOptions
// Size : 0x78 (Inherited : 0x28)
struct UDatasmithImportOptions : UDatasmithOptionsBase {
	enum class EDatasmithImportSearchPackagePolicy SearchPackagePolicy; // 0x28(0x1)
	enum class EDatasmithImportAssetConflictPolicy MaterialConflictPolicy; // 0x29(0x1)
	enum class EDatasmithImportAssetConflictPolicy TextureConflictPolicy; // 0x2A(0x1)
	enum class EDatasmithImportActorPolicy StaticMeshActorImportPolicy; // 0x2B(0x1)
	enum class EDatasmithImportActorPolicy LightImportPolicy; // 0x2C(0x1)
	enum class EDatasmithImportActorPolicy CameraImportPolicy; // 0x2D(0x1)
	enum class EDatasmithImportActorPolicy OtherActorImportPolicy; // 0x2E(0x1)
	enum class EDatasmithImportMaterialQuality MaterialQuality; // 0x2F(0x1)
	unsigned char UnknownData_30[0x0004]; // 0x30(0x4)
	struct FDatasmithImportBaseOptions BaseOptions; // 0x34(0x14)
	struct FDatasmithReimportOptions ReimportOptions; // 0x48(0x2)
	unsigned char UnknownData_4A[0x0006]; // 0x4A(0x6)
	struct FString Filename; // 0x50(0x10)
	struct FString FilePath; // 0x60(0x10)
	unsigned char UnknownData_70[0x0008]; // 0x70(0x8)
};

// Class DatasmithContent.DatasmithLandscapeTemplate
// Size : 0x40 (Inherited : 0x30)
struct UDatasmithLandscapeTemplate : UDatasmithObjectTemplate {
	struct UMaterialInterface* LandscapeMaterial; // 0x30(0x8)
	int32_t StaticLightingLOD; // 0x38(0x4)
	unsigned char UnknownData_3C[0x0004]; // 0x3C(0x4)
};

// Class DatasmithContent.DatasmithLightComponentTemplate
// Size : 0x68 (Inherited : 0x30)
struct UDatasmithLightComponentTemplate : UDatasmithObjectTemplate {
	unsigned char bVisible : 1; // 0x30(0x1)
	unsigned char UnknownData_30_1 : 7; // 0x30(0x1)
	unsigned char UnknownData_31[0x0003]; // 0x31(0x3)
	unsigned char CastShadows : 1; // 0x34(0x1)
	unsigned char bUseTemperature : 1; // 0x34(0x1)
	unsigned char bUseIESBrightness : 1; // 0x34(0x1)
	unsigned char UnknownData_34_3 : 5; // 0x34(0x1)
	unsigned char UnknownData_35[0x0003]; // 0x35(0x3)
	float Intensity; // 0x38(0x4)
	float Temperature; // 0x3C(0x4)
	float IESBrightnessScale; // 0x40(0x4)
	struct FLinearColor LightColor; // 0x44(0x10)
	unsigned char UnknownData_54[0x0004]; // 0x54(0x4)
	struct UMaterialInterface* LightFunctionMaterial; // 0x58(0x8)
	struct UTextureLightProfile* IESTexture; // 0x60(0x8)
};

// Class DatasmithContent.DatasmithMaterialInstanceTemplate
// Size : 0x198 (Inherited : 0x30)
struct UDatasmithMaterialInstanceTemplate : UDatasmithObjectTemplate {
	struct TSoftObjectPtr<struct UMaterialInterface> ParentMaterial; // 0x30(0x28)
	struct TMap<struct FName, float> ScalarParameterValues; // 0x58(0x50)
	struct TMap<struct FName, struct FLinearColor> VectorParameterValues; // 0xA8(0x50)
	struct TMap<struct FName, struct TSoftObjectPtr<struct UTexture>> TextureParameterValues; // 0xF8(0x50)
	struct FDatasmithStaticParameterSetTemplate StaticParameters; // 0x148(0x50)
};

// Class DatasmithContent.DatasmithPointLightComponentTemplate
// Size : 0x40 (Inherited : 0x30)
struct UDatasmithPointLightComponentTemplate : UDatasmithObjectTemplate {
	enum class ELightUnits IntensityUnits; // 0x30(0x1)
	unsigned char UnknownData_31[0x0003]; // 0x31(0x3)
	float SourceRadius; // 0x34(0x4)
	float SourceLength; // 0x38(0x4)
	float AttenuationRadius; // 0x3C(0x4)
};

// Class DatasmithContent.DatasmithPostProcessVolumeTemplate
// Size : 0x80 (Inherited : 0x30)
struct UDatasmithPostProcessVolumeTemplate : UDatasmithObjectTemplate {
	struct FDatasmithPostProcessSettingsTemplate Settings; // 0x30(0x40)
	unsigned char bEnabled : 1; // 0x70(0x1)
	unsigned char bUnbound : 1; // 0x70(0x1)
	unsigned char UnknownData_70_2 : 6; // 0x70(0x1)
	unsigned char UnknownData_71[0x000F]; // 0x71(0xF)
};

// Class DatasmithContent.DatasmithScene
// Size : 0x30 (Inherited : 0x28)
struct UDatasmithScene : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// Class DatasmithContent.DatasmithSceneActor
// Size : 0x278 (Inherited : 0x220)
struct ADatasmithSceneActor : AActor {
	struct UDatasmithScene* Scene; // 0x220(0x8)
	struct TMap<struct FName, struct TSoftObjectPtr<struct AActor>> RelatedActors; // 0x228(0x50)
};

// Class DatasmithContent.DatasmithSceneComponentTemplate
// Size : 0xE0 (Inherited : 0x30)
struct UDatasmithSceneComponentTemplate : UDatasmithObjectTemplate {
	struct FTransform RelativeTransform; // 0x30(0x30)
	enum class EComponentMobility Mobility; // 0x60(0x1)
	unsigned char UnknownData_61[0x0007]; // 0x61(0x7)
	struct TSoftObjectPtr<struct USceneComponent> AttachParent; // 0x68(0x28)
	struct TSet<struct FName> Tags; // 0x90(0x50)
};

// Class DatasmithContent.DatasmithSkyLightComponentTemplate
// Size : 0x40 (Inherited : 0x30)
struct UDatasmithSkyLightComponentTemplate : UDatasmithObjectTemplate {
	enum class ESkyLightSourceType SourceType; // 0x30(0x1)
	unsigned char UnknownData_31[0x0003]; // 0x31(0x3)
	int32_t CubemapResolution; // 0x34(0x4)
	struct UTextureCube* Cubemap; // 0x38(0x8)
};

// Class DatasmithContent.DatasmithSpotLightComponentTemplate
// Size : 0x38 (Inherited : 0x30)
struct UDatasmithSpotLightComponentTemplate : UDatasmithObjectTemplate {
	float InnerConeAngle; // 0x30(0x4)
	float OuterConeAngle; // 0x34(0x4)
};

// Class DatasmithContent.DatasmithStaticMeshComponentTemplate
// Size : 0x48 (Inherited : 0x30)
struct UDatasmithStaticMeshComponentTemplate : UDatasmithObjectTemplate {
	struct UStaticMesh* StaticMesh; // 0x30(0x8)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x38(0x10)
};

// Class DatasmithContent.DatasmithStaticMeshTemplate
// Size : 0xA8 (Inherited : 0x30)
struct UDatasmithStaticMeshTemplate : UDatasmithObjectTemplate {
	struct FDatasmithMeshSectionInfoMapTemplate SectionInfoMap; // 0x30(0x50)
	int32_t LightMapCoordinateIndex; // 0x80(0x4)
	int32_t LightMapResolution; // 0x84(0x4)
	struct TArray<struct FDatasmithMeshBuildSettingsTemplate> BuildSettings; // 0x88(0x10)
	struct TArray<struct FDatasmithStaticMaterialTemplate> StaticMaterials; // 0x98(0x10)
};

