// Enum EditableMesh.ETriangleTessellationMode
enum class FETriangleTessellationMode : uint8 {
	ThreeTriangles
	FourTriangles
	ETriangleTessellationMode_MAX
};

// Enum EditableMesh.EInsetPolygonsMode
enum class FEInsetPolygonsMode : uint8 {
	All
	CenterPolygonOnly
	SidePolygonsOnly
	EInsetPolygonsMode_MAX
};

// Enum EditableMesh.EPolygonEdgeHardness
enum class FEPolygonEdgeHardness : uint8 {
	NewEdgesSoft
	NewEdgesHard
	AllEdgesSoft
	AllEdgesHard
	EPolygonEdgeHardness_MAX
};

// Enum EditableMesh.EMeshElementAttributeType
enum class FEMeshElementAttributeType : uint8 {
	None
	FVector4
	FVector
	FVector2D
	Float
	Int
	Bool
	FName
	EMeshElementAttributeType_MAX
};

// Enum EditableMesh.EMeshTopologyChange
enum class FEMeshTopologyChange : uint8 {
	NoTopologyChange
	TopologyChange
	EMeshTopologyChange_MAX
};

// Enum EditableMesh.EMeshModificationType
enum class FEMeshModificationType : uint8 {
	FirstInterim
	Interim
	Final
	EMeshModificationType_MAX
};

