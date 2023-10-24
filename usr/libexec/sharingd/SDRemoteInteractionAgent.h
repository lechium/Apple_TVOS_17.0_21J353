//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUSystemMonitor, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSUUID, RPCompanionLinkClient, SDNotificationManager, SFDeviceDiscovery, SFService;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SDRemoteInteractionAgent : NSObject
{
    NSObject<OS_dispatch_source> *_aggressiveTimer;	// 8 = 0x8
    _Bool _clientEnabled;	// 16 = 0x10
    RPCompanionLinkClient *_clinkClient;	// 24 = 0x18
    _Bool _cloudPairedOnly;	// 32 = 0x20
    SFService *_controlService;	// 40 = 0x28
    NSUUID *_currentSessionID;	// 48 = 0x30
    NSString *_currentText;	// 56 = 0x38
    SFDeviceDiscovery *_deviceDiscovery;	// 64 = 0x40
    NSMutableDictionary *_devices;	// 72 = 0x48
    _Bool _idsMonitorInstalled;	// 80 = 0x50
    NSMutableSet *_legacy_sessionDeviceIDs;	// 88 = 0x58
    SDNotificationManager *_notificationManager;	// 96 = 0x60
    _Bool _rapportMonitorInstalled;	// 104 = 0x68
    long long _rssiThreshold;	// 112 = 0x70
    NSObject<OS_dispatch_source> *_rtiTimer;	// 120 = 0x78
    _Bool _serverEnabled;	// 128 = 0x80
    NSSet *_sessionDeviceIDs;	// 136 = 0x88
    NSMutableSet *_sessions;	// 144 = 0x90
    CUSystemMonitor *_systemMonitor;	// 152 = 0x98
    _Bool _preventNotifications;	// 160 = 0xa0
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 168 = 0xa8
}

+ (id)sharedAgent;	// IMP=0x00200000000a6d92
- (void).cxx_destruct;	// IMP=0x00200000000ac1d3
@property(nonatomic) _Bool preventNotifications; // @synthesize preventNotifications=_preventNotifications;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)testKeyboardUpdateWithDelay;	// IMP=0x00100000000ac183
- (void)testKeyboardUpdate;	// IMP=0x00100000000ac081
- (void)testKeyboardRemoveWithDelay;	// IMP=0x00100000000ac05e
- (void)testKeyboardRemove;	// IMP=0x00100000000abf88
- (void)testKeyboardPostWithDelay;	// IMP=0x00100000000abf65
- (void)testKeyboardPostThenUpdate;	// IMP=0x00100000000abe79
- (void)testKeyboardPost:(id)arg1;	// IMP=0x00100000000abd5c
- (void)clientUserDidTapNotification:(id)arg1;	// IMP=0x00100000000abcf3
- (void)_clientUpdateCoalesceTimerForDevice:(id)arg1 identifier:(id)arg2;	// IMP=0x00100000000abced
- (void)clientTextSessionDidBegin:(id)arg1 device:(id)arg2;	// IMP=0x00100000000abcd2
- (void)clientNotificationUpdateForDevice:(id)arg1 info:(id)arg2;	// IMP=0x00100000000abafb
- (void)clientNotificationUpdateForDevice:(id)arg1 rtiData:(id)arg2;	// IMP=0x00100000000ab924
- (void)clientNotificationRemoveForDevice:(id)arg1;	// IMP=0x00100000000ab77f
- (void)clientNotificationPostIfNeededForDevice:(id)arg1;	// IMP=0x00100000000ab21a
- (id)_rpCompanionLinkDeviceForSFDevice:(id)arg1;	// IMP=0x00100000000aae58
- (_Bool)_clientShouldStart;	// IMP=0x00100000000aacd2
- (void)_clientDeviceLockStatusChanged;	// IMP=0x00100000000aabea
- (void)_clientDeviceLost:(id)arg1;	// IMP=0x00100000000aaae4
- (void)_clientDeviceFound:(id)arg1;	// IMP=0x00100000000aa723
- (void)_clientClinkDeviceChanged:(id)arg1;	// IMP=0x00100000000aa6b7
- (void)_clientClinkDeviceLost:(id)arg1;	// IMP=0x00100000000aa64b
- (void)_clientClinkDeviceFound:(id)arg1;	// IMP=0x00100000000aa5df
- (void)_clientEnsureStopped;	// IMP=0x00100000000aa4c8
- (void)_clientEnsureStarted;	// IMP=0x00100000000a9aba
- (void)sessionStop:(id)arg1;	// IMP=0x00100000000a9a12
- (int)sessionStart:(id)arg1;	// IMP=0x00100000000a9696
- (void)advertisingTimerStart;	// IMP=0x00100000000a9553
- (void)advertisingTimerFired;	// IMP=0x00100000000a9497
- (void)handleInputDidEndWithFlags:(unsigned long long)arg1 sessionInfo:(id)arg2;	// IMP=0x00100000000a9365
- (void)handleInputDidBeginWithFlags:(unsigned long long)arg1 sessionInfo:(id)arg2;	// IMP=0x00100000000a9153
- (void)handleEventWithData:(id)arg1;	// IMP=0x00100000000a90ad
- (void)_sendRTIPayload:(id)arg1;	// IMP=0x00100000000a8d71
- (void)_serverSendTextSessionDidEnd:(id)arg1;	// IMP=0x00100000000a8b0c
- (void)_serverSendTextSessionDidBegin:(id)arg1;	// IMP=0x00100000000a8821
- (void)_legacy_serverRespondInfo:(id)arg1;	// IMP=0x00100000000a873e
- (void)_legacy_serverHandleRequest:(id)arg1;	// IMP=0x00100000000a84d4
- (void)_legacy_serverHandleEvent:(id)arg1;	// IMP=0x00100000000a803f
- (void)_serverEnsureStopped;	// IMP=0x00100000000a7f3d
- (void)_serverEnsureStarted;	// IMP=0x00100000000a7bd7
- (void)_commonRapportChanged:(id)arg1;	// IMP=0x00100000000a7b10
- (void)_commonIDSChanged:(id)arg1;	// IMP=0x00100000000a7a49
- (void)_commonEnsureStopped;	// IMP=0x00100000000a794b
- (void)_commonEnsureStarted;	// IMP=0x00100000000a7830
- (void)_update;	// IMP=0x00100000000a77b4
- (void)prefsChanged;	// IMP=0x00100000000a741a
- (void)invalidate;	// IMP=0x00100000000a7312
- (void)activate;	// IMP=0x00100000000a7149
- (id)description;	// IMP=0x00100000000a6e44
- (id)init;	// IMP=0x00100000000a6de7

@end
