//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class NSArray, NSLayoutConstraint, NSString, VUIAnimatedLabel;

__attribute__((visibility("hidden")))
@interface VUIStackingPosterView : UIView
{
    _Bool _requiresReconfiguration;	// 8 = 0x8
    NSLayoutConstraint *_topAnchorConstraint;	// 16 = 0x10
    NSLayoutConstraint *_bottomAnchorConstraint;	// 24 = 0x18
    NSLayoutConstraint *_topImageConstraint;	// 32 = 0x20
    NSLayoutConstraint *_bottomImageConstraint;	// 40 = 0x28
    double _topAnchorConstant;	// 48 = 0x30
    double _bottomAnchorConstant;	// 56 = 0x38
    double _topImageConstant;	// 64 = 0x40
    double _bottomImageConstant;	// 72 = 0x48
    double _labelWidthExpansionAmount;	// 80 = 0x50
    NSArray *_labelWidthConstraints;	// 88 = 0x58
    _Bool _configuresForCollectionViewCell;	// 96 = 0x60
    _Bool _allowsLabelWidthExpansion;	// 97 = 0x61
    _Bool _usesBaselineMargins;	// 98 = 0x62
    _Bool _isFocusable;	// 99 = 0x63
    UIView *_mainImageComponent;	// 104 = 0x68
    NSArray *_components;	// 112 = 0x70
    UIView *_overlayView;	// 120 = 0x78
    double _mainImageFocusSizeIncrease;	// 128 = 0x80
    long long _mainImageScaleMode;	// 136 = 0x88
    double _mainImageAspectRatio;	// 144 = 0x90
    NSString *_mainImageFocusAlign;	// 152 = 0x98
    NSArray *_filteredComponents;	// 160 = 0xa0
    VUIAnimatedLabel *_animatedLabel;	// 168 = 0xa8
    NSArray *_marqueeLabels;	// 176 = 0xb0
    NSArray *_visibleLabelWidths;	// 184 = 0xb8
    struct CGSize _maxBoundsSize;	// 192 = 0xc0
    struct UIEdgeInsets _mainImageMargin;	// 208 = 0xd0
    struct UIEdgeInsets _padding;	// 240 = 0xf0
    struct _VUIStackingPosterCellMetrics _cellMetrics;	// 272 = 0x110
}

- (void).cxx_destruct;	// IMP=0x000000000008f186
@property(copy, nonatomic) NSArray *visibleLabelWidths; // @synthesize visibleLabelWidths=_visibleLabelWidths;
@property(copy, nonatomic) NSArray *marqueeLabels; // @synthesize marqueeLabels=_marqueeLabels;
@property(retain, nonatomic) VUIAnimatedLabel *animatedLabel; // @synthesize animatedLabel=_animatedLabel;
@property(copy, nonatomic) NSArray *filteredComponents; // @synthesize filteredComponents=_filteredComponents;
@property(nonatomic) _Bool isFocusable; // @synthesize isFocusable=_isFocusable;
@property(nonatomic) _Bool usesBaselineMargins; // @synthesize usesBaselineMargins=_usesBaselineMargins;
@property(nonatomic) _Bool allowsLabelWidthExpansion; // @synthesize allowsLabelWidthExpansion=_allowsLabelWidthExpansion;
@property(nonatomic) struct UIEdgeInsets padding; // @synthesize padding=_padding;
@property(nonatomic) struct UIEdgeInsets mainImageMargin; // @synthesize mainImageMargin=_mainImageMargin;
@property(copy, nonatomic) NSString *mainImageFocusAlign; // @synthesize mainImageFocusAlign=_mainImageFocusAlign;
@property(nonatomic) double mainImageAspectRatio; // @synthesize mainImageAspectRatio=_mainImageAspectRatio;
@property(nonatomic) long long mainImageScaleMode; // @synthesize mainImageScaleMode=_mainImageScaleMode;
@property(nonatomic) double mainImageFocusSizeIncrease; // @synthesize mainImageFocusSizeIncrease=_mainImageFocusSizeIncrease;
@property(nonatomic) struct _VUIStackingPosterCellMetrics cellMetrics; // @synthesize cellMetrics=_cellMetrics;
@property(nonatomic) _Bool configuresForCollectionViewCell; // @synthesize configuresForCollectionViewCell=_configuresForCollectionViewCell;
@property(retain, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property(copy, nonatomic) NSArray *components; // @synthesize components=_components;
@property(nonatomic) struct CGSize maxBoundsSize; // @synthesize maxBoundsSize=_maxBoundsSize;
@property(retain, nonatomic) UIView *mainImageComponent; // @synthesize mainImageComponent=_mainImageComponent;
- (id)imageForContextMenuSelection;	// IMP=0x000000000008eef7
- (_Bool)_isMarqueeAndShowOnHighlightStyleOnly:(id)arg1;	// IMP=0x000000000008ee2d
- (_Bool)_isMarqueeOnHighlightStyle:(id)arg1;	// IMP=0x000000000008edcf
- (_Bool)_isShowOnHighlightStyle:(id)arg1;	// IMP=0x000000000008ed71
- (void)_updateFocusSizeIncrease;	// IMP=0x000000000008ebbc
- (void)_updateShadowForLabel:(id)arg1 inFocus:(_Bool)arg2;	// IMP=0x000000000008ea5d
- (double)_labelWidthForWidth:(double)arg1 component:(id)arg2 expansionAmount:(double)arg3;	// IMP=0x000000000008e9cf
- (struct _VUIStackingPosterCellMetrics)_cellMetricsForMaxSize:(struct CGSize)arg1;	// IMP=0x000000000008d2cb
- (double)_bottomMarginFor:(id)arg1 withHeight:(double)arg2;	// IMP=0x000000000008d29b
- (double)_topMarginFrom:(id)arg1 withHeight:(double)arg2 to:(id)arg3 withHeight:(double)arg4 using:(double)arg5;	// IMP=0x000000000008d133
- (void)_updateComponentConstraints;	// IMP=0x000000000008c433
- (struct UIEdgeInsets)_marginForComponent:(id)arg1;	// IMP=0x000000000008c332
- (void)_configureSubviews;	// IMP=0x000000000008b423
- (void)_updateSubviewHeirarchyWithComponents:(id)arg1;	// IMP=0x000000000008b14d
- (void)_resetSubviews;	// IMP=0x000000000008b049
- (id)_getAttributedStringsFromMarqueeLabels:(id)arg1;	// IMP=0x000000000008ad88
- (struct UIEdgeInsets)_mainImageComponentAspectFitMarginsForCellMetrics:(struct _VUIStackingPosterCellMetrics)arg1;	// IMP=0x000000000008ac8c
- (struct UIEdgeInsets)selectionMarginsForSize:(struct CGSize)arg1;	// IMP=0x000000000008aafc
- (struct UIEdgeInsets)vui_alignmentInsetsForExpectedWidth:(double)arg1;	// IMP=0x000000000008aab2
- (void)_moveAllComponentsByOffset:(double)arg1;	// IMP=0x000000000008a944
- (double)_labelOffsetForIdleMode;	// IMP=0x000000000008a800
- (void)_applicationWillExitIdleMode:(id)arg1;	// IMP=0x000000000008a63c
- (void)_applicationWillEnterIdleMode:(id)arg1;	// IMP=0x000000000008a482
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000008a46a
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 withAnimationCoordinator:(id)arg3;	// IMP=0x000000000008a452
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2 focusUpdateContext:(id)arg3 withAnimationCoordinator:(id)arg4;	// IMP=0x00000000000890b6
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)setPressed:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000088fa7
- (void)setFocusDirection:(struct CGPoint)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000088f38
@property(nonatomic) struct CGPoint focusDirection;
- (_Bool)canBecomeFocused;	// IMP=0x0000000000088f14
- (void)layoutSubviews;	// IMP=0x0000000000088c9d
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000088c65
- (id)_preferredConfigurationForFocusAnimation:(long long)arg1 inContext:(id)arg2;	// IMP=0x0000000000088bac
- (void)updateComponentLayout;	// IMP=0x0000000000088b7e
- (void)setNeedsUpdateComponentLayout;	// IMP=0x0000000000088934
- (void)setComponents:(id)arg1 mainImageComponent:(id)arg2;	// IMP=0x0000000000087f84
- (id)preferredFocusEnvironments;	// IMP=0x0000000000087e9e
- (void)willMoveToWindow:(id)arg1;	// IMP=0x0000000000087d50
- (void)_commonInit;	// IMP=0x0000000000087c3b
- (id)initWithCoder:(id)arg1;	// IMP=0x0000000000087bef
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x0000000000087b92

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

