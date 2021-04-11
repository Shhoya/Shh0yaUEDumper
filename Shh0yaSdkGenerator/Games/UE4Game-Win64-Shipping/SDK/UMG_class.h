// Class UMG.Visual
// Size : 0x28 (Inherited : 0x28)
struct UVisual : UObject {
};

// Class UMG.Widget
// Size : 0x108 (Inherited : 0x28)
struct UWidget : UVisual {
	struct UPanelSlot* Slot; // 0x28(0x8)
	struct FDelegate bIsEnabledDelegate; // 0x30(0x10)
	struct FText ToolTipText; // 0x40(0x18)
	struct FDelegate ToolTipTextDelegate; // 0x58(0x10)
	struct UWidget* ToolTipWidget; // 0x68(0x8)
	struct FDelegate ToolTipWidgetDelegate; // 0x70(0x10)
	struct FDelegate VisibilityDelegate; // 0x80(0x10)
	struct FWidgetTransform RenderTransform; // 0x90(0x1C)
	struct FVector2D RenderTransformPivot; // 0xAC(0x8)
	unsigned char bIsVariable : 1; // 0xB4(0x1)
	unsigned char bCreatedByConstructionScript : 1; // 0xB4(0x1)
	unsigned char bIsEnabled : 1; // 0xB4(0x1)
	unsigned char bOverride_Cursor : 1; // 0xB4(0x1)
	unsigned char UnknownData_B4_4 : 4; // 0xB4(0x1)
	unsigned char UnknownData_B5[0x0003]; // 0xB5(0x3)
	struct USlateAccessibleWidgetData* AccessibleWidgetData; // 0xB8(0x8)
	unsigned char bIsVolatile : 1; // 0xC0(0x1)
	unsigned char UnknownData_C0_1 : 7; // 0xC0(0x1)
	enum class EMouseCursor Cursor; // 0xC1(0x1)
	enum class EWidgetClipping Clipping; // 0xC2(0x1)
	enum class ESlateVisibility Visibility; // 0xC3(0x1)
	float RenderOpacity; // 0xC4(0x4)
	struct UWidgetNavigation* Navigation; // 0xC8(0x8)
	enum class EFlowDirectionPreference FlowDirectionPreference; // 0xD0(0x1)
	unsigned char UnknownData_D1[0x0027]; // 0xD1(0x27)
	struct TArray<struct UPropertyBinding*> NativeBindings; // 0xF8(0x10)

	void SetVisibility(enum class ESlateVisibility InVisibility); // Function UMG.Widget.SetVisibility // (Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FD72E0
	void SetUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.SetUserFocus // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FD70C0
	void SetToolTipText(struct FText InToolTipText); // Function UMG.Widget.SetToolTipText // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x18, 0x7FF775FD6FF0
	void SetToolTip(struct UWidget* Widget); // Function UMG.Widget.SetToolTip // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FD6F70
	void SetRenderTranslation(struct FVector2D Translation); // Function UMG.Widget.SetRenderTranslation // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x8, 0x7FF775FD6E60
	void SetRenderTransformPivot(struct FVector2D Pivot); // Function UMG.Widget.SetRenderTransformPivot // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x8, 0x7FF775FD6DE0
	void SetRenderTransformAngle(float Angle); // Function UMG.Widget.SetRenderTransformAngle // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FD6D60
	void SetRenderTransform(struct FWidgetTransform InTransform); // Function UMG.Widget.SetRenderTransform // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1C, 0x7FF775FD6C80
	void SetRenderShear(struct FVector2D Shear); // Function UMG.Widget.SetRenderShear // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x8, 0x7FF775FD6C00
	void SetRenderScale(struct FVector2D Scale); // Function UMG.Widget.SetRenderScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x8, 0x7FF775FD6B80
	void SetRenderOpacity(float InOpacity); // Function UMG.Widget.SetRenderOpacity // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FD6B00
	void SetNavigationRuleExplicit(enum class EUINavigation Direction, struct UWidget* InWidget); // Function UMG.Widget.SetNavigationRuleExplicit // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FD69B0
	void SetNavigationRuleCustomBoundary(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustomBoundary // (Final|Native|Public|BlueprintCallable) // Param Size : 0x14, 0x7FF775FD68D0
	void SetNavigationRuleCustom(enum class EUINavigation Direction, struct FDelegate InCustomDelegate); // Function UMG.Widget.SetNavigationRuleCustom // (Final|Native|Public|BlueprintCallable) // Param Size : 0x14, 0x7FF775FD67F0
	void SetNavigationRuleBase(enum class EUINavigation Direction, enum class EUINavigationRule Rule); // Function UMG.Widget.SetNavigationRuleBase // (Final|Native|Public|BlueprintCallable) // Param Size : 0x2, 0x7FF775FD6730
	void SetNavigationRule(enum class EUINavigation Direction, enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetNavigationRule // (Final|Native|Public|BlueprintCallable) // Param Size : 0xC, 0x7FF775FD6620
	void SetKeyboardFocus(); // Function UMG.Widget.SetKeyboardFocus // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FD6600
	void SetIsEnabled(bool bInIsEnabled); // Function UMG.Widget.SetIsEnabled // (Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FD6570
	void SetFocus(); // Function UMG.Widget.SetFocus // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FD64D0
	void SetCursor(enum class EMouseCursor InCursor); // Function UMG.Widget.SetCursor // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FD6450
	void SetClipping(enum class EWidgetClipping InClipping); // Function UMG.Widget.SetClipping // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FD63D0
	void SetAllNavigationRules(enum class EUINavigationRule Rule, struct FName WidgetToFocus); // Function UMG.Widget.SetAllNavigationRules // (Final|Native|Public|BlueprintCallable) // Param Size : 0xC, 0x7FF775FD6310
	void ResetCursor(); // Function UMG.Widget.ResetCursor // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FD62F0
	void RemoveFromParent(); // Function UMG.Widget.RemoveFromParent // (Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FD62D0
	struct FEventReply OnReply__DelegateSignature(); // DelegateFunction UMG.Widget.OnReply__DelegateSignature // (Public|Delegate) // Param Size : 0xB8, 0x7FF77510D9D0
	struct FEventReply OnPointerEvent__DelegateSignature(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // DelegateFunction UMG.Widget.OnPointerEvent__DelegateSignature // (Public|Delegate|HasOutParms) // Param Size : 0x160, 0x7FF77510D9D0
	bool IsVisible(); // Function UMG.Widget.IsVisible // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FD62A0
	bool IsHovered(); // Function UMG.Widget.IsHovered // (Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775B897D0
	void InvalidateLayoutAndVolatility(); // Function UMG.Widget.InvalidateLayoutAndVolatility // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FD6280
	bool HasUserFocusedDescendants(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocusedDescendants // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x9, 0x7FF775FD61F0
	bool HasUserFocus(struct APlayerController* PlayerController); // Function UMG.Widget.HasUserFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x9, 0x7FF775FD6160
	bool HasMouseCaptureByUser(int32_t UserIndex, int32_t PointerIndex); // Function UMG.Widget.HasMouseCaptureByUser // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x9, 0x7FF775FD60A0
	bool HasMouseCapture(); // Function UMG.Widget.HasMouseCapture // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FD6070
	bool HasKeyboardFocus(); // Function UMG.Widget.HasKeyboardFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FD6040
	bool HasFocusedDescendants(); // Function UMG.Widget.HasFocusedDescendants // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FD6010
	bool HasAnyUserFocus(); // Function UMG.Widget.HasAnyUserFocus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FD5FE0
	struct UWidget* GetWidget__DelegateSignature(); // DelegateFunction UMG.Widget.GetWidget__DelegateSignature // (Public|Delegate) // Param Size : 0x8, 0x7FF77510D9D0
	enum class ESlateVisibility GetVisibility(); // Function UMG.Widget.GetVisibility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FD5FB0
	struct FGeometry GetTickSpaceGeometry(); // Function UMG.Widget.GetTickSpaceGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x38, 0x7FF775FD5E90
	struct FText GetText__DelegateSignature(); // DelegateFunction UMG.Widget.GetText__DelegateSignature // (Public|Delegate) // Param Size : 0x18, 0x7FF77510D9D0
	enum class ESlateVisibility GetSlateVisibility__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateVisibility__DelegateSignature // (Public|Delegate) // Param Size : 0x1, 0x7FF77510D9D0
	struct FSlateColor GetSlateColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateColor__DelegateSignature // (Public|Delegate) // Param Size : 0x28, 0x7FF77510D9D0
	struct FSlateBrush GetSlateBrush__DelegateSignature(); // DelegateFunction UMG.Widget.GetSlateBrush__DelegateSignature // (Public|Delegate) // Param Size : 0x88, 0x7FF77510D9D0
	float GetRenderTransformAngle(); // Function UMG.Widget.GetRenderTransformAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FD5E30
	float GetRenderOpacity(); // Function UMG.Widget.GetRenderOpacity // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FD5E00
	struct UPanelWidget* GetParent(); // Function UMG.Widget.GetParent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FD5DD0
	struct FGeometry GetPaintSpaceGeometry(); // Function UMG.Widget.GetPaintSpaceGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x38, 0x7FF775FD5D90
	struct APlayerController* GetOwningPlayer(); // Function UMG.Widget.GetOwningPlayer // (BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FD5D60
	struct ULocalPlayer* GetOwningLocalPlayer(); // Function UMG.Widget.GetOwningLocalPlayer // (BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FD5D30
	enum class EMouseCursor GetMouseCursor__DelegateSignature(); // DelegateFunction UMG.Widget.GetMouseCursor__DelegateSignature // (Public|Delegate) // Param Size : 0x1, 0x7FF77510D9D0
	struct FLinearColor GetLinearColor__DelegateSignature(); // DelegateFunction UMG.Widget.GetLinearColor__DelegateSignature // (Public|Delegate|HasDefaults) // Param Size : 0x10, 0x7FF77510D9D0
	bool GetIsEnabled(); // Function UMG.Widget.GetIsEnabled // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FD5D00
	int32_t GetInt32__DelegateSignature(); // DelegateFunction UMG.Widget.GetInt32__DelegateSignature // (Public|Delegate) // Param Size : 0x4, 0x7FF77510D9D0
	struct UGameInstance* GetGameInstance(); // Function UMG.Widget.GetGameInstance // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FD5CD0
	float GetFloat__DelegateSignature(); // DelegateFunction UMG.Widget.GetFloat__DelegateSignature // (Public|Delegate) // Param Size : 0x4, 0x7FF77510D9D0
	struct FVector2D GetDesiredSize(); // Function UMG.Widget.GetDesiredSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FD5C60
	enum class EWidgetClipping GetClipping(); // Function UMG.Widget.GetClipping // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FD5C30
	enum class ECheckBoxState GetCheckBoxState__DelegateSignature(); // DelegateFunction UMG.Widget.GetCheckBoxState__DelegateSignature // (Public|Delegate) // Param Size : 0x1, 0x7FF77510D9D0
	struct FGeometry GetCachedGeometry(); // Function UMG.Widget.GetCachedGeometry // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x38, 0x7FF775FD5BF0
	bool GetBool__DelegateSignature(); // DelegateFunction UMG.Widget.GetBool__DelegateSignature // (Public|Delegate) // Param Size : 0x1, 0x7FF77510D9D0
	struct UWidget* GenerateWidgetForString__DelegateSignature(struct FString Item); // DelegateFunction UMG.Widget.GenerateWidgetForString__DelegateSignature // (Public|Delegate) // Param Size : 0x18, 0x7FF77510D9D0
	struct UWidget* GenerateWidgetForObject__DelegateSignature(struct UObject* Item); // DelegateFunction UMG.Widget.GenerateWidgetForObject__DelegateSignature // (Public|Delegate) // Param Size : 0x10, 0x7FF77510D9D0
	void ForceVolatile(bool bForce); // Function UMG.Widget.ForceVolatile // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FD5B60
	void ForceLayoutPrepass(); // Function UMG.Widget.ForceLayoutPrepass // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FD5B40
};

// Class UMG.AsyncTaskDownloadImage
// Size : 0x50 (Inherited : 0x30)
struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase {
	struct FMulticastInlineDelegate OnSuccess; // 0x30(0x10)
	struct FMulticastInlineDelegate OnFail; // 0x40(0x10)

	struct UAsyncTaskDownloadImage* DownloadImage(struct FString URL); // Function UMG.AsyncTaskDownloadImage.DownloadImage // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FB5B10
};

// Class UMG.PanelWidget
// Size : 0x120 (Inherited : 0x108)
struct UPanelWidget : UWidget {
	struct TArray<struct UPanelSlot*> Slots; // 0x108(0x10)
	unsigned char UnknownData_118[0x0008]; // 0x118(0x8)

	bool RemoveChildAt(int32_t Index); // Function UMG.PanelWidget.RemoveChildAt // (Final|Native|Public|BlueprintCallable) // Param Size : 0x5, 0x7FF775FC4130
	bool RemoveChild(struct UWidget* Content); // Function UMG.PanelWidget.RemoveChild // (Final|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF775FC40A0
	bool HasChild(struct UWidget* Content); // Function UMG.PanelWidget.HasChild // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x9, 0x7FF775FC4010
	bool HasAnyChildren(); // Function UMG.PanelWidget.HasAnyChildren // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FC3FE0
	int32_t GetChildrenCount(); // Function UMG.PanelWidget.GetChildrenCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FC3BA0
	int32_t GetChildIndex(struct UWidget* Content); // Function UMG.PanelWidget.GetChildIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0xC, 0x7FF775FC3B10
	struct UWidget* GetChildAt(int32_t Index); // Function UMG.PanelWidget.GetChildAt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF775FC3A80
	struct TArray<struct UWidget*> GetAllChildren(); // Function UMG.PanelWidget.GetAllChildren // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF775FC3A00
	void ClearChildren(); // Function UMG.PanelWidget.ClearChildren // (Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FC39E0
	struct UPanelSlot* AddChild(struct UWidget* Content); // Function UMG.PanelWidget.AddChild // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FC38A0
};

// Class UMG.ContentWidget
// Size : 0x120 (Inherited : 0x120)
struct UContentWidget : UPanelWidget {

	struct UPanelSlot* SetContent(struct UWidget* Content); // Function UMG.ContentWidget.SetContent // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FBACC0
	struct UPanelSlot* GetContentSlot(); // Function UMG.ContentWidget.GetContentSlot // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FBA500
	struct UWidget* GetContent(); // Function UMG.ContentWidget.GetContent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FBA4D0
};

// Class UMG.BackgroundBlur
// Size : 0x1D8 (Inherited : 0x120)
struct UBackgroundBlur : UContentWidget {
	struct FMargin Padding; // 0x120(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x130(0x1)
	enum class EVerticalAlignment VerticalAlignment; // 0x131(0x1)
	bool bApplyAlphaToBlur; // 0x132(0x1)
	unsigned char UnknownData_133[0x0001]; // 0x133(0x1)
	float BlurStrength; // 0x134(0x4)
	bool bOverrideAutoRadiusCalculation; // 0x138(0x1)
	unsigned char UnknownData_139[0x0003]; // 0x139(0x3)
	int32_t BlurRadius; // 0x13C(0x4)
	struct FSlateBrush LowQualityFallbackBrush; // 0x140(0x88)
	unsigned char UnknownData_1C8[0x0010]; // 0x1C8(0x10)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlur.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FB7890
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlur.SetPadding // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FB71E0
	void SetLowQualityFallbackBrush(struct FSlateBrush InBrush); // Function UMG.BackgroundBlur.SetLowQualityFallbackBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x88, 0x7FF775FB6E50
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BackgroundBlur.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FB6AA0
	void SetBlurStrength(float InStrength); // Function UMG.BackgroundBlur.SetBlurStrength // (Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FB64A0
	void SetBlurRadius(int32_t InBlurRadius); // Function UMG.BackgroundBlur.SetBlurRadius // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FB6420
	void SetApplyAlphaToBlur(bool bInApplyAlphaToBlur); // Function UMG.BackgroundBlur.SetApplyAlphaToBlur // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FB6280
};

// Class UMG.PanelSlot
// Size : 0x38 (Inherited : 0x28)
struct UPanelSlot : UVisual {
	struct UPanelWidget* Parent; // 0x28(0x8)
	struct UWidget* Content; // 0x30(0x8)
};

// Class UMG.BackgroundBlurSlot
// Size : 0x60 (Inherited : 0x38)
struct UBackgroundBlurSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x1)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x1)
	unsigned char UnknownData_4A[0x0016]; // 0x4A(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BackgroundBlurSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FB7910
	void SetPadding(struct FMargin InPadding); // Function UMG.BackgroundBlurSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FB7270
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BackgroundBlurSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FB6B20
};

// Class UMG.PropertyBinding
// Size : 0x60 (Inherited : 0x28)
struct UPropertyBinding : UObject {
	struct FWeakObjectPtr<struct UObject> SourceObject; // 0x28(0x8)
	struct FDynamicPropertyPath SourcePath; // 0x30(0x28)
	struct FName DestinationProperty; // 0x58(0x8)
};

// Class UMG.BoolBinding
// Size : 0x60 (Inherited : 0x60)
struct UBoolBinding : UPropertyBinding {

	bool GetValue(); // Function UMG.BoolBinding.GetValue // (Final|Native|Public|Const) // Param Size : 0x1, 0x7FF775FB5EC0
};

// Class UMG.Border
// Size : 0x270 (Inherited : 0x120)
struct UBorder : UContentWidget {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x120(0x1)
	enum class EVerticalAlignment VerticalAlignment; // 0x121(0x1)
	unsigned char bShowEffectWhenDisabled : 1; // 0x122(0x1)
	unsigned char UnknownData_122_1 : 7; // 0x122(0x1)
	unsigned char UnknownData_123[0x0001]; // 0x123(0x1)
	struct FLinearColor ContentColorAndOpacity; // 0x124(0x10)
	struct FDelegate ContentColorAndOpacityDelegate; // 0x134(0x10)
	struct FMargin Padding; // 0x144(0x10)
	unsigned char UnknownData_154[0x0004]; // 0x154(0x4)
	struct FSlateBrush Background; // 0x158(0x88)
	struct FDelegate BackgroundDelegate; // 0x1E0(0x10)
	struct FLinearColor BrushColor; // 0x1F0(0x10)
	struct FDelegate BrushColorDelegate; // 0x200(0x10)
	struct FVector2D DesiredSizeScale; // 0x210(0x8)
	bool bFlipForRightToLeftFlowDirection; // 0x218(0x1)
	unsigned char UnknownData_219[0x0003]; // 0x219(0x3)
	struct FDelegate OnMouseButtonDownEvent; // 0x21C(0x10)
	struct FDelegate OnMouseButtonUpEvent; // 0x22C(0x10)
	struct FDelegate OnMouseMoveEvent; // 0x23C(0x10)
	struct FDelegate OnMouseDoubleClickEvent; // 0x24C(0x10)
	unsigned char UnknownData_25C[0x0014]; // 0x25C(0x14)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.Border.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FB7990
	void SetPadding(struct FMargin InPadding); // Function UMG.Border.SetPadding // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FB7300
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.Border.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FB6BA0
	void SetDesiredSizeScale(struct FVector2D InScale); // Function UMG.Border.SetDesiredSizeScale // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x8, 0x7FF775FB6A20
	void SetContentColorAndOpacity(struct FLinearColor InContentColorAndOpacity); // Function UMG.Border.SetContentColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF775FB69A0
	void SetBrushFromTexture(struct UTexture2D* Texture); // Function UMG.Border.SetBrushFromTexture // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FB67A0
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Border.SetBrushFromMaterial // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FB67A0
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Border.SetBrushFromAsset // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FB6720
	void SetBrushColor(struct FLinearColor InBrushColor); // Function UMG.Border.SetBrushColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF775FB66A0
	void SetBrush(struct FSlateBrush InBrush); // Function UMG.Border.SetBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x88, 0x7FF775FB6520
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Border.GetDynamicMaterial // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FB5CD0
};

// Class UMG.BorderSlot
// Size : 0x60 (Inherited : 0x38)
struct UBorderSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x1)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x1)
	unsigned char UnknownData_4A[0x0016]; // 0x4A(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.BorderSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FB7A10
	void SetPadding(struct FMargin InPadding); // Function UMG.BorderSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FB7390
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.BorderSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FB6C20
};

// Class UMG.BrushBinding
// Size : 0x68 (Inherited : 0x60)
struct UBrushBinding : UPropertyBinding {
	unsigned char UnknownData_60[0x0008]; // 0x60(0x8)

	struct FSlateBrush GetValue(); // Function UMG.BrushBinding.GetValue // (Final|Native|Public|Const) // Param Size : 0x88, 0x7FF775FB5EF0
};

// Class UMG.Button
// Size : 0x428 (Inherited : 0x120)
struct UButton : UContentWidget {
	struct USlateWidgetStyleAsset* Style; // 0x120(0x8)
	struct FButtonStyle WidgetStyle; // 0x128(0x278)
	struct FLinearColor ColorAndOpacity; // 0x3A0(0x10)
	struct FLinearColor BackgroundColor; // 0x3B0(0x10)
	enum class EButtonClickMethod ClickMethod; // 0x3C0(0x1)
	enum class EButtonTouchMethod TouchMethod; // 0x3C1(0x1)
	enum class EButtonPressMethod PressMethod; // 0x3C2(0x1)
	bool IsFocusable; // 0x3C3(0x1)
	unsigned char UnknownData_3C4[0x0004]; // 0x3C4(0x4)
	struct FMulticastInlineDelegate OnClicked; // 0x3C8(0x10)
	struct FMulticastInlineDelegate OnPressed; // 0x3D8(0x10)
	struct FMulticastInlineDelegate OnReleased; // 0x3E8(0x10)
	struct FMulticastInlineDelegate OnHovered; // 0x3F8(0x10)
	struct FMulticastInlineDelegate OnUnhovered; // 0x408(0x10)
	unsigned char UnknownData_418[0x0010]; // 0x418(0x10)

	void SetTouchMethod(enum class EButtonTouchMethod InTouchMethod); // Function UMG.Button.SetTouchMethod // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FB7810
	void SetStyle(struct FButtonStyle InStyle); // Function UMG.Button.SetStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x278, 0x7FF775FB7730
	void SetPressMethod(enum class EButtonPressMethod InPressMethod); // Function UMG.Button.SetPressMethod // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FB75B0
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Button.SetColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF775FB6920
	void SetClickMethod(enum class EButtonClickMethod InClickMethod); // Function UMG.Button.SetClickMethod // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FB68A0
	void SetBackgroundColor(struct FLinearColor InBackgroundColor); // Function UMG.Button.SetBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF775FB63A0
	bool IsPressed(); // Function UMG.Button.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FB6110
};

// Class UMG.ButtonSlot
// Size : 0x60 (Inherited : 0x38)
struct UButtonSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x1)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x1)
	unsigned char UnknownData_4A[0x0016]; // 0x4A(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ButtonSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FB7A90
	void SetPadding(struct FMargin InPadding); // Function UMG.ButtonSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FB7420
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ButtonSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FB6CA0
};

// Class UMG.CanvasPanel
// Size : 0x130 (Inherited : 0x120)
struct UCanvasPanel : UPanelWidget {
	unsigned char UnknownData_120[0x0010]; // 0x120(0x10)

	struct UCanvasPanelSlot* AddChildToCanvas(struct UWidget* Content); // Function UMG.CanvasPanel.AddChildToCanvas // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FB5A80
};

// Class UMG.CanvasPanelSlot
// Size : 0x70 (Inherited : 0x38)
struct UCanvasPanelSlot : UPanelSlot {
	struct FAnchorData LayoutData; // 0x38(0x28)
	bool bAutoSize; // 0x60(0x1)
	unsigned char UnknownData_61[0x0003]; // 0x61(0x3)
	int32_t ZOrder; // 0x64(0x4)
	unsigned char UnknownData_68[0x0008]; // 0x68(0x8)

	void SetZOrder(int32_t InZOrder); // Function UMG.CanvasPanelSlot.SetZOrder // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FB7B10
	void SetSize(struct FVector2D InSize); // Function UMG.CanvasPanelSlot.SetSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x8, 0x7FF775FB76B0
	void SetPosition(struct FVector2D InPosition); // Function UMG.CanvasPanelSlot.SetPosition // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x8, 0x7FF775FB7530
	void SetOffsets(struct FMargin InOffset); // Function UMG.CanvasPanelSlot.SetOffsets // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FB7150
	void SetMinimum(struct FVector2D InMinimumAnchors); // Function UMG.CanvasPanelSlot.SetMinimum // (Final|Native|Public|HasDefaults) // Param Size : 0x8, 0x7FF775FB7050
	void SetMaximum(struct FVector2D InMaximumAnchors); // Function UMG.CanvasPanelSlot.SetMaximum // (Final|Native|Public|HasDefaults) // Param Size : 0x8, 0x7FF775FB6FD0
	void SetLayout(struct FAnchorData InLayoutData); // Function UMG.CanvasPanelSlot.SetLayout // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x28, 0x7FF775FB6DB0
	void SetAutoSize(bool InbAutoSize); // Function UMG.CanvasPanelSlot.SetAutoSize // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FB6310
	void SetAnchors(struct FAnchors InAnchors); // Function UMG.CanvasPanelSlot.SetAnchors // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FB61F0
	void SetAlignment(struct FVector2D InAlignment); // Function UMG.CanvasPanelSlot.SetAlignment // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x8, 0x7FF775FB6170
	int32_t GetZOrder(); // Function UMG.CanvasPanelSlot.GetZOrder // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FB60B0
	struct FVector2D GetSize(); // Function UMG.CanvasPanelSlot.GetSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FB5E10
	struct FVector2D GetPosition(); // Function UMG.CanvasPanelSlot.GetPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FB5DD0
	struct FMargin GetOffsets(); // Function UMG.CanvasPanelSlot.GetOffsets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF775FB5D90
	struct FAnchorData GetLayout(); // Function UMG.CanvasPanelSlot.GetLayout // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x28, 0x7FF775FB5D00
	bool GetAutoSize(); // Function UMG.CanvasPanelSlot.GetAutoSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FB5C70
	struct FAnchors GetAnchors(); // Function UMG.CanvasPanelSlot.GetAnchors // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF775FB5C30
	struct FVector2D GetAlignment(); // Function UMG.CanvasPanelSlot.GetAlignment // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FB5BF0
};

// Class UMG.CheckBox
// Size : 0x770 (Inherited : 0x120)
struct UCheckBox : UContentWidget {
	enum class ECheckBoxState CheckedState; // 0x120(0x1)
	unsigned char UnknownData_121[0x0003]; // 0x121(0x3)
	struct FDelegate CheckedStateDelegate; // 0x124(0x10)
	unsigned char UnknownData_134[0x0004]; // 0x134(0x4)
	struct FCheckBoxStyle WidgetStyle; // 0x138(0x580)
	struct USlateWidgetStyleAsset* Style; // 0x6B8(0x8)
	struct USlateBrushAsset* UncheckedImage; // 0x6C0(0x8)
	struct USlateBrushAsset* UncheckedHoveredImage; // 0x6C8(0x8)
	struct USlateBrushAsset* UncheckedPressedImage; // 0x6D0(0x8)
	struct USlateBrushAsset* CheckedImage; // 0x6D8(0x8)
	struct USlateBrushAsset* CheckedHoveredImage; // 0x6E0(0x8)
	struct USlateBrushAsset* CheckedPressedImage; // 0x6E8(0x8)
	struct USlateBrushAsset* UndeterminedImage; // 0x6F0(0x8)
	struct USlateBrushAsset* UndeterminedHoveredImage; // 0x6F8(0x8)
	struct USlateBrushAsset* UndeterminedPressedImage; // 0x700(0x8)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x708(0x1)
	unsigned char UnknownData_709[0x0003]; // 0x709(0x3)
	struct FMargin Padding; // 0x70C(0x10)
	unsigned char UnknownData_71C[0x0004]; // 0x71C(0x4)
	struct FSlateColor BorderBackgroundColor; // 0x720(0x28)
	bool IsFocusable; // 0x748(0x1)
	unsigned char UnknownData_749[0x0007]; // 0x749(0x7)
	struct FMulticastInlineDelegate OnCheckStateChanged; // 0x750(0x10)
	unsigned char UnknownData_760[0x0010]; // 0x760(0x10)

	void SetIsChecked(bool InIsChecked); // Function UMG.CheckBox.SetIsChecked // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FB6D20
	void SetCheckedState(enum class ECheckBoxState InCheckedState); // Function UMG.CheckBox.SetCheckedState // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FB6820
	bool IsPressed(); // Function UMG.CheckBox.IsPressed // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FB6140
	bool IsChecked(); // Function UMG.CheckBox.IsChecked // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FB60E0
	enum class ECheckBoxState GetCheckedState(); // Function UMG.CheckBox.GetCheckedState // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FB5CA0
};

// Class UMG.CheckedStateBinding
// Size : 0x68 (Inherited : 0x60)
struct UCheckedStateBinding : UPropertyBinding {
	unsigned char UnknownData_60[0x0008]; // 0x60(0x8)

	enum class ECheckBoxState GetValue(); // Function UMG.CheckedStateBinding.GetValue // (Final|Native|Public|Const) // Param Size : 0x1, 0x7FF775FB6080
};

// Class UMG.CircularThrobber
// Size : 0x1C0 (Inherited : 0x108)
struct UCircularThrobber : UWidget {
	int32_t NumberOfPieces; // 0x108(0x4)
	float Period; // 0x10C(0x4)
	float Radius; // 0x110(0x4)
	unsigned char UnknownData_114[0x0004]; // 0x114(0x4)
	struct USlateBrushAsset* PieceImage; // 0x118(0x8)
	struct FSlateBrush Image; // 0x120(0x88)
	bool bEnableRadius; // 0x1A8(0x1)
	unsigned char UnknownData_1A9[0x0017]; // 0x1A9(0x17)

	void SetRadius(float InRadius); // Function UMG.CircularThrobber.SetRadius // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FB7630
	void SetPeriod(float InPeriod); // Function UMG.CircularThrobber.SetPeriod // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FB74B0
	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.CircularThrobber.SetNumberOfPieces // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FB70D0
};

// Class UMG.ColorBinding
// Size : 0x68 (Inherited : 0x60)
struct UColorBinding : UPropertyBinding {
	unsigned char UnknownData_60[0x0008]; // 0x60(0x8)

	struct FSlateColor GetSlateValue(); // Function UMG.ColorBinding.GetSlateValue // (Final|Native|Public|Const) // Param Size : 0x28, 0x7FF775FB5E50
	struct FLinearColor GetLinearValue(); // Function UMG.ColorBinding.GetLinearValue // (Final|Native|Public|HasDefaults|Const) // Param Size : 0x10, 0x7FF775FB5D50
};

// Class UMG.ComboBox
// Size : 0x140 (Inherited : 0x108)
struct UComboBox : UWidget {
	struct TArray<struct UObject*> Items; // 0x108(0x10)
	struct FDelegate OnGenerateWidgetEvent; // 0x118(0x10)
	bool bIsFocusable; // 0x128(0x1)
	unsigned char UnknownData_129[0x0017]; // 0x129(0x17)
};

// Class UMG.ComboBoxString
// Size : 0xDF8 (Inherited : 0x108)
struct UComboBoxString : UWidget {
	struct TArray<struct FString> DefaultOptions; // 0x108(0x10)
	struct FString SelectedOption; // 0x118(0x10)
	struct FComboBoxStyle WidgetStyle; // 0x128(0x3F0)
	struct FTableRowStyle ItemStyle; // 0x518(0x7C8)
	struct FMargin ContentPadding; // 0xCE0(0x10)
	float MaxListHeight; // 0xCF0(0x4)
	bool HasDownArrow; // 0xCF4(0x1)
	bool EnableGamepadNavigationMode; // 0xCF5(0x1)
	unsigned char UnknownData_CF6[0x0002]; // 0xCF6(0x2)
	struct FSlateFontInfo Font; // 0xCF8(0x50)
	struct FSlateColor ForegroundColor; // 0xD48(0x28)
	bool bIsFocusable; // 0xD70(0x1)
	unsigned char UnknownData_D71[0x0003]; // 0xD71(0x3)
	struct FDelegate OnGenerateWidgetEvent; // 0xD74(0x10)
	unsigned char UnknownData_D84[0x0004]; // 0xD84(0x4)
	struct FMulticastInlineDelegate OnSelectionChanged; // 0xD88(0x10)
	struct FMulticastInlineDelegate OnOpening; // 0xD98(0x10)
	unsigned char UnknownData_DA8[0x0050]; // 0xDA8(0x50)

	void SetSelectedOption(struct FString Option); // Function UMG.ComboBoxString.SetSelectedOption // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FBB940
	void SetSelectedIndex(int32_t Index); // Function UMG.ComboBoxString.SetSelectedIndex // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FBB8C0
	bool RemoveOption(struct FString Option); // Function UMG.ComboBoxString.RemoveOption // (Final|Native|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF775FBA9B0
	void RefreshOptions(); // Function UMG.ComboBoxString.RefreshOptions // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FBA910
	void OnSelectionChangedEvent__DelegateSignature(struct FString SelectedItem, enum class ESelectInfo SelectionType); // DelegateFunction UMG.ComboBoxString.OnSelectionChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // Param Size : 0x11, 0x7FF77510D9D0
	void OnOpeningEvent__DelegateSignature(); // DelegateFunction UMG.ComboBoxString.OnOpeningEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // Param Size : 0x0, 0x7FF77510D9D0
	bool IsOpen(); // Function UMG.ComboBoxString.IsOpen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FBA8E0
	struct FString GetSelectedOption(); // Function UMG.ComboBoxString.GetSelectedOption // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF775FBA6C0
	int32_t GetSelectedIndex(); // Function UMG.ComboBoxString.GetSelectedIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FBA690
	int32_t GetOptionCount(); // Function UMG.ComboBoxString.GetOptionCount // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FBA660
	struct FString GetOptionAtIndex(int32_t Index); // Function UMG.ComboBoxString.GetOptionAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF775FBA590
	int32_t FindOptionIndex(struct FString Option); // Function UMG.ComboBoxString.FindOptionIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x14, 0x7FF775FBA390
	void ClearSelection(); // Function UMG.ComboBoxString.ClearSelection // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FB9FE0
	void ClearOptions(); // Function UMG.ComboBoxString.ClearOptions // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FB9FC0
	void AddOption(struct FString Option); // Function UMG.ComboBoxString.AddOption // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FB9E40
};

// Class UMG.DragDropOperation
// Size : 0x88 (Inherited : 0x28)
struct UDragDropOperation : UObject {
	struct FString Tag; // 0x28(0x10)
	struct UObject* Payload; // 0x38(0x8)
	struct UWidget* DefaultDragVisual; // 0x40(0x8)
	enum class EDragPivot Pivot; // 0x48(0x1)
	unsigned char UnknownData_49[0x0003]; // 0x49(0x3)
	struct FVector2D Offset; // 0x4C(0x8)
	unsigned char UnknownData_54[0x0004]; // 0x54(0x4)
	struct FMulticastInlineDelegate OnDrop; // 0x58(0x10)
	struct FMulticastInlineDelegate OnDragCancelled; // 0x68(0x10)
	struct FMulticastInlineDelegate OnDragged; // 0x78(0x10)

	void Drop(struct FPointerEvent PointerEvent); // Function UMG.DragDropOperation.Drop // (Native|Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0x70, 0x7FF775FBA260
	void Dragged(struct FPointerEvent PointerEvent); // Function UMG.DragDropOperation.Dragged // (Native|Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0x70, 0x7FF775FBA130
	void DragCancelled(struct FPointerEvent PointerEvent); // Function UMG.DragDropOperation.DragCancelled // (Native|Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0x70, 0x7FF775FBA000
};

// Class UMG.DynamicEntryBoxBase
// Size : 0x1C8 (Inherited : 0x108)
struct UDynamicEntryBoxBase : UWidget {
	enum class EDynamicBoxType EntryBoxType; // 0x108(0x1)
	unsigned char UnknownData_109[0x0003]; // 0x109(0x3)
	struct FVector2D EntrySpacing; // 0x10C(0x8)
	unsigned char UnknownData_114[0x0004]; // 0x114(0x4)
	struct TArray<struct FVector2D> SpacingPattern; // 0x118(0x10)
	struct FSlateChildSize EntrySizeRule; // 0x128(0x8)
	enum class EHorizontalAlignment EntryHorizontalAlignment; // 0x130(0x1)
	enum class EVerticalAlignment EntryVerticalAlignment; // 0x131(0x1)
	unsigned char UnknownData_132[0x0002]; // 0x132(0x2)
	int32_t MaxElementSize; // 0x134(0x4)
	unsigned char UnknownData_138[0x0010]; // 0x138(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x148(0x80)

	void SetEntrySpacing(struct FVector2D InEntrySpacing); // Function UMG.DynamicEntryBoxBase.SetEntrySpacing // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x8, 0x7FF775FBAD50
	int32_t GetNumEntries(); // Function UMG.DynamicEntryBoxBase.GetNumEntries // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FBA560
	struct TArray<struct UUserWidget*> GetAllEntries(); // Function UMG.DynamicEntryBoxBase.GetAllEntries // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF775FBA440
};

// Class UMG.DynamicEntryBox
// Size : 0x1D0 (Inherited : 0x1C8)
struct UDynamicEntryBox : UDynamicEntryBoxBase {
	class UUserWidget* EntryWidgetClass; // 0x1C8(0x8)

	void Reset(bool bDeleteWidgets); // Function UMG.DynamicEntryBox.Reset // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FBAA60
	void RemoveEntry(struct UUserWidget* EntryWidget); // Function UMG.DynamicEntryBox.RemoveEntry // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FBA930
	struct UUserWidget* BP_CreateEntryOfClass(class UUserWidget* EntryClass); // Function UMG.DynamicEntryBox.BP_CreateEntryOfClass // (Final|Native|Private|BlueprintCallable) // Param Size : 0x10, 0x7FF775FB9F10
	struct UUserWidget* BP_CreateEntry(); // Function UMG.DynamicEntryBox.BP_CreateEntry // (Final|Native|Private|BlueprintCallable) // Param Size : 0x8, 0x7FF775FB9EE0
};

// Class UMG.EditableText
// Size : 0x450 (Inherited : 0x108)
struct UEditableText : UWidget {
	struct FText Text; // 0x108(0x18)
	struct FDelegate TextDelegate; // 0x120(0x10)
	struct FText HintText; // 0x130(0x18)
	struct FDelegate HintTextDelegate; // 0x148(0x10)
	struct FEditableTextStyle WidgetStyle; // 0x158(0x218)
	struct USlateWidgetStyleAsset* Style; // 0x370(0x8)
	struct USlateBrushAsset* BackgroundImageSelected; // 0x378(0x8)
	struct USlateBrushAsset* BackgroundImageComposing; // 0x380(0x8)
	struct USlateBrushAsset* CaretImage; // 0x388(0x8)
	struct FSlateFontInfo Font; // 0x390(0x50)
	struct FSlateColor ColorAndOpacity; // 0x3E0(0x28)
	bool IsReadOnly; // 0x408(0x1)
	bool IsPassword; // 0x409(0x1)
	unsigned char UnknownData_40A[0x0002]; // 0x40A(0x2)
	float MinimumDesiredWidth; // 0x40C(0x4)
	bool IsCaretMovedWhenGainFocus; // 0x410(0x1)
	bool SelectAllTextWhenFocused; // 0x411(0x1)
	bool RevertTextOnEscape; // 0x412(0x1)
	bool ClearKeyboardFocusOnCommit; // 0x413(0x1)
	bool SelectAllTextOnCommit; // 0x414(0x1)
	bool AllowContextMenu; // 0x415(0x1)
	enum class EVirtualKeyboardType KeyboardType; // 0x416(0x1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x417(0x1)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x418(0x1)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x419(0x1)
	enum class ETextJustify Justification; // 0x41A(0x1)
	struct FShapedTextOptions ShapedTextOptions; // 0x41B(0x3)
	unsigned char UnknownData_41E[0x0002]; // 0x41E(0x2)
	struct FMulticastInlineDelegate OnTextChanged; // 0x420(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x430(0x10)
	unsigned char UnknownData_440[0x0010]; // 0x440(0x10)

	void SetText(struct FText InText); // Function UMG.EditableText.SetText // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FBBA20
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.EditableText.SetJustification // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FBB460
	void SetIsReadOnly(bool InbIsReadyOnly); // Function UMG.EditableText.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FBB340
	void SetIsPassword(bool InbIsPassword); // Function UMG.EditableText.SetIsPassword // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FBB220
	void SetHintText(struct FText InHintText); // Function UMG.EditableText.SetHintText // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FBAEC0
	void OnEditableTextCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableText.OnEditableTextCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // Param Size : 0x19, 0x7FF77510D9D0
	void OnEditableTextChangedEvent__DelegateSignature(struct FText Text); // DelegateFunction UMG.EditableText.OnEditableTextChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // Param Size : 0x18, 0x7FF77510D9D0
	struct FText GetText(); // Function UMG.EditableText.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF775FBA740
};

// Class UMG.EditableTextBox
// Size : 0xA28 (Inherited : 0x108)
struct UEditableTextBox : UWidget {
	struct FText Text; // 0x108(0x18)
	struct FDelegate TextDelegate; // 0x120(0x10)
	struct FEditableTextBoxStyle WidgetStyle; // 0x130(0x7F0)
	struct USlateWidgetStyleAsset* Style; // 0x920(0x8)
	struct FText HintText; // 0x928(0x18)
	struct FDelegate HintTextDelegate; // 0x940(0x10)
	struct FSlateFontInfo Font; // 0x950(0x50)
	struct FLinearColor ForegroundColor; // 0x9A0(0x10)
	struct FLinearColor BackgroundColor; // 0x9B0(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0x9C0(0x10)
	bool IsReadOnly; // 0x9D0(0x1)
	bool IsPassword; // 0x9D1(0x1)
	unsigned char UnknownData_9D2[0x0002]; // 0x9D2(0x2)
	float MinimumDesiredWidth; // 0x9D4(0x4)
	struct FMargin Padding; // 0x9D8(0x10)
	bool IsCaretMovedWhenGainFocus; // 0x9E8(0x1)
	bool SelectAllTextWhenFocused; // 0x9E9(0x1)
	bool RevertTextOnEscape; // 0x9EA(0x1)
	bool ClearKeyboardFocusOnCommit; // 0x9EB(0x1)
	bool SelectAllTextOnCommit; // 0x9EC(0x1)
	bool AllowContextMenu; // 0x9ED(0x1)
	enum class EVirtualKeyboardType KeyboardType; // 0x9EE(0x1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x9EF(0x1)
	enum class EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x9F0(0x1)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x9F1(0x1)
	enum class ETextJustify Justification; // 0x9F2(0x1)
	struct FShapedTextOptions ShapedTextOptions; // 0x9F3(0x3)
	unsigned char UnknownData_9F6[0x0002]; // 0x9F6(0x2)
	struct FMulticastInlineDelegate OnTextChanged; // 0x9F8(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xA08(0x10)
	unsigned char UnknownData_A18[0x0010]; // 0xA18(0x10)

	void SetText(struct FText InText); // Function UMG.EditableTextBox.SetText // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FBBB00
	void SetJustification(enum class ETextJustify InJustification); // Function UMG.EditableTextBox.SetJustification // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FBB4E0
	void SetIsReadOnly(bool bReadOnly); // Function UMG.EditableTextBox.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FBB3D0
	void SetIsPassword(bool bIsPassword); // Function UMG.EditableTextBox.SetIsPassword // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FBB2B0
	void SetHintText(struct FText InText); // Function UMG.EditableTextBox.SetHintText // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FBAFA0
	void SetError(struct FText InError); // Function UMG.EditableTextBox.SetError // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FBADE0
	void OnEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // Param Size : 0x19, 0x7FF77510D9D0
	void OnEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // DelegateFunction UMG.EditableTextBox.OnEditableTextBoxChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // Param Size : 0x18, 0x7FF77510D9D0
	bool HasError(); // Function UMG.EditableTextBox.HasError // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FBA8B0
	struct FText GetText(); // Function UMG.EditableTextBox.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF775FBA7E0
	void ClearError(); // Function UMG.EditableTextBox.ClearError // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FB9FA0
};

// Class UMG.ExpandableArea
// Size : 0x338 (Inherited : 0x108)
struct UExpandableArea : UWidget {
	unsigned char UnknownData_108[0x0008]; // 0x108(0x8)
	struct FExpandableAreaStyle Style; // 0x110(0x120)
	struct FSlateBrush BorderBrush; // 0x230(0x88)
	struct FSlateColor BorderColor; // 0x2B8(0x28)
	bool bIsExpanded; // 0x2E0(0x1)
	unsigned char UnknownData_2E1[0x0003]; // 0x2E1(0x3)
	float MaxHeight; // 0x2E4(0x4)
	struct FMargin HeaderPadding; // 0x2E8(0x10)
	struct FMargin AreaPadding; // 0x2F8(0x10)
	struct FMulticastInlineDelegate OnExpansionChanged; // 0x308(0x10)
	struct UWidget* HeaderContent; // 0x318(0x8)
	struct UWidget* BodyContent; // 0x320(0x8)
	unsigned char UnknownData_328[0x0010]; // 0x328(0x10)

	void SetIsExpanded_Animated(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded_Animated // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FBB190
	void SetIsExpanded(bool IsExpanded); // Function UMG.ExpandableArea.SetIsExpanded // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FBB100
	bool GetIsExpanded(); // Function UMG.ExpandableArea.GetIsExpanded // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FBA530
};

// Class UMG.FloatBinding
// Size : 0x60 (Inherited : 0x60)
struct UFloatBinding : UPropertyBinding {

	float GetValue(); // Function UMG.FloatBinding.GetValue // (Final|Native|Public|Const) // Param Size : 0x4, 0x7FF775FBA880
};

// Class UMG.GridPanel
// Size : 0x150 (Inherited : 0x120)
struct UGridPanel : UPanelWidget {
	struct TArray<float> ColumnFill; // 0x120(0x10)
	struct TArray<float> RowFill; // 0x130(0x10)
	unsigned char UnknownData_140[0x0010]; // 0x140(0x10)

	void SetRowFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetRowFill // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FBB770
	void SetColumnFill(int32_t ColumnIndex, float Coefficient); // Function UMG.GridPanel.SetColumnFill // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FBAB70
	struct UGridSlot* AddChildToGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.GridPanel.AddChildToGrid // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FB9D40
};

// Class UMG.GridSlot
// Size : 0x70 (Inherited : 0x38)
struct UGridSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x1)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x1)
	unsigned char UnknownData_4A[0x0002]; // 0x4A(0x2)
	int32_t Row; // 0x4C(0x4)
	int32_t RowSpan; // 0x50(0x4)
	int32_t Column; // 0x54(0x4)
	int32_t ColumnSpan; // 0x58(0x4)
	int32_t Layer; // 0x5C(0x4)
	struct FVector2D Nudge; // 0x60(0x8)
	unsigned char UnknownData_68[0x0008]; // 0x68(0x8)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.GridSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FBBBE0
	void SetRowSpan(int32_t InRowSpan); // Function UMG.GridSlot.SetRowSpan // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FBB840
	void SetRow(int32_t InRow); // Function UMG.GridSlot.SetRow // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FBB6F0
	void SetPadding(struct FMargin InPadding); // Function UMG.GridSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FBB660
	void SetNudge(struct FVector2D InNudge); // Function UMG.GridSlot.SetNudge // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x8, 0x7FF775FBB5E0
	void SetLayer(int32_t InLayer); // Function UMG.GridSlot.SetLayer // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FBB560
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.GridSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FBB080
	void SetColumnSpan(int32_t InColumnSpan); // Function UMG.GridSlot.SetColumnSpan // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FBAC40
	void SetColumn(int32_t InColumn); // Function UMG.GridSlot.SetColumn // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FBAAF0
};

// Class UMG.HorizontalBox
// Size : 0x130 (Inherited : 0x120)
struct UHorizontalBox : UPanelWidget {
	unsigned char UnknownData_120[0x0010]; // 0x120(0x10)

	struct UHorizontalBoxSlot* AddChildToHorizontalBox(struct UWidget* Content); // Function UMG.HorizontalBox.AddChildToHorizontalBox // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FBE010
};

// Class UMG.HorizontalBoxSlot
// Size : 0x60 (Inherited : 0x38)
struct UHorizontalBoxSlot : UPanelSlot {
	unsigned char UnknownData_38[0x0008]; // 0x38(0x8)
	struct FMargin Padding; // 0x40(0x10)
	struct FSlateChildSize Size; // 0x50(0x8)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x1)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x1)
	unsigned char UnknownData_5A[0x0006]; // 0x5A(0x6)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.HorizontalBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FC03C0
	void SetSize(struct FSlateChildSize InSize); // Function UMG.HorizontalBoxSlot.SetSize // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FC02B0
	void SetPadding(struct FMargin InPadding); // Function UMG.HorizontalBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FBFEB0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.HorizontalBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FBFBF0
};

// Class UMG.Image
// Size : 0x210 (Inherited : 0x108)
struct UImage : UWidget {
	struct FSlateBrush Brush; // 0x108(0x88)
	struct FDelegate BrushDelegate; // 0x190(0x10)
	struct FLinearColor ColorAndOpacity; // 0x1A0(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x1B0(0x10)
	bool bFlipForRightToLeftFlowDirection; // 0x1C0(0x1)
	unsigned char UnknownData_1C1[0x0003]; // 0x1C1(0x3)
	struct FDelegate OnMouseButtonDownEvent; // 0x1C4(0x10)
	unsigned char UnknownData_1D4[0x003C]; // 0x1D4(0x3C)

	void SetOpacity(float InOpacity); // Function UMG.Image.SetOpacity // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FBFE30
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.Image.SetColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF775FBFA80
	void SetBrushTintColor(struct FSlateColor TintColor); // Function UMG.Image.SetBrushTintColor // (Final|Native|Public|BlueprintCallable) // Param Size : 0x28, 0x7FF775FBF900
	void SetBrushSize(struct FVector2D DesiredSize); // Function UMG.Image.SetBrushSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x8, 0x7FF775FBF880
	void SetBrushResourceObject(struct UObject* ResourceObject); // Function UMG.Image.SetBrushResourceObject // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FBF800
	void SetBrushFromTextureDynamic(struct UTexture2DDynamic* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTextureDynamic // (Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF775FBF730
	void SetBrushFromTexture(struct UTexture2D* Texture, bool bMatchSize); // Function UMG.Image.SetBrushFromTexture // (Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF775FBF660
	void SetBrushFromSoftTexture(struct TSoftObjectPtr<struct UTexture2D> SoftTexture, bool bMatchSize); // Function UMG.Image.SetBrushFromSoftTexture // (Native|Public|BlueprintCallable) // Param Size : 0x29, 0x7FF775FBF530
	void SetBrushFromSoftMaterial(struct TSoftObjectPtr<struct UMaterialInterface> SoftMaterial); // Function UMG.Image.SetBrushFromSoftMaterial // (Native|Public|BlueprintCallable) // Param Size : 0x28, 0x7FF775FBF440
	void SetBrushFromMaterial(struct UMaterialInterface* Material); // Function UMG.Image.SetBrushFromMaterial // (Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FBF3B0
	void SetBrushFromAtlasInterface(struct TScriptInterface<None> AtlasRegion, bool bMatchSize); // Function UMG.Image.SetBrushFromAtlasInterface // (Native|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF775FBF2C0
	void SetBrushFromAsset(struct USlateBrushAsset* Asset); // Function UMG.Image.SetBrushFromAsset // (Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FBF230
	void SetBrush(struct FSlateBrush InBrush); // Function UMG.Image.SetBrush // (Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x88, 0x7FF775FBF0B0
	struct UMaterialInstanceDynamic* GetDynamicMaterial(); // Function UMG.Image.GetDynamicMaterial // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FBE7A0
};

// Class UMG.InputKeySelector
// Size : 0x6F0 (Inherited : 0x108)
struct UInputKeySelector : UWidget {
	struct FButtonStyle WidgetStyle; // 0x108(0x278)
	struct FTextBlockStyle TextStyle; // 0x380(0x268)
	struct FInputChord SelectedKey; // 0x5E8(0x20)
	struct FSlateFontInfo Font; // 0x608(0x50)
	struct FMargin Margin; // 0x658(0x10)
	struct FLinearColor ColorAndOpacity; // 0x668(0x10)
	struct FText KeySelectionText; // 0x678(0x18)
	struct FText NoKeySpecifiedText; // 0x690(0x18)
	bool bAllowModifierKeys; // 0x6A8(0x1)
	bool bAllowGamepadKeys; // 0x6A9(0x1)
	unsigned char UnknownData_6AA[0x0006]; // 0x6AA(0x6)
	struct TArray<struct FKey> EscapeKeys; // 0x6B0(0x10)
	struct FMulticastInlineDelegate OnKeySelected; // 0x6C0(0x10)
	struct FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x6D0(0x10)
	unsigned char UnknownData_6E0[0x0010]; // 0x6E0(0x10)

	void SetTextBlockVisibility(enum class ESlateVisibility InVisibility); // Function UMG.InputKeySelector.SetTextBlockVisibility // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FC0340
	void SetSelectedKey(struct FInputChord InSelectedKey); // Function UMG.InputKeySelector.SetSelectedKey // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x20, 0x7FF775FC0140
	void SetNoKeySpecifiedText(struct FText InNoKeySpecifiedText); // Function UMG.InputKeySelector.SetNoKeySpecifiedText // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FBFD50
	void SetKeySelectionText(struct FText InKeySelectionText); // Function UMG.InputKeySelector.SetKeySelectionText // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FBFC70
	void SetEscapeKeys(struct TArray<struct FKey> InKeys); // Function UMG.InputKeySelector.SetEscapeKeys // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF775FBFB00
	void SetAllowModifierKeys(bool bInAllowModifierKeys); // Function UMG.InputKeySelector.SetAllowModifierKeys // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FBF020
	void SetAllowGamepadKeys(bool bInAllowGamepadKeys); // Function UMG.InputKeySelector.SetAllowGamepadKeys // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FBEF90
	void OnKeySelected__DelegateSignature(struct FInputChord SelectedKey); // DelegateFunction UMG.InputKeySelector.OnKeySelected__DelegateSignature // (MulticastDelegate|Public|Delegate) // Param Size : 0x20, 0x7FF77510D9D0
	void OnIsSelectingKeyChanged__DelegateSignature(); // DelegateFunction UMG.InputKeySelector.OnIsSelectingKeyChanged__DelegateSignature // (MulticastDelegate|Public|Delegate) // Param Size : 0x0, 0x7FF77510D9D0
	bool GetIsSelectingKey(); // Function UMG.InputKeySelector.GetIsSelectingKey // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FBE860
};

// Class UMG.Int32Binding
// Size : 0x60 (Inherited : 0x60)
struct UInt32Binding : UPropertyBinding {

	int32_t GetValue(); // Function UMG.Int32Binding.GetValue // (Final|Native|Public|Const) // Param Size : 0x4, 0x7FF775FBEB00
};

// Class UMG.InvalidationBox
// Size : 0x138 (Inherited : 0x120)
struct UInvalidationBox : UContentWidget {
	bool bCanCache; // 0x120(0x1)
	bool CacheRelativeTransforms; // 0x121(0x1)
	unsigned char UnknownData_122[0x0016]; // 0x122(0x16)

	void SetCanCache(bool CanCache); // Function UMG.InvalidationBox.SetCanCache // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FBF9F0
	void InvalidateCache(); // Function UMG.InvalidationBox.InvalidateCache // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF774A435E0
	bool GetCanCache(); // Function UMG.InvalidationBox.GetCanCache // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FBE6E0
};

// Class UMG.UserListEntry
// Size : 0x28 (Inherited : 0x28)
struct UUserListEntry : UInterface {

	void BP_OnItemSelectionChanged(bool bIsSelected); // Function UMG.UserListEntry.BP_OnItemSelectionChanged // (Event|Protected|BlueprintEvent) // Param Size : 0x1, 0x7FF77510D9D0
	void BP_OnItemExpansionChanged(bool bIsExpanded); // Function UMG.UserListEntry.BP_OnItemExpansionChanged // (Event|Protected|BlueprintEvent) // Param Size : 0x1, 0x7FF77510D9D0
	void BP_OnEntryReleased(); // Function UMG.UserListEntry.BP_OnEntryReleased // (Event|Protected|BlueprintEvent) // Param Size : 0x0, 0x7FF77510D9D0
};

// Class UMG.UserListEntryLibrary
// Size : 0x28 (Inherited : 0x28)
struct UUserListEntryLibrary : UBlueprintFunctionLibrary {

	bool IsListItemSelected(struct TScriptInterface<None> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemSelected // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x11, 0x7FF775FBEC00
	bool IsListItemExpanded(struct TScriptInterface<None> UserListEntry); // Function UMG.UserListEntryLibrary.IsListItemExpanded // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x11, 0x7FF775FBEB60
	struct UListViewBase* GetOwningListView(struct TScriptInterface<None> UserListEntry); // Function UMG.UserListEntryLibrary.GetOwningListView // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x18, 0x7FF775FBEA60
};

// Class UMG.UserObjectListEntry
// Size : 0x28 (Inherited : 0x28)
struct UUserObjectListEntry : UUserListEntry {

	void OnListItemObjectSet(struct UObject* ListItemObject); // Function UMG.UserObjectListEntry.OnListItemObjectSet // (Event|Protected|BlueprintEvent) // Param Size : 0x8, 0x7FF77510D9D0
};

// Class UMG.UserObjectListEntryLibrary
// Size : 0x28 (Inherited : 0x28)
struct UUserObjectListEntryLibrary : UBlueprintFunctionLibrary {

	struct UObject* GetListItemObject(struct TScriptInterface<None> UserObjectListEntry); // Function UMG.UserObjectListEntryLibrary.GetListItemObject // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x18, 0x7FF775FBE920
};

// Class UMG.ListViewBase
// Size : 0x218 (Inherited : 0x108)
struct UListViewBase : UWidget {
	class UUserWidget* EntryWidgetClass; // 0x108(0x8)
	float WheelScrollMultiplier; // 0x110(0x4)
	bool bEnableScrollAnimation; // 0x114(0x1)
	bool bEnableFixedLineOffset; // 0x115(0x1)
	unsigned char UnknownData_116[0x0002]; // 0x116(0x2)
	float FixedLineScrollOffset; // 0x118(0x4)
	unsigned char UnknownData_11C[0x0004]; // 0x11C(0x4)
	struct FMulticastInlineDelegate BP_OnEntryGenerated; // 0x120(0x10)
	struct FMulticastInlineDelegate BP_OnEntryReleased; // 0x130(0x10)
	struct FUserWidgetPool EntryWidgetPool; // 0x140(0x80)
	unsigned char UnknownData_1C0[0x0058]; // 0x1C0(0x58)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ListViewBase.SetWheelScrollMultiplier // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FC0440
	void SetScrollOffset(float InScrollOffset); // Function UMG.ListViewBase.SetScrollOffset // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FBFFC0
	void SetScrollbarVisibility(enum class ESlateVisibility InVisibility); // Function UMG.ListViewBase.SetScrollbarVisibility // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FC0040
	void ScrollToTop(); // Function UMG.ListViewBase.ScrollToTop // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FBEF70
	void ScrollToBottom(); // Function UMG.ListViewBase.ScrollToBottom // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FBEF50
	void RequestRefresh(); // Function UMG.ListViewBase.RequestRefresh // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FBEEB0
	void RegenerateAllEntries(); // Function UMG.ListViewBase.RegenerateAllEntries // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FBEE10
	struct TArray<struct UUserWidget*> GetDisplayedEntryWidgets(); // Function UMG.ListViewBase.GetDisplayedEntryWidgets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF775FBE710
};

// Class UMG.ListView
// Size : 0x368 (Inherited : 0x218)
struct UListView : UListViewBase {
	unsigned char UnknownData_218[0x00C0]; // 0x218(0xC0)
	enum class EOrientation Orientation; // 0x2D8(0x1)
	enum class ESelectionMode SelectionMode; // 0x2D9(0x1)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x2DA(0x1)
	bool bClearSelectionOnClick; // 0x2DB(0x1)
	bool bIsFocusable; // 0x2DC(0x1)
	unsigned char UnknownData_2DD[0x0003]; // 0x2DD(0x3)
	float EntrySpacing; // 0x2E0(0x4)
	bool bReturnFocusToSelection; // 0x2E4(0x1)
	unsigned char UnknownData_2E5[0x0003]; // 0x2E5(0x3)
	struct TArray<struct UObject*> ListItems; // 0x2E8(0x10)
	unsigned char UnknownData_2F8[0x0010]; // 0x2F8(0x10)
	struct FMulticastInlineDelegate BP_OnEntryInitialized; // 0x308(0x10)
	struct FMulticastInlineDelegate BP_OnItemClicked; // 0x318(0x10)
	struct FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0x328(0x10)
	struct FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0x338(0x10)
	struct FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0x348(0x10)
	struct FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0x358(0x10)

	void SetSelectionMode(enum class ESelectionMode SelectionMode); // Function UMG.ListView.SetSelectionMode // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FC0230
	void SetSelectedIndex(int32_t Index); // Function UMG.ListView.SetSelectedIndex // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FC00C0
	void ScrollIndexIntoView(int32_t Index); // Function UMG.ListView.ScrollIndexIntoView // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FBEED0
	void RemoveItem(struct UObject* Item); // Function UMG.ListView.RemoveItem // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FBEE30
	void NavigateToIndex(int32_t Index); // Function UMG.ListView.NavigateToIndex // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FBED00
	bool IsRefreshPending(); // Function UMG.ListView.IsRefreshPending // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FBECD0
	int32_t GetNumItems(); // Function UMG.ListView.GetNumItems // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FBEA30
	struct TArray<struct UObject*> GetListItems(); // Function UMG.ListView.GetListItems // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF775FBE9C0
	struct UObject* GetItemAt(int32_t Index); // Function UMG.ListView.GetItemAt // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF775FBE890
	int32_t GetIndexForItem(struct UObject* Item); // Function UMG.ListView.GetIndexForItem // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0xC, 0x7FF775FBE7D0
	void ClearListItems(); // Function UMG.ListView.ClearListItems // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FBE610
	void BP_SetSelectedItem(struct UObject* Item); // Function UMG.ListView.BP_SetSelectedItem // (Final|Native|Private|BlueprintCallable) // Param Size : 0x8, 0x7FF775FBE590
	void BP_SetListItems(struct TArray<struct UObject*> InListItems); // Function UMG.ListView.BP_SetListItems // (Final|Native|Private|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF775FBE4E0
	void BP_SetItemSelection(struct UObject* Item, bool bSelected); // Function UMG.ListView.BP_SetItemSelection // (Final|Native|Private|BlueprintCallable) // Param Size : 0x9, 0x7FF775FBE410
	void BP_ScrollItemIntoView(struct UObject* Item); // Function UMG.ListView.BP_ScrollItemIntoView // (Final|Native|Private|BlueprintCallable) // Param Size : 0x8, 0x7FF775FBE390
	void BP_NavigateToItem(struct UObject* Item); // Function UMG.ListView.BP_NavigateToItem // (Final|Native|Private|BlueprintCallable) // Param Size : 0x8, 0x7FF775FBE310
	bool BP_IsItemVisible(struct UObject* Item); // Function UMG.ListView.BP_IsItemVisible // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x9, 0x7FF775FBE280
	bool BP_GetSelectedItems(struct TArray<struct UObject*> Items); // Function UMG.ListView.BP_GetSelectedItems // (Final|Native|Private|HasOutParms|BlueprintCallable|Const) // Param Size : 0x11, 0x7FF775FBE1C0
	struct UObject* BP_GetSelectedItem(); // Function UMG.ListView.BP_GetSelectedItem // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FBE190
	int32_t BP_GetNumItemsSelected(); // Function UMG.ListView.BP_GetNumItemsSelected // (Final|Native|Private|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FBE160
	void BP_ClearSelection(); // Function UMG.ListView.BP_ClearSelection // (Final|Native|Private|BlueprintCallable) // Param Size : 0x0, 0x7FF775FBE140
	void BP_CancelScrollIntoView(); // Function UMG.ListView.BP_CancelScrollIntoView // (Final|Native|Private|BlueprintCallable) // Param Size : 0x0, 0x7FF775FBE120
	void AddItem(struct UObject* Item); // Function UMG.ListView.AddItem // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FBE0A0
};

// Class UMG.ListViewDesignerPreviewItem
// Size : 0x28 (Inherited : 0x28)
struct UListViewDesignerPreviewItem : UObject {
};

// Class UMG.MenuAnchor
// Size : 0x160 (Inherited : 0x120)
struct UMenuAnchor : UContentWidget {
	class UUserWidget* MenuClass; // 0x120(0x8)
	struct FDelegate OnGetMenuContentEvent; // 0x128(0x10)
	enum class EMenuPlacement Placement; // 0x138(0x1)
	bool bFitInWindow; // 0x139(0x1)
	bool ShouldDeferPaintingAfterWindowContent; // 0x13A(0x1)
	bool UseApplicationMenuStack; // 0x13B(0x1)
	unsigned char UnknownData_13C[0x0004]; // 0x13C(0x4)
	struct FMulticastInlineDelegate OnMenuOpenChanged; // 0x140(0x10)
	unsigned char UnknownData_150[0x0010]; // 0x150(0x10)

	void ToggleOpen(bool bFocusOnOpen); // Function UMG.MenuAnchor.ToggleOpen // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FC04F0
	bool ShouldOpenDueToClick(); // Function UMG.MenuAnchor.ShouldOpenDueToClick // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FC04C0
	void SetPlacement(enum class EMenuPlacement InPlacement); // Function UMG.MenuAnchor.SetPlacement // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FBFF40
	void Open(bool bFocusMenu); // Function UMG.MenuAnchor.Open // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FBED80
	bool IsOpen(); // Function UMG.MenuAnchor.IsOpen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FBECA0
	bool HasOpenSubMenus(); // Function UMG.MenuAnchor.HasOpenSubMenus // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FBEB30
	struct FVector2D GetMenuPosition(); // Function UMG.MenuAnchor.GetMenuPosition // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FBE9F0
	void FitInWindow(bool bFit); // Function UMG.MenuAnchor.FitInWindow // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FBE650
	void Close(); // Function UMG.MenuAnchor.Close // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FBE630
};

// Class UMG.MouseCursorBinding
// Size : 0x60 (Inherited : 0x60)
struct UMouseCursorBinding : UPropertyBinding {

	enum class EMouseCursor GetValue(); // Function UMG.MouseCursorBinding.GetValue // (Final|Native|Public|Const) // Param Size : 0x1, 0x7FF775FC3FB0
};

// Class UMG.MovieScene2DTransformSection
// Size : 0x550 (Inherited : 0xE0)
struct UMovieScene2DTransformSection : UMovieSceneSection {
	struct FMovieScene2DTransformMask TransformMask; // 0xE0(0x4)
	unsigned char UnknownData_E4[0x0004]; // 0xE4(0x4)
	struct FMovieSceneFloatChannel Translation[2]; // 0xE8(0x140)
	struct FMovieSceneFloatChannel Rotation; // 0x228(0xA0)
	struct FMovieSceneFloatChannel Scale[2]; // 0x2C8(0x140)
	struct FMovieSceneFloatChannel Shear[2]; // 0x408(0x140)
	unsigned char UnknownData_548[0x0008]; // 0x548(0x8)
};

// Class UMG.MovieScene2DTransformTrack
// Size : 0x88 (Inherited : 0x88)
struct UMovieScene2DTransformTrack : UMovieScenePropertyTrack {
};

// Class UMG.MovieSceneMarginSection
// Size : 0x360 (Inherited : 0xE0)
struct UMovieSceneMarginSection : UMovieSceneSection {
	struct FMovieSceneFloatChannel TopCurve; // 0xE0(0xA0)
	struct FMovieSceneFloatChannel LeftCurve; // 0x180(0xA0)
	struct FMovieSceneFloatChannel RightCurve; // 0x220(0xA0)
	struct FMovieSceneFloatChannel BottomCurve; // 0x2C0(0xA0)
};

// Class UMG.MovieSceneMarginTrack
// Size : 0x88 (Inherited : 0x88)
struct UMovieSceneMarginTrack : UMovieScenePropertyTrack {
};

// Class UMG.MovieSceneWidgetMaterialTrack
// Size : 0x80 (Inherited : 0x68)
struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack {
	struct TArray<struct FName> BrushPropertyNamePath; // 0x68(0x10)
	struct FName TrackName; // 0x78(0x8)
};

// Class UMG.TextLayoutWidget
// Size : 0x128 (Inherited : 0x108)
struct UTextLayoutWidget : UWidget {
	struct FShapedTextOptions ShapedTextOptions; // 0x108(0x3)
	enum class ETextJustify Justification; // 0x10B(0x1)
	enum class ETextWrappingPolicy WrappingPolicy; // 0x10C(0x1)
	unsigned char AutoWrapText : 1; // 0x10D(0x1)
	unsigned char UnknownData_10D_1 : 7; // 0x10D(0x1)
	unsigned char UnknownData_10E[0x0002]; // 0x10E(0x2)
	float WrapTextAt; // 0x110(0x4)
	struct FMargin Margin; // 0x114(0x10)
	float LineHeightPercentage; // 0x124(0x4)

	void SetJustification(enum class ETextJustify InJustification); // Function UMG.TextLayoutWidget.SetJustification // (Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FCCD80
};

// Class UMG.MultiLineEditableText
// Size : 0x460 (Inherited : 0x128)
struct UMultiLineEditableText : UTextLayoutWidget {
	struct FText Text; // 0x128(0x18)
	struct FText HintText; // 0x140(0x18)
	struct FDelegate HintTextDelegate; // 0x158(0x10)
	struct FTextBlockStyle WidgetStyle; // 0x168(0x268)
	bool bIsReadOnly; // 0x3D0(0x1)
	unsigned char UnknownData_3D1[0x0007]; // 0x3D1(0x7)
	struct FSlateFontInfo Font; // 0x3D8(0x50)
	bool SelectAllTextWhenFocused; // 0x428(0x1)
	bool ClearTextSelectionOnFocusLoss; // 0x429(0x1)
	bool RevertTextOnEscape; // 0x42A(0x1)
	bool ClearKeyboardFocusOnCommit; // 0x42B(0x1)
	bool AllowContextMenu; // 0x42C(0x1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x42D(0x1)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x42E(0x1)
	unsigned char UnknownData_42F[0x0001]; // 0x42F(0x1)
	struct FMulticastInlineDelegate OnTextChanged; // 0x430(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0x440(0x10)
	unsigned char UnknownData_450[0x0010]; // 0x450(0x10)

	void SetWidgetStyle(struct FTextBlockStyle InWidgetStyle); // Function UMG.MultiLineEditableText.SetWidgetStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x268, 0x7FF775FC54A0
	void SetText(struct FText InText); // Function UMG.MultiLineEditableText.SetText // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FC4FE0
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableText.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FC4C70
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableText.SetHintText // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FC49A0
	void OnMultiLineEditableTextCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // Param Size : 0x19, 0x7FF77510D9D0
	void OnMultiLineEditableTextChangedEvent__DelegateSignature(struct FText Text); // DelegateFunction UMG.MultiLineEditableText.OnMultiLineEditableTextChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // Param Size : 0x18, 0x7FF77510D9D0
	struct FText GetText(); // Function UMG.MultiLineEditableText.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF775FC3DD0
	struct FText GetHintText(); // Function UMG.MultiLineEditableText.GetHintText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF775FC3C90
};

// Class UMG.MultiLineEditableTextBox
// Size : 0xC80 (Inherited : 0x128)
struct UMultiLineEditableTextBox : UTextLayoutWidget {
	struct FText Text; // 0x128(0x18)
	struct FText HintText; // 0x140(0x18)
	struct FDelegate HintTextDelegate; // 0x158(0x10)
	struct FEditableTextBoxStyle WidgetStyle; // 0x168(0x7F0)
	struct FTextBlockStyle TextStyle; // 0x958(0x268)
	bool bIsReadOnly; // 0xBC0(0x1)
	bool AllowContextMenu; // 0xBC1(0x1)
	struct FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xBC2(0x1)
	enum class EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xBC3(0x1)
	unsigned char UnknownData_BC4[0x0004]; // 0xBC4(0x4)
	struct USlateWidgetStyleAsset* Style; // 0xBC8(0x8)
	struct FSlateFontInfo Font; // 0xBD0(0x50)
	struct FLinearColor ForegroundColor; // 0xC20(0x10)
	struct FLinearColor BackgroundColor; // 0xC30(0x10)
	struct FLinearColor ReadOnlyForegroundColor; // 0xC40(0x10)
	struct FMulticastInlineDelegate OnTextChanged; // 0xC50(0x10)
	struct FMulticastInlineDelegate OnTextCommitted; // 0xC60(0x10)
	unsigned char UnknownData_C70[0x0010]; // 0xC70(0x10)

	void SetTextStyle(struct FTextBlockStyle InTextStyle); // Function UMG.MultiLineEditableTextBox.SetTextStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x268, 0x7FF775FC5270
	void SetText(struct FText InText); // Function UMG.MultiLineEditableTextBox.SetText // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FC50C0
	void SetIsReadOnly(bool bReadOnly); // Function UMG.MultiLineEditableTextBox.SetIsReadOnly // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FC4D00
	void SetHintText(struct FText InHintText); // Function UMG.MultiLineEditableTextBox.SetHintText // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FC4A80
	void SetError(struct FText InError); // Function UMG.MultiLineEditableTextBox.SetError // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FC4840
	void OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature(struct FText Text, enum class ETextCommit CommitMethod); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // Param Size : 0x19, 0x7FF77510D9D0
	void OnMultiLineEditableTextBoxChangedEvent__DelegateSignature(struct FText Text); // DelegateFunction UMG.MultiLineEditableTextBox.OnMultiLineEditableTextBoxChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate|HasOutParms) // Param Size : 0x18, 0x7FF77510D9D0
	struct FText GetText(); // Function UMG.MultiLineEditableTextBox.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF775FC3E70
	struct FText GetHintText(); // Function UMG.MultiLineEditableTextBox.GetHintText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF775FC3D30
};

// Class UMG.NamedSlot
// Size : 0x130 (Inherited : 0x120)
struct UNamedSlot : UContentWidget {
	unsigned char UnknownData_120[0x0010]; // 0x120(0x10)
};

// Class UMG.NamedSlotInterface
// Size : 0x28 (Inherited : 0x28)
struct UNamedSlotInterface : UInterface {
};

// Class UMG.NativeWidgetHost
// Size : 0x118 (Inherited : 0x108)
struct UNativeWidgetHost : UWidget {
	unsigned char UnknownData_108[0x0010]; // 0x108(0x10)
};

// Class UMG.Overlay
// Size : 0x130 (Inherited : 0x120)
struct UOverlay : UPanelWidget {
	unsigned char UnknownData_120[0x0010]; // 0x120(0x10)

	struct UOverlaySlot* AddChildToOverlay(struct UWidget* Content); // Function UMG.Overlay.AddChildToOverlay // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FC3930
};

// Class UMG.OverlaySlot
// Size : 0x58 (Inherited : 0x38)
struct UOverlaySlot : UPanelSlot {
	unsigned char UnknownData_38[0x0008]; // 0x38(0x8)
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x1)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x1)
	unsigned char UnknownData_52[0x0006]; // 0x52(0x6)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.OverlaySlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FC5420
	void SetPadding(struct FMargin InPadding); // Function UMG.OverlaySlot.SetPadding // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FC4E10
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.OverlaySlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FC4B60
};

// Class UMG.ProgressBar
// Size : 0x318 (Inherited : 0x108)
struct UProgressBar : UWidget {
	struct FProgressBarStyle WidgetStyle; // 0x108(0x1A0)
	struct USlateWidgetStyleAsset* Style; // 0x2A8(0x8)
	struct USlateBrushAsset* BackgroundImage; // 0x2B0(0x8)
	struct USlateBrushAsset* FillImage; // 0x2B8(0x8)
	struct USlateBrushAsset* MarqueeImage; // 0x2C0(0x8)
	float Percent; // 0x2C8(0x4)
	enum class EProgressBarFillType BarFillType; // 0x2CC(0x1)
	bool bIsMarquee; // 0x2CD(0x1)
	unsigned char UnknownData_2CE[0x0002]; // 0x2CE(0x2)
	struct FVector2D BorderPadding; // 0x2D0(0x8)
	struct FDelegate PercentDelegate; // 0x2D8(0x10)
	struct FLinearColor FillColorAndOpacity; // 0x2E8(0x10)
	struct FDelegate FillColorAndOpacityDelegate; // 0x2F8(0x10)
	unsigned char UnknownData_308[0x0010]; // 0x308(0x10)

	void SetPercent(float InPercent); // Function UMG.ProgressBar.SetPercent // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FC4EA0
	void SetIsMarquee(bool InbIsMarquee); // Function UMG.ProgressBar.SetIsMarquee // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FC4BE0
	void SetFillColorAndOpacity(struct FLinearColor InColor); // Function UMG.ProgressBar.SetFillColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF775FC4920
};

// Class UMG.RetainerBox
// Size : 0x150 (Inherited : 0x120)
struct URetainerBox : UContentWidget {
	bool RenderOnInvalidation; // 0x120(0x1)
	bool RenderOnPhase; // 0x121(0x1)
	unsigned char UnknownData_122[0x0002]; // 0x122(0x2)
	int32_t Phase; // 0x124(0x4)
	int32_t PhaseCount; // 0x128(0x4)
	unsigned char UnknownData_12C[0x0004]; // 0x12C(0x4)
	struct UMaterialInterface* EffectMaterial; // 0x130(0x8)
	struct FName TextureParameter; // 0x138(0x8)
	unsigned char UnknownData_140[0x0010]; // 0x140(0x10)

	void SetTextureParameter(struct FName TextureParameter); // Function UMG.RetainerBox.SetTextureParameter // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FC53A0
	void SetRenderingPhase(int32_t RenderPhase, int32_t TotalPhases); // Function UMG.RetainerBox.SetRenderingPhase // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FC4F20
	void SetEffectMaterial(struct UMaterialInterface* EffectMaterial); // Function UMG.RetainerBox.SetEffectMaterial // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FC47C0
	void RequestRender(); // Function UMG.RetainerBox.RequestRender // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FC41C0
	struct UMaterialInstanceDynamic* GetEffectMaterial(); // Function UMG.RetainerBox.GetEffectMaterial // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FC3C60
};

// Class UMG.RichTextBlock
// Size : 0x668 (Inherited : 0x128)
struct URichTextBlock : UTextLayoutWidget {
	struct FText Text; // 0x128(0x18)
	struct UDataTable* TextStyleSet; // 0x140(0x8)
	struct TArray<class URichTextBlockDecorator*> DecoratorClasses; // 0x148(0x10)
	bool bOverrideDefaultStyle; // 0x158(0x1)
	unsigned char UnknownData_159[0x0007]; // 0x159(0x7)
	struct FTextBlockStyle DefaultTextStyleOverride; // 0x160(0x268)
	float MinDesiredWidth; // 0x3C8(0x4)
	unsigned char UnknownData_3CC[0x026C]; // 0x3CC(0x26C)
	struct TArray<struct URichTextBlockDecorator*> InstanceDecorators; // 0x638(0x10)
	unsigned char UnknownData_648[0x0020]; // 0x648(0x20)

	void SetTextStyleSet(struct UDataTable* NewTextStyleSet); // Function UMG.RichTextBlock.SetTextStyleSet // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FC5320
	void SetText(struct FText InText); // Function UMG.RichTextBlock.SetText // (Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x18, 0x7FF775FC51A0
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.RichTextBlock.SetMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FC4D90
	void SetDefaultTextStyle(struct FTextBlockStyle InDefaultTextStyle); // Function UMG.RichTextBlock.SetDefaultTextStyle // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x268, 0x7FF775FC4710
	void SetDefaultStrikeBrush(struct FSlateBrush InStrikeBrush); // Function UMG.RichTextBlock.SetDefaultStrikeBrush // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x88, 0x7FF775FC4590
	void SetDefaultShadowOffset(struct FVector2D InShadowOffset); // Function UMG.RichTextBlock.SetDefaultShadowOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x8, 0x7FF775FC4510
	void SetDefaultShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultShadowColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF775FC4490
	void SetDefaultFont(struct FSlateFontInfo InFontInfo); // Function UMG.RichTextBlock.SetDefaultFont // (Final|Native|Public|BlueprintCallable) // Param Size : 0x50, 0x7FF775FC4360
	void SetDefaultColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.RichTextBlock.SetDefaultColorAndOpacity // (Final|Native|Public|BlueprintCallable) // Param Size : 0x28, 0x7FF775FC4270
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.RichTextBlock.SetAutoWrapText // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FC41E0
	struct FText GetText(); // Function UMG.RichTextBlock.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF775FC3F10
	struct URichTextBlockDecorator* GetDecoratorByClass(class URichTextBlockDecorator* DecoratorClass); // Function UMG.RichTextBlock.GetDecoratorByClass // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FC3BD0
	void ClearAllDefaultStyleOverrides(); // Function UMG.RichTextBlock.ClearAllDefaultStyleOverrides // (Final|Native|Public) // Param Size : 0x0, 0x7FF775FC39C0
};

// Class UMG.RichTextBlockDecorator
// Size : 0x28 (Inherited : 0x28)
struct URichTextBlockDecorator : UObject {
};

// Class UMG.RichTextBlockImageDecorator
// Size : 0x30 (Inherited : 0x28)
struct URichTextBlockImageDecorator : URichTextBlockDecorator {
	struct UDataTable* ImageSet; // 0x28(0x8)
};

// Class UMG.SafeZone
// Size : 0x138 (Inherited : 0x120)
struct USafeZone : UContentWidget {
	bool PadLeft; // 0x120(0x1)
	bool PadRight; // 0x121(0x1)
	bool PadTop; // 0x122(0x1)
	bool PadBottom; // 0x123(0x1)
	unsigned char UnknownData_124[0x0014]; // 0x124(0x14)

	void SetSidesToPad(bool InPadLeft, bool InPadRight, bool InPadTop, bool InPadBottom); // Function UMG.SafeZone.SetSidesToPad // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FC9430
};

// Class UMG.SafeZoneSlot
// Size : 0x60 (Inherited : 0x38)
struct USafeZoneSlot : UPanelSlot {
	bool bIsTitleSafe; // 0x38(0x1)
	unsigned char UnknownData_39[0x0003]; // 0x39(0x3)
	struct FMargin SafeAreaScale; // 0x3C(0x10)
	enum class EHorizontalAlignment HAlign; // 0x4C(0x1)
	enum class EVerticalAlignment VAlign; // 0x4D(0x1)
	unsigned char UnknownData_4E[0x0002]; // 0x4E(0x2)
	struct FMargin Padding; // 0x50(0x10)
};

// Class UMG.ScaleBox
// Size : 0x140 (Inherited : 0x120)
struct UScaleBox : UContentWidget {
	enum class EStretch Stretch; // 0x120(0x1)
	enum class EStretchDirection StretchDirection; // 0x121(0x1)
	unsigned char UnknownData_122[0x0002]; // 0x122(0x2)
	float UserSpecifiedScale; // 0x124(0x4)
	bool IgnoreInheritedScale; // 0x128(0x1)
	unsigned char UnknownData_129[0x0017]; // 0x129(0x17)

	void SetUserSpecifiedScale(float InUserSpecifiedScale); // Function UMG.ScaleBox.SetUserSpecifiedScale // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FC9760
	void SetStretchDirection(enum class EStretchDirection InStretchDirection); // Function UMG.ScaleBox.SetStretchDirection // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FC96E0
	void SetStretch(enum class EStretch InStretch); // Function UMG.ScaleBox.SetStretch // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FC9660
	void SetIgnoreInheritedScale(bool bInIgnoreInheritedScale); // Function UMG.ScaleBox.SetIgnoreInheritedScale // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FC8C40
};

// Class UMG.ScaleBoxSlot
// Size : 0x60 (Inherited : 0x38)
struct UScaleBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x1)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x1)
	unsigned char UnknownData_4A[0x0016]; // 0x4A(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScaleBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FB7A90
	void SetPadding(struct FMargin InPadding); // Function UMG.ScaleBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FC9050
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ScaleBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FB6CA0
};

// Class UMG.ScrollBar
// Size : 0x610 (Inherited : 0x108)
struct UScrollBar : UWidget {
	struct FScrollBarStyle WidgetStyle; // 0x108(0x4D0)
	struct USlateWidgetStyleAsset* Style; // 0x5D8(0x8)
	bool bAlwaysShowScrollbar; // 0x5E0(0x1)
	bool bAlwaysShowScrollbarTrack; // 0x5E1(0x1)
	enum class EOrientation Orientation; // 0x5E2(0x1)
	unsigned char UnknownData_5E3[0x0001]; // 0x5E3(0x1)
	struct FVector2D Thickness; // 0x5E4(0x8)
	struct FMargin Padding; // 0x5EC(0x10)
	unsigned char UnknownData_5FC[0x0014]; // 0x5FC(0x14)

	void SetState(float InOffsetFraction, float InThumbSizeFraction); // Function UMG.ScrollBar.SetState // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FC95A0
};

// Class UMG.ScrollBox
// Size : 0x880 (Inherited : 0x120)
struct UScrollBox : UPanelWidget {
	struct FScrollBoxStyle WidgetStyle; // 0x120(0x228)
	struct FScrollBarStyle WidgetBarStyle; // 0x348(0x4D0)
	struct USlateWidgetStyleAsset* Style; // 0x818(0x8)
	struct USlateWidgetStyleAsset* BarStyle; // 0x820(0x8)
	enum class EOrientation Orientation; // 0x828(0x1)
	enum class ESlateVisibility ScrollBarVisibility; // 0x829(0x1)
	enum class EConsumeMouseWheel ConsumeMouseWheel; // 0x82A(0x1)
	unsigned char UnknownData_82B[0x0001]; // 0x82B(0x1)
	struct FVector2D ScrollbarThickness; // 0x82C(0x8)
	struct FMargin ScrollbarPadding; // 0x834(0x10)
	bool AlwaysShowScrollbar; // 0x844(0x1)
	bool AlwaysShowScrollbarTrack; // 0x845(0x1)
	bool AllowOverscroll; // 0x846(0x1)
	bool bAnimateWheelScrolling; // 0x847(0x1)
	enum class EDescendantScrollDestination NavigationDestination; // 0x848(0x1)
	unsigned char UnknownData_849[0x0003]; // 0x849(0x3)
	float NavigationScrollPadding; // 0x84C(0x4)
	enum class EScrollWhenFocusChanges ScrollWhenFocusChanges; // 0x850(0x1)
	bool bAllowRightClickDragScrolling; // 0x851(0x1)
	unsigned char UnknownData_852[0x0002]; // 0x852(0x2)
	float WheelScrollMultiplier; // 0x854(0x4)
	struct FMulticastInlineDelegate OnUserScrolled; // 0x858(0x10)
	unsigned char UnknownData_868[0x0018]; // 0x868(0x18)

	void SetWheelScrollMultiplier(float NewWheelScrollMultiplier); // Function UMG.ScrollBox.SetWheelScrollMultiplier // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FC98E0
	void SetScrollOffset(float NewScrollOffset); // Function UMG.ScrollBox.SetScrollOffset // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FC9280
	void SetScrollbarVisibility(enum class ESlateVisibility NewScrollBarVisibility); // Function UMG.ScrollBox.SetScrollbarVisibility // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FC9200
	void SetScrollbarThickness(struct FVector2D NewScrollbarThickness); // Function UMG.ScrollBox.SetScrollbarThickness // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x8, 0x7FF775FC93A0
	void SetScrollbarPadding(struct FMargin NewScrollbarPadding); // Function UMG.ScrollBox.SetScrollbarPadding // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x10, 0x7FF775FC9300
	void SetOrientation(enum class EOrientation NewOrientation); // Function UMG.ScrollBox.SetOrientation // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FC8FD0
	void SetConsumeMouseWheel(enum class EConsumeMouseWheel NewConsumeMouseWheel); // Function UMG.ScrollBox.SetConsumeMouseWheel // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FC8A40
	void SetAnimateWheelScrolling(bool bShouldAnimateWheelScrolling); // Function UMG.ScrollBox.SetAnimateWheelScrolling // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FC89B0
	void SetAlwaysShowScrollbar(bool NewAlwaysShowScrollbar); // Function UMG.ScrollBox.SetAlwaysShowScrollbar // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FC8920
	void SetAllowOverscroll(bool NewAllowOverscroll); // Function UMG.ScrollBox.SetAllowOverscroll // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FC8890
	void ScrollWidgetIntoView(struct UWidget* WidgetToFind, bool AnimateScroll, enum class EDescendantScrollDestination ScrollDestination, float Padding); // Function UMG.ScrollBox.ScrollWidgetIntoView // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FC8740
	void ScrollToStart(); // Function UMG.ScrollBox.ScrollToStart // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FC8720
	void ScrollToEnd(); // Function UMG.ScrollBox.ScrollToEnd // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FC8700
	float GetViewOffsetFraction(); // Function UMG.ScrollBox.GetViewOffsetFraction // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FC7ED0
	float GetScrollOffsetOfEnd(); // Function UMG.ScrollBox.GetScrollOffsetOfEnd // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FC7EA0
	float GetScrollOffset(); // Function UMG.ScrollBox.GetScrollOffset // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FC7E70
	void EndInertialScrolling(); // Function UMG.ScrollBox.EndInertialScrolling // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FC7960
};

// Class UMG.ScrollBoxSlot
// Size : 0x58 (Inherited : 0x38)
struct UScrollBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x1)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x1)
	unsigned char UnknownData_4A[0x000E]; // 0x4A(0xE)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.ScrollBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FC97E0
	void SetPadding(struct FMargin InPadding); // Function UMG.ScrollBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FC90E0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.ScrollBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FC8B40
};

// Class UMG.SizeBox
// Size : 0x158 (Inherited : 0x120)
struct USizeBox : UContentWidget {
	unsigned char UnknownData_120[0x0010]; // 0x120(0x10)
	float WidthOverride; // 0x130(0x4)
	float HeightOverride; // 0x134(0x4)
	float MinDesiredWidth; // 0x138(0x4)
	float MinDesiredHeight; // 0x13C(0x4)
	float MaxDesiredWidth; // 0x140(0x4)
	float MaxDesiredHeight; // 0x144(0x4)
	float MinAspectRatio; // 0x148(0x4)
	float MaxAspectRatio; // 0x14C(0x4)
	unsigned char bOverride_WidthOverride : 1; // 0x150(0x1)
	unsigned char bOverride_HeightOverride : 1; // 0x150(0x1)
	unsigned char bOverride_MinDesiredWidth : 1; // 0x150(0x1)
	unsigned char bOverride_MinDesiredHeight : 1; // 0x150(0x1)
	unsigned char bOverride_MaxDesiredWidth : 1; // 0x150(0x1)
	unsigned char bOverride_MaxDesiredHeight : 1; // 0x150(0x1)
	unsigned char bOverride_MinAspectRatio : 1; // 0x150(0x1)
	unsigned char bOverride_MaxAspectRatio : 1; // 0x150(0x1)
	unsigned char UnknownData_151[0x0007]; // 0x151(0x7)

	void SetWidthOverride(float InWidthOverride); // Function UMG.SizeBox.SetWidthOverride // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FC9960
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.SizeBox.SetMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FC8F50
	void SetMinDesiredHeight(float InMinDesiredHeight); // Function UMG.SizeBox.SetMinDesiredHeight // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FC8ED0
	void SetMinAspectRatio(float InMinAspectRatio); // Function UMG.SizeBox.SetMinAspectRatio // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FC8E50
	void SetMaxDesiredWidth(float InMaxDesiredWidth); // Function UMG.SizeBox.SetMaxDesiredWidth // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FC8DD0
	void SetMaxDesiredHeight(float InMaxDesiredHeight); // Function UMG.SizeBox.SetMaxDesiredHeight // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FC8D50
	void SetMaxAspectRatio(float InMaxAspectRatio); // Function UMG.SizeBox.SetMaxAspectRatio // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FC8CD0
	void SetHeightOverride(float InHeightOverride); // Function UMG.SizeBox.SetHeightOverride // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FC8AC0
	void ClearWidthOverride(); // Function UMG.SizeBox.ClearWidthOverride // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FC7940
	void ClearMinDesiredWidth(); // Function UMG.SizeBox.ClearMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FC7920
	void ClearMinDesiredHeight(); // Function UMG.SizeBox.ClearMinDesiredHeight // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FC7900
	void ClearMinAspectRatio(); // Function UMG.SizeBox.ClearMinAspectRatio // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FC78E0
	void ClearMaxDesiredWidth(); // Function UMG.SizeBox.ClearMaxDesiredWidth // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FC78C0
	void ClearMaxDesiredHeight(); // Function UMG.SizeBox.ClearMaxDesiredHeight // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FC78A0
	void ClearMaxAspectRatio(); // Function UMG.SizeBox.ClearMaxAspectRatio // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FC7880
	void ClearHeightOverride(); // Function UMG.SizeBox.ClearHeightOverride // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FC7860
};

// Class UMG.SizeBoxSlot
// Size : 0x60 (Inherited : 0x38)
struct USizeBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	unsigned char UnknownData_48[0x0010]; // 0x48(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x1)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x1)
	unsigned char UnknownData_5A[0x0006]; // 0x5A(0x6)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.SizeBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FC9860
	void SetPadding(struct FMargin InPadding); // Function UMG.SizeBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FC9170
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.SizeBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FC8BC0
};

// Class UMG.SlateBlueprintLibrary
// Size : 0x28 (Inherited : 0x28)
struct USlateBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FVector2D TransformVectorLocalToAbsolute(struct FGeometry Geometry, struct FVector2D LocalVector); // Function UMG.SlateBlueprintLibrary.TransformVectorLocalToAbsolute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x48, 0x7FF775FC9CE0
	struct FVector2D TransformVectorAbsoluteToLocal(struct FGeometry Geometry, struct FVector2D AbsoluteVector); // Function UMG.SlateBlueprintLibrary.TransformVectorAbsoluteToLocal // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x48, 0x7FF775FC9BE0
	float TransformScalarLocalToAbsolute(struct FGeometry Geometry, float LocalScalar); // Function UMG.SlateBlueprintLibrary.TransformScalarLocalToAbsolute // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x40, 0x7FF775FC9AE0
	float TransformScalarAbsoluteToLocal(struct FGeometry Geometry, float AbsoluteScalar); // Function UMG.SlateBlueprintLibrary.TransformScalarAbsoluteToLocal // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x40, 0x7FF775FC99E0
	void ScreenToWidgetLocal(struct UObject* WorldContextObject, struct FGeometry Geometry, struct FVector2D ScreenPosition, struct FVector2D LocalCoordinate, bool bIncludeWindowPosition); // Function UMG.SlateBlueprintLibrary.ScreenToWidgetLocal // (Final|Native|Static|Public|HasOutParms|HasDefaults) // Param Size : 0x51, 0x7FF775FC8530
	void ScreenToWidgetAbsolute(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D AbsoluteCoordinate, bool bIncludeWindowPosition); // Function UMG.SlateBlueprintLibrary.ScreenToWidgetAbsolute // (Final|Native|Static|Public|HasOutParms|HasDefaults) // Param Size : 0x19, 0x7FF775FC83E0
	void ScreenToViewport(struct UObject* WorldContextObject, struct FVector2D ScreenPosition, struct FVector2D ViewportPosition); // Function UMG.SlateBlueprintLibrary.ScreenToViewport // (Final|Native|Static|Public|HasOutParms|HasDefaults) // Param Size : 0x18, 0x7FF775FC82E0
	void LocalToViewport(struct UObject* WorldContextObject, struct FGeometry Geometry, struct FVector2D LocalCoordinate, struct FVector2D PixelPosition, struct FVector2D ViewportPosition); // Function UMG.SlateBlueprintLibrary.LocalToViewport // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x58, 0x7FF775FC8100
	struct FVector2D LocalToAbsolute(struct FGeometry Geometry, struct FVector2D LocalCoordinate); // Function UMG.SlateBlueprintLibrary.LocalToAbsolute // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x48, 0x7FF775FC8000
	bool IsUnderLocation(struct FGeometry Geometry, struct FVector2D AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.IsUnderLocation // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x41, 0x7FF775FC7F00
	struct FVector2D GetLocalTopLeft(struct FGeometry Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalTopLeft // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x40, 0x7FF775FC7DB0
	struct FVector2D GetLocalSize(struct FGeometry Geometry); // Function UMG.SlateBlueprintLibrary.GetLocalSize // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x40, 0x7FF775FC7CF0
	struct FVector2D GetAbsoluteSize(struct FGeometry Geometry); // Function UMG.SlateBlueprintLibrary.GetAbsoluteSize // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x40, 0x7FF775FC7C30
	bool EqualEqual_SlateBrush(struct FSlateBrush A, struct FSlateBrush B); // Function UMG.SlateBlueprintLibrary.EqualEqual_SlateBrush // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x111, 0x7FF775FC7980
	void AbsoluteToViewport(struct UObject* WorldContextObject, struct FVector2D AbsoluteDesktopCoordinate, struct FVector2D PixelPosition, struct FVector2D ViewportPosition); // Function UMG.SlateBlueprintLibrary.AbsoluteToViewport // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x20, 0x7FF775FC7710
	struct FVector2D AbsoluteToLocal(struct FGeometry Geometry, struct FVector2D AbsoluteCoordinate); // Function UMG.SlateBlueprintLibrary.AbsoluteToLocal // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x48, 0x7FF775FC7610
};

// Class UMG.SlateVectorArtData
// Size : 0x60 (Inherited : 0x28)
struct USlateVectorArtData : UObject {
	struct TArray<struct FSlateMeshVertex> VertexData; // 0x28(0x10)
	struct TArray<uint32_t> IndexData; // 0x38(0x10)
	struct UMaterialInterface* Material; // 0x48(0x8)
	struct FVector2D ExtentMin; // 0x50(0x8)
	struct FVector2D ExtentMax; // 0x58(0x8)
};

// Class UMG.SlateAccessibleWidgetData
// Size : 0x80 (Inherited : 0x28)
struct USlateAccessibleWidgetData : UObject {
	bool bCanChildrenBeAccessible; // 0x28(0x1)
	enum class ESlateAccessibleBehavior AccessibleBehavior; // 0x29(0x1)
	enum class ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x2A(0x1)
	unsigned char UnknownData_2B[0x0005]; // 0x2B(0x5)
	struct FText AccessibleText; // 0x30(0x18)
	struct FDelegate AccessibleTextDelegate; // 0x48(0x10)
	struct FText AccessibleSummaryText; // 0x58(0x18)
	struct FDelegate AccessibleSummaryTextDelegate; // 0x70(0x10)
};

// Class UMG.Slider
// Size : 0x4F8 (Inherited : 0x108)
struct USlider : UWidget {
	float Value; // 0x108(0x4)
	struct FDelegate ValueDelegate; // 0x10C(0x10)
	float MinValue; // 0x11C(0x4)
	float MaxValue; // 0x120(0x4)
	unsigned char UnknownData_124[0x0004]; // 0x124(0x4)
	struct FSliderStyle WidgetStyle; // 0x128(0x340)
	enum class EOrientation Orientation; // 0x468(0x1)
	unsigned char UnknownData_469[0x0003]; // 0x469(0x3)
	struct FLinearColor SliderBarColor; // 0x46C(0x10)
	struct FLinearColor SliderHandleColor; // 0x47C(0x10)
	bool IndentHandle; // 0x48C(0x1)
	bool Locked; // 0x48D(0x1)
	bool MouseUsesStep; // 0x48E(0x1)
	bool RequiresControllerLock; // 0x48F(0x1)
	float StepSize; // 0x490(0x4)
	bool IsFocusable; // 0x494(0x1)
	unsigned char UnknownData_495[0x0003]; // 0x495(0x3)
	struct FMulticastInlineDelegate OnMouseCaptureBegin; // 0x498(0x10)
	struct FMulticastInlineDelegate OnMouseCaptureEnd; // 0x4A8(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureBegin; // 0x4B8(0x10)
	struct FMulticastInlineDelegate OnControllerCaptureEnd; // 0x4C8(0x10)
	struct FMulticastInlineDelegate OnValueChanged; // 0x4D8(0x10)
	unsigned char UnknownData_4E8[0x0010]; // 0x4E8(0x10)

	void SetValue(float InValue); // Function UMG.Slider.SetValue // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FCD970
	void SetStepSize(float InValue); // Function UMG.Slider.SetStepSize // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FCD690
	void SetSliderHandleColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderHandleColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF775FCD610
	void SetSliderBarColor(struct FLinearColor InValue); // Function UMG.Slider.SetSliderBarColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF775FCD590
	void SetMinValue(float InValue); // Function UMG.Slider.SetMinValue // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FCD210
	void SetMaxValue(float InValue); // Function UMG.Slider.SetMaxValue // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FCCF90
	void SetLocked(bool InValue); // Function UMG.Slider.SetLocked // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FCCE00
	void SetIndentHandle(bool InValue); // Function UMG.Slider.SetIndentHandle // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FCCC20
	float GetValue(); // Function UMG.Slider.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FCC460
	float GetNormalizedValue(); // Function UMG.Slider.GetNormalizedValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FCC270
};

// Class UMG.Spacer
// Size : 0x120 (Inherited : 0x108)
struct USpacer : UWidget {
	struct FVector2D Size; // 0x108(0x8)
	unsigned char UnknownData_110[0x0010]; // 0x110(0x10)

	void SetSize(struct FVector2D InSize); // Function UMG.Spacer.SetSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x8, 0x7FF775FCD510
};

// Class UMG.SpinBox
// Size : 0x518 (Inherited : 0x108)
struct USpinBox : UWidget {
	float Value; // 0x108(0x4)
	struct FDelegate ValueDelegate; // 0x10C(0x10)
	unsigned char UnknownData_11C[0x0004]; // 0x11C(0x4)
	struct FSpinBoxStyle WidgetStyle; // 0x120(0x2E8)
	struct USlateWidgetStyleAsset* Style; // 0x408(0x8)
	int32_t MinFractionalDigits; // 0x410(0x4)
	int32_t MaxFractionalDigits; // 0x414(0x4)
	bool bAlwaysUsesDeltaSnap; // 0x418(0x1)
	unsigned char UnknownData_419[0x0003]; // 0x419(0x3)
	float Delta; // 0x41C(0x4)
	float SliderExponent; // 0x420(0x4)
	unsigned char UnknownData_424[0x0004]; // 0x424(0x4)
	struct FSlateFontInfo Font; // 0x428(0x50)
	enum class ETextJustify Justification; // 0x478(0x1)
	unsigned char UnknownData_479[0x0003]; // 0x479(0x3)
	float MinDesiredWidth; // 0x47C(0x4)
	bool ClearKeyboardFocusOnCommit; // 0x480(0x1)
	bool SelectAllTextOnCommit; // 0x481(0x1)
	unsigned char UnknownData_482[0x0006]; // 0x482(0x6)
	struct FSlateColor ForegroundColor; // 0x488(0x28)
	struct FMulticastInlineDelegate OnValueChanged; // 0x4B0(0x10)
	struct FMulticastInlineDelegate OnValueCommitted; // 0x4C0(0x10)
	struct FMulticastInlineDelegate OnBeginSliderMovement; // 0x4D0(0x10)
	struct FMulticastInlineDelegate OnEndSliderMovement; // 0x4E0(0x10)
	unsigned char bOverride_MinValue : 1; // 0x4F0(0x1)
	unsigned char bOverride_MaxValue : 1; // 0x4F0(0x1)
	unsigned char bOverride_MinSliderValue : 1; // 0x4F0(0x1)
	unsigned char bOverride_MaxSliderValue : 1; // 0x4F0(0x1)
	unsigned char UnknownData_4F0_4 : 4; // 0x4F0(0x1)
	unsigned char UnknownData_4F1[0x0003]; // 0x4F1(0x3)
	float MinValue; // 0x4F4(0x4)
	float MaxValue; // 0x4F8(0x4)
	float MinSliderValue; // 0x4FC(0x4)
	float MaxSliderValue; // 0x500(0x4)
	unsigned char UnknownData_504[0x0014]; // 0x504(0x14)

	void SetValue(float NewValue); // Function UMG.SpinBox.SetValue // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FCD9F0
	void SetMinValue(float NewValue); // Function UMG.SpinBox.SetMinValue // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FCD290
	void SetMinSliderValue(float NewValue); // Function UMG.SpinBox.SetMinSliderValue // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FCD190
	void SetMinFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMinFractionalDigits // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FCD110
	void SetMaxValue(float NewValue); // Function UMG.SpinBox.SetMaxValue // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FCD010
	void SetMaxSliderValue(float NewValue); // Function UMG.SpinBox.SetMaxSliderValue // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FCCF10
	void SetMaxFractionalDigits(int32_t NewValue); // Function UMG.SpinBox.SetMaxFractionalDigits // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FCCE90
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.SpinBox.SetForegroundColor // (Final|Native|Public|BlueprintCallable) // Param Size : 0x28, 0x7FF775FCCB30
	void SetDelta(float NewValue); // Function UMG.SpinBox.SetDelta // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FCC880
	void SetAlwaysUsesDeltaSnap(bool bNewValue); // Function UMG.SpinBox.SetAlwaysUsesDeltaSnap // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FCC4C0
	void OnSpinBoxValueCommittedEvent__DelegateSignature(float InValue, enum class ETextCommit CommitMethod); // DelegateFunction UMG.SpinBox.OnSpinBoxValueCommittedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // Param Size : 0x5, 0x7FF77510D9D0
	void OnSpinBoxValueChangedEvent__DelegateSignature(float InValue); // DelegateFunction UMG.SpinBox.OnSpinBoxValueChangedEvent__DelegateSignature // (MulticastDelegate|Public|Delegate) // Param Size : 0x4, 0x7FF77510D9D0
	void OnSpinBoxBeginSliderMovement__DelegateSignature(); // DelegateFunction UMG.SpinBox.OnSpinBoxBeginSliderMovement__DelegateSignature // (MulticastDelegate|Public|Delegate) // Param Size : 0x0, 0x7FF77510D9D0
	float GetValue(); // Function UMG.SpinBox.GetValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FCC490
	float GetMinValue(); // Function UMG.SpinBox.GetMinValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FCC240
	float GetMinSliderValue(); // Function UMG.SpinBox.GetMinSliderValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FCC210
	int32_t GetMinFractionalDigits(); // Function UMG.SpinBox.GetMinFractionalDigits // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FCC1E0
	float GetMaxValue(); // Function UMG.SpinBox.GetMaxValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FCC1B0
	float GetMaxSliderValue(); // Function UMG.SpinBox.GetMaxSliderValue // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FCC180
	int32_t GetMaxFractionalDigits(); // Function UMG.SpinBox.GetMaxFractionalDigits // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FCC150
	float GetDelta(); // Function UMG.SpinBox.GetDelta // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FCC0C0
	bool GetAlwaysUsesDeltaSnap(); // Function UMG.SpinBox.GetAlwaysUsesDeltaSnap // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FCC090
	void ClearMinValue(); // Function UMG.SpinBox.ClearMinValue // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FCC030
	void ClearMinSliderValue(); // Function UMG.SpinBox.ClearMinSliderValue // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FCC010
	void ClearMaxValue(); // Function UMG.SpinBox.ClearMaxValue // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FCBFF0
	void ClearMaxSliderValue(); // Function UMG.SpinBox.ClearMaxSliderValue // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FCBFD0
};

// Class UMG.TextBinding
// Size : 0x68 (Inherited : 0x60)
struct UTextBinding : UPropertyBinding {
	unsigned char UnknownData_60[0x0008]; // 0x60(0x8)

	struct FText GetTextValue(); // Function UMG.TextBinding.GetTextValue // (Final|Native|Public|Const) // Param Size : 0x18, 0x7FF775FCC3C0
	struct FString GetStringValue(); // Function UMG.TextBinding.GetStringValue // (Final|Native|Public|Const) // Param Size : 0x10, 0x7FF775FCC2A0
};

// Class UMG.TextBlock
// Size : 0x2A0 (Inherited : 0x128)
struct UTextBlock : UTextLayoutWidget {
	struct FText Text; // 0x128(0x18)
	struct FDelegate TextDelegate; // 0x140(0x10)
	struct FSlateColor ColorAndOpacity; // 0x150(0x28)
	struct FDelegate ColorAndOpacityDelegate; // 0x178(0x10)
	struct FSlateFontInfo Font; // 0x188(0x50)
	struct FSlateBrush StrikeBrush; // 0x1D8(0x88)
	struct FVector2D ShadowOffset; // 0x260(0x8)
	struct FLinearColor ShadowColorAndOpacity; // 0x268(0x10)
	struct FDelegate ShadowColorAndOpacityDelegate; // 0x278(0x10)
	float MinDesiredWidth; // 0x288(0x4)
	bool bWrapWithInvalidationPanel; // 0x28C(0x1)
	bool bAutoWrapText; // 0x28D(0x1)
	bool bSimpleTextMode; // 0x28E(0x1)
	unsigned char UnknownData_28F[0x0011]; // 0x28F(0x11)

	void SetText(struct FText InText); // Function UMG.TextBlock.SetText // (Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FCD890
	void SetStrikeBrush(struct FSlateBrush InStrikeBrush); // Function UMG.TextBlock.SetStrikeBrush // (Final|Native|Public|BlueprintCallable) // Param Size : 0x88, 0x7FF775FCD710
	void SetShadowOffset(struct FVector2D InShadowOffset); // Function UMG.TextBlock.SetShadowOffset // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x8, 0x7FF775FCD490
	void SetShadowColorAndOpacity(struct FLinearColor InShadowColorAndOpacity); // Function UMG.TextBlock.SetShadowColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF775FCD410
	void SetOpacity(float InOpacity); // Function UMG.TextBlock.SetOpacity // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FCD390
	void SetMinDesiredWidth(float InMinDesiredWidth); // Function UMG.TextBlock.SetMinDesiredWidth // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FCD090
	void SetFont(struct FSlateFontInfo InFontInfo); // Function UMG.TextBlock.SetFont // (Final|Native|Public|BlueprintCallable) // Param Size : 0x50, 0x7FF775FCCA00
	void SetColorAndOpacity(struct FSlateColor InColorAndOpacity); // Function UMG.TextBlock.SetColorAndOpacity // (Final|Native|Public|BlueprintCallable) // Param Size : 0x28, 0x7FF775FCC790
	void SetAutoWrapText(bool InAutoTextWrap); // Function UMG.TextBlock.SetAutoWrapText // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FCC700
	struct FText GetText(); // Function UMG.TextBlock.GetText // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x18, 0x7FF775FCC320
	struct UMaterialInstanceDynamic* GetDynamicOutlineMaterial(); // Function UMG.TextBlock.GetDynamicOutlineMaterial // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FCC120
	struct UMaterialInstanceDynamic* GetDynamicFontMaterial(); // Function UMG.TextBlock.GetDynamicFontMaterial // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FCC0F0
};

// Class UMG.Throbber
// Size : 0x1B0 (Inherited : 0x108)
struct UThrobber : UWidget {
	int32_t NumberOfPieces; // 0x108(0x4)
	bool bAnimateHorizontally; // 0x10C(0x1)
	bool bAnimateVertically; // 0x10D(0x1)
	bool bAnimateOpacity; // 0x10E(0x1)
	unsigned char UnknownData_10F[0x0001]; // 0x10F(0x1)
	struct USlateBrushAsset* PieceImage; // 0x110(0x8)
	struct FSlateBrush Image; // 0x118(0x88)
	unsigned char UnknownData_1A0[0x0010]; // 0x1A0(0x10)

	void SetNumberOfPieces(int32_t InNumberOfPieces); // Function UMG.Throbber.SetNumberOfPieces // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FCD310
	void SetAnimateVertically(bool bInAnimateVertically); // Function UMG.Throbber.SetAnimateVertically // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FCC670
	void SetAnimateOpacity(bool bInAnimateOpacity); // Function UMG.Throbber.SetAnimateOpacity // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FCC5E0
	void SetAnimateHorizontally(bool bInAnimateHorizontally); // Function UMG.Throbber.SetAnimateHorizontally // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FCC550
};

// Class UMG.TileView
// Size : 0x388 (Inherited : 0x368)
struct UTileView : UListView {
	float EntryHeight; // 0x368(0x4)
	float EntryWidth; // 0x36C(0x4)
	enum class EListItemAlignment TileAlignment; // 0x370(0x1)
	bool bWrapHorizontalNavigation; // 0x371(0x1)
	unsigned char UnknownData_372[0x0016]; // 0x372(0x16)

	void SetEntryWidth(float NewWidth); // Function UMG.TileView.SetEntryWidth // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FCC980
	void SetEntryHeight(float NewHeight); // Function UMG.TileView.SetEntryHeight // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FCC900
};

// Class UMG.TreeView
// Size : 0x3C0 (Inherited : 0x368)
struct UTreeView : UListView {
	unsigned char UnknownData_368[0x0010]; // 0x368(0x10)
	struct FDelegate BP_OnGetItemChildren; // 0x378(0x10)
	struct FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x388(0x10)
	unsigned char UnknownData_398[0x0028]; // 0x398(0x28)

	void SetItemExpansion(struct UObject* Item, bool bExpandItem); // Function UMG.TreeView.SetItemExpansion // (Final|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF775FCCCB0
	void ExpandAll(); // Function UMG.TreeView.ExpandAll // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FCC070
	void CollapseAll(); // Function UMG.TreeView.CollapseAll // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FCC050
};

// Class UMG.UMGSequencePlayer
// Size : 0x7A8 (Inherited : 0x28)
struct UUMGSequencePlayer : UObject {
	unsigned char UnknownData_28[0x03E0]; // 0x28(0x3E0)
	struct UWidgetAnimation* Animation; // 0x408(0x8)
	unsigned char UnknownData_410[0x0398]; // 0x410(0x398)

	void SetUserTag(struct FName InUserTag); // Function UMG.UMGSequencePlayer.SetUserTag // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FD3710
	struct FName GetUserTag(); // Function UMG.UMGSequencePlayer.GetUserTag // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FD2010
};

// Class UMG.UniformGridPanel
// Size : 0x148 (Inherited : 0x120)
struct UUniformGridPanel : UPanelWidget {
	struct FMargin SlotPadding; // 0x120(0x10)
	float MinDesiredSlotWidth; // 0x130(0x4)
	float MinDesiredSlotHeight; // 0x134(0x4)
	unsigned char UnknownData_138[0x0010]; // 0x138(0x10)

	void SetSlotPadding(struct FMargin InSlotPadding); // Function UMG.UniformGridPanel.SetSlotPadding // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FD3680
	void SetMinDesiredSlotWidth(float InMinDesiredSlotWidth); // Function UMG.UniformGridPanel.SetMinDesiredSlotWidth // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FD3220
	void SetMinDesiredSlotHeight(float InMinDesiredSlotHeight); // Function UMG.UniformGridPanel.SetMinDesiredSlotHeight // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FD31A0
	struct UUniformGridSlot* AddChildToUniformGrid(struct UWidget* Content, int32_t InRow, int32_t InColumn); // Function UMG.UniformGridPanel.AddChildToUniformGrid // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FD1930
};

// Class UMG.UniformGridSlot
// Size : 0x50 (Inherited : 0x38)
struct UUniformGridSlot : UPanelSlot {
	enum class EHorizontalAlignment HorizontalAlignment; // 0x38(0x1)
	enum class EVerticalAlignment VerticalAlignment; // 0x39(0x1)
	unsigned char UnknownData_3A[0x0002]; // 0x3A(0x2)
	int32_t Row; // 0x3C(0x4)
	int32_t Column; // 0x40(0x4)
	unsigned char UnknownData_44[0x000C]; // 0x44(0xC)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.UniformGridSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FD3790
	void SetRow(int32_t InRow); // Function UMG.UniformGridSlot.SetRow // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FD3600
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.UniformGridSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FD3010
	void SetColumn(int32_t InColumn); // Function UMG.UniformGridSlot.SetColumn // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FD2E20
};

// Class UMG.UserWidget
// Size : 0x230 (Inherited : 0x108)
struct UUserWidget : UWidget {
	unsigned char UnknownData_108[0x0008]; // 0x108(0x8)
	struct FLinearColor ColorAndOpacity; // 0x110(0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x120(0x10)
	struct FSlateColor ForegroundColor; // 0x130(0x28)
	struct FDelegate ForegroundColorDelegate; // 0x158(0x10)
	struct FMargin Padding; // 0x168(0x10)
	struct TArray<struct UUMGSequencePlayer*> ActiveSequencePlayers; // 0x178(0x10)
	struct TArray<struct UUMGSequencePlayer*> StoppedSequencePlayers; // 0x188(0x10)
	struct TArray<struct FNamedSlotBinding> NamedSlotBindings; // 0x198(0x10)
	struct UWidgetTree* WidgetTree; // 0x1A8(0x8)
	int32_t Priority; // 0x1B0(0x4)
	unsigned char bSupportsKeyboardFocus : 1; // 0x1B4(0x1)
	unsigned char bIsFocusable : 1; // 0x1B4(0x1)
	unsigned char bStopAction : 1; // 0x1B4(0x1)
	unsigned char bHasScriptImplementedTick : 1; // 0x1B4(0x1)
	unsigned char bHasScriptImplementedPaint : 1; // 0x1B4(0x1)
	unsigned char UnknownData_1B4_5 : 2; // 0x1B4(0x1)
	unsigned char bCookedWidgetTree : 1; // 0x1B4(0x1)
	unsigned char UnknownData_1B5[0x000B]; // 0x1B5(0xB)
	enum class EWidgetTickFrequency TickFrequency; // 0x1C0(0x1)
	unsigned char UnknownData_1C1[0x0007]; // 0x1C1(0x7)
	struct UInputComponent* InputComponent; // 0x1C8(0x8)
	struct TArray<struct FAnimationEventBinding> AnimationCallbacks; // 0x1D0(0x10)
	unsigned char UnknownData_1E0[0x0050]; // 0x1E0(0x50)

	void UnregisterInputComponent(); // Function UMG.UserWidget.UnregisterInputComponent // (Final|Native|Protected|BlueprintCallable) // Param Size : 0x0, 0x7FF775FD3C70
	void UnbindFromAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FD3B90
	void UnbindFromAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.UnbindFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FD3AB0
	void UnbindAllFromAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FD3A30
	void UnbindAllFromAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.UnbindAllFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FD39B0
	void Tick(struct FGeometry MyGeometry, float InDeltaTime); // Function UMG.UserWidget.Tick // (BlueprintCosmetic|Event|Public|BlueprintEvent) // Param Size : 0x3C, 0x7FF77510D9D0
	void StopListeningForInputAction(struct FName ActionName, enum class EInputEvent EventType); // Function UMG.UserWidget.StopListeningForInputAction // (Final|Native|Protected|BlueprintCallable) // Param Size : 0x9, 0x7FF775FD38F0
	void StopListeningForAllInputActions(); // Function UMG.UserWidget.StopListeningForAllInputActions // (Final|Native|Protected|BlueprintCallable) // Param Size : 0x0, 0x7FF775FD38D0
	void StopAnimationsAndLatentActions(); // Function UMG.UserWidget.StopAnimationsAndLatentActions // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FD38B0
	void StopAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.StopAnimation // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FD3830
	void StopAllAnimations(); // Function UMG.UserWidget.StopAllAnimations // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FD3810
	void SetPositionInViewport(struct FVector2D Position, bool bRemoveDPIScale); // Function UMG.UserWidget.SetPositionInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x9, 0x7FF775FD3540
	void SetPlaybackSpeed(struct UWidgetAnimation* InAnimation, float PlaybackSpeed); // Function UMG.UserWidget.SetPlaybackSpeed // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0xC, 0x7FF775FD3470
	void SetPadding(struct FMargin InPadding); // Function UMG.UserWidget.SetPadding // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FD33E0
	void SetOwningPlayer(struct APlayerController* LocalPlayerController); // Function UMG.UserWidget.SetOwningPlayer // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FD3360
	void SetNumLoopsToPlay(struct UWidgetAnimation* InAnimation, int32_t NumLoopsToPlay); // Function UMG.UserWidget.SetNumLoopsToPlay // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0xC, 0x7FF775FD32A0
	void SetInputActionPriority(int32_t NewPriority); // Function UMG.UserWidget.SetInputActionPriority // (Final|Native|Protected|BlueprintCallable) // Param Size : 0x4, 0x7FF775FD3120
	void SetInputActionBlocking(bool bShouldBlock); // Function UMG.UserWidget.SetInputActionBlocking // (Final|Native|Protected|BlueprintCallable) // Param Size : 0x1, 0x7FF775FD3090
	void SetForegroundColor(struct FSlateColor InForegroundColor); // Function UMG.UserWidget.SetForegroundColor // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x28, 0x7FF775FD2F20
	void SetDesiredSizeInViewport(struct FVector2D Size); // Function UMG.UserWidget.SetDesiredSizeInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x8, 0x7FF775FD2EA0
	void SetColorAndOpacity(struct FLinearColor InColorAndOpacity); // Function UMG.UserWidget.SetColorAndOpacity // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF775FD2DA0
	void SetAnchorsInViewport(struct FAnchors Anchors); // Function UMG.UserWidget.SetAnchorsInViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FD2D10
	void SetAlignmentInViewport(struct FVector2D Alignment); // Function UMG.UserWidget.SetAlignmentInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x8, 0x7FF775FD2C90
	void ReverseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.ReverseAnimation // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FD2C10
	void RemoveFromViewport(); // Function UMG.UserWidget.RemoveFromViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FD2BF0
	void RegisterInputComponent(); // Function UMG.UserWidget.RegisterInputComponent // (Final|Native|Protected|BlueprintCallable) // Param Size : 0x0, 0x7FF775FD2BD0
	void PreConstruct(bool IsDesignTime); // Function UMG.UserWidget.PreConstruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // Param Size : 0x1, 0x7FF77510D9D0
	void PlaySound(struct USoundBase* SoundToPlay); // Function UMG.UserWidget.PlaySound // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FD2B50
	struct UUMGSequencePlayer* PlayAnimationTimeRange(struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationTimeRange // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x28, 0x7FF775FD2960
	struct UUMGSequencePlayer* PlayAnimationReverse(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationReverse // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FD2850
	struct UUMGSequencePlayer* PlayAnimationForward(struct UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimationForward // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FD2740
	struct UUMGSequencePlayer* PlayAnimation(struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed, bool bRestoreState); // Function UMG.UserWidget.PlayAnimation // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x28, 0x7FF775FD2580
	float PauseAnimation(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.PauseAnimation // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0xC, 0x7FF775FD24E0
	struct FEventReply OnTouchStarted(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Function UMG.UserWidget.OnTouchStarted // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0x160, 0x7FF77510D9D0
	struct FEventReply OnTouchMoved(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Function UMG.UserWidget.OnTouchMoved // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0x160, 0x7FF77510D9D0
	struct FEventReply OnTouchGesture(struct FGeometry MyGeometry, struct FPointerEvent GestureEvent); // Function UMG.UserWidget.OnTouchGesture // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0x160, 0x7FF77510D9D0
	struct FEventReply OnTouchForceChanged(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Function UMG.UserWidget.OnTouchForceChanged // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0x160, 0x7FF77510D9D0
	struct FEventReply OnTouchEnded(struct FGeometry MyGeometry, struct FPointerEvent InTouchEvent); // Function UMG.UserWidget.OnTouchEnded // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0x160, 0x7FF77510D9D0
	void OnRemovedFromFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnRemovedFromFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // Param Size : 0x8, 0x7FF77510D9D0
	struct FEventReply OnPreviewMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnPreviewMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0x160, 0x7FF77510D9D0
	struct FEventReply OnPreviewKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnPreviewKeyDown // (Event|Public|BlueprintEvent) // Param Size : 0x128, 0x7FF77510D9D0
	void OnPaint(struct FPaintContext Context); // Function UMG.UserWidget.OnPaint // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent|Const) // Param Size : 0x30, 0x7FF77510D9D0
	struct FEventReply OnMouseWheel(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseWheel // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0x160, 0x7FF77510D9D0
	struct FEventReply OnMouseMove(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseMove // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0x160, 0x7FF77510D9D0
	void OnMouseLeave(struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseLeave // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0x70, 0x7FF77510D9D0
	void OnMouseEnter(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseEnter // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0xA8, 0x7FF77510D9D0
	void OnMouseCaptureLost(); // Function UMG.UserWidget.OnMouseCaptureLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // Param Size : 0x0, 0x7FF77510D9D0
	struct FEventReply OnMouseButtonUp(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseButtonUp // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0x160, 0x7FF77510D9D0
	struct FEventReply OnMouseButtonDown(struct FGeometry MyGeometry, struct FPointerEvent MouseEvent); // Function UMG.UserWidget.OnMouseButtonDown // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0x160, 0x7FF77510D9D0
	struct FEventReply OnMouseButtonDoubleClick(struct FGeometry InMyGeometry, struct FPointerEvent InMouseEvent); // Function UMG.UserWidget.OnMouseButtonDoubleClick // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0x160, 0x7FF77510D9D0
	struct FEventReply OnMotionDetected(struct FGeometry MyGeometry, struct FMotionEvent InMotionEvent); // Function UMG.UserWidget.OnMotionDetected // (BlueprintCosmetic|Event|Public|BlueprintEvent) // Param Size : 0x138, 0x7FF77510D9D0
	struct FEventReply OnKeyUp(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyUp // (BlueprintCosmetic|Event|Public|BlueprintEvent) // Param Size : 0x128, 0x7FF77510D9D0
	struct FEventReply OnKeyDown(struct FGeometry MyGeometry, struct FKeyEvent InKeyEvent); // Function UMG.UserWidget.OnKeyDown // (BlueprintCosmetic|Event|Public|BlueprintEvent) // Param Size : 0x128, 0x7FF77510D9D0
	struct FEventReply OnKeyChar(struct FGeometry MyGeometry, struct FCharacterEvent InCharacterEvent); // Function UMG.UserWidget.OnKeyChar // (BlueprintCosmetic|Event|Public|BlueprintEvent) // Param Size : 0x110, 0x7FF77510D9D0
	void OnInitialized(); // Function UMG.UserWidget.OnInitialized // (BlueprintCosmetic|Event|Public|BlueprintEvent) // Param Size : 0x0, 0x7FF77510D9D0
	struct FEventReply OnFocusReceived(struct FGeometry MyGeometry, struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusReceived // (BlueprintCosmetic|Event|Public|BlueprintEvent) // Param Size : 0xF8, 0x7FF77510D9D0
	void OnFocusLost(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnFocusLost // (BlueprintCosmetic|Event|Public|BlueprintEvent) // Param Size : 0x8, 0x7FF77510D9D0
	bool OnDrop(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDrop // (BlueprintCosmetic|Event|Public|BlueprintEvent) // Param Size : 0xB1, 0x7FF77510D9D0
	bool OnDragOver(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragOver // (BlueprintCosmetic|Event|Public|BlueprintEvent) // Param Size : 0xB1, 0x7FF77510D9D0
	void OnDragLeave(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragLeave // (BlueprintCosmetic|Event|Public|BlueprintEvent) // Param Size : 0x78, 0x7FF77510D9D0
	void OnDragEnter(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragEnter // (BlueprintCosmetic|Event|Public|BlueprintEvent) // Param Size : 0xB0, 0x7FF77510D9D0
	void OnDragDetected(struct FGeometry MyGeometry, struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragDetected // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0xB0, 0x7FF77510D9D0
	void OnDragCancelled(struct FPointerEvent PointerEvent, struct UDragDropOperation* Operation); // Function UMG.UserWidget.OnDragCancelled // (BlueprintCosmetic|Event|Public|HasOutParms|BlueprintEvent) // Param Size : 0x78, 0x7FF77510D9D0
	void OnAnimationStarted(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationStarted // (BlueprintCosmetic|Native|Event|Protected|BlueprintEvent) // Param Size : 0x8, 0x7FF775FD2450
	void OnAnimationFinished(struct UWidgetAnimation* Animation); // Function UMG.UserWidget.OnAnimationFinished // (BlueprintCosmetic|Native|Event|Protected|BlueprintEvent) // Param Size : 0x8, 0x7FF775FD23C0
	struct FEventReply OnAnalogValueChanged(struct FGeometry MyGeometry, struct FAnalogInputEvent InAnalogInputEvent); // Function UMG.UserWidget.OnAnalogValueChanged // (Event|Public|BlueprintEvent) // Param Size : 0x130, 0x7FF77510D9D0
	void OnAddedToFocusPath(struct FFocusEvent InFocusEvent); // Function UMG.UserWidget.OnAddedToFocusPath // (BlueprintCosmetic|Event|Public|BlueprintEvent) // Param Size : 0x8, 0x7FF77510D9D0
	void ListenForInputAction(struct FName ActionName, enum class EInputEvent EventType, bool bConsume, struct FDelegate Callback); // Function UMG.UserWidget.ListenForInputAction // (Final|Native|Protected|BlueprintCallable) // Param Size : 0x1C, 0x7FF775FD2240
	bool IsPlayingAnimation(); // Function UMG.UserWidget.IsPlayingAnimation // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FD2210
	bool IsListeningForInputAction(struct FName ActionName); // Function UMG.UserWidget.IsListeningForInputAction // (Final|Native|Protected|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x9, 0x7FF775FD2180
	bool IsInViewport(); // Function UMG.UserWidget.IsInViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FD1FB0
	bool IsInteractable(); // Function UMG.UserWidget.IsInteractable // (BlueprintCosmetic|Event|Public|BlueprintEvent|Const) // Param Size : 0x1, 0x7FF77510D9D0
	bool IsAnyAnimationPlaying(); // Function UMG.UserWidget.IsAnyAnimationPlaying // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FD2150
	bool IsAnimationPlayingForward(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlayingForward // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x9, 0x7FF775FD20C0
	bool IsAnimationPlaying(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.IsAnimationPlaying // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x9, 0x7FF775FD2030
	struct APawn* GetOwningPlayerPawn(); // Function UMG.UserWidget.GetOwningPlayerPawn // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FD1FE0
	bool GetIsVisible(); // Function UMG.UserWidget.GetIsVisible // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FD1FB0
	float GetAnimationCurrentTime(struct UWidgetAnimation* InAnimation); // Function UMG.UserWidget.GetAnimationCurrentTime // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0xC, 0x7FF775FD1F10
	struct FAnchors GetAnchorsInViewport(); // Function UMG.UserWidget.GetAnchorsInViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF775FD1ED0
	struct FVector2D GetAlignmentInViewport(); // Function UMG.UserWidget.GetAlignmentInViewport // (Final|BlueprintCosmetic|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FD1E90
	void Destruct(); // Function UMG.UserWidget.Destruct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // Param Size : 0x0, 0x7FF77510D9D0
	void Construct(); // Function UMG.UserWidget.Construct // (BlueprintCosmetic|Event|Public|BlueprintEvent) // Param Size : 0x0, 0x7FF77510D9D0
	void CancelLatentActions(); // Function UMG.UserWidget.CancelLatentActions // (Final|Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FD1E70
	void BindToAnimationStarted(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationStarted // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FD1D90
	void BindToAnimationFinished(struct UWidgetAnimation* Animation, struct FDelegate Delegate); // Function UMG.UserWidget.BindToAnimationFinished // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FD1CB0
	void BindToAnimationEvent(struct UWidgetAnimation* Animation, struct FDelegate Delegate, enum class EWidgetAnimationEvent AnimationEvent, struct FName UserTag); // Function UMG.UserWidget.BindToAnimationEvent // (Final|Native|Public|BlueprintCallable) // Param Size : 0x24, 0x7FF775FD1B40
	void AddToViewport(int32_t ZOrder); // Function UMG.UserWidget.AddToViewport // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FD1AC0
	bool AddToPlayerScreen(int32_t ZOrder); // Function UMG.UserWidget.AddToPlayerScreen // (Final|BlueprintCosmetic|Native|Public|BlueprintCallable) // Param Size : 0x5, 0x7FF775FD1A30
};

// Class UMG.VerticalBox
// Size : 0x130 (Inherited : 0x120)
struct UVerticalBox : UPanelWidget {
	unsigned char UnknownData_120[0x0010]; // 0x120(0x10)

	struct UVerticalBoxSlot* AddChildToVerticalBox(struct UWidget* Content); // Function UMG.VerticalBox.AddChildToVerticalBox // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FD58F0
};

// Class UMG.VerticalBoxSlot
// Size : 0x60 (Inherited : 0x38)
struct UVerticalBoxSlot : UPanelSlot {
	struct FSlateChildSize Size; // 0x38(0x8)
	struct FMargin Padding; // 0x40(0x10)
	unsigned char UnknownData_50[0x0008]; // 0x50(0x8)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x58(0x1)
	enum class EVerticalAlignment VerticalAlignment; // 0x59(0x1)
	unsigned char UnknownData_5A[0x0006]; // 0x5A(0x6)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.VerticalBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FD7140
	void SetSize(struct FSlateChildSize InSize); // Function UMG.VerticalBoxSlot.SetSize // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FD6EE0
	void SetPadding(struct FMargin InPadding); // Function UMG.VerticalBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FD6A70
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.VerticalBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FD64F0
};

// Class UMG.Viewport
// Size : 0x148 (Inherited : 0x120)
struct UViewport : UContentWidget {
	struct FLinearColor BackgroundColor; // 0x120(0x10)
	unsigned char UnknownData_130[0x0018]; // 0x130(0x18)

	struct AActor* Spawn(class AActor* ActorClass); // Function UMG.Viewport.Spawn // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FD7360
	void SetViewRotation(struct FRotator Rotation); // Function UMG.Viewport.SetViewRotation // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0xC, 0x7FF775FD7250
	void SetViewLocation(struct FVector Location); // Function UMG.Viewport.SetViewLocation // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0xC, 0x7FF775FD71C0
	struct FRotator GetViewRotation(); // Function UMG.Viewport.GetViewRotation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0xC, 0x7FF775FD5F40
	struct UWorld* GetViewportWorld(); // Function UMG.Viewport.GetViewportWorld // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FD5F80
	struct FVector GetViewLocation(); // Function UMG.Viewport.GetViewLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0xC, 0x7FF775FD5F00
};

// Class UMG.VisibilityBinding
// Size : 0x60 (Inherited : 0x60)
struct UVisibilityBinding : UPropertyBinding {

	enum class ESlateVisibility GetValue(); // Function UMG.VisibilityBinding.GetValue // (Final|Native|Public|Const) // Param Size : 0x1, 0x7FF775FD5ED0
};

// Class UMG.WidgetAnimation
// Size : 0x378 (Inherited : 0x348)
struct UWidgetAnimation : UMovieSceneSequence {
	struct UMovieScene* MovieScene; // 0x348(0x8)
	struct TArray<struct FWidgetAnimationBinding> AnimationBindings; // 0x350(0x10)
	bool bLegacyFinishOnStop; // 0x360(0x1)
	unsigned char UnknownData_361[0x0007]; // 0x361(0x7)
	struct FString DisplayLabel; // 0x368(0x10)

	void UnbindFromAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FD75D0
	void UnbindFromAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.UnbindFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FD74F0
	void UnbindAllFromAnimationStarted(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationStarted // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FD7470
	void UnbindAllFromAnimationFinished(struct UUserWidget* Widget); // Function UMG.WidgetAnimation.UnbindAllFromAnimationFinished // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FD73F0
	float GetStartTime(); // Function UMG.WidgetAnimation.GetStartTime // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FD5E60
	float GetEndTime(); // Function UMG.WidgetAnimation.GetEndTime // (Final|RequiredAPI|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FD5CA0
	void BindToAnimationStarted(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationStarted // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FD5A60
	void BindToAnimationFinished(struct UUserWidget* Widget, struct FDelegate Delegate); // Function UMG.WidgetAnimation.BindToAnimationFinished // (Final|Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FD5980
};

// Class UMG.WidgetAnimationDelegateBinding
// Size : 0x38 (Inherited : 0x28)
struct UWidgetAnimationDelegateBinding : UDynamicBlueprintBinding {
	struct TArray<struct FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x28(0x10)
};

// Class UMG.WidgetAnimationPlayCallbackProxy
// Size : 0x48 (Inherited : 0x28)
struct UWidgetAnimationPlayCallbackProxy : UObject {
	struct FMulticastInlineDelegate Finished; // 0x28(0x10)
	unsigned char UnknownData_38[0x0010]; // 0x38(0x10)

	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(struct UUMGSequencePlayer* Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationTimeRangeProxyObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x38, 0x7FF775FD9640
	struct UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(struct UUMGSequencePlayer* Result, struct UUserWidget* Widget, struct UWidgetAnimation* InAnimation, float StartAtTime, int32_t NumLoopsToPlay, enum class EUMGSequencePlayMode PlayMode, float PlaybackSpeed); // Function UMG.WidgetAnimationPlayCallbackProxy.CreatePlayAnimationProxyObject // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x30, 0x7FF775FD9440
};

// Class UMG.WidgetBinding
// Size : 0x60 (Inherited : 0x60)
struct UWidgetBinding : UPropertyBinding {

	struct UWidget* GetValue(); // Function UMG.WidgetBinding.GetValue // (Final|Native|Public|Const) // Param Size : 0x8, 0x7FF775FDB7E0
};

// Class UMG.WidgetBlueprintGeneratedClass
// Size : 0x398 (Inherited : 0x328)
struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	struct UWidgetTree* WidgetTree; // 0x328(0x8)
	unsigned char bAllowTemplate : 1; // 0x330(0x1)
	unsigned char bAllowDynamicCreation : 1; // 0x330(0x1)
	unsigned char bValidTemplate : 1; // 0x330(0x1)
	unsigned char bTemplateInitialized : 1; // 0x330(0x1)
	unsigned char bCookedTemplate : 1; // 0x330(0x1)
	unsigned char bClassRequiresNativeTick : 1; // 0x330(0x1)
	unsigned char UnknownData_330_6 : 2; // 0x330(0x1)
	unsigned char UnknownData_331[0x0007]; // 0x331(0x7)
	struct TArray<struct FDelegateRuntimeBinding> Bindings; // 0x338(0x10)
	struct TArray<struct UWidgetAnimation*> Animations; // 0x348(0x10)
	struct TArray<struct FName> NamedSlots; // 0x358(0x10)
	struct TSoftObjectPtr<struct UUserWidget> TemplateAsset; // 0x368(0x28)
	struct UUserWidget* Template; // 0x390(0x8)
};

// Class UMG.WidgetBlueprintLibrary
// Size : 0x28 (Inherited : 0x28)
struct UWidgetBlueprintLibrary : UBlueprintFunctionLibrary {

	struct FEventReply UnlockMouse(struct FEventReply Reply); // Function UMG.WidgetBlueprintLibrary.UnlockMouse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x170, 0x7FF775FDCE70
	struct FEventReply Unhandled(); // Function UMG.WidgetBlueprintLibrary.Unhandled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0xB8, 0x7FF775FDCE00
	void SetWindowTitleBarState(struct UWidget* TitleBarContent, enum class EWindowTitleBarMode Mode, bool bTitleBarDragEnabled, bool bWindowButtonsVisible, bool bTitleBarVisible); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarState // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0xC, 0x7FF775FDCC70
	void SetWindowTitleBarOnCloseClickedDelegate(struct FDelegate Delegate); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarOnCloseClickedDelegate // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FDCBE0
	void SetWindowTitleBarCloseButtonActive(bool bActive); // Function UMG.WidgetBlueprintLibrary.SetWindowTitleBarCloseButtonActive // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FDCB60
	struct FEventReply SetUserFocus(struct FEventReply Reply, struct UWidget* FocusWidget, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.SetUserFocus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x180, 0x7FF775FD8DB0
	struct FEventReply SetMousePosition(struct FEventReply Reply, struct FVector2D NewMousePosition); // Function UMG.WidgetBlueprintLibrary.SetMousePosition // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x178, 0x7FF775FDC9D0
	void SetInputMode_UIOnlyEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode); // Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnlyEx // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF775FDC8E0
	void SetInputMode_UIOnly(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport); // Function UMG.WidgetBlueprintLibrary.SetInputMode_UIOnly // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x11, 0x7FF775FDC7E0
	void SetInputMode_GameOnly(struct APlayerController* PlayerController); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameOnly // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FDC770
	void SetInputMode_GameAndUIEx(struct APlayerController* PlayerController, struct UWidget* InWidgetToFocus, enum class EMouseLockMode InMouseLockMode, bool bHideCursorDuringCapture); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUIEx // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x12, 0x7FF775FDC630
	void SetInputMode_GameAndUI(struct APlayerController* Target, struct UWidget* InWidgetToFocus, bool bLockMouseToViewport, bool bHideCursorDuringCapture); // Function UMG.WidgetBlueprintLibrary.SetInputMode_GameAndUI // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x12, 0x7FF775FDC4F0
	bool SetHardwareCursor(struct UObject* WorldContextObject, enum class EMouseCursor CursorShape, struct FName CursorName, struct FVector2D HotSpot); // Function UMG.WidgetBlueprintLibrary.SetHardwareCursor // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x1D, 0x7FF775FDC3C0
	void SetFocusToGameViewport(); // Function UMG.WidgetBlueprintLibrary.SetFocusToGameViewport // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FDC3A0
	void SetColorVisionDeficiencyType(enum class EColorVisionDeficiency Type, float Severity, bool CorrectDeficiency, bool ShowCorrectionWithDeficiency); // Function UMG.WidgetBlueprintLibrary.SetColorVisionDeficiencyType // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0xA, 0x7FF775FDC250
	void SetBrushResourceToTexture(struct FSlateBrush Brush, struct UTexture2D* Texture); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToTexture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x90, 0x7FF775FDC0A0
	void SetBrushResourceToMaterial(struct FSlateBrush Brush, struct UMaterialInterface* Material); // Function UMG.WidgetBlueprintLibrary.SetBrushResourceToMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x90, 0x7FF775FDC0A0
	void RestorePreviousWindowTitleBarState(); // Function UMG.WidgetBlueprintLibrary.RestorePreviousWindowTitleBarState // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FDC080
	struct FEventReply ReleaseMouseCapture(struct FEventReply Reply); // Function UMG.WidgetBlueprintLibrary.ReleaseMouseCapture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x170, 0x7FF775FDBF30
	struct FEventReply ReleaseJoystickCapture(struct FEventReply Reply, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.ReleaseJoystickCapture // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x178, 0x7FF775FD9130
	void OnGameWindowCloseButtonClickedDelegate__DelegateSignature(); // DelegateFunction UMG.WidgetBlueprintLibrary.OnGameWindowCloseButtonClickedDelegate__DelegateSignature // (Public|Delegate) // Param Size : 0x0, 0x7FF77510D9D0
	struct FSlateBrush NoResourceBrush(); // Function UMG.WidgetBlueprintLibrary.NoResourceBrush // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x88, 0x7FF775FDBE80
	struct FSlateBrush MakeBrushFromTexture(struct UTexture2D* Texture, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromTexture // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x98, 0x7FF775FDBCF0
	struct FSlateBrush MakeBrushFromMaterial(struct UMaterialInterface* Material, int32_t Width, int32_t Height); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromMaterial // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x98, 0x7FF775FDBB60
	struct FSlateBrush MakeBrushFromAsset(struct USlateBrushAsset* BrushAsset); // Function UMG.WidgetBlueprintLibrary.MakeBrushFromAsset // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x90, 0x7FF775FDBA50
	struct FEventReply LockMouse(struct FEventReply Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.LockMouse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x178, 0x7FF775FDB8B0
	bool IsDragDropping(); // Function UMG.WidgetBlueprintLibrary.IsDragDropping // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x1, 0x7FF775FDB880
	struct FEventReply Handled(); // Function UMG.WidgetBlueprintLibrary.Handled // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0xB8, 0x7FF775FDB810
	void GetSafeZonePadding(struct UObject* WorldContextObject, struct FVector4 SafePadding, struct FVector2D SafePaddingScale, struct FVector4 SpillOverPadding); // Function UMG.WidgetBlueprintLibrary.GetSafeZonePadding // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x40, 0x7FF775FDB670
	struct FKeyEvent GetKeyEventFromAnalogInputEvent(struct FAnalogInputEvent Event); // Function UMG.WidgetBlueprintLibrary.GetKeyEventFromAnalogInputEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x78, 0x7FF775FDB4F0
	struct FInputEvent GetInputEventFromPointerEvent(struct FPointerEvent Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromPointerEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x88, 0x7FF775FDB3A0
	struct FInputEvent GetInputEventFromNavigationEvent(struct FNavigationEvent Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromNavigationEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x38, 0x7FF775FDB2C0
	struct FInputEvent GetInputEventFromKeyEvent(struct FKeyEvent Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromKeyEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x50, 0x7FF775FDB1A0
	struct FInputEvent GetInputEventFromCharacterEvent(struct FCharacterEvent Event); // Function UMG.WidgetBlueprintLibrary.GetInputEventFromCharacterEvent // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x38, 0x7FF775FDB0C0
	struct UMaterialInstanceDynamic* GetDynamicMaterial(struct FSlateBrush Brush); // Function UMG.WidgetBlueprintLibrary.GetDynamicMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x90, 0x7FF775FDAF40
	struct UDragDropOperation* GetDragDroppingContent(); // Function UMG.WidgetBlueprintLibrary.GetDragDroppingContent // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x8, 0x7FF775FDAF10
	struct UTexture2D* GetBrushResourceAsTexture2D(struct FSlateBrush Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsTexture2D // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x90, 0x7FF775FDAD90
	struct UMaterialInterface* GetBrushResourceAsMaterial(struct FSlateBrush Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResourceAsMaterial // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x90, 0x7FF775FDAC10
	struct UObject* GetBrushResource(struct FSlateBrush Brush); // Function UMG.WidgetBlueprintLibrary.GetBrushResource // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x90, 0x7FF775FDAA90
	void GetAllWidgetsWithInterface(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*> FoundWidgets, class UInterface* Interface, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsWithInterface // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x21, 0x7FF775FDA930
	void GetAllWidgetsOfClass(struct UObject* WorldContextObject, struct TArray<struct UUserWidget*> FoundWidgets, class UUserWidget* WidgetClass, bool TopLevelOnly); // Function UMG.WidgetBlueprintLibrary.GetAllWidgetsOfClass // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x21, 0x7FF775FDA7D0
	struct FEventReply EndDragDrop(struct FEventReply Reply); // Function UMG.WidgetBlueprintLibrary.EndDragDrop // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x170, 0x7FF775FDA680
	void DrawTextFormatted(struct FPaintContext Context, struct FText Text, struct FVector2D Position, struct UFont* Font, int32_t FontSize, struct FName FontTypeFace, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawTextFormatted // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x74, 0x7FF775FDA420
	void DrawText(struct FPaintContext Context, struct FString inString, struct FVector2D Position, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawText // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x58, 0x7FF775FDA2A0
	void DrawLines(struct FPaintContext Context, struct TArray<struct FVector2D> Points, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawLines // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x58, 0x7FF775FDA0D0
	void DrawLine(struct FPaintContext Context, struct FVector2D PositionA, struct FVector2D PositionB, struct FLinearColor Tint, bool bAntiAlias, float Thickness); // Function UMG.WidgetBlueprintLibrary.DrawLine // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x58, 0x7FF775FD9ED0
	void DrawBox(struct FPaintContext Context, struct FVector2D Position, struct FVector2D Size, struct USlateBrushAsset* Brush, struct FLinearColor Tint); // Function UMG.WidgetBlueprintLibrary.DrawBox // (Final|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x58, 0x7FF775FD9D20
	void DismissAllMenus(); // Function UMG.WidgetBlueprintLibrary.DismissAllMenus // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FD9D00
	struct FEventReply DetectDragIfPressed(struct FPointerEvent PointerEvent, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDragIfPressed // (Final|Native|Static|Public|HasOutParms|BlueprintCallable) // Param Size : 0x148, 0x7FF775FD9AB0
	struct FEventReply DetectDrag(struct FEventReply Reply, struct UWidget* WidgetDetectingDrag, struct FKey DragKey); // Function UMG.WidgetBlueprintLibrary.DetectDrag // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x190, 0x7FF775FD9880
	struct UDragDropOperation* CreateDragDropOperation(class UDragDropOperation* OperationClass); // Function UMG.WidgetBlueprintLibrary.CreateDragDropOperation // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FD93C0
	struct UUserWidget* Create(struct UObject* WorldContextObject, class UUserWidget* WidgetType, struct APlayerController* OwningPlayer); // Function UMG.WidgetBlueprintLibrary.Create // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x20, 0x7FF775FD92D0
	struct FEventReply ClearUserFocus(struct FEventReply Reply, bool bInAllUsers); // Function UMG.WidgetBlueprintLibrary.ClearUserFocus // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x178, 0x7FF775FD9130
	struct FEventReply CaptureMouse(struct FEventReply Reply, struct UWidget* CapturingWidget); // Function UMG.WidgetBlueprintLibrary.CaptureMouse // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x178, 0x7FF775FD8F90
	struct FEventReply CaptureJoystick(struct FEventReply Reply, struct UWidget* CapturingWidget, bool bInAllJoysticks); // Function UMG.WidgetBlueprintLibrary.CaptureJoystick // (Final|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x180, 0x7FF775FD8DB0
	void CancelDragDrop(); // Function UMG.WidgetBlueprintLibrary.CancelDragDrop // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FD8D90
};

// Class UMG.WidgetComponent
// Size : 0x550 (Inherited : 0x430)
struct UWidgetComponent : UMeshComponent {
	enum class EWidgetSpace Space; // 0x430(0x1)
	enum class EWidgetTimingPolicy TimingPolicy; // 0x431(0x1)
	unsigned char UnknownData_432[0x0006]; // 0x432(0x6)
	class UUserWidget* WidgetClass; // 0x438(0x8)
	struct FIntPoint DrawSize; // 0x440(0x8)
	bool bManuallyRedraw; // 0x448(0x1)
	bool bRedrawRequested; // 0x449(0x1)
	unsigned char UnknownData_44A[0x0002]; // 0x44A(0x2)
	float RedrawTime; // 0x44C(0x4)
	unsigned char UnknownData_450[0x0008]; // 0x450(0x8)
	struct FIntPoint CurrentDrawSize; // 0x458(0x8)
	bool bDrawAtDesiredSize; // 0x460(0x1)
	unsigned char UnknownData_461[0x0003]; // 0x461(0x3)
	struct FVector2D Pivot; // 0x464(0x8)
	bool bReceiveHardwareInput; // 0x46C(0x1)
	bool bWindowFocusable; // 0x46D(0x1)
	enum class EWindowVisibility WindowVisibility; // 0x46E(0x1)
	bool bApplyGammaCorrection; // 0x46F(0x1)
	struct ULocalPlayer* OwnerPlayer; // 0x470(0x8)
	struct FLinearColor BackgroundColor; // 0x478(0x10)
	struct FLinearColor TintColorAndOpacity; // 0x488(0x10)
	float OpacityFromTexture; // 0x498(0x4)
	enum class EWidgetBlendMode BlendMode; // 0x49C(0x1)
	bool bIsTwoSided; // 0x49D(0x1)
	bool TickWhenOffscreen; // 0x49E(0x1)
	unsigned char UnknownData_49F[0x0001]; // 0x49F(0x1)
	struct UUserWidget* Widget; // 0x4A0(0x8)
	unsigned char UnknownData_4A8[0x0020]; // 0x4A8(0x20)
	struct UBodySetup* BodySetup; // 0x4C8(0x8)
	struct UMaterialInterface* TranslucentMaterial; // 0x4D0(0x8)
	struct UMaterialInterface* TranslucentMaterial_OneSided; // 0x4D8(0x8)
	struct UMaterialInterface* OpaqueMaterial; // 0x4E0(0x8)
	struct UMaterialInterface* OpaqueMaterial_OneSided; // 0x4E8(0x8)
	struct UMaterialInterface* MaskedMaterial; // 0x4F0(0x8)
	struct UMaterialInterface* MaskedMaterial_OneSided; // 0x4F8(0x8)
	struct UTextureRenderTarget2D* RenderTarget; // 0x500(0x8)
	struct UMaterialInstanceDynamic* MaterialInstance; // 0x508(0x8)
	bool bAddedToScreen; // 0x510(0x1)
	bool bEditTimeUsable; // 0x511(0x1)
	unsigned char UnknownData_512[0x0002]; // 0x512(0x2)
	struct FName SharedLayerName; // 0x514(0x8)
	int32_t LayerZOrder; // 0x51C(0x4)
	enum class EWidgetGeometryMode GeometryMode; // 0x520(0x1)
	unsigned char UnknownData_521[0x0003]; // 0x521(0x3)
	float CylinderArcAngle; // 0x524(0x4)
	unsigned char UnknownData_528[0x0028]; // 0x528(0x28)

	void SetWindowVisibility(enum class EWindowVisibility InVisibility); // Function UMG.WidgetComponent.SetWindowVisibility // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FE0420
	void SetWindowFocusable(bool bInWindowFocusable); // Function UMG.WidgetComponent.SetWindowFocusable // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FE0390
	void SetWidgetSpace(enum class EWidgetSpace NewSpace); // Function UMG.WidgetComponent.SetWidgetSpace // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FE0310
	void SetWidget(struct UUserWidget* Widget); // Function UMG.WidgetComponent.SetWidget // (Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FE0280
	void SetTwoSided(bool bWantTwoSided); // Function UMG.WidgetComponent.SetTwoSided // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FE01F0
	void SetTintColorAndOpacity(struct FLinearColor NewTintColorAndOpacity); // Function UMG.WidgetComponent.SetTintColorAndOpacity // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF775FE0170
	void SetTickWhenOffscreen(bool bWantTickWhenOffscreen); // Function UMG.WidgetComponent.SetTickWhenOffscreen // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FE00F0
	void SetRedrawTime(float InRedrawTime); // Function UMG.WidgetComponent.SetRedrawTime // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FE0070
	void SetPivot(struct FVector2D InPivot); // Function UMG.WidgetComponent.SetPivot // (Final|Native|Public|HasOutParms|HasDefaults|BlueprintCallable) // Param Size : 0x8, 0x7FF775FDFFE0
	void SetOwnerPlayer(struct ULocalPlayer* LocalPlayer); // Function UMG.WidgetComponent.SetOwnerPlayer // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FDFF60
	void SetManuallyRedraw(bool bUseManualRedraw); // Function UMG.WidgetComponent.SetManuallyRedraw // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FDFED0
	void SetGeometryMode(enum class EWidgetGeometryMode InGeometryMode); // Function UMG.WidgetComponent.SetGeometryMode // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FDFE50
	void SetDrawSize(struct FVector2D Size); // Function UMG.WidgetComponent.SetDrawSize // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x8, 0x7FF775FDFD50
	void SetDrawAtDesiredSize(bool bInDrawAtDesiredSize); // Function UMG.WidgetComponent.SetDrawAtDesiredSize // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FDFCD0
	void SetCylinderArcAngle(float InCylinderArcAngle); // Function UMG.WidgetComponent.SetCylinderArcAngle // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FDFC50
	void SetBackgroundColor(struct FLinearColor NewBackgroundColor); // Function UMG.WidgetComponent.SetBackgroundColor // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF775FDFB10
	void RequestRedraw(); // Function UMG.WidgetComponent.RequestRedraw // (Native|Public|BlueprintCallable) // Param Size : 0x0, 0x7FF775FDF930
	enum class EWindowVisibility GetWindowVisiblility(); // Function UMG.WidgetComponent.GetWindowVisiblility // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FDF1B0
	bool GetWindowFocusable(); // Function UMG.WidgetComponent.GetWindowFocusable // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FDF190
	enum class EWidgetSpace GetWidgetSpace(); // Function UMG.WidgetComponent.GetWidgetSpace // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FDF170
	struct UUserWidget* GetUserWidgetObject(); // Function UMG.WidgetComponent.GetUserWidgetObject // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FDEF70
	bool GetTwoSided(); // Function UMG.WidgetComponent.GetTwoSided // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FDEF50
	bool GetTickWhenOffscreen(); // Function UMG.WidgetComponent.GetTickWhenOffscreen // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FDEF30
	struct UTextureRenderTarget2D* GetRenderTarget(); // Function UMG.WidgetComponent.GetRenderTarget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FDEF00
	float GetRedrawTime(); // Function UMG.WidgetComponent.GetRedrawTime // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FDEEE0
	struct FVector2D GetPivot(); // Function UMG.WidgetComponent.GetPivot // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FDEE00
	struct ULocalPlayer* GetOwnerPlayer(); // Function UMG.WidgetComponent.GetOwnerPlayer // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FDEDD0
	struct UMaterialInstanceDynamic* GetMaterialInstance(); // Function UMG.WidgetComponent.GetMaterialInstance // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FDEBB0
	bool GetManuallyRedraw(); // Function UMG.WidgetComponent.GetManuallyRedraw // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775BBA4E0
	enum class EWidgetGeometryMode GetGeometryMode(); // Function UMG.WidgetComponent.GetGeometryMode // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FDEAE0
	struct FVector2D GetDrawSize(); // Function UMG.WidgetComponent.GetDrawSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FDEAA0
	bool GetDrawAtDesiredSize(); // Function UMG.WidgetComponent.GetDrawAtDesiredSize // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FDEA80
	float GetCylinderArcAngle(); // Function UMG.WidgetComponent.GetCylinderArcAngle // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FDEA60
	struct FVector2D GetCurrentDrawSize(); // Function UMG.WidgetComponent.GetCurrentDrawSize // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FDEA20
};

// Class UMG.WidgetInteractionComponent
// Size : 0x3E0 (Inherited : 0x1F0)
struct UWidgetInteractionComponent : USceneComponent {
	struct FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x1F0(0x10)
	unsigned char UnknownData_200[0x0010]; // 0x200(0x10)
	int32_t VirtualUserIndex; // 0x210(0x4)
	float PointerIndex; // 0x214(0x4)
	enum class ECollisionChannel TraceChannel; // 0x218(0x1)
	unsigned char UnknownData_219[0x0003]; // 0x219(0x3)
	float InteractionDistance; // 0x21C(0x4)
	enum class EWidgetInteractionSource InteractionSource; // 0x220(0x1)
	bool bEnableHitTesting; // 0x221(0x1)
	bool bShowDebug; // 0x222(0x1)
	unsigned char UnknownData_223[0x0001]; // 0x223(0x1)
	struct FLinearColor DebugColor; // 0x224(0x10)
	unsigned char UnknownData_234[0x007C]; // 0x234(0x7C)
	struct FHitResult CustomHitResult; // 0x2B0(0x88)
	struct FVector2D LocalHitLocation; // 0x338(0x8)
	struct FVector2D LastLocalHitLocation; // 0x340(0x8)
	struct UWidgetComponent* HoveredWidgetComponent; // 0x348(0x8)
	struct FHitResult LastHitResult; // 0x350(0x88)
	bool bIsHoveredWidgetInteractable; // 0x3D8(0x1)
	bool bIsHoveredWidgetFocusable; // 0x3D9(0x1)
	bool bIsHoveredWidgetHitTestVisible; // 0x3DA(0x1)
	unsigned char UnknownData_3DB[0x0005]; // 0x3DB(0x5)

	void SetFocus(struct UWidget* FocusWidget); // Function UMG.WidgetInteractionComponent.SetFocus // (Final|Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FDFDD0
	void SetCustomHitResult(struct FHitResult HitResult); // Function UMG.WidgetInteractionComponent.SetCustomHitResult // (Final|Native|Public|HasOutParms|BlueprintCallable) // Param Size : 0x88, 0x7FF775FDFB90
	bool SendKeyChar(struct FString Characters, bool bRepeat); // Function UMG.WidgetInteractionComponent.SendKeyChar // (Native|Public|BlueprintCallable) // Param Size : 0x12, 0x7FF775FDF9D0
	void ScrollWheel(float ScrollDelta); // Function UMG.WidgetInteractionComponent.ScrollWheel // (Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FDF950
	void ReleasePointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleasePointerKey // (Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FDF7E0
	bool ReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.ReleaseKey // (Native|Public|BlueprintCallable) // Param Size : 0x19, 0x7FF775FDF6E0
	void PressPointerKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressPointerKey // (Native|Public|BlueprintCallable) // Param Size : 0x18, 0x7FF775FDF4A0
	bool PressKey(struct FKey Key, bool bRepeat); // Function UMG.WidgetInteractionComponent.PressKey // (Native|Public|BlueprintCallable) // Param Size : 0x1A, 0x7FF775FDF360
	bool PressAndReleaseKey(struct FKey Key); // Function UMG.WidgetInteractionComponent.PressAndReleaseKey // (Native|Public|BlueprintCallable) // Param Size : 0x19, 0x7FF775FDF260
	bool IsOverInteractableWidget(); // Function UMG.WidgetInteractionComponent.IsOverInteractableWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FDF230
	bool IsOverHitTestVisibleWidget(); // Function UMG.WidgetInteractionComponent.IsOverHitTestVisibleWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FDF200
	bool IsOverFocusableWidget(); // Function UMG.WidgetInteractionComponent.IsOverFocusableWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x1, 0x7FF775FDF1D0
	struct FHitResult GetLastHitResult(); // Function UMG.WidgetInteractionComponent.GetLastHitResult // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x88, 0x7FF775FDEB30
	struct UWidgetComponent* GetHoveredWidgetComponent(); // Function UMG.WidgetInteractionComponent.GetHoveredWidgetComponent // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FDEB00
	struct FVector2D Get2DHitLocation(); // Function UMG.WidgetInteractionComponent.Get2DHitLocation // (Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FDE9E0
};

// Class UMG.WidgetLayoutLibrary
// Size : 0x28 (Inherited : 0x28)
struct UWidgetLayoutLibrary : UBlueprintFunctionLibrary {

	struct UWrapBoxSlot* SlotAsWrapBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWrapBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF775FE0AA0
	struct UWidgetSwitcherSlot* SlotAsWidgetSwitcherSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsWidgetSwitcherSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF775FE0A20
	struct UVerticalBoxSlot* SlotAsVerticalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsVerticalBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF775FE09A0
	struct UUniformGridSlot* SlotAsUniformGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsUniformGridSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF775FE0920
	struct USizeBoxSlot* SlotAsSizeBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsSizeBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF775FE08A0
	struct UScrollBoxSlot* SlotAsScrollBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsScrollBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF775FE0820
	struct UScaleBoxSlot* SlotAsScaleBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsScaleBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF775FE07A0
	struct USafeZoneSlot* SlotAsSafeBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsSafeBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF775FE0720
	struct UOverlaySlot* SlotAsOverlaySlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsOverlaySlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF775FE06A0
	struct UHorizontalBoxSlot* SlotAsHorizontalBoxSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsHorizontalBoxSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF775FE0620
	struct UGridSlot* SlotAsGridSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsGridSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF775FE05A0
	struct UCanvasPanelSlot* SlotAsCanvasSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsCanvasSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF775FE0520
	struct UBorderSlot* SlotAsBorderSlot(struct UWidget* Widget); // Function UMG.WidgetLayoutLibrary.SlotAsBorderSlot // (Final|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF775FE04A0
	void RemoveAllWidgets(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.RemoveAllWidgets // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FDF8C0
	bool ProjectWorldLocationToWidgetPosition(struct APlayerController* PlayerController, struct FVector WorldLocation, struct FVector2D ScreenPosition, bool bPlayerViewportRelative); // Function UMG.WidgetLayoutLibrary.ProjectWorldLocationToWidgetPosition // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x1E, 0x7FF775FDF580
	struct FGeometry GetViewportWidgetGeometry(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportWidgetGeometry // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x40, 0x7FF775FDF0C0
	struct FVector2D GetViewportSize(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportSize // (Final|BlueprintCosmetic|Native|Static|Public|HasDefaults|BlueprintCallable|BlueprintPure) // Param Size : 0x10, 0x7FF775FDF030
	float GetViewportScale(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetViewportScale // (Final|BlueprintCosmetic|Native|Static|Public|BlueprintCallable|BlueprintPure) // Param Size : 0xC, 0x7FF775FDEFA0
	struct FGeometry GetPlayerScreenWidgetGeometry(struct APlayerController* PlayerController); // Function UMG.WidgetLayoutLibrary.GetPlayerScreenWidgetGeometry // (Final|Native|Static|Public|BlueprintCallable) // Param Size : 0x40, 0x7FF775FDEE30
	bool GetMousePositionScaledByDPI(struct APlayerController* Player, float LocationX, float LocationY); // Function UMG.WidgetLayoutLibrary.GetMousePositionScaledByDPI // (Final|BlueprintCosmetic|Native|Static|Public|HasOutParms|BlueprintCallable|BlueprintPure) // Param Size : 0x11, 0x7FF775FDECB0
	struct FVector2D GetMousePositionOnViewport(struct UObject* WorldContextObject); // Function UMG.WidgetLayoutLibrary.GetMousePositionOnViewport // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x10, 0x7FF775FDEC20
	struct FVector2D GetMousePositionOnPlatform(); // Function UMG.WidgetLayoutLibrary.GetMousePositionOnPlatform // (Final|Native|Static|Public|HasDefaults|BlueprintCallable) // Param Size : 0x8, 0x7FF775FDEBE0
};

// Class UMG.WidgetNavigation
// Size : 0x100 (Inherited : 0x28)
struct UWidgetNavigation : UObject {
	struct FWidgetNavigationData Up; // 0x28(0x24)
	struct FWidgetNavigationData Down; // 0x4C(0x24)
	struct FWidgetNavigationData Left; // 0x70(0x24)
	struct FWidgetNavigationData Right; // 0x94(0x24)
	struct FWidgetNavigationData Next; // 0xB8(0x24)
	struct FWidgetNavigationData Previous; // 0xDC(0x24)
};

// Class UMG.WidgetSwitcher
// Size : 0x138 (Inherited : 0x120)
struct UWidgetSwitcher : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x120(0x4)
	unsigned char UnknownData_124[0x0014]; // 0x124(0x14)

	void SetActiveWidgetIndex(int32_t Index); // Function UMG.WidgetSwitcher.SetActiveWidgetIndex // (Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FE1DC0
	void SetActiveWidget(struct UWidget* Widget); // Function UMG.WidgetSwitcher.SetActiveWidget // (Native|Public|BlueprintCallable) // Param Size : 0x8, 0x7FF775FBF3B0
	struct UWidget* GetWidgetAtIndex(int32_t Index); // Function UMG.WidgetSwitcher.GetWidgetAtIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x10, 0x7FF775FE1D30
	int32_t GetNumWidgets(); // Function UMG.WidgetSwitcher.GetNumWidgets // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FE1D00
	int32_t GetActiveWidgetIndex(); // Function UMG.WidgetSwitcher.GetActiveWidgetIndex // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x4, 0x7FF775FE1CD0
	struct UWidget* GetActiveWidget(); // Function UMG.WidgetSwitcher.GetActiveWidget // (Final|Native|Public|BlueprintCallable|BlueprintPure|Const) // Param Size : 0x8, 0x7FF775FE1CA0
};

// Class UMG.WidgetSwitcherSlot
// Size : 0x58 (Inherited : 0x38)
struct UWidgetSwitcherSlot : UPanelSlot {
	unsigned char UnknownData_38[0x0008]; // 0x38(0x8)
	struct FMargin Padding; // 0x40(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x1)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x1)
	unsigned char UnknownData_52[0x0006]; // 0x52(0x6)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WidgetSwitcherSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FE2390
	void SetPadding(struct FMargin InPadding); // Function UMG.WidgetSwitcherSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FC4E10
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WidgetSwitcherSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FE1F60
};

// Class UMG.WidgetTree
// Size : 0x30 (Inherited : 0x28)
struct UWidgetTree : UObject {
	struct UWidget* RootWidget; // 0x28(0x8)
};

// Class UMG.WindowTitleBarArea
// Size : 0x140 (Inherited : 0x120)
struct UWindowTitleBarArea : UContentWidget {
	bool bWindowButtonsEnabled; // 0x120(0x1)
	bool bDoubleClickTogglesFullscreen; // 0x121(0x1)
	unsigned char UnknownData_122[0x001E]; // 0x122(0x1E)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarArea.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FE2410
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarArea.SetPadding // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FE21E0
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WindowTitleBarArea.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FE1FE0
};

// Class UMG.WindowTitleBarAreaSlot
// Size : 0x60 (Inherited : 0x38)
struct UWindowTitleBarAreaSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x48(0x1)
	enum class EVerticalAlignment VerticalAlignment; // 0x49(0x1)
	unsigned char UnknownData_4A[0x0016]; // 0x4A(0x16)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FE2490
	void SetPadding(struct FMargin InPadding); // Function UMG.WindowTitleBarAreaSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FE2270
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WindowTitleBarAreaSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FE2060
};

// Class UMG.WrapBox
// Size : 0x140 (Inherited : 0x120)
struct UWrapBox : UPanelWidget {
	struct FVector2D InnerSlotPadding; // 0x120(0x8)
	float WrapWidth; // 0x128(0x4)
	bool bExplicitWrapWidth; // 0x12C(0x1)
	unsigned char UnknownData_12D[0x0013]; // 0x12D(0x13)

	void SetInnerSlotPadding(struct FVector2D InPadding); // Function UMG.WrapBox.SetInnerSlotPadding // (Final|Native|Public|HasDefaults|BlueprintCallable) // Param Size : 0x8, 0x7FF775FE2160
	struct UWrapBoxSlot* AddChildToWrapBox(struct UWidget* Content); // Function UMG.WrapBox.AddChildToWrapBox // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FE1C10
};

// Class UMG.WrapBoxSlot
// Size : 0x60 (Inherited : 0x38)
struct UWrapBoxSlot : UPanelSlot {
	struct FMargin Padding; // 0x38(0x10)
	bool bFillEmptySpace; // 0x48(0x1)
	unsigned char UnknownData_49[0x0003]; // 0x49(0x3)
	float FillSpanWhenLessThan; // 0x4C(0x4)
	enum class EHorizontalAlignment HorizontalAlignment; // 0x50(0x1)
	enum class EVerticalAlignment VerticalAlignment; // 0x51(0x1)
	unsigned char UnknownData_52[0x000E]; // 0x52(0xE)

	void SetVerticalAlignment(enum class EVerticalAlignment InVerticalAlignment); // Function UMG.WrapBoxSlot.SetVerticalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FE2510
	void SetPadding(struct FMargin InPadding); // Function UMG.WrapBoxSlot.SetPadding // (Final|Native|Public|BlueprintCallable) // Param Size : 0x10, 0x7FF775FE2300
	void SetHorizontalAlignment(enum class EHorizontalAlignment InHorizontalAlignment); // Function UMG.WrapBoxSlot.SetHorizontalAlignment // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FE20E0
	void SetFillSpanWhenLessThan(float InFillSpanWhenLessThan); // Function UMG.WrapBoxSlot.SetFillSpanWhenLessThan // (Final|Native|Public|BlueprintCallable) // Param Size : 0x4, 0x7FF775FE1EE0
	void SetFillEmptySpace(bool InbFillEmptySpace); // Function UMG.WrapBoxSlot.SetFillEmptySpace // (Final|Native|Public|BlueprintCallable) // Param Size : 0x1, 0x7FF775FE1E50
};

