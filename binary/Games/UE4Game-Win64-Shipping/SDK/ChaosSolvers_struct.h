// ScriptStruct ChaosSolvers.SolverBreakingFilterSettings
// Size : 0x10 (Inherited : 0x0)
struct FSolverBreakingFilterSettings {
	bool FilterEnabled; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float MinMass; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinVolume; // 0xC(0x4)
};

// ScriptStruct ChaosSolvers.SolverCollisionFilterSettings
// Size : 0x10 (Inherited : 0x0)
struct FSolverCollisionFilterSettings {
	bool FilterEnabled; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float MinMass; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinImpulse; // 0xC(0x4)
};

// ScriptStruct ChaosSolvers.SolverTrailingFilterSettings
// Size : 0x10 (Inherited : 0x0)
struct FSolverTrailingFilterSettings {
	bool FilterEnabled; // 0x0(0x1)
	unsigned char UnknownData_1[0x0003]; // 0x1(0x3)
	float MinMass; // 0x4(0x4)
	float MinSpeed; // 0x8(0x4)
	float MinVolume; // 0xC(0x4)
};

