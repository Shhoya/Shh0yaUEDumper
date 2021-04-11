// Class AndroidPermission.AndroidPermissionCallbackProxy
// Size : 0x48 (Inherited : 0x28)
struct UAndroidPermissionCallbackProxy : UObject {
	struct FMulticastInlineDelegate OnPermissionsGrantedDynamicDelegate; // 0x28(0x10)
	unsigned char UnknownData_38[0x0010]; // 0x38(0x10)
};

// Class AndroidPermission.AndroidPermissionFunctionLibrary
// Size : 0x28 (Inherited : 0x28)
struct UAndroidPermissionFunctionLibrary : UBlueprintFunctionLibrary {

	bool CheckPermission(struct FString permission); // Function AndroidPermission.AndroidPermissionFunctionLibrary.CheckPermission // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF774C5D640
	struct UAndroidPermissionCallbackProxy* AcquirePermissions(struct TArray<struct FString> Permissions); // Function AndroidPermission.AndroidPermissionFunctionLibrary.AcquirePermissions // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x18, 0x7FF774D2CCB0
};

