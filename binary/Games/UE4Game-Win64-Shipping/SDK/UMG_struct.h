// ScriptStruct UMG.EventReply
// Size : 0xB8 (Inherited : 0x0)
struct FEventReply {
	unsigned char UnknownData_0[0x00B8]; // 0x0(0xB8)
};

// ScriptStruct UMG.WidgetTransform
// Size : 0x1C (Inherited : 0x0)
struct FWidgetTransform {
	struct FVector2D Translation; // 0x0(0x8)
	struct FVector2D Scale; // 0x8(0x8)
	struct FVector2D Shear; // 0x10(0x8)
	float Angle; // 0x18(0x4)
};

// ScriptStruct UMG.PaintContext
// Size : 0x30 (Inherited : 0x0)
struct FPaintContext {
	unsigned char UnknownData_0[0x0030]; // 0x0(0x30)
};

// ScriptStruct UMG.ShapedTextOptions
// Size : 0x3 (Inherited : 0x0)
struct FShapedTextOptions {
	unsigned char bOverride_TextShapingMethod : 1; // 0x0(0x1)
	unsigned char bOverride_TextFlowDirection : 1; // 0x0(0x1)
	unsigned char UnknownData_0_2 : 6; // 0x0(0x1)
	enum class ETextShapingMethod TextShapingMethod; // 0x1(0x1)
	enum class ETextFlowDirection TextFlowDirection; // 0x2(0x1)
};

// ScriptStruct UMG.AnchorData
// Size : 0x28 (Inherited : 0x0)
struct FAnchorData {
	struct FMargin Offsets; // 0x0(0x10)
	struct FAnchors Anchors; // 0x10(0x10)
	struct FVector2D Alignment; // 0x20(0x8)
};

// ScriptStruct UMG.DynamicPropertyPath
// Size : 0x28 (Inherited : 0x28)
struct FDynamicPropertyPath : FCachedPropertyPath {
};

// ScriptStruct UMG.MovieScene2DTransformMask
// Size : 0x4 (Inherited : 0x0)
struct FMovieScene2DTransformMask {
	uint32_t Mask; // 0x0(0x4)
};

// ScriptStruct UMG.MovieScene2DTransformSectionTemplate
// Size : 0x4B0 (Inherited : 0x48)
struct FMovieScene2DTransformSectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneFloatChannel Translation[2]; // 0x48(0x140)
	struct FMovieSceneFloatChannel Rotation; // 0x188(0xA0)
	struct FMovieSceneFloatChannel Scale[2]; // 0x228(0x140)
	struct FMovieSceneFloatChannel Shear[2]; // 0x368(0x140)
	enum class EMovieSceneBlendType BlendType; // 0x4A8(0x1)
	unsigned char UnknownData_4A9[0x0003]; // 0x4A9(0x3)
	struct FMovieScene2DTransformMask Mask; // 0x4AC(0x4)
};

// ScriptStruct UMG.MovieSceneMarginSectionTemplate
// Size : 0x2D0 (Inherited : 0x48)
struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate {
	struct FMovieSceneFloatChannel TopCurve; // 0x48(0xA0)
	struct FMovieSceneFloatChannel LeftCurve; // 0xE8(0xA0)
	struct FMovieSceneFloatChannel RightCurve; // 0x188(0xA0)
	struct FMovieSceneFloatChannel BottomCurve; // 0x228(0xA0)
	enum class EMovieSceneBlendType BlendType; // 0x2C8(0x1)
	unsigned char UnknownData_2C9[0x0007]; // 0x2C9(0x7)
};

// ScriptStruct UMG.MovieSceneWidgetMaterialSectionTemplate
// Size : 0x90 (Inherited : 0x80)
struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	struct TArray<struct FName> BrushPropertyNamePath; // 0x80(0x10)
};

// ScriptStruct UMG.RichTextStyleRow
// Size : 0x270 (Inherited : 0x8)
struct FRichTextStyleRow : FTableRowBase {
	struct FTextBlockStyle TextStyle; // 0x8(0x268)
};

// ScriptStruct UMG.RichImageRow
// Size : 0x90 (Inherited : 0x8)
struct FRichImageRow : FTableRowBase {
	struct FSlateBrush Brush; // 0x8(0x88)
};

// ScriptStruct UMG.SlateMeshVertex
// Size : 0x3C (Inherited : 0x0)
struct FSlateMeshVertex {
	struct FVector2D Position; // 0x0(0x8)
	struct FColor Color; // 0x8(0x4)
	struct FVector2D UV0; // 0xC(0x8)
	struct FVector2D UV1; // 0x14(0x8)
	struct FVector2D UV2; // 0x1C(0x8)
	struct FVector2D UV3; // 0x24(0x8)
	struct FVector2D UV4; // 0x2C(0x8)
	struct FVector2D UV5; // 0x34(0x8)
};

// ScriptStruct UMG.SlateChildSize
// Size : 0x8 (Inherited : 0x0)
struct FSlateChildSize {
	float Value; // 0x0(0x4)
	enum class ESlateSizeRule SizeRule; // 0x4(0x1)
	unsigned char UnknownData_5[0x0003]; // 0x5(0x3)
};

// ScriptStruct UMG.NamedSlotBinding
// Size : 0x10 (Inherited : 0x0)
struct FNamedSlotBinding {
	struct FName Name; // 0x0(0x8)
	struct UWidget* Content; // 0x8(0x8)
};

// ScriptStruct UMG.AnimationEventBinding
// Size : 0x28 (Inherited : 0x0)
struct FAnimationEventBinding {
	struct UWidgetAnimation* Animation; // 0x0(0x8)
	struct FDelegate Delegate; // 0x8(0x10)
	enum class EWidgetAnimationEvent AnimationEvent; // 0x18(0x1)
	unsigned char UnknownData_19[0x0003]; // 0x19(0x3)
	struct FName UserTag; // 0x1C(0x8)
	unsigned char UnknownData_24[0x0004]; // 0x24(0x4)
};

// ScriptStruct UMG.UserWidgetPool
// Size : 0x80 (Inherited : 0x0)
struct FUserWidgetPool {
	struct TArray<struct UUserWidget*> ActiveWidgets; // 0x0(0x10)
	struct TArray<struct UUserWidget*> InactiveWidgets; // 0x10(0x10)
	unsigned char UnknownData_20[0x0060]; // 0x20(0x60)
};

// ScriptStruct UMG.WidgetAnimationBinding
// Size : 0x24 (Inherited : 0x0)
struct FWidgetAnimationBinding {
	struct FName WidgetName; // 0x0(0x8)
	struct FName SlotWidgetName; // 0x8(0x8)
	struct FGuid AnimationGuid; // 0x10(0x10)
	bool bIsRootWidget; // 0x20(0x1)
	unsigned char UnknownData_21[0x0003]; // 0x21(0x3)
};

// ScriptStruct UMG.BlueprintWidgetAnimationDelegateBinding
// Size : 0x1C (Inherited : 0x0)
struct FBlueprintWidgetAnimationDelegateBinding {
	enum class EWidgetAnimationEvent Action; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	struct FName AnimationToBind; // 0x4(0x8)
	struct FName FunctionNameToBind; // 0xC(0x8)
	struct FName UserTag; // 0x14(0x8)
};

// ScriptStruct UMG.DelegateRuntimeBinding
// Size : 0x50 (Inherited : 0x0)
struct FDelegateRuntimeBinding {
	struct FString ObjectName; // 0x0(0x10)
	struct FName PropertyName; // 0x10(0x8)
	struct FName FunctionName; // 0x18(0x8)
	struct FDynamicPropertyPath SourcePath; // 0x20(0x28)
	enum class EBindingKind Kind; // 0x48(0x1)
	unsigned char UnknownData_49[0x0007]; // 0x49(0x7)
};

// ScriptStruct UMG.WidgetComponentInstanceData
// Size : 0xB8 (Inherited : 0xA8)
struct FWidgetComponentInstanceData : FSceneComponentInstanceData {
	unsigned char UnknownData_A8[0x0010]; // 0xA8(0x10)
};

// ScriptStruct UMG.WidgetNavigationData
// Size : 0x24 (Inherited : 0x0)
struct FWidgetNavigationData {
	enum class EUINavigationRule Rule; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	struct FName WidgetToFocus; // 0x4(0x8)
	struct FWeakObjectPtr<struct UWidget> Widget; // 0xC(0x8)
	struct FDelegate CustomDelegate; // 0x14(0x10)
};

