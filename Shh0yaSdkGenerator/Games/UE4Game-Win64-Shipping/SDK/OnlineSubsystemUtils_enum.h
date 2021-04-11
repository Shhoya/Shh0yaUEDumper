// Enum OnlineSubsystemUtils.EInAppPurchaseStatus
enum class FEInAppPurchaseStatus : uint8 {
	Invalid
	Failed
	Deferred
	Canceled
	Purchased
	Restored
	EInAppPurchaseStatus_MAX
};

// Enum OnlineSubsystemUtils.EOnlineProxyStoreOfferDiscountType
enum class FEOnlineProxyStoreOfferDiscountType : uint8 {
	NotOnSale
	Percentage
	DiscountAmount
	PayAmount
	EOnlineProxyStoreOfferDiscountType_MAX
};

// Enum OnlineSubsystemUtils.EBeaconConnectionState
enum class FEBeaconConnectionState : uint8 {
	Invalid
	Closed
	Pending
	Open
	EBeaconConnectionState_MAX
};

// Enum OnlineSubsystemUtils.EClientRequestType
enum class FEClientRequestType : uint8 {
	NonePending
	ExistingSessionReservation
	ReservationUpdate
	EmptyServerReservation
	Reconnect
	Abandon
	ReservationRemoveMembers
	EClientRequestType_MAX
};

// Enum OnlineSubsystemUtils.EPartyReservationResult
enum class FEPartyReservationResult : uint8 {
	NoResult
	RequestPending
	GeneralError
	PartyLimitReached
	IncorrectPlayerCount
	RequestTimedOut
	ReservationDuplicate
	ReservationNotFound
	ReservationAccepted
	ReservationDenied
	ReservationDenied_CrossPlayRestriction
	ReservationDenied_Banned
	ReservationRequestCanceled
	ReservationInvalid
	BadSessionId
	ReservationDenied_ContainsExistingPlayers
	EPartyReservationResult_MAX
};

// Enum OnlineSubsystemUtils.ESpectatorClientRequestType
enum class FESpectatorClientRequestType : uint8 {
	NonePending
	ExistingSessionReservation
	ReservationUpdate
	EmptyServerReservation
	Reconnect
	Abandon
	ESpectatorClientRequestType_MAX
};

// Enum OnlineSubsystemUtils.ESpectatorReservationResult
enum class FESpectatorReservationResult : uint8 {
	NoResult
	RequestPending
	GeneralError
	SpectatorLimitReached
	IncorrectPlayerCount
	RequestTimedOut
	ReservationDuplicate
	ReservationNotFound
	ReservationAccepted
	ReservationDenied
	ReservationDenied_CrossPlayRestriction
	ReservationDenied_Banned
	ReservationRequestCanceled
	ReservationInvalid
	BadSessionId
	ReservationDenied_ContainsExistingPlayers
	ESpectatorReservationResult_MAX
};

