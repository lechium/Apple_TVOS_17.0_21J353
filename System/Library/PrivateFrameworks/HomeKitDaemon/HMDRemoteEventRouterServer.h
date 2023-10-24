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

+ (id)logCategory;	// IMP=0x00100000005c0c7e
- (void).cxx_destruct;	// IMP=0x00000000005bf9c4
@property(readonly) NSMutableArray *currentConnections; // @synthesize currentConnections=_currentConnections;
- (id)dumpStateDescription;	// IMP=0x00000000005bf8ac
- (void)configureWithHome:(id)arg1 isPrimaryResident:(_Bool)arg2 isResidentEventProviding:(_Bool)arg3 additionalPolicies:(id)arg4;	// IMP=0x00000000005bf72f
@property(readonly) NSUUID *residentModeUUID;
- (_Bool)shouldAllowEvent:(id)arg1 topic:(id)arg2 connection:(id)arg3;	// IMP=0x00000000005bf33d
- (void)logMetricsForLiveEvents:(id)arg1 cachedEvents:(id)arg2 destinationDevice:(id)arg3 destinationDeviceIdentifier:(id)arg4 responseMessageType:(unsigned long long)arg5;	// IMP=0x00000000005bf2bc
- (void)server:(id)arg1 logMetricsForEventTopic:(id)arg2 eventSize:(unsigned long long)arg3 isCached:(_Bool)arg4;	// IMP=0x00000000005bf2b6
- (void)server:(id)arg1 logMetricsForMessageDatagramFragmentation:(_Bool)arg2 isFragmented:(_Bool)arg3;	// IMP=0x00000000005bf22f
- (void)server:(id)arg1 sendEvents:(id)arg2 cachedEvents:(id)arg3 connection:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00000000005bebd6
- (void)server:(id)arg1 connectionDidFail:(id)arg2;	// IMP=0x00000000005beb00
- (void)server:(id)arg1 connectionDidExpire:(id)arg2;	// IMP=0x00000000005bea2a
- (void)server:(id)arg1 connectionDidConnect:(id)arg2;	// IMP=0x00000000005be844
- (_Bool)serverSupportFragmentCachedEvents:(id)arg1;	// IMP=0x00000000005be83c
- (unsigned long long)serverFragmentEventsDataSize:(id)arg1;	// IMP=0x00000000005be831
- (id)serverTimerProvider:(id)arg1;	// IMP=0x00000000005be809
- (double)serverDebounceTimeInterval:(id)arg1;	// IMP=0x00000000005be7e8
- (double)server:(id)arg1 timeoutIntervalForConnection:(id)arg2;	// IMP=0x00000000005be7da
- (_Bool)server:(id)arg1 shouldProcessEventsForConnection:(id)arg2 shouldLogState:(_Bool)arg3;	// IMP=0x00000000005be3d4
- (_Bool)server:(id)arg1 isConnectionTerminatingError:(id)arg2;	// IMP=0x00000000005be3cc
- (id)server:(id)arg1 forwardingTopicsForTopics:(id)arg2;	// IMP=0x00000000005be355
- (id)server:(id)arg1 expandedTopicsForTopics:(id)arg2;	// IMP=0x00000000005be2bf
- (id)server:(id)arg1 upstreamTopicsForTopic:(id)arg2;	// IMP=0x00000000005be1c6
- (CDUnknownBlockType)responseHandlerForSendMessageIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000005be0df
- (void)sendMessageWithPayloadMessage:(id)arg1 destination:(id)arg2 messageType:(long long)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x00000000005bdedc
- (void)submitLogEvent:(id)arg1;	// IMP=0x00000000005bde78
- (void)submitLogEvent:(id)arg1 error:(id)arg2;	// IMP=0x00000000005bddfc
- (void)_handleFetchEventsRequest:(id)arg1 originalMessage:(id)arg2;	// IMP=0x00000000005bd8bf
- (void)_handleKeepAliveRequest:(id)arg1 originalMessage:(id)arg2;	// IMP=0x00000000005bd4b9
- (void)_handleChangeRegistrationsRequest:(id)arg1 originalMessage:(id)arg2;	// IMP=0x00000000005bcf7d
- (void)_handleDisconnectRequest:(id)arg1 originalMessage:(id)arg2;	// IMP=0x00000000005bcc0e
- (void)refreshConnections:(id)arg1;	// IMP=0x00000000005bca69
- (void)_handleConnectRequest:(id)arg1 originalMessage:(id)arg2 connectionMode:(long long)arg3;	// IMP=0x00000000005bc183
- (id)_underlyingMessageDataFromFragmentMessageData:(id)arg1 error:(id *)arg2;	// IMP=0x00000000005bc044
- (void)_handleProtoRequest:(id)arg1 originalMessage:(id)arg2 connectionMode:(long long)arg3;	// IMP=0x00000000005bbdcb
- (void)_handleRequestMessage:(id)arg1 connectionMode:(long long)arg2;	// IMP=0x00000000005bb9c0
- (void)_handlePrimaryRequestMessage:(id)arg1;	// IMP=0x00000000005bb9ac
- (void)_handleUserPrivilegeChange:(id)arg1;	// IMP=0x00000000005bb7d2
- (_Bool)isErrorHMENotAcceptingConnections:(id)arg1;	// IMP=0x00000000005bb745
- (void)respondToMessage:(id)arg1 underlyingResponseData:(id)arg2 supportsFragmentMessage:(_Bool)arg3 label:(id)arg4;	// IMP=0x00000000005bb3ca
- (void)respondToMessage:(id)arg1 underlyingResponseData:(id)arg2 connection:(id)arg3 label:(id)arg4;	// IMP=0x00000000005bb335
- (id)messageTargetForMode:(long long)arg1;	// IMP=0x00000000005bb2fd
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
- (void)handleHomeUserRemovedNotification:(id)arg1;	// IMP=0x00000000005bb1f8
- (void)handlePrimaryResidentIsCurrentDeviceChangeNotification:(id)arg1;	// IMP=0x00000000005bb191
- (void)_registerForAccessoryMessages:(id)arg1;	// IMP=0x00000000005bae9d
- (void)_registerForMessages:(id)arg1 withHome:(id)arg2;	// IMP=0x00000000005babe2
- (id)logIdentifier;	// IMP=0x00000000005babb5
@property(readonly, copy) NSString *description;
- (id)initWithPrimaryModeUUID:(id)arg1 residentModeUUID:(id)arg2 queue:(id)arg3 messageDispatcher:(id)arg4 dataSource:(id)arg5 notificationCenter:(id)arg6 requestMessageName:(id)arg7 updateMessageName:(id)arg8 logCategory:(const char *)arg9 logEventSubmitter:(id)arg10 connectionServerFactory:(CDUnknownBlockType)arg11;	// IMP=0x00000000005ba806
- (id)initWithPrimaryModeUUID:(id)arg1 residentModeUUID:(id)arg2 queue:(id)arg3 messageDispatcher:(id)arg4 dataSource:(id)arg5 notificationCenter:(id)arg6 requestMessageName:(id)arg7 updateMessageName:(id)arg8 subscriptionProvider:(id)arg9 registrationEventRouter:(id)arg10 storeReadHandle:(id)arg11;	// IMP=0x00000000005ba552

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
