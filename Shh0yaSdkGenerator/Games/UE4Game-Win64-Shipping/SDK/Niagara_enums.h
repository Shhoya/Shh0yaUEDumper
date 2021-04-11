// Enum Niagara.ENiagaraSystemSpawnSectionEndBehavior
enum class FENiagaraSystemSpawnSectionEndBehavior : uint8 {
	SetSystemInactive
	Deactivate
	None
	ENiagaraSystemSpawnSectionEndBehavior_MAX
};

// Enum Niagara.ENiagaraSystemSpawnSectionEvaluateBehavior
enum class FENiagaraSystemSpawnSectionEvaluateBehavior : uint8 {
	ActivateIfInactive
	None
	ENiagaraSystemSpawnSectionEvaluateBehavior_MAX
};

// Enum Niagara.ENiagaraSystemSpawnSectionStartBehavior
enum class FENiagaraSystemSpawnSectionStartBehavior : uint8 {
	Activate
	ENiagaraSystemSpawnSectionStartBehavior_MAX
};

// Enum Niagara.ENiagaraCollisionMode
enum class FENiagaraCollisionMode : uint8 {
	None
	SceneGeometry
	DepthBuffer
	DistanceField
	ENiagaraCollisionMode_MAX
};

// Enum Niagara.ENiagaraLegacyTrailWidthMode
enum class FENiagaraLegacyTrailWidthMode : uint8 {
	FromCentre
	FromFirst
	FromSecond
	ENiagaraLegacyTrailWidthMode_MAX
};

// Enum Niagara.ENiagaraRendererSourceDataMode
enum class FENiagaraRendererSourceDataMode : uint8 {
	Particles
	Emitter
	ENiagaraRendererSourceDataMode_MAX
};

// Enum Niagara.ENiagaraBindingSource
enum class FENiagaraBindingSource : uint8 {
	ImplicitFromSource
	ExplicitParticles
	ExplicitEmitter
	ExplicitSystem
	ExplicitUser
	MaxBindingSource
	ENiagaraBindingSource_MAX
};

// Enum Niagara.ENiagaraIterationSource
enum class FENiagaraIterationSource : uint8 {
	Particles
	DataInterface
	ENiagaraIterationSource_MAX
};

// Enum Niagara.ENiagaraScriptGroup
enum class FENiagaraScriptGroup : uint8 {
	Particle
	Emitter
	System
	Max
};

// Enum Niagara.ENiagaraScriptContextStaticSwitch
enum class FENiagaraScriptContextStaticSwitch : uint8 {
	System
	Emitter
	Particle
	ENiagaraScriptContextStaticSwitch_MAX
};

// Enum Niagara.ENiagaraCompileUsageStaticSwitch
enum class FENiagaraCompileUsageStaticSwitch : uint8 {
	Spawn
	Update
	Event
	SimulationStage
	Default
	ENiagaraCompileUsageStaticSwitch_MAX
};

// Enum Niagara.ENiagaraScriptUsage
enum class FENiagaraScriptUsage : uint8 {
	Function
	Module
	DynamicInput
	ParticleSpawnScript
	ParticleSpawnScriptInterpolated
	ParticleUpdateScript
	ParticleEventScript
	ParticleSimulationStageScript
	ParticleGPUComputeScript
	EmitterSpawnScript
	EmitterUpdateScript
	SystemSpawnScript
	SystemUpdateScript
	ENiagaraScriptUsage_MAX
};

// Enum Niagara.ENiagaraScriptCompileStatus
enum class FENiagaraScriptCompileStatus : uint8 {
	NCS_Unknown
	NCS_Dirty
	NCS_Error
	NCS_UpToDate
	NCS_BeingCreated
	NCS_UpToDateWithWarnings
	NCS_ComputeUpToDateWithWarnings
	NCS_MAX
};

// Enum Niagara.ENiagaraInputNodeUsage
enum class FENiagaraInputNodeUsage : uint8 {
	Undefined
	Parameter
	Attribute
	SystemConstant
	TranslatorConstant
	RapidIterationParameter
	ENiagaraInputNodeUsage_MAX
};

// Enum Niagara.ENiagaraDataSetType
enum class FENiagaraDataSetType : uint8 {
	ParticleData
	Shared
	Event
	ENiagaraDataSetType_MAX
};

// Enum Niagara.ENiagaraStatDisplayMode
enum class FENiagaraStatDisplayMode : uint8 {
	Percent
	Absolute
	ENiagaraStatDisplayMode_MAX
};

// Enum Niagara.ENiagaraStatEvaluationType
enum class FENiagaraStatEvaluationType : uint8 {
	Average
	Maximum
	ENiagaraStatEvaluationType_MAX
};

// Enum Niagara.ENiagaraAgeUpdateMode
enum class FENiagaraAgeUpdateMode : uint8 {
	TickDeltaTime
	DesiredAge
	DesiredAgeNoSeek
	ENiagaraAgeUpdateMode_MAX
};

// Enum Niagara.ENiagaraSimTarget
enum class FENiagaraSimTarget : uint8 {
	CPUSim
	GPUComputeSim
	ENiagaraSimTarget_MAX
};

// Enum Niagara.ENiagaraDefaultMode
enum class FENiagaraDefaultMode : uint8 {
	Value
	Binding
	Custom
	ENiagaraDefaultMode_MAX
};

// Enum Niagara.ENiagaraGpuBufferFormat
enum class FENiagaraGpuBufferFormat : uint8 {
	Float
	HalfFloat
	UnsignedNormalizedByte
	Max
};

// Enum Niagara.ENiagaraTickBehavior
enum class FENiagaraTickBehavior : uint8 {
	UsePrereqs
	UseComponentTickGroup
	ForceTickFirst
	ForceTickLast
	ENiagaraTickBehavior_MAX
};

// Enum Niagara.ENCPoolMethod
enum class FENCPoolMethod : uint8 {
	None
	AutoRelease
	ManualRelease
	ManualRelease_OnComplete
	FreeInPool
	ENCPoolMethod_MAX
};

// Enum Niagara.ENDIExport_GPUAllocationMode
enum class FENDIExport_GPUAllocationMode : uint8 {
	FixedSize
	PerParticle
	ENDIExport_MAX
};

// Enum Niagara.ESetResolutionMethod
enum class FESetResolutionMethod : uint8 {
	Independent
	MaxAxis
	CellSize
	ESetResolutionMethod_MAX
};

// Enum Niagara.ENDISkeletalMesh_SkinningMode
enum class FENDISkeletalMesh_SkinningMode : uint8 {
	Invalid
	None
	SkinOnTheFly
	PreSkin
	ENDISkeletalMesh_MAX
};

// Enum Niagara.ENDISkeletalMesh_SourceMode
enum class FENDISkeletalMesh_SourceMode : uint8 {
	Default
	Source
	AttachParent
	ENDISkeletalMesh_MAX
};

// Enum Niagara.ENDIStaticMesh_SourceMode
enum class FENDIStaticMesh_SourceMode : uint8 {
	Default
	Source
	AttachParent
	DefaultMeshOnly
	ENDIStaticMesh_MAX
};

// Enum Niagara.ENiagaraScalabilityUpdateFrequency
enum class FENiagaraScalabilityUpdateFrequency : uint8 {
	SpawnOnly
	Low
	Medium
	High
	Continuous
	ENiagaraScalabilityUpdateFrequency_MAX
};

// Enum Niagara.ENiagaraCullReaction
enum class FENiagaraCullReaction : uint8 {
	Deactivate
	DeactivateImmediate
	DeactivateResume
	DeactivateImmediateResume
	ENiagaraCullReaction_MAX
};

// Enum Niagara.EParticleAllocationMode
enum class FEParticleAllocationMode : uint8 {
	AutomaticEstimate
	ManualEstimate
	EParticleAllocationMode_MAX
};

// Enum Niagara.EScriptExecutionMode
enum class FEScriptExecutionMode : uint8 {
	EveryParticle
	SpawnedParticles
	SingleParticle
	EScriptExecutionMode_MAX
};

// Enum Niagara.ENiagaraSortMode
enum class FENiagaraSortMode : uint8 {
	None
	ViewDepth
	ViewDistance
	CustomAscending
	CustomDecending
	ENiagaraSortMode_MAX
};

// Enum Niagara.ENiagaraMeshLockedAxisSpace
enum class FENiagaraMeshLockedAxisSpace : uint8 {
	Simulation
	World
	Local
	ENiagaraMeshLockedAxisSpace_MAX
};

// Enum Niagara.ENiagaraMeshPivotOffsetSpace
enum class FENiagaraMeshPivotOffsetSpace : uint8 {
	Mesh
	Simulation
	World
	Local
	ENiagaraMeshPivotOffsetSpace_MAX
};

// Enum Niagara.ENiagaraMeshFacingMode
enum class FENiagaraMeshFacingMode : uint8 {
	Default
	Velocity
	CameraPosition
	CameraPlane
	ENiagaraMeshFacingMode_MAX
};

// Enum Niagara.ENiagaraPlatformSetState
enum class FENiagaraPlatformSetState : uint8 {
	Disabled
	Enabled
	Active
	Unknown
	ENiagaraPlatformSetState_MAX
};

// Enum Niagara.ENiagaraPlatformSelectionState
enum class FENiagaraPlatformSelectionState : uint8 {
	Default
	Enabled
	Disabled
	ENiagaraPlatformSelectionState_MAX
};

// Enum Niagara.ENiagaraPreviewGridResetMode
enum class FENiagaraPreviewGridResetMode : uint8 {
	Never
	Individual
	All
	ENiagaraPreviewGridResetMode_MAX
};

// Enum Niagara.ENiagaraRibbonUVDistributionMode
enum class FENiagaraRibbonUVDistributionMode : uint8 {
	ScaledUniformly
	ScaledUsingRibbonSegmentLength
	TiledOverRibbonLength
	ENiagaraRibbonUVDistributionMode_MAX
};

// Enum Niagara.ENiagaraRibbonUVEdgeMode
enum class FENiagaraRibbonUVEdgeMode : uint8 {
	SmoothTransition
	Locked
	ENiagaraRibbonUVEdgeMode_MAX
};

// Enum Niagara.ENiagaraRibbonTessellationMode
enum class FENiagaraRibbonTessellationMode : uint8 {
	Automatic
	Custom
	Disabled
	ENiagaraRibbonTessellationMode_MAX
};

// Enum Niagara.ENiagaraRibbonDrawDirection
enum class FENiagaraRibbonDrawDirection : uint8 {
	FrontToBack
	BackToFront
	ENiagaraRibbonDrawDirection_MAX
};

// Enum Niagara.ENiagaraRibbonAgeOffsetMode
enum class FENiagaraRibbonAgeOffsetMode : uint8 {
	Scale
	Clip
	ENiagaraRibbonAgeOffsetMode_MAX
};

// Enum Niagara.ENiagaraRibbonFacingMode
enum class FENiagaraRibbonFacingMode : uint8 {
	Screen
	Custom
	CustomSideVector
	ENiagaraRibbonFacingMode_MAX
};

// Enum Niagara.ENiagaraScriptLibraryVisibility
enum class FENiagaraScriptLibraryVisibility : uint8 {
	Invalid
	Unexposed
	Library
	Hidden
	ENiagaraScriptLibraryVisibility_MAX
};

// Enum Niagara.ENiagaraModuleDependencyScriptConstraint
enum class FENiagaraModuleDependencyScriptConstraint : uint8 {
	SameScript
	AllScripts
	ENiagaraModuleDependencyScriptConstraint_MAX
};

// Enum Niagara.ENiagaraModuleDependencyType
enum class FENiagaraModuleDependencyType : uint8 {
	PreDependency
	PostDependency
	ENiagaraModuleDependencyType_MAX
};

// Enum Niagara.EUnusedAttributeBehaviour
enum class FEUnusedAttributeBehaviour : uint8 {
	Copy
	Zero
	None
	MarkInvalid
	PassThrough
	EUnusedAttributeBehaviour_MAX
};

// Enum Niagara.ENiagaraSpriteFacingMode
enum class FENiagaraSpriteFacingMode : uint8 {
	FaceCamera
	FaceCameraPlane
	CustomFacingVector
	FaceCameraPosition
	FaceCameraDistanceBlend
	ENiagaraSpriteFacingMode_MAX
};

// Enum Niagara.ENiagaraSpriteAlignment
enum class FENiagaraSpriteAlignment : uint8 {
	Unaligned
	VelocityAligned
	CustomAlignment
	ENiagaraSpriteAlignment_MAX
};

// Enum Niagara.ENiagaraParameterPanelCategory
enum class FENiagaraParameterPanelCategory : uint8 {
	Input
	Attributes
	Output
	Local
	User
	Engine
	Owner
	System
	Emitter
	Particles
	ScriptTransient
	StaticSwitch
	None
	Num
	ENiagaraParameterPanelCategory_MAX
};

// Enum Niagara.ENiagaraScriptParameterUsage
enum class FENiagaraScriptParameterUsage : uint8 {
	Input
	Output
	Local
	InputOutput
	InitialValueInput
	None
	Num
	ENiagaraScriptParameterUsage_MAX
};

// Enum Niagara.ENiagaraParameterScope
enum class FENiagaraParameterScope : uint8 {
	Input
	User
	Engine
	Owner
	System
	Emitter
	Particles
	ScriptPersistent
	ScriptTransient
	Local
	Custom
	DISPLAY_ONLY_StaticSwitch
	Output
	None
	Num
	ENiagaraParameterScope_MAX
};

// Enum Niagara.ENiagaraExecutionState
enum class FENiagaraExecutionState : uint8 {
	Active
	Inactive
	InactiveClear
	Complete
	Disabled
	Num
	ENiagaraExecutionState_MAX
};

// Enum Niagara.ENiagaraExecutionStateSource
enum class FENiagaraExecutionStateSource : uint8 {
	Scalability
	Internal
	Owner
	InternalCompletion
	ENiagaraExecutionStateSource_MAX
};

// Enum Niagara.ENiagaraNumericOutputTypeSelectionMode
enum class FENiagaraNumericOutputTypeSelectionMode : uint8 {
	None
	Largest
	Smallest
	Scalar
	ENiagaraNumericOutputTypeSelectionMode_MAX
};

// Enum Niagara.ENiagaraVariantMode
enum class FENiagaraVariantMode : uint8 {
	None
	Object
	DataInterface
	Bytes
	ENiagaraVariantMode_MAX
};

