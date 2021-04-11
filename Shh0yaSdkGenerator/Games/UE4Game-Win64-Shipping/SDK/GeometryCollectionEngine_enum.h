// Enum GeometryCollectionEngine.EChaosBreakingSortMethod
enum class FEChaosBreakingSortMethod : uint8 {
	SortNone
	SortByHighestMass
	SortByHighestSpeed
	SortByNearestFirst
	Count
	EChaosBreakingSortMethod_MAX
};

// Enum GeometryCollectionEngine.EChaosCollisionSortMethod
enum class FEChaosCollisionSortMethod : uint8 {
	SortNone
	SortByHighestMass
	SortByHighestSpeed
	SortByHighestImpulse
	SortByNearestFirst
	Count
	EChaosCollisionSortMethod_MAX
};

// Enum GeometryCollectionEngine.EChaosTrailingSortMethod
enum class FEChaosTrailingSortMethod : uint8 {
	SortNone
	SortByHighestMass
	SortByHighestSpeed
	SortByNearestFirst
	Count
	EChaosTrailingSortMethod_MAX
};

// Enum GeometryCollectionEngine.EGeometryCollectionDebugDrawActorHideGeometry
enum class FEGeometryCollectionDebugDrawActorHideGeometry : uint8 {
	HideNone
	HideWithCollision
	HideSelected
	HideWholeCollection
	HideAll
	EGeometryCollectionDebugDrawActorHideGeometry_MAX
};

// Enum GeometryCollectionEngine.ECollectionGroupEnum
enum class FECollectionGroupEnum : uint8 {
	Chaos_Traansform
	Chaos_Max
};

// Enum GeometryCollectionEngine.ECollectionAttributeEnum
enum class FECollectionAttributeEnum : uint8 {
	Chaos_Active
	Chaos_DynamicState
	Chaos_CollisionGroup
	Chaos_Max
};

