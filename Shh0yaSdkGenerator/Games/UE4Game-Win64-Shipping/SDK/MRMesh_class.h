// Class MRMesh.MeshReconstructorBase
// Size : 0x28 (Inherited : 0x28)
struct UMeshReconstructorBase : UObject {

	void StopReconstruction(); // Function MRMesh.MeshReconstructorBase.StopReconstruction // (Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775B89840
	void StartReconstruction(); // Function MRMesh.MeshReconstructorBase.StartReconstruction // (Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775B89820
	void PauseReconstruction(); // Function MRMesh.MeshReconstructorBase.PauseReconstruction // (Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775B89800
	bool IsReconstructionStarted(); // Function MRMesh.MeshReconstructorBase.IsReconstructionStarted // (Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775B897D0
	bool IsReconstructionPaused(); // Function MRMesh.MeshReconstructorBase.IsReconstructionPaused // (Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775B897A0
	void DisconnectMRMesh(); // Function MRMesh.MeshReconstructorBase.DisconnectMRMesh // (Native|Public) // Param Size : 0x0, 0x7FF775B896A0
	void ConnectMRMesh(struct UMRMeshComponent* Mesh); // Function MRMesh.MeshReconstructorBase.ConnectMRMesh // (Native|Public) // Param Size : 0x8, 0x7FF775B89590
};

// Class MRMesh.MockDataMeshTrackerComponent
// Size : 0x260 (Inherited : 0x1F0)
struct UMockDataMeshTrackerComponent : USceneComponent {
	struct FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x1F0(0x10)
	bool ScanWorld; // 0x200(0x1)
	bool RequestNormals; // 0x201(0x1)
	bool RequestVertexConfidence; // 0x202(0x1)
	enum class EMeshTrackerVertexColorMode VertexColorMode; // 0x203(0x1)
	unsigned char UnknownData_204[0x0004]; // 0x204(0x4)
	struct TArray<struct FColor> BlockVertexColors; // 0x208(0x10)
	struct FLinearColor VertexColorFromConfidenceZero; // 0x218(0x10)
	struct FLinearColor VertexColorFromConfidenceOne; // 0x228(0x10)
	float UpdateInterval; // 0x238(0x4)
	unsigned char UnknownData_23C[0x0004]; // 0x23C(0x4)
	struct UMRMeshComponent* MRMesh; // 0x240(0x8)
	unsigned char UnknownData_248[0x0018]; // 0x248(0x18)

	void OnMockDataMeshTrackerUpdated__DelegateSignature(int32_t Index, struct TArray<struct FVector> Vertices, struct TArray<int32_t> Triangles, struct TArray<struct FVector> Normals, struct TArray<float> Confidence); // DelegateFunction MRMesh.MockDataMeshTrackerComponent.OnMockDataMeshTrackerUpdated__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // Param Size : 0x48, 0x7FF77510D9D0
	void DisconnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.DisconnectMRMesh // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775B896C0
	void ConnectMRMesh(struct UMRMeshComponent* InMRMeshPtr); // Function MRMesh.MockDataMeshTrackerComponent.ConnectMRMesh // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775B89620
};

// Class MRMesh.MRMeshComponent
// Size : 0x480 (Inherited : 0x410)
struct UMRMeshComponent : UPrimitiveComponent {
	struct UMaterialInterface* Material; // 0x410(0x8)
	bool bCreateMeshProxySections; // 0x418(0x1)
	bool bUpdateNavMeshOnMeshUpdate; // 0x419(0x1)
	bool bNeverCreateCollisionMesh; // 0x41A(0x1)
	unsigned char UnknownData_41B[0x0005]; // 0x41B(0x5)
	struct UBodySetup* CachedBodySetup; // 0x420(0x8)
	struct TArray<struct UBodySetup*> BodySetups; // 0x428(0x10)
	struct UMaterialInterface* WireframeMaterial; // 0x438(0x8)
	unsigned char UnknownData_440[0x0040]; // 0x440(0x40)

	bool IsConnected(); // Function MRMesh.MRMeshComponent.IsConnected // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775B89760
	void ForceNavMeshUpdate(); // Function MRMesh.MRMeshComponent.ForceNavMeshUpdate // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775B89740
	void Clear(); // Function MRMesh.MRMeshComponent.Clear // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775B89560
};

