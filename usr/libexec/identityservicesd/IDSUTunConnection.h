//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSLocalDeliveryQueue, IDSUTunPeerServiceMap, IMPair, IMPowerAssertion, IMTimer, NSArray, NSDate, NSDictionary, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol IDSSocketPairConnectionProtocol, IDSUTunConnectionDelegate;

@interface IDSUTunConnection : NSObject
{
    id <IDSUTunConnectionDelegate> _delegate;	// 8 = 0x8
    NSMutableArray *_sendingMessages;	// 16 = 0x10
    NSMutableArray *_fallbackMessages;	// 24 = 0x18
    NSMutableDictionary *_statistics;	// 32 = 0x20
    NSMutableDictionary *_cumulativeOutgoingStatistics;	// 40 = 0x28
    NSMutableDictionary *_cumulativeIncomingStatistics;	// 48 = 0x30
    NSMutableDictionary *_tokenToOTREncryptionQueue;	// 56 = 0x38
    NSMutableDictionary *_tokenToOTRError;	// 64 = 0x40
    NSMutableDictionary *_dataProtectedIncomingMessages;	// 72 = 0x48
    id <IDSSocketPairConnectionProtocol> _socketConnection;	// 80 = 0x50
    _Bool _openSocketCalled;	// 88 = 0x58
    _Bool _connectionSuspended;	// 89 = 0x59
    IMTimer *_timeoutTimer;	// 96 = 0x60
    IMTimer *_fallbackTimer;	// 104 = 0x68
    IMTimer *_dequeueTimer;	// 112 = 0x70
    NSString *_identifier;	// 120 = 0x78
    NSString *_otrTokenIdentifier;	// 128 = 0x80
    IDSLocalDeliveryQueue *_deliveryQueue;	// 136 = 0x88
    IMPowerAssertion *_sendingPowerAssertion;	// 144 = 0x90
    double _rtt;	// 152 = 0x98
    long long _cachedBytes[3];	// 160 = 0xa0
    unsigned long long _maxQueueSize;	// 184 = 0xb8
    long long _priority;	// 192 = 0xc0
    NSString *_cbuuid;	// 200 = 0xc8
    NSString *_uniqueID;	// 208 = 0xd0
    NSDate *_lastFallback;	// 216 = 0xd8
    _Bool _isMagnetIndicatingPeerIsAwake;	// 224 = 0xe0
    _Bool _enabled;	// 225 = 0xe1
    _Bool _needsHandshake;	// 226 = 0xe2
    _Bool _isAlwaysConnected;	// 227 = 0xe3
    _Bool _isCloudEnabled;	// 228 = 0xe4
    NSMutableDictionary *_incomingResourceTransfers;	// 232 = 0xe8
    NSMutableSet *_resettingIncomingResourceTransfers;	// 240 = 0xf0
    NSMutableSet *_resumingIncomingResourceTransfers;	// 248 = 0xf8
    _Bool _resumeResourceTransfers;	// 256 = 0x100
    _Bool _enableOTR;	// 257 = 0x101
    _Bool _useSharedOTRSession;	// 258 = 0x102
    _Bool _useNamedOTRSessionToken;	// 259 = 0x103
    _Bool _supportsLegacyOTRSessionToken;	// 260 = 0x104
    _Bool _newServiceSupported;	// 261 = 0x105
    _Bool _supportDynamicServices;	// 262 = 0x106
    _Bool _supportDynamicServicesOptimization;	// 263 = 0x107
    unsigned short _serviceMinCompatibilityVersion;	// 264 = 0x108
    NSMutableSet *_admissionDeniedTopics;	// 272 = 0x110
    unsigned char _remoteInstanceID[16];	// 280 = 0x118
    IDSUTunPeerServiceMap *_incomingServiceMap;	// 296 = 0x128
    IDSUTunPeerServiceMap *_outgoingServiceMap;	// 304 = 0x130
    NSMutableDictionary *_incomingServiceMapUpdateCounter;	// 312 = 0x138
    NSArray *_supportedMessageTypes;	// 320 = 0x140
    _Bool _shouldAbortOnMissingTopic;	// 328 = 0x148
    _Bool _shouldUseIPsecLink;	// 329 = 0x149
    _Bool _shouldUseNWFraming;	// 330 = 0x14a
    IMPair *_receivedResourceTransferUUIDs;	// 336 = 0x150
    unsigned int _dataProtectionClass;	// 344 = 0x158
    long long _idsPriority;	// 352 = 0x160
    IDSUTunConnection *_cloudConnection;	// 360 = 0x168
    NSString *_name;	// 368 = 0x170
}

- (void).cxx_destruct;	// IMP=0x0020000000273dcf
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) unsigned int dataProtectionClass; // @synthesize dataProtectionClass=_dataProtectionClass;
@property(retain, nonatomic) IDSUTunConnection *cloudConnection; // @synthesize cloudConnection=_cloudConnection;
@property(nonatomic) _Bool supportsLegacyOTRSessionToken; // @synthesize supportsLegacyOTRSessionToken=_supportsLegacyOTRSessionToken;
@property(nonatomic) _Bool enableOTR; // @synthesize enableOTR=_enableOTR;
@property(nonatomic) __weak id <IDSUTunConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long idsPriority; // @synthesize idsPriority=_idsPriority;
@property(readonly, nonatomic) long long priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) double rtt; // @synthesize rtt=_rtt;
@property(retain, nonatomic) NSArray *supportedMessageTypes; // @synthesize supportedMessageTypes=_supportedMessageTypes;
@property(readonly, nonatomic) _Bool isCloudEnabled; // @synthesize isCloudEnabled=_isCloudEnabled;
@property(readonly, nonatomic) NSDictionary *cumulativeOutgoingStatistics; // @synthesize cumulativeOutgoingStatistics=_cumulativeOutgoingStatistics;
@property(readonly, nonatomic) NSDictionary *cumulativeIncomingStatistics; // @synthesize cumulativeIncomingStatistics=_cumulativeIncomingStatistics;
@property(nonatomic) _Bool isAlwaysConnected; // @synthesize isAlwaysConnected=_isAlwaysConnected;
@property(retain, nonatomic) NSString *cbuuid; // @synthesize cbuuid=_cbuuid;
@property(nonatomic) unsigned long long maxQueueSize; // @synthesize maxQueueSize=_maxQueueSize;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void)forceOTRNegotiation:(id)arg1 priority:(long long)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000273a59
- (void)connectionDidReceiveBytes:(id)arg1;	// IMP=0x0010000000273907
- (void)connectionDidReachInFlightMessageLowWaterMark:(id)arg1;	// IMP=0x0010000000273789
- (void)connectionBecameEmpty;	// IMP=0x0010000000273629
- (void)connectionBecameEmpty:(id)arg1;	// IMP=0x00100000002734ab
- (void)didReceiveDataMessage:(id)arg1;	// IMP=0x001000000027340a
- (void)connection:(id)arg1 didReceiveDataMessage:(id)arg2;	// IMP=0x0010000000273354
- (void)connectionDidClose;	// IMP=0x0010000000273209
- (void)connectionDidClose:(id)arg1;	// IMP=0x001000000027308d
- (void)_dumpLogs;	// IMP=0x0010000000272f4c
- (void)_processDecryptedMessage:(id)arg1;	// IMP=0x001000000026d3d9
- (void)_processIncomingDataMessage:(id)arg1;	// IMP=0x001000000026cfad
- (void)_processIncomingResourceTransferMessage:(id)arg1 messageUUID:(id)arg2 streamID:(unsigned short)arg3 topic:(id)arg4 wantsAppAck:(_Bool)arg5 expectsPeerResponse:(_Bool)arg6 peerResponseIdentifier:(id)arg7 isDefaultPairedDevice:(_Bool)arg8 didWakeHint:(_Bool)arg9;	// IMP=0x0010000000269abf
- (_Bool)_resourceTransferUUIDAlreaadyReceived:(id)arg1;	// IMP=0x0010000000269a0b
- (void)_noteReceivedResourceTransferUUID:(id)arg1;	// IMP=0x001000000026972e
- (unsigned long long)_currentLink;	// IMP=0x0010000000269637
- (void)_processMessage:(id)arg1 withSequenceNumberBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000002695c2
- (void)_sendExpiredAckForMessage:(id)arg1;	// IMP=0x0010000000269377
- (void)_sendAckForMessage:(id)arg1;	// IMP=0x001000000026929f
- (void)sendAckForMessageWithSequenceNumber:(unsigned int)arg1;	// IMP=0x0010000000269145
- (long long)_socketToNiceCommand:(unsigned char)arg1;	// IMP=0x0010000000269124
- (void)_flushMessagesAll:(_Bool)arg1 response:(long long)arg2;	// IMP=0x00100000002681a1
- (void)flushAllMessagesForReason:(long long)arg1;	// IMP=0x0010000000268128
- (void)dropDisallowedMessages;	// IMP=0x00100000002680bb
- (_Bool)_messageHasValidEncryptionStatus:(id)arg1;	// IMP=0x0010000000268093
- (void)_optionallyDecryptMessage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000267f5e
- (void)_decryptPublicKeyEncryptedMessage:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000002678f7
- (id)_decryptOTREncrtypedMessage:(id)arg1;	// IMP=0x00100000002668e1
- (void)_handleOTRDecryptionError:(id)arg1;	// IMP=0x001000000026639c
- (void)_handleOTRDecryptionSuccess:(id)arg1;	// IMP=0x001000000026617d
- (_Bool)_storeIncomingClassADataMesageIfNeeded:(id)arg1 topic:(id)arg2 sequenceNumber:(unsigned int)arg3;	// IMP=0x0010000000265cbb
- (_Bool)_storeIncomingClassCDataMessageIfNeeded:(id)arg1 topic:(id)arg2 sequenceNumber:(unsigned int)arg3;	// IMP=0x00100000002657f6
- (void)_sendEncryptedMessage:(id)arg1;	// IMP=0x0010000000264ddd
- (void)_sendPublicKeyEncryptedMessage:(id)arg1;	// IMP=0x001000000026472b
- (void)_sendOTREncryptionQueue:(id)arg1 streamID:(unsigned short)arg2;	// IMP=0x0010000000264344
- (void)_sendOTREncryptedMessage:(id)arg1 useEncryption:(_Bool)arg2 streamID:(unsigned short)arg3 forPriority:(long long)arg4 flag:(int)arg5 token:(id)arg6;	// IMP=0x0010000000263f4c
- (id)_encryptDataWithOTR:(id)arg1 token:(id)arg2;	// IMP=0x0010000000263c04
- (void)classStorageBecameAvailable:(id)arg1;	// IMP=0x001000000026356a
- (void)handleOTRNegotiationTimeout:(id)arg1;	// IMP=0x0010000000262bb8
- (void)handleOTRNegotiationComplete:(id)arg1;	// IMP=0x0010000000262afa
- (void)_requeueMessages:(id)arg1;	// IMP=0x00100000002623bf
- (void)_requeueSendingMessage:(id)arg1;	// IMP=0x0010000000262312
- (void)_dequeueMessagesTimerDidFire:(id)arg1;	// IMP=0x0010000000262178
- (void)_invalidateMessagesDequeueTimer;	// IMP=0x00100000002620ee
- (void)_dequeueTimerFiredOnMain:(id)arg1;	// IMP=0x0010000000262024
- (void)_startMessagesDequeueMessagesTimer;	// IMP=0x0010000000261dbc
- (double)_dequeueMessagesTimerInterval;	// IMP=0x0010000000261dae
- (unsigned long long)_pendingOutgoingBytesForClass:(unsigned int)arg1;	// IMP=0x001000000026189c
- (void)_removeMessageFromStatistics:(id)arg1;	// IMP=0x0010000000261645
- (void)_addOutgoingMessageSize:(unsigned long long)arg1 forTopic:(id)arg2 dataProtectionClass:(unsigned int)arg3 isResource:(_Bool)arg4;	// IMP=0x0010000000261606
- (void)_addIncomingMessageSize:(unsigned long long)arg1 forTopic:(id)arg2;	// IMP=0x00100000002615d8
- (void)_addMessageSize:(unsigned long long)arg1 forTopic:(id)arg2 direction:(unsigned char)arg3 dataProtectionClass:(unsigned int)arg4 isResource:(_Bool)arg5;	// IMP=0x00100000002610e2
- (void)_updateDictionary:(id)arg1 addMessageSize:(long long)arg2 addMessageCount:(long long)arg3;	// IMP=0x0010000000260f5d
- (void)_sendSocketMessage:(id)arg1 ignoreSequenceNumber:(_Bool)arg2;	// IMP=0x0010000000260ac4
- (void)_sendSocketMessage:(id)arg1;	// IMP=0x0010000000260ab0
- (void)_clearSendingPowerAssertionWithReason:(id)arg1;	// IMP=0x0010000000260984
- (void)clearStats;	// IMP=0x001000000026091a
- (void)trafficClassesChanged;	// IMP=0x001000000026058c
- (void)_dequeueMessages;	// IMP=0x001000000025d64c
- (void)_assertQuickRelayForCloudMessaging;	// IMP=0x001000000025d395
- (unsigned int)_calculateRandomDelayForCloudMessagingRequest;	// IMP=0x001000000025cf55
- (id)_now;	// IMP=0x001000000025cf3c
- (id)serviceController;	// IMP=0x001000000025cf23
- (_Bool)_nonBTAllowedForClientID:(id)arg1;	// IMP=0x001000000025ceb1
- (_Bool)supportsMessageOfType:(long long)arg1;	// IMP=0x001000000025ce55
- (_Bool)checkServiceCompability:(id)arg1 localMessage:(id)arg2;	// IMP=0x001000000025cbab
- (void)admissionPolicyChangedForTopic:(id)arg1 allowed:(_Bool)arg2;	// IMP=0x001000000025c806
- (_Bool)_messageIsAllowedToSendMessageOnTopic:(id)arg1;	// IMP=0x001000000025c4a5
- (void)_removeSocketPairMessage:(id)arg1 localMessage:(id)arg2 reason:(id)arg3 detailedError:(id)arg4 responseCode:(long long)arg5;	// IMP=0x001000000025ba48
- (void)_removeSocketPairMessage:(id)arg1 localMessage:(id)arg2 reason:(id)arg3 responseCode:(long long)arg4;	// IMP=0x001000000025ba26
- (void)_messageTimedOut:(id)arg1 localMessage:(id)arg2;	// IMP=0x001000000025b5c0
- (_Bool)_shouldAWDLogMessage:(id)arg1;	// IMP=0x001000000025b572
- (void)_timeoutTimerFired;	// IMP=0x001000000025ae0c
- (void)_timeoutTimerFiredOnMain;	// IMP=0x001000000025ad8d
- (void)_resetTimeout:(id)arg1;	// IMP=0x001000000025a760
- (void)invalidateTimeoutTimer;	// IMP=0x001000000025a72e
- (void)_fallbackTimerFired;	// IMP=0x0010000000259e49
- (void)_fallbackTimerFiredOnMain;	// IMP=0x0010000000259dca
- (void)_resetFallbackTimeout:(double)arg1 useNextFallback:(_Bool)arg2;	// IMP=0x0010000000259ba0
- (_Bool)_performFallbackIfNecessary:(id)arg1;	// IMP=0x0010000000259606
- (double)_fallbackTimeoutForService:(id)arg1;	// IMP=0x001000000025932a
- (double)_nanoDisconnectedFallbackTimeoutForService:(id)arg1;	// IMP=0x001000000025910a
- (double)_nanoConnectedFallbackTimeoutForService:(id)arg1;	// IMP=0x0010000000258eea
- (void)_clearLastFallbackWithReason:(id)arg1;	// IMP=0x0010000000258d97
- (void)_connectivityChanged;	// IMP=0x0010000000258d10
- (void)_handleBecomingEmptyOfCloudMessages;	// IMP=0x0010000000258c50
- (void)_handleBecomingEmpty;	// IMP=0x0010000000258b3b
- (void)_handleBecomingEmptyForDataProtectionClass:(unsigned int)arg1;	// IMP=0x00100000002589f2
- (_Bool)_nonThreadSafeIsConnected;	// IMP=0x00100000002589da
@property(readonly, nonatomic) _Bool isConnected;
- (void)kickProgressBlockForMessageID:(id)arg1;	// IMP=0x001000000025875c
- (void)cancelMessageID:(id)arg1;	// IMP=0x00100000002581a2
- (void)sendMessage:(id)arg1;	// IMP=0x00100000002571cb
- (void)_startAndSetupSocketPairConnection:(id)arg1 capabilityFlags:(unsigned long long)arg2 instanceID:(unsigned char (*)[16])arg3 serviceMinCompatibilityVersion:(unsigned short)arg4 socketDescriptor:(int)arg5;	// IMP=0x00100000002569ab
- (void)_startNWConnectinForIPsecCase:(int)arg1 controlChannelVersion:(id)arg2 capabilityFlags:(unsigned long long)arg3 instanceID:(unsigned char (*)[16])arg4 serviceMinCompatibilityVersion:(unsigned short)arg5;	// IMP=0x00100000002562a6
- (void)_startConnection;	// IMP=0x00100000002556c2
- (void)resumeConnectivity;	// IMP=0x001000000025560c
- (void)_checkAndStartConnection;	// IMP=0x00100000002555c0
- (void)_startConnectionForContinuityPeer;	// IMP=0x0010000000255395
- (id)_nonThreadSafeSocketOptions;	// IMP=0x0010000000254fc7
- (_Bool)_isMagnetConnection;	// IMP=0x0010000000254fa4
- (void)_nonThreadSafeStopConnection;	// IMP=0x0010000000254cd3
- (id)_UTunDeliveryController;	// IMP=0x0010000000254cba
- (id)_encryptionController;	// IMP=0x0010000000254ca1
- (void)setIsMagnetIndicatingPeerIsAwake:(_Bool)arg1;	// IMP=0x0010000000254a70
- (_Bool)isMagnetIndicatingPeerIsAwake;	// IMP=0x0010000000254a64
- (void)setEnabled:(_Bool)arg1 withReason:(id)arg2;	// IMP=0x001000000025428d
- (void)setEnabled:(_Bool)arg1;	// IMP=0x0010000000254279
- (_Bool)isEnabled;	// IMP=0x001000000025426d
- (void)setDeviceBTUUID:(id)arg1;	// IMP=0x0010000000253f81
@property(readonly, nonatomic) NSDictionary *queueStatistics;
@property(readonly, nonatomic) NSDictionary *sendingMessageStatistics;
- (void)_addStatsFromDict:(id)arg1 toAggregate:(id)arg2;	// IMP=0x0010000000253714
- (id)_sendingMessageStatisticsForClass:(unsigned int)arg1;	// IMP=0x0010000000253694
- (_Bool)hasSpaceForMessagesWithDataProtectionClass:(unsigned int)arg1;	// IMP=0x0010000000253455
- (unsigned long long)_inflightMessageCount;	// IMP=0x0010000000253413
- (unsigned long long)_inflightMessageCountForType:(long long)arg1;	// IMP=0x00100000002533cb
- (unsigned long long)_inflightMessageCountForClass:(unsigned int)arg1;	// IMP=0x0010000000253385
- (unsigned long long)_sendingMessageCountForType:(long long)arg1;	// IMP=0x00100000002532a8
- (unsigned long long)_sendingMessageCountForClass:(unsigned int)arg1;	// IMP=0x00100000002531cd
@property(readonly, nonatomic) _Bool isIdle;
- (_Bool)_isWiProxPeer;	// IMP=0x0010000000253101
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000002530f6
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000002530ea
@property(readonly) unsigned long long hash;
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x0010000000252e7f
- (id)initWithIdentifier:(id)arg1 socketPriority:(long long)arg2 btUUID:(id)arg3 uniqueID:(id)arg4 incomingServiceMap:(id)arg5 outgoingServiceMap:(id)arg6 isCloudEnabled:(_Bool)arg7 shouldUseIPsecLink:(_Bool)arg8;	// IMP=0x0010000000252a00

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

