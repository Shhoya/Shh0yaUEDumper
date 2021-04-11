// Enum PropertyAccess.EPropertyAccessCopyBatch
enum class FEPropertyAccessCopyBatch : uint8 {
	InternalUnbatched
	ExternalUnbatched
	InternalBatched
	ExternalBatched
	Count
	EPropertyAccessCopyBatch_MAX
};

// Enum PropertyAccess.EPropertyAccessCopyType
enum class FEPropertyAccessCopyType : uint8 {
	None
	Plain
	Complex
	Bool
	Struct
	Object
	Name
	Array
	PromoteBoolToByte
	PromoteBoolToInt32
	PromoteBoolToInt64
	PromoteBoolToFloat
	PromoteByteToInt32
	PromoteByteToInt64
	PromoteByteToFloat
	PromoteInt32ToInt64
	PromoteInt32ToFloat
	EPropertyAccessCopyType_MAX
};

// Enum PropertyAccess.EPropertyAccessObjectType
enum class FEPropertyAccessObjectType : uint8 {
	None
	Object
	WeakObject
	SoftObject
	EPropertyAccessObjectType_MAX
};

// Enum PropertyAccess.EPropertyAccessIndirectionType
enum class FEPropertyAccessIndirectionType : uint8 {
	Offset
	Object
	Array
	ScriptFunction
	NativeFunction
	EPropertyAccessIndirectionType_MAX
};

