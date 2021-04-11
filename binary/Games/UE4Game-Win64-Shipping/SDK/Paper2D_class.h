// Class Paper2D.MaterialExpressionSpriteTextureSampler
// Size : 0x110 (Inherited : 0xF0)
struct UMaterialExpressionSpriteTextureSampler : UMaterialExpressionTextureSampleParameter2D {
	bool bSampleAdditionalTextures; // 0xF0(0x1)
	unsigned char UnknownData_F1[0x0003]; // 0xF1(0x3)
	int32_t AdditionalSlotIndex; // 0xF4(0x4)
	struct FText SlotDisplayName; // 0xF8(0x18)
};

// Class Paper2D.PaperCharacter
// Size : 0x4C0 (Inherited : 0x4C0)
struct APaperCharacter : ACharacter {
	struct UPaperFlipbookComponent* Sprite; // 0x4B8(0x8)
};

// Class Paper2D.PaperFlipbook
// Size : 0x50 (Inherited : 0x28)
struct UPaperFlipbook : UObject {
	float FramesPerSecond; // 0x28(0x4)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
	struct TArray<struct FPaperFlipbookKeyFrame> KeyFrames; // 0x30(0x10)
	struct UMaterialInterface* DefaultMaterial; // 0x40(0x8)
	enum class EFlipbookCollisionMode CollisionSource; // 0x48(0x1)
	unsigned char UnknownData_49[0x0007]; // 0x49(0x7)

	bool IsValidKeyFrameIndex(int32_t Index); // Function Paper2D.PaperFlipbook.IsValidKeyFrameIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x5, 0x7FF774964310
	float GetTotalDuration(); // Function Paper2D.PaperFlipbook.GetTotalDuration // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774964250
	struct UPaperSprite* GetSpriteAtTime(float Time, bool bClampToEnds); // Function Paper2D.PaperFlipbook.GetSpriteAtTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF774963A50
	struct UPaperSprite* GetSpriteAtFrame(int32_t FrameIndex); // Function Paper2D.PaperFlipbook.GetSpriteAtFrame // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF7749639C0
	int32_t GetNumKeyFrames(); // Function Paper2D.PaperFlipbook.GetNumKeyFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774963910
	int32_t GetNumFrames(); // Function Paper2D.PaperFlipbook.GetNumFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF7749638E0
	int32_t GetKeyFrameIndexAtTime(float Time, bool bClampToEnds); // Function Paper2D.PaperFlipbook.GetKeyFrameIndexAtTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0xC, 0x7FF774963630
};

// Class Paper2D.PaperFlipbookActor
// Size : 0x228 (Inherited : 0x220)
struct APaperFlipbookActor : AActor {
	struct UPaperFlipbookComponent* RenderComponent; // 0x220(0x8)
};

// Class Paper2D.PaperFlipbookComponent
// Size : 0x480 (Inherited : 0x430)
struct UPaperFlipbookComponent : UMeshComponent {
	struct UPaperFlipbook* SourceFlipbook; // 0x430(0x8)
	struct UMaterialInterface* Material; // 0x438(0x8)
	float PlayRate; // 0x440(0x4)
	unsigned char bLooping : 1; // 0x444(0x1)
	unsigned char bReversePlayback : 1; // 0x444(0x1)
	unsigned char bPlaying : 1; // 0x444(0x1)
	unsigned char UnknownData_444_3 : 5; // 0x444(0x1)
	unsigned char UnknownData_445[0x0003]; // 0x445(0x3)
	float AccumulatedTime; // 0x448(0x4)
	int32_t CachedFrameIndex; // 0x44C(0x4)
	struct FLinearColor SpriteColor; // 0x450(0x10)
	struct UBodySetup* CachedBodySetup; // 0x460(0x8)
	struct FMulticastInlineDelegate OnFinishedPlaying; // 0x468(0x10)
	unsigned char UnknownData_478[0x0008]; // 0x478(0x8)

	void Stop(); // Function Paper2D.PaperFlipbookComponent.Stop // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF774965530
	void SetSpriteColor(struct FLinearColor NewColor); // Function Paper2D.PaperFlipbookComponent.SetSpriteColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF774965140
	void SetPlayRate(float NewRate); // Function Paper2D.PaperFlipbookComponent.SetPlayRate // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774964F30
	void SetPlaybackPositionInFrames(int32_t NewFramePosition, bool bFireEvents); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPositionInFrames // (Final|Native|Public|BlueprintCallable) // Param Size : 0x5, 0x7FF774965080
	void SetPlaybackPosition(float NewPosition, bool bFireEvents); // Function Paper2D.PaperFlipbookComponent.SetPlaybackPosition // (Final|Native|Public|BlueprintCallable) // Param Size : 0x5, 0x7FF774964FB0
	void SetNewTime(float NewTime); // Function Paper2D.PaperFlipbookComponent.SetNewTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774964EB0
	void SetLooping(bool bNewLooping); // Function Paper2D.PaperFlipbookComponent.SetLooping // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774964E20
	bool SetFlipbook(struct UPaperFlipbook* NewFlipbook); // Function Paper2D.PaperFlipbookComponent.SetFlipbook // (Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF774964A90
	void ReverseFromEnd(); // Function Paper2D.PaperFlipbookComponent.ReverseFromEnd // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF7749649A0
	void Reverse(); // Function Paper2D.PaperFlipbookComponent.Reverse // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF774964980
	void PlayFromStart(); // Function Paper2D.PaperFlipbookComponent.PlayFromStart // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF7749647E0
	void Play(); // Function Paper2D.PaperFlipbookComponent.Play // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF7749647C0
	void OnRep_SourceFlipbook(struct UPaperFlipbook* OldFlipbook); // Function Paper2D.PaperFlipbookComponent.OnRep_SourceFlipbook // (Final|Native|Protected) // Param Size : 0x8, 0x7FF774964710
	bool IsReversing(); // Function Paper2D.PaperFlipbookComponent.IsReversing // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF7749642E0
	bool IsPlaying(); // Function Paper2D.PaperFlipbookComponent.IsPlaying // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF7749642B0
	bool IsLooping(); // Function Paper2D.PaperFlipbookComponent.IsLooping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF774964280
	float GetPlayRate(); // Function Paper2D.PaperFlipbookComponent.GetPlayRate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774963930
	int32_t GetPlaybackPositionInFrames(); // Function Paper2D.PaperFlipbookComponent.GetPlaybackPositionInFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774963990
	float GetPlaybackPosition(); // Function Paper2D.PaperFlipbookComponent.GetPlaybackPosition // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774963960
	int32_t GetFlipbookLengthInFrames(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookLengthInFrames // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774963470
	float GetFlipbookLength(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookLength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774963440
	float GetFlipbookFramerate(); // Function Paper2D.PaperFlipbookComponent.GetFlipbookFramerate // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774963410
	struct UPaperFlipbook* GetFlipbook(); // Function Paper2D.PaperFlipbookComponent.GetFlipbook // (Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x8, 0x7FF7749633E0
};

// Class Paper2D.PaperGroupedSpriteActor
// Size : 0x228 (Inherited : 0x220)
struct APaperGroupedSpriteActor : AActor {
	struct UPaperGroupedSpriteComponent* RenderComponent; // 0x220(0x8)
};

// Class Paper2D.PaperGroupedSpriteComponent
// Size : 0x460 (Inherited : 0x430)
struct UPaperGroupedSpriteComponent : UMeshComponent {
	struct TArray<struct UMaterialInterface*> InstanceMaterials; // 0x430(0x10)
	struct TArray<struct FSpriteInstanceData> PerInstanceSpriteData; // 0x440(0x10)
	unsigned char UnknownData_450[0x0010]; // 0x450(0x10)

	bool UpdateInstanceTransform(int32_t InstanceIndex, struct FTransform NewInstanceTransform, bool bWorldSpace, bool bMarkRenderStateDirty, bool bTeleport); // Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceTransform // (Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x44, 0x7FF774965660
	bool UpdateInstanceColor(int32_t InstanceIndex, struct FLinearColor NewInstanceColor, bool bMarkRenderStateDirty); // Function Paper2D.PaperGroupedSpriteComponent.UpdateInstanceColor // (Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x16, 0x7FF774965550
	void SortInstancesAlongAxis(struct FVector WorldSpaceSortAxis); // Function Paper2D.PaperGroupedSpriteComponent.SortInstancesAlongAxis // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0xC, 0x7FF7749654A0
	bool RemoveInstance(int32_t InstanceIndex); // Function Paper2D.PaperGroupedSpriteComponent.RemoveInstance // (Native|Public|BlueprintCallable) // Param Size : 0x5, 0x7FF774964820
	bool GetInstanceTransform(int32_t InstanceIndex, struct FTransform OutInstanceTransform, bool bWorldSpace); // Function Paper2D.PaperGroupedSpriteComponent.GetInstanceTransform // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x42, 0x7FF7749634D0
	int32_t GetInstanceCount(); // Function Paper2D.PaperGroupedSpriteComponent.GetInstanceCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF7749634A0
	void ClearInstances(); // Function Paper2D.PaperGroupedSpriteComponent.ClearInstances // (Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF774963210
	int32_t AddInstance(struct FTransform Transform, struct UPaperSprite* Sprite, bool bWorldSpace, struct FLinearColor Color); // Function Paper2D.PaperGroupedSpriteComponent.AddInstance // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x50, 0x7FF774962E00
};

// Class Paper2D.PaperRuntimeSettings
// Size : 0x30 (Inherited : 0x28)
struct UPaperRuntimeSettings : UObject {
	bool bEnableSpriteAtlasGroups; // 0x28(0x1)
	bool bEnableTerrainSplineEditing; // 0x29(0x1)
	bool bResizeSpriteDataToMatchTextures; // 0x2A(0x1)
	unsigned char UnknownData_2B[0x0005]; // 0x2B(0x5)
};

// Class Paper2D.PaperSprite
// Size : 0xA8 (Inherited : 0x28)
struct UPaperSprite : UObject {
	unsigned char UnknownData_28[0x0010]; // 0x28(0x10)
	struct TArray<struct UTexture*> AdditionalSourceTextures; // 0x38(0x10)
	struct FVector2D BakedSourceUV; // 0x48(0x8)
	struct FVector2D BakedSourceDimension; // 0x50(0x8)
	struct UTexture2D* BakedSourceTexture; // 0x58(0x8)
	struct UMaterialInterface* DefaultMaterial; // 0x60(0x8)
	struct UMaterialInterface* AlternateMaterial; // 0x68(0x8)
	struct TArray<struct FPaperSpriteSocket> Sockets; // 0x70(0x10)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x80(0x1)
	unsigned char UnknownData_81[0x0003]; // 0x81(0x3)
	float PixelsPerUnrealUnit; // 0x84(0x4)
	struct UBodySetup* BodySetup; // 0x88(0x8)
	int32_t AlternateMaterialSplitIndex; // 0x90(0x4)
	unsigned char UnknownData_94[0x0004]; // 0x94(0x4)
	struct TArray<struct FVector4> BakedRenderData; // 0x98(0x10)
};

// Class Paper2D.PaperSpriteActor
// Size : 0x228 (Inherited : 0x220)
struct APaperSpriteActor : AActor {
	struct UPaperSpriteComponent* RenderComponent; // 0x220(0x8)
};

// Class Paper2D.PaperSpriteAtlas
// Size : 0x28 (Inherited : 0x28)
struct UPaperSpriteAtlas : UObject {
};

// Class Paper2D.PaperSpriteBlueprintLibrary
// Size : 0x28 (Inherited : 0x28)
struct UPaperSpriteBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FSlateBrush MakeBrushFromSprite(struct UPaperSprite* Sprite, int32_t Width, int32_t Height); // Function Paper2D.PaperSpriteBlueprintLibrary.MakeBrushFromSprite // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x98, 0x7FF7749643B0
};

// Class Paper2D.PaperSpriteComponent
// Size : 0x450 (Inherited : 0x430)
struct UPaperSpriteComponent : UMeshComponent {
	struct UPaperSprite* SourceSprite; // 0x430(0x8)
	struct UMaterialInterface* MaterialOverride; // 0x438(0x8)
	struct FLinearColor SpriteColor; // 0x440(0x10)

	void SetSpriteColor(struct FLinearColor NewColor); // Function Paper2D.PaperSpriteComponent.SetSpriteColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF7749651C0
	bool SetSprite(struct UPaperSprite* NewSprite); // Function Paper2D.PaperSpriteComponent.SetSprite // (Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF774964A90
	struct UPaperSprite* GetSprite(); // Function Paper2D.PaperSpriteComponent.GetSprite // (Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x8, 0x7FF7749633E0
};

// Class Paper2D.PaperTerrainActor
// Size : 0x238 (Inherited : 0x220)
struct APaperTerrainActor : AActor {
	struct USceneComponent* DummyRoot; // 0x220(0x8)
	struct UPaperTerrainSplineComponent* SplineComponent; // 0x228(0x8)
	struct UPaperTerrainComponent* RenderComponent; // 0x230(0x8)
};

// Class Paper2D.PaperTerrainComponent
// Size : 0x460 (Inherited : 0x410)
struct UPaperTerrainComponent : UPrimitiveComponent {
	struct UPaperTerrainMaterial* TerrainMaterial; // 0x408(0x8)
	bool bClosedSpline; // 0x410(0x1)
	bool bFilledSpline; // 0x411(0x1)
	struct UPaperTerrainSplineComponent* AssociatedSpline; // 0x418(0x8)
	int32_t RandomSeed; // 0x420(0x4)
	float SegmentOverlapAmount; // 0x424(0x4)
	struct FLinearColor TerrainColor; // 0x428(0x10)
	int32_t ReparamStepsPerSegment; // 0x438(0x4)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x43C(0x1)
	unsigned char UnknownData_43F[0x0001]; // 0x43F(0x1)
	float CollisionThickness; // 0x440(0x4)
	unsigned char UnknownData_444[0x0004]; // 0x444(0x4)
	struct UBodySetup* CachedBodySetup; // 0x448(0x8)
	unsigned char UnknownData_450[0x0010]; // 0x450(0x10)

	void SetTerrainColor(struct FLinearColor NewColor); // Function Paper2D.PaperTerrainComponent.SetTerrainColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF774965240
};

// Class Paper2D.PaperTerrainMaterial
// Size : 0x48 (Inherited : 0x30)
struct UPaperTerrainMaterial : UDataAsset {
	struct TArray<struct FPaperTerrainMaterialRule> Rules; // 0x30(0x10)
	struct UPaperSprite* InteriorFill; // 0x40(0x8)
};

// Class Paper2D.PaperTerrainSplineComponent
// Size : 0x510 (Inherited : 0x500)
struct UPaperTerrainSplineComponent : USplineComponent {
	unsigned char UnknownData_500[0x0010]; // 0x500(0x10)
};

// Class Paper2D.PaperTileLayer
// Size : 0x98 (Inherited : 0x28)
struct UPaperTileLayer : UObject {
	struct FText LayerName; // 0x28(0x18)
	int32_t LayerWidth; // 0x40(0x4)
	int32_t LayerHeight; // 0x44(0x4)
	unsigned char bHiddenInGame : 1; // 0x48(0x1)
	unsigned char bLayerCollides : 1; // 0x48(0x1)
	unsigned char bOverrideCollisionThickness : 1; // 0x48(0x1)
	unsigned char bOverrideCollisionOffset : 1; // 0x48(0x1)
	unsigned char UnknownData_48_4 : 4; // 0x48(0x1)
	unsigned char UnknownData_49[0x0003]; // 0x49(0x3)
	float CollisionThicknessOverride; // 0x4C(0x4)
	float CollisionOffsetOverride; // 0x50(0x4)
	struct FLinearColor LayerColor; // 0x54(0x10)
	int32_t AllocatedWidth; // 0x64(0x4)
	int32_t AllocatedHeight; // 0x68(0x4)
	unsigned char UnknownData_6C[0x0004]; // 0x6C(0x4)
	struct TArray<struct FPaperTileInfo> AllocatedCells; // 0x70(0x10)
	struct UPaperTileSet* TileSet; // 0x80(0x8)
	struct TArray<int32_t> AllocatedGrid; // 0x88(0x10)
};

// Class Paper2D.PaperTileMap
// Size : 0xA8 (Inherited : 0x28)
struct UPaperTileMap : UObject {
	int32_t MapWidth; // 0x28(0x4)
	int32_t MapHeight; // 0x2C(0x4)
	int32_t TileWidth; // 0x30(0x4)
	int32_t TileHeight; // 0x34(0x4)
	float PixelsPerUnrealUnit; // 0x38(0x4)
	float SeparationPerTileX; // 0x3C(0x4)
	float SeparationPerTileY; // 0x40(0x4)
	float SeparationPerLayer; // 0x44(0x4)
	struct TSoftObjectPtr<struct UPaperTileSet> SelectedTileSet; // 0x48(0x28)
	struct UMaterialInterface* Material; // 0x70(0x8)
	struct TArray<struct UPaperTileLayer*> TileLayers; // 0x78(0x10)
	float CollisionThickness; // 0x88(0x4)
	enum class ESpriteCollisionMode SpriteCollisionDomain; // 0x8C(0x1)
	enum class ETileMapProjectionMode ProjectionMode; // 0x8D(0x1)
	unsigned char UnknownData_8E[0x0002]; // 0x8E(0x2)
	int32_t HexSideLength; // 0x90(0x4)
	unsigned char UnknownData_94[0x0004]; // 0x94(0x4)
	struct UBodySetup* BodySetup; // 0x98(0x8)
	int32_t LayerNameIndex; // 0xA0(0x4)
	unsigned char UnknownData_A4[0x0004]; // 0xA4(0x4)
};

// Class Paper2D.PaperTileMapActor
// Size : 0x228 (Inherited : 0x220)
struct APaperTileMapActor : AActor {
	struct UPaperTileMapComponent* RenderComponent; // 0x220(0x8)
};

// Class Paper2D.PaperTileMapComponent
// Size : 0x480 (Inherited : 0x430)
struct UPaperTileMapComponent : UMeshComponent {
	int32_t MapWidth; // 0x430(0x4)
	int32_t MapHeight; // 0x434(0x4)
	int32_t TileWidth; // 0x438(0x4)
	int32_t TileHeight; // 0x43C(0x4)
	struct UPaperTileSet* DefaultLayerTileSet; // 0x440(0x8)
	struct UMaterialInterface* Material; // 0x448(0x8)
	struct TArray<struct UPaperTileLayer*> TileLayers; // 0x450(0x10)
	struct FLinearColor TileMapColor; // 0x460(0x10)
	int32_t UseSingleLayerIndex; // 0x470(0x4)
	bool bUseSingleLayer; // 0x474(0x1)
	unsigned char UnknownData_475[0x0003]; // 0x475(0x3)
	struct UPaperTileMap* TileMap; // 0x478(0x8)

	void SetTileMapColor(struct FLinearColor NewColor); // Function Paper2D.PaperTileMapComponent.SetTileMapColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF774965420
	bool SetTileMap(struct UPaperTileMap* NewTileMap); // Function Paper2D.PaperTileMapComponent.SetTileMap // (Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF774964A90
	void SetTile(int32_t X, int32_t Y, int32_t Layer, struct FPaperTileInfo NewValue); // Function Paper2D.PaperTileMapComponent.SetTile // (Final|Native|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF7749652C0
	void SetLayerColor(struct FLinearColor NewColor, int32_t Layer); // Function Paper2D.PaperTileMapComponent.SetLayerColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x14, 0x7FF774964D50
	void SetLayerCollision(int32_t Layer, bool bHasCollision, bool bOverrideThickness, float CustomThickness, bool bOverrideOffset, float CustomOffset, bool bRebuildCollision); // Function Paper2D.PaperTileMapComponent.SetLayerCollision // (Final|Native|Public|BlueprintCallable) // Param Size : 0x15, 0x7FF774964B30
	void SetDefaultCollisionThickness(float Thickness, bool bRebuildCollision); // Function Paper2D.PaperTileMapComponent.SetDefaultCollisionThickness // (Final|Native|Public|BlueprintCallable) // Param Size : 0x5, 0x7FF7749649C0
	void ResizeMap(int32_t NewWidthInTiles, int32_t NewHeightInTiles); // Function Paper2D.PaperTileMapComponent.ResizeMap // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF7749648C0
	void RebuildCollision(); // Function Paper2D.PaperTileMapComponent.RebuildCollision // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF774964800
	bool OwnsTileMap(); // Function Paper2D.PaperTileMapComponent.OwnsTileMap // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF774964790
	void MakeTileMapEditable(); // Function Paper2D.PaperTileMapComponent.MakeTileMapEditable // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF7749646F0
	void GetTilePolygon(int32_t TileX, int32_t TileY, struct TArray<struct FVector> Points, int32_t LayerIndex, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTilePolygon // (Final|Native|Public|HasOutParms|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1D, 0x7FF774963F30
	struct FLinearColor GetTileMapColor(); // Function Paper2D.PaperTileMapComponent.GetTileMapColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF774963EF0
	struct FVector GetTileCornerPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTileCornerPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1C, 0x7FF774963D90
	struct FVector GetTileCenterPosition(int32_t TileX, int32_t TileY, int32_t LayerIndex, bool bWorldSpace); // Function Paper2D.PaperTileMapComponent.GetTileCenterPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1C, 0x7FF774963C30
	struct FPaperTileInfo GetTile(int32_t X, int32_t Y, int32_t Layer); // Function Paper2D.PaperTileMapComponent.GetTile // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x20, 0x7FF774963B20
	void GetMapSize(int32_t MapWidth, int32_t MapHeight, int32_t NumLayers); // Function Paper2D.PaperTileMapComponent.GetMapSize // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0xC, 0x7FF7749637A0
	struct FLinearColor GetLayerColor(int32_t Layer); // Function Paper2D.PaperTileMapComponent.GetLayerColor // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x14, 0x7FF774963700
	void CreateNewTileMap(int32_t MapWidth, int32_t MapHeight, int32_t TileWidth, int32_t TileHeight, float PixelsPerUnrealUnit, bool bCreateLayer); // Function Paper2D.PaperTileMapComponent.CreateNewTileMap // (Final|Native|Public|BlueprintCallable) // Param Size : 0x15, 0x7FF774963230
	struct UPaperTileLayer* AddNewLayer(); // Function Paper2D.PaperTileMapComponent.AddNewLayer // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774962FC0
};

// Class Paper2D.PaperTileSet
// Size : 0xA8 (Inherited : 0x28)
struct UPaperTileSet : UObject {
	struct FIntPoint TileSize; // 0x28(0x8)
	struct UTexture2D* TileSheet; // 0x30(0x8)
	struct TArray<struct UTexture*> AdditionalSourceTextures; // 0x38(0x10)
	struct FIntMargin BorderMargin; // 0x48(0x10)
	struct FIntPoint PerTileSpacing; // 0x58(0x8)
	struct FIntPoint DrawingOffset; // 0x60(0x8)
	int32_t WidthInTiles; // 0x68(0x4)
	int32_t HeightInTiles; // 0x6C(0x4)
	int32_t AllocatedWidth; // 0x70(0x4)
	int32_t AllocatedHeight; // 0x74(0x4)
	struct TArray<struct FPaperTileMetadata> PerTileData; // 0x78(0x10)
	struct TArray<struct FPaperTileSetTerrain> Terrains; // 0x88(0x10)
	int32_t TileWidth; // 0x98(0x4)
	int32_t TileHeight; // 0x9C(0x4)
	int32_t Margin; // 0xA0(0x4)
	int32_t Spacing; // 0xA4(0x4)
};

// Class Paper2D.TileMapBlueprintLibrary
// Size : 0x28 (Inherited : 0x28)
struct UTileMapBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FPaperTileInfo MakeTile(int32_t TileIndex, struct UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD); // Function Paper2D.TileMapBlueprintLibrary.MakeTile // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x28, 0x7FF774964540
	struct FName GetTileUserData(struct FPaperTileInfo Tile); // Function Paper2D.TileMapBlueprintLibrary.GetTileUserData // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x18, 0x7FF7749641B0
	struct FTransform GetTileTransform(struct FPaperTileInfo Tile); // Function Paper2D.TileMapBlueprintLibrary.GetTileTransform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x40, 0x7FF7749640E0
	void BreakTile(struct FPaperTileInfo Tile, int32_t TileIndex, struct UPaperTileSet* TileSet, bool bFlipH, bool bFlipV, bool bFlipD); // Function Paper2D.TileMapBlueprintLibrary.BreakTile // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x23, 0x7FF774962FF0
};

