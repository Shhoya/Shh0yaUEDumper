// ScriptStruct MagicLeapPlanes.MagicLeapPlaneBoundaries
// Size : 0x20 (Inherited : 0x0)
struct FMagicLeapPlaneBoundaries {
	struct FGuid ID; // 0x0(0x10)
	struct TArray<struct FMagicLeapPlaneBoundary> Boundaries; // 0x10(0x10)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlaneBoundary
// Size : 0x20 (Inherited : 0x0)
struct FMagicLeapPlaneBoundary {
	struct FMagicLeapPolygon Polygon; // 0x0(0x10)
	struct TArray<struct FMagicLeapPolygon> Holes; // 0x10(0x10)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPolygon
// Size : 0x10 (Inherited : 0x0)
struct FMagicLeapPolygon {
	struct TArray<struct FVector> Vertices; // 0x0(0x10)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlaneResult
// Size : 0x60 (Inherited : 0x0)
struct FMagicLeapPlaneResult {
	struct FVector PlanePosition; // 0x0(0xC)
	struct FRotator PlaneOrientation; // 0xC(0xC)
	struct FRotator ContentOrientation; // 0x18(0xC)
	struct FVector2D PlaneDimensions; // 0x24(0x8)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
	struct TArray<enum class EMagicLeapPlaneQueryFlags> PlaneFlags; // 0x30(0x10)
	struct FGuid ID; // 0x40(0x10)
	struct FGuid InnerID; // 0x50(0x10)
};

// ScriptStruct MagicLeapPlanes.MagicLeapPlanesQuery
// Size : 0x60 (Inherited : 0x0)
struct FMagicLeapPlanesQuery {
	struct TArray<enum class EMagicLeapPlaneQueryFlags> Flags; // 0x0(0x10)
	struct UBoxComponent* SearchVolume; // 0x10(0x8)
	int32_t MaxResults; // 0x18(0x4)
	float MinHoleLength; // 0x1C(0x4)
	float MinPlaneArea; // 0x20(0x4)
	struct FVector SearchVolumePosition; // 0x24(0xC)
	struct FQuat SearchVolumeOrientation; // 0x30(0x10)
	struct FVector SearchVolumeExtents; // 0x40(0xC)
	float SimilarityThreshold; // 0x4C(0x4)
	bool bSearchVolumeTrackingSpace; // 0x50(0x1)
	bool bResultTrackingSpace; // 0x51(0x1)
	unsigned char UnknownData_52[0x000E]; // 0x52(0xE)
};

