//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMFExponentialBackoffTimer, NSMutableSet, NSObject, NSString, NSUUID;
@protocol OS_dispatch_group;

__attribute__((visibility("hidden")))
@interface HMDKeyTransferAgentServer
{
    _Bool _broadcastFailure;	// 8 = 0x8
    NSUUID *_currentKeyUUID;	// 16 = 0x10
    NSObject<OS_dispatch_group> *_broadcastGroup;	// 24 = 0x18
    NSMutableSet *_broadcastNotifiedDevices;	// 32 = 0x20
    HMFExponentialBackoffTimer *_broadcastUUIDTimer;	// 40 = 0x28
    CDUnknownBlockType _finalCompletionHandler;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x00100000006adc43
+ (_Bool)isPeerAvailable;	// IMP=0x00100000006ada22
- (void).cxx_destruct;	// IMP=0x00000000006ac227
@property(copy, nonatomic) CDUnknownBlockType finalCompletionHandler; // @synthesize finalCompletionHandler=_finalCompletionHandler;
@property(nonatomic) _Bool broadcastFailure; // @synthesize broadcastFailure=_broadcastFailure;
@property(retain, nonatomic) HMFExponentialBackoffTimer *broadcastUUIDTimer; // @synthesize broadcastUUIDTimer=_broadcastUUIDTimer;
@property(retain, nonatomic) NSMutableSet *broadcastNotifiedDevices; // @synthesize broadcastNotifiedDevices=_broadcastNotifiedDevices;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *broadcastGroup; // @synthesize broadcastGroup=_broadcastGroup;
@property(retain, nonatomic) NSUUID *currentKeyUUID; // @synthesize currentKeyUUID=_currentKeyUUID;
- (void)_handleKeyTransferAgentMessage:(id)arg1;	// IMP=0x00000000006a9ed4
- (void)_endPairingWithError:(id)arg1;	// IMP=0x00000000006a9e1c
- (void)beginPairingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000006a9d64
- (id)_httpMessageTransport;	// IMP=0x00000000006a9b98
- (void)__resetTimer:(id)arg1;	// IMP=0x00000000006a9a7d
- (void)__deviceRemovedFromAccount:(id)arg1;	// IMP=0x00000000006a998f
- (void)_device:(id)arg1 removedFromAccount:(id)arg2;	// IMP=0x00000000006a96a9
- (void)__deviceUpdated:(id)arg1;	// IMP=0x00000000006a95bb
- (void)__deviceAddedToAccount:(id)arg1;	// IMP=0x00000000006a94cd
- (void)_device:(id)arg1 addedToAccount:(id)arg2;	// IMP=0x00000000006a9118
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000006a90a7
- (_Bool)_endAdvertiseUUIDWithError:(id *)arg1;	// IMP=0x00000000006a8ed3
- (_Bool)_startAdvertiseUUIDWithError:(id *)arg1;	// IMP=0x00000000006a8bfc
- (void)resetConfig;	// IMP=0x00000000006a8ae1
- (void)dealloc;	// IMP=0x00000000006a8a17
- (id)initWithHomeManager:(id)arg1;	// IMP=0x00000000006a85b8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

