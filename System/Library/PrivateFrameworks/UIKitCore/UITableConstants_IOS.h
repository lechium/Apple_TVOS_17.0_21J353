//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableConstants_IOS : NSObject
{
}

+ (id)sharedConstants;	// IMP=0x0010000001034b84
- (_Bool)shouldAnimatePropertyInContentViewWithKey:(id)arg1;	// IMP=0x000000000103861a
- (id)defaultAccessoryBackgroundColorForAccessorySystemType:(long long)arg1 header:(_Bool)arg2 sidebarStyle:(_Bool)arg3 cellConfigurationState:(id)arg4 traitCollection:(id)arg5;	// IMP=0x00000000010384e8
- (id)defaultAccessoryTintColorForAccessorySystemType:(long long)arg1 header:(_Bool)arg2 sidebarStyle:(_Bool)arg3 cellConfigurationState:(id)arg4 traitCollection:(id)arg5 inheritedTintColor:(id)arg6;	// IMP=0x00000000010382b3
- (id)defaultImageTintColorForState:(id)arg1;	// IMP=0x00000000010381d7
- (id)defaultImageSymbolConfigurationForTraitCollection:(id)arg1;	// IMP=0x0000000001038128
- (double)defaultMaskGradientHeightForTableView:(id)arg1;	// IMP=0x000000000103811f
- (double)defaultFocusedShadowRadiusForTableView:(id)arg1;	// IMP=0x0000000001038116
- (double)defaultFocusedHorizontalOutsetForTableView:(id)arg1;	// IMP=0x000000000103810d
- (double)defaultAlphaForDraggingCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000010380ff
- (_Bool)reorderingCellWantsShadows;	// IMP=0x00000000010380f7
- (double)defaultAlphaForReorderingCell;	// IMP=0x00000000010380e9
- (id)defaultReorderControlImageForTraitCollection:(id)arg1 withAccessoryBaseColor:(id)arg2 isTracking:(_Bool)arg3;	// IMP=0x0000000001037f21
- (struct CGSize)defaultReorderControlSizeForCell:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x0000000001037e4f
- (double)defaultEditAndUpdateAnimationDuration;	// IMP=0x0000000001037e41
- (id)defaultDetailAccessoryImage;	// IMP=0x0000000001037e21
- (id)defaultMultiSelectSelectedImageForCellStyle:(long long)arg1 traitCollection:(id)arg2 checkmarkColor:(id)arg3 backgroundColor:(id)arg4;	// IMP=0x0000000001037cb4
- (id)defaultMultiSelectNotSelectedImageForCellStyle:(long long)arg1 traitCollection:(id)arg2 accessoryBaseColor:(id)arg3;	// IMP=0x0000000001037bfd
- (id)defaultInsertImageWithTintColor:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x0000000001037a69
- (id)defaultInsertImageForCell:(id)arg1;	// IMP=0x00000000010379fd
- (id)defaultDeleteImageWithTintColor:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x0000000001037869
- (id)defaultDeleteImageForCell:(id)arg1;	// IMP=0x00000000010377fd
- (struct CGRect)defaultDeleteMinusRectForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000010377df
- (double)defaultSpaceBetweenEditAndReorderControlsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000010377d6
- (double)defaultEditControlPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000010377c8
- (struct CGSize)defaultEditControlSizeForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x000000000103776e
- (id)defaultCheckmarkImageForCell:(id)arg1;	// IMP=0x000000000103766a
- (id)defaultOutlineDisclosureImageForView:(id)arg1;	// IMP=0x00000000010375c2
- (id)defaultPopUpMenuIndicatorImageForTraitCollection:(id)arg1;	// IMP=0x00000000010374fd
- (id)defaultDisclosureImageForCell:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x0000000001037429
- (id)_defaultCircleDisclosureImageForTraitCollection:(id)arg1;	// IMP=0x00000000010372d1
- (id)_defaultDisclosureImageForTraitCollection:(id)arg1;	// IMP=0x000000000103720c
- (id)_symbolImageNamed:(id)arg1 withTextStyle:(id)arg2 scale:(long long)arg3;	// IMP=0x0000000001037175
- (id)_accessoryTintColorForAccessoryBaseColor:(id)arg1;	// IMP=0x0000000001037143
- (id)_defaultAccessoryTintColor;	// IMP=0x00000000010370d5
- (struct _UITableConstantsBackgroundProperties)defaultHeaderFooterBackgroundPropertiesForTableViewStyle:(long long)arg1 cellConfigurationState:(id)arg2 traitCollection:(id)arg3 floating:(_Bool)arg4;	// IMP=0x0000000001036f6e
- (long long)defaultHeaderFooterPinningBehaviorForTableStyle:(long long)arg1;	// IMP=0x0000000001036f58
- (_Bool)useChromelessSectionHeadersAndFootersForTableStyle:(long long)arg1;	// IMP=0x0000000001036f25
- (id)defaultFooterTextColorForTableViewStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x0000000001036eae
- (id)defaultHeaderTextColorForTableViewStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x0000000001036e37
- (id)defaultFooterFontForTableViewStyle:(long long)arg1;	// IMP=0x0000000001036db6
- (id)defaultHeaderFontForTableViewStyle:(long long)arg1;	// IMP=0x0000000001036d35
- (id)defaultPlainHeaderFooterFont;	// IMP=0x0000000001036c96
- (double)defaultDetailTextLabelFontSizeForCellStyle:(long long)arg1;	// IMP=0x0000000001036c64
- (id)defaultDetailTextFontForCellStyle:(long long)arg1;	// IMP=0x0000000001036b95
- (id)defaultDetailTextColorForCellStyle:(long long)arg1 traitCollection:(id)arg2 state:(id)arg3;	// IMP=0x0000000001036a81
- (double)defaultTextLabelFontSizeForCellStyle:(long long)arg1;	// IMP=0x0000000001036a54
- (id)defaultTextLabelFontForCellStyle:(long long)arg1;	// IMP=0x00000000010369ba
- (struct NSDirectionalEdgeInsets)defaultInsetGroupedHeaderLayoutMarginsForExtraProminentStyle:(_Bool)arg1;	// IMP=0x000000000103696c
- (id)defaultInsetGroupedHeaderFontForExtraProminentStyle:(_Bool)arg1 secondaryText:(_Bool)arg2;	// IMP=0x0000000001036921
- (id)defaultSidebarHeaderFont;	// IMP=0x00000000010368fe
- (struct UIEdgeInsets)defaultSidebarLayoutMarginsForElementsInsideSection;	// IMP=0x00000000010368e4
- (id)defaultSidebarImageTintColorForTraitCollection:(id)arg1 state:(id)arg2 isHeader:(_Bool)arg3 isAccompanied:(_Bool)arg4;	// IMP=0x0000000001036817
- (id)defaultSidebarTextColorForTraitCollection:(id)arg1 state:(id)arg2 isHeader:(_Bool)arg3 isAccompanied:(_Bool)arg4 isSecondaryText:(_Bool)arg5;	// IMP=0x0000000001036704
- (id)defaultTextColorForCellStyle:(long long)arg1 traitCollection:(id)arg2 tintColor:(id)arg3 state:(id)arg4;	// IMP=0x0000000001036609
- (double)defaultLabelMinimumScaleFactorForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x00000000010365b7
- (_Bool)defaultLabelAllowsTighteningForTruncationForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000001036570
- (long long)defaultLabelNumberOfLinesForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000001036524
- (double)defaultPlainHeaderLabelYPositionForTableView:(id)arg1 headerBounds:(struct CGRect)arg2 textRect:(struct CGRect)arg3 isHeader:(_Bool)arg4;	// IMP=0x0000000001036508
- (double)defaultPlainFirstSectionHeaderHeightForTableView:(id)arg1;	// IMP=0x00000000010364f6
- (_Bool)shouldUppercaseHeaderFooterTextForTableStyle:(long long)arg1 isHeader:(_Bool)arg2;	// IMP=0x00000000010364e7
- (double)defaultTrailingCellMarginWidthForTableView:(id)arg1;	// IMP=0x00000000010364d3
- (double)defaultLeadingCellMarginWidthForTableView:(id)arg1;	// IMP=0x000000000103648e
- (double)defaultMarginWidthForTableView:(id)arg1;	// IMP=0x0000000001036477
- (_Bool)shouldUseDefaultTableLayoutMarginsAsContentInsets;	// IMP=0x000000000103646f
- (struct UIEdgeInsets)defaultSectionContentInsetsForTableStyle:(long long)arg1;	// IMP=0x000000000103645c
- (struct UIEdgeInsets)defaultLayoutMarginsInsideSectionForSize:(struct CGSize)arg1 tableStyle:(long long)arg2;	// IMP=0x0000000001036438
- (struct UIEdgeInsets)defaultTableLayoutMarginsForScreen:(id)arg1 size:(struct CGSize)arg2 tableStyle:(long long)arg3;	// IMP=0x000000000103633b
- (struct UIEdgeInsets)defaultLayoutMarginsForTableView:(id)arg1;	// IMP=0x00000000010362fc
- (double)_defaultMarginWidthForTableView:(id)arg1 canUseLayoutMargins:(_Bool)arg2;	// IMP=0x00000000010360dd
- (double)defaultPaddingBetweenHeaderAndRows;	// IMP=0x00000000010360d4
- (double)defaultPaddingBetweenRows;	// IMP=0x00000000010360cb
- (double)defaultPaddingBetweenRowsForTableStyle:(long long)arg1;	// IMP=0x00000000010360b9
- (double)defaultPaddingAboveFirstSectionWithoutHeaderTableStyle:(long long)arg1;	// IMP=0x00000000010360ab
- (double)defaultSidebarPaddingAboveSectionHeadersWithFallbackTableStyle:(long long)arg1;	// IMP=0x0000000001036099
- (double)defaultPaddingAboveSectionHeadersForTableStyle:(long long)arg1;	// IMP=0x0000000001036075
- (double)defaultPaddingAboveFirstSectionHeaderForTableStyle:(long long)arg1;	// IMP=0x0000000001036063
- (double)defaultIndentationWidthForSidebarStyle:(_Bool)arg1;	// IMP=0x0000000001036047
- (double)interspaceBetweenInnerAccessoryIdentifier:(id)arg1 outerAccessoryIdentifier:(id)arg2 forCell:(id)arg3 trailingAccessoryGroup:(_Bool)arg4;	// IMP=0x0000000001035d67
- (double)defaultCellCornerRadiusForTableViewStyle:(long long)arg1 isSidebarStyle:(_Bool)arg2 isHeaderFooter:(_Bool)arg3 traitCollection:(id)arg4;	// IMP=0x0000000001035d0a
- (double)defaultDisclosureLayoutWidthForView:(id)arg1;	// IMP=0x0000000001035ca3
- (double)defaultImageViewSymbolImageLayoutHeightForTraitCollection:(id)arg1;	// IMP=0x0000000001035c3f
- (double)defaultImageViewSymbolImageAndAccessoryLayoutWidthForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000001035ba1
- (double)defaultInterAccessoryPaddingForCell:(id)arg1 trailingAccessoryGroup:(_Bool)arg2;	// IMP=0x0000000001035b7b
- (double)defaultCellContentTrailingPadding;	// IMP=0x0000000001035b6d
- (double)defaultCellContentLeadingPaddingForSidebar:(_Bool)arg1;	// IMP=0x0000000001035b51
- (double)defaultContentAccessoryPadding;	// IMP=0x0000000001035b26
- (double)defaultContentReorderPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001035afb
- (double)defaultContentEditPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001035ad0
- (_Bool)imageViewOffsetByLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001035ac8
- (struct UIEdgeInsets)defaultHeaderFooterLayoutMarginsForTableViewStyle:(long long)arg1 isHeader:(_Bool)arg2 isFirstSection:(_Bool)arg3;	// IMP=0x0000000001035a35
- (struct UIEdgeInsets)defaultCellLayoutMarginsForTableStyle:(long long)arg1 cellStyle:(long long)arg2 textLabelFont:(id)arg3 rawLayoutMargins:(struct UIEdgeInsets)arg4;	// IMP=0x00000000010359a8
- (struct UIEdgeInsets)defaultLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001035830
- (double)minimumContentViewHeightForFont:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0000000001035748
- (double)defaultTextToSubtitlePaddingForCellStyle:(long long)arg1;	// IMP=0x0000000001035731
- (double)defaultImageToTextPaddingForSidebar:(_Bool)arg1;	// IMP=0x000000000103570f
- (double)defaultSectionFooterHeightForTableView:(id)arg1;	// IMP=0x0000000001035655
- (double)defaultSectionFooterHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;	// IMP=0x0000000001035632
- (double)defaultSectionHeaderHeightForTableView:(id)arg1;	// IMP=0x0000000001035578
- (double)defaultSectionHeaderHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;	// IMP=0x00000000010354ec
- (_Bool)defaultRowHeightDependsOnCellStyle;	// IMP=0x00000000010354e4
- (double)defaultRowHeightForTableView:(id)arg1;	// IMP=0x00000000010354d0
- (double)defaultRowHeightForTableView:(id)arg1 cellStyle:(long long)arg2;	// IMP=0x00000000010354c2
- (id)defaultSeparatorVisualEffectForTableViewStyle:(long long)arg1;	// IMP=0x00000000010354ba
- (long long)defaultSeparatorStyleForTableViewStyle:(long long)arg1;	// IMP=0x00000000010354af
- (id)defaultMultiSelectBackgroundColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x000000000103543c
- (struct _UITableConstantsBackgroundProperties)defaultSidebarHeaderBackgroundPropertiesWithState:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0000000001035367
- (struct _UITableConstantsBackgroundProperties)defaultSidebarCellBackgroundPropertiesWithState:(id)arg1 traitCollection:(id)arg2 isAccompanied:(_Bool)arg3;	// IMP=0x0000000001035006
- (struct _UITableConstantsBackgroundProperties)defaultCellBackgroundPropertiesForTableViewStyle:(long long)arg1 state:(id)arg2;	// IMP=0x0000000001034cf9
- (id)defaultSidebarPlainMultiSelectSeparatorColor;	// IMP=0x0000000001034cd0
- (id)defaultSeparatorColorForTableViewStyle:(long long)arg1;	// IMP=0x0000000001034c5d
- (id)defaultBackgroundEffectsForTableViewStyle:(long long)arg1;	// IMP=0x0000000001034c55
- (id)defaultBackgroundColorForTableViewStyle:(long long)arg1;	// IMP=0x0000000001034c1b
- (_Bool)supportsUserInterfaceStyles;	// IMP=0x0000000001034c13
- (id)variantForActive:(_Bool)arg1;	// IMP=0x0000000001034c0a
- (id)sidebarVariant;	// IMP=0x0000000001034c01

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
