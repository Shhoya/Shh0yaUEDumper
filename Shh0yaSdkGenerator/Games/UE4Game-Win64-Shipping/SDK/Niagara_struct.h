// ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
// Size : 0x48 (Inherited : 0x20)
struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate {
	struct FNiagaraVariable Parameter; // 0x20(0x28)
};

// ScriptStruct Niagara.NiagaraVariableBase
// Size : 0x18 (Inherited : 0x0)
struct FNiagaraVariableBase {
	struct FName Name; // 0x0(0x8)
	struct FNiagaraTypeDefinition TypeDef; // 0x8(0x10)
};

// ScriptStruct Niagara.NiagaraTypeDefinition
// Size : 0x10 (Inherited : 0x0)
struct FNiagaraTypeDefinition {
	struct UObject* ClassStructOrEnum; // 0x0(0x8)
	uint16 UnderlyingType; // 0x8(0x2)
	unsigned char UnknownData_A[0x0006]; // 0xA(0x6)
};

// ScriptStruct Niagara.NiagaraVariable
// Size : 0x28 (Inherited : 0x18)
struct FNiagaraVariable : FNiagaraVariableBase {
	struct TArray<enum class None> VarData; // 0x18(0x10)
};

// ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
// Size : 0xD8 (Inherited : 0x48)
struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	struct FMovieSceneBoolChannel BoolChannel; // 0x48(0x90)
};

// ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
// Size : 0x2C8 (Inherited : 0x48)
struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	struct FMovieSceneFloatChannel RedChannel; // 0x48(0xA0)
	struct FMovieSceneFloatChannel GreenChannel; // 0xE8(0xA0)
	struct FMovieSceneFloatChannel BlueChannel; // 0x188(0xA0)
	struct FMovieSceneFloatChannel AlphaChannel; // 0x228(0xA0)
};

// ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
// Size : 0xE8 (Inherited : 0x48)
struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	struct FMovieSceneFloatChannel FloatChannel; // 0x48(0xA0)
};

// ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
// Size : 0xD8 (Inherited : 0x48)
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	struct FMovieSceneIntegerChannel IntegerChannel; // 0x48(0x90)
};

// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
// Size : 0x28 (Inherited : 0x10)
struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation {
	struct FFrameNumber SpawnSectionStartFrame; // 0x10(0x4)
	struct FFrameNumber SpawnSectionEndFrame; // 0x14(0x4)
	enum class ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior; // 0x18(0x4)
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior; // 0x1C(0x4)
	enum class ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior; // 0x20(0x4)
	enum class ENiagaraAgeUpdateMode AgeUpdateMode; // 0x24(0x1)
	unsigned char UnknownData_25[0x0003]; // 0x25(0x3)
};

// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate
// Size : 0x20 (Inherited : 0x20)
struct FMovieSceneNiagaraSystemTrackTemplate : FMovieSceneEvalTemplate {
};

// ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
// Size : 0x2D0 (Inherited : 0x48)
struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	struct FMovieSceneFloatChannel VectorChannels[4]; // 0x48(0x280)
	int32_t ChannelsUsed; // 0x2C8(0x4)
	unsigned char UnknownData_2CC[0x0004]; // 0x2CC(0x4)
};

// ScriptStruct Niagara.NiagaraRandInfo
// Size : 0xC (Inherited : 0x0)
struct FNiagaraRandInfo {
	int32_t Seed1; // 0x0(0x4)
	int32_t Seed2; // 0x4(0x4)
	int32_t Seed3; // 0x8(0x4)
};

// ScriptStruct Niagara.NiagaraUserParameterBinding
// Size : 0x28 (Inherited : 0x0)
struct FNiagaraUserParameterBinding {
	struct FNiagaraVariable Parameter; // 0x0(0x28)
};

// ScriptStruct Niagara.NiagaraScriptVariableBinding
// Size : 0x8 (Inherited : 0x0)
struct FNiagaraScriptVariableBinding {
	struct FName Name; // 0x0(0x8)
};

// ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
// Size : 0x28 (Inherited : 0x0)
struct FNiagaraVariableDataInterfaceBinding {
	struct FNiagaraVariable BoundVariable; // 0x0(0x28)
};

// ScriptStruct Niagara.NiagaraVariableAttributeBinding
// Size : 0x78 (Inherited : 0x0)
struct FNiagaraVariableAttributeBinding {
	struct FNiagaraVariable BoundVariable; // 0x0(0x28)
	struct FNiagaraVariable DataSetVariable; // 0x28(0x28)
	struct FNiagaraVariable DefaultValueIfNonExistent; // 0x50(0x28)
};

// ScriptStruct Niagara.NiagaraVariableInfo
// Size : 0x48 (Inherited : 0x0)
struct FNiagaraVariableInfo {
	struct FNiagaraVariable Variable; // 0x0(0x28)
	struct FText Definition; // 0x28(0x18)
	struct UNiagaraDataInterface* DataInterface; // 0x40(0x8)
};

// ScriptStruct Niagara.NiagaraSystemUpdateContext
// Size : 0x38 (Inherited : 0x0)
struct FNiagaraSystemUpdateContext {
	struct TArray<struct UNiagaraComponent*> ComponentsToReset; // 0x0(0x10)
	struct TArray<struct UNiagaraComponent*> ComponentsToReInit; // 0x10(0x10)
	struct TArray<struct UNiagaraSystem*> SystemSimsToDestroy; // 0x20(0x10)
	unsigned char UnknownData_30[0x0008]; // 0x30(0x8)
};

// ScriptStruct Niagara.VMExternalFunctionBindingInfo
// Size : 0x38 (Inherited : 0x0)
struct FVMExternalFunctionBindingInfo {
	struct FName Name; // 0x0(0x8)
	struct FName OwnerName; // 0x8(0x8)
	struct TArray<bool> InputParamLocations; // 0x10(0x10)
	int32_t NumOutputs; // 0x20(0x4)
	unsigned char UnknownData_24[0x0004]; // 0x24(0x4)
	struct TArray<struct FVMFunctionSpecifier> FunctionSpecifiers; // 0x28(0x10)
};

// ScriptStruct Niagara.VMFunctionSpecifier
// Size : 0x10 (Inherited : 0x0)
struct FVMFunctionSpecifier {
	struct FName Key; // 0x0(0x8)
	struct FName Value; // 0x8(0x8)
};

// ScriptStruct Niagara.NiagaraStatScope
// Size : 0x10 (Inherited : 0x0)
struct FNiagaraStatScope {
	struct FName FullName; // 0x0(0x8)
	struct FName FriendlyName; // 0x8(0x8)
};

// ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
// Size : 0x38 (Inherited : 0x0)
struct FNiagaraScriptDataInterfaceCompileInfo {
	struct FName Name; // 0x0(0x8)
	int32_t UserPtrIdx; // 0x8(0x4)
	unsigned char UnknownData_C[0x0004]; // 0xC(0x4)
	struct FNiagaraTypeDefinition Type; // 0x10(0x10)
	struct FName RegisteredParameterMapRead; // 0x20(0x8)
	struct FName RegisteredParameterMapWrite; // 0x28(0x8)
	bool bIsPlaceholder; // 0x30(0x1)
	unsigned char UnknownData_31[0x0007]; // 0x31(0x7)
};

// ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
// Size : 0x38 (Inherited : 0x0)
struct FNiagaraScriptDataInterfaceInfo {
	struct UNiagaraDataInterface* DataInterface; // 0x0(0x8)
	struct FName Name; // 0x8(0x8)
	int32_t UserPtrIdx; // 0x10(0x4)
	unsigned char UnknownData_14[0x0004]; // 0x14(0x4)
	struct FNiagaraTypeDefinition Type; // 0x18(0x10)
	struct FName RegisteredParameterMapRead; // 0x28(0x8)
	struct FName RegisteredParameterMapWrite; // 0x30(0x8)
};

// ScriptStruct Niagara.NiagaraFunctionSignature
// Size : 0x88 (Inherited : 0x0)
struct FNiagaraFunctionSignature {
	struct FName Name; // 0x0(0x8)
	struct TArray<struct FNiagaraVariable> Inputs; // 0x8(0x10)
	struct TArray<struct FNiagaraVariable> Outputs; // 0x18(0x10)
	struct FName OwnerName; // 0x28(0x8)
	unsigned char bRequiresContext : 1; // 0x30(0x1)
	unsigned char bMemberFunction : 1; // 0x30(0x1)
	unsigned char bExperimental : 1; // 0x30(0x1)
	unsigned char bSupportsCPU : 1; // 0x30(0x1)
	unsigned char bSupportsGPU : 1; // 0x30(0x1)
	unsigned char bWriteFunction : 1; // 0x30(0x1)
	unsigned char UnknownData_30_6 : 2; // 0x30(0x1)
	unsigned char UnknownData_31[0x0007]; // 0x31(0x7)
	struct TMap<struct FName, struct FName> FunctionSpecifiers; // 0x38(0x50)
};

// ScriptStruct Niagara.NiagaraScriptDataUsageInfo
// Size : 0x1 (Inherited : 0x0)
struct FNiagaraScriptDataUsageInfo {
	bool bReadsAttributeData; // 0x0(0x1)
};

// ScriptStruct Niagara.NiagaraDataSetProperties
// Size : 0x20 (Inherited : 0x0)
struct FNiagaraDataSetProperties {
	struct FNiagaraDataSetID ID; // 0x0(0xC)
	unsigned char UnknownData_C[0x0004]; // 0xC(0x4)
	struct TArray<struct FNiagaraVariable> Variables; // 0x10(0x10)
};

// ScriptStruct Niagara.NiagaraDataSetID
// Size : 0xC (Inherited : 0x0)
struct FNiagaraDataSetID {
	struct FName Name; // 0x0(0x8)
	enum class ENiagaraDataSetType Type; // 0x8(0x1)
	unsigned char UnknownData_9[0x0003]; // 0x9(0x3)
};

// ScriptStruct Niagara.NCPool
// Size : 0x38 (Inherited : 0x0)
struct FNCPool {
	struct TArray<struct FNCPoolElement> FreeElements; // 0x0(0x10)
	struct TArray<struct UNiagaraComponent*> InUseComponents_Auto; // 0x10(0x10)
	struct TArray<struct UNiagaraComponent*> InUseComponents_Manual; // 0x20(0x10)
	unsigned char UnknownData_30[0x0008]; // 0x30(0x8)
};

// ScriptStruct Niagara.NCPoolElement
// Size : 0x10 (Inherited : 0x0)
struct FNCPoolElement {
	struct UNiagaraComponent* Component; // 0x0(0x8)
	unsigned char UnknownData_8[0x0008]; // 0x8(0x8)
};

// ScriptStruct Niagara.BasicParticleData
// Size : 0x1C (Inherited : 0x0)
struct FBasicParticleData {
	struct FVector Position; // 0x0(0xC)
	float Size; // 0xC(0x4)
	struct FVector Velocity; // 0x10(0xC)
};

// ScriptStruct Niagara.MeshTriCoordinate
// Size : 0x10 (Inherited : 0x0)
struct FMeshTriCoordinate {
	int32_t Tri; // 0x0(0x4)
	struct FVector BaryCoord; // 0x4(0xC)
};

// ScriptStruct Niagara.NDIStaticMeshSectionFilter
// Size : 0x10 (Inherited : 0x0)
struct FNDIStaticMeshSectionFilter {
	struct TArray<int32_t> AllowedMaterialSlots; // 0x0(0x10)
};

// ScriptStruct Niagara.NiagaraDataSetCompiledData
// Size : 0x40 (Inherited : 0x0)
struct FNiagaraDataSetCompiledData {
	struct TArray<struct FNiagaraVariable> Variables; // 0x0(0x10)
	struct TArray<struct FNiagaraVariableLayoutInfo> VariableLayouts; // 0x10(0x10)
	uint32_t TotalFloatComponents; // 0x20(0x4)
	uint32_t TotalInt32Components; // 0x24(0x4)
	unsigned char bRequiresPersistentIDs : 1; // 0x28(0x1)
	unsigned char UnknownData_28_1 : 7; // 0x28(0x1)
	unsigned char UnknownData_29[0x0003]; // 0x29(0x3)
	struct FNiagaraDataSetID ID; // 0x2C(0xC)
	enum class ENiagaraSimTarget SimTarget; // 0x38(0x1)
	unsigned char UnknownData_39[0x0007]; // 0x39(0x7)
};

// ScriptStruct Niagara.NiagaraVariableLayoutInfo
// Size : 0x48 (Inherited : 0x0)
struct FNiagaraVariableLayoutInfo {
	uint32_t FloatComponentStart; // 0x0(0x4)
	uint32_t Int32ComponentStart; // 0x4(0x4)
	struct FNiagaraTypeLayoutInfo LayoutInfo; // 0x8(0x40)
};

// ScriptStruct Niagara.NiagaraTypeLayoutInfo
// Size : 0x40 (Inherited : 0x0)
struct FNiagaraTypeLayoutInfo {
	struct TArray<uint32_t> FloatComponentByteOffsets; // 0x0(0x10)
	struct TArray<uint32_t> FloatComponentRegisterOffsets; // 0x10(0x10)
	struct TArray<uint32_t> Int32ComponentByteOffsets; // 0x20(0x10)
	struct TArray<uint32_t> Int32ComponentRegisterOffsets; // 0x30(0x10)
};

// ScriptStruct Niagara.NiagaraGraphViewSettings
// Size : 0x10 (Inherited : 0x0)
struct FNiagaraGraphViewSettings {
	struct FVector2D Location; // 0x0(0x8)
	float Zoom; // 0x8(0x4)
	bool bIsValid; // 0xC(0x1)
	unsigned char UnknownData_D[0x0003]; // 0xD(0x3)
};

// ScriptStruct Niagara.NiagaraEmitterScalabilityOverrides
// Size : 0x10 (Inherited : 0x0)
struct FNiagaraEmitterScalabilityOverrides {
	struct TArray<struct FNiagaraEmitterScalabilityOverride> Overrides; // 0x0(0x10)
};

// ScriptStruct Niagara.NiagaraEmitterScalabilitySettings
// Size : 0x28 (Inherited : 0x0)
struct FNiagaraEmitterScalabilitySettings {
	struct FNiagaraPlatformSet Platforms; // 0x0(0x20)
	unsigned char bScaleSpawnCount : 1; // 0x20(0x1)
	unsigned char UnknownData_20_1 : 7; // 0x20(0x1)
	unsigned char UnknownData_21[0x0003]; // 0x21(0x3)
	float SpawnCountScale; // 0x24(0x4)
};

// ScriptStruct Niagara.NiagaraPlatformSet
// Size : 0x20 (Inherited : 0x0)
struct FNiagaraPlatformSet {
	int32_t QualityLevelMask; // 0x0(0x4)
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
	struct TArray<struct FNiagaraDeviceProfileStateEntry> DeviceProfileStates; // 0x8(0x10)
	unsigned char UnknownData_18[0x0008]; // 0x18(0x8)
};

// ScriptStruct Niagara.NiagaraDeviceProfileStateEntry
// Size : 0x10 (Inherited : 0x0)
struct FNiagaraDeviceProfileStateEntry {
	struct FName ProfileName; // 0x0(0x8)
	uint32_t QualityLevelMask; // 0x8(0x4)
	uint32_t SetQualityLevelMask; // 0xC(0x4)
};

// ScriptStruct Niagara.NiagaraEmitterScalabilityOverride
// Size : 0x30 (Inherited : 0x28)
struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings {
	unsigned char bOverrideSpawnCountScale : 1; // 0x28(0x1)
	unsigned char UnknownData_28_1 : 7; // 0x28(0x1)
	unsigned char UnknownData_29[0x0007]; // 0x29(0x7)
};

// ScriptStruct Niagara.NiagaraEmitterScalabilitySettingsArray
// Size : 0x10 (Inherited : 0x0)
struct FNiagaraEmitterScalabilitySettingsArray {
	struct TArray<struct FNiagaraEmitterScalabilitySettings> Settings; // 0x0(0x10)
};

// ScriptStruct Niagara.NiagaraSystemScalabilityOverrides
// Size : 0x10 (Inherited : 0x0)
struct FNiagaraSystemScalabilityOverrides {
	struct TArray<struct FNiagaraSystemScalabilityOverride> Overrides; // 0x0(0x10)
};

// ScriptStruct Niagara.NiagaraSystemScalabilitySettings
// Size : 0x30 (Inherited : 0x0)
struct FNiagaraSystemScalabilitySettings {
	struct FNiagaraPlatformSet Platforms; // 0x0(0x20)
	unsigned char bCullByDistance : 1; // 0x20(0x1)
	unsigned char bCullMaxInstanceCount : 1; // 0x20(0x1)
	unsigned char bCullByMaxTimeWithoutRender : 1; // 0x20(0x1)
	unsigned char UnknownData_20_3 : 5; // 0x20(0x1)
	unsigned char UnknownData_21[0x0003]; // 0x21(0x3)
	float MaxDistance; // 0x24(0x4)
	float MaxInstances; // 0x28(0x4)
	float MaxTimeWithoutRender; // 0x2C(0x4)
};

// ScriptStruct Niagara.NiagaraSystemScalabilityOverride
// Size : 0x38 (Inherited : 0x30)
struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings {
	unsigned char bOverrideDistanceSettings : 1; // 0x30(0x1)
	unsigned char bOverrideInstanceCountSettings : 1; // 0x30(0x1)
	unsigned char bOverrideTimeSinceRendererSettings : 1; // 0x30(0x1)
	unsigned char UnknownData_30_3 : 5; // 0x30(0x1)
	unsigned char UnknownData_31[0x0007]; // 0x31(0x7)
};

// ScriptStruct Niagara.NiagaraSystemScalabilitySettingsArray
// Size : 0x10 (Inherited : 0x0)
struct FNiagaraSystemScalabilitySettingsArray {
	struct TArray<struct FNiagaraSystemScalabilitySettings> Settings; // 0x0(0x10)
};

// ScriptStruct Niagara.NiagaraDetailsLevelScaleOverrides
// Size : 0x14 (Inherited : 0x0)
struct FNiagaraDetailsLevelScaleOverrides {
	float Low; // 0x0(0x4)
	float Medium; // 0x4(0x4)
	float High; // 0x8(0x4)
	float Epic; // 0xC(0x4)
	float Cine; // 0x10(0x4)
};

// ScriptStruct Niagara.NiagaraEmitterScriptProperties
// Size : 0x28 (Inherited : 0x0)
struct FNiagaraEmitterScriptProperties {
	struct UNiagaraScript* Script; // 0x0(0x8)
	struct TArray<struct FNiagaraEventReceiverProperties> EventReceivers; // 0x8(0x10)
	struct TArray<struct FNiagaraEventGeneratorProperties> EventGenerators; // 0x18(0x10)
};

// ScriptStruct Niagara.NiagaraEventGeneratorProperties
// Size : 0x50 (Inherited : 0x0)
struct FNiagaraEventGeneratorProperties {
	int32_t MaxEventsPerFrame; // 0x0(0x4)
	struct FName ID; // 0x4(0x8)
	unsigned char UnknownData_C[0x0004]; // 0xC(0x4)
	struct FNiagaraDataSetCompiledData DataSetCompiledData; // 0x10(0x40)
};

// ScriptStruct Niagara.NiagaraEventReceiverProperties
// Size : 0x18 (Inherited : 0x0)
struct FNiagaraEventReceiverProperties {
	struct FName Name; // 0x0(0x8)
	struct FName SourceEventGenerator; // 0x8(0x8)
	struct FName SourceEmitter; // 0x10(0x8)
};

// ScriptStruct Niagara.NiagaraEventScriptProperties
// Size : 0x58 (Inherited : 0x28)
struct FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties {
	enum class EScriptExecutionMode ExecutionMode; // 0x28(0x1)
	unsigned char UnknownData_29[0x0003]; // 0x29(0x3)
	uint32_t SpawnNumber; // 0x2C(0x4)
	uint32_t MaxEventsPerFrame; // 0x30(0x4)
	struct FGuid SourceEmitterID; // 0x34(0x10)
	struct FName SourceEventName; // 0x44(0x8)
	bool bRandomSpawnNumber; // 0x4C(0x1)
	unsigned char UnknownData_4D[0x0003]; // 0x4D(0x3)
	uint32_t MinSpawnNumber; // 0x50(0x4)
	unsigned char UnknownData_54[0x0004]; // 0x54(0x4)
};

// ScriptStruct Niagara.NiagaraEmitterHandle
// Size : 0x30 (Inherited : 0x0)
struct FNiagaraEmitterHandle {
	struct FGuid ID; // 0x0(0x10)
	struct FName IdName; // 0x10(0x8)
	bool bIsEnabled; // 0x18(0x1)
	unsigned char UnknownData_19[0x0003]; // 0x19(0x3)
	struct FName Name; // 0x1C(0x8)
	unsigned char UnknownData_24[0x0004]; // 0x24(0x4)
	struct UNiagaraEmitter* Instance; // 0x28(0x8)
};

// ScriptStruct Niagara.NiagaraCollisionEventPayload
// Size : 0x2C (Inherited : 0x0)
struct FNiagaraCollisionEventPayload {
	struct FVector CollisionPos; // 0x0(0xC)
	struct FVector CollisionNormal; // 0xC(0xC)
	struct FVector CollisionVelocity; // 0x18(0xC)
	int32_t ParticleIndex; // 0x24(0x4)
	int32_t PhysicalMaterialIndex; // 0x28(0x4)
};

// ScriptStruct Niagara.NiagaraMeshMaterialOverride
// Size : 0x30 (Inherited : 0x0)
struct FNiagaraMeshMaterialOverride {
	struct UMaterialInterface* ExplicitMat; // 0x0(0x8)
	struct FNiagaraUserParameterBinding UserParamBinding; // 0x8(0x28)
};

// ScriptStruct Niagara.NiagaraParameters
// Size : 0x10 (Inherited : 0x0)
struct FNiagaraParameters {
	struct TArray<struct FNiagaraVariable> Parameters; // 0x0(0x10)
};

// ScriptStruct Niagara.NiagaraParameterStore
// Size : 0xB8 (Inherited : 0x0)
struct FNiagaraParameterStore {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
	struct UObject* Owner; // 0x8(0x8)
	struct TArray<struct FNiagaraVariableWithOffset> SortedParameterOffsets; // 0x10(0x10)
	struct TArray<enum class None> ParameterData; // 0x20(0x10)
	struct TArray<struct UNiagaraDataInterface*> DataInterfaces; // 0x30(0x10)
	struct TArray<struct UObject*> UObjects; // 0x40(0x10)
	unsigned char UnknownData_50[0x0068]; // 0x50(0x68)
};

// ScriptStruct Niagara.NiagaraVariableWithOffset
// Size : 0x20 (Inherited : 0x18)
struct FNiagaraVariableWithOffset : FNiagaraVariableBase {
	int32_t Offset; // 0x18(0x4)
	unsigned char UnknownData_1C[0x0004]; // 0x1C(0x4)
};

// ScriptStruct Niagara.NiagaraBoundParameter
// Size : 0x30 (Inherited : 0x0)
struct FNiagaraBoundParameter {
	struct FNiagaraVariable Parameter; // 0x0(0x28)
	int32_t SrcOffset; // 0x28(0x4)
	int32_t DestOffset; // 0x2C(0x4)
};

// ScriptStruct Niagara.NiagaraPlatformSetConflictInfo
// Size : 0x18 (Inherited : 0x0)
struct FNiagaraPlatformSetConflictInfo {
	int32_t SetAIndex; // 0x0(0x4)
	int32_t SetBIndex; // 0x4(0x4)
	struct TArray<struct FNiagaraPlatformSetConflictEntry> Conflicts; // 0x8(0x10)
};

// ScriptStruct Niagara.NiagaraPlatformSetConflictEntry
// Size : 0xC (Inherited : 0x0)
struct FNiagaraPlatformSetConflictEntry {
	struct FName ProfileName; // 0x0(0x8)
	int32_t QualityLevelMask; // 0x8(0x4)
};

// ScriptStruct Niagara.NiagaraScalabilityManager
// Size : 0x40 (Inherited : 0x0)
struct FNiagaraScalabilityManager {
	struct UNiagaraEffectType* EffectType; // 0x0(0x8)
	struct TArray<struct UNiagaraComponent*> ManagedComponents; // 0x8(0x10)
	unsigned char UnknownData_18[0x0028]; // 0x18(0x28)
};

// ScriptStruct Niagara.NiagaraVMExecutableData
// Size : 0x128 (Inherited : 0x0)
struct FNiagaraVMExecutableData {
	struct TArray<enum class None> ByteCode; // 0x0(0x10)
	struct TArray<enum class None> OptimizedByteCode; // 0x10(0x10)
	int32_t NumTempRegisters; // 0x20(0x4)
	int32_t NumUserPtrs; // 0x24(0x4)
	struct FNiagaraParameters Parameters; // 0x28(0x10)
	struct FNiagaraParameters InternalParameters; // 0x38(0x10)
	struct TMap<struct FName, struct FNiagaraParameters> DataSetToParameters; // 0x48(0x50)
	struct TArray<struct FNiagaraVariable> Attributes; // 0x98(0x10)
	struct FNiagaraScriptDataUsageInfo DataUsage; // 0xA8(0x1)
	unsigned char UnknownData_A9[0x0007]; // 0xA9(0x7)
	struct TArray<struct FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo; // 0xB0(0x10)
	struct TArray<struct FVMExternalFunctionBindingInfo> CalledVMExternalFunctions; // 0xC0(0x10)
	struct TArray<struct FNiagaraDataSetID> ReadDataSets; // 0xD0(0x10)
	struct TArray<struct FNiagaraDataSetProperties> WriteDataSets; // 0xE0(0x10)
	struct TArray<struct FNiagaraStatScope> StatScopes; // 0xF0(0x10)
	struct TArray<struct FNiagaraDataInterfaceGPUParamInfo> DIParamInfo; // 0x100(0x10)
	enum class ENiagaraScriptCompileStatus LastCompileStatus; // 0x110(0x1)
	unsigned char UnknownData_111[0x0007]; // 0x111(0x7)
	struct TArray<struct FSimulationStageMetaData> SimulationStageMetaData; // 0x118(0x10)
};

// ScriptStruct Niagara.SimulationStageMetaData
// Size : 0x28 (Inherited : 0x0)
struct FSimulationStageMetaData {
	struct FName IterationSource; // 0x0(0x8)
	unsigned char bSpawnOnly : 1; // 0x8(0x1)
	unsigned char bWritesParticles : 1; // 0x8(0x1)
	unsigned char UnknownData_8_2 : 6; // 0x8(0x1)
	unsigned char UnknownData_9[0x0007]; // 0x9(0x7)
	struct TArray<struct FName> OutputDestinations; // 0x10(0x10)
	int32_t MinStage; // 0x20(0x4)
	int32_t MaxStage; // 0x24(0x4)
};

// ScriptStruct Niagara.NiagaraVMExecutableDataId
// Size : 0x48 (Inherited : 0x0)
struct FNiagaraVMExecutableDataId {
	struct FGuid CompilerVersionID; // 0x0(0x10)
	enum class ENiagaraScriptUsage ScriptUsageType; // 0x10(0x1)
	unsigned char UnknownData_11[0x0003]; // 0x11(0x3)
	struct FGuid ScriptUsageTypeID; // 0x14(0x10)
	unsigned char bUsesRapidIterationParams : 1; // 0x24(0x1)
	unsigned char bInterpolatedSpawn : 1; // 0x24(0x1)
	unsigned char bRequiresPersistentIDs : 1; // 0x24(0x1)
	unsigned char UnknownData_24_3 : 5; // 0x24(0x1)
	unsigned char UnknownData_25[0x0003]; // 0x25(0x3)
	struct FGuid BaseScriptID; // 0x28(0x10)
	struct FNiagaraCompileHash BaseScriptCompileHash; // 0x38(0x10)
};

// ScriptStruct Niagara.NiagaraModuleDependency
// Size : 0x28 (Inherited : 0x0)
struct FNiagaraModuleDependency {
	struct FName ID; // 0x0(0x8)
	enum class ENiagaraModuleDependencyType Type; // 0x8(0x1)
	enum class ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // 0x9(0x1)
	unsigned char UnknownData_A[0x0006]; // 0xA(0x6)
	struct FText Description; // 0x10(0x18)
};

// ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
// Size : 0xD8 (Inherited : 0xB8)
struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore {
	int32_t ParameterSize; // 0xB8(0x4)
	uint32_t PaddedParameterSize; // 0xBC(0x4)
	struct TArray<struct FNiagaraScriptExecutionPaddingInfo> PaddingInfo; // 0xC0(0x10)
	unsigned char bInitialized : 1; // 0xD0(0x1)
	unsigned char UnknownData_D0_1 : 7; // 0xD0(0x1)
	unsigned char UnknownData_D1[0x0007]; // 0xD1(0x7)
};

// ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
// Size : 0x8 (Inherited : 0x0)
struct FNiagaraScriptExecutionPaddingInfo {
	uint16 SrcOffset; // 0x0(0x2)
	uint16 DestOffset; // 0x2(0x2)
	uint16 SrcSize; // 0x4(0x2)
	uint16 DestSize; // 0x6(0x2)
};

// ScriptStruct Niagara.NiagaraScriptHighlight
// Size : 0x28 (Inherited : 0x0)
struct FNiagaraScriptHighlight {
	struct FLinearColor Color; // 0x0(0x10)
	struct FText DisplayName; // 0x10(0x18)
};

// ScriptStruct Niagara.NiagaraSystemCompileRequest
// Size : 0x80 (Inherited : 0x0)
struct FNiagaraSystemCompileRequest {
	unsigned char UnknownData_0[0x0008]; // 0x0(0x8)
	struct TArray<struct UObject*> RootObjects; // 0x8(0x10)
	unsigned char UnknownData_18[0x0068]; // 0x18(0x68)
};

// ScriptStruct Niagara.EmitterCompiledScriptPair
// Size : 0x78 (Inherited : 0x0)
struct FEmitterCompiledScriptPair {
	unsigned char UnknownData_0[0x0078]; // 0x0(0x78)
};

// ScriptStruct Niagara.NiagaraSystemCompiledData
// Size : 0x258 (Inherited : 0x0)
struct FNiagaraSystemCompiledData {
	struct FNiagaraParameterStore InstanceParamStore; // 0x0(0xB8)
	struct FNiagaraDataSetCompiledData DataSetCompiledData; // 0xB8(0x40)
	struct FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData; // 0xF8(0x40)
	struct FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData; // 0x138(0x40)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding; // 0x178(0x20)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding; // 0x198(0x20)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding; // 0x1B8(0x20)
	struct TArray<struct FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings; // 0x1D8(0x10)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding; // 0x1E8(0x20)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding; // 0x208(0x20)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding; // 0x228(0x20)
	struct TArray<struct FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings; // 0x248(0x10)
};

// ScriptStruct Niagara.NiagaraParameterDataSetBindingCollection
// Size : 0x20 (Inherited : 0x0)
struct FNiagaraParameterDataSetBindingCollection {
	struct TArray<struct FNiagaraParameterDataSetBinding> FloatOffsets; // 0x0(0x10)
	struct TArray<struct FNiagaraParameterDataSetBinding> Int32Offsets; // 0x10(0x10)
};

// ScriptStruct Niagara.NiagaraParameterDataSetBinding
// Size : 0x8 (Inherited : 0x0)
struct FNiagaraParameterDataSetBinding {
	int32_t ParameterOffset; // 0x0(0x4)
	int32_t DataSetComponentOffset; // 0x4(0x4)
};

// ScriptStruct Niagara.NiagaraEmitterCompiledData
// Size : 0x140 (Inherited : 0x0)
struct FNiagaraEmitterCompiledData {
	struct TArray<struct FName> SpawnAttributes; // 0x0(0x10)
	struct FNiagaraVariable EmitterSpawnIntervalVar; // 0x10(0x28)
	struct FNiagaraVariable EmitterInterpSpawnStartDTVar; // 0x38(0x28)
	struct FNiagaraVariable EmitterSpawnGroupVar; // 0x60(0x28)
	struct FNiagaraVariable EmitterAgeVar; // 0x88(0x28)
	struct FNiagaraVariable EmitterRandomSeedVar; // 0xB0(0x28)
	struct FNiagaraVariable EmitterTotalSpawnedParticlesVar; // 0xD8(0x28)
	struct FNiagaraDataSetCompiledData DataSetCompiledData; // 0x100(0x40)
};

// ScriptStruct Niagara.NiagaraVariableMetaData
// Size : 0xE8 (Inherited : 0x0)
struct FNiagaraVariableMetaData {
	struct FText Description; // 0x0(0x18)
	struct FText CategoryName; // 0x18(0x18)
	bool bAdvancedDisplay; // 0x30(0x1)
	unsigned char UnknownData_31[0x0003]; // 0x31(0x3)
	int32_t EditorSortPriority; // 0x34(0x4)
	bool bInlineEditConditionToggle; // 0x38(0x1)
	unsigned char UnknownData_39[0x0007]; // 0x39(0x7)
	struct FNiagaraInputConditionMetadata EditCondition; // 0x40(0x18)
	struct FNiagaraInputConditionMetadata VisibleCondition; // 0x58(0x18)
	struct TMap<struct FName, struct FString> PropertyMetaData; // 0x70(0x50)
	struct FName ScopeName; // 0xC0(0x8)
	enum class ENiagaraScriptParameterUsage Usage; // 0xC8(0x4)
	bool bIsStaticSwitch; // 0xCC(0x1)
	unsigned char UnknownData_CD[0x0003]; // 0xCD(0x3)
	int32_t StaticSwitchDefaultValue; // 0xD0(0x4)
	bool bAddedToNodeGraphDeepCopy; // 0xD4(0x1)
	bool bOutputIsPersistent; // 0xD5(0x1)
	unsigned char UnknownData_D6[0x0002]; // 0xD6(0x2)
	struct FName CachedNamespacelessVariableName; // 0xD8(0x8)
	bool bCreatedInSystemEditor; // 0xE0(0x1)
	bool bUseLegacyNameString; // 0xE1(0x1)
	unsigned char UnknownData_E2[0x0006]; // 0xE2(0x6)
};

// ScriptStruct Niagara.NiagaraInputConditionMetadata
// Size : 0x18 (Inherited : 0x0)
struct FNiagaraInputConditionMetadata {
	struct FName InputName; // 0x0(0x8)
	struct TArray<struct FString> TargetValues; // 0x8(0x10)
};

// ScriptStruct Niagara.NiagaraParameterScopeInfo
// Size : 0x18 (Inherited : 0x0)
struct FNiagaraParameterScopeInfo {
	enum class ENiagaraParameterScope Scope; // 0x0(0x4)
	unsigned char UnknownData_4[0x0004]; // 0x4(0x4)
	struct FString NamespaceString; // 0x8(0x10)
};

// ScriptStruct Niagara.NiagaraCompileHashVisitorDebugInfo
// Size : 0x30 (Inherited : 0x0)
struct FNiagaraCompileHashVisitorDebugInfo {
	struct FString Object; // 0x0(0x10)
	struct TArray<struct FString> PropertyKeys; // 0x10(0x10)
	struct TArray<struct FString> PropertyValues; // 0x20(0x10)
};

// ScriptStruct Niagara.NiagaraID
// Size : 0x8 (Inherited : 0x0)
struct FNiagaraID {
	int32_t Index; // 0x0(0x4)
	int32_t AcquireTag; // 0x4(0x4)
};

// ScriptStruct Niagara.NiagaraSpawnInfo
// Size : 0x10 (Inherited : 0x0)
struct FNiagaraSpawnInfo {
	int32_t Count; // 0x0(0x4)
	float InterpStartDt; // 0x4(0x4)
	float IntervalDt; // 0x8(0x4)
	int32_t SpawnGroup; // 0xC(0x4)
};

// ScriptStruct Niagara.NiagaraMatrix
// Size : 0x40 (Inherited : 0x0)
struct FNiagaraMatrix {
	struct FVector4 Row0; // 0x0(0x10)
	struct FVector4 Row1; // 0x10(0x10)
	struct FVector4 Row2; // 0x20(0x10)
	struct FVector4 Row3; // 0x30(0x10)
};

// ScriptStruct Niagara.NiagaraTestStruct
// Size : 0x48 (Inherited : 0x0)
struct FNiagaraTestStruct {
	struct FVector Vector1; // 0x0(0xC)
	struct FVector Vector2; // 0xC(0xC)
	struct FNiagaraTestStructInner InnerStruct1; // 0x18(0x18)
	struct FNiagaraTestStructInner InnerStruct2; // 0x30(0x18)
};

// ScriptStruct Niagara.NiagaraTestStructInner
// Size : 0x18 (Inherited : 0x0)
struct FNiagaraTestStructInner {
	struct FVector InnerVector1; // 0x0(0xC)
	struct FVector InnerVector2; // 0xC(0xC)
};

// ScriptStruct Niagara.NiagaraParameterMap
// Size : 0x1 (Inherited : 0x0)
struct FNiagaraParameterMap {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
};

// ScriptStruct Niagara.NiagaraNumeric
// Size : 0x1 (Inherited : 0x0)
struct FNiagaraNumeric {
	unsigned char UnknownData_0[0x0001]; // 0x0(0x1)
};

// ScriptStruct Niagara.NiagaraBool
// Size : 0x4 (Inherited : 0x0)
struct FNiagaraBool {
	int32_t Value; // 0x0(0x4)
};

// ScriptStruct Niagara.NiagaraInt32
// Size : 0x4 (Inherited : 0x0)
struct FNiagaraInt32 {
	int32_t Value; // 0x0(0x4)
};

// ScriptStruct Niagara.NiagaraFloat
// Size : 0x4 (Inherited : 0x0)
struct FNiagaraFloat {
	float Value; // 0x0(0x4)
};

// ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
// Size : 0x108 (Inherited : 0xB8)
struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore {
	struct TMap<struct FNiagaraVariable, struct FNiagaraVariable> UserParameterRedirects; // 0xB8(0x50)
};

// ScriptStruct Niagara.NiagaraVariant
// Size : 0x28 (Inherited : 0x0)
struct FNiagaraVariant {
	struct UObject* Object; // 0x0(0x8)
	struct UNiagaraDataInterface* DataInterface; // 0x8(0x8)
	struct TArray<enum class None> Bytes; // 0x10(0x10)
	enum class ENiagaraVariantMode CurrentMode; // 0x20(0x4)
	unsigned char UnknownData_24[0x0004]; // 0x24(0x4)
};

// ScriptStruct Niagara.NiagaraWorldManagerTickFunction
// Size : 0x30 (Inherited : 0x28)
struct FNiagaraWorldManagerTickFunction : FTickFunction {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
};

