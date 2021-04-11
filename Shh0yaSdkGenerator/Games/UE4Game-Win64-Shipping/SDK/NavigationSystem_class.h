// Class NavigationSystem.NavigationData
// Size : 0x400 (Inherited : 0x220)
struct ANavigationData : AActor {
	unsigned char UnknownData_220[0x0008]; // 0x220(0x8)
	struct UPrimitiveComponent* RenderingComp; // 0x228(0x8)
	struct FNavDataConfig NavDataConfig; // 0x230(0x78)
	unsigned char bEnableDrawing : 1; // 0x2A8(0x1)
	unsigned char bForceRebuildOnLoad : 1; // 0x2A8(0x1)
	unsigned char bAutoDestroyWhenNoNavigation : 1; // 0x2A8(0x1)
	unsigned char bCanBeMainNavData : 1; // 0x2A8(0x1)
	unsigned char bCanSpawnOnRebuild : 1; // 0x2A8(0x1)
	unsigned char bRebuildAtRuntime : 1; // 0x2A8(0x1)
	unsigned char UnknownData_2A8_6 : 2; // 0x2A8(0x1)
	unsigned char UnknownData_2A9[0x0003]; // 0x2A9(0x3)
	enum class ERuntimeGenerationType RuntimeGeneration; // 0x2AC(0x1)
	unsigned char UnknownData_2AD[0x0003]; // 0x2AD(0x3)
	float ObservedPathsTickInterval; // 0x2B0(0x4)
	uint32_t DataVersion; // 0x2B4(0x4)
	unsigned char UnknownData_2B8[0x00E0]; // 0x2B8(0xE0)
	struct TArray<struct FSupportedAreaData> SupportedAreas; // 0x398(0x10)
	unsigned char UnknownData_3A8[0x0058]; // 0x3A8(0x58)
};

// Class NavigationSystem.AbstractNavData
// Size : 0x400 (Inherited : 0x400)
struct AAbstractNavData : ANavigationData {
};

// Class NavigationSystem.CrowdManagerBase
// Size : 0x28 (Inherited : 0x28)
struct UCrowdManagerBase : UObject {
};

// Class NavigationSystem.NavArea
// Size : 0x48 (Inherited : 0x30)
struct UNavArea : UNavAreaBase {
	float DefaultCost; // 0x30(0x4)
	float FixedAreaEnteringCost; // 0x34(0x4)
	struct FColor DrawColor; // 0x38(0x4)
	struct FNavAgentSelector SupportedAgents; // 0x3C(0x4)
	unsigned char bSupportsAgent0 : 1; // 0x40(0x1)
	unsigned char bSupportsAgent1 : 1; // 0x40(0x1)
	unsigned char bSupportsAgent2 : 1; // 0x40(0x1)
	unsigned char bSupportsAgent3 : 1; // 0x40(0x1)
	unsigned char bSupportsAgent4 : 1; // 0x40(0x1)
	unsigned char bSupportsAgent5 : 1; // 0x40(0x1)
	unsigned char bSupportsAgent6 : 1; // 0x40(0x1)
	unsigned char bSupportsAgent7 : 1; // 0x40(0x1)
	unsigned char bSupportsAgent8 : 1; // 0x41(0x1)
	unsigned char bSupportsAgent9 : 1; // 0x41(0x1)
	unsigned char bSupportsAgent10 : 1; // 0x41(0x1)
	unsigned char bSupportsAgent11 : 1; // 0x41(0x1)
	unsigned char bSupportsAgent12 : 1; // 0x41(0x1)
	unsigned char bSupportsAgent13 : 1; // 0x41(0x1)
	unsigned char bSupportsAgent14 : 1; // 0x41(0x1)
	unsigned char bSupportsAgent15 : 1; // 0x41(0x1)
	unsigned char UnknownData_42[0x0006]; // 0x42(0x6)
};

// Class NavigationSystem.NavArea_Default
// Size : 0x48 (Inherited : 0x48)
struct UNavArea_Default : UNavArea {
};

// Class NavigationSystem.NavArea_LowHeight
// Size : 0x48 (Inherited : 0x48)
struct UNavArea_LowHeight : UNavArea {
};

// Class NavigationSystem.NavArea_Null
// Size : 0x48 (Inherited : 0x48)
struct UNavArea_Null : UNavArea {
};

// Class NavigationSystem.NavArea_Obstacle
// Size : 0x48 (Inherited : 0x48)
struct UNavArea_Obstacle : UNavArea {
};

// Class NavigationSystem.NavAreaMeta
// Size : 0x48 (Inherited : 0x48)
struct UNavAreaMeta : UNavArea {
};

// Class NavigationSystem.NavAreaMeta_SwitchByAgent
// Size : 0xC8 (Inherited : 0x48)
struct UNavAreaMeta_SwitchByAgent : UNavAreaMeta {
	class UNavArea* Agent0Area; // 0x48(0x8)
	class UNavArea* Agent1Area; // 0x50(0x8)
	class UNavArea* Agent2Area; // 0x58(0x8)
	class UNavArea* Agent3Area; // 0x60(0x8)
	class UNavArea* Agent4Area; // 0x68(0x8)
	class UNavArea* Agent5Area; // 0x70(0x8)
	class UNavArea* Agent6Area; // 0x78(0x8)
	class UNavArea* Agent7Area; // 0x80(0x8)
	class UNavArea* Agent8Area; // 0x88(0x8)
	class UNavArea* Agent9Area; // 0x90(0x8)
	class UNavArea* Agent10Area; // 0x98(0x8)
	class UNavArea* Agent11Area; // 0xA0(0x8)
	class UNavArea* Agent12Area; // 0xA8(0x8)
	class UNavArea* Agent13Area; // 0xB0(0x8)
	class UNavArea* Agent14Area; // 0xB8(0x8)
	class UNavArea* Agent15Area; // 0xC0(0x8)
};

// Class NavigationSystem.NavCollision
// Size : 0xD8 (Inherited : 0x70)
struct UNavCollision : UNavCollisionBase {
	unsigned char UnknownData_70[0x0010]; // 0x70(0x10)
	struct TArray<struct FNavCollisionCylinder> CylinderCollision; // 0x80(0x10)
	struct TArray<struct FNavCollisionBox> BoxCollision; // 0x90(0x10)
	class UNavArea* AreaClass; // 0xA0(0x8)
	unsigned char bGatherConvexGeometry : 1; // 0xA8(0x1)
	unsigned char bCreateOnClient : 1; // 0xA8(0x1)
	unsigned char UnknownData_A8_2 : 6; // 0xA8(0x1)
	unsigned char UnknownData_A9[0x002F]; // 0xA9(0x2F)
};

// Class NavigationSystem.NavigationGraph
// Size : 0x400 (Inherited : 0x400)
struct ANavigationGraph : ANavigationData {
};

// Class NavigationSystem.NavigationGraphNode
// Size : 0x220 (Inherited : 0x220)
struct ANavigationGraphNode : AActor {
};

// Class NavigationSystem.NavigationGraphNodeComponent
// Size : 0x220 (Inherited : 0x1F0)
struct UNavigationGraphNodeComponent : USceneComponent {
	struct FNavGraphNode Node; // 0x1F0(0x18)
	struct UNavigationGraphNodeComponent* NextNodeComponent; // 0x208(0x8)
	struct UNavigationGraphNodeComponent* PrevNodeComponent; // 0x210(0x8)
	unsigned char UnknownData_218[0x0008]; // 0x218(0x8)
};

// Class NavigationSystem.NavigationInvokerComponent
// Size : 0xB8 (Inherited : 0xB0)
struct UNavigationInvokerComponent : UActorComponent {
	float TileGenerationRadius; // 0xB0(0x4)
	float TileRemovalRadius; // 0xB4(0x4)
};

// Class NavigationSystem.NavigationPath
// Size : 0x88 (Inherited : 0x28)
struct UNavigationPath : UObject {
	struct FMulticastInlineDelegate PathUpdatedNotifier; // 0x28(0x10)
	struct TArray<struct FVector> PathPoints; // 0x38(0x10)
	enum class ENavigationOptionFlag RecalculateOnInvalidation; // 0x48(0x1)
	unsigned char UnknownData_49[0x003F]; // 0x49(0x3F)

	bool IsValid(); // Function NavigationSystem.NavigationPath.IsValid // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF776A5ED80
	bool IsStringPulled(); // Function NavigationSystem.NavigationPath.IsStringPulled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF776A5ED50
	bool IsPartial(); // Function NavigationSystem.NavigationPath.IsPartial // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF776A5ED20
	float GetPathLength(); // Function NavigationSystem.NavigationPath.GetPathLength // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF776A5E630
	float GetPathCost(); // Function NavigationSystem.NavigationPath.GetPathCost // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF776A5E3E0
	struct FString GetDebugString(); // Function NavigationSystem.NavigationPath.GetDebugString // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF776A5E2E0
	void EnableRecalculationOnInvalidation(enum class ENavigationOptionFlag DoRecalculation); // Function NavigationSystem.NavigationPath.EnableRecalculationOnInvalidation // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF776A5DEC0
	void EnableDebugDrawing(bool bShouldDrawDebugData, struct FLinearColor PathColor); // Function NavigationSystem.NavigationPath.EnableDebugDrawing // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x14, 0x7FF776A5DDE0
};

// Class NavigationSystem.NavigationPathGenerator
// Size : 0x28 (Inherited : 0x28)
struct UNavigationPathGenerator : UInterface {
};

// Class NavigationSystem.NavigationQueryFilter
// Size : 0x48 (Inherited : 0x28)
struct UNavigationQueryFilter : UObject {
	struct TArray<struct FNavigationFilterArea> Areas; // 0x28(0x10)
	struct FNavigationFilterFlags IncludeFlags; // 0x38(0x4)
	struct FNavigationFilterFlags ExcludeFlags; // 0x3C(0x4)
	unsigned char UnknownData_40[0x0008]; // 0x40(0x8)
};

// Class NavigationSystem.NavigationSystemV1
// Size : 0x538 (Inherited : 0x28)
struct UNavigationSystemV1 : UNavigationSystemBase {
	struct ANavigationData* MainNavData; // 0x28(0x8)
	struct ANavigationData* AbstractNavData; // 0x30(0x8)
	struct FName DefaultAgentName; // 0x38(0x8)
	SoftClassProperty CrowdManagerClass; // 0x40(0x28)
	unsigned char bAutoCreateNavigationData : 1; // 0x68(0x1)
	unsigned char bSpawnNavDataInNavBoundsLevel : 1; // 0x68(0x1)
	unsigned char bAllowClientSideNavigation : 1; // 0x68(0x1)
	unsigned char bShouldDiscardSubLevelNavData : 1; // 0x68(0x1)
	unsigned char bTickWhilePaused : 1; // 0x68(0x1)
	unsigned char bSupportRebuilding : 1; // 0x68(0x1)
	unsigned char bInitialBuildingLocked : 1; // 0x68(0x1)
	unsigned char bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x69(0x1)
	unsigned char UnknownData_69_1 : 7; // 0x69(0x1)
	unsigned char UnknownData_6A[0x0002]; // 0x6A(0x2)
	enum class ENavDataGatheringModeConfig DataGatheringMode; // 0x6C(0x1)
	unsigned char UnknownData_6D[0x0003]; // 0x6D(0x3)
	unsigned char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x70(0x1)
	unsigned char UnknownData_70_1 : 7; // 0x70(0x1)
	unsigned char UnknownData_71[0x0003]; // 0x71(0x3)
	float ActiveTilesUpdateInterval; // 0x74(0x4)
	struct TArray<struct FNavDataConfig> SupportedAgents; // 0x78(0x10)
	struct FNavAgentSelector SupportedAgentsMask; // 0x88(0x4)
	unsigned char UnknownData_8C[0x0004]; // 0x8C(0x4)
	struct TArray<struct ANavigationData*> NavDataSet; // 0x90(0x10)
	struct TArray<struct ANavigationData*> NavDataRegistrationQueue; // 0xA0(0x10)
	unsigned char UnknownData_B0[0x0010]; // 0xB0(0x10)
	struct FMulticastInlineDelegate OnNavDataRegisteredEvent; // 0xC0(0x10)
	struct FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; // 0xD0(0x10)
	unsigned char UnknownData_E0[0x00DC]; // 0xE0(0xDC)
	enum class FNavigationSystemRunMode OperationMode; // 0x1BC(0x1)
	unsigned char UnknownData_1BD[0x0357]; // 0x1BD(0x357)
	float DirtyAreasUpdateFreq; // 0x514(0x4)
	unsigned char UnknownData_518[0x0020]; // 0x518(0x20)

	void UnregisterNavigationInvoker(struct AActor* Invoker); // Function NavigationSystem.NavigationSystemV1.UnregisterNavigationInvoker // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF776A5FBD0
	void SimpleMoveToLocation(struct AController* Controller, struct FVector Goal); // Function NavigationSystem.NavigationSystemV1.SimpleMoveToLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x14, 0x7FF776A5FB10
	void SimpleMoveToActor(struct AController* Controller, struct AActor* Goal); // Function NavigationSystem.NavigationSystemV1.SimpleMoveToActor // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF776912DA0
	void SetMaxSimultaneousTileGenerationJobsCount(int32_t MaxNumberOfJobs); // Function NavigationSystem.NavigationSystemV1.SetMaxSimultaneousTileGenerationJobsCount // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF776A5FA90
	void SetGeometryGatheringMode(enum class ENavDataGatheringModeConfig NewMode); // Function NavigationSystem.NavigationSystemV1.SetGeometryGatheringMode // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF776A5FA10
	void ResetMaxSimultaneousTileGenerationJobsCount(); // Function NavigationSystem.NavigationSystemV1.ResetMaxSimultaneousTileGenerationJobsCount // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF776A5F9F0
	void RegisterNavigationInvoker(struct AActor* Invoker, float TileGenerationRadius, float TileRemovalRadius); // Function NavigationSystem.NavigationSystemV1.RegisterNavigationInvoker // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF776A5F8F0
	struct FVector ProjectPointToNavigation(struct UObject* WorldContextObject, struct FVector Point, struct ANavigationData* NavData, class UNavigationQueryFilter* FilterClass, struct FVector QueryExtent); // Function NavigationSystem.NavigationSystemV1.ProjectPointToNavigation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x40, 0x7FF776A5F720
	void OnNavigationBoundsUpdated(struct ANavMeshBoundsVolume* NavVolume); // Function NavigationSystem.NavigationSystemV1.OnNavigationBoundsUpdated // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF776A5F6A0
	bool NavigationRaycast(struct UObject* WorldContextObject, struct FVector RayStart, struct FVector RayEnd, struct FVector HitLocation, class UNavigationQueryFilter* FilterClass, struct AController* Querier); // Function NavigationSystem.NavigationSystemV1.NavigationRaycast // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x41, 0x7FF776A5F490
	bool K2_ReplaceAreaInOctreeData(struct UObject* Object, class UNavArea* OldArea, class UNavArea* NewArea); // Function NavigationSystem.NavigationSystemV1.K2_ReplaceAreaInOctreeData // (Final|Native|Public|BlueprintCallable) // Param Size : 0x19, 0x7FF776A5F390
	bool K2_ProjectPointToNavigation(struct UObject* WorldContextObject, struct FVector Point, struct FVector ProjectedLocation, struct ANavigationData* NavData, class UNavigationQueryFilter* FilterClass, struct FVector QueryExtent); // Function NavigationSystem.NavigationSystemV1.K2_ProjectPointToNavigation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x3D, 0x7FF776A5F1B0
	bool K2_GetRandomReachablePointInRadius(struct UObject* WorldContextObject, struct FVector Origin, struct FVector RandomLocation, float Radius, struct ANavigationData* NavData, class UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomReachablePointInRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x39, 0x7FF776A5EFB0
	bool K2_GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, struct FVector Origin, struct FVector RandomLocation, float Radius, struct ANavigationData* NavData, class UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomPointInNavigableRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x39, 0x7FF776A5EDB0
	bool K2_GetRandomLocationInNavigableRadius(struct UObject* WorldContextObject, struct FVector Origin, struct FVector RandomLocation, float Radius, struct ANavigationData* NavData, class UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.K2_GetRandomLocationInNavigableRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x39, 0x7FF776A5EDB0
	bool IsNavigationBeingBuiltOrLocked(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuiltOrLocked // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x9, 0x7FF776A5ECA0
	bool IsNavigationBeingBuilt(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.IsNavigationBeingBuilt // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x9, 0x7FF776A5EC20
	struct FVector GetRandomReachablePointInRadius(struct UObject* WorldContextObject, struct FVector Origin, float Radius, struct ANavigationData* NavData, class UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetRandomReachablePointInRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x34, 0x7FF776A5EA50
	struct FVector GetRandomPointInNavigableRadius(struct UObject* WorldContextObject, struct FVector Origin, float Radius, struct ANavigationData* NavData, class UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetRandomPointInNavigableRadius // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x34, 0x7FF776A5E880
	enum class ENavigationQueryResult GetPathLength(struct UObject* WorldContextObject, struct FVector PathStart, struct FVector PathEnd, float PathLength, struct ANavigationData* NavData, class UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathLength // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x39, 0x7FF776A5E660
	enum class ENavigationQueryResult GetPathCost(struct UObject* WorldContextObject, struct FVector PathStart, struct FVector PathEnd, float PathCost, struct ANavigationData* NavData, class UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.GetPathCost // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x39, 0x7FF776A5E410
	struct UNavigationSystemV1* GetNavigationSystem(struct UObject* WorldContextObject); // Function NavigationSystem.NavigationSystemV1.GetNavigationSystem // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF776A5E360
	struct UNavigationPath* FindPathToLocationSynchronously(struct UObject* WorldContextObject, struct FVector PathStart, struct FVector PathEnd, struct AActor* PathfindingContext, class UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToLocationSynchronously // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x38, 0x7FF776A5E130
	struct UNavigationPath* FindPathToActorSynchronously(struct UObject* WorldContextObject, struct FVector PathStart, struct AActor* GoalActor, float TetherDistance, struct AActor* PathfindingContext, class UNavigationQueryFilter* FilterClass); // Function NavigationSystem.NavigationSystemV1.FindPathToActorSynchronously // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x40, 0x7FF776A5DF40
};

// Class NavigationSystem.NavigationSystemModuleConfig
// Size : 0x58 (Inherited : 0x50)
struct UNavigationSystemModuleConfig : UNavigationSystemConfig {
	unsigned char bStrictlyStatic : 1; // 0x50(0x1)
	unsigned char bCreateOnClient : 1; // 0x50(0x1)
	unsigned char bAutoSpawnMissingNavData : 1; // 0x50(0x1)
	unsigned char bSpawnNavDataInNavBoundsLevel : 1; // 0x50(0x1)
	unsigned char UnknownData_50_4 : 4; // 0x50(0x1)
	unsigned char UnknownData_51[0x0007]; // 0x51(0x7)
};

// Class NavigationSystem.NavigationTestingActor
// Size : 0x310 (Inherited : 0x220)
struct ANavigationTestingActor : AActor {
	unsigned char UnknownData_220[0x0010]; // 0x220(0x10)
	struct UCapsuleComponent* CapsuleComponent; // 0x230(0x8)
	struct UNavigationInvokerComponent* InvokerComponent; // 0x238(0x8)
	unsigned char bActAsNavigationInvoker : 1; // 0x240(0x1)
	unsigned char UnknownData_240_1 : 7; // 0x240(0x1)
	unsigned char UnknownData_241[0x0007]; // 0x241(0x7)
	struct FNavAgentProperties NavAgentProps; // 0x248(0x30)
	struct FVector QueryingExtent; // 0x278(0xC)
	unsigned char UnknownData_284[0x0004]; // 0x284(0x4)
	struct ANavigationData* MyNavData; // 0x288(0x8)
	struct FVector ProjectedLocation; // 0x290(0xC)
	unsigned char bProjectedLocationValid : 1; // 0x29C(0x1)
	unsigned char bSearchStart : 1; // 0x29C(0x1)
	unsigned char UnknownData_29C_2 : 6; // 0x29C(0x1)
	unsigned char UnknownData_29D[0x0003]; // 0x29D(0x3)
	float CostLimitFactor; // 0x2A0(0x4)
	float MinimumCostLimit; // 0x2A4(0x4)
	unsigned char bBacktracking : 1; // 0x2A8(0x1)
	unsigned char bUseHierarchicalPathfinding : 1; // 0x2A8(0x1)
	unsigned char bGatherDetailedInfo : 1; // 0x2A8(0x1)
	unsigned char bDrawDistanceToWall : 1; // 0x2A8(0x1)
	unsigned char bShowNodePool : 1; // 0x2A8(0x1)
	unsigned char bShowBestPath : 1; // 0x2A8(0x1)
	unsigned char bShowDiffWithPreviousStep : 1; // 0x2A8(0x1)
	unsigned char bShouldBeVisibleInGame : 1; // 0x2A8(0x1)
	unsigned char UnknownData_2A9[0x0003]; // 0x2A9(0x3)
	enum class ENavCostDisplay CostDisplayMode; // 0x2AC(0x1)
	unsigned char UnknownData_2AD[0x0003]; // 0x2AD(0x3)
	struct FVector2D TextCanvasOffset; // 0x2B0(0x8)
	unsigned char bPathExist : 1; // 0x2B8(0x1)
	unsigned char bPathIsPartial : 1; // 0x2B8(0x1)
	unsigned char bPathSearchOutOfNodes : 1; // 0x2B8(0x1)
	unsigned char UnknownData_2B8_3 : 5; // 0x2B8(0x1)
	unsigned char UnknownData_2B9[0x0003]; // 0x2B9(0x3)
	float PathfindingTime; // 0x2BC(0x4)
	float PathCost; // 0x2C0(0x4)
	int32_t PathfindingSteps; // 0x2C4(0x4)
	struct ANavigationTestingActor* OtherActor; // 0x2C8(0x8)
	class UNavigationQueryFilter* FilterClass; // 0x2D0(0x8)
	int32_t ShowStepIndex; // 0x2D8(0x4)
	float OffsetFromCornersDistance; // 0x2DC(0x4)
	unsigned char UnknownData_2E0[0x0030]; // 0x2E0(0x30)
};

// Class NavigationSystem.NavLinkComponent
// Size : 0x420 (Inherited : 0x410)
struct UNavLinkComponent : UPrimitiveComponent {
	struct TArray<struct FNavigationLink> Links; // 0x410(0x10)
};

// Class NavigationSystem.NavRelevantComponent
// Size : 0xE0 (Inherited : 0xB0)
struct UNavRelevantComponent : UActorComponent {
	unsigned char UnknownData_B0[0x0024]; // 0xB0(0x24)
	unsigned char bAttachToOwnersRoot : 1; // 0xD4(0x1)
	unsigned char UnknownData_D4_1 : 7; // 0xD4(0x1)
	unsigned char UnknownData_D5[0x0003]; // 0xD5(0x3)
	struct UObject* CachedNavParent; // 0xD8(0x8)

	void SetNavigationRelevancy(bool bRelevant); // Function NavigationSystem.NavRelevantComponent.SetNavigationRelevancy // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF776A61B50
};

// Class NavigationSystem.NavLinkCustomComponent
// Size : 0x190 (Inherited : 0xE0)
struct UNavLinkCustomComponent : UNavRelevantComponent {
	unsigned char UnknownData_E0[0x0008]; // 0xE0(0x8)
	uint32_t NavLinkUserId; // 0xE8(0x4)
	unsigned char UnknownData_EC[0x0004]; // 0xEC(0x4)
	class UNavArea* EnabledAreaClass; // 0xF0(0x8)
	class UNavArea* DisabledAreaClass; // 0xF8(0x8)
	struct FNavAgentSelector SupportedAgents; // 0x100(0x4)
	struct FVector LinkRelativeStart; // 0x104(0xC)
	struct FVector LinkRelativeEnd; // 0x110(0xC)
	enum class ENavLinkDirection LinkDirection; // 0x11C(0x1)
	unsigned char UnknownData_11D[0x0003]; // 0x11D(0x3)
	unsigned char bLinkEnabled : 1; // 0x120(0x1)
	unsigned char bNotifyWhenEnabled : 1; // 0x120(0x1)
	unsigned char bNotifyWhenDisabled : 1; // 0x120(0x1)
	unsigned char bCreateBoxObstacle : 1; // 0x120(0x1)
	unsigned char UnknownData_120_4 : 4; // 0x120(0x1)
	unsigned char UnknownData_121[0x0003]; // 0x121(0x3)
	struct FVector ObstacleOffset; // 0x124(0xC)
	struct FVector ObstacleExtent; // 0x130(0xC)
	unsigned char UnknownData_13C[0x0004]; // 0x13C(0x4)
	class UNavArea* ObstacleAreaClass; // 0x140(0x8)
	float BroadcastRadius; // 0x148(0x4)
	float BroadcastInterval; // 0x14C(0x4)
	enum class ECollisionChannel BroadcastChannel; // 0x150(0x1)
	unsigned char UnknownData_151[0x003F]; // 0x151(0x3F)
};

// Class NavigationSystem.NavLinkCustomInterface
// Size : 0x28 (Inherited : 0x28)
struct UNavLinkCustomInterface : UInterface {
};

// Class NavigationSystem.NavLinkHostInterface
// Size : 0x28 (Inherited : 0x28)
struct UNavLinkHostInterface : UInterface {
};

// Class NavigationSystem.NavLinkRenderingComponent
// Size : 0x410 (Inherited : 0x410)
struct UNavLinkRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.NavLinkTrivial
// Size : 0x50 (Inherited : 0x50)
struct UNavLinkTrivial : UNavLinkDefinition {
};

// Class NavigationSystem.NavMeshBoundsVolume
// Size : 0x260 (Inherited : 0x258)
struct ANavMeshBoundsVolume : AVolume {
	struct FNavAgentSelector SupportedAgents; // 0x258(0x4)
	unsigned char UnknownData_25C[0x0004]; // 0x25C(0x4)
};

// Class NavigationSystem.NavMeshRenderingComponent
// Size : 0x420 (Inherited : 0x410)
struct UNavMeshRenderingComponent : UPrimitiveComponent {
	unsigned char UnknownData_410[0x0010]; // 0x410(0x10)
};

// Class NavigationSystem.NavModifierComponent
// Size : 0x140 (Inherited : 0xE0)
struct UNavModifierComponent : UNavRelevantComponent {
	class UNavArea* AreaClass; // 0xE0(0x8)
	struct FVector FailsafeExtent; // 0xE8(0xC)
	unsigned char bIncludeAgentHeight : 1; // 0xF4(0x1)
	unsigned char UnknownData_F4_1 : 7; // 0xF4(0x1)
	unsigned char UnknownData_F5[0x004B]; // 0xF5(0x4B)

	void SetAreaClass(class UNavArea* NewAreaClass); // Function NavigationSystem.NavModifierComponent.SetAreaClass // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF776A61AD0
};

// Class NavigationSystem.NavModifierVolume
// Size : 0x268 (Inherited : 0x258)
struct ANavModifierVolume : AVolume {
	unsigned char UnknownData_258[0x0008]; // 0x258(0x8)
	class UNavArea* AreaClass; // 0x260(0x8)

	void SetAreaClass(class UNavArea* NewAreaClass); // Function NavigationSystem.NavModifierVolume.SetAreaClass // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF776A61A50
};

// Class NavigationSystem.NavNodeInterface
// Size : 0x28 (Inherited : 0x28)
struct UNavNodeInterface : UInterface {
};

// Class NavigationSystem.NavSystemConfigOverride
// Size : 0x230 (Inherited : 0x220)
struct ANavSystemConfigOverride : AActor {
	struct UNavigationSystemConfig* NavigationSystemConfig; // 0x220(0x8)
	enum class ENavSystemOverridePolicy OverridePolicy; // 0x228(0x1)
	unsigned char bLoadOnClient : 1; // 0x229(0x1)
	unsigned char UnknownData_229_1 : 7; // 0x229(0x1)
	unsigned char UnknownData_22A[0x0006]; // 0x22A(0x6)
};

// Class NavigationSystem.NavTestRenderingComponent
// Size : 0x410 (Inherited : 0x410)
struct UNavTestRenderingComponent : UPrimitiveComponent {
};

// Class NavigationSystem.RecastFilter_UseDefaultArea
// Size : 0x48 (Inherited : 0x48)
struct URecastFilter_UseDefaultArea : UNavigationQueryFilter {
};

// Class NavigationSystem.RecastNavMesh
// Size : 0x4B8 (Inherited : 0x400)
struct ARecastNavMesh : ANavigationData {
	unsigned char bDrawTriangleEdges : 1; // 0x400(0x1)
	unsigned char bDrawPolyEdges : 1; // 0x400(0x1)
	unsigned char bDrawFilledPolys : 1; // 0x400(0x1)
	unsigned char bDrawNavMeshEdges : 1; // 0x400(0x1)
	unsigned char bDrawTileBounds : 1; // 0x400(0x1)
	unsigned char bDrawPathCollidingGeometry : 1; // 0x400(0x1)
	unsigned char bDrawTileLabels : 1; // 0x400(0x1)
	unsigned char bDrawPolygonLabels : 1; // 0x400(0x1)
	unsigned char bDrawDefaultPolygonCost : 1; // 0x401(0x1)
	unsigned char bDrawLabelsOnPathNodes : 1; // 0x401(0x1)
	unsigned char bDrawNavLinks : 1; // 0x401(0x1)
	unsigned char bDrawFailedNavLinks : 1; // 0x401(0x1)
	unsigned char bDrawClusters : 1; // 0x401(0x1)
	unsigned char bDrawOctree : 1; // 0x401(0x1)
	unsigned char bDrawOctreeDetails : 1; // 0x401(0x1)
	unsigned char bDrawMarkedForbiddenPolys : 1; // 0x401(0x1)
	unsigned char bDistinctlyDrawTilesBeingBuilt : 1; // 0x402(0x1)
	unsigned char bDrawNavMesh : 1; // 0x402(0x1)
	unsigned char UnknownData_402_2 : 6; // 0x402(0x1)
	unsigned char UnknownData_403[0x0001]; // 0x403(0x1)
	float DrawOffset; // 0x404(0x4)
	unsigned char bFixedTilePoolSize : 1; // 0x408(0x1)
	unsigned char UnknownData_408_1 : 7; // 0x408(0x1)
	unsigned char UnknownData_409[0x0003]; // 0x409(0x3)
	int32_t TilePoolSize; // 0x40C(0x4)
	float TileSizeUU; // 0x410(0x4)
	float CellSize; // 0x414(0x4)
	float CellHeight; // 0x418(0x4)
	float AgentRadius; // 0x41C(0x4)
	float AgentHeight; // 0x420(0x4)
	float AgentMaxHeight; // 0x424(0x4)
	float AgentMaxSlope; // 0x428(0x4)
	float AgentMaxStepHeight; // 0x42C(0x4)
	float MinRegionArea; // 0x430(0x4)
	float MergeRegionSize; // 0x434(0x4)
	float MaxSimplificationError; // 0x438(0x4)
	int32_t MaxSimultaneousTileGenerationJobsCount; // 0x43C(0x4)
	int32_t TileNumberHardLimit; // 0x440(0x4)
	int32_t PolyRefTileBits; // 0x444(0x4)
	int32_t PolyRefNavPolyBits; // 0x448(0x4)
	int32_t PolyRefSaltBits; // 0x44C(0x4)
	struct FVector NavMeshOriginOffset; // 0x450(0xC)
	float DefaultDrawDistance; // 0x45C(0x4)
	float DefaultMaxSearchNodes; // 0x460(0x4)
	float DefaultMaxHierarchicalSearchNodes; // 0x464(0x4)
	enum class ERecastPartitioning RegionPartitioning; // 0x468(0x1)
	enum class ERecastPartitioning LayerPartitioning; // 0x469(0x1)
	unsigned char UnknownData_46A[0x0002]; // 0x46A(0x2)
	int32_t RegionChunkSplits; // 0x46C(0x4)
	int32_t LayerChunkSplits; // 0x470(0x4)
	unsigned char bSortNavigationAreasByCost : 1; // 0x474(0x1)
	unsigned char bPerformVoxelFiltering : 1; // 0x474(0x1)
	unsigned char bMarkLowHeightAreas : 1; // 0x474(0x1)
	unsigned char bFilterLowSpanSequences : 1; // 0x474(0x1)
	unsigned char bFilterLowSpanFromTileCache : 1; // 0x474(0x1)
	unsigned char bDoFullyAsyncNavDataGathering : 1; // 0x474(0x1)
	unsigned char bUseBetterOffsetsFromCorners : 1; // 0x474(0x1)
	unsigned char bStoreEmptyTileLayers : 1; // 0x474(0x1)
	unsigned char bUseVirtualFilters : 1; // 0x475(0x1)
	unsigned char bAllowNavLinkAsPathEnd : 1; // 0x475(0x1)
	unsigned char bUseVoxelCache : 1; // 0x475(0x1)
	unsigned char UnknownData_475_3 : 5; // 0x475(0x1)
	unsigned char UnknownData_476[0x0002]; // 0x476(0x2)
	float TileSetUpdateInterval; // 0x478(0x4)
	float HeuristicScale; // 0x47C(0x4)
	float VerticalDeviationFromGroundCompensation; // 0x480(0x4)
	unsigned char UnknownData_484[0x0034]; // 0x484(0x34)

	bool K2_ReplaceAreaInTileBounds(struct FBox Bounds, class UNavArea* OldArea, class UNavArea* NewArea, bool ReplaceLinks); // Function NavigationSystem.RecastNavMesh.K2_ReplaceAreaInTileBounds // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x32, 0x7FF776A618C0
};

// Class NavigationSystem.RecastNavMeshDataChunk
// Size : 0x40 (Inherited : 0x30)
struct URecastNavMeshDataChunk : UNavigationDataChunk {
	unsigned char UnknownData_30[0x0010]; // 0x30(0x10)
};

