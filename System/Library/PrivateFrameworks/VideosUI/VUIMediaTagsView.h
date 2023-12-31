//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString, UIImage, VUIMediaTagsViewLayout;

__attribute__((visibility("hidden")))
@interface VUIMediaTagsView
{
    _Bool _isSelected;	// 8 = 0x8
    VUIMediaTagsViewLayout *_tagsViewLayout;	// 16 = 0x10
    NSDictionary *_viewsMap;	// 24 = 0x18
    NSArray *_groupedSubviews;	// 32 = 0x20
    double _totalSubviewsWidth;	// 40 = 0x28
    UIImage *_commonSenseLightImage;	// 48 = 0x30
    UIImage *_commonSenseDarkImage;	// 56 = 0x38
}

+ (id)tagsViewWithMetadata:(id)arg1 layout:(id)arg2 existingView:(id)arg3;	// IMP=0x00100000000ffb43
- (void).cxx_destruct;	// IMP=0x00000000001077ac
@property(retain, nonatomic) UIImage *commonSenseDarkImage; // @synthesize commonSenseDarkImage=_commonSenseDarkImage;
@property(retain, nonatomic) UIImage *commonSenseLightImage; // @synthesize commonSenseLightImage=_commonSenseLightImage;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(nonatomic) double totalSubviewsWidth; // @synthesize totalSubviewsWidth=_totalSubviewsWidth;
@property(retain, nonatomic) NSArray *groupedSubviews; // @synthesize groupedSubviews=_groupedSubviews;
@property(copy, nonatomic) NSDictionary *viewsMap; // @synthesize viewsMap=_viewsMap;
@property(readonly, nonatomic) VUIMediaTagsViewLayout *tagsViewLayout; // @synthesize tagsViewLayout=_tagsViewLayout;
- (void)transparencySettingsDidChange;	// IMP=0x000000000010766d
- (void)contrastSettingsDidChange;	// IMP=0x0000000000107614
- (void)_addGenreLabelAndSeparator;	// IMP=0x000000000010749a
- (void)_removeGenreLabelAndSeparator;	// IMP=0x00000000001072d4
- (double)_totalSubviewsWidth;	// IMP=0x000000000010683d
- (void)_removeSeparatorsFromGroupsIfNeeded:(_Bool)arg1;	// IMP=0x00000000001063ec
- (void)_updateAppearanceWithUserInterfaceStyle:(unsigned long long)arg1;	// IMP=0x00000000001063bc
- (void)_updateImageAppearanceWithUserInterfaceStyle:(unsigned long long)arg1;	// IMP=0x0000000000105f1a
- (_Bool)_shouldPutTextOnSeparateLines;	// IMP=0x0000000000105f12
- (id)_newRentalExpirationlabel:(id)arg1 exisitingLabel:(id)arg2;	// IMP=0x0000000000105dc6
- (id)_newTextBadgeViewAsSubview:(id)arg1 layout:(id)arg2 withString:(id)arg3;	// IMP=0x0000000000105cad
- (id)_newImageViewAsSubview:(_Bool)arg1;	// IMP=0x0000000000105bee
- (void)vui_setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x0000000000105b8b
- (_Bool)_shouldApplyTintColor:(id)arg1 forImage:(id)arg2;	// IMP=0x0000000000105a9a
- (id)_newLabelAsSubview:(id)arg1 withAttributedString:(id)arg2;	// IMP=0x00000000001059b7
- (id)_newLabelAsSubview:(id)arg1;	// IMP=0x00000000001058ef
- (id)_firstLabelSubview;	// IMP=0x000000000010578f
- (void)rentalExpirationLabelNeedsRelayout:(id)arg1;	// IMP=0x000000000010577d
- (struct CGSize)intrinsicContentSize;	// IMP=0x0000000000105648
- (void)updateWithMetadata:(id)arg1;	// IMP=0x0000000000103eb1
- (double)bottomMarginWithBaselineMargin:(double)arg1;	// IMP=0x0000000000103dfd
- (double)bottomMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;	// IMP=0x0000000000103d79
- (double)vui_baselineOffsetFromBottom;	// IMP=0x0000000000103d27
- (double)firstBaselineOffsetFromTop;	// IMP=0x0000000000103cd5
- (double)topMarginToLabel:(id)arg1 withBaselineMargin:(double)arg2;	// IMP=0x00000000001039e9
- (double)topMarginWithBaselineMargin:(double)arg1;	// IMP=0x0000000000103694
- (void)_adjustViewsPositionFor:(id)arg1 preferredSize:(struct CGSize)arg2;	// IMP=0x0000000000103171
- (struct CGSize)_layoutSubviewsForSize:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x0000000000100402
- (struct CGSize)vui_layoutSubviews:(struct CGSize)arg1 computationOnly:(_Bool)arg2;	// IMP=0x00000000001002fd
- (void)dealloc;	// IMP=0x0000000000100231
- (id)initWithFrame:(struct CGRect)arg1 layout:(id)arg2;	// IMP=0x00000000000ffc6b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) double vuiBaselineHeight;

@end

