// Enum MagicLeapIdentity.EMagicLeapIdentityKey
enum class FEMagicLeapIdentityKey : uint8 {
	GivenName
	FamilyName
	Email
	Bio
	PhoneNumber
	Avatar2D
	Avatar3D
	Unknown
	EMagicLeapIdentityKey_MAX
};

// Enum MagicLeapIdentity.EMagicLeapIdentityError
enum class FEMagicLeapIdentityError : uint8 {
	Ok
	InvalidParam
	AllocFailed
	PrivilegeDenied
	FailedToConnectToLocalService
	FailedToConnectToCloudService
	CloudAuthentication
	InvalidInformationFromCloud
	NotLoggedIn
	ExpiredCredentials
	FailedToGetUserProfile
	Unauthorized
	CertificateError
	RejectedByCloud
	AlreadyLoggedIn
	ModifyIsNotSupported
	NetworkError
	UnspecifiedFailure
	EMagicLeapIdentityError_MAX
};

