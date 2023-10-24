//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class PBPIPRootViewController, PBPIPStashHintOverlayViewController, PBSplitViewControlsViewController;
@protocol PBSystemOverlayContentDelegate;

@interface PBPictureInPictureContentPresentingViewController : UIViewController
{
    _Bool _acceptsEventFocus;	// 8 = 0x8
    id <PBSystemOverlayContentDelegate> _contentDelegate;	// 16 = 0x10
    PBPIPRootViewController *_pipRootViewController;	// 24 = 0x18
    PBPIPStashHintOverlayViewController *_splitViewStashHintOverlayViewController;	// 32 = 0x20
    PBSplitViewControlsViewController *_splitViewControlsViewController;	// 40 = 0x28
    long long _currentSplitViewStashOverlayHintState;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00200000001006ba
@property(retain, nonatomic) PBSplitViewControlsViewController *splitViewControlsViewController; // @synthesize splitViewControlsViewController=_splitViewControlsViewController;
@property(retain, nonatomic) PBPIPRootViewController *pipRootViewController; // @synthesize pipRootViewController=_pipRootViewController;
@property(nonatomic) __weak id <PBSystemOverlayContentDelegate> contentDelegate; // @synthesize contentDelegate=_contentDelegate;
@property(nonatomic) _Bool acceptsEventFocus; // @synthesize acceptsEventFocus=_acceptsEventFocus;
- (void)_destroySplitViewStashOverlayHint;	// IMP=0x001000000010060b
- (void)_createSplitViewStashHintOverlayIfNeeded;	// IMP=0x0010000000100393
- (void)_observeSplitViewGeometry:(id)arg1 removing:(id)arg2;	// IMP=0x0010000000100331
- (void)_hostSplitViewControlsViewController:(id)arg1 removing:(id)arg2;	// IMP=0x0010000000100192
- (void)_hostPiPRootViewController:(id)arg1 removing:(id)arg2;	// IMP=0x00100000000ffff3
- (void)setSplitViewStashOverlayHintState:(long long)arg1;	// IMP=0x00100000000ffdac
- (void)dismissContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ffd2e
- (void)presentContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000ffcb1
@property(readonly, nonatomic, getter=isInterruptible) _Bool interruptible;
@property(readonly, nonatomic) _Bool expectsEventForwarding;
- (id)preferredFocusEnvironments;	// IMP=0x00100000000ffc1b
- (void)viewWillLayoutSubviews;	// IMP=0x00100000000ffa91
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000000ffa1c
- (void)dealloc;	// IMP=0x00100000000ff9a1

@end
