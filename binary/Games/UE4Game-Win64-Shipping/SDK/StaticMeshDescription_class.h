// Class StaticMeshDescription.StaticMeshDescription
// Size : 0x390 (Inherited : 0x390)
struct UStaticMeshDescription : UMeshDescriptionBase {

	void SetVertexInstanceUV(struct FVertexInstanceID VertexInstanceID, struct FVector2D UV, int32_t UVIndex); // Function StaticMeshDescription.StaticMeshDescription.SetVertexInstanceUV // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF7760BB5A0
	void SetPolygonGroupMaterialSlotName(struct FPolygonGroupID PolygonGroupID, struct FName SlotName); // Function StaticMeshDescription.StaticMeshDescription.SetPolygonGroupMaterialSlotName // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0xC, 0x7FF7760BB4C0
	struct FVector2D GetVertexInstanceUV(struct FVertexInstanceID VertexInstanceID, int32_t UVIndex); // Function StaticMeshDescription.StaticMeshDescription.GetVertexInstanceUV // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF7760BB3F0
	void CreateCube(struct FVector Center, struct FVector HalfExtents, struct FPolygonGroupID PolygonGroup, struct FPolygonID PolygonID_PlusX, struct FPolygonID PolygonID_MinusX, struct FPolygonID PolygonID_PlusY, struct FPolygonID PolygonID_MinusY, struct FPolygonID PolygonID_PlusZ, struct FPolygonID PolygonID_MinusZ); // Function StaticMeshDescription.StaticMeshDescription.CreateCube // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x34, 0x7FF7760BB0C0
};

