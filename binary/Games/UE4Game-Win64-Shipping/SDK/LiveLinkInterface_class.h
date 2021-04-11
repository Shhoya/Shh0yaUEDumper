// Class LiveLinkInterface.LiveLinkSourceFactory
// Size : 0x28 (Inherited : 0x28)
struct ULiveLinkSourceFactory : UObject {
};

// Class LiveLinkInterface.LiveLinkRole
// Size : 0x28 (Inherited : 0x28)
struct ULiveLinkRole : UObject {
};

// Class LiveLinkInterface.LiveLinkBasicRole
// Size : 0x28 (Inherited : 0x28)
struct ULiveLinkBasicRole : ULiveLinkRole {
};

// Class LiveLinkInterface.LiveLinkAnimationRole
// Size : 0x28 (Inherited : 0x28)
struct ULiveLinkAnimationRole : ULiveLinkBasicRole {
};

// Class LiveLinkInterface.LiveLinkTransformRole
// Size : 0x28 (Inherited : 0x28)
struct ULiveLinkTransformRole : ULiveLinkBasicRole {
};

// Class LiveLinkInterface.LiveLinkCameraRole
// Size : 0x28 (Inherited : 0x28)
struct ULiveLinkCameraRole : ULiveLinkTransformRole {
};

// Class LiveLinkInterface.LiveLinkController
// Size : 0x28 (Inherited : 0x28)
struct ULiveLinkController : UObject {
};

// Class LiveLinkInterface.LiveLinkSourceSettings
// Size : 0x98 (Inherited : 0x28)
struct ULiveLinkSourceSettings : UObject {
	enum class ELiveLinkSourceMode Mode; // 0x28(0x1)
	unsigned char UnknownData_29[0x0007]; // 0x29(0x7)
	struct FLiveLinkSourceBufferManagementSettings BufferSettings; // 0x30(0x50)
	struct FString ConnectionString; // 0x80(0x10)
	class ULiveLinkSourceFactory* Factory; // 0x90(0x8)
};

// Class LiveLinkInterface.LiveLinkCurveRemapSettings
// Size : 0xE8 (Inherited : 0x98)
struct ULiveLinkCurveRemapSettings : ULiveLinkSourceSettings {
	struct FLiveLinkCurveConversionSettings CurveConversionSettings; // 0x98(0x50)
};

// Class LiveLinkInterface.LiveLinkFrameInterpolationProcessor
// Size : 0x28 (Inherited : 0x28)
struct ULiveLinkFrameInterpolationProcessor : UObject {
};

// Class LiveLinkInterface.LiveLinkFramePreProcessor
// Size : 0x28 (Inherited : 0x28)
struct ULiveLinkFramePreProcessor : UObject {
};

// Class LiveLinkInterface.LiveLinkFrameTranslator
// Size : 0x28 (Inherited : 0x28)
struct ULiveLinkFrameTranslator : UObject {
};

// Class LiveLinkInterface.LiveLinkLightRole
// Size : 0x28 (Inherited : 0x28)
struct ULiveLinkLightRole : ULiveLinkTransformRole {
};

// Class LiveLinkInterface.LiveLinkSubjectSettings
// Size : 0x58 (Inherited : 0x28)
struct ULiveLinkSubjectSettings : UObject {
	struct TArray<struct ULiveLinkFramePreProcessor*> PreProcessors; // 0x28(0x10)
	struct ULiveLinkFrameInterpolationProcessor* InterpolationProcessor; // 0x38(0x8)
	struct TArray<struct ULiveLinkFrameTranslator*> Translators; // 0x40(0x10)
	class ULiveLinkRole* Role; // 0x50(0x8)
};

// Class LiveLinkInterface.LiveLinkVirtualSubject
// Size : 0xD8 (Inherited : 0x28)
struct ULiveLinkVirtualSubject : UObject {
	unsigned char UnknownData_28[0x0008]; // 0x28(0x8)
	class ULiveLinkRole* Role; // 0x30(0x8)
	struct TArray<struct FLiveLinkSubjectName> Subjects; // 0x38(0x10)
	struct TArray<struct ULiveLinkFrameTranslator*> FrameTranslators; // 0x48(0x10)
	unsigned char UnknownData_58[0x0080]; // 0x58(0x80)
};

