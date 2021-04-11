// Enum UMG.ESlateAccessibleBehavior
enum class FESlateAccessibleBehavior : uint8 {
	NotAccessible
	Auto
	Summary
	Custom
	ToolTip
	ESlateAccessibleBehavior_MAX
};

// Enum UMG.ESlateVisibility
enum class FESlateVisibility : uint8 {
	Visible
	Collapsed
	Hidden
	HitTestInvisible
	SelfHitTestInvisible
	ESlateVisibility_MAX
};

// Enum UMG.EVirtualKeyboardType
enum class FEVirtualKeyboardType : uint8 {
	Default
	Number
	Web
	Email
	Password
	AlphaNumeric
	EVirtualKeyboardType_MAX
};

// Enum UMG.EDragPivot
enum class FEDragPivot : uint8 {
	MouseDown
	TopLeft
	TopCenter
	TopRight
	CenterLeft
	CenterCenter
	CenterRight
	BottomLeft
	BottomCenter
	BottomRight
	EDragPivot_MAX
};

// Enum UMG.EDynamicBoxType
enum class FEDynamicBoxType : uint8 {
	Horizontal
	Vertical
	Wrap
	VerticalWrap
	Radial
	Overlay
	EDynamicBoxType_MAX
};

// Enum UMG.ESlateSizeRule
enum class FESlateSizeRule : uint8 {
	Automatic
	Fill
	ESlateSizeRule_MAX
};

// Enum UMG.EUMGSequencePlayMode
enum class FEUMGSequencePlayMode : uint8 {
	Forward
	Reverse
	PingPong
	EUMGSequencePlayMode_MAX
};

// Enum UMG.EWidgetAnimationEvent
enum class FEWidgetAnimationEvent : uint8 {
	Started
	Finished
	EWidgetAnimationEvent_MAX
};

// Enum UMG.EWidgetTickFrequency
enum class FEWidgetTickFrequency : uint8 {
	Never
	Auto
	EWidgetTickFrequency_MAX
};

// Enum UMG.EWidgetDesignFlags
enum class FEWidgetDesignFlags : uint8 {
	None
	Designing
	ShowOutline
	ExecutePreConstruct
	EWidgetDesignFlags_MAX
};

// Enum UMG.EBindingKind
enum class FEBindingKind : uint8 {
	Function
	Property
	EBindingKind_MAX
};

// Enum UMG.ETickMode
enum class FETickMode : uint8 {
	Disabled
	Enabled
	Automatic
	ETickMode_MAX
};

// Enum UMG.EWindowVisibility
enum class FEWindowVisibility : uint8 {
	Visible
	SelfHitTestInvisible
	EWindowVisibility_MAX
};

// Enum UMG.EWidgetGeometryMode
enum class FEWidgetGeometryMode : uint8 {
	Plane
	Cylinder
	EWidgetGeometryMode_MAX
};

// Enum UMG.EWidgetBlendMode
enum class FEWidgetBlendMode : uint8 {
	Opaque
	Masked
	Transparent
	EWidgetBlendMode_MAX
};

// Enum UMG.EWidgetTimingPolicy
enum class FEWidgetTimingPolicy : uint8 {
	RealTime
	GameTime
	EWidgetTimingPolicy_MAX
};

// Enum UMG.EWidgetSpace
enum class FEWidgetSpace : uint8 {
	World
	Screen
	EWidgetSpace_MAX
};

// Enum UMG.EWidgetInteractionSource
enum class FEWidgetInteractionSource : uint8 {
	World
	Mouse
	CenterScreen
	Custom
	EWidgetInteractionSource_MAX
};

