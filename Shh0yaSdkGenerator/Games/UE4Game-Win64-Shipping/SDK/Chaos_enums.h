// Enum Chaos.EClusterUnionMethod
enum class FEClusterUnionMethod : uint8 {
	PointImplicit
	DelaunayTriangulation
	MinimalSpanningSubsetDelaunayTriangulation
	PointImplicitAugmentedWithMinimalDelaunay
	None
	EClusterUnionMethod_MAX
};

// Enum Chaos.EFieldPhysicsDefaultFields
enum class FEFieldPhysicsDefaultFields : uint8 {
	Field_RadialIntMask
	Field_RadialFalloff
	Field_UniformVector
	Field_RadialVector
	Field_RadialVectorFalloff
	Field_EFieldPhysicsDefaultFields_Max
	Field_MAX
};

// Enum Chaos.EFieldPhysicsType
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

// Enum Chaos.EFieldFalloffType
enum class FEFieldFalloffType : uint8 {
	Field_FallOff_None
	Field_Falloff_Linear
	Field_Falloff_Inverse
	Field_Falloff_Squared
	Field_Falloff_Logarithmic
	Field_Falloff_Max
};

// Enum Chaos.EFieldResolutionType
enum class FEFieldResolutionType : uint8 {
	Field_Resolution_Minimal
	Field_Resolution_DisabledParents
	Field_Resolution_Maximum
	Field_Resolution_Max
};

// Enum Chaos.EFieldCullingOperationType
enum class FEFieldCullingOperationType : uint8 {
	Field_Culling_Inside
	Field_Culling_Outside
	Field_Culling_Operation_Max
	Field_Culling_MAX
};

// Enum Chaos.EFieldOperationType
enum class FEFieldOperationType : uint8 {
	Field_Multiply
	Field_Divide
	Field_Add
	Field_Substract
	Field_Operation_Max
};

// Enum Chaos.ESetMaskConditionType
enum class FESetMaskConditionType : uint8 {
	Field_Set_Always
	Field_Set_IFF_NOT_Interior
	Field_Set_IFF_NOT_Exterior
	Field_MaskCondition_Max
};

// Enum Chaos.EEmissionPatternTypeEnum
enum class FEEmissionPatternTypeEnum : uint8 {
	Chaos_Emission_Pattern_First_Frame
	Chaos_Emission_Pattern_On_Demand
	Chaos_Max
};

// Enum Chaos.EInitialVelocityTypeEnum
enum class FEInitialVelocityTypeEnum : uint8 {
	Chaos_Initial_Velocity_User_Defined
	Chaos_Initial_Velocity_None
	Chaos_Max
};

// Enum Chaos.EGeometryCollectionPhysicsTypeEnum
enum class FEGeometryCollectionPhysicsTypeEnum : uint8 {
	Chaos_AngularVelocity
	Chaos_DynamicState
	Chaos_LinearVelocity
	Chaos_InitialAngularVelocity
	Chaos_InitialLinearVelocity
	Chaos_CollisionGroup
	Chaos_LinearForce
	Chaos_AngularTorque
	Chaos_Max
};

// Enum Chaos.EObjectStateTypeEnum
enum class FEObjectStateTypeEnum : uint8 {
	Chaos_NONE
	Chaos_Object_Sleeping
	Chaos_Object_Kinematic
	Chaos_Object_Static
	Chaos_Object_Dynamic
	Chaos_Object_UserDefined
	Chaos_Max
};

// Enum Chaos.EImplicitTypeEnum
enum class FEImplicitTypeEnum : uint8 {
	Chaos_Implicit_Box
	Chaos_Implicit_Sphere
	Chaos_Implicit_Capsule
	Chaos_Implicit_LevelSet
	Chaos_Implicit_None
	Chaos_Max
};

// Enum Chaos.ECollisionTypeEnum
enum class FECollisionTypeEnum : uint8 {
	Chaos_Volumetric
	Chaos_Surface_Volumetric
	Chaos_Max
};

// Enum Chaos.EChaosBufferMode
enum class FEChaosBufferMode : uint8 {
	Double
	Triple
	Num
	Invalid
	EChaosBufferMode_MAX
};

// Enum Chaos.EChaosThreadingMode
enum class FEChaosThreadingMode : uint8 {
	DedicatedThread
	TaskGraph
	SingleThread
	Num
	Invalid
	EChaosThreadingMode_MAX
};

// Enum Chaos.EChaosSolverTickMode
enum class FEChaosSolverTickMode : uint8 {
	Fixed
	Variable
	VariableCapped
	VariableCappedWithTarget
	EChaosSolverTickMode_MAX
};

// Enum Chaos.EGeometryCollectionCacheType
enum class FEGeometryCollectionCacheType : uint8 {
	None
	Record
	Play
	RecordAndPlay
	EGeometryCollectionCacheType_MAX
};

