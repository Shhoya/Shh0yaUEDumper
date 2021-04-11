// Enum Landscape.ELandscapeBlendMode
enum class FELandscapeBlendMode : uint8 {
	LSBM_AdditiveBlend
	LSBM_AlphaBlend
	LSBM_MAX
};

// Enum Landscape.ELandscapeSetupErrors
enum class FELandscapeSetupErrors : uint8 {
	LSE_None
	LSE_NoLandscapeInfo
	LSE_CollsionXY
	LSE_NoLayerInfo
	LSE_MAX
};

// Enum Landscape.ELandscapeClearMode
enum class FELandscapeClearMode : uint8 {
	Clear_Weightmap
	Clear_Heightmap
	Clear_All
	Clear_MAX
};

// Enum Landscape.ELandscapeGizmoType
enum class FELandscapeGizmoType : uint8 {
	LGT_None
	LGT_Height
	LGT_Weight
	LGT_MAX
};

// Enum Landscape.EGrassScaling
enum class FEGrassScaling : uint8 {
	Uniform
	Free
	LockXY
	EGrassScaling_MAX
};

// Enum Landscape.ESplineModulationColorMask
enum class FESplineModulationColorMask : uint8 {
	Red
	Green
	Blue
	Alpha
	ESplineModulationColorMask_MAX
};

// Enum Landscape.ELandscapeLODFalloff
enum class FELandscapeLODFalloff : uint8 {
	Linear
	SquareRoot
	ELandscapeLODFalloff_MAX
};

// Enum Landscape.ELandscapeLayerDisplayMode
enum class FELandscapeLayerDisplayMode : uint8 {
	Default
	Alphabetical
	UserSpecific
	ELandscapeLayerDisplayMode_MAX
};

// Enum Landscape.ELandscapeLayerPaintingRestriction
enum class FELandscapeLayerPaintingRestriction : uint8 {
	None
	UseMaxLayers
	ExistingOnly
	UseComponentWhitelist
	ELandscapeLayerPaintingRestriction_MAX
};

// Enum Landscape.ELandscapeImportAlphamapType
enum class FELandscapeImportAlphamapType : uint8 {
	Additive
	Layered
	ELandscapeImportAlphamapType_MAX
};

// Enum Landscape.LandscapeSplineMeshOrientation
enum class FLandscapeSplineMeshOrientation : uint8 {
	LSMO_XUp
	LSMO_YUp
	LSMO_MAX
};

// Enum Landscape.ELandscapeLayerBlendType
enum class FELandscapeLayerBlendType : uint8 {
	LB_WeightBlend
	LB_AlphaBlend
	LB_HeightBlend
	LB_MAX
};

// Enum Landscape.ELandscapeCustomizedCoordType
enum class FELandscapeCustomizedCoordType : uint8 {
	LCCT_None
	LCCT_CustomUV0
	LCCT_CustomUV1
	LCCT_CustomUV2
	LCCT_WeightMapUV
	LCCT_MAX
};

// Enum Landscape.ETerrainCoordMappingType
enum class FETerrainCoordMappingType : uint8 {
	TCMT_Auto
	TCMT_XY
	TCMT_XZ
	TCMT_YZ
	TCMT_MAX
};

