//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterResidentClient
{
    _Bool _hasResetConnectionTimer;	// 8 = 0x8
    NSUUID *_homeUUID;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000049624b
@property(readonly, copy) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
- (id)forwardingTopicsForTopics:(id)arg1 downstreamRouter:(id)arg2;	// IMP=0x0000000000496187
- (id)client:(id)arg1 upstreamTopicsForTopic:(id)arg2;	// IMP=0x00000000004960d9
- (id)dumpStateDescription;	// IMP=0x000000000049605b
- (_Bool)clientIsEnabled:(id)arg1;	// IMP=0x0000000000495faf
- (void)handlePrimaryResidentReceivedIncomingConnection:(id)arg1;	// IMP=0x0000000000495e43
- (void)handleAccessoryDeviceDidUpdateNotification:(id)arg1;	// IMP=0x0000000000495d12
- (void)handlePrimaryResidentConfirmedDeviceIdentifierChangeNotification:(id)arg1;	// IMP=0x0000000000495c5a
- (id)accessoryUUID;	// IMP=0x0000000000495c48
- (void)_registerForNotifications;	// IMP=0x0000000000495b9f
- (void)configureIsPrimaryResident:(_Bool)arg1 networkAvailable:(_Bool)arg2 additionalPolicies:(id)arg3;	// IMP=0x0000000000495b5e
- (id)initWitAccessoryUUID:(id)arg1 homeUUID:(id)arg2 queue:(id)arg3 dataSource:(id)arg4 messageDispatcher:(id)arg5 notificationCenter:(id)arg6 requestMessageName:(id)arg7 updateMessageName:(id)arg8 storeReadHandle:(id)arg9 storeWriteHandle:(id)arg10 retryIntervalProvider:(id)arg11 logCategory:(const char *)arg12;	// IMP=0x0000000000495902

@end

