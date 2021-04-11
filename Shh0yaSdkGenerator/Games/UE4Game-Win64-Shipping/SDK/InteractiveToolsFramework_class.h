// Class InteractiveToolsFramework.InputBehavior
// Size : 0x30 (Inherited : 0x28)
struct UInputBehavior : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// Class InteractiveToolsFramework.AnyButtonInputBehavior
// Size : 0x80 (Inherited : 0x30)
struct UAnyButtonInputBehavior : UInputBehavior {
	unsigned char UnknownData_30[0x0050]; // 0x30(0x50)
};

// Class InteractiveToolsFramework.InteractiveGizmoBuilder
// Size : 0x28 (Inherited : 0x28)
struct UInteractiveGizmoBuilder : UObject {
};

// Class InteractiveToolsFramework.AxisAngleGizmoBuilder
// Size : 0x28 (Inherited : 0x28)
struct UAxisAngleGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.InteractiveGizmo
// Size : 0x38 (Inherited : 0x28)
struct UInteractiveGizmo : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
	struct UInputBehaviorSet* InputBehaviors; // 0x30(0x8)
};

// Class InteractiveToolsFramework.AxisAngleGizmo
// Size : 0xF0 (Inherited : 0x38)
struct UAxisAngleGizmo : UInteractiveGizmo {
	unsigned char UnknownData_38[0x0010]; // 0x38(0x10)
	struct TScriptInterface<None> AxisSource; // 0x48(0x10)
	struct TScriptInterface<None> AngleSource; // 0x58(0x10)
	struct TScriptInterface<None> HitTarget; // 0x68(0x10)
	struct TScriptInterface<None> StateTarget; // 0x78(0x10)
	bool bInInteraction; // 0x88(0x1)
	unsigned char UnknownData_89[0x0003]; // 0x89(0x3)
	struct FVector RotationOrigin; // 0x8C(0xC)
	struct FVector RotationAxis; // 0x98(0xC)
	struct FVector RotationPlaneX; // 0xA4(0xC)
	struct FVector RotationPlaneY; // 0xB0(0xC)
	struct FVector InteractionStartPoint; // 0xBC(0xC)
	struct FVector InteractionCurPoint; // 0xC8(0xC)
	float InteractionStartAngle; // 0xD4(0x4)
	float InteractionCurAngle; // 0xD8(0x4)
	unsigned char UnknownData_DC[0x0014]; // 0xDC(0x14)
};

// Class InteractiveToolsFramework.AxisPositionGizmoBuilder
// Size : 0x28 (Inherited : 0x28)
struct UAxisPositionGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.AxisPositionGizmo
// Size : 0xD8 (Inherited : 0x38)
struct UAxisPositionGizmo : UInteractiveGizmo {
	unsigned char UnknownData_38[0x0010]; // 0x38(0x10)
	struct TScriptInterface<None> AxisSource; // 0x48(0x10)
	struct TScriptInterface<None> ParameterSource; // 0x58(0x10)
	struct TScriptInterface<None> HitTarget; // 0x68(0x10)
	struct TScriptInterface<None> StateTarget; // 0x78(0x10)
	bool bEnableSignedAxis; // 0x88(0x1)
	bool bInInteraction; // 0x89(0x1)
	unsigned char UnknownData_8A[0x0002]; // 0x8A(0x2)
	struct FVector InteractionOrigin; // 0x8C(0xC)
	struct FVector InteractionAxis; // 0x98(0xC)
	struct FVector InteractionStartPoint; // 0xA4(0xC)
	struct FVector InteractionCurPoint; // 0xB0(0xC)
	float InteractionStartParameter; // 0xBC(0x4)
	float InteractionCurParameter; // 0xC0(0x4)
	float ParameterSign; // 0xC4(0x4)
	unsigned char UnknownData_C8[0x0010]; // 0xC8(0x10)
};

// Class InteractiveToolsFramework.GizmoConstantAxisSource
// Size : 0x48 (Inherited : 0x28)
struct UGizmoConstantAxisSource : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
	struct FVector Origin; // 0x30(0xC)
	struct FVector Direction; // 0x3C(0xC)
};

// Class InteractiveToolsFramework.GizmoConstantFrameAxisSource
// Size : 0x60 (Inherited : 0x28)
struct UGizmoConstantFrameAxisSource : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
	struct FVector Origin; // 0x30(0xC)
	struct FVector Direction; // 0x3C(0xC)
	struct FVector TangentX; // 0x48(0xC)
	struct FVector TangentY; // 0x54(0xC)
};

// Class InteractiveToolsFramework.GizmoWorldAxisSource
// Size : 0x40 (Inherited : 0x28)
struct UGizmoWorldAxisSource : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
	struct FVector Origin; // 0x30(0xC)
	int32_t AxisIndex; // 0x3C(0x4)
};

// Class InteractiveToolsFramework.GizmoComponentAxisSource
// Size : 0x40 (Inherited : 0x28)
struct UGizmoComponentAxisSource : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
	struct USceneComponent* Component; // 0x30(0x8)
	int32_t AxisIndex; // 0x38(0x4)
	bool bLocalAxes; // 0x3C(0x1)
	unsigned char UnknownData_3D[0x0003]; // 0x3D(0x3)
};

// Class InteractiveToolsFramework.InteractiveToolPropertySet
// Size : 0x50 (Inherited : 0x28)
struct UInteractiveToolPropertySet : UObject {
	unsigned char UnknownData_28[0x0018]; // 0x28(0x18)
	struct UObject* CachedProperties; // 0x40(0x8)
	bool bIsPropertySetEnabled; // 0x48(0x1)
	unsigned char UnknownData_49[0x0007]; // 0x49(0x7)
};

// Class InteractiveToolsFramework.BrushBaseProperties
// Size : 0x68 (Inherited : 0x50)
struct UBrushBaseProperties : UInteractiveToolPropertySet {
	float BrushSize; // 0x50(0x4)
	bool bSpecifyRadius; // 0x54(0x1)
	unsigned char UnknownData_55[0x0003]; // 0x55(0x3)
	float BrushRadius; // 0x58(0x4)
	float BrushStrength; // 0x5C(0x4)
	float BrushFalloffAmount; // 0x60(0x4)
	bool bShowStrength; // 0x64(0x1)
	bool bShowFalloff; // 0x65(0x1)
	unsigned char UnknownData_66[0x0002]; // 0x66(0x2)
};

// Class InteractiveToolsFramework.InteractiveTool
// Size : 0x80 (Inherited : 0x28)
struct UInteractiveTool : UObject {
	unsigned char UnknownData_28[0x0020]; // 0x28(0x20)
	struct UInputBehaviorSet* InputBehaviors; // 0x48(0x8)
	struct TArray<struct UObject*> ToolPropertyObjects; // 0x50(0x10)
	unsigned char UnknownData_60[0x0020]; // 0x60(0x20)
};

// Class InteractiveToolsFramework.SingleSelectionTool
// Size : 0x88 (Inherited : 0x80)
struct USingleSelectionTool : UInteractiveTool {
	unsigned char UnknownData_80[0x0008]; // 0x80(0x8)
};

// Class InteractiveToolsFramework.MeshSurfacePointTool
// Size : 0xC0 (Inherited : 0x88)
struct UMeshSurfacePointTool : USingleSelectionTool {
	unsigned char UnknownData_88[0x0038]; // 0x88(0x38)
};

// Class InteractiveToolsFramework.BaseBrushTool
// Size : 0x1B8 (Inherited : 0xC0)
struct UBaseBrushTool : UMeshSurfacePointTool {
	struct UBrushBaseProperties* BrushProperties; // 0xC0(0x8)
	bool bInBrushStroke; // 0xC8(0x1)
	unsigned char UnknownData_C9[0x0003]; // 0xC9(0x3)
	struct FBrushStampData LastBrushStamp; // 0xCC(0xA8)
	unsigned char UnknownData_174[0x0014]; // 0x174(0x14)
	SoftClassProperty PropertyClass; // 0x188(0x28)
	struct UBrushStampIndicator* BrushStampIndicator; // 0x1B0(0x8)
};

// Class InteractiveToolsFramework.BrushStampIndicatorBuilder
// Size : 0x28 (Inherited : 0x28)
struct UBrushStampIndicatorBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.BrushStampIndicator
// Size : 0xB0 (Inherited : 0x38)
struct UBrushStampIndicator : UInteractiveGizmo {
	float BrushRadius; // 0x38(0x4)
	float BrushFalloff; // 0x3C(0x4)
	struct FVector BrushPosition; // 0x40(0xC)
	struct FVector BrushNormal; // 0x4C(0xC)
	bool bDrawIndicatorLines; // 0x58(0x1)
	bool bDrawRadiusCircle; // 0x59(0x1)
	bool bDrawFalloffCircle; // 0x5A(0x1)
	unsigned char UnknownData_5B[0x0001]; // 0x5B(0x1)
	int32_t SampleStepCount; // 0x5C(0x4)
	struct FLinearColor LineColor; // 0x60(0x10)
	float LineThickness; // 0x70(0x4)
	bool bDepthTested; // 0x74(0x1)
	bool bDrawSecondaryLines; // 0x75(0x1)
	unsigned char UnknownData_76[0x0002]; // 0x76(0x2)
	float SecondaryLineThickness; // 0x78(0x4)
	struct FLinearColor SecondaryLineColor; // 0x7C(0x10)
	unsigned char UnknownData_8C[0x0004]; // 0x8C(0x4)
	struct UPrimitiveComponent* AttachedComponent; // 0x90(0x8)
	unsigned char UnknownData_98[0x0018]; // 0x98(0x18)
};

// Class InteractiveToolsFramework.ClickDragInputBehavior
// Size : 0x140 (Inherited : 0x80)
struct UClickDragInputBehavior : UAnyButtonInputBehavior {
	unsigned char UnknownData_80[0x00A0]; // 0x80(0xA0)
	bool bUpdateModifiersDuringDrag; // 0x120(0x1)
	unsigned char UnknownData_121[0x001F]; // 0x121(0x1F)
};

// Class InteractiveToolsFramework.LocalClickDragInputBehavior
// Size : 0x280 (Inherited : 0x140)
struct ULocalClickDragInputBehavior : UClickDragInputBehavior {
	unsigned char UnknownData_140[0x0140]; // 0x140(0x140)
};

// Class InteractiveToolsFramework.InteractiveToolBuilder
// Size : 0x28 (Inherited : 0x28)
struct UInteractiveToolBuilder : UObject {
};

// Class InteractiveToolsFramework.ClickDragToolBuilder
// Size : 0x28 (Inherited : 0x28)
struct UClickDragToolBuilder : UInteractiveToolBuilder {
};

// Class InteractiveToolsFramework.ClickDragTool
// Size : 0x88 (Inherited : 0x80)
struct UClickDragTool : UInteractiveTool {
	unsigned char UnknownData_80[0x0008]; // 0x80(0x8)
};

// Class InteractiveToolsFramework.InternalToolFrameworkActor
// Size : 0x220 (Inherited : 0x220)
struct AInternalToolFrameworkActor : AActor {
};

// Class InteractiveToolsFramework.GizmoActor
// Size : 0x220 (Inherited : 0x220)
struct AGizmoActor : AInternalToolFrameworkActor {
};

// Class InteractiveToolsFramework.GizmoBaseComponent
// Size : 0x430 (Inherited : 0x410)
struct UGizmoBaseComponent : UPrimitiveComponent {
	struct FLinearColor Color; // 0x408(0x10)
	float HoverSizeMultiplier; // 0x418(0x4)
	float PixelHitDistanceThreshold; // 0x41C(0x4)
	unsigned char UnknownData_428[0x0008]; // 0x428(0x8)

	void UpdateWorldLocalState(bool bWorldIn); // Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState // (Final|Native|Public) // Param Size : 0x1, 0x7FF776B50FA0
	void UpdateHoverState(bool bHoveringIn); // Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState // (Final|Native|Public) // Param Size : 0x1, 0x7FF776B50F10
};

// Class InteractiveToolsFramework.GizmoArrowComponent
// Size : 0x450 (Inherited : 0x430)
struct UGizmoArrowComponent : UGizmoBaseComponent {
	struct FVector Direction; // 0x428(0xC)
	float Gap; // 0x434(0x4)
	float Length; // 0x438(0x4)
	float Thickness; // 0x43C(0x4)
	unsigned char UnknownData_448[0x0008]; // 0x448(0x8)
};

// Class InteractiveToolsFramework.GizmoBoxComponent
// Size : 0x470 (Inherited : 0x430)
struct UGizmoBoxComponent : UGizmoBaseComponent {
	struct FVector Origin; // 0x428(0xC)
	unsigned char UnknownData_43C[0x0004]; // 0x43C(0x4)
	struct FQuat Rotation; // 0x440(0x10)
	struct FVector Dimensions; // 0x450(0xC)
	float LineThickness; // 0x45C(0x4)
	bool bRemoveHiddenLines; // 0x460(0x1)
	bool bEnableAxisFlip; // 0x461(0x1)
	unsigned char UnknownData_462[0x000E]; // 0x462(0xE)
};

// Class InteractiveToolsFramework.GizmoCircleComponent
// Size : 0x450 (Inherited : 0x430)
struct UGizmoCircleComponent : UGizmoBaseComponent {
	struct FVector Normal; // 0x428(0xC)
	float Radius; // 0x434(0x4)
	float Thickness; // 0x438(0x4)
	int32_t NumSides; // 0x43C(0x4)
	bool bViewAligned; // 0x440(0x1)
	bool bOnlyAllowFrontFacingHits; // 0x441(0x1)
	unsigned char UnknownData_44A[0x0006]; // 0x44A(0x6)
};

// Class InteractiveToolsFramework.GizmoTransformSource
// Size : 0x28 (Inherited : 0x28)
struct UGizmoTransformSource : UInterface {

	void SetTransform(struct FTransform NewTransform); // Function InteractiveToolsFramework.GizmoTransformSource.SetTransform // (Native|Public|HasOutParms|HasDefaults) // Param Size : 0x30, 0x7FF776B50DA0
	struct FTransform GetTransform(); // Function InteractiveToolsFramework.GizmoTransformSource.GetTransform // (Native|Public|HasDefaults|Const) // Param Size : 0x30, 0x7FF776B50BF0
};

// Class InteractiveToolsFramework.GizmoAxisSource
// Size : 0x28 (Inherited : 0x28)
struct UGizmoAxisSource : UInterface {

	bool HasTangentVectors(); // Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors // (Native|Public|Const) // Param Size : 0x1, 0x7FF776B50C60
	void GetTangentVectors(struct FVector TangentXOut, struct FVector TangentYOut); // Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors // (Native|Public|HasOutParms|HasDefaults|Const) // Param Size : 0x18, 0x7FF776B50B00
	struct FVector GetOrigin(); // Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin // (Native|Public|HasDefaults|Const) // Param Size : 0xC, 0x7FF776B50A50
	struct FVector GetDirection(); // Function InteractiveToolsFramework.GizmoAxisSource.GetDirection // (Native|Public|HasDefaults|Const) // Param Size : 0xC, 0x7FF776B50A10
};

// Class InteractiveToolsFramework.GizmoClickTarget
// Size : 0x28 (Inherited : 0x28)
struct UGizmoClickTarget : UInterface {

	void UpdateHoverState(bool bHovering); // Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState // (Native|Public|Const) // Param Size : 0x1, 0x7FF776B50E80
};

// Class InteractiveToolsFramework.GizmoStateTarget
// Size : 0x28 (Inherited : 0x28)
struct UGizmoStateTarget : UInterface {

	void EndUpdate(); // Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate // (Native|Public) // Param Size : 0x0, 0x7FF776B509B0
	void BeginUpdate(); // Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate // (Native|Public) // Param Size : 0x0, 0x7FF776B509D0
};

// Class InteractiveToolsFramework.GizmoFloatParameterSource
// Size : 0x28 (Inherited : 0x28)
struct UGizmoFloatParameterSource : UInterface {

	void SetParameter(float NewValue); // Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter // (Native|Public) // Param Size : 0x4, 0x7FF776B50C90
	float GetParameter(); // Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter // (Native|Public|Const) // Param Size : 0x4, 0x7FF776B50A90
	void EndModify(); // Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify // (Native|Public) // Param Size : 0x0, 0x7FF776B509F0
	void BeginModify(); // Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify // (Native|Public) // Param Size : 0x0, 0x7FF776B509B0
};

// Class InteractiveToolsFramework.GizmoVec2ParameterSource
// Size : 0x28 (Inherited : 0x28)
struct UGizmoVec2ParameterSource : UInterface {

	void SetParameter(struct FVector2D NewValue); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter // (Native|Public|HasOutParms|HasDefaults) // Param Size : 0x8, 0x7FF776B50D10
	struct FVector2D GetParameter(); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter // (Native|Public|HasDefaults|Const) // Param Size : 0x8, 0x7FF776B50AC0
	void EndModify(); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify // (Native|Public) // Param Size : 0x0, 0x7FF776B509F0
	void BeginModify(); // Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify // (Native|Public) // Param Size : 0x0, 0x7FF776B509B0
};

// Class InteractiveToolsFramework.GizmoLineHandleComponent
// Size : 0x450 (Inherited : 0x430)
struct UGizmoLineHandleComponent : UGizmoBaseComponent {
	struct FVector Normal; // 0x428(0xC)
	float HandleSize; // 0x434(0x4)
	float Thickness; // 0x438(0x4)
	struct FVector Direction; // 0x43C(0xC)
	float Length; // 0x448(0x4)
	bool bImageScale; // 0x44C(0x1)
};

// Class InteractiveToolsFramework.GizmoRectangleComponent
// Size : 0x460 (Inherited : 0x430)
struct UGizmoRectangleComponent : UGizmoBaseComponent {
	struct FVector DirectionX; // 0x428(0xC)
	struct FVector DirectionY; // 0x434(0xC)
	float OffsetX; // 0x440(0x4)
	float OffsetY; // 0x444(0x4)
	float LengthX; // 0x448(0x4)
	float LengthY; // 0x44C(0x4)
	float Thickness; // 0x450(0x4)
	enum class None SegmentFlags; // 0x454(0x1)
	unsigned char UnknownData_45D[0x0003]; // 0x45D(0x3)
};

// Class InteractiveToolsFramework.GizmoLambdaHitTarget
// Size : 0xB0 (Inherited : 0x28)
struct UGizmoLambdaHitTarget : UObject {
	unsigned char UnknownData_28[0x0088]; // 0x28(0x88)
};

// Class InteractiveToolsFramework.GizmoComponentHitTarget
// Size : 0x80 (Inherited : 0x28)
struct UGizmoComponentHitTarget : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
	struct UPrimitiveComponent* Component; // 0x30(0x8)
	unsigned char UnknownData_38[0x0048]; // 0x38(0x48)
};

// Class InteractiveToolsFramework.InputBehaviorSet
// Size : 0x38 (Inherited : 0x28)
struct UInputBehaviorSet : UObject {
	struct TArray<struct FBehaviorInfo> Behaviors; // 0x28(0x10)
};

// Class InteractiveToolsFramework.InputBehaviorSource
// Size : 0x28 (Inherited : 0x28)
struct UInputBehaviorSource : UInterface {
};

// Class InteractiveToolsFramework.InputRouter
// Size : 0xB0 (Inherited : 0x28)
struct UInputRouter : UObject {
	bool bAutoInvalidateOnHover; // 0x28(0x1)
	bool bAutoInvalidateOnCapture; // 0x29(0x1)
	unsigned char UnknownData_2A[0x000E]; // 0x2A(0xE)
	struct UInputBehaviorSet* ActiveInputBehaviors; // 0x38(0x8)
	unsigned char UnknownData_40[0x0070]; // 0x40(0x70)
};

// Class InteractiveToolsFramework.InteractionMechanic
// Size : 0x30 (Inherited : 0x28)
struct UInteractionMechanic : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// Class InteractiveToolsFramework.InteractiveGizmoManager
// Size : 0xB8 (Inherited : 0x28)
struct UInteractiveGizmoManager : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
	struct TArray<struct FActiveGizmo> ActiveGizmos; // 0x30(0x10)
	unsigned char UnknownData_40[0x0018]; // 0x40(0x18)
	struct TMap<struct FString, struct UInteractiveGizmoBuilder*> GizmoBuilders; // 0x58(0x50)
	unsigned char UnknownData_A8[0x0010]; // 0xA8(0x10)
};

// Class InteractiveToolsFramework.ToolContextTransactionProvider
// Size : 0x28 (Inherited : 0x28)
struct UToolContextTransactionProvider : UInterface {
};

// Class InteractiveToolsFramework.InteractiveToolManager
// Size : 0x138 (Inherited : 0x28)
struct UInteractiveToolManager : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
	struct UInteractiveTool* ActiveLeftTool; // 0x30(0x8)
	struct UInteractiveTool* ActiveRightTool; // 0x38(0x8)
	unsigned char UnknownData_40[0x0050]; // 0x40(0x50)
	struct TMap<struct FString, struct UInteractiveToolBuilder*> ToolBuilders; // 0x90(0x50)
	unsigned char UnknownData_E0[0x0058]; // 0xE0(0x58)
};

// Class InteractiveToolsFramework.ToolFrameworkComponent
// Size : 0x28 (Inherited : 0x28)
struct UToolFrameworkComponent : UInterface {
};

// Class InteractiveToolsFramework.InteractiveToolsContext
// Size : 0x98 (Inherited : 0x28)
struct UInteractiveToolsContext : UObject {
	unsigned char UnknownData_28[0x0030]; // 0x28(0x30)
	struct UInputRouter* InputRouter; // 0x58(0x8)
	struct UInteractiveToolManager* ToolManager; // 0x60(0x8)
	struct UInteractiveGizmoManager* GizmoManager; // 0x68(0x8)
	SoftClassProperty ToolManagerClass; // 0x70(0x28)
};

// Class InteractiveToolsFramework.IntervalGizmoActor
// Size : 0x238 (Inherited : 0x220)
struct AIntervalGizmoActor : AGizmoActor {
	struct UGizmoLineHandleComponent* UpIntervalComponent; // 0x220(0x8)
	struct UGizmoLineHandleComponent* DownIntervalComponent; // 0x228(0x8)
	struct UGizmoLineHandleComponent* ForwardIntervalComponent; // 0x230(0x8)
};

// Class InteractiveToolsFramework.IntervalGizmoBuilder
// Size : 0xC0 (Inherited : 0x28)
struct UIntervalGizmoBuilder : UInteractiveGizmoBuilder {
	unsigned char UnknownData_28[0x0098]; // 0x28(0x98)
};

// Class InteractiveToolsFramework.IntervalGizmo
// Size : 0x130 (Inherited : 0x38)
struct UIntervalGizmo : UInteractiveGizmo {
	struct UGizmoTransformChangeStateTarget* StateTarget; // 0x38(0x8)
	unsigned char UnknownData_40[0x0010]; // 0x40(0x10)
	struct UTransformProxy* TransformProxy; // 0x50(0x8)
	struct TArray<struct UPrimitiveComponent*> ActiveComponents; // 0x58(0x10)
	struct TArray<struct UInteractiveGizmo*> ActiveGizmos; // 0x68(0x10)
	unsigned char UnknownData_78[0x0018]; // 0x78(0x18)
	struct UGizmoComponentAxisSource* AxisYSource; // 0x90(0x8)
	struct UGizmoComponentAxisSource* AxisZSource; // 0x98(0x8)
	unsigned char UnknownData_A0[0x0090]; // 0xA0(0x90)
};

// Class InteractiveToolsFramework.GizmoBaseFloatParameterSource
// Size : 0x48 (Inherited : 0x28)
struct UGizmoBaseFloatParameterSource : UObject {
	unsigned char UnknownData_28[0x0020]; // 0x28(0x20)
};

// Class InteractiveToolsFramework.GizmoAxisIntervalParameterSource
// Size : 0x60 (Inherited : 0x48)
struct UGizmoAxisIntervalParameterSource : UGizmoBaseFloatParameterSource {
	struct TScriptInterface<None> FloatParameterSource; // 0x48(0x10)
	float MinParameter; // 0x58(0x4)
	float MaxParameter; // 0x5C(0x4)
};

// Class InteractiveToolsFramework.KeyAsModifierInputBehavior
// Size : 0x110 (Inherited : 0x30)
struct UKeyAsModifierInputBehavior : UInputBehavior {
	unsigned char UnknownData_30[0x00E0]; // 0x30(0xE0)
};

// Class InteractiveToolsFramework.MeshSurfacePointToolBuilder
// Size : 0x30 (Inherited : 0x28)
struct UMeshSurfacePointToolBuilder : UInteractiveToolBuilder {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// Class InteractiveToolsFramework.MouseHoverBehavior
// Size : 0x98 (Inherited : 0x30)
struct UMouseHoverBehavior : UInputBehavior {
	unsigned char UnknownData_30[0x0068]; // 0x30(0x68)
};

// Class InteractiveToolsFramework.MultiClickSequenceInputBehavior
// Size : 0x130 (Inherited : 0x80)
struct UMultiClickSequenceInputBehavior : UAnyButtonInputBehavior {
	unsigned char UnknownData_80[0x00B0]; // 0x80(0xB0)
};

// Class InteractiveToolsFramework.MultiSelectionTool
// Size : 0x90 (Inherited : 0x80)
struct UMultiSelectionTool : UInteractiveTool {
	unsigned char UnknownData_80[0x0010]; // 0x80(0x10)
};

// Class InteractiveToolsFramework.GizmoLocalFloatParameterSource
// Size : 0x58 (Inherited : 0x48)
struct UGizmoLocalFloatParameterSource : UGizmoBaseFloatParameterSource {
	float Value; // 0x48(0x4)
	struct FGizmoFloatParameterChange LastChange; // 0x4C(0x8)
	unsigned char UnknownData_54[0x0004]; // 0x54(0x4)
};

// Class InteractiveToolsFramework.GizmoBaseVec2ParameterSource
// Size : 0x48 (Inherited : 0x28)
struct UGizmoBaseVec2ParameterSource : UObject {
	unsigned char UnknownData_28[0x0020]; // 0x28(0x20)
};

// Class InteractiveToolsFramework.GizmoLocalVec2ParameterSource
// Size : 0x60 (Inherited : 0x48)
struct UGizmoLocalVec2ParameterSource : UGizmoBaseVec2ParameterSource {
	struct FVector2D Value; // 0x48(0x8)
	struct FGizmoVec2ParameterChange LastChange; // 0x50(0x10)
};

// Class InteractiveToolsFramework.GizmoAxisTranslationParameterSource
// Size : 0x110 (Inherited : 0x48)
struct UGizmoAxisTranslationParameterSource : UGizmoBaseFloatParameterSource {
	unsigned char UnknownData_48[0x0048]; // 0x48(0x48)
	struct TScriptInterface<None> AxisSource; // 0x90(0x10)
	struct TScriptInterface<None> TransformSource; // 0xA0(0x10)
	float Parameter; // 0xB0(0x4)
	struct FGizmoFloatParameterChange LastChange; // 0xB4(0x8)
	struct FVector CurTranslationAxis; // 0xBC(0xC)
	struct FVector CurTranslationOrigin; // 0xC8(0xC)
	unsigned char UnknownData_D4[0x000C]; // 0xD4(0xC)
	struct FTransform InitialTransform; // 0xE0(0x30)
};

// Class InteractiveToolsFramework.GizmoPlaneTranslationParameterSource
// Size : 0x130 (Inherited : 0x48)
struct UGizmoPlaneTranslationParameterSource : UGizmoBaseVec2ParameterSource {
	unsigned char UnknownData_48[0x0048]; // 0x48(0x48)
	struct TScriptInterface<None> AxisSource; // 0x90(0x10)
	struct TScriptInterface<None> TransformSource; // 0xA0(0x10)
	struct FVector2D Parameter; // 0xB0(0x8)
	struct FGizmoVec2ParameterChange LastChange; // 0xB8(0x10)
	struct FVector CurTranslationOrigin; // 0xC8(0xC)
	struct FVector CurTranslationNormal; // 0xD4(0xC)
	struct FVector CurTranslationAxisX; // 0xE0(0xC)
	struct FVector CurTranslationAxisY; // 0xEC(0xC)
	unsigned char UnknownData_F8[0x0008]; // 0xF8(0x8)
	struct FTransform InitialTransform; // 0x100(0x30)
};

// Class InteractiveToolsFramework.GizmoAxisRotationParameterSource
// Size : 0xC0 (Inherited : 0x48)
struct UGizmoAxisRotationParameterSource : UGizmoBaseFloatParameterSource {
	struct TScriptInterface<None> AxisSource; // 0x48(0x10)
	struct TScriptInterface<None> TransformSource; // 0x58(0x10)
	float Angle; // 0x68(0x4)
	struct FGizmoFloatParameterChange LastChange; // 0x6C(0x8)
	struct FVector CurRotationAxis; // 0x74(0xC)
	struct FVector CurRotationOrigin; // 0x80(0xC)
	unsigned char UnknownData_8C[0x0004]; // 0x8C(0x4)
	struct FTransform InitialTransform; // 0x90(0x30)
};

// Class InteractiveToolsFramework.GizmoUniformScaleParameterSource
// Size : 0xF0 (Inherited : 0x48)
struct UGizmoUniformScaleParameterSource : UGizmoBaseVec2ParameterSource {
	struct TScriptInterface<None> AxisSource; // 0x48(0x10)
	struct TScriptInterface<None> TransformSource; // 0x58(0x10)
	float ScaleMultiplier; // 0x68(0x4)
	struct FVector2D Parameter; // 0x6C(0x8)
	struct FGizmoVec2ParameterChange LastChange; // 0x74(0x10)
	struct FVector CurScaleOrigin; // 0x84(0xC)
	struct FVector CurScaleNormal; // 0x90(0xC)
	struct FVector CurScaleAxisX; // 0x9C(0xC)
	struct FVector CurScaleAxisY; // 0xA8(0xC)
	unsigned char UnknownData_B4[0x000C]; // 0xB4(0xC)
	struct FTransform InitialTransform; // 0xC0(0x30)
};

// Class InteractiveToolsFramework.GizmoAxisScaleParameterSource
// Size : 0xC0 (Inherited : 0x48)
struct UGizmoAxisScaleParameterSource : UGizmoBaseFloatParameterSource {
	struct TScriptInterface<None> AxisSource; // 0x48(0x10)
	struct TScriptInterface<None> TransformSource; // 0x58(0x10)
	float ScaleMultiplier; // 0x68(0x4)
	float Parameter; // 0x6C(0x4)
	struct FGizmoFloatParameterChange LastChange; // 0x70(0x8)
	struct FVector CurScaleAxis; // 0x78(0xC)
	struct FVector CurScaleOrigin; // 0x84(0xC)
	struct FTransform InitialTransform; // 0x90(0x30)
};

// Class InteractiveToolsFramework.GizmoPlaneScaleParameterSource
// Size : 0x130 (Inherited : 0x48)
struct UGizmoPlaneScaleParameterSource : UGizmoBaseVec2ParameterSource {
	unsigned char UnknownData_48[0x0048]; // 0x48(0x48)
	struct TScriptInterface<None> AxisSource; // 0x90(0x10)
	struct TScriptInterface<None> TransformSource; // 0xA0(0x10)
	float ScaleMultiplier; // 0xB0(0x4)
	struct FVector2D Parameter; // 0xB4(0x8)
	struct FGizmoVec2ParameterChange LastChange; // 0xBC(0x10)
	struct FVector CurScaleOrigin; // 0xCC(0xC)
	struct FVector CurScaleNormal; // 0xD8(0xC)
	struct FVector CurScaleAxisX; // 0xE4(0xC)
	struct FVector CurScaleAxisY; // 0xF0(0xC)
	unsigned char UnknownData_FC[0x0004]; // 0xFC(0x4)
	struct FTransform InitialTransform; // 0x100(0x30)
};

// Class InteractiveToolsFramework.PlanePositionGizmoBuilder
// Size : 0x28 (Inherited : 0x28)
struct UPlanePositionGizmoBuilder : UInteractiveGizmoBuilder {
};

// Class InteractiveToolsFramework.PlanePositionGizmo
// Size : 0x100 (Inherited : 0x38)
struct UPlanePositionGizmo : UInteractiveGizmo {
	unsigned char UnknownData_38[0x0010]; // 0x38(0x10)
	struct TScriptInterface<None> AxisSource; // 0x48(0x10)
	struct TScriptInterface<None> ParameterSource; // 0x58(0x10)
	struct TScriptInterface<None> HitTarget; // 0x68(0x10)
	struct TScriptInterface<None> StateTarget; // 0x78(0x10)
	bool bEnableSignedAxis; // 0x88(0x1)
	bool bFlipX; // 0x89(0x1)
	bool bFlipY; // 0x8A(0x1)
	bool bInInteraction; // 0x8B(0x1)
	struct FVector InteractionOrigin; // 0x8C(0xC)
	struct FVector InteractionNormal; // 0x98(0xC)
	struct FVector InteractionAxisX; // 0xA4(0xC)
	struct FVector InteractionAxisY; // 0xB0(0xC)
	struct FVector InteractionStartPoint; // 0xBC(0xC)
	struct FVector InteractionCurPoint; // 0xC8(0xC)
	struct FVector2D InteractionStartParameter; // 0xD4(0x8)
	struct FVector2D InteractionCurParameter; // 0xDC(0x8)
	struct FVector2D ParameterSigns; // 0xE4(0x8)
	unsigned char UnknownData_EC[0x0014]; // 0xEC(0x14)
};

// Class InteractiveToolsFramework.SelectionSet
// Size : 0x40 (Inherited : 0x28)
struct USelectionSet : UObject {
	unsigned char UnknownData_28[0x0018]; // 0x28(0x18)
};

// Class InteractiveToolsFramework.MeshSelectionSet
// Size : 0x80 (Inherited : 0x40)
struct UMeshSelectionSet : USelectionSet {
	struct TArray<int32_t> Vertices; // 0x40(0x10)
	struct TArray<int32_t> Edges; // 0x50(0x10)
	struct TArray<int32_t> Faces; // 0x60(0x10)
	struct TArray<int32_t> Groups; // 0x70(0x10)
};

// Class InteractiveToolsFramework.SingleClickInputBehavior
// Size : 0x130 (Inherited : 0x80)
struct USingleClickInputBehavior : UAnyButtonInputBehavior {
	unsigned char UnknownData_80[0x0040]; // 0x80(0x40)
	bool HitTestOnRelease; // 0xC0(0x1)
	unsigned char UnknownData_C1[0x006F]; // 0xC1(0x6F)
};

// Class InteractiveToolsFramework.SingleClickToolBuilder
// Size : 0x28 (Inherited : 0x28)
struct USingleClickToolBuilder : UInteractiveToolBuilder {
};

// Class InteractiveToolsFramework.SingleClickTool
// Size : 0x88 (Inherited : 0x80)
struct USingleClickTool : UInteractiveTool {
	unsigned char UnknownData_80[0x0008]; // 0x80(0x8)
};

// Class InteractiveToolsFramework.GizmoNilStateTarget
// Size : 0x30 (Inherited : 0x28)
struct UGizmoNilStateTarget : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

// Class InteractiveToolsFramework.GizmoLambdaStateTarget
// Size : 0xB0 (Inherited : 0x28)
struct UGizmoLambdaStateTarget : UObject {
	unsigned char UnknownData_28[0x0088]; // 0x28(0x88)
};

// Class InteractiveToolsFramework.GizmoObjectModifyStateTarget
// Size : 0x58 (Inherited : 0x28)
struct UGizmoObjectModifyStateTarget : UObject {
	unsigned char UnknownData_28[0x0030]; // 0x28(0x30)
};

// Class InteractiveToolsFramework.GizmoTransformChangeStateTarget
// Size : 0xE0 (Inherited : 0x28)
struct UGizmoTransformChangeStateTarget : UObject {
	unsigned char UnknownData_28[0x0028]; // 0x28(0x28)
	struct TScriptInterface<None> TransactionManager; // 0x50(0x10)
	unsigned char UnknownData_60[0x0080]; // 0x60(0x80)
};

// Class InteractiveToolsFramework.TransformGizmoActor
// Size : 0x2A0 (Inherited : 0x220)
struct ATransformGizmoActor : AGizmoActor {
	struct UPrimitiveComponent* TranslateX; // 0x220(0x8)
	struct UPrimitiveComponent* TranslateY; // 0x228(0x8)
	struct UPrimitiveComponent* TranslateZ; // 0x230(0x8)
	struct UPrimitiveComponent* TranslateYZ; // 0x238(0x8)
	struct UPrimitiveComponent* TranslateXZ; // 0x240(0x8)
	struct UPrimitiveComponent* TranslateXY; // 0x248(0x8)
	struct UPrimitiveComponent* RotateX; // 0x250(0x8)
	struct UPrimitiveComponent* RotateY; // 0x258(0x8)
	struct UPrimitiveComponent* RotateZ; // 0x260(0x8)
	struct UPrimitiveComponent* UniformScale; // 0x268(0x8)
	struct UPrimitiveComponent* AxisScaleX; // 0x270(0x8)
	struct UPrimitiveComponent* AxisScaleY; // 0x278(0x8)
	struct UPrimitiveComponent* AxisScaleZ; // 0x280(0x8)
	struct UPrimitiveComponent* PlaneScaleYZ; // 0x288(0x8)
	struct UPrimitiveComponent* PlaneScaleXZ; // 0x290(0x8)
	struct UPrimitiveComponent* PlaneScaleXY; // 0x298(0x8)
};

// Class InteractiveToolsFramework.TransformGizmoBuilder
// Size : 0xC0 (Inherited : 0x28)
struct UTransformGizmoBuilder : UInteractiveGizmoBuilder {
	unsigned char UnknownData_28[0x0098]; // 0x28(0x98)
};

// Class InteractiveToolsFramework.TransformGizmo
// Size : 0x180 (Inherited : 0x38)
struct UTransformGizmo : UInteractiveGizmo {
	unsigned char UnknownData_38[0x0008]; // 0x38(0x8)
	struct UTransformProxy* ActiveTarget; // 0x40(0x8)
	bool bSnapToWorldGrid; // 0x48(0x1)
	bool bUseContextCoordinateSystem; // 0x49(0x1)
	unsigned char UnknownData_4A[0x0002]; // 0x4A(0x2)
	enum class EToolContextCoordinateSystem CurrentCoordinateSystem; // 0x4C(0x4)
	unsigned char UnknownData_50[0x0090]; // 0x50(0x90)
	struct TArray<struct UPrimitiveComponent*> ActiveComponents; // 0xE0(0x10)
	struct TArray<struct UPrimitiveComponent*> NonuniformScaleComponents; // 0xF0(0x10)
	struct TArray<struct UInteractiveGizmo*> ActiveGizmos; // 0x100(0x10)
	unsigned char UnknownData_110[0x0010]; // 0x110(0x10)
	struct UGizmoConstantFrameAxisSource* CameraAxisSource; // 0x120(0x8)
	struct UGizmoComponentAxisSource* AxisXSource; // 0x128(0x8)
	struct UGizmoComponentAxisSource* AxisYSource; // 0x130(0x8)
	struct UGizmoComponentAxisSource* AxisZSource; // 0x138(0x8)
	struct UGizmoComponentAxisSource* UnitAxisXSource; // 0x140(0x8)
	struct UGizmoComponentAxisSource* UnitAxisYSource; // 0x148(0x8)
	struct UGizmoComponentAxisSource* UnitAxisZSource; // 0x150(0x8)
	struct UGizmoTransformChangeStateTarget* StateTarget; // 0x158(0x8)
	struct UGizmoScaledTransformSource* ScaledTransformSource; // 0x160(0x8)
	unsigned char UnknownData_168[0x0018]; // 0x168(0x18)
};

// Class InteractiveToolsFramework.TransformProxy
// Size : 0xF0 (Inherited : 0x28)
struct UTransformProxy : UObject {
	unsigned char UnknownData_28[0x0048]; // 0x28(0x48)
	bool bRotatePerObject; // 0x70(0x1)
	bool bSetPivotMode; // 0x71(0x1)
	unsigned char UnknownData_72[0x001E]; // 0x72(0x1E)
	struct FTransform SharedTransform; // 0x90(0x30)
	struct FTransform InitialSharedTransform; // 0xC0(0x30)
};

// Class InteractiveToolsFramework.GizmoBaseTransformSource
// Size : 0x48 (Inherited : 0x28)
struct UGizmoBaseTransformSource : UObject {
	unsigned char UnknownData_28[0x0020]; // 0x28(0x20)
};

// Class InteractiveToolsFramework.GizmoComponentWorldTransformSource
// Size : 0x58 (Inherited : 0x48)
struct UGizmoComponentWorldTransformSource : UGizmoBaseTransformSource {
	struct USceneComponent* Component; // 0x48(0x8)
	bool bModifyComponentOnTransform; // 0x50(0x1)
	unsigned char UnknownData_51[0x0007]; // 0x51(0x7)
};

// Class InteractiveToolsFramework.GizmoScaledTransformSource
// Size : 0xE0 (Inherited : 0x48)
struct UGizmoScaledTransformSource : UGizmoBaseTransformSource {
	struct TScriptInterface<None> ChildTransformSource; // 0x48(0x10)
	unsigned char UnknownData_58[0x0088]; // 0x58(0x88)
};

// Class InteractiveToolsFramework.GizmoTransformProxyTransformSource
// Size : 0x50 (Inherited : 0x48)
struct UGizmoTransformProxyTransformSource : UGizmoBaseTransformSource {
	struct UTransformProxy* Proxy; // 0x48(0x8)
};

