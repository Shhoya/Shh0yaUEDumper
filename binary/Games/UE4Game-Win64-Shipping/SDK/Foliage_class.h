// Class Foliage.FoliageInstancedStaticMeshComponent
// Size : 0x660 (Inherited : 0x630)
struct UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent {
	struct FMulticastInlineDelegate OnInstanceTakePointDamage; // 0x630(0x10)
	struct FMulticastInlineDelegate OnInstanceTakeRadialDamage; // 0x640(0x10)
	struct FGuid GenerationGuid; // 0x650(0x10)
};

// Class Foliage.FoliageStatistics
// Size : 0x28 (Inherited : 0x28)
struct UFoliageStatistics : UBlueprintFunctionLibrary {

	int32_t FoliageOverlappingSphereCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FVector CenterPosition, float Radius); // Function Foliage.FoliageStatistics.FoliageOverlappingSphereCount // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x24, 0x7FF775DA8B50
	int32_t FoliageOverlappingBoxCount(struct UObject* WorldContextObject, struct UStaticMesh* StaticMesh, struct FBox Box); // Function Foliage.FoliageStatistics.FoliageOverlappingBoxCount // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x30, 0x7FF775DA8A30
};

// Class Foliage.FoliageType
// Size : 0x380 (Inherited : 0x28)
struct UFoliageType : UObject {
	struct FGuid UpdateGuid; // 0x28(0x10)
	float Density; // 0x38(0x4)
	float DensityAdjustmentFactor; // 0x3C(0x4)
	float Radius; // 0x40(0x4)
	bool bSingleInstanceModeOverrideRadius; // 0x44(0x1)
	unsigned char UnknownData_45[0x0003]; // 0x45(0x3)
	float SingleInstanceModeRadius; // 0x48(0x4)
	enum class EFoliageScaling Scaling; // 0x4C(0x1)
	unsigned char UnknownData_4D[0x0003]; // 0x4D(0x3)
	struct FFloatInterval ScaleX; // 0x50(0x8)
	struct FFloatInterval ScaleY; // 0x58(0x8)
	struct FFloatInterval ScaleZ; // 0x60(0x8)
	struct FFoliageVertexColorChannelMask VertexColorMaskByChannel[4]; // 0x68(0x30)
	enum class FoliageVertexColorMask VertexColorMask; // 0x98(0x1)
	unsigned char UnknownData_99[0x0003]; // 0x99(0x3)
	float VertexColorMaskThreshold; // 0x9C(0x4)
	unsigned char VertexColorMaskInvert : 1; // 0xA0(0x1)
	unsigned char UnknownData_A0_1 : 7; // 0xA0(0x1)
	unsigned char UnknownData_A1[0x0003]; // 0xA1(0x3)
	struct FFloatInterval ZOffset; // 0xA4(0x8)
	unsigned char AlignToNormal : 1; // 0xAC(0x1)
	unsigned char UnknownData_AC_1 : 7; // 0xAC(0x1)
	unsigned char UnknownData_AD[0x0003]; // 0xAD(0x3)
	float AlignMaxAngle; // 0xB0(0x4)
	unsigned char RandomYaw : 1; // 0xB4(0x1)
	unsigned char UnknownData_B4_1 : 7; // 0xB4(0x1)
	unsigned char UnknownData_B5[0x0003]; // 0xB5(0x3)
	float RandomPitchAngle; // 0xB8(0x4)
	struct FFloatInterval GroundSlopeAngle; // 0xBC(0x8)
	struct FFloatInterval Height; // 0xC4(0x8)
	unsigned char UnknownData_CC[0x0004]; // 0xCC(0x4)
	struct TArray<struct FName> LandscapeLayers; // 0xD0(0x10)
	float MinimumLayerWeight; // 0xE0(0x4)
	unsigned char UnknownData_E4[0x0004]; // 0xE4(0x4)
	struct TArray<struct FName> ExclusionLandscapeLayers; // 0xE8(0x10)
	float MinimumExclusionLayerWeight; // 0xF8(0x4)
	struct FName LandscapeLayer; // 0xFC(0x8)
	unsigned char CollisionWithWorld : 1; // 0x104(0x1)
	unsigned char UnknownData_104_1 : 7; // 0x104(0x1)
	unsigned char UnknownData_105[0x0003]; // 0x105(0x3)
	struct FVector CollisionScale; // 0x108(0xC)
	struct FBoxSphereBounds MeshBounds; // 0x114(0x1C)
	struct FVector LowBoundOriginRadius; // 0x130(0xC)
	enum class EComponentMobility Mobility; // 0x13C(0x1)
	unsigned char UnknownData_13D[0x0003]; // 0x13D(0x3)
	struct FInt32Interval CullDistance; // 0x140(0x8)
	unsigned char bEnableStaticLighting : 1; // 0x148(0x1)
	unsigned char CastShadow : 1; // 0x148(0x1)
	unsigned char bAffectDynamicIndirectLighting : 1; // 0x148(0x1)
	unsigned char bAffectDistanceFieldLighting : 1; // 0x148(0x1)
	unsigned char bCastDynamicShadow : 1; // 0x148(0x1)
	unsigned char bCastStaticShadow : 1; // 0x148(0x1)
	unsigned char bCastShadowAsTwoSided : 1; // 0x148(0x1)
	unsigned char bReceivesDecals : 1; // 0x148(0x1)
	unsigned char bOverrideLightMapRes : 1; // 0x149(0x1)
	unsigned char UnknownData_149_1 : 7; // 0x149(0x1)
	unsigned char UnknownData_14A[0x0002]; // 0x14A(0x2)
	int32_t OverriddenLightMapRes; // 0x14C(0x4)
	enum class ELightmapType LightmapType; // 0x150(0x1)
	unsigned char UnknownData_151[0x0003]; // 0x151(0x3)
	unsigned char bUseAsOccluder : 1; // 0x154(0x1)
	unsigned char UnknownData_154_1 : 7; // 0x154(0x1)
	unsigned char UnknownData_155[0x0003]; // 0x155(0x3)
	struct FBodyInstance BodyInstance; // 0x158(0x130)
	enum class EHasCustomNavigableGeometry CustomNavigableGeometry; // 0x288(0x1)
	struct FLightingChannels LightingChannels; // 0x289(0x1)
	unsigned char UnknownData_28A[0x0002]; // 0x28A(0x2)
	unsigned char bRenderCustomDepth : 1; // 0x28C(0x1)
	unsigned char UnknownData_28C_1 : 7; // 0x28C(0x1)
	unsigned char UnknownData_28D[0x0003]; // 0x28D(0x3)
	int32_t CustomDepthStencilValue; // 0x290(0x4)
	int32_t TranslucencySortPriority; // 0x294(0x4)
	float CollisionRadius; // 0x298(0x4)
	float ShadeRadius; // 0x29C(0x4)
	int32_t NumSteps; // 0x2A0(0x4)
	float InitialSeedDensity; // 0x2A4(0x4)
	float AverageSpreadDistance; // 0x2A8(0x4)
	float SpreadVariance; // 0x2AC(0x4)
	int32_t SeedsPerStep; // 0x2B0(0x4)
	int32_t DistributionSeed; // 0x2B4(0x4)
	float MaxInitialSeedOffset; // 0x2B8(0x4)
	bool bCanGrowInShade; // 0x2BC(0x1)
	bool bSpawnsInShade; // 0x2BD(0x1)
	unsigned char UnknownData_2BE[0x0002]; // 0x2BE(0x2)
	float MaxInitialAge; // 0x2C0(0x4)
	float MaxAge; // 0x2C4(0x4)
	float OverlapPriority; // 0x2C8(0x4)
	struct FFloatInterval ProceduralScale; // 0x2CC(0x8)
	unsigned char UnknownData_2D4[0x0004]; // 0x2D4(0x4)
	struct FRuntimeFloatCurve ScaleCurve; // 0x2D8(0x88)
	int32_t ChangeCount; // 0x360(0x4)
	unsigned char ReapplyDensity : 1; // 0x364(0x1)
	unsigned char ReapplyRadius : 1; // 0x364(0x1)
	unsigned char ReapplyAlignToNormal : 1; // 0x364(0x1)
	unsigned char ReapplyRandomYaw : 1; // 0x364(0x1)
	unsigned char ReapplyScaling : 1; // 0x364(0x1)
	unsigned char ReapplyScaleX : 1; // 0x364(0x1)
	unsigned char ReapplyScaleY : 1; // 0x364(0x1)
	unsigned char ReapplyScaleZ : 1; // 0x364(0x1)
	unsigned char ReapplyRandomPitchAngle : 1; // 0x365(0x1)
	unsigned char ReapplyGroundSlope : 1; // 0x365(0x1)
	unsigned char ReapplyHeight : 1; // 0x365(0x1)
	unsigned char ReapplyLandscapeLayers : 1; // 0x365(0x1)
	unsigned char ReapplyZOffset : 1; // 0x365(0x1)
	unsigned char ReapplyCollisionWithWorld : 1; // 0x365(0x1)
	unsigned char ReapplyVertexColorMask : 1; // 0x365(0x1)
	unsigned char bEnableDensityScaling : 1; // 0x365(0x1)
	unsigned char UnknownData_366[0x0002]; // 0x366(0x2)
	struct TArray<struct URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x368(0x10)
	int32_t VirtualTextureCullMips; // 0x378(0x4)
	enum class ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x37C(0x1)
	unsigned char UnknownData_37D[0x0003]; // 0x37D(0x3)
};

// Class Foliage.FoliageType_Actor
// Size : 0x390 (Inherited : 0x380)
struct UFoliageType_Actor : UFoliageType {
	class AActor* ActorClass; // 0x380(0x8)
	bool bShouldAttachToBaseComponent; // 0x388(0x1)
	unsigned char UnknownData_389[0x0007]; // 0x389(0x7)
};

// Class Foliage.FoliageType_InstancedStaticMesh
// Size : 0x3A0 (Inherited : 0x380)
struct UFoliageType_InstancedStaticMesh : UFoliageType {
	struct UStaticMesh* Mesh; // 0x380(0x8)
	struct TArray<struct UMaterialInterface*> OverrideMaterials; // 0x388(0x10)
	class UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x398(0x8)
};

// Class Foliage.InstancedFoliageActor
// Size : 0x270 (Inherited : 0x220)
struct AInstancedFoliageActor : AActor {
	unsigned char UnknownData_220[0x0050]; // 0x220(0x50)
};

// Class Foliage.InteractiveFoliageActor
// Size : 0x290 (Inherited : 0x230)
struct AInteractiveFoliageActor : AStaticMeshActor {
	struct UCapsuleComponent* CapsuleComponent; // 0x230(0x8)
	struct FVector TouchingActorEntryPosition; // 0x238(0xC)
	struct FVector FoliageVelocity; // 0x244(0xC)
	struct FVector FoliageForce; // 0x250(0xC)
	struct FVector FoliagePosition; // 0x25C(0xC)
	float FoliageDamageImpulseScale; // 0x268(0x4)
	float FoliageTouchImpulseScale; // 0x26C(0x4)
	float FoliageStiffness; // 0x270(0x4)
	float FoliageStiffnessQuadratic; // 0x274(0x4)
	float FoliageDamping; // 0x278(0x4)
	float MaxDamageImpulse; // 0x27C(0x4)
	float MaxTouchImpulse; // 0x280(0x4)
	float MaxForce; // 0x284(0x4)
	float Mass; // 0x288(0x4)
	unsigned char UnknownData_28C[0x0004]; // 0x28C(0x4)

	void CapsuleTouched(struct UPrimitiveComponent* OverlappedComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, int32_t OtherBodyIndex, bool bFromSweep, struct FHitResult OverlapInfo); // Function Foliage.InteractiveFoliageActor.CapsuleTouched // (Final|Native|Protected|HasOutParms) // Param Size : 0xA8, 0x7FF775DA8840
};

// Class Foliage.InteractiveFoliageComponent
// Size : 0x4A0 (Inherited : 0x4A0)
struct UInteractiveFoliageComponent : UStaticMeshComponent {
};

// Class Foliage.ProceduralFoliageBlockingVolume
// Size : 0x260 (Inherited : 0x258)
struct AProceduralFoliageBlockingVolume : AVolume {
	struct AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x258(0x8)
};

// Class Foliage.ProceduralFoliageComponent
// Size : 0xD8 (Inherited : 0xB0)
struct UProceduralFoliageComponent : UActorComponent {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0xB0(0x8)
	float TileOverlap; // 0xB8(0x4)
	unsigned char UnknownData_BC[0x0004]; // 0xBC(0x4)
	struct AVolume* SpawningVolume; // 0xC0(0x8)
	struct FGuid ProceduralGuid; // 0xC8(0x10)
};

// Class Foliage.ProceduralFoliageSpawner
// Size : 0x68 (Inherited : 0x28)
struct UProceduralFoliageSpawner : UObject {
	int32_t RandomSeed; // 0x28(0x4)
	float TileSize; // 0x2C(0x4)
	int32_t NumUniqueTiles; // 0x30(0x4)
	float MinimumQuadTreeSize; // 0x34(0x4)
	unsigned char UnknownData_38[0x0008]; // 0x38(0x8)
	struct TArray<struct FFoliageTypeObject> FoliageTypes; // 0x40(0x10)
	unsigned char UnknownData_50[0x0018]; // 0x50(0x18)

	void Simulate(int32_t NumSteps); // Function Foliage.ProceduralFoliageSpawner.Simulate // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775DA8CA0
};

// Class Foliage.ProceduralFoliageTile
// Size : 0x158 (Inherited : 0x28)
struct UProceduralFoliageTile : UObject {
	struct UProceduralFoliageSpawner* FoliageSpawner; // 0x28(0x8)
	unsigned char UnknownData_30[0x00A0]; // 0x30(0xA0)
	struct TArray<struct FProceduralFoliageInstance> InstancesArray; // 0xD0(0x10)
	unsigned char UnknownData_E0[0x0078]; // 0xE0(0x78)
};

// Class Foliage.ProceduralFoliageVolume
// Size : 0x260 (Inherited : 0x258)
struct AProceduralFoliageVolume : AVolume {
	struct UProceduralFoliageComponent* ProceduralComponent; // 0x258(0x8)
};

