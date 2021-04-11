// Class FieldSystemEngine.FieldSystemActor
// Size : 0x228 (Inherited : 0x220)
struct AFieldSystemActor : AActor {
	struct UFieldSystemComponent* FieldSystemComponent; // 0x220(0x8)
};

// Class FieldSystemEngine.FieldSystem
// Size : 0x38 (Inherited : 0x28)
struct UFieldSystem : UObject {
	unsigned char UnknownData_28[0x0010]; // 0x28(0x10)
};

// Class FieldSystemEngine.FieldSystemComponent
// Size : 0x450 (Inherited : 0x410)
struct UFieldSystemComponent : UPrimitiveComponent {
	struct UFieldSystem* FieldSystem; // 0x408(0x8)
	unsigned char UnknownData_418[0x0008]; // 0x418(0x8)
	struct TArray<struct TSoftObjectPtr<struct AChaosSolverActor>> SupportedSolvers; // 0x420(0x10)
	unsigned char UnknownData_430[0x0020]; // 0x430(0x20)

	void ResetFieldSystem(); // Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF776B117A0
	void ApplyUniformVectorFalloffForce(bool Enabled, struct FVector Position, struct FVector Direction, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x24, 0x7FF776B115F0
	void ApplyStrainField(bool Enabled, struct FVector Position, float Radius, float Magnitude, int32_t Iterations); // Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x1C, 0x7FF776B11440
	void ApplyStayDynamicField(bool Enabled, struct FVector Position, float Radius); // Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x14, 0x7FF776B11320
	void ApplyRadialVectorFalloffForce(bool Enabled, struct FVector Position, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x18, 0x7FF776B111B0
	void ApplyRadialForce(bool Enabled, struct FVector Position, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x14, 0x7FF776B11090
	void ApplyPhysicsField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF776B10F40
	void ApplyLinearForce(bool Enabled, struct FVector Direction, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x14, 0x7FF776B10E20
	void AddFieldCommand(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData* MetaData, struct UFieldNodeBase* Field); // Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF776B10CD0
};

// Class FieldSystemEngine.FieldSystemMetaData
// Size : 0xB0 (Inherited : 0xB0)
struct UFieldSystemMetaData : UActorComponent {
};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
// Size : 0xB8 (Inherited : 0xB0)
struct UFieldSystemMetaDataIteration : UFieldSystemMetaData {
	int32_t Iterations; // 0xB0(0x4)
	unsigned char UnknownData_B4[0x0004]; // 0xB4(0x4)

	struct UFieldSystemMetaDataIteration* SetMetaDataIteration(int32_t Iterations); // Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF776B11AF0
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
// Size : 0xB8 (Inherited : 0xB0)
struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData {
	enum class EFieldResolutionType ResolutionType; // 0xB0(0x1)
	unsigned char UnknownData_B1[0x0007]; // 0xB1(0x7)

	struct UFieldSystemMetaDataProcessingResolution* SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType ResolutionType); // Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF776B11B80
};

// Class FieldSystemEngine.FieldNodeBase
// Size : 0xB0 (Inherited : 0xB0)
struct UFieldNodeBase : UActorComponent {
};

// Class FieldSystemEngine.FieldNodeInt
// Size : 0xB0 (Inherited : 0xB0)
struct UFieldNodeInt : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeFloat
// Size : 0xB0 (Inherited : 0xB0)
struct UFieldNodeFloat : UFieldNodeBase {
};

// Class FieldSystemEngine.FieldNodeVector
// Size : 0xB0 (Inherited : 0xB0)
struct UFieldNodeVector : UFieldNodeBase {
};

// Class FieldSystemEngine.UniformInteger
// Size : 0xB8 (Inherited : 0xB0)
struct UUniformInteger : UFieldNodeInt {
	int32_t Magnitude; // 0xB0(0x4)
	unsigned char UnknownData_B4[0x0004]; // 0xB4(0x4)

	struct UUniformInteger* SetUniformInteger(int32_t Magnitude); // Function FieldSystemEngine.UniformInteger.SetUniformInteger // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF776B11AF0
};

// Class FieldSystemEngine.RadialIntMask
// Size : 0xD0 (Inherited : 0xB0)
struct URadialIntMask : UFieldNodeInt {
	float Radius; // 0xB0(0x4)
	struct FVector Position; // 0xB4(0xC)
	int32_t InteriorValue; // 0xC0(0x4)
	int32_t ExteriorValue; // 0xC4(0x4)
	enum class ESetMaskConditionType SetMaskCondition; // 0xC8(0x1)
	unsigned char UnknownData_C9[0x0007]; // 0xC9(0x7)

	struct URadialIntMask* SetRadialIntMask(float Radius, struct FVector Position, int32_t InteriorValue, int32_t ExteriorValue, enum class ESetMaskConditionType SetMaskConditionIn); // Function FieldSystemEngine.RadialIntMask.SetRadialIntMask // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x28, 0x7FF776B12380
};

// Class FieldSystemEngine.UniformScalar
// Size : 0xB8 (Inherited : 0xB0)
struct UUniformScalar : UFieldNodeFloat {
	float Magnitude; // 0xB0(0x4)
	unsigned char UnknownData_B4[0x0004]; // 0xB4(0x4)

	struct UUniformScalar* SetUniformScalar(float Magnitude); // Function FieldSystemEngine.UniformScalar.SetUniformScalar // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF776B12620
};

// Class FieldSystemEngine.RadialFalloff
// Size : 0xD8 (Inherited : 0xB0)
struct URadialFalloff : UFieldNodeFloat {
	float Magnitude; // 0xB0(0x4)
	float MinRange; // 0xB4(0x4)
	float MaxRange; // 0xB8(0x4)
	float Default; // 0xBC(0x4)
	float Radius; // 0xC0(0x4)
	struct FVector Position; // 0xC4(0xC)
	enum class EFieldFalloffType Falloff; // 0xD0(0x1)
	unsigned char UnknownData_D1[0x0007]; // 0xD1(0x7)

	struct URadialFalloff* SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct FVector Position, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.RadialFalloff.SetRadialFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x30, 0x7FF776B12160
};

// Class FieldSystemEngine.PlaneFalloff
// Size : 0xE0 (Inherited : 0xB0)
struct UPlaneFalloff : UFieldNodeFloat {
	float Magnitude; // 0xB0(0x4)
	float MinRange; // 0xB4(0x4)
	float MaxRange; // 0xB8(0x4)
	float Default; // 0xBC(0x4)
	float Distance; // 0xC0(0x4)
	struct FVector Position; // 0xC4(0xC)
	struct FVector Normal; // 0xD0(0xC)
	enum class EFieldFalloffType Falloff; // 0xDC(0x1)
	unsigned char UnknownData_DD[0x0003]; // 0xDD(0x3)

	struct UPlaneFalloff* SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct FVector Position, struct FVector Normal, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x38, 0x7FF776B11EE0
};

// Class FieldSystemEngine.BoxFalloff
// Size : 0x100 (Inherited : 0xB0)
struct UBoxFalloff : UFieldNodeFloat {
	float Magnitude; // 0xB0(0x4)
	float MinRange; // 0xB4(0x4)
	float MaxRange; // 0xB8(0x4)
	float Default; // 0xBC(0x4)
	struct FTransform Transform; // 0xC0(0x30)
	enum class EFieldFalloffType Falloff; // 0xF0(0x1)
	unsigned char UnknownData_F1[0x000F]; // 0xF1(0xF)

	struct UBoxFalloff* SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.BoxFalloff.SetBoxFalloff // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x50, 0x7FF776B117C0
};

// Class FieldSystemEngine.NoiseField
// Size : 0xF0 (Inherited : 0xB0)
struct UNoiseField : UFieldNodeFloat {
	float MinRange; // 0xB0(0x4)
	float MaxRange; // 0xB4(0x4)
	unsigned char UnknownData_B8[0x0008]; // 0xB8(0x8)
	struct FTransform Transform; // 0xC0(0x30)

	struct UNoiseField* SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform); // Function FieldSystemEngine.NoiseField.SetNoiseField // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x48, 0x7FF776B11C10
};

// Class FieldSystemEngine.UniformVector
// Size : 0xC0 (Inherited : 0xB0)
struct UUniformVector : UFieldNodeVector {
	float Magnitude; // 0xB0(0x4)
	struct FVector Direction; // 0xB4(0xC)

	struct UUniformVector* SetUniformVector(float Magnitude, struct FVector Direction); // Function FieldSystemEngine.UniformVector.SetUniformVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x18, 0x7FF776B12540
};

// Class FieldSystemEngine.RadialVector
// Size : 0xC0 (Inherited : 0xB0)
struct URadialVector : UFieldNodeVector {
	float Magnitude; // 0xB0(0x4)
	struct FVector Position; // 0xB4(0xC)

	struct URadialVector* SetRadialVector(float Magnitude, struct FVector Position); // Function FieldSystemEngine.RadialVector.SetRadialVector // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x18, 0x7FF776B12540
};

// Class FieldSystemEngine.RandomVector
// Size : 0xB8 (Inherited : 0xB0)
struct URandomVector : UFieldNodeVector {
	float Magnitude; // 0xB0(0x4)
	unsigned char UnknownData_B4[0x0004]; // 0xB4(0x4)

	struct URandomVector* SetRandomVector(float Magnitude); // Function FieldSystemEngine.RandomVector.SetRandomVector // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF776B12620
};

// Class FieldSystemEngine.OperatorField
// Size : 0xD0 (Inherited : 0xB0)
struct UOperatorField : UFieldNodeBase {
	float Magnitude; // 0xB0(0x4)
	unsigned char UnknownData_B4[0x0004]; // 0xB4(0x4)
	struct UFieldNodeBase* RightField; // 0xB8(0x8)
	struct UFieldNodeBase* LeftField; // 0xC0(0x8)
	enum class EFieldOperationType Operation; // 0xC8(0x1)
	unsigned char UnknownData_C9[0x0007]; // 0xC9(0x7)

	struct UOperatorField* SetOperatorField(float Magnitude, struct UFieldNodeBase* RightField, struct UFieldNodeBase* LeftField, enum class EFieldOperationType Operation); // Function FieldSystemEngine.OperatorField.SetOperatorField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x28, 0x7FF776B11D90
};

// Class FieldSystemEngine.ToIntegerField
// Size : 0xB8 (Inherited : 0xB0)
struct UToIntegerField : UFieldNodeInt {
	struct UFieldNodeFloat* FloatField; // 0xB0(0x8)

	struct UToIntegerField* SetToIntegerField(struct UFieldNodeFloat* FloatField); // Function FieldSystemEngine.ToIntegerField.SetToIntegerField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF776B126E0
};

// Class FieldSystemEngine.ToFloatField
// Size : 0xB8 (Inherited : 0xB0)
struct UToFloatField : UFieldNodeFloat {
	struct UFieldNodeInt* IntField; // 0xB0(0x8)

	struct UToFloatField* SetToFloatField(struct UFieldNodeInt* IntegerField); // Function FieldSystemEngine.ToFloatField.SetToFloatField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF776B126E0
};

// Class FieldSystemEngine.CullingField
// Size : 0xC8 (Inherited : 0xB0)
struct UCullingField : UFieldNodeBase {
	struct UFieldNodeBase* Culling; // 0xB0(0x8)
	struct UFieldNodeBase* Field; // 0xB8(0x8)
	enum class EFieldCullingOperationType Operation; // 0xC0(0x1)
	unsigned char UnknownData_C1[0x0007]; // 0xC1(0x7)

	struct UCullingField* SetCullingField(struct UFieldNodeBase* Culling, struct UFieldNodeBase* Field, enum class EFieldCullingOperationType Operation); // Function FieldSystemEngine.CullingField.SetCullingField // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x20, 0x7FF776B119F0
};

// Class FieldSystemEngine.ReturnResultsTerminal
// Size : 0xB0 (Inherited : 0xB0)
struct UReturnResultsTerminal : UFieldNodeBase {

	struct UReturnResultsTerminal* SetReturnResultsTerminal(); // Function FieldSystemEngine.ReturnResultsTerminal.SetReturnResultsTerminal // (Final|Native|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x8, 0x7FF776B126B0
};

