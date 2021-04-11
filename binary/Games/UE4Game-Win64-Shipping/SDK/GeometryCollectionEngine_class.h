// Class GeometryCollectionEngine.ChaosDestructionListener
// Size : 0x420 (Inherited : 0x1F0)
struct UChaosDestructionListener : USceneComponent {
	unsigned char bIsCollisionEventListeningEnabled : 1; // 0x1F0(0x1)
	unsigned char bIsBreakingEventListeningEnabled : 1; // 0x1F0(0x1)
	unsigned char bIsTrailingEventListeningEnabled : 1; // 0x1F0(0x1)
	unsigned char UnknownData_1F0_3 : 5; // 0x1F0(0x1)
	unsigned char UnknownData_1F1[0x0003]; // 0x1F1(0x3)
	struct FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x1F4(0x18)
	struct FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x20C(0x18)
	struct FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x224(0x18)
	unsigned char UnknownData_23C[0x0004]; // 0x23C(0x4)
	struct TSet<struct AChaosSolverActor*> ChaosSolverActors; // 0x240(0x50)
	struct TSet<struct AGeometryCollectionActor*> GeometryCollectionActors; // 0x290(0x50)
	struct FMulticastInlineDelegate OnCollisionEvents; // 0x2E0(0x10)
	struct FMulticastInlineDelegate OnBreakingEvents; // 0x2F0(0x10)
	struct FMulticastInlineDelegate OnTrailingEvents; // 0x300(0x10)
	unsigned char UnknownData_310[0x0110]; // 0x310(0x110)

	void SortTrailingEvents(struct TArray<struct FChaosTrailingEventData> TrailingEvents, enum class EChaosTrailingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortTrailingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x11, 0x7FF776B2CA60
	void SortCollisionEvents(struct TArray<struct FChaosCollisionEventData> CollisionEvents, enum class EChaosCollisionSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortCollisionEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x11, 0x7FF776B2C970
	void SortBreakingEvents(struct TArray<struct FChaosBreakingEventData> BreakingEvents, enum class EChaosBreakingSortMethod SortMethod); // Function GeometryCollectionEngine.ChaosDestructionListener.SortBreakingEvents // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x11, 0x7FF776B2C880
	void SetTrailingEventRequestSettings(struct FChaosTrailingEventRequestSettings InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x18, 0x7FF776B2C7E0
	void SetTrailingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetTrailingEventEnabled // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF776B2C750
	void SetCollisionEventRequestSettings(struct FChaosCollisionEventRequestSettings InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x18, 0x7FF776B2C620
	void SetCollisionEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetCollisionEventEnabled // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF776B2C590
	void SetBreakingEventRequestSettings(struct FChaosBreakingEventRequestSettings InSettings); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventRequestSettings // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x18, 0x7FF776B2C4F0
	void SetBreakingEventEnabled(bool bIsEnabled); // Function GeometryCollectionEngine.ChaosDestructionListener.SetBreakingEventEnabled // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF776B2C460
	void RemoveGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveGeometryCollectionActor // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF776B2C3E0
	void RemoveChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.RemoveChaosSolverActor // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774980870
	bool IsEventListening(); // Function GeometryCollectionEngine.ChaosDestructionListener.IsEventListening // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF776B2C250
	void AddGeometryCollectionActor(struct AGeometryCollectionActor* GeometryCollectionActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddGeometryCollectionActor // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF776B2BF90
	void AddChaosSolverActor(struct AChaosSolverActor* ChaosSolverActor); // Function GeometryCollectionEngine.ChaosDestructionListener.AddChaosSolverActor // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774980870
};

// Class GeometryCollectionEngine.GeometryCollectionActor
// Size : 0x230 (Inherited : 0x220)
struct AGeometryCollectionActor : AActor {
	struct UGeometryCollectionComponent* GeometryCollectionComponent; // 0x220(0x8)
	struct UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x228(0x8)

	bool RaycastSingle(struct FVector Start, struct FVector End, struct FHitResult OutHit); // Function GeometryCollectionEngine.GeometryCollectionActor.RaycastSingle // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0xA1, 0x7FF776B2C280
};

// Class GeometryCollectionEngine.GeometryCollectionCache
// Size : 0x50 (Inherited : 0x28)
struct UGeometryCollectionCache : UObject {
	struct FRecordedTransformTrack RecordedData; // 0x28(0x10)
	struct UGeometryCollection* SupportedCollection; // 0x38(0x8)
	struct FGuid CompatibleCollectionState; // 0x40(0x10)
};

// Class GeometryCollectionEngine.GeometryCollectionComponent
// Size : 0x880 (Inherited : 0x430)
struct UGeometryCollectionComponent : UMeshComponent {
	unsigned char UnknownData_430[0x0008]; // 0x430(0x8)
	struct AChaosSolverActor* ChaosSolverActor; // 0x438(0x8)
	unsigned char UnknownData_440[0x00E0]; // 0x440(0xE0)
	struct UGeometryCollection* RestCollection; // 0x520(0x8)
	struct TArray<struct AFieldSystemActor*> InitializationFields; // 0x528(0x10)
	bool Simulating; // 0x538(0x1)
	unsigned char UnknownData_539[0x0007]; // 0x539(0x7)
	enum class EObjectStateTypeEnum ObjectType; // 0x540(0x1)
	bool EnableClustering; // 0x541(0x1)
	unsigned char UnknownData_542[0x0002]; // 0x542(0x2)
	int32_t ClusterGroupIndex; // 0x544(0x4)
	int32_t MaxClusterLevel; // 0x548(0x4)
	unsigned char UnknownData_54C[0x0004]; // 0x54C(0x4)
	struct TArray<float> DamageThreshold; // 0x550(0x10)
	enum class EClusterConnectionTypeEnum ClusterConnectionType; // 0x560(0x1)
	unsigned char UnknownData_561[0x0003]; // 0x561(0x3)
	int32_t CollisionGroup; // 0x564(0x4)
	float CollisionSampleFraction; // 0x568(0x4)
	float LinearEtherDrag; // 0x56C(0x4)
	float AngularEtherDrag; // 0x570(0x4)
	unsigned char UnknownData_574[0x0004]; // 0x574(0x4)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0x578(0x8)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0x580(0x1)
	unsigned char UnknownData_581[0x0003]; // 0x581(0x3)
	struct FVector InitialLinearVelocity; // 0x584(0xC)
	struct FVector InitialAngularVelocity; // 0x590(0xC)
	unsigned char UnknownData_59C[0x0004]; // 0x59C(0x4)
	struct FGeomComponentCacheParameters CacheParameters; // 0x5A0(0x50)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x5F0(0x10)
	struct FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x600(0x10)
	unsigned char UnknownData_610[0x0018]; // 0x610(0x18)
	struct FMulticastInlineDelegate OnChaosBreakEvent; // 0x628(0x10)
	float DesiredCacheTime; // 0x638(0x4)
	bool CachePlayback; // 0x63C(0x1)
	unsigned char UnknownData_63D[0x0003]; // 0x63D(0x3)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x640(0x10)
	bool bNotifyBreaks; // 0x650(0x1)
	bool bNotifyCollisions; // 0x651(0x1)
	unsigned char UnknownData_652[0x01FE]; // 0x652(0x1FE)
	struct UBodySetup* DummyBodySetup; // 0x850(0x8)
	unsigned char UnknownData_858[0x0028]; // 0x858(0x28)

	void SetNotifyBreaks(bool bNewNotifyBreaks); // Function GeometryCollectionEngine.GeometryCollectionComponent.SetNotifyBreaks // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF776B2C6C0
	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo CollisionInfo); // Function GeometryCollectionEngine.GeometryCollectionComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0x70, 0x7FF77510D9D0
	void NotifyGeometryCollectionPhysicsStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // Param Size : 0x8, 0x7FF77510D9D0
	void NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature(struct UGeometryCollectionComponent* FracturedComponent); // DelegateFunction GeometryCollectionEngine.GeometryCollectionComponent.NotifyGeometryCollectionPhysicsLoadingStateChange__DelegateSignature // (MulticastDelegate|Public|Delegate) // Param Size : 0x8, 0x7FF77510D9D0
	void ApplyPhysicsField(bool Enabled, enum class EGeometryCollectionPhysicsTypeEnum Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyPhysicsField // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF776B2C0E0
	void ApplyKinematicField(float Radius, struct FVector Position); // Function GeometryCollectionEngine.GeometryCollectionComponent.ApplyKinematicField // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF776B2C010
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawActor
// Size : 0x308 (Inherited : 0x220)
struct AGeometryCollectionDebugDrawActor : AActor {
	struct FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x220(0x1)
	unsigned char UnknownData_221[0x0007]; // 0x221(0x7)
	struct FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x228(0x18)
	bool bDebugDrawWholeCollection; // 0x240(0x1)
	bool bDebugDrawHierarchy; // 0x241(0x1)
	bool bDebugDrawClustering; // 0x242(0x1)
	enum class EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x243(0x1)
	bool bShowRigidBodyId; // 0x244(0x1)
	bool bShowRigidBodyCollision; // 0x245(0x1)
	bool bCollisionAtOrigin; // 0x246(0x1)
	bool bShowRigidBodyTransform; // 0x247(0x1)
	bool bShowRigidBodyInertia; // 0x248(0x1)
	bool bShowRigidBodyVelocity; // 0x249(0x1)
	bool bShowRigidBodyForce; // 0x24A(0x1)
	bool bShowRigidBodyInfos; // 0x24B(0x1)
	bool bShowTransformIndex; // 0x24C(0x1)
	bool bShowTransform; // 0x24D(0x1)
	bool bShowParent; // 0x24E(0x1)
	bool bShowLevel; // 0x24F(0x1)
	bool bShowConnectivityEdges; // 0x250(0x1)
	bool bShowGeometryIndex; // 0x251(0x1)
	bool bShowGeometryTransform; // 0x252(0x1)
	bool bShowBoundingBox; // 0x253(0x1)
	bool bShowFaces; // 0x254(0x1)
	bool bShowFaceIndices; // 0x255(0x1)
	bool bShowFaceNormals; // 0x256(0x1)
	bool bShowSingleFace; // 0x257(0x1)
	int32_t SingleFaceIndex; // 0x258(0x4)
	bool bShowVertices; // 0x25C(0x1)
	bool bShowVertexIndices; // 0x25D(0x1)
	bool bShowVertexNormals; // 0x25E(0x1)
	bool bUseActiveVisualization; // 0x25F(0x1)
	float PointThickness; // 0x260(0x4)
	float LineThickness; // 0x264(0x4)
	bool bTextShadow; // 0x268(0x1)
	unsigned char UnknownData_269[0x0003]; // 0x269(0x3)
	float TextScale; // 0x26C(0x4)
	float NormalScale; // 0x270(0x4)
	float AxisScale; // 0x274(0x4)
	float ArrowScale; // 0x278(0x4)
	struct FColor RigidBodyIdColor; // 0x27C(0x4)
	float RigidBodyTransformScale; // 0x280(0x4)
	struct FColor RigidBodyCollisionColor; // 0x284(0x4)
	struct FColor RigidBodyInertiaColor; // 0x288(0x4)
	struct FColor RigidBodyVelocityColor; // 0x28C(0x4)
	struct FColor RigidBodyForceColor; // 0x290(0x4)
	struct FColor RigidBodyInfoColor; // 0x294(0x4)
	struct FColor TransformIndexColor; // 0x298(0x4)
	float TransformScale; // 0x29C(0x4)
	struct FColor LevelColor; // 0x2A0(0x4)
	struct FColor ParentColor; // 0x2A4(0x4)
	float ConnectivityEdgeThickness; // 0x2A8(0x4)
	struct FColor GeometryIndexColor; // 0x2AC(0x4)
	float GeometryTransformScale; // 0x2B0(0x4)
	struct FColor BoundingBoxColor; // 0x2B4(0x4)
	struct FColor FaceColor; // 0x2B8(0x4)
	struct FColor FaceIndexColor; // 0x2BC(0x4)
	struct FColor FaceNormalColor; // 0x2C0(0x4)
	struct FColor SingleFaceColor; // 0x2C4(0x4)
	struct FColor VertexColor; // 0x2C8(0x4)
	struct FColor VertexIndexColor; // 0x2CC(0x4)
	struct FColor VertexNormalColor; // 0x2D0(0x4)
	unsigned char UnknownData_2D4[0x0004]; // 0x2D4(0x4)
	struct UBillboardComponent* SpriteComponent; // 0x2D8(0x8)
	unsigned char UnknownData_2E0[0x0028]; // 0x2E0(0x28)
};

// Class GeometryCollectionEngine.GeometryCollectionDebugDrawComponent
// Size : 0xC8 (Inherited : 0xB0)
struct UGeometryCollectionDebugDrawComponent : UActorComponent {
	struct AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xB0(0x8)
	struct AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xB8(0x8)
	unsigned char UnknownData_C0[0x0008]; // 0xC0(0x8)
};

// Class GeometryCollectionEngine.GeometryCollection
// Size : 0xD0 (Inherited : 0x28)
struct UGeometryCollection : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
	struct TArray<struct UMaterialInterface*> Materials; // 0x30(0x10)
	enum class ECollisionTypeEnum CollisionType; // 0x40(0x1)
	enum class EImplicitTypeEnum ImplicitType; // 0x41(0x1)
	unsigned char UnknownData_42[0x0002]; // 0x42(0x2)
	int32_t MinLevelSetResolution; // 0x44(0x4)
	int32_t MaxLevelSetResolution; // 0x48(0x4)
	int32_t MinClusterLevelSetResolution; // 0x4C(0x4)
	int32_t MaxClusterLevelSetResolution; // 0x50(0x4)
	float CollisionObjectReductionPercentage; // 0x54(0x4)
	bool bMassAsDensity; // 0x58(0x1)
	unsigned char UnknownData_59[0x0003]; // 0x59(0x3)
	float Mass; // 0x5C(0x4)
	float MinimumMassClamp; // 0x60(0x4)
	float CollisionParticlesFraction; // 0x64(0x4)
	int32_t MaximumCollisionParticles; // 0x68(0x4)
	unsigned char UnknownData_6C[0x0004]; // 0x6C(0x4)
	struct TArray<struct FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0x70(0x10)
	bool EnableRemovePiecesOnFracture; // 0x80(0x1)
	unsigned char UnknownData_81[0x0007]; // 0x81(0x7)
	struct TArray<struct UMaterialInterface*> RemoveOnFractureMaterials; // 0x88(0x10)
	struct FGuid PersistentGuid; // 0x98(0x10)
	struct FGuid StateGuid; // 0xA8(0x10)
	int32_t BoneSelectedMaterialIndex; // 0xB8(0x4)
	unsigned char UnknownData_BC[0x0014]; // 0xBC(0x14)
};

// Class GeometryCollectionEngine.GeometryCollectionRenderLevelSetActor
// Size : 0x2C0 (Inherited : 0x220)
struct AGeometryCollectionRenderLevelSetActor : AActor {
	struct UVolumeTexture* TargetVolumeTexture; // 0x220(0x8)
	struct UMaterial* RayMarchMaterial; // 0x228(0x8)
	float SurfaceTolerance; // 0x230(0x4)
	float Isovalue; // 0x234(0x4)
	bool Enabled; // 0x238(0x1)
	bool RenderVolumeBoundingBox; // 0x239(0x1)
	unsigned char UnknownData_23A[0x0086]; // 0x23A(0x86)
};

// Class GeometryCollectionEngine.SkeletalMeshSimulationComponent
// Size : 0x138 (Inherited : 0xB0)
struct USkeletalMeshSimulationComponent : UActorComponent {
	unsigned char UnknownData_B0[0x0008]; // 0xB0(0x8)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0xB8(0x8)
	struct AChaosSolverActor* ChaosSolverActor; // 0xC0(0x8)
	struct UPhysicsAsset* OverridePhysicsAsset; // 0xC8(0x8)
	bool bSimulating; // 0xD0(0x1)
	bool bNotifyCollisions; // 0xD1(0x1)
	enum class EObjectStateTypeEnum ObjectType; // 0xD2(0x1)
	unsigned char UnknownData_D3[0x0001]; // 0xD3(0x1)
	float Density; // 0xD4(0x4)
	float MinMass; // 0xD8(0x4)
	float MaxMass; // 0xDC(0x4)
	enum class ECollisionTypeEnum CollisionType; // 0xE0(0x1)
	unsigned char UnknownData_E1[0x0003]; // 0xE1(0x3)
	float ImplicitShapeParticlesPerUnitArea; // 0xE4(0x4)
	int32_t ImplicitShapeMinNumParticles; // 0xE8(0x4)
	int32_t ImplicitShapeMaxNumParticles; // 0xEC(0x4)
	int32_t MinLevelSetResolution; // 0xF0(0x4)
	int32_t MaxLevelSetResolution; // 0xF4(0x4)
	int32_t CollisionGroup; // 0xF8(0x4)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0xFC(0x1)
	unsigned char UnknownData_FD[0x0003]; // 0xFD(0x3)
	struct FVector InitialLinearVelocity; // 0x100(0xC)
	struct FVector InitialAngularVelocity; // 0x10C(0xC)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x118(0x10)
	unsigned char UnknownData_128[0x0010]; // 0x128(0x10)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo CollisionInfo); // Function GeometryCollectionEngine.SkeletalMeshSimulationComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0x70, 0x7FF77510D9D0
};

// Class GeometryCollectionEngine.StaticMeshSimulationComponent
// Size : 0x138 (Inherited : 0xB0)
struct UStaticMeshSimulationComponent : UActorComponent {
	unsigned char UnknownData_B0[0x0008]; // 0xB0(0x8)
	bool Simulating; // 0xB8(0x1)
	bool bNotifyCollisions; // 0xB9(0x1)
	enum class EObjectStateTypeEnum ObjectType; // 0xBA(0x1)
	unsigned char UnknownData_BB[0x0001]; // 0xBB(0x1)
	float Mass; // 0xBC(0x4)
	enum class ECollisionTypeEnum CollisionType; // 0xC0(0x1)
	enum class EImplicitTypeEnum ImplicitType; // 0xC1(0x1)
	unsigned char UnknownData_C2[0x0002]; // 0xC2(0x2)
	int32_t MinLevelSetResolution; // 0xC4(0x4)
	int32_t MaxLevelSetResolution; // 0xC8(0x4)
	enum class EInitialVelocityTypeEnum InitialVelocityType; // 0xCC(0x1)
	unsigned char UnknownData_CD[0x0003]; // 0xCD(0x3)
	struct FVector InitialLinearVelocity; // 0xD0(0xC)
	struct FVector InitialAngularVelocity; // 0xDC(0xC)
	float DamageThreshold; // 0xE8(0x4)
	unsigned char UnknownData_EC[0x0004]; // 0xEC(0x4)
	struct UChaosPhysicalMaterial* PhysicalMaterial; // 0xF0(0x8)
	struct AChaosSolverActor* ChaosSolverActor; // 0xF8(0x8)
	struct FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x100(0x10)
	unsigned char UnknownData_110[0x0010]; // 0x110(0x10)
	struct TArray<struct UPrimitiveComponent*> SimulatedComponents; // 0x120(0x10)
	unsigned char UnknownData_130[0x0008]; // 0x130(0x8)

	void ReceivePhysicsCollision(struct FChaosPhysicsCollisionInfo CollisionInfo); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ReceivePhysicsCollision // (Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0x70, 0x7FF77510D9D0
	void ForceRecreatePhysicsState(); // Function GeometryCollectionEngine.StaticMeshSimulationComponent.ForceRecreatePhysicsState // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF776B2C230
};

