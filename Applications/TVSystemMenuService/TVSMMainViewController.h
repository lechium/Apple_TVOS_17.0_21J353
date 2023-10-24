//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, PBSOverlayLayoutElementHandle, TVSMButtonGridContainerViewController, TVSMButtonGridNavigationController, TVSMTeachableMomentViewController;

@interface TVSMMainViewController : UIViewController
{
    _Bool _isDismissingTeachableMoment;	// 8 = 0x8
    TVSMButtonGridNavigationController *_gridNavigationController;	// 16 = 0x10
    TVSMButtonGridContainerViewController *_gridContainerViewController;	// 24 = 0x18
    PBSOverlayLayoutElementHandle *_gridNavigationLayoutElement;	// 32 = 0x20
    TVSMTeachableMomentViewController *_teachableMomentViewController;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000001b940
@property(retain, nonatomic) TVSMTeachableMomentViewController *teachableMomentViewController; // @synthesize teachableMomentViewController=_teachableMomentViewController;
@property(nonatomic) _Bool isDismissingTeachableMoment; // @synthesize isDismissingTeachableMoment=_isDismissingTeachableMoment;
@property(readonly, nonatomic) PBSOverlayLayoutElementHandle *gridNavigationLayoutElement; // @synthesize gridNavigationLayoutElement=_gridNavigationLayoutElement;
@property(readonly, nonatomic) TVSMButtonGridContainerViewController *gridContainerViewController; // @synthesize gridContainerViewController=_gridContainerViewController;
@property(readonly, nonatomic) TVSMButtonGridNavigationController *gridNavigationController; // @synthesize gridNavigationController=_gridNavigationController;
- (void)dismissPictureInPictureViewControllerFromFullScreen:(id)arg1;	// IMP=0x001000000001b7d0
- (void)restorePictureInPictureViewControllerToFullScreen:(id)arg1;	// IMP=0x001000000001b610
- (void)_updateOverlayLayoutElementWithFrame:(struct CGRect)arg1 andTransitionContext:(id)arg2;	// IMP=0x001000000001b2e0
- (void)_updateOverlayLayoutElementWithViewController:(id)arg1 transitionContext:(id)arg2;	// IMP=0x001000000001b0f0
- (void)_menuPressed:(id)arg1;	// IMP=0x001000000001b060
- (_Bool)dismissTeachableMomentIfNeeded;	// IMP=0x001000000001aba0
- (void)_showTeachableMoment;	// IMP=0x001000000001a620
- (id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;	// IMP=0x001000000001a490
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;	// IMP=0x001000000001a200
- (void)dismissContentAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000019520
- (void)presentContentAnimated:(_Bool)arg1 options:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000018c40
- (id)preferredFocusEnvironments;	// IMP=0x0010000000018b00
- (void)viewDidLoad;	// IMP=0x00100000000184d0
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x0010000000018320

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

