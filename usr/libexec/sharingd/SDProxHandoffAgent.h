//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUCoalescer, CUSystemMonitor, MISSING_TYPE, NSMutableDictionary, NSMutableSet, RPCompanionLinkClient, SDProximityController, SDStatusMonitor, SFCombinedDevice, SFDeviceDiscovery, SFNotificationProxy, SFProxHandoffService;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SDProxHandoffAgent : NSObject
{
    SFDeviceDiscovery *_bleActionDiscovery;	// 8 = 0x8
    NSMutableDictionary *_bleActionDevices;	// 16 = 0x10
    NSObject<OS_dispatch_source> *_bleActionScanTimer;	// 24 = 0x18
    MISSING_TYPE *_bleActionScanTimedOut;	// 32 = 0x20
    SFProxHandoffService *_bleActionService;	// 40 = 0x28
    NSObject<OS_dispatch_source> *_bleActionServiceTimer;	// 48 = 0x30
    SFDeviceDiscovery *_bleInfoDiscovery;	// 56 = 0x38
    NSMutableDictionary *_bleInfoDevices;	// 64 = 0x40
    CUCoalescer *_bleMapCoalescer;	// 72 = 0x48
    NSMutableDictionary *_bleUnmapped;	// 80 = 0x50
    _Bool _candidateNearby;	// 88 = 0x58
    _Bool _clientShouldAdvertise;	// 89 = 0x59
    RPCompanionLinkClient *_clinkClient;	// 96 = 0x60
    NSObject<OS_dispatch_source> *_delayTimer;	// 104 = 0x68
    NSMutableDictionary *_mappedDevices;	// 112 = 0x70
    _Bool _motionMonitorStarted;	// 120 = 0x78
    SFNotificationProxy *_notificationProxy;	// 128 = 0x80
    NSMutableSet *_proxClients;	// 136 = 0x88
    _Bool _stationary;	// 144 = 0x90
    SDStatusMonitor *_statusMonitor;	// 152 = 0x98
    NSMutableSet *_suppressedDeviceIDs;	// 160 = 0xa0
    CUSystemMonitor *_systemMonitor;	// 168 = 0xa8
    NSObject<OS_dispatch_source> *_transferTimer;	// 176 = 0xb0
    SFCombinedDevice *_uiDevice;	// 184 = 0xb8
    _Bool _unansweredCall;	// 192 = 0xc0
    _Bool _userOnCall;	// 193 = 0xc1
    SDProximityController *_proximityController;	// 200 = 0xc8
    double _prefBLEActionScanSecs;	// 208 = 0xd0
    _Bool _prefEnabled;	// 216 = 0xd8
    _Bool _prefForceShouldAdvertise;	// 217 = 0xd9
    _Bool _prefForceStationary;	// 218 = 0xda
    _Bool _prefForceOnCall;	// 219 = 0xdb
    _Bool _prefHighNormal;	// 220 = 0xdc
    _Bool _prefIgnoreMediumThrottle;	// 221 = 0xdd
    _Bool _prefMediumBubbleEnabled;	// 222 = 0xde
    unsigned long long _prefMediumBubbleLastTicks;	// 224 = 0xe0
    double _prefRetriggerSecs;	// 232 = 0xe8
    double _prefTransferSecs;	// 240 = 0xf0
    unsigned long long _prefThrottleEventCount;	// 248 = 0xf8
    unsigned long long _prefThrottleEventMax;	// 256 = 0x100
    _Bool _preventNotifications;	// 264 = 0x108
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 272 = 0x110
}

+ (id)sharedAgent;	// IMP=0x00400000000783f2
- (void).cxx_destruct;	// IMP=0x00200000000862d0
@property(nonatomic) _Bool preventNotifications; // @synthesize preventNotifications=_preventNotifications;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)testUI:(id)arg1;	// IMP=0x001000000008623a
- (void)proximityDeviceDidTrigger:(id)arg1;	// IMP=0x00100000000860d4
- (id)displayNameForContact:(id)arg1;	// IMP=0x001000000008609d
- (unsigned long long)notificationHomePodTypeForDevice:(id)arg1;	// IMP=0x0010000000086021
- (id)mediaTransferInfoFromInfo:(id)arg1;	// IMP=0x0010000000085ee9
- (_Bool)callTransferShouldPush:(id)arg1;	// IMP=0x0010000000085ee1
- (id)callTransferInfoForDevice:(id)arg1;	// IMP=0x0010000000085c6c
- (_Bool)_shouldMediumPromptWithInfo:(id)arg1;	// IMP=0x0010000000085b1c
- (id)_routes;	// IMP=0x0010000000085b14
- (id)_routeForDevice:(id)arg1;	// IMP=0x00100000000858a3
- (void)_resetAllStates;	// IMP=0x001000000008579a
- (void)_combinedDevicePrepareForCallTransferTrigger:(id)arg1;	// IMP=0x00100000000856d2
- (_Bool)_expectingContentForDeviceID:(id)arg1;	// IMP=0x001000000008569f
- (_Bool)_combinedDeviceIsSuppressed:(id)arg1;	// IMP=0x001000000008561a
- (id)_combinedDeviceForUIID:(id)arg1;	// IMP=0x00100000000853db
- (id)_combinedDevicePending;	// IMP=0x0010000000084dca
- (void)_uiStopIfNeeded:(id)arg1 reason:(long long)arg2;	// IMP=0x00100000000848c0
- (void)_uiDismissWhenReady:(id)arg1 reason:(long long)arg2;	// IMP=0x0010000000084680
- (void)_hapticsEnsureStopped;	// IMP=0x001000000008467a
- (void)_hapticsEnsurePrepared;	// IMP=0x0010000000084674
- (void)_hapticsFireNotificationSuccess;	// IMP=0x001000000008466e
- (void)userDidTapNotification:(id)arg1;	// IMP=0x00100000000845bd
- (void)notificationDidDismiss:(id)arg1 reason:(long long)arg2;	// IMP=0x00100000000844c5
- (void)_proxiedNotificationWasTapped:(id)arg1;	// IMP=0x0010000000083e87
- (void)_proxiedNotificationDidDismiss:(id)arg1 reason:(long long)arg2;	// IMP=0x00100000000839b4
- (void)_throttleMediumSetTicks:(unsigned long long)arg1;	// IMP=0x0010000000083926
- (void)_throttleMediumReset;	// IMP=0x00100000000838ac
- (_Bool)_throttleMediumAllowsTrigger;	// IMP=0x001000000008385c
- (void)_throttleEventsReset;	// IMP=0x00100000000837e7
- (_Bool)_throttleEventsReachedMax;	// IMP=0x00100000000837c3
- (void)_throttleEventSet:(unsigned long long)arg1;	// IMP=0x0010000000083735
- (void)_throttleEventDidOccur;	// IMP=0x00100000000836b8
- (void)_serviceTimeoutFired;	// IMP=0x0010000000083645
- (void)_serviceTimeoutInvalidate;	// IMP=0x001000000008359c
- (void)_serviceTimeoutActivate;	// IMP=0x0010000000083486
- (_Bool)_serviceShouldStart;	// IMP=0x001000000008344f
- (void)_serviceEnsureStopped;	// IMP=0x00100000000833bb
- (void)_serviceEnsureStarted;	// IMP=0x0010000000083204
- (void)_proximityClientSeedWillTriggerDeviceIfNeeded:(id)arg1;	// IMP=0x0010000000082ff8
- (void)_proximityClientSeedInitialDevices:(id)arg1;	// IMP=0x0010000000082c71
- (void)_proximityClientDeviceUpdated:(id)arg1;	// IMP=0x001000000008293e
- (void)_proximityClientDeviceDidUnTrigger:(id)arg1;	// IMP=0x001000000008270c
- (void)_proximityClientDeviceWillTrigger:(id)arg1;	// IMP=0x00100000000824da
- (void)_proximityClientDeviceWasSelected:(id)arg1;	// IMP=0x00100000000822a8
- (void)_proximityClientDeviceWasDismissed:(id)arg1 reason:(long long)arg2;	// IMP=0x001000000008204a
- (void)_proximityClientDeviceWasDismissed:(id)arg1;	// IMP=0x0010000000081e18
- (void)_proximityClientDeviceExitedNearby:(id)arg1;	// IMP=0x0010000000081be6
- (void)_proximityClientDeviceEnteredNearby:(id)arg1;	// IMP=0x00100000000819b4
- (void)_proximityClientDeviceExitedImmediate:(id)arg1;	// IMP=0x0010000000081782
- (void)_proximityClientDeviceEnteredImmediate:(id)arg1;	// IMP=0x0010000000081550
- (int)proximityClientRequestScannerTimerReset:(id)arg1;	// IMP=0x0010000000081405
- (int)proximityClient:(id)arg1 updateContent:(id)arg2 forDevice:(id)arg3;	// IMP=0x0010000000080f37
- (int)proximityClient:(id)arg1 stopSuppressingDevice:(id)arg2;	// IMP=0x0010000000080e1e
- (int)proximityClient:(id)arg1 suppressDevice:(id)arg2;	// IMP=0x0010000000080acc
- (int)proximityClient:(id)arg1 provideContent:(id)arg2 forDevice:(id)arg3 force:(_Bool)arg4;	// IMP=0x00100000000805f1
- (int)proximityClient:(id)arg1 dismissContentForDevice:(id)arg2;	// IMP=0x0010000000080441
- (void)proximityClientUpdate:(id)arg1;	// IMP=0x0010000000080296
- (void)proximityClientStop:(id)arg1;	// IMP=0x0010000000080199
- (int)proximityClientStart:(id)arg1;	// IMP=0x001000000008007e
- (_Bool)_motionShouldStart;	// IMP=0x0010000000080062
- (void)_motionEnsureStopped;	// IMP=0x001000000008005c
- (void)_motionEnsureStarted;	// IMP=0x0010000000080056
- (void)_clinkHomePodHandleRequest:(id)arg1 responseHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000007ff10
- (void)_clinkHandleRequest:(id)arg1 options:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000007fd83
- (_Bool)_clinkShouldStart;	// IMP=0x001000000007fd4b
- (void)_clinkEnsureStopped;	// IMP=0x001000000007fca1
- (void)_clinkEnsureStarted;	// IMP=0x001000000007f775
- (id)_bleUpdateMappingWithDevice:(id)arg1;	// IMP=0x001000000007efc4
- (void)_bleUpdateMappingReset;	// IMP=0x001000000007ed1d
- (void)_bleUpdateMappingAndNearbyCoalesced;	// IMP=0x001000000007ea29
- (void)_bleUpdateMappingAndNearby;	// IMP=0x001000000007ea13
- (void)_bleDeviceNearbyExit:(id)arg1;	// IMP=0x001000000007e89a
- (void)_bleDeviceNearbyEnter:(id)arg1;	// IMP=0x001000000007e6e0
- (void)_bleInfoDeviceLost:(id)arg1;	// IMP=0x001000000007e5a8
- (void)_bleInfoDeviceFound:(id)arg1;	// IMP=0x001000000007e3e6
- (void)_bleInfoDeviceChanged:(id)arg1;	// IMP=0x001000000007e1d0
- (_Bool)_bleInfoDiscoveryShouldStart;	// IMP=0x001000000007e1c0
- (void)_bleInfoDiscoveryEnsureStopped;	// IMP=0x001000000007e0da
- (void)_bleInfoDiscoveryEnsureStarted;	// IMP=0x001000000007ddb7
- (void)_bleActionScanTimerFired;	// IMP=0x001000000007dd30
- (void)_bleActionScanTimerInvalidate;	// IMP=0x001000000007dc83
- (void)_bleActionScanTimerActivate;	// IMP=0x001000000007db69
- (void)_bleActionDeviceLost:(id)arg1;	// IMP=0x001000000007da51
- (void)_bleActionDeviceFoundCandidate:(id)arg1;	// IMP=0x001000000007d8d9
- (void)_bleActionDeviceFound:(id)arg1;	// IMP=0x001000000007d811
- (void)_bleActionDeviceChanged:(id)arg1;	// IMP=0x001000000007ce61
- (_Bool)_bleActionDiscoveryShouldStart;	// IMP=0x001000000007ce1e
- (void)_bleActionDiscoveryEnsureStopped;	// IMP=0x001000000007cd3b
- (void)_bleActionDiscoveryEnsureStarted;	// IMP=0x001000000007c7db
- (void)_runCallHandoffHandleDelayTimerFired;	// IMP=0x001000000007c652
- (void)_runCallHandoffStartDelayTimer;	// IMP=0x001000000007c562
- (void)_runCallHandoffHandleResponse:(id)arg1 error:(id)arg2;	// IMP=0x001000000007c48b
- (void)_runCallHandoffStart:(id)arg1;	// IMP=0x001000000007c2d8
- (void)_runTransferDone;	// IMP=0x001000000007c157
- (void)_runTransferPendingDismiss;	// IMP=0x001000000007bf9e
- (void)_runTransferReady;	// IMP=0x001000000007bd80
- (void)_runTransferPending;	// IMP=0x001000000007b950
- (void)_runTransferInProgress;	// IMP=0x001000000007b783
- (void)_runNotificationDismissed;	// IMP=0x001000000007b5a4
- (void)_runNotificationPresented;	// IMP=0x001000000007b3a1
- (void)_runNotificationReady;	// IMP=0x001000000007acb4
- (void)_runNotificationPendingContent;	// IMP=0x001000000007aace
- (void)_runNotificationPending;	// IMP=0x001000000007a7ca
- (_Bool)_runStateVerify:(int)arg1 device:(id)arg2;	// IMP=0x001000000007a6dc
- (void)_run;	// IMP=0x001000000007a66a
- (void)_scheduleRunAfter:(double)arg1;	// IMP=0x001000000007a5ed
- (void)commonSystemUIChanged;	// IMP=0x001000000007a4b5
- (_Bool)_systemCanTrigger;	// IMP=0x001000000007a443
- (void)_commonScreenStateChanged;	// IMP=0x001000000007a315
- (void)_commonShouldAdvertiseChanged;	// IMP=0x001000000007a111
- (void)_commonCallCountChanged;	// IMP=0x0010000000079e40
- (void)_commonEnsureStopped;	// IMP=0x0010000000079cbd
- (void)_commonEnsureStarted;	// IMP=0x001000000007980f
- (void)_updateCandidateIsNearby;	// IMP=0x001000000007976e
- (void)_update;	// IMP=0x00100000000795f9
- (void)prefsChanged;	// IMP=0x0010000000078c71
- (void)_invalidate;	// IMP=0x0010000000078b9e
- (void)invalidate;	// IMP=0x0010000000078b3a
- (void)activate;	// IMP=0x0010000000078a82
- (id)description;	// IMP=0x00100000000784a4
- (id)init;	// IMP=0x0010000000078447

@end

