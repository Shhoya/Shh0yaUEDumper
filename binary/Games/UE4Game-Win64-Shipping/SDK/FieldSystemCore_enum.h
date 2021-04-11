// Enum FieldSystemCore.EFieldPhysicsDefaultFields
enum class FEFieldPhysicsDefaultFields : uint8 {
	Field_RadialIntMask
	Field_RadialFalloff
	Field_UniformVector
	Field_RadialVector
	Field_RadialVectorFalloff
	Field_EFieldPhysicsDefaultFields_Max
	Field_MAX
};

// Enum FieldSystemCore.EFieldPhysicsType
enum class FEFieldPhysicsType : uint8 {
	Field_None
	Field_DynamicState
	Field_LinearForce
	Field_ExternalClusterStrain
	Field_Kill
	Field_LinearVelocity
	Field_AngularVelociy
	Field_AngularTorque
	Field_InternalClusterStrain
	Field_DisableThreshold
	Field_SleepingThreshold
	Field_PositionStatic
	Field_PositionAnimated
	Field_PositionTarget
	Field_DynamicConstraint
	Field_CollisionGroup
	Field_ActivateDisabled
	Field_PhysicsType_Max
};

// Enum FieldSystemCore.EFieldFalloffType
enum class FEFieldFalloffType : uint8 {
	Field_FallOff_None
	Field_Falloff_Linear
	Field_Falloff_Inverse
	Field_Falloff_Squared
	Field_Falloff_Logarithmic
	Field_Falloff_Max
};

// Enum FieldSystemCore.EFieldResolutionType
enum class FEFieldResolutionType : uint8 {
	Field_Resolution_Minimal
	Field_Resolution_DisabledParents
	Field_Resolution_Maximum
	Field_Resolution_Max
};

// Enum FieldSystemCore.EFieldCullingOperationType
enum class FEFieldCullingOperationType : uint8 {
	Field_Culling_Inside
	Field_Culling_Outside
	Field_Culling_Operation_Max
	Field_Culling_MAX
};

// Enum FieldSystemCore.EFieldOperationType
enum class FEFieldOperationType : uint8 {
	Field_Multiply
	Field_Divide
	Field_Add
	Field_Substract
	Field_Operation_Max
};

// Enum FieldSystemCore.ESetMaskConditionType
enum class FESetMaskConditionType : uint8 {
	Field_Set_Always
	Field_Set_IFF_NOT_Interior
	Field_Set_IFF_NOT_Exterior
	Field_MaskCondition_Max
};

