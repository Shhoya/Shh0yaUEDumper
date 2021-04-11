// Class MagicLeapHandMeshing.MagicLeapHandMeshingComponent
// Size : 0xB0 (Inherited : 0xB0)
struct UMagicLeapHandMeshingComponent : UActorComponent {

	void SetUseWeightedNormals(bool bInUseWeightedNormals); // Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.SetUseWeightedNormals // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774C5FF50
	bool DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.DisconnectMRMesh // (Final|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF774C5FE40
	bool ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeapHandMeshing.MagicLeapHandMeshingComponent.ConnectMRMesh // (Final|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF774C5FCD0
};

// Class MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct UMagicLeapHandMeshingFunctionLibrary : UBlueprintFunctionLibrary {

	bool DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DisconnectMRMesh // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF774C5FED0
	bool DestroyClient(); // Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.DestroyClient // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774C5FE10
	bool CreateClient(); // Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.CreateClient // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774C5FDE0
	bool ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MagicLeapHandMeshing.MagicLeapHandMeshingFunctionLibrary.ConnectMRMesh // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF774C5FD60
};

