//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class BSAction, BSWatchdog, FBSSceneDefinition, FBSceneWorkspace, NSArray, NSString, PBApplicationSceneViewController, PBCoordinatedTransitionToken, PBSceneHandle, PBScreenSaverDismissalTransaction, PBScreenSaverPresentationTransaction, UIApplicationSceneDeactivationAssertion, UIImageView;
@protocol PBSystemOverlayContentDelegate;

@interface PBScreenSaverContentPresentingViewController : UIViewController
{
    _Bool _interruptible;	// 8 = 0x8
    _Bool _acceptsEventFocus;	// 9 = 0x9
    _Bool _allowsInteraction;	// 10 = 0xa
    id <PBSystemOverlayContentDelegate> _contentDelegate;	// 16 = 0x10
    NSArray *_transitionActions;	// 24 = 0x18
    CDUnknownBlockType _shouldDismissHandler;	// 32 = 0x20
    UIImageView *_snapshotImageView;	// 40 = 0x28
    UIApplicationSceneDeactivationAssertion *_screensaverSceneDeactivationAssertion;	// 48 = 0x30
    CDUnknownBlockType _screenSaverPreparedCompletionBlock;	// 56 = 0x38
    BSWatchdog *;	// 64 = 0x40
    BSAction *_screenSaverPreparedAction;	// 72 = 0x48
    PBCoordinatedTransitionToken *_coordinatedTransitionToken;	// 80 = 0x50
    PBScreenSaverPresentationTransaction *_presentationTransaction;	// 88 = 0x58
    PBScreenSaverDismissalTransaction *_dismissalTransaction;	// 96 = 0x60
    PBApplicationSceneViewController *_sceneViewController;	// 104 = 0x68
    PBSceneHandle *_sceneHandle;	// 112 = 0x70
    FBSceneWorkspace *_sceneWorkspace;	// 120 = 0x78
    FBSSceneDefinition *_sceneDefinition;	// 128 = 0x80
    long long _layoutLevel;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00200000000e5e5c
@property(readonly, nonatomic) long long layoutLevel; // @synthesize layoutLevel=_layoutLevel;
@property(readonly, nonatomic) FBSSceneDefinition *sceneDefinition; // @synthesize sceneDefinition=_sceneDefinition;
@property(readonly, nonatomic) FBSceneWorkspace *sceneWorkspace; // @synthesize sceneWorkspace=_sceneWorkspace;
@property(readonly, nonatomic) PBSceneHandle *sceneHandle; // @synthesize sceneHandle=_sceneHandle;
@property(readonly, nonatomic) PBApplicationSceneViewController *sceneViewController; // @synthesize sceneViewController=_sceneViewController;
@property(readonly, nonatomic) PBScreenSaverDismissalTransaction *dismissalTransaction; // @synthesize dismissalTransaction=_dismissalTransaction;
@property(readonly, nonatomic) PBScreenSaverPresentationTransaction *presentationTransaction; // @synthesize presentationTransaction=_presentationTransaction;
@property(readonly, nonatomic) PBCoordinatedTransitionToken *coordinatedTransitionToken; // @synthesize coordinatedTransitionToken=_coordinatedTransitionToken;
@property(readonly, nonatomic) BSAction *screenSaverPreparedAction; // @synthesize screenSaverPreparedAction=_screenSaverPreparedAction;
@property(readonly, nonatomic) BSWatchdog *screenSaverPreparedWatchdog; // @synthesize screenSaverPreparedWatchdog=_screenSaverPreparedWatchdog;
@property(copy, nonatomic) CDUnknownBlockType screenSaverPreparedCompletionBlock; // @synthesize screenSaverPreparedCompletionBlock=_screenSaverPreparedCompletionBlock;
@property(retain, nonatomic) UIApplicationSceneDeactivationAssertion *screensaverSceneDeactivationAssertion; // @synthesize screensaverSceneDeactivationAssertion=_screensaverSceneDeactivationAssertion;
@property(readonly, nonatomic) UIImageView *snapshotImageView; // @synthesize snapshotImageView=_snapshotImageView;
@property(readonly, nonatomic) _Bool allowsInteraction; // @synthesize allowsInteraction=_allowsInteraction;
@property(copy, nonatomic) CDUnknownBlockType shouldDismissHandler; // @synthesize shouldDismissHandler=_shouldDismissHandler;
@property(copy, nonatomic) NSArray *transitionActions; // @synthesize transitionActions=_transitionActions;
@property(nonatomic) _Bool acceptsEventFocus; // @synthesize acceptsEventFocus=_acceptsEventFocus;
@property(nonatomic) __weak id <PBSystemOverlayContentDelegate> contentDelegate; // @synthesize contentDelegate=_contentDelegate;
@property(readonly, nonatomic, getter=isInterruptible) _Bool interruptible; // @synthesize interruptible=_interruptible;
- (void)_createDismissalTransactionAnimated:(_Bool)arg1 shouldUpdateWallpaper:(_Bool)arg2 shouldApplyStartValues:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;	// IMP=0x00100000000e5826
- (void)_receivedScenePreparedAction:(id)arg1 forScene:(id)arg2;	// IMP=0x00100000000e568d
- (void)_updateSceneSettingsWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e5566
- (void)_activateSceneWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e4e40
- (id)transitionCoordinator:(id)arg1 willDismissTransitionWithToken:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000000e4aec
- (void)_userInterfaceStyleDidChange;	// IMP=0x00100000000e4a44
- (void)sceneDidDeactivate:(id)arg1 withError:(id)arg2;	// IMP=0x00100000000e4910
- (void)sceneWillDeactivate:(id)arg1 withError:(id)arg2;	// IMP=0x00100000000e48a5
- (id)scene:(id)arg1 handleActions:(id)arg2;	// IMP=0x00100000000e44a1
- (void)dismissContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e4069
- (void)presentContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000e3bb3
- (void)prepareUIForSystemOverlayPresentationWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000e37ca
- (void)screenSaverTransitionUpdatedAcceptEvents:(_Bool)arg1;	// IMP=0x00100000000e3597
- (void)screenSaverTransitionShowSnapshotImage:(id)arg1;	// IMP=0x00100000000e3442
@property(readonly, nonatomic) UIViewController *childViewController;
@property(readonly, nonatomic) _Bool expectsEventForwarding;
- (void)dealloc;	// IMP=0x00100000000e32e1
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000e32d3
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;	// IMP=0x00100000000e32c5
- (id)initWithSceneWorkspace:(id)arg1 sceneDefinition:(id)arg2 layoutLevel:(long long)arg3;	// IMP=0x00100000000e3138

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSString *providerIdentifier;
@property(readonly) Class superclass;

@end

