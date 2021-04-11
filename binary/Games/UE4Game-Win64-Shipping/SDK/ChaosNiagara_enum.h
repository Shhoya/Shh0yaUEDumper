// Enum ChaosNiagara.ELocationZToSpawnEnum
enum class FELocationZToSpawnEnum : uint8 {
	ChaosNiagara_LocationZToSpawn_None
	ChaosNiagara_LocationZToSpawn_Min
	ChaosNiagara_LocationZToSpawn_Max
	ChaosNiagara_LocationZToSpawn_MinMax
	ChaosNiagara_Max
};

// Enum ChaosNiagara.ELocationYToSpawnEnum
enum class FELocationYToSpawnEnum : uint8 {
	ChaosNiagara_LocationYToSpawn_None
	ChaosNiagara_LocationYToSpawn_Min
	ChaosNiagara_LocationYToSpawn_Max
	ChaosNiagara_LocationYToSpawn_MinMax
	ChaosNiagara_Max
};

// Enum ChaosNiagara.ELocationXToSpawnEnum
enum class FELocationXToSpawnEnum : uint8 {
	ChaosNiagara_LocationXToSpawn_None
	ChaosNiagara_LocationXToSpawn_Min
	ChaosNiagara_LocationXToSpawn_Max
	ChaosNiagara_LocationXToSpawn_MinMax
	ChaosNiagara_Max
};

// Enum ChaosNiagara.ELocationFilteringModeEnum
enum class FELocationFilteringModeEnum : uint8 {
	ChaosNiagara_LocationFilteringMode_Inclusive
	ChaosNiagara_LocationFilteringMode_Exclusive
	ChaosNiagara_Max
};

// Enum ChaosNiagara.EDataSourceTypeEnum
enum class FEDataSourceTypeEnum : uint8 {
	ChaosNiagara_DataSourceType_Collision
	ChaosNiagara_DataSourceType_Breaking
	ChaosNiagara_DataSourceType_Trailing
	ChaosNiagara_Max
};

// Enum ChaosNiagara.EDebugTypeEnum
enum class FEDebugTypeEnum : uint8 {
	ChaosNiagara_DebugType_NoDebug
	ChaosNiagara_DebugType_ColorBySolver
	ChaosNiagara_DebugType_ColorByParticleIndex
	ChaosNiagara_Max
};

// Enum ChaosNiagara.ERandomVelocityGenerationTypeEnum
enum class FERandomVelocityGenerationTypeEnum : uint8 {
	ChaosNiagara_RandomVelocityGenerationType_RandomDistribution
	ChaosNiagara_RandomVelocityGenerationType_RandomDistributionWithStreamers
	ChaosNiagara_RandomVelocityGenerationType_CollisionNormalBased
	ChaosNiagara_Max
};

// Enum ChaosNiagara.EDataSortTypeEnum
enum class FEDataSortTypeEnum : uint8 {
	ChaosNiagara_DataSortType_NoSorting
	ChaosNiagara_DataSortType_RandomShuffle
	ChaosNiagara_DataSortType_SortByMassMaxToMin
	ChaosNiagara_DataSortType_SortByMassMinToMax
	ChaosNiagara_Max
};

