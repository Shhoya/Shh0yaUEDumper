// ScriptStruct Paper2D.IntMargin
// Size : 0x10 (Inherited : 0x0)
struct FIntMargin {
	int32_t Left; // 0x0(0x4)
	int32_t Top; // 0x4(0x4)
	int32_t Right; // 0x8(0x4)
	int32_t Bottom; // 0xC(0x4)
};

// ScriptStruct Paper2D.PaperFlipbookKeyFrame
// Size : 0x10 (Inherited : 0x0)
struct FPaperFlipbookKeyFrame {
	struct UPaperSprite* Sprite; // 0x0(0x8)
	int32_t FrameRun; // 0x8(0x4)
	unsigned char UnknownData_C[0x0004]; // 0xC(0x4)
};

// ScriptStruct Paper2D.SpriteInstanceData
// Size : 0x50 (Inherited : 0x0)
struct FSpriteInstanceData {
	struct FMatrix Transform; // 0x0(0x40)
	struct UPaperSprite* SourceSprite; // 0x40(0x8)
	struct FColor VertexColor; // 0x48(0x4)
	int32_t MaterialIndex; // 0x4C(0x4)
};

// ScriptStruct Paper2D.PaperSpriteSocket
// Size : 0x40 (Inherited : 0x0)
struct FPaperSpriteSocket {
	struct FTransform LocalTransform; // 0x0(0x30)
	struct FName SocketName; // 0x30(0x8)
	unsigned char UnknownData_38[0x0008]; // 0x38(0x8)
};

// ScriptStruct Paper2D.PaperSpriteAtlasSlot
// Size : 0x40 (Inherited : 0x0)
struct FPaperSpriteAtlasSlot {
	struct TSoftObjectPtr<struct UPaperSprite> SpriteRef; // 0x0(0x28)
	int32_t AtlasIndex; // 0x28(0x4)
	int32_t X; // 0x2C(0x4)
	int32_t Y; // 0x30(0x4)
	int32_t Width; // 0x34(0x4)
	int32_t Height; // 0x38(0x4)
	unsigned char UnknownData_3C[0x0004]; // 0x3C(0x4)
};

// ScriptStruct Paper2D.PaperTerrainMaterialRule
// Size : 0x38 (Inherited : 0x0)
struct FPaperTerrainMaterialRule {
	struct UPaperSprite* StartCap; // 0x0(0x8)
	struct TArray<struct UPaperSprite*> Body; // 0x8(0x10)
	struct UPaperSprite* EndCap; // 0x18(0x8)
	float MinimumAngle; // 0x20(0x4)
	float MaximumAngle; // 0x24(0x4)
	bool bEnableCollision; // 0x28(0x1)
	unsigned char UnknownData_29[0x0003]; // 0x29(0x3)
	float CollisionOffset; // 0x2C(0x4)
	int32_t DrawOrder; // 0x30(0x4)
	unsigned char UnknownData_34[0x0004]; // 0x34(0x4)
};

// ScriptStruct Paper2D.PaperTileInfo
// Size : 0x10 (Inherited : 0x0)
struct FPaperTileInfo {
	struct UPaperTileSet* TileSet; // 0x0(0x8)
	int32_t PackedTileIndex; // 0x8(0x4)
	unsigned char UnknownData_C[0x0004]; // 0xC(0x4)
};

// ScriptStruct Paper2D.PaperTileSetTerrain
// Size : 0x18 (Inherited : 0x0)
struct FPaperTileSetTerrain {
	struct FString TerrainName; // 0x0(0x10)
	int32_t CenterTileIndex; // 0x10(0x4)
	unsigned char UnknownData_14[0x0004]; // 0x14(0x4)
};

// ScriptStruct Paper2D.PaperTileMetadata
// Size : 0x40 (Inherited : 0x0)
struct FPaperTileMetadata {
	struct FName UserDataName; // 0x0(0x8)
	struct FSpriteGeometryCollection CollisionData; // 0x8(0x30)
	enum class None TerrainMembership[4]; // 0x38(0x4)
	unsigned char UnknownData_3C[0x0004]; // 0x3C(0x4)
};

// ScriptStruct Paper2D.SpriteGeometryCollection
// Size : 0x30 (Inherited : 0x0)
struct FSpriteGeometryCollection {
	struct TArray<struct FSpriteGeometryShape> Shapes; // 0x0(0x10)
	enum class ESpritePolygonMode GeometryType; // 0x10(0x1)
	unsigned char UnknownData_11[0x0003]; // 0x11(0x3)
	int32_t PixelsPerSubdivisionX; // 0x14(0x4)
	int32_t PixelsPerSubdivisionY; // 0x18(0x4)
	bool bAvoidVertexMerging; // 0x1C(0x1)
	unsigned char UnknownData_1D[0x0003]; // 0x1D(0x3)
	float AlphaThreshold; // 0x20(0x4)
	float DetailAmount; // 0x24(0x4)
	float SimplifyEpsilon; // 0x28(0x4)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
};

// ScriptStruct Paper2D.SpriteGeometryShape
// Size : 0x30 (Inherited : 0x0)
struct FSpriteGeometryShape {
	enum class ESpriteShapeType ShapeType; // 0x0(0x1)
	unsigned char UnknownData_1[0x0007]; // 0x1(0x7)
	struct TArray<struct FVector2D> Vertices; // 0x8(0x10)
	struct FVector2D BoxSize; // 0x18(0x8)
	struct FVector2D BoxPosition; // 0x20(0x8)
	float Rotation; // 0x28(0x4)
	bool bNegativeWinding; // 0x2C(0x1)
	unsigned char UnknownData_2D[0x0003]; // 0x2D(0x3)
};

// ScriptStruct Paper2D.SpriteDrawCallRecord
// Size : 0xD0 (Inherited : 0x0)
struct FSpriteDrawCallRecord {
	struct FVector Destination; // 0x0(0xC)
	unsigned char UnknownData_C[0x0004]; // 0xC(0x4)
	struct UTexture* BaseTexture; // 0x10(0x8)
	unsigned char UnknownData_18[0x0030]; // 0x18(0x30)
	struct FColor Color; // 0x48(0x4)
	unsigned char UnknownData_4C[0x0084]; // 0x4C(0x84)
};

// ScriptStruct Paper2D.SpriteAssetInitParameters
// Size : 0x40 (Inherited : 0x0)
struct FSpriteAssetInitParameters {
	unsigned char UnknownData_0[0x0040]; // 0x0(0x40)
};

