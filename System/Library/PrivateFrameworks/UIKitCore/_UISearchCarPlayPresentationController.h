//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UISearchCarPlayPresentationController
{
    UIVisualEffectView *_blurView;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000e732b8
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
- (void)containerViewWillLayoutSubviews;	// IMP=0x0000000000e7328d
- (void)traitCollectionDidChange:(id)arg1;	// IMP=0x0000000000e7316e
- (unsigned long long)edgeForHidingNavigationBar;	// IMP=0x0000000000e73166
- (_Bool)forceObeyNavigationBarInsets;	// IMP=0x0000000000e7315e
- (_Bool)animatorShouldLayoutPresentationViews;	// IMP=0x0000000000e73156
- (void)setContentVisible:(_Bool)arg1;	// IMP=0x0000000000e73108
- (struct CGRect)finalFrameForContainerView;	// IMP=0x0000000000e730ea
- (id)adaptivePresentationController;	// IMP=0x0000000000e730e2
- (double)resultsControllerContentOffset;	// IMP=0x0000000000e730d9
- (_Bool)searchBarToBecomeTopAttached;	// IMP=0x0000000000e730d1
- (double)statusBarAdjustment;	// IMP=0x0000000000e730c8
- (_Bool)searchBarShouldClipToBounds;	// IMP=0x0000000000e730c0
- (_Bool)searchBarCanContainScopeBar;	// IMP=0x0000000000e730b8
- (_Bool)resultsUnderlapsSearchBar;	// IMP=0x0000000000e730b0
- (_Bool)shouldAccountForStatusBar;	// IMP=0x0000000000e730a8
- (id)_presentationControllerForTraitCollection:(id)arg1;	// IMP=0x0000000000e7309f
- (id)_presentedViewControllerForSizeClassPair:(CDStruct_627e0f85)arg1;	// IMP=0x0000000000e7308d
- (long long)adaptivePresentationStyle;	// IMP=0x0000000000e73082
- (void)hideBackgroundObscuringView;	// IMP=0x0000000000e73062
- (void)showBackgroundObscuringView;	// IMP=0x0000000000e7303d
- (id)backgroundObscuringView;	// IMP=0x0000000000e72e97

@end

