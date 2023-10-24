//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, UIInterfaceActionVisualStyle, UIStackView;

__attribute__((visibility("hidden")))
@interface _UIInterfaceActionSeparatableSequenceView : UIView
{
    _Bool _visualCornerForcedOverride;	// 8 = 0x8
    UIInterfaceActionVisualStyle *_visualStyle;	// 16 = 0x10
    long long _axis;	// 24 = 0x18
    long long _distribution;	// 32 = 0x20
    NSArray *_arrangedContentViews;	// 40 = 0x28
    unsigned long long _visualCornerPosition;	// 48 = 0x30
    UIStackView *_stackView;	// 56 = 0x38
    NSArray *_arrangedContentSeparatorViews;	// 64 = 0x40
    NSArray *_arrangedContentViewsDistributionConstraints;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000d21da
@property(readonly, nonatomic) NSArray *arrangedContentViewsDistributionConstraints; // @synthesize arrangedContentViewsDistributionConstraints=_arrangedContentViewsDistributionConstraints;
@property(readonly, nonatomic) NSArray *arrangedContentSeparatorViews; // @synthesize arrangedContentSeparatorViews=_arrangedContentSeparatorViews;
@property(readonly, nonatomic) UIStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) _Bool visualCornerForcedOverride; // @synthesize visualCornerForcedOverride=_visualCornerForcedOverride;
@property(nonatomic) unsigned long long visualCornerPosition; // @synthesize visualCornerPosition=_visualCornerPosition;
@property(retain, nonatomic) NSArray *arrangedContentViews; // @synthesize arrangedContentViews=_arrangedContentViews;
@property(nonatomic) long long distribution; // @synthesize distribution=_distribution;
@property(nonatomic) long long axis; // @synthesize axis=_axis;
@property(retain, nonatomic) UIInterfaceActionVisualStyle *visualStyle; // @synthesize visualStyle=_visualStyle;
- (_Bool)_isVerticalLayout;	// IMP=0x00000000000d2128
- (void)_setRoundedCornersOfView:(id)arg1 toCornerPosition:(unsigned long long)arg2;	// IMP=0x00000000000d20c7
- (void)_markRoundedCornerPositionOnNoCornersOfView:(id)arg1;	// IMP=0x00000000000d20b3
- (void)_markRoundedCornerPositionOnAllCornersOfView:(id)arg1;	// IMP=0x00000000000d209c
- (void)_markRoundedCornerPositionOnTrailingEdgeOfView:(id)arg1;	// IMP=0x00000000000d203f
- (void)_markRoundedCornerPositionOnLeadingEdgeOfView:(id)arg1;	// IMP=0x00000000000d1fe0
- (void)_updateRoundedCornerPositionForActionRepViews;	// IMP=0x00000000000d1de3
- (void)_updateSeparatorConstantSizedAxis;	// IMP=0x00000000000d1d59
- (long long)_separatorConstantSizedAxis;	// IMP=0x00000000000d1d43
- (void)_updateActionSpacing;	// IMP=0x00000000000d1cbf
- (void)_addSeparatorToStackAndMutableArray:(id)arg1 preferSectionStyle:(_Bool)arg2;	// IMP=0x00000000000d1bbb
- (void)_reloadStackViewArrangement;	// IMP=0x00000000000d1717
- (long long)_dimensionAttributeToConstrainEqual;	// IMP=0x00000000000d1691
- (void)_reloadContentDistributionConstraintsForArrangedContentViews;	// IMP=0x00000000000d14bc
- (struct CGSize)_systemLayoutSizeFittingStackView:(struct CGSize)arg1;	// IMP=0x00000000000d13f1
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x00000000000d13df
- (struct CGSize)intrinsicContentSize;	// IMP=0x00000000000d13bd
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg1;	// IMP=0x00000000000d13ab
- (void)layoutSublayersOfLayer:(id)arg1;	// IMP=0x00000000000d1363
- (void)updateConstraints;	// IMP=0x00000000000d1322
- (void)_withUnsatisfiableConstraintsLoggingSuspendedIfEngineDelegateExists:(CDUnknownBlockType)arg1;	// IMP=0x00000000000d125a
- (void)_setLayoutDebuggingIdentifier:(id)arg1;	// IMP=0x00000000000d11ae
- (struct CGRect)_stackViewFrameForViewBounds:(struct CGRect)arg1;	// IMP=0x00000000000d110c
- (struct CGRect)_viewBoundsForStackViewFrame:(struct CGRect)arg1;	// IMP=0x00000000000d105e
- (void)_updateLayoutWithStackFrameForActionSequenceEdgeInsets;	// IMP=0x00000000000d0fdf
- (void)reloadDisplayedContentVisualStyle;	// IMP=0x00000000000d0fa4
- (double)fittingWidthForLayoutAxis:(long long)arg1;	// IMP=0x00000000000d0bf2
- (void)_updateActionRepresentationViewsCanRemoveContentFromHierarchyWhenNotVisibleSetting;	// IMP=0x00000000000d09eb
- (id)initWithVisualStyle:(id)arg1;	// IMP=0x00000000000d0521

@end
