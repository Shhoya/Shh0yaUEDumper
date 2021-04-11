// Enum DatasmithContent.EDatasmithAreaLightActorType
enum class FEDatasmithAreaLightActorType : uint8 {
	Point
	Spot
	Rect
	EDatasmithAreaLightActorType_MAX
};

// Enum DatasmithContent.EDatasmithAreaLightActorShape
enum class FEDatasmithAreaLightActorShape : uint8 {
	Rectangle
	Disc
	Sphere
	Cylinder
	None
	EDatasmithAreaLightActorShape_MAX
};

// Enum DatasmithContent.EDatasmithCADRetessellationRule
enum class FEDatasmithCADRetessellationRule : uint8 {
	All
	SkipDeletedSurfaces
	EDatasmithCADRetessellationRule_MAX
};

// Enum DatasmithContent.EDatasmithCADStitchingTechnique
enum class FEDatasmithCADStitchingTechnique : uint8 {
	StitchingNone
	StitchingHeal
	StitchingSew
	EDatasmithCADStitchingTechnique_MAX
};

// Enum DatasmithContent.EDatasmithImportHierarchy
enum class FEDatasmithImportHierarchy : uint8 {
	UseMultipleActors
	UseSingleActor
	UseOneBlueprint
	EDatasmithImportHierarchy_MAX
};

// Enum DatasmithContent.EDatasmithImportScene
enum class FEDatasmithImportScene : uint8 {
	NewLevel
	CurrentLevel
	AssetsOnly
	EDatasmithImportScene_MAX
};

// Enum DatasmithContent.EDatasmithImportLightmapMax
enum class FEDatasmithImportLightmapMax : uint8 {
	LIGHTMAP_65
	LIGHTMAP_129
	LIGHTMAP_257
	LIGHTMAP_513
	LIGHTMAP_1025
	LIGHTMAP_2049
	LIGHTMAP_4097
	LIGHTMAP_MAX
};

// Enum DatasmithContent.EDatasmithImportLightmapMin
enum class FEDatasmithImportLightmapMin : uint8 {
	LIGHTMAP_17
	LIGHTMAP_33
	LIGHTMAP_65
	LIGHTMAP_129
	LIGHTMAP_257
	LIGHTMAP_513
	LIGHTMAP_MAX
};

// Enum DatasmithContent.EDatasmithImportMaterialQuality
enum class FEDatasmithImportMaterialQuality : uint8 {
	UseNoFresnelCurves
	UseSimplifierFresnelCurves
	UseRealFresnelCurves
	EDatasmithImportMaterialQuality_MAX
};

// Enum DatasmithContent.EDatasmithImportActorPolicy
enum class FEDatasmithImportActorPolicy : uint8 {
	Update
	Full
	Ignore
	EDatasmithImportActorPolicy_MAX
};

// Enum DatasmithContent.EDatasmithImportAssetConflictPolicy
enum class FEDatasmithImportAssetConflictPolicy : uint8 {
	Replace
	Update
	Use
	Ignore
	EDatasmithImportAssetConflictPolicy_MAX
};

// Enum DatasmithContent.EDatasmithImportSearchPackagePolicy
enum class FEDatasmithImportSearchPackagePolicy : uint8 {
	Current
	All
	EDatasmithImportSearchPackagePolicy_MAX
};

