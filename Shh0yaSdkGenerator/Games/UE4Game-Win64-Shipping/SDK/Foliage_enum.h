// Enum Foliage.EFoliageScaling
enum class FEFoliageScaling : uint8 {
	Uniform
	Free
	LockXY
	LockXZ
	LockYZ
	EFoliageScaling_MAX
};

// Enum Foliage.EVertexColorMaskChannel
enum class FEVertexColorMaskChannel : uint8 {
	Red
	Green
	Blue
	Alpha
	MAX_None
	EVertexColorMaskChannel_MAX
};

// Enum Foliage.FoliageVertexColorMask
enum class FFoliageVertexColorMask : uint8 {
	FOLIAGEVERTEXCOLORMASK_Disabled
	FOLIAGEVERTEXCOLORMASK_Red
	FOLIAGEVERTEXCOLORMASK_Green
	FOLIAGEVERTEXCOLORMASK_Blue
	FOLIAGEVERTEXCOLORMASK_Alpha
	FOLIAGEVERTEXCOLORMASK_MAX
};

// Enum Foliage.ESimulationQuery
enum class FESimulationQuery : uint8 {
	None
	CollisionOverlap
	ShadeOverlap
	AnyOverlap
	ESimulationQuery_MAX
};

// Enum Foliage.ESimulationOverlap
enum class FESimulationOverlap : uint8 {
	CollisionOverlap
	ShadeOverlap
	None
	ESimulationOverlap_MAX
};

