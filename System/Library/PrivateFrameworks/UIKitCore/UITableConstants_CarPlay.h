//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UITableConstants_CarPlay : NSObject
{
}

+ (id)sharedConstants;	// IMP=0x0010000001032c20
- (_Bool)shouldAnimatePropertyInContentViewWithKey:(id)arg1;	// IMP=0x000000000103465f
- (unsigned long long)contentClipCornersForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001034654
- (id)defaultAccessoryBackgroundColorForAccessorySystemType:(long long)arg1 header:(_Bool)arg2 sidebarStyle:(_Bool)arg3 cellConfigurationState:(id)arg4 traitCollection:(id)arg5;	// IMP=0x000000000103464c
- (id)defaultAccessoryTintColorForAccessorySystemType:(long long)arg1 header:(_Bool)arg2 sidebarStyle:(_Bool)arg3 cellConfigurationState:(id)arg4 traitCollection:(id)arg5 inheritedTintColor:(id)arg6;	// IMP=0x00000000010344fd
- (id)defaultImageTintColorForState:(id)arg1;	// IMP=0x00000000010344f5
- (id)defaultImageSymbolConfigurationForTraitCollection:(id)arg1;	// IMP=0x00000000010344ed
- (double)defaultMaskGradientHeightForTableView:(id)arg1;	// IMP=0x00000000010344e4
- (double)defaultFocusedShadowRadiusForTableView:(id)arg1;	// IMP=0x00000000010344db
- (double)defaultFocusedHorizontalOutsetForTableView:(id)arg1;	// IMP=0x00000000010344d2
- (double)defaultAlphaForDraggingCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000010344c4
- (_Bool)reorderingCellWantsShadows;	// IMP=0x00000000010344bc
- (double)defaultAlphaForReorderingCell;	// IMP=0x00000000010344ae
- (id)defaultReorderControlImageForTraitCollection:(id)arg1 withAccessoryBaseColor:(id)arg2 isTracking:(_Bool)arg3;	// IMP=0x000000000103430c
- (struct CGSize)defaultReorderControlSizeForCell:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x0000000001034276
- (double)defaultEditAndUpdateAnimationDuration;	// IMP=0x0000000001034268
- (id)defaultMultiSelectSelectedImageForCellStyle:(long long)arg1 traitCollection:(id)arg2 checkmarkColor:(id)arg3 backgroundColor:(id)arg4;	// IMP=0x000000000103415f
- (id)defaultMultiSelectNotSelectedImageForCellStyle:(long long)arg1 traitCollection:(id)arg2 accessoryBaseColor:(id)arg3;	// IMP=0x0000000001034026
- (id)defaultInsertImageWithTintColor:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x0000000001033fb5
- (id)defaultInsertImageForCell:(id)arg1;	// IMP=0x0000000001033f9f
- (id)defaultDeleteImageWithTintColor:(id)arg1 backgroundColor:(id)arg2;	// IMP=0x0000000001033f2e
- (id)defaultDeleteImageForCell:(id)arg1;	// IMP=0x0000000001033f18
- (struct CGRect)defaultDeleteMinusRectForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001033efa
- (double)defaultSpaceBetweenEditAndReorderControlsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001033ef1
- (double)defaultEditControlPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001033ee3
- (struct CGSize)defaultEditControlSizeForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001033e89
- (id)defaultDetailAccessoryImage;	// IMP=0x0000000001033e69
- (id)defaultFocusedCheckmarkImageForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001033e4e
- (id)defaultCheckmarkImageForCell:(id)arg1;	// IMP=0x0000000001033e33
- (id)defaultFocusedDisclosureImageForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001033dca
- (id)defaultDisclosureImageForCell:(id)arg1 withAccessoryBaseColor:(id)arg2;	// IMP=0x0000000001033db1
- (id)_imageWithName:(id)arg1 accessoryBaseColor:(id)arg2;	// IMP=0x0000000001033cc4
- (id)_defaultAccessoryColorFocused:(_Bool)arg1;	// IMP=0x0000000001033c8b
- (id)defaultFocusedAccessoryColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001033c72
- (id)defaultAccessoryColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001033c59
- (struct _UITableConstantsBackgroundProperties)defaultHeaderFooterBackgroundPropertiesForTableViewStyle:(long long)arg1 cellConfigurationState:(id)arg2 traitCollection:(id)arg3 floating:(_Bool)arg4;	// IMP=0x0000000001033bf2
- (long long)defaultHeaderFooterPinningBehaviorForTableStyle:(long long)arg1;	// IMP=0x0000000001033bea
- (_Bool)useChromelessSectionHeadersAndFootersForTableStyle:(long long)arg1;	// IMP=0x0000000001033be2
- (id)defaultFooterTextColorForTableViewStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x0000000001033ba8
- (id)defaultHeaderTextColorForTableViewStyle:(long long)arg1 focused:(_Bool)arg2;	// IMP=0x0000000001033b6e
- (id)defaultFooterFontForTableViewStyle:(long long)arg1;	// IMP=0x0000000001033b3d
- (id)defaultHeaderFontForTableViewStyle:(long long)arg1;	// IMP=0x0000000001033a9c
- (double)defaultDetailTextLabelFontSizeForCellStyle:(long long)arg1;	// IMP=0x0000000001033a6a
- (id)defaultDetailTextFontForCellStyle:(long long)arg1;	// IMP=0x0000000001033a47
- (id)defaultFocusedDetailTextColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001033a2e
- (id)defaultDetailTextColorForCellStyle:(long long)arg1 traitCollection:(id)arg2 state:(id)arg3;	// IMP=0x0000000001033a15
- (double)defaultTextLabelFontSizeForCellStyle:(long long)arg1;	// IMP=0x00000000010339e8
- (id)defaultTextLabelFontForCellStyle:(long long)arg1;	// IMP=0x00000000010339c5
- (id)defaultFocusedTextColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000010339ac
- (id)defaultSidebarImageTintColorForTraitCollection:(id)arg1 state:(id)arg2 isHeader:(_Bool)arg3 isAccompanied:(_Bool)arg4;	// IMP=0x00000000010339a4
- (id)defaultSidebarTextColorForTraitCollection:(id)arg1 state:(id)arg2 isHeader:(_Bool)arg3 isAccompanied:(_Bool)arg4 isSecondaryText:(_Bool)arg5;	// IMP=0x000000000103398b
- (id)defaultTextColorForCellStyle:(long long)arg1 traitCollection:(id)arg2 tintColor:(id)arg3 state:(id)arg4;	// IMP=0x0000000001033972
- (double)defaultLabelMinimumScaleFactorForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000001033969
- (_Bool)defaultLabelAllowsTighteningForTruncationForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000001033961
- (long long)defaultLabelNumberOfLinesForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000001033959
- (double)defaultPlainHeaderLabelYPositionForTableView:(id)arg1 headerBounds:(struct CGRect)arg2 textRect:(struct CGRect)arg3 isHeader:(_Bool)arg4;	// IMP=0x000000000103393d
- (double)defaultGroupedFooterHeightForTableView:(id)arg1;	// IMP=0x000000000103392f
- (double)defaultGroupedHeaderHeightForTableView:(id)arg1;	// IMP=0x0000000001033921
- (double)defaultPlainFirstSectionHeaderHeightForTableView:(id)arg1;	// IMP=0x00000000010338ed
- (_Bool)shouldUppercaseHeaderFooterTextForTableStyle:(long long)arg1 isHeader:(_Bool)arg2;	// IMP=0x00000000010338de
- (double)_defaultPlainHeaderFooterHeightForTableViewStyle:(long long)arg1;	// IMP=0x0000000001033886
- (double)defaultTrailingCellMarginWidthForTableView:(id)arg1;	// IMP=0x0000000001033878
- (double)defaultLeadingCellMarginWidthForTableView:(id)arg1;	// IMP=0x0000000001033866
- (double)defaultMarginWidthForTableView:(id)arg1;	// IMP=0x00000000010337e7
- (struct UIEdgeInsets)_defaultLayoutMargins;	// IMP=0x00000000010337be
- (_Bool)shouldUseDefaultTableLayoutMarginsAsContentInsets;	// IMP=0x00000000010337b6
- (struct UIEdgeInsets)defaultSectionContentInsetsForTableStyle:(long long)arg1;	// IMP=0x00000000010337a3
- (struct UIEdgeInsets)defaultLayoutMarginsInsideSectionForSize:(struct CGSize)arg1 tableStyle:(long long)arg2;	// IMP=0x000000000103377f
- (struct UIEdgeInsets)defaultTableLayoutMarginsForScreen:(id)arg1 size:(struct CGSize)arg2 tableStyle:(long long)arg3;	// IMP=0x0000000001033760
- (struct UIEdgeInsets)defaultLayoutMarginsForTableView:(id)arg1;	// IMP=0x0000000001033741
- (double)defaultPaddingBetweenHeaderAndRows;	// IMP=0x0000000001033738
- (double)defaultPaddingBetweenRows;	// IMP=0x000000000103372a
- (double)defaultPaddingBetweenRowsForTableStyle:(long long)arg1;	// IMP=0x0000000001033718
- (double)defaultSidebarPaddingAboveSectionHeadersWithFallbackTableStyle:(long long)arg1;	// IMP=0x0000000001033706
- (double)defaultPaddingAboveSectionHeadersForTableStyle:(long long)arg1;	// IMP=0x00000000010336fd
- (double)defaultPaddingAboveFirstSectionHeaderForTableStyle:(long long)arg1;	// IMP=0x00000000010336eb
- (double)defaultIndentationWidthForSidebarStyle:(_Bool)arg1;	// IMP=0x00000000010336dd
- (double)interspaceBetweenInnerAccessoryIdentifier:(id)arg1 outerAccessoryIdentifier:(id)arg2 forCell:(id)arg3 trailingAccessoryGroup:(_Bool)arg4;	// IMP=0x0000000001033589
- (double)defaultCellCornerRadiusForTableViewStyle:(long long)arg1 isSidebarStyle:(_Bool)arg2 isHeaderFooter:(_Bool)arg3 traitCollection:(id)arg4;	// IMP=0x0000000001033580
- (double)defaultDisclosureLayoutWidthForView:(id)arg1;	// IMP=0x0000000001033577
- (double)defaultImageViewSymbolImageLayoutHeightForTraitCollection:(id)arg1;	// IMP=0x000000000103356e
- (double)defaultImageViewSymbolImageAndAccessoryLayoutWidthForSidebar:(_Bool)arg1 traitCollection:(id)arg2;	// IMP=0x0000000001033565
- (double)defaultInterAccessoryPaddingForCell:(id)arg1 trailingAccessoryGroup:(_Bool)arg2;	// IMP=0x0000000001033553
- (double)defaultCellContentTrailingPadding;	// IMP=0x0000000001033541
- (double)defaultCellContentLeadingPaddingForSidebar:(_Bool)arg1;	// IMP=0x000000000103352f
- (double)defaultContentAccessoryPadding;	// IMP=0x0000000001033521
- (double)defaultContentReorderPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001033513
- (double)defaultContentEditPaddingForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001033505
- (_Bool)imageViewOffsetByLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000010334fd
- (struct UIEdgeInsets)headerFooterOffsetFromContentInsetForTableView:(id)arg1;	// IMP=0x00000000010334e3
- (struct UIEdgeInsets)defaultHeaderFooterLayoutMarginsForTableViewStyle:(long long)arg1 isHeader:(_Bool)arg2 isFirstSection:(_Bool)arg3;	// IMP=0x00000000010334b6
- (struct UIEdgeInsets)defaultCellLayoutMarginsForTableStyle:(long long)arg1 cellStyle:(long long)arg2 textLabelFont:(id)arg3 rawLayoutMargins:(struct UIEdgeInsets)arg4;	// IMP=0x000000000103346c
- (struct UIEdgeInsets)defaultLayoutMarginsForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x00000000010332f4
- (double)minimumContentViewHeightForFont:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0000000001033202
- (double)defaultTextToSubtitlePaddingForCellStyle:(long long)arg1;	// IMP=0x00000000010331f4
- (double)defaultImageToTextPaddingForSidebar:(_Bool)arg1;	// IMP=0x00000000010331e6
- (double)defaultSectionFooterHeightForTableView:(id)arg1;	// IMP=0x000000000103312c
- (double)defaultSectionFooterHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;	// IMP=0x0000000001033089
- (double)defaultPaddingAboveFirstSectionWithoutHeaderTableStyle:(long long)arg1;	// IMP=0x000000000103307b
- (double)defaultSectionHeaderHeightForTableView:(id)arg1;	// IMP=0x000000000103306d
- (double)defaultSectionHeaderHeightForTableViewStyle:(long long)arg1 screen:(id)arg2;	// IMP=0x000000000103305f
- (_Bool)defaultRowHeightDependsOnCellStyle;	// IMP=0x0000000001033057
- (double)defaultRowHeightForTableView:(id)arg1;	// IMP=0x0000000001033043
- (double)defaultRowHeightForTableView:(id)arg1 cellStyle:(long long)arg2;	// IMP=0x0000000001033035
- (long long)defaultSeparatorStyleForTableViewStyle:(long long)arg1;	// IMP=0x000000000103302d
- (id)defaultMultiSelectBackgroundColorForCell:(id)arg1 inTableView:(id)arg2;	// IMP=0x0000000001033025
- (struct _UITableConstantsBackgroundProperties)defaultSidebarHeaderBackgroundPropertiesWithState:(id)arg1 traitCollection:(id)arg2;	// IMP=0x0000000001032f34
- (struct _UITableConstantsBackgroundProperties)defaultSidebarCellBackgroundPropertiesWithState:(id)arg1 traitCollection:(id)arg2 isAccompanied:(_Bool)arg3;	// IMP=0x0000000001032e43
- (struct _UITableConstantsBackgroundProperties)defaultCellBackgroundPropertiesForTableViewStyle:(long long)arg1 state:(id)arg2;	// IMP=0x0000000001032d02
- (id)defaultSeparatorVisualEffectForTableViewStyle:(long long)arg1;	// IMP=0x0000000001032cfa
- (id)defaultSidebarPlainMultiSelectSeparatorColor;	// IMP=0x0000000001032cd1
- (id)defaultSeparatorColorForTableViewStyle:(long long)arg1;	// IMP=0x0000000001032cb8
- (id)defaultBackgroundEffectsForTableViewStyle:(long long)arg1;	// IMP=0x0000000001032cb0
- (id)defaultBackgroundColorForTableViewStyle:(long long)arg1;	// IMP=0x0000000001032c76
- (_Bool)supportsUserInterfaceStyles;	// IMP=0x0000000001032c6e
- (id)variantForActive:(_Bool)arg1;	// IMP=0x0000000001032c65
- (id)sidebarVariant;	// IMP=0x0000000001032c5c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

