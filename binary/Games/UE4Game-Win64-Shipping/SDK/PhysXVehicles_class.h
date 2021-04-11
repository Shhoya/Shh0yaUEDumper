// Class PhysXVehicles.WheeledVehicleMovementComponent
// Size : 0x290 (Inherited : 0x138)
struct UWheeledVehicleMovementComponent : UPawnMovementComponent {
	unsigned char UnknownData_138[0x0008]; // 0x138(0x8)
	unsigned char bDeprecatedSpringOffsetMode : 1; // 0x140(0x1)
	unsigned char bReverseAsBrake : 1; // 0x140(0x1)
	unsigned char bUseRVOAvoidance : 1; // 0x140(0x1)
	unsigned char bRawHandbrakeInput : 1; // 0x140(0x1)
	unsigned char bRawGearUpInput : 1; // 0x140(0x1)
	unsigned char bRawGearDownInput : 1; // 0x140(0x1)
	unsigned char UnknownData_140_6 : 2; // 0x140(0x1)
	unsigned char UnknownData_141[0x0003]; // 0x141(0x3)
	unsigned char bWasAvoidanceUpdated : 1; // 0x144(0x1)
	unsigned char UnknownData_144_1 : 7; // 0x144(0x1)
	unsigned char UnknownData_145[0x0003]; // 0x145(0x3)
	float Mass; // 0x148(0x4)
	unsigned char UnknownData_14C[0x0004]; // 0x14C(0x4)
	struct TArray<struct FWheelSetup> WheelSetups; // 0x150(0x10)
	float DragCoefficient; // 0x160(0x4)
	float ChassisWidth; // 0x164(0x4)
	float ChassisHeight; // 0x168(0x4)
	float DragArea; // 0x16C(0x4)
	float EstimatedMaxEngineSpeed; // 0x170(0x4)
	float MaxEngineRPM; // 0x174(0x4)
	float DebugDragMagnitude; // 0x178(0x4)
	struct FVector InertiaTensorScale; // 0x17C(0xC)
	float MinNormalizedTireLoad; // 0x188(0x4)
	float MinNormalizedTireLoadFiltered; // 0x18C(0x4)
	float MaxNormalizedTireLoad; // 0x190(0x4)
	float MaxNormalizedTireLoadFiltered; // 0x194(0x4)
	float ThresholdLongitudinalSpeed; // 0x198(0x4)
	int32_t LowForwardSpeedSubStepCount; // 0x19C(0x4)
	int32_t HighForwardSpeedSubStepCount; // 0x1A0(0x4)
	unsigned char UnknownData_1A4[0x0004]; // 0x1A4(0x4)
	struct TArray<struct UVehicleWheel*> Wheels; // 0x1A8(0x10)
	unsigned char UnknownData_1B8[0x0018]; // 0x1B8(0x18)
	float RVOAvoidanceRadius; // 0x1D0(0x4)
	float RVOAvoidanceHeight; // 0x1D4(0x4)
	float AvoidanceConsiderationRadius; // 0x1D8(0x4)
	float RVOSteeringStep; // 0x1DC(0x4)
	float RVOThrottleStep; // 0x1E0(0x4)
	int32_t AvoidanceUID; // 0x1E4(0x4)
	struct FNavAvoidanceMask AvoidanceGroup; // 0x1E8(0x4)
	struct FNavAvoidanceMask GroupsToAvoid; // 0x1EC(0x4)
	struct FNavAvoidanceMask GroupsToIgnore; // 0x1F0(0x4)
	float AvoidanceWeight; // 0x1F4(0x4)
	struct FVector PendingLaunchVelocity; // 0x1F8(0xC)
	struct FReplicatedVehicleState ReplicatedState; // 0x204(0x14)
	unsigned char UnknownData_218[0x0004]; // 0x218(0x4)
	float RawSteeringInput; // 0x21C(0x4)
	float RawThrottleInput; // 0x220(0x4)
	float RawBrakeInput; // 0x224(0x4)
	float SteeringInput; // 0x228(0x4)
	float ThrottleInput; // 0x22C(0x4)
	float BrakeInput; // 0x230(0x4)
	float HandbrakeInput; // 0x234(0x4)
	float IdleBrakeInput; // 0x238(0x4)
	float StopThreshold; // 0x23C(0x4)
	float WrongDirectionThreshold; // 0x240(0x4)
	struct FVehicleInputRate ThrottleInputRate; // 0x244(0x8)
	struct FVehicleInputRate BrakeInputRate; // 0x24C(0x8)
	struct FVehicleInputRate HandbrakeInputRate; // 0x254(0x8)
	struct FVehicleInputRate SteeringInputRate; // 0x25C(0x8)
	unsigned char UnknownData_264[0x0024]; // 0x264(0x24)
	struct AController* OverrideController; // 0x288(0x8)

	void SetUseAutoGears(bool bUseAuto); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetUseAutoGears // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D846D0
	void SetThrottleInput(float Throttle); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetThrottleInput // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774D84650
	void SetTargetGear(int32_t GearNum, bool bImmediate); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetTargetGear // (Final|Native|Public|BlueprintCallable) // Param Size : 0x5, 0x7FF774D84590
	void SetSteeringInput(float Steering); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetSteeringInput // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774D84510
	void SetHandbrakeInput(bool bNewHandbrake); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetHandbrakeInput // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D843B0
	void SetGroupsToIgnoreMask(struct FNavAvoidanceMask GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnoreMask // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x4, 0x7FF774D84320
	void SetGroupsToIgnore(int32_t GroupFlags); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToIgnore // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774D842A0
	void SetGroupsToAvoidMask(struct FNavAvoidanceMask GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoidMask // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x4, 0x7FF774D84210
	void SetGroupsToAvoid(int32_t GroupFlags); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGroupsToAvoid // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774D84190
	void SetGearUp(bool bNewGearUp); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearUp // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D84100
	void SetGearDown(bool bNewGearDown); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetGearDown // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D84070
	void SetBrakeInput(float Brake); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetBrakeInput // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774D83E50
	void SetAvoidanceGroupMask(struct FNavAvoidanceMask GroupMask); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroupMask // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x4, 0x7FF774D83DC0
	void SetAvoidanceGroup(int32_t GroupFlags); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceGroup // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF774D83D40
	void SetAvoidanceEnabled(bool bEnable); // Function PhysXVehicles.WheeledVehicleMovementComponent.SetAvoidanceEnabled // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF774D83CB0
	void ServerUpdateState(float InSteeringInput, float InThrottleInput, float InBrakeInput, float InHandbrakeInput, int32_t CurrentGear); // Function PhysXVehicles.WheeledVehicleMovementComponent.ServerUpdateState // (Net|NetReliable|Native|Event|Protected|NetServer|NetValidate) // Param Size : 0x14, 0x7FF774D83AE0
	bool GetUseAutoGears(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetUseAutoGears // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF774D83A50
	int32_t GetTargetGear(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetTargetGear // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774D83A20
	float GetForwardSpeed(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetForwardSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774D83960
	float GetEngineRotationSpeed(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineRotationSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774D83930
	float GetEngineMaxRotationSpeed(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetEngineMaxRotationSpeed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774D83900
	int32_t GetCurrentGear(); // Function PhysXVehicles.WheeledVehicleMovementComponent.GetCurrentGear // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774D838D0
};

// Class PhysXVehicles.SimpleWheeledVehicleMovementComponent
// Size : 0x290 (Inherited : 0x290)
struct USimpleWheeledVehicleMovementComponent : UWheeledVehicleMovementComponent {

	void SetSteerAngle(float SteerAngle, int32_t WheelIndex); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetSteerAngle // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774D84440
	void SetDriveTorque(float DriveTorque, int32_t WheelIndex); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetDriveTorque // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774D83FA0
	void SetBrakeTorque(float BrakeTorque, int32_t WheelIndex); // Function PhysXVehicles.SimpleWheeledVehicleMovementComponent.SetBrakeTorque // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774D83ED0
};

// Class PhysXVehicles.TireConfig
// Size : 0x50 (Inherited : 0x30)
struct UTireConfig : UDataAsset {
	float FrictionScale; // 0x30(0x4)
	unsigned char UnknownData_34[0x0004]; // 0x34(0x4)
	struct TArray<struct FTireConfigMaterialFriction> TireFrictionScales; // 0x38(0x10)
	unsigned char UnknownData_48[0x0008]; // 0x48(0x8)
};

// Class PhysXVehicles.VehicleAnimInstance
// Size : 0x980 (Inherited : 0x270)
struct UVehicleAnimInstance : UAnimInstance {
	unsigned char UnknownData_270[0x0700]; // 0x270(0x700)
	struct UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0x970(0x8)
	unsigned char UnknownData_978[0x0008]; // 0x978(0x8)

	struct AWheeledVehicle* GetVehicle(); // Function PhysXVehicles.VehicleAnimInstance.GetVehicle // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF774D83A80
};

// Class PhysXVehicles.VehicleWheel
// Size : 0xF0 (Inherited : 0x28)
struct UVehicleWheel : UObject {
	struct UStaticMesh* CollisionMesh; // 0x28(0x8)
	bool bDontCreateShape; // 0x30(0x1)
	bool bAutoAdjustCollisionSize; // 0x31(0x1)
	unsigned char UnknownData_32[0x0002]; // 0x32(0x2)
	struct FVector Offset; // 0x34(0xC)
	float ShapeRadius; // 0x40(0x4)
	float ShapeWidth; // 0x44(0x4)
	float Mass; // 0x48(0x4)
	float DampingRate; // 0x4C(0x4)
	float SteerAngle; // 0x50(0x4)
	bool bAffectedByHandbrake; // 0x54(0x1)
	unsigned char UnknownData_55[0x0003]; // 0x55(0x3)
	struct UTireType* TireType; // 0x58(0x8)
	struct UTireConfig* TireConfig; // 0x60(0x8)
	float LatStiffMaxLoad; // 0x68(0x4)
	float LatStiffValue; // 0x6C(0x4)
	float LongStiffValue; // 0x70(0x4)
	float SuspensionForceOffset; // 0x74(0x4)
	float SuspensionMaxRaise; // 0x78(0x4)
	float SuspensionMaxDrop; // 0x7C(0x4)
	float SuspensionNaturalFrequency; // 0x80(0x4)
	float SuspensionDampingRatio; // 0x84(0x4)
	enum class EWheelSweepType SweepType; // 0x88(0x1)
	unsigned char UnknownData_89[0x0003]; // 0x89(0x3)
	float MaxBrakeTorque; // 0x8C(0x4)
	float MaxHandBrakeTorque; // 0x90(0x4)
	unsigned char UnknownData_94[0x0004]; // 0x94(0x4)
	struct UWheeledVehicleMovementComponent* VehicleSim; // 0x98(0x8)
	int32_t WheelIndex; // 0xA0(0x4)
	float DebugLongSlip; // 0xA4(0x4)
	float DebugLatSlip; // 0xA8(0x4)
	float DebugNormalizedTireLoad; // 0xAC(0x4)
	unsigned char UnknownData_B0[0x0004]; // 0xB0(0x4)
	float DebugWheelTorque; // 0xB4(0x4)
	float DebugLongForce; // 0xB8(0x4)
	float DebugLatForce; // 0xBC(0x4)
	struct FVector Location; // 0xC0(0xC)
	struct FVector OldLocation; // 0xCC(0xC)
	struct FVector Velocity; // 0xD8(0xC)
	unsigned char UnknownData_E4[0x000C]; // 0xE4(0xC)

	bool IsInAir(); // Function PhysXVehicles.VehicleWheel.IsInAir // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF774D83AB0
	float GetSuspensionOffset(); // Function PhysXVehicles.VehicleWheel.GetSuspensionOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774D839F0
	float GetSteerAngle(); // Function PhysXVehicles.VehicleWheel.GetSteerAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774D839C0
	float GetRotationAngle(); // Function PhysXVehicles.VehicleWheel.GetRotationAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF774D83990
};

// Class PhysXVehicles.WheeledVehicle
// Size : 0x290 (Inherited : 0x280)
struct AWheeledVehicle : APawn {
	struct USkeletalMeshComponent* Mesh; // 0x280(0x8)
	struct UWheeledVehicleMovementComponent* VehicleMovement; // 0x288(0x8)
};

// Class PhysXVehicles.WheeledVehicleMovementComponent4W
// Size : 0x408 (Inherited : 0x290)
struct UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent {
	struct FVehicleEngineData EngineSetup; // 0x290(0xA0)
	struct FVehicleDifferential4WData DifferentialSetup; // 0x330(0x1C)
	float AckermannAccuracy; // 0x34C(0x4)
	struct FVehicleTransmissionData TransmissionSetup; // 0x350(0x30)
	struct FRuntimeFloatCurve SteeringCurve; // 0x380(0x88)
};

