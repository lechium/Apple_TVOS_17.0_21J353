//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSMutableArray, NSString, UIAccessibilityHUDGestureManager, UIStatusBar, UIStatusBarComposedData, UIStatusBarForegroundStyleAttributes, UIStatusBarLayoutManager;

__attribute__((visibility("hidden")))
@interface UIStatusBarForegroundView : UIView
{
    _Bool _usesVerticalLayout;	// 128 = 0x80
    _Bool _itemIsEnabled[52];	// 129 = 0x81
    UIStatusBarLayoutManager *_layoutManagers[3];	// 184 = 0xb8
    int _ignoreDataLevel;	// 208 = 0xd0
    NSMutableArray *_actionAnimationStack;	// 216 = 0xd8
    UIStatusBarComposedData *_currentData;	// 224 = 0xe0
    UIStatusBarComposedData *_pendedData;	// 232 = 0xe8
    int _pendedActions;	// 240 = 0xf0
    UIAccessibilityHUDGestureManager *_accessibilityHUDGestureManager;	// 248 = 0xf8
    long long _idiom;	// 256 = 0x100
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;	// 264 = 0x108
}

- (void).cxx_destruct;	// IMP=0x0000000000fbd27f
@property(readonly, nonatomic) UIStatusBarForegroundStyleAttributes *foregroundStyle; // @synthesize foregroundStyle=_foregroundStyle;
@property(nonatomic) long long idiom; // @synthesize idiom=_idiom;
- (_Bool)rectIntersectsBatteryItem:(struct CGRect)arg1;	// IMP=0x0000000000fbd1fa
- (_Bool)rectIntersectsTimeItem:(struct CGRect)arg1;	// IMP=0x0000000000fbd161
- (struct CGRect)frameForAllItemsInRegion:(int)arg1;	// IMP=0x0000000000fbcf0d
- (struct CGRect)frameForItemOfType:(int)arg1;	// IMP=0x0000000000fbce3b
- (void)jiggleLockIcon;	// IMP=0x0000000000fbcd68
- (void)animateUnlock;	// IMP=0x0000000000fbcc88
- (void)_animateUnlockCompletionBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000fbcb4a
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;	// IMP=0x0000000000fbc947
- (void)setBounds:(struct CGRect)arg1;	// IMP=0x0000000000fbc887
- (void)setFrame:(struct CGRect)arg1;	// IMP=0x0000000000fbc7c7
- (void)setPersistentAnimationsEnabled:(_Bool)arg1;	// IMP=0x0000000000fbc775
- (double)rightEdgePadding;	// IMP=0x0000000000fbc725
- (double)leftEdgePadding;	// IMP=0x0000000000fbc6d5
- (_Bool)isShowingBreadcrumb;	// IMP=0x0000000000fbc6c4
- (_Bool)_tryToPlaceItem:(id)arg1 inItemArray:(id)arg2 layoutManager:(id)arg3 roomRemaining:(double *)arg4 allowSwap:(_Bool)arg5 swappedItem:(id *)arg6;	// IMP=0x0000000000fbc510
- (id)_computeVisibleItemsPreservingHistory:(_Bool)arg1;	// IMP=0x0000000000fbad83
- (void)didMoveToWindow;	// IMP=0x0000000000fbad40
- (void)_reflowItemViewsWithDuration:(double)arg1 preserveHistory:(_Bool)arg2;	// IMP=0x0000000000fbac07
- (void)_cleanUpAfterDataChange;	// IMP=0x0000000000fbab6f
- (void)_cleanUpAfterSimpleReflow;	// IMP=0x0000000000fbab2d
- (_Bool)ignoringData;	// IMP=0x0000000000fbab19
- (void)stopIgnoringData:(_Bool)arg1;	// IMP=0x0000000000fba976
- (void)startIgnoringData;	// IMP=0x0000000000fba966
- (void)reflowItemViewsForgettingEitherSideItemHistory;	// IMP=0x0000000000fba933
- (void)reflowItemViews:(_Bool)arg1;	// IMP=0x0000000000fba813
- (void)_reflowItemViewsCrossfadingCenterWithDuration:(double)arg1 timeWasEnabled:(_Bool)arg2;	// IMP=0x0000000000fba41c
- (void)reflowItemViewsCrossfadingCenter:(id)arg1 duration:(double)arg2;	// IMP=0x0000000000fba11b
- (void)setStatusBarData:(id)arg1 actions:(int)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000fb9a4e
- (void)_setStatusBarData:(id)arg1 actions:(int)arg2 animated:(_Bool)arg3;	// IMP=0x0000000000fb9418
- (_Bool)willChangeNavigationItemDisplayWithSystemNavigationAction:(id)arg1;	// IMP=0x0000000000fb93b3
@property(readonly, nonatomic) UIStatusBar *statusBar;
- (void)_dismissAccessibilityHUDForGestureManager:(id)arg1;	// IMP=0x0000000000fb92fc
- (void)_accessibilityHUDGestureManager:(id)arg1 showHUDItem:(id)arg2;	// IMP=0x0000000000fb924c
- (_Bool)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;	// IMP=0x0000000000fb9244
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint)arg2;	// IMP=0x0000000000fb923e
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint)arg2;	// IMP=0x0000000000fb91ee
- (id)_statusBarWindowForAccessibilityHUD;	// IMP=0x0000000000fb90f6
- (id)_statusBarItemViewAtPoint:(struct CGPoint)arg1;	// IMP=0x0000000000fb9060
- (void)dealloc;	// IMP=0x0000000000fb8fd5
- (id)initWithFrame:(struct CGRect)arg1 foregroundStyle:(id)arg2 usesVerticalLayout:(_Bool)arg3;	// IMP=0x0000000000fb8e8f

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

