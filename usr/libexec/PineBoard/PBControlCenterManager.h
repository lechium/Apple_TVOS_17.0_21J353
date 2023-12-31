//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSHashTable, NSString, PBPowerManager, PBSceneDeactivationManager, PBSystemGestureHandle, PBSystemUIServicePresenter, PBUserProfileManager, UIApplicationSceneDeactivationAssertion;
@protocol PBControlCenterPresenting;

@interface PBControlCenterManager : NSObject
{
    _Bool _fullScreenOverlayActive;	// 8 = 0x8
    id <PBControlCenterPresenting> _presenter;	// 16 = 0x10
    PBSceneDeactivationManager *_sceneDeactivationManager;	// 24 = 0x18
    UIApplicationSceneDeactivationAssertion *_fullScreenOverlaySceneDeactivationAssertion;	// 32 = 0x20
    NSHashTable *_observers;	// 40 = 0x28
    PBSystemGestureHandle *_presentGesture;	// 48 = 0x30
    PBSystemGestureHandle *_dismissGesture;	// 56 = 0x38
    PBUserProfileManager *_userProfileManager;	// 64 = 0x40
    PBPowerManager *_powerManager;	// 72 = 0x48
}

+ (id)keyPathsForValuesAffectingIsPresenting;	// IMP=0x00200000001e6723
+ (_Bool)isControlCenterEnabled;	// IMP=0x00100000001e5d3a
+ (id)sharedInstance;	// IMP=0x00100000001e5cb3
+ (id)dependencyDescription;	// IMP=0x00100000001e5a4f
- (void).cxx_destruct;	// IMP=0x00200000001e725b
@property(retain, nonatomic) PBPowerManager *powerManager; // @synthesize powerManager=_powerManager;
@property(retain, nonatomic) PBUserProfileManager *userProfileManager; // @synthesize userProfileManager=_userProfileManager;
@property(readonly, nonatomic) PBSystemGestureHandle *dismissGesture; // @synthesize dismissGesture=_dismissGesture;
@property(readonly, nonatomic) PBSystemGestureHandle *presentGesture; // @synthesize presentGesture=_presentGesture;
@property(readonly, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) UIApplicationSceneDeactivationAssertion *fullScreenOverlaySceneDeactivationAssertion; // @synthesize fullScreenOverlaySceneDeactivationAssertion=_fullScreenOverlaySceneDeactivationAssertion;
@property(readonly, nonatomic) PBSceneDeactivationManager *sceneDeactivationManager; // @synthesize sceneDeactivationManager=_sceneDeactivationManager;
@property(readonly, nonatomic) id <PBControlCenterPresenting> presenter; // @synthesize presenter=_presenter;
@property(readonly, nonatomic, getter=isFullScreenOverlayActive) _Bool fullScreenOverlayActive; // @synthesize fullScreenOverlayActive=_fullScreenOverlayActive;
- (void)_turnOffDoNotDisturb;	// IMP=0x00100000001e7181
@property(readonly, nonatomic) PBSystemUIServicePresenter *systemUIServicePresenter;
- (void)_notifyObserversFullScreenOverlayDidDeactivate;	// IMP=0x00100000001e6f81
- (void)_notifyObserversFullScreenOverlayDidActivate;	// IMP=0x00100000001e6e31
- (void)_notifyObserversDidDismiss;	// IMP=0x00100000001e6ce1
- (void)removeObserver:(id)arg1;	// IMP=0x00100000001e6cca
- (void)addObserver:(id)arg1;	// IMP=0x00100000001e6cb3
- (void)powerManager:(id)arg1 willSleepSystemWithReason:(long long)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001e6c1c
- (void)userProfileManager:(id)arg1 didSwitchToUserWithIdentifier:(id)arg2 previousUserIdentifier:(id)arg3;	// IMP=0x00100000001e6ba6
- (void)distributedAssertion:(id)arg1 didChangeState:(id)arg2;	// IMP=0x00100000001e6ae8
- (id)transitionCoordinator:(id)arg1 willDismissTransitionWithToken:(id)arg2 withContext:(id)arg3;	// IMP=0x00100000001e69c2
- (id)coordinatedTransitionTokenForControlCenterPresenter:(id)arg1;	// IMP=0x00100000001e68b6
- (void)controlCenterPresenterDidDismiss:(id)arg1;	// IMP=0x00100000001e68a3
- (void)controlCenterPresenterWillDismiss:(id)arg1;	// IMP=0x00100000001e6871
- (void)controlCenterPresenterWillPresent:(id)arg1;	// IMP=0x00100000001e683f
- (_Bool)dismissControlCenter;	// IMP=0x00100000001e6823
- (void)presentControlCenterForReason:(unsigned long long)arg1;	// IMP=0x00100000001e6754
@property(readonly, nonatomic, getter=isPresenting) _Bool presenting;
- (void)setFullScreenOverlayActive:(_Bool)arg1;	// IMP=0x00100000001e65ab
- (void)dealloc;	// IMP=0x00100000001e652f
- (id)init;	// IMP=0x00100000001e5d85

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

