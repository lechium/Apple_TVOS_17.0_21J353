//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSPayloadMessageStats, MISSING_TYPE, NSData, NSSet, NSString;
@protocol APSConnectionServerDelegate><APSConnectionServerTokenDelegate, APSUser, APSUserPreferences, OS_dispatch_queue, OS_xpc_object;

@interface APSConnectionServer : NSObject
{
    id <APSConnectionServerDelegate><APSConnectionServerTokenDelegate> _delegate;	// 8 = 0x8
    NSString *_environmentName;	// 16 = 0x10
    NSData *_publicToken;	// 24 = 0x18
    unsigned int _connectionMachPort;	// 32 = 0x20
    NSString *_connectionPortName;	// 40 = 0x28
    int _clientPID;	// 48 = 0x30
    NSSet *_enabledTopics;	// 56 = 0x38
    NSSet *_ignoredTopics;	// 64 = 0x40
    NSSet *_opportunisticTopics;	// 72 = 0x48
    MISSING_TYPE *_nonWakingTopics;	// 80 = 0x50
    long long _publicTokenDeliveryRetries;	// 88 = 0x58
    unsigned long long _messageSize;	// 96 = 0x60
    unsigned long long _largeMessageSize;	// 104 = 0x68
    NSObject<OS_xpc_object> *_connection;	// 112 = 0x70
    NSString *_processName;	// 120 = 0x78
    double _dateCreated;	// 128 = 0x80
    APSPayloadMessageStats *_payloadMessageStats;	// 136 = 0x88
    long long _numberNotifications;	// 144 = 0x90
    double _lastNotificationTime;	// 152 = 0x98
    long long _numberNotificationsQueued;	// 160 = 0xa0
    long long _numberNotificationsDropped;	// 168 = 0xa8
    long long _numberNotificationsLost;	// 176 = 0xb0
    long long _numberNotificationsSent;	// 184 = 0xb8
    double _lastNotificationSentTime;	// 192 = 0xc0
    long long _numberNotificationsAcknowledged;	// 200 = 0xc8
    double _lastNotificationAcknowledgedTime;	// 208 = 0xd0
    NSString *_name;	// 216 = 0xd8
    _Bool _enableDarkWake;	// 224 = 0xe0
    _Bool _hasChosenDarkWakeTopics;	// 225 = 0xe1
    NSSet *_pushWakeTopics;	// 232 = 0xe8
    NSSet *_darkWakeTopics;	// 240 = 0xf0
    NSSet *_criticalWakeTopics;	// 248 = 0xf8
    NSObject<OS_dispatch_queue> *_queue;	// 256 = 0x100
    unsigned long long _enqueuedBlockCount;	// 264 = 0x108
    _Bool _isQueueSuspended;	// 272 = 0x110
    _Bool _enableCriticalReliability;	// 273 = 0x111
    _Bool _enableStatusChangeNotifications;	// 274 = 0x112
    _Bool _freshMachPort;	// 275 = 0x113
    _Bool _isPublicTokenAcknowledged;	// 276 = 0x114
    _Bool _isClosed;	// 277 = 0x115
    _Bool _trackActivityPresence;	// 278 = 0x116
    _Bool _isInitialized;	// 279 = 0x117
    id <APSUser> _user;	// 280 = 0x118
    id <APSUserPreferences> _userPreferences;	// 288 = 0x120
}

+ (id)environmentForNamedPort:(id)arg1 userPreferences:(id)arg2;	// IMP=0x0020000000062454
+ (void)serversWithEnvironmentName:(id)arg1 user:(id)arg2 userPreferences:(id)arg3 excludeServers:(id)arg4 delegate:(id)arg5 returnServers:(id)arg6;	// IMP=0x001000000005b140
+ (id)serversWithEnvironmentName:(id)arg1 user:(id)arg2 userPreferences:(id)arg3 excludeServers:(id)arg4 delegate:(id)arg5;	// IMP=0x001000000005afb5
+ (id)serverEnvironmentNamesForUserPreferences:(id)arg1;	// IMP=0x001000000005acf5
- (void).cxx_destruct;	// IMP=0x0020000000064e8d
@property(nonatomic) _Bool isInitialized; // @synthesize isInitialized=_isInitialized;
@property(retain, nonatomic) id <APSUserPreferences> userPreferences; // @synthesize userPreferences=_userPreferences;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) _Bool isClosed; // @synthesize isClosed=_isClosed;
@property(nonatomic) long long publicTokenDeliveryRetries; // @synthesize publicTokenDeliveryRetries=_publicTokenDeliveryRetries;
@property(nonatomic) _Bool trackActivityPresence; // @synthesize trackActivityPresence=_trackActivityPresence;
@property(readonly, nonatomic) _Bool enableDarkWake; // @synthesize enableDarkWake=_enableDarkWake;
@property(retain, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(readonly, retain, nonatomic) NSSet *nonWakingTopics; // @synthesize nonWakingTopics=_nonWakingTopics;
@property(retain, nonatomic) id <APSUser> user; // @synthesize user=_user;
@property(retain, nonatomic) NSSet *pushWakeTopics; // @synthesize pushWakeTopics=_pushWakeTopics;
@property(readonly, retain, nonatomic) NSString *environmentName; // @synthesize environmentName=_environmentName;
@property(retain, nonatomic) NSObject<OS_xpc_object> *connection; // @synthesize connection=_connection;
@property(nonatomic) _Bool enableStatusChangeNotifications; // @synthesize enableStatusChangeNotifications=_enableStatusChangeNotifications;
@property(nonatomic) _Bool enableCriticalReliability; // @synthesize enableCriticalReliability=_enableCriticalReliability;
@property(nonatomic) unsigned long long largeMessageSize; // @synthesize largeMessageSize=_largeMessageSize;
@property(nonatomic) unsigned long long messageSize; // @synthesize messageSize=_messageSize;
@property(readonly, copy, nonatomic) NSData *publicToken; // @synthesize publicToken=_publicToken;
@property(readonly, retain, nonatomic) NSSet *opportunisticTopics; // @synthesize opportunisticTopics=_opportunisticTopics;
@property(readonly, retain, nonatomic) NSSet *ignoredTopics; // @synthesize ignoredTopics=_ignoredTopics;
@property(readonly, retain, nonatomic) NSSet *enabledTopics; // @synthesize enabledTopics=_enabledTopics;
@property(nonatomic) __weak id <APSConnectionServerDelegate><APSConnectionServerTokenDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSString *description;
- (void)appendPrettyStatusToStatusPrinter:(id)arg1 forTopics:(id)arg2 type:(id)arg3;	// IMP=0x001000000006455b
- (void)appendPrettyStatusToStatusPrinter:(id)arg1;	// IMP=0x0010000000063190
- (id)JSONDebugState;	// IMP=0x0010000000062d0d
- (void)handleNotificationAcknowledged;	// IMP=0x0010000000062cd5
- (id)entitledTopicsFromSet:(id)arg1 unentitledTopics:(id *)arg2;	// IMP=0x0010000000062cbf
- (void)_savePersistentConnection;	// IMP=0x0010000000061f2a
- (void)_savePersistentConnectionTopics;	// IMP=0x0010000000061f18
@property(readonly, nonatomic) _Bool isConnected; // @dynamic isConnected;
@property(readonly, nonatomic) _Bool hasIdentity; // @dynamic hasIdentity;
- (void)saveAndUpdateDelegate;	// IMP=0x0010000000061d00
- (void)setEnabledTopics:(id)arg1 ignoredTopics:(id)arg2 opportunisticTopics:(id)arg3 nonWakingTopics:(id)arg4;	// IMP=0x0010000000061062
- (_Bool)_containsInvalidTopic:(id)arg1;	// IMP=0x0010000000060f14
- (void)_informTopicManagerOfChangedFilter:(long long)arg1 newTopics:(id)arg2 oldTopics:(id)arg3;	// IMP=0x0010000000060aef
- (void)_warnIfOverlappingTopics:(id)arg1 againstTopics:(id)arg2 string:(id)arg3;	// IMP=0x0010000000060872
- (void)handleChannelSubscriptionFailures:(id)arg1 forTopic:(id)arg2;	// IMP=0x0010000000060686
- (void)acknowledgeDidReceivePublicToken:(id)arg1;	// IMP=0x00100000000600dd
@property(nonatomic) _Bool isPublicTokenAcknowledged;
- (void)_redeliverCurrentPublicToken;	// IMP=0x001000000005ff47
- (void)handlePublicTokenDeliveryReply:(id)arg1;	// IMP=0x001000000005fc5d
@property(readonly, nonatomic) double publicTokenDeliveryDelay;
- (void)setPublicToken:(id)arg1 needsAck:(_Bool)arg2;	// IMP=0x001000000005f9d5
- (void)handleAckIncomingMessageWithGuid:(id)arg1 topic:(id)arg2 tracingUUID:(id)arg3;	// IMP=0x001000000005f93d
- (void)handleIncomingMessageReceiptWithTopic:(id)arg1 tracingUUID:(id)arg2;	// IMP=0x001000000005f8bf
- (void)handleUnsubscribeFromChannels:(id)arg1 forTopic:(id)arg2;	// IMP=0x001000000005f841
- (void)handleSubscribeToChannels:(id)arg1 forTopic:(id)arg2;	// IMP=0x001000000005f7c3
- (void)_handleInvalidateTokenForInfo:(id)arg1;	// IMP=0x001000000005f757
- (void)handleInvalidatePerAppTokenForInfo:(id)arg1;	// IMP=0x001000000005f67e
- (void)handleInvalidateURLTokenForTopic:(id)arg1;	// IMP=0x001000000005f578
- (void)handleInvalidatePerAppTokenForTopic:(id)arg1 identifier:(id)arg2;	// IMP=0x001000000005f4e6
- (void)handleInvalidateTokenForInfo:(id)arg1;	// IMP=0x001000000005f4d4
- (void)_sendClientToken:(id)arg1 forInfo:(id)arg2;	// IMP=0x001000000005f033
- (void)handleCurrentURLTokenForInfo:(id)arg1;	// IMP=0x001000000005efd7
- (void)handleCurrentTokenForInfo:(id)arg1;	// IMP=0x001000000005ef7b
- (void)handleReceivedTokenError:(id)arg1 forInfo:(id)arg2;	// IMP=0x001000000005ed97
- (void)handleReceivedToken:(id)arg1 forInfo:(id)arg2;	// IMP=0x001000000005ec72
- (void)_handleRequestTokenForInfo:(id)arg1;	// IMP=0x001000000005ec06
- (void)handleRequestURLTokenForInfo:(id)arg1;	// IMP=0x001000000005eb2d
- (void)handleRequestTokenForInfo:(id)arg1;	// IMP=0x001000000005ea54
- (void)handleRequestPerAppTokenForTopic:(id)arg1 identifier:(id)arg2;	// IMP=0x001000000005e9c2
- (void)handleFakeMessage:(id)arg1;	// IMP=0x001000000005e966
- (void)handleCancelOutgoingMessageWithID:(unsigned long long)arg1;	// IMP=0x001000000005e921
- (void)handleSendOutgoingMessage:(id)arg1;	// IMP=0x001000000005e854
- (void)handleResult:(id)arg1 forSendingOutgoingMessageWithID:(unsigned long long)arg2 sendRTT:(unsigned long long)arg3 ackTimestamp:(unsigned long long)arg4;	// IMP=0x001000000005e6a6
- (void)handleResult:(id)arg1 forSendingOutgoingMessageWithID:(unsigned long long)arg2;	// IMP=0x001000000005e68e
- (void)handleResult:(id)arg1 forSendingOutgoingMessage:(id)arg2;	// IMP=0x001000000005e5e4
- (void)handleReceivedMessage:(id)arg1;	// IMP=0x001000000005e364
- (void)_initiateConnectionIfNecessary;	// IMP=0x001000000005dca2
- (void)handleConnectionStatusChanged:(_Bool)arg1;	// IMP=0x001000000005dbdb
- (id)connectionPortName;	// IMP=0x001000000005dbcd
- (void)connectionInvalidated;	// IMP=0x001000000005db7e
- (void)_suspendQueue;	// IMP=0x001000000005db4d
- (void)_resumeQueue;	// IMP=0x001000000005db1c
- (void)connectionHandshakeDidComplete;	// IMP=0x001000000005daaa
- (void)_migratePersistentTopicsIfNeeded;	// IMP=0x001000000005d51d
- (id)aps_prettyDescription;	// IMP=0x001000000005cbef
@property(readonly, copy) NSString *debugDescription;
- (id)processNameWithLabels:(_Bool)arg1;	// IMP=0x001000000005ca04
- (void)close;	// IMP=0x001000000005c999
- (void)_lookUpMachPort;	// IMP=0x001000000005c838
- (void)dealloc;	// IMP=0x001000000005c7c9
- (id)initWithDelegate:(id)arg1 user:(id)arg2 userPreferences:(id)arg3 enableDarkWake:(_Bool)arg4 environmentName:(id)arg5 connectionPortName:(id)arg6 processName:(id)arg7 connection:(id)arg8;	// IMP=0x001000000005c364
- (void)_enqueueXPCMessage:(CDUnknownBlockType)arg1 wakingClient:(_Bool)arg2 highPriority:(_Bool)arg3 shouldBoostPriority:(_Bool)arg4 withReply:(CDUnknownBlockType)arg5;	// IMP=0x001000000005bc31
- (void)_enqueueXPCMessage:(CDUnknownBlockType)arg1 wakingClient:(_Bool)arg2 highPriority:(_Bool)arg3 withReply:(CDUnknownBlockType)arg4;	// IMP=0x001000000005bc0f
- (void)_enqueueXPCMessage:(CDUnknownBlockType)arg1 wakingClient:(_Bool)arg2 highPriority:(_Bool)arg3;	// IMP=0x001000000005bbfa

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

