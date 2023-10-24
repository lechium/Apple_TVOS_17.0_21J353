//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class FBScene, NSMutableDictionary, NSString, PBSceneDeferralTargetAssertion, PBSystemUIServiceConduit, UIScenePresentationBinder;
@protocol PBSystemOverlayContentDelegate, PBSystemUIServiceViewControllerDelegate, PBWorkspaceHandle;

@interface PBSystemUIServiceViewController : UIViewController
{
    _Bool _activatedOnce;	// 8 = 0x8
    _Bool __acceptsEventFocus;	// 9 = 0x9
    id <PBSystemOverlayContentDelegate> _contentDelegate;	// 16 = 0x10
    id <PBSystemUIServiceViewControllerDelegate> _delegate;	// 24 = 0x18
    id <PBWorkspaceHandle> _workspace;	// 32 = 0x20
    PBSystemUIServiceConduit *_conduit;	// 40 = 0x28
    FBScene *_scene;	// 48 = 0x30
    UIScenePresentationBinder *_scenePresentationBinder;	// 56 = 0x38
    PBSceneDeferralTargetAssertion *_deferralTargetAssertion;	// 64 = 0x40
    NSMutableDictionary *_externalGestureHandles;	// 72 = 0x48
}

+ (unsigned long long)_systemGestureForExternalGesture:(id)arg1;	// IMP=0x002000000015efb8
+ (id)keyPathsForValuesAffectingPresentingSystemMenu;	// IMP=0x001000000015d9fa
+ (id)workspace;	// IMP=0x001000000015cfc6
- (void).cxx_destruct;	// IMP=0x002000000015f6f4
@property(readonly, nonatomic) NSMutableDictionary *externalGestureHandles; // @synthesize externalGestureHandles=_externalGestureHandles;
@property(readonly, nonatomic) PBSceneDeferralTargetAssertion *deferralTargetAssertion; // @synthesize deferralTargetAssertion=_deferralTargetAssertion;
@property(readonly, nonatomic) UIScenePresentationBinder *scenePresentationBinder; // @synthesize scenePresentationBinder=_scenePresentationBinder;
@property(readonly, nonatomic) FBScene *scene; // @synthesize scene=_scene;
@property(readonly, nonatomic) PBSystemUIServiceConduit *conduit; // @synthesize conduit=_conduit;
@property(readonly, nonatomic) id <PBWorkspaceHandle> workspace; // @synthesize workspace=_workspace;
@property(nonatomic) __weak id <PBSystemUIServiceViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool acceptsEventFocus; // @synthesize acceptsEventFocus=__acceptsEventFocus;
@property(nonatomic) __weak id <PBSystemOverlayContentDelegate> contentDelegate; // @synthesize contentDelegate=_contentDelegate;
- (void)_handleCameraHandoffAction:(id)arg1;	// IMP=0x001000000015f3ee
- (void)_handleBulletinObservingAction:(id)arg1;	// IMP=0x001000000015f104
- (void)_handleSystemGestureAction:(id)arg1 forExternalGesture:(id)arg2;	// IMP=0x001000000015ef33
- (void)_updateSystemGestures;	// IMP=0x001000000015ea23
- (void)_serviceEndedPresentingSystemMenu;	// IMP=0x001000000015e9b2
- (void)_serviceBeganPresentingSystemMenu;	// IMP=0x001000000015e903
- (void)_updateEventFocus;	// IMP=0x001000000015e89e
- (void)_updateSceneSettings:(CDUnknownBlockType)arg1;	// IMP=0x001000000015e73b
- (void)_userInterfaceStyleDidChange;	// IMP=0x001000000015e68c
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x001000000015e518
- (void)dismissContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000015e463
- (void)presentContentAnimated:(_Bool)arg1 clientOptions:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x001000000015e29b
@property(readonly, nonatomic, getter=isInterruptible) _Bool interruptible;
@property(readonly, nonatomic) _Bool expectsEventForwarding;
- (id)scene:(id)arg1 handleActions:(id)arg2;	// IMP=0x001000000015dec1
- (void)scene:(id)arg1 didUpdateClientSettingsWithDiff:(id)arg2 oldClientSettings:(id)arg3 transitionContext:(id)arg4;	// IMP=0x001000000015dde4
- (void)sceneDidInvalidate:(id)arg1;	// IMP=0x001000000015dd5a
- (void)sceneDidDeactivate:(id)arg1 withError:(id)arg2;	// IMP=0x001000000015dc51
- (void)sceneDidActivate:(id)arg1;	// IMP=0x001000000015dbc9
- (_Bool)scenePresentationBinderShouldPresentSceneOnlyWhenLayersExist:(id)arg1;	// IMP=0x001000000015dbc1
- (void)viewDidUnload;	// IMP=0x001000000015db6d
- (void)viewDidLoad;	// IMP=0x001000000015db19
- (void)loadView;	// IMP=0x001000000015da2f
- (void)sendActions:(id)arg1;	// IMP=0x001000000015d9dc
- (void)dealloc;	// IMP=0x001000000015d8f4
- (id)initWithWorkspace:(id)arg1 application:(id)arg2 conduit:(id)arg3 delegate:(id)arg4;	// IMP=0x001000000015d034

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
