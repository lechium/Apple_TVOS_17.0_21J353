//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDHomeManager, HMDRemoteEventRouterPrimaryResidentClient, HMDUserMessagePolicy, HMEDelegatingEventRouter, NSMutableArray, NSString, NSUUID;
@protocol HMDHomeRemoteEventRouterClientControllerDataSource, HMDHomeRemoteEventRouterClientFactory, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomeRemoteEventRouterClientController : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMEDelegatingEventRouter *_residentDelegatingEventRouter;	// 16 = 0x10
    HMDHomeManager *_homeManager;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_workQueue;	// 32 = 0x20
    NSUUID *_messageTargetUUID;	// 40 = 0x28
    NSString *_requestMessageName;	// 48 = 0x30
    NSString *_updateMessageName;	// 56 = 0x38
    id <HMDHomeRemoteEventRouterClientControllerDataSource> _dataSource;	// 64 = 0x40
    HMDUserMessagePolicy *_clientUserMessagePolicy;	// 72 = 0x48
    id <HMDHomeRemoteEventRouterClientFactory> _routerClientFactory;	// 80 = 0x50
    HMDRemoteEventRouterPrimaryResidentClient *_remoteEventRouterPrimaryResidentClient;	// 88 = 0x58
    NSMutableArray *_residentClients;	// 96 = 0x60
    NSUUID *_currentAccessoryUUID;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x000000000023327e
@property __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(readonly) HMEDelegatingEventRouter *residentDelegatingEventRouter; // @synthesize residentDelegatingEventRouter=_residentDelegatingEventRouter;
- (id)delegatingRouter:(id)arg1 upstreamTopicsFor:(id)arg2;	// IMP=0x0000000000233227
- (id)delegatingRouter:(id)arg1 filteredTopics:(id)arg2 forRouter:(id)arg3;	// IMP=0x0000000000232ead
- (_Bool)client:(id)arg1 isIdsIdentifier:(id)arg2 ofAccessory:(id)arg3;	// IMP=0x0000000000232db1
- (void)discoverPrimaryResidentForEventRouterClient:(id)arg1;	// IMP=0x0000000000232d71
- (id)client:(id)arg1 forwardingTopicsForTopics:(id)arg2;	// IMP=0x0000000000232c80
- (_Bool)routerClientShouldRestrictMessagingToLocalOnly:(id)arg1;	// IMP=0x0000000000232c78
- (_Bool)routerClientSupportsFragmentMessageForServerIdentifier:(id)arg1;	// IMP=0x0000000000232c70
- (id)primaryResidentChangeMonitorForRouterClient:(id)arg1;	// IMP=0x0000000000232c1d
- (id)routerClientPrimaryResidentDeviceIdentifier:(id)arg1;	// IMP=0x0000000000232bca
- (_Bool)isNetworkAvailable;	// IMP=0x0000000000232b85
- (_Bool)isCurrentDevicePrimaryResident;	// IMP=0x0000000000232b40
- (id)routerClientMessageDestination:(id)arg1 serverIdentifier:(out id *)arg2;	// IMP=0x00000000002326cd
- (id)dumpStateDescription;	// IMP=0x0000000000232476
- (void)networkAvailabilityDidChange:(_Bool)arg1;	// IMP=0x0000000000232406
- (void)removeResidentRouterForAccessoryUUID:(id)arg1;	// IMP=0x0000000000232351
- (void)createResidentRouterForAccessoryUUID:(id)arg1;	// IMP=0x000000000023229c
- (void)updateCurrentAccessoryUUID:(id)arg1;	// IMP=0x00000000002321e7
@property(readonly) NSUUID *homeUUID;
- (id)initWithMessageTargetUUID:(id)arg1 workQueue:(id)arg2 dataSource:(id)arg3 routerClientFactory:(id)arg4 requestMessageName:(id)arg5 updateMessageName:(id)arg6 clientUserMessagePolicy:(id)arg7 currentAccessoryUUID:(id)arg8 assertionController:(id)arg9 delegatingRouterFactory:(CDUnknownBlockType)arg10;	// IMP=0x0000000000231d8f
- (id)initWithMessageTargetUUID:(id)arg1 workQueue:(id)arg2 dataSource:(id)arg3 requestMessageName:(id)arg4 updateMessageName:(id)arg5 clientUserMessagePolicy:(id)arg6 currentAccessoryUUID:(id)arg7 assertionController:(id)arg8;	// IMP=0x0000000000231c09

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

