// Class MagicLeapPlanes.MagicLeapPlanesComponent
// Size : 0x260 (Inherited : 0x1F0)
struct UMagicLeapPlanesComponent : USceneComponent {
	struct TArray<enum class EMagicLeapPlaneQueryFlags> QueryFlags; // 0x1F0(0x10)
	struct UBoxComponent* SearchVolume; // 0x200(0x8)
	int32_t MaxResults; // 0x208(0x4)
	float MinHolePerimeter; // 0x20C(0x4)
	float MinPlaneArea; // 0x210(0x4)
	enum class EMagicLeapPlaneQueryType QueryType; // 0x214(0x1)
	unsigned char UnknownData_215[0x0003]; // 0x215(0x3)
	float SimilarityThreshold; // 0x218(0x4)
	unsigned char UnknownData_21C[0x0004]; // 0x21C(0x4)
	struct FMulticastInlineDelegate OnPlanesQueryResult; // 0x220(0x10)
	struct FMulticastInlineDelegate OnPersistentPlanesQueryResult; // 0x230(0x10)
	unsigned char UnknownData_240[0x0020]; // 0x240(0x20)

	bool RequestPlanesAsync(); // Function MagicLeapPlanes.MagicLeapPlanesComponent.RequestPlanesAsync // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774C5C8F0
};

// Class MagicLeapPlanes.MagicLeapPlanesFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct UMagicLeapPlanesFunctionLibrary : UBlueprintFunctionLibrary {

	void ReorderPlaneFlags(struct TArray<enum class EMagicLeapPlaneQueryFlags> InPriority, struct TArray<enum class EMagicLeapPlaneQueryFlags> InFlagsToReorder, struct TArray<enum class EMagicLeapPlaneQueryFlags> OutReorderedFlags); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.ReorderPlaneFlags // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x30, 0x7FF774C5C770
	bool RemovePersistentQuery(struct FGuid Handle); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemovePersistentQuery // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x11, 0x7FF774C5C6E0
	void RemoveFlagsNotInQuery(struct TArray<enum class EMagicLeapPlaneQueryFlags> InQueryFlags, struct TArray<enum class EMagicLeapPlaneQueryFlags> InResultFlags, struct TArray<enum class EMagicLeapPlaneQueryFlags> OutFlags); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.RemoveFlagsNotInQuery // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x30, 0x7FF774C5C560
	bool PlanesQueryBeginAsync(struct FMagicLeapPlanesQuery Query, struct FDelegate ResultDelegate); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesQueryBeginAsync // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x71, 0x7FF774C5C400
	bool PlanesPersistentQueryBeginAsync(struct FMagicLeapPlanesQuery Query, struct FGuid Handle, struct FDelegate ResultDelegate); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.PlanesPersistentQueryBeginAsync // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x81, 0x7FF774C5C250
	bool IsTrackerValid(); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.IsTrackerValid // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF774C5C220
	struct FTransform GetContentScale(struct AActor* ContentActor, struct FMagicLeapPlaneResult PlaneResult); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.GetContentScale // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0xA0, 0x7FF774C5C0E0
	bool DestroyTracker(); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.DestroyTracker // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774C5C0B0
	bool CreateTracker(); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.CreateTracker // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774C5C080
	struct FGuid AddPersistentQuery(enum class EMagicLeapPlaneQueryType PersistentQueryType); // Function MagicLeapPlanes.MagicLeapPlanesFunctionLibrary.AddPersistentQuery // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x14, 0x7FF774C5C000
};

