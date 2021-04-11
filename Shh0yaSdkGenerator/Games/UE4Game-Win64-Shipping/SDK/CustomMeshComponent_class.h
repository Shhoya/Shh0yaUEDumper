// Class CustomMeshComponent.CustomMeshComponent
// Size : 0x440 (Inherited : 0x430)
struct UCustomMeshComponent : UMeshComponent {
	unsigned char UnknownData_430[0x0010]; // 0x430(0x10)

	bool SetCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle> Triangles); // Function CustomMeshComponent.CustomMeshComponent.SetCustomMeshTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x11, 0x7FF774D3AC40
	void ClearCustomMeshTriangles(); // Function CustomMeshComponent.CustomMeshComponent.ClearCustomMeshTriangles // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF774D3AC20
	void AddCustomMeshTriangles(struct TArray<struct FCustomMeshTriangle> Triangles); // Function CustomMeshComponent.CustomMeshComponent.AddCustomMeshTriangles // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF774D3AB70
};

