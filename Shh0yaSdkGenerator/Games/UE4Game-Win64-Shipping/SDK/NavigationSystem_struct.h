// ScriptStruct NavigationSystem.NavCollisionBox
// Size : 0x18 (Inherited : 0x0)
struct FNavCollisionBox {
	struct FVector Offset; // 0x0(0xC)
	struct FVector Extent; // 0xC(0xC)
};

// ScriptStruct NavigationSystem.NavCollisionCylinder
// Size : 0x14 (Inherited : 0x0)
struct FNavCollisionCylinder {
	struct FVector Offset; // 0x0(0xC)
	float Radius; // 0xC(0x4)
	float Height; // 0x10(0x4)
};

// ScriptStruct NavigationSystem.SupportedAreaData
// Size : 0x20 (Inherited : 0x0)
struct FSupportedAreaData {
	struct FString AreaClassName; // 0x0(0x10)
	int32_t AreaID; // 0x10(0x4)
	unsigned char UnknownData_14[0x0004]; // 0x14(0x4)
	class UObject* AreaClass; // 0x18(0x8)
};

// ScriptStruct NavigationSystem.NavGraphNode
// Size : 0x18 (Inherited : 0x0)
struct FNavGraphNode {
	struct UObject* Owner; // 0x0(0x8)
	unsigned char UnknownData_8[0x0010]; // 0x8(0x10)
};

// ScriptStruct NavigationSystem.NavGraphEdge
// Size : 0x18 (Inherited : 0x0)
struct FNavGraphEdge {
	unsigned char UnknownData_0[0x0018]; // 0x0(0x18)
};

// ScriptStruct NavigationSystem.NavigationFilterFlags
// Size : 0x4 (Inherited : 0x0)
struct FNavigationFilterFlags {
	unsigned char bNavFlag0 : 1; // 0x0(0x1)
	unsigned char bNavFlag1 : 1; // 0x0(0x1)
	unsigned char bNavFlag2 : 1; // 0x0(0x1)
	unsigned char bNavFlag3 : 1; // 0x0(0x1)
	unsigned char bNavFlag4 : 1; // 0x0(0x1)
	unsigned char bNavFlag5 : 1; // 0x0(0x1)
	unsigned char bNavFlag6 : 1; // 0x0(0x1)
	unsigned char bNavFlag7 : 1; // 0x0(0x1)
	unsigned char bNavFlag8 : 1; // 0x1(0x1)
	unsigned char bNavFlag9 : 1; // 0x1(0x1)
	unsigned char bNavFlag10 : 1; // 0x1(0x1)
	unsigned char bNavFlag11 : 1; // 0x1(0x1)
	unsigned char bNavFlag12 : 1; // 0x1(0x1)
	unsigned char bNavFlag13 : 1; // 0x1(0x1)
	unsigned char bNavFlag14 : 1; // 0x1(0x1)
	unsigned char bNavFlag15 : 1; // 0x1(0x1)
	unsigned char UnknownData_2[0x0002]; // 0x2(0x2)
};

// ScriptStruct NavigationSystem.NavigationFilterArea
// Size : 0x18 (Inherited : 0x0)
struct FNavigationFilterArea {
	class UNavArea* AreaClass; // 0x0(0x8)
	float TravelCostOverride; // 0x8(0x4)
	float EnteringCostOverride; // 0xC(0x4)
	unsigned char bIsExcluded : 1; // 0x10(0x1)
	unsigned char bOverrideTravelCost : 1; // 0x10(0x1)
	unsigned char bOverrideEnteringCost : 1; // 0x10(0x1)
	unsigned char UnknownData_10_3 : 5; // 0x10(0x1)
	unsigned char UnknownData_11[0x0007]; // 0x11(0x7)
};

// ScriptStruct NavigationSystem.NavLinkCustomInstanceData
// Size : 0x60 (Inherited : 0x58)
struct FNavLinkCustomInstanceData : FActorComponentInstanceData {
	uint32_t NavLinkUserId; // 0x58(0x4)
	unsigned char UnknownData_5C[0x0004]; // 0x5C(0x4)
};

// ScriptStruct NavigationSystem.RecastNavMeshGenerationProperties
// Size : 0x40 (Inherited : 0x0)
struct FRecastNavMeshGenerationProperties {
	int32_t TilePoolSize; // 0x0(0x4)
	float TileSizeUU; // 0x4(0x4)
	float CellSize; // 0x8(0x4)
	float CellHeight; // 0xC(0x4)
	float AgentRadius; // 0x10(0x4)
	float AgentHeight; // 0x14(0x4)
	float AgentMaxSlope; // 0x18(0x4)
	float AgentMaxStepHeight; // 0x1C(0x4)
	float MinRegionArea; // 0x20(0x4)
	float MergeRegionSize; // 0x24(0x4)
	float MaxSimplificationError; // 0x28(0x4)
	int32_t TileNumberHardLimit; // 0x2C(0x4)
	enum class ERecastPartitioning RegionPartitioning; // 0x30(0x1)
	enum class ERecastPartitioning LayerPartitioning; // 0x31(0x1)
	unsigned char UnknownData_32[0x0002]; // 0x32(0x2)
	int32_t RegionChunkSplits; // 0x34(0x4)
	int32_t LayerChunkSplits; // 0x38(0x4)
	unsigned char bSortNavigationAreasByCost : 1; // 0x3C(0x1)
	unsigned char bPerformVoxelFiltering : 1; // 0x3C(0x1)
	unsigned char bMarkLowHeightAreas : 1; // 0x3C(0x1)
	unsigned char bFilterLowSpanSequences : 1; // 0x3C(0x1)
	unsigned char bFilterLowSpanFromTileCache : 1; // 0x3C(0x1)
	unsigned char bFixedTilePoolSize : 1; // 0x3C(0x1)
	unsigned char UnknownData_3C_6 : 2; // 0x3C(0x1)
	unsigned char UnknownData_3D[0x0003]; // 0x3D(0x3)
};

