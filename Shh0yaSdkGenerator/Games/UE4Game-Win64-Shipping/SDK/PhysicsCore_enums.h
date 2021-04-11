// Enum PhysicsCore.EBodyCollisionResponse
enum class FEBodyCollisionResponse : uint8 {
	BodyCollision_Enabled
	BodyCollision_Disabled
	BodyCollision_MAX
};

// Enum PhysicsCore.EPhysicsType
enum class FEPhysicsType : uint8 {
	PhysType_Default
	PhysType_Kinematic
	PhysType_Simulated
	PhysType_MAX
};

// Enum PhysicsCore.ECollisionTraceFlag
enum class FECollisionTraceFlag : uint8 {
	CTF_UseDefault
	CTF_UseSimpleAndComplex
	CTF_UseSimpleAsComplex
	CTF_UseComplexAsSimple
	CTF_MAX
};

// Enum PhysicsCore.ELinearConstraintMotion
enum class FELinearConstraintMotion : uint8 {
	LCM_Free
	LCM_Limited
	LCM_Locked
	LCM_MAX
};

// Enum PhysicsCore.EConstraintFrame
enum class FEConstraintFrame : uint8 {
	Frame1
	Frame2
	EConstraintFrame_MAX
};

// Enum PhysicsCore.EAngularConstraintMotion
enum class FEAngularConstraintMotion : uint8 {
	ACM_Free
	ACM_Limited
	ACM_Locked
	ACM_MAX
};

// Enum PhysicsCore.ESleepFamily
enum class FESleepFamily : uint8 {
	Normal
	Sensitive
	Custom
	ESleepFamily_MAX
};

// Enum PhysicsCore.ERadialImpulseFalloff
enum class FERadialImpulseFalloff : uint8 {
	RIF_Constant
	RIF_Linear
	RIF_MAX
};

// Enum PhysicsCore.EPhysicalSurface
enum class FEPhysicalSurface : uint8 {
	SurfaceType_Default
	SurfaceType1
	SurfaceType2
	SurfaceType3
	SurfaceType4
	SurfaceType5
	SurfaceType6
	SurfaceType7
	SurfaceType8
	SurfaceType9
	SurfaceType10
	SurfaceType11
	SurfaceType12
	SurfaceType13
	SurfaceType14
	SurfaceType15
	SurfaceType16
	SurfaceType17
	SurfaceType18
	SurfaceType19
	SurfaceType20
	SurfaceType21
	SurfaceType22
	SurfaceType23
	SurfaceType24
	SurfaceType25
	SurfaceType26
	SurfaceType27
	SurfaceType28
	SurfaceType29
	SurfaceType30
	SurfaceType31
	SurfaceType32
	SurfaceType33
	SurfaceType34
	SurfaceType35
	SurfaceType36
	SurfaceType37
	SurfaceType38
	SurfaceType39
	SurfaceType40
	SurfaceType41
	SurfaceType42
	SurfaceType43
	SurfaceType44
	SurfaceType45
	SurfaceType46
	SurfaceType47
	SurfaceType48
	SurfaceType49
	SurfaceType50
	SurfaceType51
	SurfaceType52
	SurfaceType53
	SurfaceType54
	SurfaceType55
	SurfaceType56
	SurfaceType57
	SurfaceType58
	SurfaceType59
	SurfaceType60
	SurfaceType61
	SurfaceType62
	SurfaceType_Max
	EPhysicalSurface_MAX
};

// Enum PhysicsCore.EFrictionCombineMode
enum class FEFrictionCombineMode : uint8 {
	Average
	Min
	Multiply
	Max
};

