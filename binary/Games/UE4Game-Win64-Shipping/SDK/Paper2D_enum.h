// Enum Paper2D.EFlipbookCollisionMode
enum class FEFlipbookCollisionMode : uint8 {
	NoCollision
	FirstFrameCollision
	EachFrameCollision
	EFlipbookCollisionMode_MAX
};

// Enum Paper2D.EPaperSpriteAtlasPadding
enum class FEPaperSpriteAtlasPadding : uint8 {
	DilateBorder
	PadWithZero
	EPaperSpriteAtlasPadding_MAX
};

// Enum Paper2D.ETileMapProjectionMode
enum class FETileMapProjectionMode : uint8 {
	Orthogonal
	IsometricDiamond
	IsometricStaggered
	HexagonalStaggered
	ETileMapProjectionMode_MAX
};

// Enum Paper2D.ESpritePivotMode
enum class FESpritePivotMode : uint8 {
	Top_Left
	Top_Center
	Top_Right
	Center_Left
	Center_Center
	Center_Right
	Bottom_Left
	Bottom_Center
	Bottom_Right
	Custom
	ESpritePivotMode_MAX
};

// Enum Paper2D.ESpritePolygonMode
enum class FESpritePolygonMode : uint8 {
	SourceBoundingBox
	TightBoundingBox
	ShrinkWrapped
	FullyCustom
	Diced
	ESpritePolygonMode_MAX
};

// Enum Paper2D.ESpriteShapeType
enum class FESpriteShapeType : uint8 {
	Box
	Circle
	Polygon
	ESpriteShapeType_MAX
};

// Enum Paper2D.ESpriteCollisionMode
enum class FESpriteCollisionMode : uint8 {
	None
	Use2DPhysics
	Use3DPhysics
	ESpriteCollisionMode_MAX
};

