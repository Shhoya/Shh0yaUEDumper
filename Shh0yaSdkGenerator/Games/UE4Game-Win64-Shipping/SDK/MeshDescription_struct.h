// ScriptStruct MeshDescription.ElementID
// Size : 0x4 (Inherited : 0x0)
struct FElementID {
	int32_t IDValue; // 0x0(0x4)
};

// ScriptStruct MeshDescription.PolygonGroupID
// Size : 0x4 (Inherited : 0x4)
struct FPolygonGroupID : FElementID {
};

// ScriptStruct MeshDescription.PolygonID
// Size : 0x4 (Inherited : 0x4)
struct FPolygonID : FElementID {
};

// ScriptStruct MeshDescription.VertexID
// Size : 0x4 (Inherited : 0x4)
struct FVertexID : FElementID {
};

// ScriptStruct MeshDescription.VertexInstanceID
// Size : 0x4 (Inherited : 0x4)
struct FVertexInstanceID : FElementID {
};

// ScriptStruct MeshDescription.EdgeID
// Size : 0x4 (Inherited : 0x4)
struct FEdgeID : FElementID {
};

// ScriptStruct MeshDescription.TriangleID
// Size : 0x4 (Inherited : 0x4)
struct FTriangleID : FElementID {
};

