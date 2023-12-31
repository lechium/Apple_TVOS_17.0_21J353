//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSIndexPath, NSMutableArray, UIFont, UITapGestureRecognizer, _UIFocusFastScrollingIndexBarConfiguration;
@protocol _UIFocusFastScrollingIndexBarViewDelegate;

__attribute__((visibility("hidden")))
@interface _UIFocusFastScrollingIndexBarView : UIView
{
    _UIFocusFastScrollingIndexBarConfiguration *_configuration;	// 8 = 0x8
    UIView *_indicatorView;	// 16 = 0x10
    double _preferredIndicatorWidth;	// 24 = 0x18
    double _preferredLabelFontSize;	// 32 = 0x20
    NSMutableArray *_backgroundLabels;	// 40 = 0x28
    NSMutableArray *_foregroundLabels;	// 48 = 0x30
    UIView *_foregroundWrapperView;	// 56 = 0x38
    UIView *_foregroundMaskView;	// 64 = 0x40
    long long _deflectedIndex;	// 72 = 0x48
    double _deflectionAmount;	// 80 = 0x50
    UIFont *_backgroundFont;	// 88 = 0x58
    UIFont *_foregroundFont;	// 96 = 0x60
    UIView *_emphasisBackgroundView;	// 104 = 0x68
    UITapGestureRecognizer *_selectGesture;	// 112 = 0x70
    NSIndexPath *_cachedLastSelectedndexPath;	// 120 = 0x78
    id <_UIFocusFastScrollingIndexBarViewDelegate> _delegate;	// 128 = 0x80
    NSArray *_entries;	// 136 = 0x88
    struct CGPoint _minimumContentOffset;	// 144 = 0x90
    struct CGPoint _maximumContentOffset;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x000000000075677d
@property(nonatomic) struct CGPoint maximumContentOffset; // @synthesize maximumContentOffset=_maximumContentOffset;
@property(nonatomic) struct CGPoint minimumContentOffset; // @synthesize minimumContentOffset=_minimumContentOffset;
@property(copy, nonatomic) NSArray *entries; // @synthesize entries=_entries;
@property(nonatomic) __weak id <_UIFocusFastScrollingIndexBarViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_backgroundLabelTextColor;	// IMP=0x0000000000756659
- (id)_foregroundLabelTextColor;	// IMP=0x000000000075663c
- (_Bool)_shouldUseDarkAppearance;	// IMP=0x000000000075659d
- (id)_indicatorShadowPath;	// IMP=0x00000000007564d8
- (id)_backgroundFont;	// IMP=0x00000000007563e6
- (id)_foregroundFont;	// IMP=0x0000000000756357
- (void)_determinePreferredSizes;	// IMP=0x0000000000755e4c
- (void)_updateEmphasisBackgroundColor;	// IMP=0x0000000000755dad
- (void)_updateLabelColors:(_Bool)arg1 fonts:(_Bool)arg2;	// IMP=0x0000000000755a12
- (void)_createLabels;	// IMP=0x000000000075570c
- (void)layoutSubviews;	// IMP=0x00000000007552e6
- (void)_layoutIndicatorView;	// IMP=0x000000000075516b
- (void)destroyEmphasisBackgroundIfNecessary;	// IMP=0x0000000000755129
- (void)toggleEmphasisBackgroundVisible:(_Bool)arg1;	// IMP=0x00000000007550fb
- (void)createEmphasisBackgroundIfNecessary;	// IMP=0x0000000000755015
- (void)resetLastSelectedIndexPath;	// IMP=0x0000000000754ff4
- (void)resetDeflection:(_Bool)arg1;	// IMP=0x0000000000754cf6
- (void)setIndexOfDeflectedEntry:(long long)arg1 amount:(double)arg2;	// IMP=0x0000000000754890
- (void)_selectGestureAction:(id)arg1;	// IMP=0x0000000000754844
- (void)_updateSelectGesture;	// IMP=0x0000000000754746
- (id)_lowerEntryForOffset:(double)arg1;	// IMP=0x000000000075456a
- (id)_upperEntryForOffset:(double)arg1;	// IMP=0x0000000000754395
- (double)_indicatorVerticalPositionForContentOffset:(struct CGPoint)arg1 indexPath:(id)arg2 numberOfItemsInSection:(long long)arg3;	// IMP=0x000000000075384a
- (void)updateForContentOffset:(struct CGPoint)arg1 indexPath:(id)arg2 numberOfItemsInSection:(long long)arg3 animated:(_Bool)arg4;	// IMP=0x000000000075366d
- (void)updateForContentOffset:(struct CGPoint)arg1;	// IMP=0x0000000000753649
- (void)updateConfiguration:(id)arg1;	// IMP=0x000000000075344b
- (void)_toggleAppearsFocused:(_Bool)arg1 animated:(_Bool)arg2;	// IMP=0x000000000075309e
- (id)highlightedEntry;	// IMP=0x0000000000752eb7
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000752d1c
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000752c8f
@property(readonly, nonatomic) _Bool isPersistentBar;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x0000000000752c0c
- (_Bool)canBecomeFocused;	// IMP=0x0000000000752bc9
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;	// IMP=0x0000000000752a08
- (id)initWithFrame:(struct CGRect)arg1;	// IMP=0x00000000007529af

@end

