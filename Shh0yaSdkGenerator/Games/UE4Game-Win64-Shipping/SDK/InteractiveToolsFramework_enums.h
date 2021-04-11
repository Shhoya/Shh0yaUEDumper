// Enum InteractiveToolsFramework.EInputCaptureState
enum class FEInputCaptureState : uint8 {
	Begin
	Continue
	End
	Ignore
	EInputCaptureState_MAX
};

// Enum InteractiveToolsFramework.EInputCaptureRequestType
enum class FEInputCaptureRequestType : uint8 {
	Begin
	Ignore
	EInputCaptureRequestType_MAX
};

// Enum InteractiveToolsFramework.EInputCaptureSide
enum class FEInputCaptureSide : uint8 {
	None
	Left
	Right
	Both
	Any
	EInputCaptureSide_MAX
};

// Enum InteractiveToolsFramework.EInputDevices
enum class FEInputDevices : uint8 {
	None
	Keyboard
	Mouse
	Gamepad
	OculusTouch
	HTCViveWands
	AnySpatialDevice
	TabletFingers
	EInputDevices_MAX
};

// Enum InteractiveToolsFramework.ETransformGizmoSubElements
enum class FETransformGizmoSubElements : uint8 {
	None
	TranslateAxisX
	TranslateAxisY
	TranslateAxisZ
	TranslateAllAxes
	TranslatePlaneXY
	TranslatePlaneXZ
	TranslatePlaneYZ
	TranslateAllPlanes
	RotateAxisX
	RotateAxisY
	RotateAxisZ
	RotateAllAxes
	ScaleAxisX
	ScaleAxisY
	ScaleAxisZ
	ScaleAllAxes
	ScalePlaneYZ
	ScalePlaneXZ
	ScalePlaneXY
	ScaleAllPlanes
	ScaleUniform
	StandardTranslateRotate
	TranslateRotateUniformScale
	FullTranslateRotateScale
	ETransformGizmoSubElements_MAX
};

// Enum InteractiveToolsFramework.EToolChangeTrackingMode
enum class FEToolChangeTrackingMode : uint8 {
	NoChangeTracking
	UndoToExit
	FullUndoRedo
	EToolChangeTrackingMode_MAX
};

// Enum InteractiveToolsFramework.EToolSide
enum class FEToolSide : uint8 {
	Left
	Mouse
	Right
	EToolSide_MAX
};

// Enum InteractiveToolsFramework.EViewInteractionState
enum class FEViewInteractionState : uint8 {
	None
	Hovered
	Focused
	EViewInteractionState_MAX
};

// Enum InteractiveToolsFramework.ESelectedObjectsModificationType
enum class FESelectedObjectsModificationType : uint8 {
	Replace
	Add
	Remove
	Clear
	ESelectedObjectsModificationType_MAX
};

// Enum InteractiveToolsFramework.EToolMessageLevel
enum class FEToolMessageLevel : uint8 {
	Internal
	UserMessage
	UserNotification
	UserWarning
	UserError
	EToolMessageLevel_MAX
};

// Enum InteractiveToolsFramework.EToolContextCoordinateSystem
enum class FEToolContextCoordinateSystem : uint8 {
	World
	Local
	EToolContextCoordinateSystem_MAX
};

// Enum InteractiveToolsFramework.EStandardToolContextMaterials
enum class FEStandardToolContextMaterials : uint8 {
	VertexColorMaterial
	EStandardToolContextMaterials_MAX
};

// Enum InteractiveToolsFramework.ESceneSnapQueryTargetType
enum class FESceneSnapQueryTargetType : uint8 {
	None
	MeshVertex
	MeshEdge
	Grid
	All
	ESceneSnapQueryTargetType_MAX
};

// Enum InteractiveToolsFramework.ESceneSnapQueryType
enum class FESceneSnapQueryType : uint8 {
	Position
	Rotation
	ESceneSnapQueryType_MAX
};

