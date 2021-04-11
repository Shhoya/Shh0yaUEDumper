// Enum Slate.EVirtualKeyboardDismissAction
enum class FEVirtualKeyboardDismissAction : uint8 {
	TextChangeOnDismiss
	TextCommitOnAccept
	TextCommitOnDismiss
	EVirtualKeyboardDismissAction_MAX
};

// Enum Slate.EVirtualKeyboardTrigger
enum class FEVirtualKeyboardTrigger : uint8 {
	OnFocusByPointer
	OnAllFocusEvents
	EVirtualKeyboardTrigger_MAX
};

// Enum Slate.ETableViewMode
enum class FETableViewMode : uint8 {
	List
	Tile
	Tree
	ETableViewMode_MAX
};

// Enum Slate.ESelectionMode
enum class FESelectionMode : uint8 {
	None
	Single
	SingleToggle
	Multi
	ESelectionMode_MAX
};

// Enum Slate.EMultiBlockType
enum class FEMultiBlockType : uint8 {
	None
	ButtonRow
	EditableText
	Heading
	MenuEntry
	MenuSeparator
	ToolBarButton
	ToolBarComboButton
	ToolBarSeparator
	Widget
	EMultiBlockType_MAX
};

// Enum Slate.EMultiBoxType
enum class FEMultiBoxType : uint8 {
	MenuBar
	ToolBar
	VerticalToolBar
	UniformToolBar
	Menu
	ButtonRow
	ToolMenuBar
	EMultiBoxType_MAX
};

// Enum Slate.EProgressBarFillType
enum class FEProgressBarFillType : uint8 {
	LeftToRight
	RightToLeft
	FillFromCenter
	TopToBottom
	BottomToTop
	EProgressBarFillType_MAX
};

// Enum Slate.EStretch
enum class FEStretch : uint8 {
	None
	Fill
	ScaleToFit
	ScaleToFitX
	ScaleToFitY
	ScaleToFill
	ScaleBySafeZone
	UserSpecified
	EStretch_MAX
};

// Enum Slate.EStretchDirection
enum class FEStretchDirection : uint8 {
	Both
	DownOnly
	UpOnly
	EStretchDirection_MAX
};

// Enum Slate.EScrollWhenFocusChanges
enum class FEScrollWhenFocusChanges : uint8 {
	NoScroll
	InstantScroll
	AnimatedScroll
	EScrollWhenFocusChanges_MAX
};

// Enum Slate.EDescendantScrollDestination
enum class FEDescendantScrollDestination : uint8 {
	IntoView
	TopOrLeft
	Center
	EDescendantScrollDestination_MAX
};

// Enum Slate.EListItemAlignment
enum class FEListItemAlignment : uint8 {
	EvenlyDistributed
	EvenlySize
	EvenlyWide
	LeftAligned
	RightAligned
	CenterAligned
	Fill
	EListItemAlignment_MAX
};

// Enum Slate.ETextFlowDirection
enum class FETextFlowDirection : uint8 {
	Auto
	LeftToRight
	RightToLeft
	ETextFlowDirection_MAX
};

// Enum Slate.ETextWrappingPolicy
enum class FETextWrappingPolicy : uint8 {
	DefaultWrapping
	AllowPerCharacterWrapping
	ETextWrappingPolicy_MAX
};

// Enum Slate.ETextJustify
enum class FETextJustify : uint8 {
	Left
	Center
	Right
	ETextJustify_MAX
};

// Enum Slate.ECustomizedToolMenuVisibility
enum class FECustomizedToolMenuVisibility : uint8 {
	None
	Visible
	Hidden
	ECustomizedToolMenuVisibility_MAX
};

// Enum Slate.EMultipleKeyBindingIndex
enum class FEMultipleKeyBindingIndex : uint8 {
	Primary
	Secondary
	NumChords
	EMultipleKeyBindingIndex_MAX
};

// Enum Slate.EUserInterfaceActionType
enum class FEUserInterfaceActionType : uint8 {
	None
	Button
	ToggleButton
	RadioButton
	Check
	CollapsedButton
	EUserInterfaceActionType_MAX
};

