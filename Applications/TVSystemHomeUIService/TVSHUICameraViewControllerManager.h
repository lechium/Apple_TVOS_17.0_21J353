//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSCompoundAssertion, BSWatchdog, NSMapTable, NSString, PBUISystemHomeServiceCameraActivationContext, TVHMUIAllCamerasFullScreenViewController, TVHMUIFullScreenCameraViewController;
@protocol BSInvalidatable, TVSHUICameraViewControllerManagerDelegate;

@interface TVSHUICameraViewControllerManager : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    id <TVSHUICameraViewControllerManagerDelegate> _delegate;	// 16 = 0x10
    PBUISystemHomeServiceCameraActivationContext *_pendingActivationContext;	// 24 = 0x18
    NSMapTable *_pictureInPictureControllers;	// 32 = 0x20
    BSCompoundAssertion *_visibilityCompoundAssertion;	// 40 = 0x28
    TVHMUIAllCamerasFullScreenViewController *_currentAllCamerasViewController;	// 48 = 0x30
    TVHMUIFullScreenCameraViewController *_currentViewControllerPiP;	// 56 = 0x38
    TVHMUIFullScreenCameraViewController *_currentViewControllerFullScreen;	// 64 = 0x40
    TVHMUIFullScreenCameraViewController *_previousViewControllerFullScreen;	// 72 = 0x48
    TVHMUIFullScreenCameraViewController *_swappingToFullScreenViewController;	// 80 = 0x50
    id <BSInvalidatable> _fullScreenVisibilityAssertion;	// 88 = 0x58
    BSWatchdog *_restorationWatchdog;	// 96 = 0x60
    id <BSInvalidatable> _stateDumpCaptureHandle;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0020000000008970
@property(readonly, nonatomic) id <BSInvalidatable> stateDumpCaptureHandle; // @synthesize stateDumpCaptureHandle=_stateDumpCaptureHandle;
@property(readonly, nonatomic) BSWatchdog *restorationWatchdog; // @synthesize restorationWatchdog=_restorationWatchdog;
@property(readonly, nonatomic) id <BSInvalidatable> fullScreenVisibilityAssertion; // @synthesize fullScreenVisibilityAssertion=_fullScreenVisibilityAssertion;
@property(readonly, nonatomic) TVHMUIFullScreenCameraViewController *swappingToFullScreenViewController; // @synthesize swappingToFullScreenViewController=_swappingToFullScreenViewController;
@property(readonly, nonatomic) TVHMUIFullScreenCameraViewController *previousViewControllerFullScreen; // @synthesize previousViewControllerFullScreen=_previousViewControllerFullScreen;
@property(readonly, nonatomic) TVHMUIFullScreenCameraViewController *currentViewControllerFullScreen; // @synthesize currentViewControllerFullScreen=_currentViewControllerFullScreen;
@property(readonly, nonatomic) TVHMUIFullScreenCameraViewController *currentViewControllerPiP; // @synthesize currentViewControllerPiP=_currentViewControllerPiP;
@property(readonly, nonatomic) TVHMUIAllCamerasFullScreenViewController *currentAllCamerasViewController; // @synthesize currentAllCamerasViewController=_currentAllCamerasViewController;
@property(readonly, nonatomic) BSCompoundAssertion *visibilityCompoundAssertion; // @synthesize visibilityCompoundAssertion=_visibilityCompoundAssertion;
@property(readonly, nonatomic) NSMapTable *pictureInPictureControllers; // @synthesize pictureInPictureControllers=_pictureInPictureControllers;
@property(readonly, nonatomic) PBUISystemHomeServiceCameraActivationContext *pendingActivationContext; // @synthesize pendingActivationContext=_pendingActivationContext;
@property(readonly, nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) __weak id <TVSHUICameraViewControllerManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_didUpdatePictureInPictureState;	// IMP=0x00100000000086b0
- (void)_restoreChildViewController:(id)arg1;	// IMP=0x0010000000008630
- (void)_removeChildViewController:(id)arg1;	// IMP=0x00100000000085b0
- (void)_addChildViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000082d0
- (id)_cameraItems;	// IMP=0x0010000000008270
- (id)transitionCameraContentView;	// IMP=0x0010000000008240
- (void)showCameraView;	// IMP=0x0010000000008210
- (void)_removeAllAnimationsFromView:(id)arg1;	// IMP=0x0010000000007fb0
- (id)_stateDump;	// IMP=0x0010000000007e10
- (void)_dismissIfNecessary;	// IMP=0x0010000000007da0
- (void)_updateVisibilityState;	// IMP=0x0010000000007d30
- (void)_startRestorationVisibilityWatchdogIfNeeded;	// IMP=0x0010000000007ba0
- (id)_pictureInPictureControllerForViewController:(id)arg1;	// IMP=0x0010000000007ad0
- (void)_startPictureinPictureUsingFullScreenViewController:(id)arg1 source:(long long)arg2;	// IMP=0x0010000000007470
- (id)_createFullScreenViewControllerForCameraItem:(id)arg1;	// IMP=0x00100000000071c0
- (void)_presentCameraWithContext:(id)arg1 source:(long long)arg2;	// IMP=0x0010000000006420
- (void)allCamerasViewControllerDidRequestDismissal:(id)arg1 animated:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000006320
- (void)dismissPictureInPictureViewControllerFromFullScreen:(id)arg1;	// IMP=0x0010000000005b20
- (_Bool)dismissPictureInPictureViewController:(id)arg1;	// IMP=0x0010000000005a60
- (void)restorePictureInPictureViewControllerToFullScreen:(id)arg1;	// IMP=0x00100000000056d0
- (void)prepareForPictureInPictureStopOrSwapAnimation;	// IMP=0x0010000000005690
- (_Bool)viewControllerShouldDismissForAllCamerasButton:(id)arg1;	// IMP=0x0010000000005640
- (void)viewControllerDidRequestDismissal:(id)arg1 focusedIdentifier:(id)arg2 focusedContentView:(id)arg3 animated:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000054f0
- (void)startPictureInPictureFromFullscreen;	// IMP=0x0010000000004f40
- (void)presentCameraWithContext:(id)arg1;	// IMP=0x0010000000004ec0
- (void)activate;	// IMP=0x0010000000004e40
- (void)dealloc;	// IMP=0x0010000000004db0
- (id)init;	// IMP=0x0010000000004d50
- (id)initWithDelegate:(id)arg1;	// IMP=0x0010000000004920

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
