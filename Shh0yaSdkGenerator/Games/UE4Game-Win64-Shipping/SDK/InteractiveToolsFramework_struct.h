// ScriptStruct InteractiveToolsFramework.BrushStampData
// Size : 0xA8 (Inherited : 0x0)
struct FBrushStampData {
	unsigned char UnknownData_0[0x00A8]; // 0x0(0xA8)
};

// ScriptStruct InteractiveToolsFramework.BehaviorInfo
// Size : 0x20 (Inherited : 0x0)
struct FBehaviorInfo {
	struct UInputBehavior* Behavior; // 0x0(0x8)
	unsigned char UnknownData_8[0x0018]; // 0x8(0x18)
};

// ScriptStruct InteractiveToolsFramework.InputRayHit
// Size : 0x28 (Inherited : 0x0)
struct FInputRayHit {
	unsigned char UnknownData_0[0x0028]; // 0x0(0x28)
};

// ScriptStruct InteractiveToolsFramework.ActiveGizmo
// Size : 0x30 (Inherited : 0x0)
struct FActiveGizmo {
	unsigned char UnknownData_0[0x0030]; // 0x0(0x30)
};

// ScriptStruct InteractiveToolsFramework.GizmoFloatParameterChange
// Size : 0x8 (Inherited : 0x0)
struct FGizmoFloatParameterChange {
	float InitialValue; // 0x0(0x4)
	float CurrentValue; // 0x4(0x4)
};

// ScriptStruct InteractiveToolsFramework.GizmoVec2ParameterChange
// Size : 0x10 (Inherited : 0x0)
struct FGizmoVec2ParameterChange {
	struct FVector2D InitialValue; // 0x0(0x8)
	struct FVector2D CurrentValue; // 0x8(0x8)
};

