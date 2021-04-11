// Enum MagicLeap.PurchaseType
enum class FPurchaseType : uint8 {
	Consumable
	Nonconsumable
	Undefined
	PurchaseType_MAX
};

// Enum MagicLeap.EFocusLostReason
enum class FEFocusLostReason : uint8 {
	EFocusLostReason_Invalid
	EFocusLostReason_System
	EFocusLostReason_MAX
};

// Enum MagicLeap.EMagicLeapMeshLOD
enum class FEMagicLeapMeshLOD : uint8 {
	Minimum
	Medium
	Maximum
	EMagicLeapMeshLOD_MAX
};

// Enum MagicLeap.EMagicLeapMeshState
enum class FEMagicLeapMeshState : uint8 {
	New
	Updated
	Deleted
	Unchanged
	EMagicLeapMeshState_MAX
};

// Enum MagicLeap.EMagicLeapMeshVertexColorMode
enum class FEMagicLeapMeshVertexColorMode : uint8 {
	None
	Confidence
	Block
	LOD
	EMagicLeapMeshVertexColorMode_MAX
};

// Enum MagicLeap.EMagicLeapMeshType
enum class FEMagicLeapMeshType : uint8 {
	Triangles
	PointCloud
	EMagicLeapMeshType_MAX
};

// Enum MagicLeap.EMagicLeapRaycastResultState
enum class FEMagicLeapRaycastResultState : uint8 {
	RequestFailed
	NoCollision
	HitUnobserved
	HitObserved
	EMagicLeapRaycastResultState_MAX
};

// Enum MagicLeap.CloudStatus
enum class FCloudStatus : uint8 {
	CloudStatus_NotDone
	CloudStatus_Done
	CloudStatus_MAX
};

// Enum MagicLeap.EMagicLeapHeadTrackingMapEvent
enum class FEMagicLeapHeadTrackingMapEvent : uint8 {
	Lost
	Recovered
	RecoveryFailed
	NewSession
	EMagicLeapHeadTrackingMapEvent_MAX
};

// Enum MagicLeap.EMagicLeapHeadTrackingMode
enum class FEMagicLeapHeadTrackingMode : uint8 {
	PositionAndOrientation
	Unavailable
	Unknown
	EMagicLeapHeadTrackingMode_MAX
};

// Enum MagicLeap.EMagicLeapHeadTrackingError
enum class FEMagicLeapHeadTrackingError : uint8 {
	None
	NotEnoughFeatures
	LowLight
	Unknown
	EMagicLeapHeadTrackingError_MAX
};

