//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDNotificationRegistration, HMDSiriAccessoryMonitor, HMDSiriRemoteInputServer, HMDSiriSession, NSString;
@protocol OS_dispatch_queue, OS_dispatch_workloop;

__attribute__((visibility("hidden")))
@interface HMDSiriServer : NSObject
{
    unsigned int _targetControlIdentifier;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    NSObject<OS_dispatch_workloop> *_audioWorkloop;	// 24 = 0x18
    HMDNotificationRegistration *_notificationRegistration;	// 32 = 0x20
    HMDSiriRemoteInputServer *_siriInputServer;	// 40 = 0x28
    HMDSiriAccessoryMonitor *_siriAccessoryMonitor;	// 48 = 0x30
    HMDSiriSession *_siriUISession;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x001000000055700a
+ (id)sharedSiriServer;	// IMP=0x0010000000556fda
- (void).cxx_destruct;	// IMP=0x0000000000555fd4
@property(nonatomic) unsigned int targetControlIdentifier; // @synthesize targetControlIdentifier=_targetControlIdentifier;
@property(retain, nonatomic) HMDSiriSession *siriUISession; // @synthesize siriUISession=_siriUISession;
@property(retain, nonatomic) HMDSiriAccessoryMonitor *siriAccessoryMonitor; // @synthesize siriAccessoryMonitor=_siriAccessoryMonitor;
@property(retain, nonatomic) HMDSiriRemoteInputServer *siriInputServer; // @synthesize siriInputServer=_siriInputServer;
@property(readonly, nonatomic) HMDNotificationRegistration *notificationRegistration; // @synthesize notificationRegistration=_notificationRegistration;
@property(retain, nonatomic) NSObject<OS_dispatch_workloop> *audioWorkloop; // @synthesize audioWorkloop=_audioWorkloop;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)accessory:(id)arg1 didCloseDataStreamWithError:(id)arg2;	// IMP=0x0000000000555e79
- (void)accessoryDidStartListening:(id)arg1;	// IMP=0x0000000000555dc1
- (void)accessory:(id)arg1 didReceiveBulkSessionCandidate:(id)arg2;	// IMP=0x0000000000555bef
- (void)monitorHasNoAccessoriesForDragonSiri:(id)arg1;	// IMP=0x0000000000555b7e
- (void)monitor:(id)arg1 willNotAllowAccessoryForDragonSiri:(id)arg2;	// IMP=0x0000000000555b69
- (void)monitor:(id)arg1 willAllowAccessoryForDragonSiri:(id)arg2;	// IMP=0x0000000000555a80
- (void)monitor:(id)arg1 needsSiriCapabilityForAccessory:(id)arg2;	// IMP=0x0000000000555997
- (id)_getSiriSessionForAccessory:(id)arg1;	// IMP=0x0000000000555969
- (void)_removeDataStreamListenerForAccessory:(id)arg1;	// IMP=0x0000000000555880
- (_Bool)_isAudioCodecSupported:(id)arg1;	// IMP=0x0000000000555656
- (id)_getBestAudioCodecConfiguration:(id)arg1;	// IMP=0x00000000005554eb
- (_Bool)_isSiriInputType:(long long)arg1 supportedOnAccessory:(id)arg2 siriAudioConfiguration:(id)arg3;	// IMP=0x0000000000554cc4
- (void)_checkSiriSupportByAccessory:(id)arg1;	// IMP=0x0000000000554a99
- (void)_tearDownSiriUIContext;	// IMP=0x00000000005549ca
- (void)_setupSiriUIContext;	// IMP=0x000000000055473c
- (void)_maybeTearDownSiriPlugin;	// IMP=0x000000000055469e
- (void)_setupSiriPlugin;	// IMP=0x00000000005545f4
- (void)_handleDisconnectForAccessory:(id)arg1;	// IMP=0x00000000005543ef
- (void)handleAccessoryRemoved:(id)arg1;	// IMP=0x00000000005543a0
- (void)handleAccessoryUnconfigured:(id)arg1;	// IMP=0x0000000000554351
- (void)handleAccessoryConfigured:(id)arg1;	// IMP=0x000000000055425b
- (void)handleAccessoryHasBulkSendDataStream:(id)arg1;	// IMP=0x0000000000554165
- (void)registerForMessages;	// IMP=0x0000000000553fae
- (void)setTargetableAccessory:(id)arg1 withControllers:(id)arg2;	// IMP=0x0000000000553ed0
- (id)init;	// IMP=0x0000000000553d8a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

