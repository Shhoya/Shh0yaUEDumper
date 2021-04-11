// Class MagicLeapSecureStorage.MagicLeapSecureStorage
// Size : 0x28 (Inherited : 0x28)
struct UMagicLeapSecureStorage : UBlueprintFunctionLibrary {

	bool PutSecureVector(struct FString Key, struct FVector DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureVector // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x1D, 0x7FF774C5DB80
	bool PutSecureTransform(struct FString Key, struct FTransform DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x41, 0x7FF774C5DE50
	bool PutSecureString(struct FString Key, struct FString DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureString // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x21, 0x7FF774C5E5A0
	bool PutSecureSaveGame(struct FString Key, struct USaveGame* ObjectToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureSaveGame // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x19, 0x7FF774C5E4C0
	bool PutSecureRotator(struct FString Key, struct FRotator DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureRotator // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x1D, 0x7FF774C5DB80
	bool PutSecureInt64(struct FString Key, int64_t DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt64 // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x19, 0x7FF774C5E310
	bool PutSecureInt(struct FString Key, int32_t DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureInt // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x15, 0x7FF774C5E3F0
	bool PutSecureFloat(struct FString Key, float DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureFloat // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x15, 0x7FF774C5E230
	bool PutSecureByte(struct FString Key, enum class None DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureByte // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x12, 0x7FF774C5E150
	bool PutSecureBool(struct FString Key, bool DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureBool // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x12, 0x7FF774C5E070
	bool PutSecureArray(struct FString Key, struct TArray<int32_t> DataToStore); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.PutSecureArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x21, 0x7FF774C5DF80
	bool GetSecureVector(struct FString Key, struct FVector DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureVector // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x1D, 0x7FF774C5DB80
	bool GetSecureTransform(struct FString Key, struct FTransform DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureTransform // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x41, 0x7FF774C5DE50
	bool GetSecureString(struct FString Key, struct FString DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureString // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x21, 0x7FF774C5DD50
	bool GetSecureSaveGame(struct FString Key, struct USaveGame* ObjectToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureSaveGame // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x19, 0x7FF774C5DC60
	bool GetSecureRotator(struct FString Key, struct FRotator DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureRotator // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x1D, 0x7FF774C5DB80
	bool GetSecureInt64(struct FString Key, int64_t DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt64 // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x19, 0x7FF774C5D9B0
	bool GetSecureInt(struct FString Key, int32_t DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureInt // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x15, 0x7FF774C5DAA0
	bool GetSecureFloat(struct FString Key, float DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureFloat // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x15, 0x7FF774C5D8C0
	bool GetSecureByte(struct FString Key, enum class None DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureByte // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x12, 0x7FF774C5D7D0
	bool GetSecureBool(struct FString Key, bool DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureBool // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x12, 0x7FF774C5D7D0
	bool GetSecureArray(struct FString Key, struct TArray<int32_t> DataToRetrieve); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.GetSecureArray // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x21, 0x7FF774C5D6E0
	bool DeleteSecureData(struct FString Key); // Function MagicLeapSecureStorage.MagicLeapSecureStorage.DeleteSecureData // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF774C5D640
};

