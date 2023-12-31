//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSEnvironment, APSIDSProxyManager, NSArray, NSData, NSHashTable, NSMutableArray, NSMutableDictionary, NSNumber, NSString;
@protocol APSProxyAgentDelegate;

@interface APSProxyAgent : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    _Bool _canAttemptConnection;	// 9 = 0x9
    _Bool _hasActiveConnection;	// 10 = 0xa
    _Bool _gotNewToken;	// 11 = 0xb
    APSEnvironment *_environment;	// 16 = 0x10
    APSIDSProxyManager *_proxyManager;	// 24 = 0x18
    id <APSProxyAgentDelegate> _delegate;	// 32 = 0x20
    NSString *_guid;	// 40 = 0x28
    unsigned long long _presenceRetryTimeDelta;	// 48 = 0x30
    CDUnknownBlockType _queuedPresenceSend;	// 56 = 0x38
    CDUnknownBlockType _presenceCompletion;	// 64 = 0x40
    NSMutableArray *_appTokenGenerateCompletions;	// 72 = 0x48
    NSNumber *_maxMessageSize;	// 80 = 0x50
    NSNumber *_maxLargeMessageSize;	// 88 = 0x58
    NSData *_token;	// 96 = 0x60
    NSMutableDictionary *_outgoingMessageGUIDToCompletion;	// 104 = 0x68
    NSMutableDictionary *_outgoingMessageGUIDToMessageID;	// 112 = 0x70
    NSMutableDictionary *_connectionTypeByMessageID;	// 120 = 0x78
    NSHashTable *_stateListeners;	// 128 = 0x80
    NSHashTable *_dataListeners;	// 136 = 0x88
}

- (void).cxx_destruct;	// IMP=0x00200000000c4d8e
@property(retain, nonatomic) NSHashTable *dataListeners; // @synthesize dataListeners=_dataListeners;
@property(retain, nonatomic) NSHashTable *stateListeners; // @synthesize stateListeners=_stateListeners;
@property(retain, nonatomic) NSMutableDictionary *connectionTypeByMessageID; // @synthesize connectionTypeByMessageID=_connectionTypeByMessageID;
@property(retain, nonatomic) NSMutableDictionary *outgoingMessageGUIDToMessageID; // @synthesize outgoingMessageGUIDToMessageID=_outgoingMessageGUIDToMessageID;
@property(retain, nonatomic) NSMutableDictionary *outgoingMessageGUIDToCompletion; // @synthesize outgoingMessageGUIDToCompletion=_outgoingMessageGUIDToCompletion;
@property(nonatomic) _Bool gotNewToken; // @synthesize gotNewToken=_gotNewToken;
@property(retain, nonatomic) NSData *token; // @synthesize token=_token;
@property(retain, nonatomic) NSNumber *maxLargeMessageSize; // @synthesize maxLargeMessageSize=_maxLargeMessageSize;
@property(retain, nonatomic) NSNumber *maxMessageSize; // @synthesize maxMessageSize=_maxMessageSize;
@property(retain, nonatomic) NSMutableArray *appTokenGenerateCompletions; // @synthesize appTokenGenerateCompletions=_appTokenGenerateCompletions;
@property(copy, nonatomic) CDUnknownBlockType presenceCompletion; // @synthesize presenceCompletion=_presenceCompletion;
@property(copy, nonatomic) CDUnknownBlockType queuedPresenceSend; // @synthesize queuedPresenceSend=_queuedPresenceSend;
@property(nonatomic) unsigned long long presenceRetryTimeDelta; // @synthesize presenceRetryTimeDelta=_presenceRetryTimeDelta;
@property(nonatomic) _Bool hasActiveConnection; // @synthesize hasActiveConnection=_hasActiveConnection;
@property(nonatomic) _Bool canAttemptConnection; // @synthesize canAttemptConnection=_canAttemptConnection;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(nonatomic) __weak id <APSProxyAgentDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) APSIDSProxyManager *proxyManager; // @synthesize proxyManager=_proxyManager;
@property(retain, nonatomic) APSEnvironment *environment; // @synthesize environment=_environment;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
- (void)sendTokenGenerateMessageWithTopicHash:(id)arg1 baseToken:(id)arg2 appId:(unsigned short)arg3 expirationTTL:(unsigned int)arg4 vapidPublicKeyHash:(id)arg5 type:(long long)arg6 withCompletion:(CDUnknownBlockType)arg7;	// IMP=0x00100000000c4a0a
- (void)sendPubSubChannelListWithMetadata:(id)arg1 baseToken:(id)arg2 messageID:(unsigned int)arg3;	// IMP=0x00100000000c48a5
- (void)sendMessageTracingAckWithTopicHash:(id)arg1 topic:(id)arg2 tracingUUID:(id)arg3 status:(int)arg4 token:(id)arg5;	// IMP=0x00100000000c470f
- (void)sendMessageAcknowledgeMessageWithResponse:(long long)arg1 messageId:(id)arg2 generation:(long long)arg3 token:(id)arg4;	// IMP=0x00100000000c45c1
- (void)sendFilterMessageWithEnabledTopicsByHash:(id)arg1 ignoredTopicsByHash:(id)arg2 opportunisticTopicsByHash:(id)arg3 nonWakingTopicsByHash:(id)arg4 pausedTopicsByHash:(id)arg5 saltsByTopic:(id)arg6 token:(id)arg7 version:(unsigned long long)arg8 expectsResponse:(_Bool)arg9 withCompletion:(CDUnknownBlockType)arg10;	// IMP=0x00100000000c4299
- (id)sendMessage:(id)arg1 topicHash:(id)arg2 lastRTT:(id)arg3 token:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;	// IMP=0x00100000000c3fd7
- (void)sendConnectMessageWithToken:(id)arg1 presenceFlags:(unsigned int)arg2 certificates:(id)arg3 nonce:(id)arg4 signature:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000c3b46
- (void)sendConnectMessageWithToken:(id)arg1 state:(int)arg2 presenceFlags:(unsigned int)arg3 certificates:(id)arg4 nonce:(id)arg5 signature:(id)arg6 withCompletion:(CDUnknownBlockType)arg7;	// IMP=0x00100000000c3b40
- (void)sendConnectMessageWithToken:(id)arg1 state:(int)arg2 presenceFlags:(unsigned int)arg3 hwVersion:(id)arg4 swVersion:(id)arg5 swBuild:(id)arg6 certificates:(id)arg7 nonce:(id)arg8 signature:(id)arg9 withCompletion:(CDUnknownBlockType)arg10;	// IMP=0x00100000000c3b3a
- (void)sendTaskControlMessageWithMetadata:(id)arg1 messageId:(unsigned long long)arg2;	// IMP=0x00100000000c3b34
- (void)sendSetActiveState:(_Bool)arg1 forInterval:(unsigned int)arg2;	// IMP=0x00100000000c3b2e
- (void)sendMessageTransportAcknowledgeMessage;	// IMP=0x00100000000c3b28
- (void)sendActivityTrackingRequestWithMessageID:(unsigned long long)arg1 pushToken:(id)arg2 salt:(unsigned long long)arg3 trackingFlag:(unsigned int)arg4 timestamp:(unsigned long long)arg5;	// IMP=0x00100000000c3b22
- (_Bool)generationMatches:(unsigned long long)arg1;	// IMP=0x00100000000c3b1a
- (void)noteConnectionFailureWithReason:(unsigned int)arg1;	// IMP=0x00100000000c3b14
- (void)disconnectWithReason:(unsigned int)arg1;	// IMP=0x00100000000c3b00
- (void)noteConnected;	// IMP=0x00100000000c3afa
@property(readonly, nonatomic) _Bool isPowerEfficientToUse;
@property(readonly, nonatomic) int linkQuality;
@property(readonly, nonatomic) NSString *serverHostname;
@property(readonly, nonatomic) NSString *serverIPAddress;
@property(readonly, nonatomic) _Bool secureHandshakeEnabled;
@property(readonly, nonatomic) _Bool isSuspended;
@property(readonly, nonatomic) _Bool isConnected;
@property(readonly, nonatomic) long long connectionType;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) _Bool didPushCauseWake;
@property(readonly, nonatomic) _Bool isPreferredInterface;
- (void)removeDataListener:(id)arg1;	// IMP=0x00100000000c3a27
- (void)addDataListener:(id)arg1;	// IMP=0x00100000000c39be
- (void)removeStateListener:(id)arg1;	// IMP=0x00100000000c3955
- (void)addStateListener:(id)arg1;	// IMP=0x00100000000c38ec
- (void)enumerateDataRecipient:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c37a9
- (void)enumerateStateListeners:(CDUnknownBlockType)arg1;	// IMP=0x00100000000c3666
- (void)proxyManager:(id)arg1 handlePubSubChannelListRequest:(long long)arg2 envName:(id)arg3 guid:(id)arg4;	// IMP=0x00100000000c35c9
- (void)proxyManager:(id)arg1 handlePubSubUpdateMessage:(id)arg2 connectionType:(long long)arg3 environmentName:(id)arg4 guid:(id)arg5;	// IMP=0x00100000000c33c8
- (void)proxyManager:(id)arg1 handlePubSubChannelListResponse:(id)arg2 environmentName:(id)arg3 guid:(id)arg4;	// IMP=0x00100000000c31f3
- (void)proxyManager:(id)arg1 appTokenGenerateResponse:(id)arg2 error:(id)arg3 guid:(id)arg4 environmentName:(id)arg5;	// IMP=0x00100000000c2f46
- (void)proxyManager:(id)arg1 expiredNonceWithServerTime:(id)arg2 shouldRollToken:(_Bool)arg3 guid:(id)arg4 environmentName:(id)arg5;	// IMP=0x00100000000c2b2a
- (void)proxyManager:(id)arg1 reversePushResponse:(id)arg2 messageGUID:(id)arg3 messageId:(id)arg4 guid:(id)arg5 environmentName:(id)arg6;	// IMP=0x00100000000c27ac
- (void)proxyManager:(id)arg1 receivedPush:(id)arg2 connectionType:(id)arg3 generation:(id)arg4 guid:(id)arg5 environmentName:(id)arg6;	// IMP=0x00100000000c2410
- (void)proxyManager:(id)arg1 updateKeepAliveInterval:(double)arg2;	// IMP=0x00100000000c240a
- (void)proxyManager:(id)arg1 incomingMessageSize:(id)arg2 largeMessageSize:(id)arg3 guid:(id)arg4 environmentName:(id)arg5;	// IMP=0x00100000000c218e
- (void)proxyManager:(id)arg1 incomingPushToken:(id)arg2 guid:(id)arg3 environmentName:(id)arg4;	// IMP=0x00100000000c1f70
- (void)proxyManager:(id)arg1 isConnected:(_Bool)arg2 guid:(id)arg3 environmentName:(id)arg4;	// IMP=0x00100000000c1c19
- (void)proxyManagerReceivedDaemonAliveNotification:(id)arg1;	// IMP=0x00100000000c1afd
- (void)proxyManager:(id)arg1 isNearbyChanged:(_Bool)arg2;	// IMP=0x00100000000c1a18
- (void)_noteConnection;	// IMP=0x00100000000c19c3
- (void)_markDisconnectedIsPermanent:(_Bool)arg1;	// IMP=0x00100000000c182d
- (void)_failAllPendingMessages;	// IMP=0x00100000000c1541
- (void)_sendMessageTracingAckWithStatus:(int)arg1 topic:(id)arg2 tracingUUID:(id)arg3 token:(id)arg4;	// IMP=0x00100000000c13fc
- (void)_sendInactiveMessage;	// IMP=0x00100000000c12e9
@property(readonly, nonatomic) NSArray *activeProtocolConnections;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00100000000c108d
- (id)initWithEnvironment:(id)arg1 proxyManager:(id)arg2 delegate:(id)arg3;	// IMP=0x00100000000c0edc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

