// ScriptStruct AnimationCore.CCDIKChainLink
// Size : 0x80 (Inherited : 0x0)
struct FCCDIKChainLink {
	unsigned char UnknownData_0[0x0080]; // 0x0(0x80)
};

// ScriptStruct AnimationCore.Axis
// Size : 0x10 (Inherited : 0x0)
struct FAxis {
	struct FVector Axis; // 0x0(0xC)
	bool bInLocalSpace; // 0xC(0x1)
	unsigned char UnknownData_D[0x0003]; // 0xD(0x3)
};

// ScriptStruct AnimationCore.ConstraintData
// Size : 0x80 (Inherited : 0x0)
struct FConstraintData {
	struct FConstraintDescriptor Constraint; // 0x0(0x10)
	float Weight; // 0x10(0x4)
	bool bMaintainOffset; // 0x14(0x1)
	unsigned char UnknownData_15[0x000B]; // 0x15(0xB)
	struct FTransform Offset; // 0x20(0x30)
	struct FTransform CurrentTransform; // 0x50(0x30)
};

// ScriptStruct AnimationCore.ConstraintDescriptor
// Size : 0x10 (Inherited : 0x0)
struct FConstraintDescriptor {
	enum class EConstraintType Type; // 0x0(0x1)
	unsigned char UnknownData_1[0x000F]; // 0x1(0xF)
};

// ScriptStruct AnimationCore.ConstraintDescriptionEx
// Size : 0x10 (Inherited : 0x0)
struct FConstraintDescriptionEx {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
	struct FFilterOptionPerAxis AxesFilterOption; // 0x8(0x3)
	unsigned char UnknownData_B[0x0005]; // 0xB(0x5)
};

// ScriptStruct AnimationCore.FilterOptionPerAxis
// Size : 0x3 (Inherited : 0x0)
struct FFilterOptionPerAxis {
	bool bX; // 0x0(0x1)
	bool bY; // 0x1(0x1)
	bool bZ; // 0x2(0x1)
};

// ScriptStruct AnimationCore.AimConstraintDescription
// Size : 0x40 (Inherited : 0x10)
struct FAimConstraintDescription : FConstraintDescriptionEx {
	struct FAxis LookAt_Axis; // 0x10(0x10)
	struct FAxis LookUp_Axis; // 0x20(0x10)
	bool bUseLookUp; // 0x30(0x1)
	unsigned char UnknownData_31[0x0003]; // 0x31(0x3)
	struct FVector LookUpTarget; // 0x34(0xC)
};

// ScriptStruct AnimationCore.TransformConstraintDescription
// Size : 0x18 (Inherited : 0x10)
struct FTransformConstraintDescription : FConstraintDescriptionEx {
	enum class ETransformConstraintType TransformType; // 0x10(0x1)
	unsigned char UnknownData_11[0x0007]; // 0x11(0x7)
};

// ScriptStruct AnimationCore.TransformConstraint
// Size : 0x28 (Inherited : 0x0)
struct FTransformConstraint {
	struct FConstraintDescription Operator; // 0x0(0xD)
	unsigned char UnknownData_D[0x0003]; // 0xD(0x3)
	struct FName SourceNode; // 0x10(0x8)
	struct FName TargetNode; // 0x18(0x8)
	float Weight; // 0x20(0x4)
	bool bMaintainOffset; // 0x24(0x1)
	unsigned char UnknownData_25[0x0003]; // 0x25(0x3)
};

// ScriptStruct AnimationCore.ConstraintDescription
// Size : 0xD (Inherited : 0x0)
struct FConstraintDescription {
	bool bTranslation; // 0x0(0x1)
	bool bRotation; // 0x1(0x1)
	bool bScale; // 0x2(0x1)
	bool bParent; // 0x3(0x1)
	struct FFilterOptionPerAxis TranslationAxes; // 0x4(0x3)
	struct FFilterOptionPerAxis RotationAxes; // 0x7(0x3)
	struct FFilterOptionPerAxis ScaleAxes; // 0xA(0x3)
};

// ScriptStruct AnimationCore.ConstraintOffset
// Size : 0x60 (Inherited : 0x0)
struct FConstraintOffset {
	struct FVector Translation; // 0x0(0xC)
	unsigned char UnknownData_C[0x0004]; // 0xC(0x4)
	struct FQuat Rotation; // 0x10(0x10)
	struct FVector Scale; // 0x20(0xC)
	unsigned char UnknownData_2C[0x0004]; // 0x2C(0x4)
	struct FTransform Parent; // 0x30(0x30)
};

// ScriptStruct AnimationCore.TransformFilter
// Size : 0x9 (Inherited : 0x0)
struct FTransformFilter {
	struct FFilterOptionPerAxis TranslationFilter; // 0x0(0x3)
	struct FFilterOptionPerAxis RotationFilter; // 0x3(0x3)
	struct FFilterOptionPerAxis ScaleFilter; // 0x6(0x3)
};

// ScriptStruct AnimationCore.EulerTransform
// Size : 0x24 (Inherited : 0x0)
struct FEulerTransform {
	struct FVector Location; // 0x0(0xC)
	struct FRotator Rotation; // 0xC(0xC)
	struct FVector Scale; // 0x18(0xC)
};

// ScriptStruct AnimationCore.FABRIKChainLink
// Size : 0x38 (Inherited : 0x0)
struct FFABRIKChainLink {
	unsigned char UnknownData_0[0x0038]; // 0x0(0x38)
};

// ScriptStruct AnimationCore.NodeChain
// Size : 0x10 (Inherited : 0x0)
struct FNodeChain {
	struct TArray<struct FName> Nodes; // 0x0(0x10)
};

// ScriptStruct AnimationCore.NodeHierarchyWithUserData
// Size : 0x78 (Inherited : 0x0)
struct FNodeHierarchyWithUserData {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
	struct FNodeHierarchyData Hierarchy; // 0x8(0x70)
};

// ScriptStruct AnimationCore.NodeHierarchyData
// Size : 0x70 (Inherited : 0x0)
struct FNodeHierarchyData {
	struct TArray<struct FNodeObject> Nodes; // 0x0(0x10)
	struct TArray<struct FTransform> Transforms; // 0x10(0x10)
	struct TMap<struct FName, int32_t> NodeNameToIndexMapping; // 0x20(0x50)
};

// ScriptStruct AnimationCore.NodeObject
// Size : 0x10 (Inherited : 0x0)
struct FNodeObject {
	struct FName Name; // 0x0(0x8)
	struct FName ParentName; // 0x8(0x8)
};

// ScriptStruct AnimationCore.TransformNoScale
// Size : 0x20 (Inherited : 0x0)
struct FTransformNoScale {
	struct FVector Location; // 0x0(0xC)
	unsigned char UnknownData_C[0x0004]; // 0xC(0x4)
	struct FQuat Rotation; // 0x10(0x10)
};

