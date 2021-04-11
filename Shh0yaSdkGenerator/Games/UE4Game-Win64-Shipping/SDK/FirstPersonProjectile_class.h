// BlueprintGeneratedClass FirstPersonProjectile.FirstPersonProjectile_C
// Size : 0x240 (Inherited : 0x220)
struct AFirstPersonProjectile_C : AActor {
	struct FPointerToUberGraphFrame UberGraphFrame; // 0x220(0x8)
	struct UProjectileMovementComponent* Projectile; // 0x228(0x8)
	struct UStaticMeshComponent* Sphere; // 0x230(0x8)
	struct USphereComponent* CollisionComponent; // 0x238(0x8)

	void ReceiveHit(struct UPrimitiveComponent* MyComp, struct AActor* Other, struct UPrimitiveComponent* OtherComp, bool bSelfMoved, struct FVector HitLocation, struct FVector HitNormal, struct FVector NormalImpulse, struct FHitResult Hit); // Function FirstPersonProjectile.FirstPersonProjectile_C.ReceiveHit // (Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0xC8, 0x7FF77510D9D0
	void ExecuteUbergraph_FirstPersonProjectile(int32_t EntryPoint); // Function FirstPersonProjectile.FirstPersonProjectile_C.ExecuteUbergraph_FirstPersonProjectile // (Final|UbergraphFunction|HasDefaults) // Param Size : 0x4, 0x7FF77510D9D0
};

