//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, UIActivityIndicatorView, UITapGestureRecognizer, _TVMLPlayerViewController, _TVPlayer;
@protocol _TVPlaybackViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface _TVPlaybackViewController : UIViewController
{
    int _uiMode;	// 8 = 0x8
    struct {
        _Bool respondsToCustomAnimatorForNavigationControllerOperation;
        _Bool respondsToViewWillAppear;
        _Bool respondsToViewDidAppear;
        _Bool respondsToViewWillDisappear;
        _Bool respondsToViewDidDisappear;
    } _delegateFlags;	// 12 = 0xc
    _Bool _viewDidAppear;	// 17 = 0x11
    _Bool _showsVideoControls;	// 18 = 0x12
    _Bool _interactiveOverlayDismissable;	// 19 = 0x13
    _Bool _beginPlaybackOnAppear;	// 20 = 0x14
    _Bool _stopPlaybackWhenDismissed;	// 21 = 0x15
    UITapGestureRecognizer *_interactiveOverlayDismissGestureRecognizer;	// 24 = 0x18
    long long _resumeMenuBehavior;	// 32 = 0x20
    UIViewController *_overlayViewController;	// 40 = 0x28
    UIViewController *_interactiveOverlayViewController;	// 48 = 0x30
    _TVPlayer *_player;	// 56 = 0x38
    id <_TVPlaybackViewControllerDelegate> _delegate;	// 64 = 0x40
    UIViewController *_playerViewController;	// 72 = 0x48
    UIActivityIndicatorView *_spinnerView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000019522
@property(retain, nonatomic) UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property(retain, nonatomic) UIViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property(nonatomic) __weak id <_TVPlaybackViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _TVPlayer *player; // @synthesize player=_player;
@property(nonatomic) _Bool stopPlaybackWhenDismissed; // @synthesize stopPlaybackWhenDismissed=_stopPlaybackWhenDismissed;
@property(nonatomic) _Bool beginPlaybackOnAppear; // @synthesize beginPlaybackOnAppear=_beginPlaybackOnAppear;
@property(retain, nonatomic) UIViewController *interactiveOverlayViewController; // @synthesize interactiveOverlayViewController=_interactiveOverlayViewController;
@property(nonatomic, getter=isInteractiveOverlayDismissable) _Bool interactiveOverlayDismissable; // @synthesize interactiveOverlayDismissable=_interactiveOverlayDismissable;
@property(readonly, nonatomic) UITapGestureRecognizer *interactiveOverlayDismissGestureRecognizer; // @synthesize interactiveOverlayDismissGestureRecognizer=_interactiveOverlayDismissGestureRecognizer;
- (void)_presentInteractiveOverlay:(_Bool)arg1;	// IMP=0x0000000000019055
- (void)setInteractiveOverlayViewController:(id)arg1 animated:(_Bool)arg2;	// IMP=0x0000000000018f0b
- (void)_dismissPlayerFromInteractiveOverlay;	// IMP=0x0000000000018df4
- (void)_updateInteractiveOverlayDismissableState;	// IMP=0x0000000000018d28
- (void)_setUIMode:(int)arg1;	// IMP=0x0000000000018ae3
@property(nonatomic) _Bool showsVideoControls; // @synthesize showsVideoControls=_showsVideoControls;
@property(retain, nonatomic) UIViewController *overlayViewController; // @synthesize overlayViewController=_overlayViewController;
@property(nonatomic) long long resumeMenuBehavior; // @synthesize resumeMenuBehavior=_resumeMenuBehavior;
- (id)_tvPlayerUIViewController;	// IMP=0x00000000000187ac
- (_Bool)_isTVMLPlayer;	// IMP=0x0000000000018753
- (void)_playbackStateDidChange:(id)arg1;	// IMP=0x00000000000184f7
- (void)_hostPlaybackViewController;	// IMP=0x0000000000018328
- (void)_initPlaybackViewController;	// IMP=0x000000000001812b
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 fromViewController:(id)arg2;	// IMP=0x0000000000017fe8
- (id)customAnimatorForNavigationControllerOperation:(long long)arg1 toViewController:(id)arg2;	// IMP=0x0000000000017ea5
- (void)viewDidLayoutSubviews;	// IMP=0x0000000000017d61
- (void)didMoveToParentViewController:(id)arg1;	// IMP=0x0000000000017c06
- (void)viewDidDisappear:(_Bool)arg1;	// IMP=0x0000000000017b87
- (void)viewWillDisappear:(_Bool)arg1;	// IMP=0x0000000000017a56
- (void)viewDidAppear:(_Bool)arg1;	// IMP=0x000000000001792f
- (void)viewWillAppear:(_Bool)arg1;	// IMP=0x00000000000178b0
- (void)viewDidLoad;	// IMP=0x0000000000017831
@property(readonly, nonatomic) _TVMLPlayerViewController *tvmlPlaybackViewController;
- (void)dealloc;	// IMP=0x00000000000175ed
- (id)initWithPlayer:(id)arg1;	// IMP=0x00000000000174c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

