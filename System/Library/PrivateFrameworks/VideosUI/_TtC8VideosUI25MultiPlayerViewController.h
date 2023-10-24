//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class MISSING_TYPE, NSArray;
@protocol VUIMultiPlayerViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface _TtC8VideosUI25MultiPlayerViewController : UIViewController
{
    MISSING_TYPE *$__lazy_storage_$_playerViewLayout;	// 8 = 0x8
    MISSING_TYPE *$__lazy_storage_$_detailsViewLayout;	// 16 = 0x10
    MISSING_TYPE *fullscreenPlayerViewController;	// 24 = 0x18
    MISSING_TYPE *exitFullscreenCompletion;	// 32 = 0x20
    MISSING_TYPE *swappedPlayerIndices;	// 48 = 0x30
    MISSING_TYPE *$__lazy_storage_$_metricsRecorder;	// 72 = 0x48
    MISSING_TYPE *$__lazy_storage_$_panGesture;	// 80 = 0x50
    MISSING_TYPE *inactivityTimeout;	// 88 = 0x58
    MISSING_TYPE *inactivityTimer;	// 96 = 0x60
    MISSING_TYPE *$__lazy_storage_$_ghostPlayerViewController;	// 104 = 0x68
    MISSING_TYPE *playPauseAssertion;	// 112 = 0x70
    MISSING_TYPE *pageSwipeLayout;	// 120 = 0x78
    MISSING_TYPE *$__lazy_storage_$_swipeUpView;	// 128 = 0x80
    MISSING_TYPE *$__lazy_storage_$_swipeDownView;	// 136 = 0x88
    MISSING_TYPE *$__lazy_storage_$_dimmingView;	// 144 = 0x90
    MISSING_TYPE *dismissAnimator;	// 152 = 0x98
    MISSING_TYPE *dismissalPlayerViewController;	// 160 = 0xa0
    MISSING_TYPE *dismissalReason;	// 168 = 0xa8
    MISSING_TYPE *$__lazy_storage_$_menuGestureRecognizer;	// 176 = 0xb0
    MISSING_TYPE *$__lazy_storage_$_swipeRecognizer;	// 184 = 0xb8
    MISSING_TYPE *$__lazy_storage_$_distributionPicker;	// 192 = 0xc0
    MISSING_TYPE *delegate;	// 200 = 0xc8
    MISSING_TYPE *isDetailsViewControllerVisible;	// 208 = 0xd0
    MISSING_TYPE *playerView;	// 216 = 0xd8
    MISSING_TYPE *detailsViewController;	// 224 = 0xe0
    MISSING_TYPE *presentationPlayerViewControllers;	// 232 = 0xe8
    MISSING_TYPE *playerToDistributionFocusGuide;	// 240 = 0xf0
    MISSING_TYPE *topConstraint;	// 248 = 0xf8
    MISSING_TYPE *bottomConstraint;	// 256 = 0x100
    MISSING_TYPE *leadingConstraint;	// 264 = 0x108
    MISSING_TYPE *trailingConstraint;	// 272 = 0x110
    MISSING_TYPE *cancellables;	// 280 = 0x118
    MISSING_TYPE *stateMachine;	// 288 = 0x120
    MISSING_TYPE *initiallyShowsDetails;	// 296 = 0x128
    MISSING_TYPE *prospectivePlayerView;	// 304 = 0x130
}

- (void).cxx_destruct;	// IMP=0x00000000002f0eda
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00000000002f0e8c
- (void)didPressMenuWithGesture:(id)arg1;	// IMP=0x00000000002efbb0
- (void)setDetailsViewControllerVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002ef6ce
- (void)exitFullscreenWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000002ed9cb
- (void)recordMetricsEventWithIdentifier:(id)arg1 impressionsData:(id)arg2 locationData:(id)arg3 didAddPlayer:(_Bool)arg4;	// IMP=0x00000000002ed792
- (void)enterFullscreenWithPlayerViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000002ed61b
- (void)captureAndShowPlayerScreenshots;	// IMP=0x00000000002ed328
- (void)setProspectivePlayerVisible:(_Bool)arg1 atIndex:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002ed241
- (void)setProspectivePlayerVisible:(_Bool)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002ecd2e
@property(nonatomic, readonly) _Bool isShowingProspectivePlayer;
- (void)replacePlayerViewController:(id)arg1 atIndex:(long long)arg2 animated:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000002ecb89
- (void)removePlayerViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002ec79e
- (void)addPlayerViewController:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000002ec3d5
- (void)onPanWithGesture:(id)arg1;	// IMP=0x00000000002ec053
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;	// IMP=0x00000000002ebed2
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x00000000002eb9d6
- (void)viewDidLoad;	// IMP=0x00000000002eb95c
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000002eb213
- (void)highlightPlayerViewController:(id)arg1;	// IMP=0x00000000002e9f2e
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x00000000002e9d73
@property(nonatomic, readonly) unsigned long long distribution;
@property(nonatomic) __weak id <VUIMultiPlayerViewControllerDelegate> delegate; // @synthesize delegate;
@property(nonatomic, readonly) NSArray *preferredFocusEnvironments;
@property(nonatomic, readonly) NSArray *playerViewControllers;

@end

