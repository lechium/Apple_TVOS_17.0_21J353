//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFBluetoothHeadphoneInEarDetectionState, AFNotifyObserver, AFSiriAudioRoute, MISSING_TYPE, NSHashTable, NSString;
@protocol OS_dispatch_queue;

@interface AFSiriHeadphonesMonitor : NSObject
{
    unsigned long long _sessionState;	// 8 = 0x8
    unsigned long long _wirelessSplitterSessionActive;	// 16 = 0x10
    AFBluetoothHeadphoneInEarDetectionState *_inEarDetectionState;	// 24 = 0x18
    _Bool _guestConnected;	// 32 = 0x20
    _Bool _inWirelessSplitterSessionStateValid;	// 33 = 0x21
    MISSING_TYPE *_settingsConnection;	// 40 = 0x28
    AFNotifyObserver *_pairedInfoChangeObserver;	// 48 = 0x30
    AFNotifyObserver *_inEarDetectionStateObserver;	// 56 = 0x38
    AFNotifyObserver *_wirelessSplitterSessionObserver;	// 64 = 0x40
    AFNotifyObserver *_wirelessGuestConnectionObserver;	// 72 = 0x48
    AFNotifyObserver *_forcedUpdateObserver;	// 80 = 0x50
    NSString *_btAddress;	// 88 = 0x58
    NSString *_routeName;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_queue;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_btQueue;	// 112 = 0x70
    NSHashTable *_delegates;	// 120 = 0x78
    AFSiriAudioRoute *_currentAudioRoute;	// 128 = 0x80
}

+ (id)new;	// IMP=0x00200000000f8b56
+ (id)sharedMonitor;	// IMP=0x00100000000f8af3
- (void).cxx_destruct;	// IMP=0x00200000000f6afb
@property(retain, nonatomic) AFSiriAudioRoute *currentAudioRoute; // @synthesize currentAudioRoute=_currentAudioRoute;
- (void)_audioRouteDidChange:(id)arg1;	// IMP=0x00100000000f6adc
- (unsigned long long)_observerID;	// IMP=0x00100000000f6a8e
- (void)fetchInEarDetctionStateForBTAddress:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f69d7
- (void)fetchPrivateSessionStateWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f6857
- (void)_recomputePrivateSessionStateAndBroadcast:(_Bool)arg1;	// IMP=0x00100000000f669d
- (void)_broadcastInEarDetectionStateChangesFrom:(id)arg1 to:(id)arg2;	// IMP=0x00100000000f65de
- (void)_broadcastRouteAndAuthenticationCapability;	// IMP=0x00100000000f6593
- (void)notifyObserver:(id)arg1 didChangeStateFrom:(unsigned long long)arg2 to:(unsigned long long)arg3;	// IMP=0x00100000000f64f1
- (void)_settingsConnectionDidDisconnect;	// IMP=0x00100000000f64a6
- (id)_settingsConnection;	// IMP=0x00100000000f6437
- (void)_stopObservingInEarDetectionStateFromSource;	// IMP=0x00100000000f62eb
- (void)_fetchInEarDetectionStateAndStartObservingFromSourceForBTAddress:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000f6072
- (void)_fetchWirelessSplitterSessionInfoAndStartObservingFromSourceWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000f5f2e
- (_Bool)_updateAudioRouteAvailabilityAndBroadcast:(_Bool)arg1;	// IMP=0x00100000000f5f26
- (id)_getCurrentAudioRoute;	// IMP=0x00100000000f5f14
- (void)removeDelegate:(id)arg1;	// IMP=0x00100000000f5e87
- (void)addDelegate:(id)arg1;	// IMP=0x00100000000f5dfa
- (void)_updateAnnounceNotificationsOnHearingAidSupportedStatus;	// IMP=0x00100000000f5d90
- (void)_updateInEarDetectionStateAndObserve;	// IMP=0x00100000000f5d45
- (void)_updateWirelessSplitterSessionInfoAndObserve;	// IMP=0x00100000000f5cfa
- (void)_fetchInitialState;	// IMP=0x00100000000f5c88
- (id)init;	// IMP=0x00100000000f5c01
- (id)_init;	// IMP=0x00100000000f59a3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

