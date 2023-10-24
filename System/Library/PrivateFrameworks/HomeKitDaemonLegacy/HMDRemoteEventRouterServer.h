//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMDEventRouterTimerProvider, HMDRemoteEventRouterServerMessageReceiver, HMEMessageDatagramServer, HMFMessageDispatcher, NSMutableArray, NSMutableDictionary, NSNotificationCenter, NSString, NSUUID;
@protocol HMDRemoteEventRouterServerDataSource, HMMLogEventSubmitting, OS_dispatch_queue, OS_os_log;

__attribute__((visibility("hidden")))
@interface HMDRemoteEventRouterServer : NSObject
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    _Bool _isPrimaryResident;	// 16 = 0x10
    _Bool _isResidentEventProviding;	// 17 = 0x11
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    NSUUID *_homeUUID;	// 32 = 0x20
    NSUUID *_accessoryUUID;	// 40 = 0x28
    NSString *_routerRequestMessageName;	// 48 = 0x30
    NSString *_routerUpdateMessageName;	// 56 = 0x38
    HMFMessageDispatcher *_messageDispatcher;	// 64 = 0x40
    NSNotificationCenter *_notificationCenter;	// 72 = 0x48
    HMDEventRouterTimerProvider *_timerProvider;	// 80 = 0x50
    HMEMessageDatagramServer *_connectionServer;	// 88 = 0x58
    id <HMDRemoteEventRouterServerDataSource> _dataSource;	// 96 = 0x60
    NSMutableDictionary *_accessControls;	// 104 = 0x68
    HMDRemoteEventRouterServerMessageReceiver *_accessoryMessageReceiver;	// 112 = 0x70
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 120 = 0x78
    NSMutableArray *_currentConnections;	// 128 = 0x80
}

+ (id)logCategory;	// IMP=0x00100000005105cf
- (void).cxx_destruct;	// IMP=0x000000000050f315
@property(readonly) NSMutableArray *currentConnections; // @synthesize currentConnections=_currentConnections;
- (id)dumpStateDescription;	// IMP=0x000000000050f1fd
- (void)configureWithHome:(id)arg1 isPrimaryResident:(_Bool)arg2 isResidentEventProviding:(_Bool)arg3 additionalPolicies:(id)arg4;	// IMP=0x000000000050f080
@property(readonly) NSUUID *residentModeUUID;
- (_Bool)shouldAllowEvent:(id)arg1 topic:(id)arg2 connection:(id)arg3;	// IMP=0x000000000050ec8e
- (void)logMetricsForLiveEvents:(id)arg1 cachedEvents:(id)arg2 destinationDevice:(id)arg3 destinationDeviceIdentifier:(id)arg4 responseMessageType:(unsigned long long)arg5;	// IMP=0x000000000050ec0d
- (void)server:(id)arg1 logMetricsForEventTopic:(id)arg2 eventSize:(unsigned long long)arg3 isCached:(_Bool)arg4;	// IMP=0x000000000050ec07
- (void)server:(id)arg1 logMetricsForMessageDatagramFragmentation:(_Bool)arg2 isFragmented:(_Bool)arg3;	// IMP=0x000000000050eb80
- (void)server:(id)arg1 sendEvents:(id)arg2 cachedEvents:(id)arg3 connection:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x000000000050e527
- (void)server:(id)arg1 connectionDidFail:(id)arg2;	// IMP=0x000000000050e451
- (void)server:(id)arg1 connectionDidExpire:(id)arg2;	// IMP=0x000000000050e37b
- (void)server:(id)arg1 connectionDidConnect:(id)arg2;	// IMP=0x000000000050e195
- (_Bool)serverSupportFragmentCachedEvents:(id)arg1;	// IMP=0x000000000050e17d
- (unsigned long long)serverFragmentEventsDataSize:(id)arg1;	// IMP=0x000000000050e15d
- (id)serverTimerProvider:(id)arg1;	// IMP=0x000000000050e135
- (double)serverDebounceTimeInterval:(id)arg1;	// IMP=0x000000000050e114
- (double)server:(id)arg1 timeoutIntervalForConnection:(id)arg2;	// IMP=0x000000000050e106
- (_Bool)server:(id)arg1 shouldProcessEventsForConnection:(id)arg2 shouldLogState:(_Bool)arg3;	// IMP=0x000000000050dd00
- (_Bool)server:(id)arg1 isConnectionTerminatingError:(id)arg2;	// IMP=0x000000000050dcf8
- (id)server:(id)arg1 forwardingTopicsForTopics:(id)arg2;	// IMP=0x000000000050dc81
- (id)server:(id)arg1 expandedTopicsForTopics:(id)arg2;	// IMP=0x000000000050dbeb
- (id)server:(id)arg1 upstreamTopicsForTopic:(id)arg2;	// IMP=0x000000000050daf2
- (CDUnknownBlockType)responseHandlerForSendMessageIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000050da0b
- (void)sendMessageWithPayloadMessage:(id)arg1 destination:(id)arg2 messageType:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x000000000050d808
- (void)submitLogEvent:(id)arg1;	// IMP=0x000000000050d7a4
- (void)submitLogEvent:(id)arg1 error:(id)arg2;	// IMP=0x000000000050d728
- (void)_handleFetchEventsRequest:(id)arg1 originalMessage:(id)arg2;	// IMP=0x000000000050d1eb
- (void)_handleKeepAliveRequest:(id)arg1 originalMessage:(id)arg2;	// IMP=0x000000000050cde5
- (void)_handleChangeRegistrationsRequest:(id)arg1 originalMessage:(id)arg2;	// IMP=0x000000000050c8a9
- (void)_handleDisconnectRequest:(id)arg1 originalMessage:(id)arg2;	// IMP=0x000000000050c53a
- (void)refreshConnections:(id)arg1;	// IMP=0x000000000050c395
- (void)_handleConnectRequest:(id)arg1 originalMessage:(id)arg2 connectionMode:(long long)arg3;	// IMP=0x000000000050baaf
- (id)_underlyingMessageDataFromFragmentMessageData:(id)arg1 error:(id *)arg2;	// IMP=0x000000000050b970
- (void)_handleProtoRequest:(id)arg1 originalMessage:(id)arg2 connectionMode:(long long)arg3;	// IMP=0x000000000050b6f6
- (void)_handleRequestMessage:(id)arg1 connectionMode:(long long)arg2;	// IMP=0x000000000050b2eb
- (void)_handlePrimaryRequestMessage:(id)arg1;	// IMP=0x000000000050b2d7
- (void)_handleUserPrivilegeChange:(id)arg1;	// IMP=0x000000000050b0fd
- (_Bool)isErrorHMENotAcceptingConnections:(id)arg1;	// IMP=0x000000000050b070
- (void)respondToMessage:(id)arg1 underlyingResponseData:(id)arg2 supportsFragmentMessage:(_Bool)arg3 label:(id)arg4;	// IMP=0x000000000050acf5
- (void)respondToMessage:(id)arg1 underlyingResponseData:(id)arg2 connection:(id)arg3 label:(id)arg4;	// IMP=0x000000000050ac60
- (id)messageTargetForMode:(long long)arg1;	// IMP=0x000000000050ac28
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)handleHomeUserRemovedNotification:(id)arg1;	// IMP=0x000000000050ab23
- (void)handlePrimaryResidentIsCurrentDeviceChangeNotification:(id)arg1;	// IMP=0x000000000050aabc
- (void)_registerForAccessoryMessages:(id)arg1;	// IMP=0x000000000050a7c8
- (void)_registerForMessages:(id)arg1 withHome:(id)arg2;	// IMP=0x000000000050a50d
- (id)logIdentifier;	// IMP=0x000000000050a4e0
@property(readonly, copy) NSString *description;
- (id)initWithPrimaryModeUUID:(id)arg1 residentModeUUID:(id)arg2 queue:(id)arg3 messageDispatcher:(id)arg4 dataSource:(id)arg5 notificationCenter:(id)arg6 requestMessageName:(id)arg7 updateMessageName:(id)arg8 logCategory:(const char *)arg9 logEventSubmitter:(id)arg10 connectionServerFactory:(CDUnknownBlockType)arg11;	// IMP=0x000000000050a131
- (id)initWithPrimaryModeUUID:(id)arg1 residentModeUUID:(id)arg2 queue:(id)arg3 messageDispatcher:(id)arg4 dataSource:(id)arg5 notificationCenter:(id)arg6 requestMessageName:(id)arg7 updateMessageName:(id)arg8 subscriptionProvider:(id)arg9 registrationEventRouter:(id)arg10 storeReadHandle:(id)arg11;	// IMP=0x0000000000509e7d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
