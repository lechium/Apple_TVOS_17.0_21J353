//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PBSExternalControlSystem, PBSystemGestureHandle, PBVolumeController, TVSStateMachine;

@interface PBExternalControlSystem : NSObject
{
    PBSExternalControlSystem *_externalControlSystem;	// 8 = 0x8
    PBVolumeController *_volumeController;	// 16 = 0x10
    TVSStateMachine *_volumeBehaviorStateMachine;	// 24 = 0x18
    PBSystemGestureHandle *_volumeMuteButtonGesture;	// 32 = 0x20
    PBSystemGestureHandle *_volumeIncrementGesture;	// 40 = 0x28
    PBSystemGestureHandle *_volumeDecrementGesture;	// 48 = 0x30
    PBSystemGestureHandle *_switchToATVGesture;	// 56 = 0x38
}

+ (_Bool)showATVVolumeUIForExternalAudioSource;	// IMP=0x00200000001ff946
+ (void)performVolumeDownWithGestureRecognizerState:(long long)arg1;	// IMP=0x00100000001ff8f2
+ (void)performVolumeUpWithGestureRecognizerState:(long long)arg1;	// IMP=0x00100000001ff89e
+ (void)sendActionOrShowUnconfiguredAlertForAction:(long long)arg1;	// IMP=0x00100000001ff84a
+ (id)volumeController;	// IMP=0x00100000001ff7f2
+ (_Bool)isAppleIRRemotePaired;	// IMP=0x00100000001ff7a6
+ (void)unpairAppleIRRemote;	// IMP=0x00100000001ff754
+ (void)pairAppleIRRemote;	// IMP=0x00100000001ff702
+ (_Bool)volumeControlNeedsConfiguring;	// IMP=0x00100000001ff4bb
+ (id)sharedSystem;	// IMP=0x00100000001ff463
+ (id)_sharedInstance;	// IMP=0x001000000020163e
- (void).cxx_destruct;	// IMP=0x00100000002015de
@property(readonly, nonatomic) PBSystemGestureHandle *switchToATVGesture; // @synthesize switchToATVGesture=_switchToATVGesture;
@property(readonly, nonatomic) PBSystemGestureHandle *volumeDecrementGesture; // @synthesize volumeDecrementGesture=_volumeDecrementGesture;
@property(readonly, nonatomic) PBSystemGestureHandle *volumeIncrementGesture; // @synthesize volumeIncrementGesture=_volumeIncrementGesture;
@property(readonly, nonatomic) PBSystemGestureHandle *volumeMuteButtonGesture; // @synthesize volumeMuteButtonGesture=_volumeMuteButtonGesture;
@property(retain, nonatomic) TVSStateMachine *volumeBehaviorStateMachine; // @synthesize volumeBehaviorStateMachine=_volumeBehaviorStateMachine;
@property(retain, nonatomic) PBVolumeController *volumeController; // @synthesize volumeController=_volumeController;
@property(retain, nonatomic) PBSExternalControlSystem *externalControlSystem; // @synthesize externalControlSystem=_externalControlSystem;
- (void)_initializeVolumeBehaviorStateMachine;	// IMP=0x0010000000200a00
- (void)_listenForNowPlayingAppNotifications;	// IMP=0x001000000020097c
- (void)_listenForVolumeButtonOverrideUpdates;	// IMP=0x0010000000200917
- (void)_sendAction:(long long)arg1 orShowUnconfiguredAlert:(_Bool)arg2;	// IMP=0x001000000020057b
- (void)_sendActionOrShowUnconfiguredAlertForAction:(long long)arg1;	// IMP=0x0010000000200563
- (void)_performVolumeDownWithGestureRecognizerState:(long long)arg1;	// IMP=0x0010000000200417
- (void)_performVolumeUpWithGestureRecognizerState:(long long)arg1;	// IMP=0x00100000002002cb
- (void)_initializeVolumeButtonGestures;	// IMP=0x00100000001ffe2f
- (void)volumeSupportedChanged:(id)arg1 forOutputContext:(unsigned long long)arg2;	// IMP=0x00100000001ffdea
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;	// IMP=0x00100000001ffc2c
- (void)dealloc;	// IMP=0x00100000001ffbbd
- (id)init;	// IMP=0x00100000001ffad6
- (void)tvs_bindDisplayModeBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x00100000001ff9e0
- (id)DisplayModeBinding;	// IMP=0x00100000001ff98e
- (_Bool)_displayHasNonZeroSize;	// IMP=0x001000000020198f
- (void)_pauseOnResignedActiveSource;	// IMP=0x001000000020180d
- (_Bool)_shouldSuppressWakeForRemoteControlButton:(long long)arg1;	// IMP=0x00100000002017fd
- (void)_handleDisplayModeDidChange;	// IMP=0x0010000000201695

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

