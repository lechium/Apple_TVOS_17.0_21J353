//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class APSConnectionHistory, APSCourierConnection, APSCourierConnectionProtocolConnection, APSEnvironment, APSNetworkMonitor, APSNoOpPowerAssertion, APSOutgoingQueue, APSRateLimiter, APSReachabilityHandler, APSServerTimeTracker, CUTPowerAssertion, MISSING_TYPE, NSArray, NSCountedSet, NSDate, NSNumber, NSString, NSTimer, PCCarrierBundleHelper, PCPersistentTimer;
@protocol APSCourierConnectionManagerDelegate;

@interface APSCourierConnectionManager : NSObject
{
    NSNumber *_tcpHandshakeTimeMilliseconds[2];	// 8 = 0x8
    NSNumber *_dnsResolutionTimeMilliseconds[2];	// 24 = 0x18
    NSNumber *_tlsHandshakeTimeMilliseconds[2];	// 40 = 0x28
    _Bool _secureHandshakeEnabled[2];	// 56 = 0x38
    NSCountedSet *_consecutiveConnectionFailureReason[2];	// 64 = 0x40
    NSNumber *_connectionTime[2];	// 80 = 0x50
    APSCourierConnectionProtocolConnection *_protocolConnections[2];	// 96 = 0x60
    NSNumber *_maxMessageSizes[2];	// 112 = 0x70
    NSNumber *_maxLargeMessageSizes[2];	// 128 = 0x80
    NSTimer *_filterMessageTimer[2];	// 144 = 0x90
    _Bool _enabled;	// 160 = 0xa0
    _Bool _enableCriticalReliability;	// 161 = 0xa1
    _Bool _pendingPostSuspensionWWANFlush;	// 162 = 0xa2
    _Bool _remainsConnectedWhenWWANSuspends;	// 163 = 0xa3
    _Bool _shouldUseInternet;	// 164 = 0xa4
    _Bool _shouldRun;	// 165 = 0xa5
    _Bool _handlingFailure;	// 166 = 0xa6
    int _interfacePreference;	// 168 = 0xa8
    int _lastPushRAT;	// 172 = 0xac
    int _lastPushLQ;	// 176 = 0xb0
    id <APSCourierConnectionManagerDelegate> _delegate;	// 184 = 0xb8
    APSCourierConnection *_courierConnection;	// 192 = 0xc0
    PCCarrierBundleHelper *_carrierBundleHelper;	// 200 = 0xc8
    unsigned long long _consecutiveConnectionFailureCount;	// 208 = 0xd0
    unsigned long long _consecutiveTLSConnectionFailureCount;	// 216 = 0xd8
    PCPersistentTimer *_delayedReconnectTimer;	// 224 = 0xe0
    NSDate *_lastConnectionAttempt;	// 232 = 0xe8
    APSNetworkMonitor *_networkMonitor;	// 240 = 0xf0
    unsigned long long _cmaType;	// 248 = 0xf8
    unsigned long long _lastIPCachingPercentage;	// 256 = 0x100
    APSEnvironment *_environment;	// 264 = 0x108
    double _lastIPCachingTTLSeconds;	// 272 = 0x110
    NSTimer *_resetInterfacePreferenceTimer;	// 280 = 0x118
    PCPersistentTimer *_pendingMessageReconnectTimer;	// 288 = 0x120
    double _delayedReconnectIntervalWatchWiFi;	// 296 = 0x128
    double _delayedReconnectInterval;	// 304 = 0x130
    double _delayedReconnectMaxInterval;	// 312 = 0x138
    double _delayedReconnectTLSInterval;	// 320 = 0x140
    long long _delayedReconnectMinIntervalTrigger;	// 328 = 0x148
    long long _delayedReconnectMaxIntervalTrigger;	// 336 = 0x150
    long long _delayedReconnectTLSIntervalTrigger;	// 344 = 0x158
    PCPersistentTimer *_delayedSuspendKeepAliveTimer;	// 352 = 0x160
    double _startedDarkWake;	// 360 = 0x168
    MISSING_TYPE *_findKeepAliveProxyInterfaceFailureCount;	// 368 = 0x170
    unsigned long long _forceKeepAliveProxyInterfaceFailureCount;	// 376 = 0x178
    unsigned long long _obtainKeepAliveProxyFailureCount;	// 384 = 0x180
    APSConnectionHistory *_connectionHistory;	// 392 = 0x188
    NSNumber *_serverMaxKeepAliveInterval;	// 400 = 0x190
    NSNumber *_serverExpectedKeepAliveInterval;	// 408 = 0x198
    NSNumber *_serverMinKeepAliveInterval;	// 416 = 0x1a0
    double _delayedSuspendKeepAliveInterval;	// 424 = 0x1a8
    APSRateLimiter *_suspendToggleHourlyLimiter;	// 432 = 0x1b0
    APSRateLimiter *_suspendToggleDailyLimiter;	// 440 = 0x1b8
    long long _suspendToggleHourlyLimit;	// 448 = 0x1c0
    long long _suspendToggleDailyLimit;	// 456 = 0x1c8
    double _keepAliveV2TimeDriftMaximum;	// 464 = 0x1d0
    double _lastClientRequestedKeepaliveTime;	// 472 = 0x1d8
    CUTPowerAssertion *_delayedKeepAlivePowerAssertion;	// 480 = 0x1e0
    NSString *_latestGeoRegion;	// 488 = 0x1e8
    double _filterMessageTimeout;	// 496 = 0x1f0
    struct __SecIdentity *_clientIdentity;	// 504 = 0x1f8
    NSTimer *_criticalFlushTimer;	// 512 = 0x200
    PCPersistentTimer *_criticalReliabilityTimer;	// 520 = 0x208
    CUTPowerAssertion *_criticalReliabilityPowerAssertion;	// 528 = 0x210
    APSNoOpPowerAssertion *_waitForConnectionAttemptsPowerAssertion;	// 536 = 0x218
    APSReachabilityHandler *_reachabilityHandler;	// 544 = 0x220
    APSServerTimeTracker *_serverTimeTracker;	// 552 = 0x228
    APSOutgoingQueue *_outgoingSendMessageQueue;	// 560 = 0x230
    APSOutgoingQueue *_outgoingConnectMessageQueue;	// 568 = 0x238
    APSOutgoingQueue *_tokenGenerateResponseQueue;	// 576 = 0x240
    APSOutgoingQueue *_outgoingFilterQueue;	// 584 = 0x248
}

- (void).cxx_destruct;	// IMP=0x00200000000affdd
@property(nonatomic) int lastPushLQ; // @synthesize lastPushLQ=_lastPushLQ;
@property(nonatomic) int lastPushRAT; // @synthesize lastPushRAT=_lastPushRAT;
@property(retain, nonatomic) APSOutgoingQueue *outgoingFilterQueue; // @synthesize outgoingFilterQueue=_outgoingFilterQueue;
@property(retain, nonatomic) APSOutgoingQueue *tokenGenerateResponseQueue; // @synthesize tokenGenerateResponseQueue=_tokenGenerateResponseQueue;
@property(retain, nonatomic) APSOutgoingQueue *outgoingConnectMessageQueue; // @synthesize outgoingConnectMessageQueue=_outgoingConnectMessageQueue;
@property(retain, nonatomic) APSOutgoingQueue *outgoingSendMessageQueue; // @synthesize outgoingSendMessageQueue=_outgoingSendMessageQueue;
@property(retain, nonatomic) APSServerTimeTracker *serverTimeTracker; // @synthesize serverTimeTracker=_serverTimeTracker;
@property(retain, nonatomic) APSReachabilityHandler *reachabilityHandler; // @synthesize reachabilityHandler=_reachabilityHandler;
@property(retain, nonatomic) APSNoOpPowerAssertion *waitForConnectionAttemptsPowerAssertion; // @synthesize waitForConnectionAttemptsPowerAssertion=_waitForConnectionAttemptsPowerAssertion;
@property(retain, nonatomic) CUTPowerAssertion *criticalReliabilityPowerAssertion; // @synthesize criticalReliabilityPowerAssertion=_criticalReliabilityPowerAssertion;
@property(retain, nonatomic) PCPersistentTimer *criticalReliabilityTimer; // @synthesize criticalReliabilityTimer=_criticalReliabilityTimer;
@property(retain, nonatomic) NSTimer *criticalFlushTimer; // @synthesize criticalFlushTimer=_criticalFlushTimer;
@property(nonatomic) _Bool handlingFailure; // @synthesize handlingFailure=_handlingFailure;
@property(nonatomic) _Bool shouldRun; // @synthesize shouldRun=_shouldRun;
@property(nonatomic) _Bool shouldUseInternet; // @synthesize shouldUseInternet=_shouldUseInternet;
@property(nonatomic) struct __SecIdentity *clientIdentity; // @synthesize clientIdentity=_clientIdentity;
@property(nonatomic) double filterMessageTimeout; // @synthesize filterMessageTimeout=_filterMessageTimeout;
@property(retain, nonatomic) NSString *latestGeoRegion; // @synthesize latestGeoRegion=_latestGeoRegion;
@property(retain, nonatomic) CUTPowerAssertion *delayedKeepAlivePowerAssertion; // @synthesize delayedKeepAlivePowerAssertion=_delayedKeepAlivePowerAssertion;
@property(nonatomic) double lastClientRequestedKeepaliveTime; // @synthesize lastClientRequestedKeepaliveTime=_lastClientRequestedKeepaliveTime;
@property(nonatomic) double keepAliveV2TimeDriftMaximum; // @synthesize keepAliveV2TimeDriftMaximum=_keepAliveV2TimeDriftMaximum;
@property(nonatomic) long long suspendToggleDailyLimit; // @synthesize suspendToggleDailyLimit=_suspendToggleDailyLimit;
@property(nonatomic) long long suspendToggleHourlyLimit; // @synthesize suspendToggleHourlyLimit=_suspendToggleHourlyLimit;
@property(retain, nonatomic) APSRateLimiter *suspendToggleDailyLimiter; // @synthesize suspendToggleDailyLimiter=_suspendToggleDailyLimiter;
@property(retain, nonatomic) APSRateLimiter *suspendToggleHourlyLimiter; // @synthesize suspendToggleHourlyLimiter=_suspendToggleHourlyLimiter;
@property(nonatomic) double delayedSuspendKeepAliveInterval; // @synthesize delayedSuspendKeepAliveInterval=_delayedSuspendKeepAliveInterval;
@property(retain, nonatomic) NSNumber *serverMinKeepAliveInterval; // @synthesize serverMinKeepAliveInterval=_serverMinKeepAliveInterval;
@property(retain, nonatomic) NSNumber *serverExpectedKeepAliveInterval; // @synthesize serverExpectedKeepAliveInterval=_serverExpectedKeepAliveInterval;
@property(retain, nonatomic) NSNumber *serverMaxKeepAliveInterval; // @synthesize serverMaxKeepAliveInterval=_serverMaxKeepAliveInterval;
@property(retain, nonatomic) APSConnectionHistory *connectionHistory; // @synthesize connectionHistory=_connectionHistory;
@property(nonatomic) unsigned long long obtainKeepAliveProxyFailureCount; // @synthesize obtainKeepAliveProxyFailureCount=_obtainKeepAliveProxyFailureCount;
@property(nonatomic) unsigned long long forceKeepAliveProxyInterfaceFailureCount; // @synthesize forceKeepAliveProxyInterfaceFailureCount=_forceKeepAliveProxyInterfaceFailureCount;
@property(nonatomic) unsigned long long findKeepAliveProxyInterfaceFailureCount; // @synthesize findKeepAliveProxyInterfaceFailureCount=_findKeepAliveProxyInterfaceFailureCount;
@property(nonatomic) double startedDarkWake; // @synthesize startedDarkWake=_startedDarkWake;
@property(nonatomic) _Bool remainsConnectedWhenWWANSuspends; // @synthesize remainsConnectedWhenWWANSuspends=_remainsConnectedWhenWWANSuspends;
@property(nonatomic) _Bool pendingPostSuspensionWWANFlush; // @synthesize pendingPostSuspensionWWANFlush=_pendingPostSuspensionWWANFlush;
@property(retain, nonatomic) PCPersistentTimer *delayedSuspendKeepAliveTimer; // @synthesize delayedSuspendKeepAliveTimer=_delayedSuspendKeepAliveTimer;
@property(nonatomic) long long delayedReconnectTLSIntervalTrigger; // @synthesize delayedReconnectTLSIntervalTrigger=_delayedReconnectTLSIntervalTrigger;
@property(nonatomic) long long delayedReconnectMaxIntervalTrigger; // @synthesize delayedReconnectMaxIntervalTrigger=_delayedReconnectMaxIntervalTrigger;
@property(nonatomic) long long delayedReconnectMinIntervalTrigger; // @synthesize delayedReconnectMinIntervalTrigger=_delayedReconnectMinIntervalTrigger;
@property(nonatomic) double delayedReconnectTLSInterval; // @synthesize delayedReconnectTLSInterval=_delayedReconnectTLSInterval;
@property(nonatomic) double delayedReconnectMaxInterval; // @synthesize delayedReconnectMaxInterval=_delayedReconnectMaxInterval;
@property(nonatomic) double delayedReconnectInterval; // @synthesize delayedReconnectInterval=_delayedReconnectInterval;
@property(nonatomic) double delayedReconnectIntervalWatchWiFi; // @synthesize delayedReconnectIntervalWatchWiFi=_delayedReconnectIntervalWatchWiFi;
@property(retain, nonatomic) PCPersistentTimer *pendingMessageReconnectTimer; // @synthesize pendingMessageReconnectTimer=_pendingMessageReconnectTimer;
@property(nonatomic) _Bool enableCriticalReliability; // @synthesize enableCriticalReliability=_enableCriticalReliability;
@property(retain, nonatomic) NSTimer *resetInterfacePreferenceTimer; // @synthesize resetInterfacePreferenceTimer=_resetInterfacePreferenceTimer;
@property(nonatomic) double lastIPCachingTTLSeconds; // @synthesize lastIPCachingTTLSeconds=_lastIPCachingTTLSeconds;
@property(nonatomic) int interfacePreference; // @synthesize interfacePreference=_interfacePreference;
@property(retain, nonatomic) APSEnvironment *environment; // @synthesize environment=_environment;
@property(nonatomic) unsigned long long lastIPCachingPercentage; // @synthesize lastIPCachingPercentage=_lastIPCachingPercentage;
@property(nonatomic) unsigned long long cmaType; // @synthesize cmaType=_cmaType;
@property(retain, nonatomic) APSNetworkMonitor *networkMonitor; // @synthesize networkMonitor=_networkMonitor;
@property(retain, nonatomic) NSDate *lastConnectionAttempt; // @synthesize lastConnectionAttempt=_lastConnectionAttempt;
@property(retain, nonatomic) PCPersistentTimer *delayedReconnectTimer; // @synthesize delayedReconnectTimer=_delayedReconnectTimer;
@property(nonatomic) unsigned long long consecutiveTLSConnectionFailureCount; // @synthesize consecutiveTLSConnectionFailureCount=_consecutiveTLSConnectionFailureCount;
- (unsigned long long);	// IMP=0x00100000000af988
@property(nonatomic) unsigned long long consecutiveConnectionFailureCount; // @synthesize consecutiveConnectionFailureCount=_consecutiveConnectionFailureCount;
@property(retain, nonatomic) PCCarrierBundleHelper *carrierBundleHelper; // @synthesize carrierBundleHelper=_carrierBundleHelper;
@property(retain, nonatomic) APSCourierConnection *courierConnection; // @synthesize courierConnection=_courierConnection;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(readonly, nonatomic) id <APSCourierConnectionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)handleReachabilityChange:(unsigned int)arg1;	// IMP=0x00100000000af90d
- (void)setMaxLargeMessageSize:(id)arg1 forInterface:(long long)arg2;	// IMP=0x00100000000af8c3
- (id)maxLargeMessageSizeForInterface:(long long)arg1;	// IMP=0x00100000000af857
- (void)setMaxMessageSize:(id)arg1 forInterface:(long long)arg2;	// IMP=0x00100000000af810
- (id)maxMessageSizeForInterface:(long long)arg1;	// IMP=0x00100000000af7a7
- (void)setConnectionTime:(id)arg1 forInterface:(long long)arg2;	// IMP=0x00100000000af760
- (id)connectionTimeForInterface:(long long)arg1;	// IMP=0x00100000000af73b
- (void)appendPrettyStatusToStatusPrinter:(id)arg1;	// IMP=0x00100000000af122
- (id)JSONDebugState;	// IMP=0x00100000000aeb97
- (id)aps_prettyDescription;	// IMP=0x00100000000ae812
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (void)_switchToKeepAliveProxyInterface;	// IMP=0x00100000000ae540
- (_Bool)_neededToSwitchToKeepAliveProxyInterface;	// IMP=0x00100000000ae3f1
- (void)_useInteractivePowerAssertionIfNeededWithReason:(id)arg1;	// IMP=0x00100000000ae294
- (void)_resetInterfacePreferenceTimerFired:(id)arg1;	// IMP=0x00100000000ae0ef
- (void)_clearResetInterfacePreferenceTimer;	// IMP=0x00100000000ae0a8
- (void)_startResetInterfacePreferenceTimer;	// IMP=0x00100000000adf87
- (void)prepareForFullWake;	// IMP=0x00100000000add9d
- (void)prepareForDarkWake;	// IMP=0x00100000000adc56
- (void)prepareForSleep;	// IMP=0x00100000000adbe1
- (void)sendMessageTransportAcknowledgeMessageOnInterface:(long long)arg1;	// IMP=0x00100000000adb95
@property(readonly, nonatomic) _Bool isKeepAliveProxyConfiguredOnAnyConnection;
- (_Bool)isPiggybacking;	// IMP=0x00100000000adb0d
@property(readonly, nonatomic) unsigned int dualChannelState;
- (void)notePush;	// IMP=0x00100000000adaae
- (void)_criticalReliabilityTimerFired;	// IMP=0x00100000000ad9ff
- (void)refreshCriticalReliabilityTimerWithShortKeepAlive:(_Bool)arg1;	// IMP=0x00100000000ad788
- (void)refreshCriticalReliability;	// IMP=0x00100000000ad771
- (void)triggerCriticalReliability;	// IMP=0x00100000000ad5ac
- (void)recalculateCriticalReliability;	// IMP=0x00100000000ad326
- (void)stopManagerOnInterface:(long long)arg1;	// IMP=0x00100000000ad2da
- (void)setServerSupportsDualMode:(_Bool)arg1;	// IMP=0x00100000000ad290
@property(readonly, nonatomic) _Bool allowedToHaveMultipleOpenInterfaces;
- (unsigned char)redirectCount;	// IMP=0x00100000000ad232
- (void)setKeepAliveV2Supported:(_Bool)arg1 onInterface:(long long)arg2;	// IMP=0x00100000000ad1e1
- (_Bool)keepAliveV2SupportedOnInterface:(long long)arg1;	// IMP=0x00100000000ad190
- (_Bool)isKeepAliveProxyConfiguredOnAnyInterface;	// IMP=0x00100000000ad14c
- (_Bool)isKeepAliveProxyConfiguredOnInterface:(long long)arg1;	// IMP=0x00100000000ad0fb
- (void)sendConnectMessageWithToken:(id)arg1 state:(int)arg2 presenceFlags:(unsigned int)arg3 metadata:(id)arg4 certificates:(id)arg5 nonce:(id)arg6 signature:(id)arg7 redirectCount:(unsigned char)arg8 withCompletion:(CDUnknownBlockType)arg9 onInterface:(long long)arg10;	// IMP=0x00100000000aceb6
- (void)sendConnectMessageWithToken:(id)arg1 interface:(long long)arg2 activeInterval:(unsigned int)arg3 presenceFlags:(unsigned int)arg4 metadata:(id)arg5 certificates:(id)arg6 nonce:(id)arg7 signature:(id)arg8 redirectCount:(unsigned char)arg9 tcpHandshakeTimeMilliseconds:(double)arg10 dnsResolveTimeMilliseconds:(double)arg11 tlsHandshakeTimeMilliseconds:(double)arg12 consecutiveConnectionFailureReason:(id)arg13 withCompletion:(CDUnknownBlockType)arg14 onInterface:(long long)arg15;	// IMP=0x00100000000acbd7
- (void)sendConnectMessageWithToken:(id)arg1 state:(int)arg2 interface:(long long)arg3 activeInterval:(unsigned int)arg4 presenceFlags:(unsigned int)arg5 metadata:(id)arg6 certificates:(id)arg7 nonce:(id)arg8 signature:(id)arg9 redirectCount:(unsigned char)arg10 withCompletion:(CDUnknownBlockType)arg11 onInterface:(long long)arg12;	// IMP=0x00100000000ac936
- (void)sendFilterMessageWithEnabledHashes:(id)arg1 ignoredHashes:(id)arg2 opportunisticHashes:(id)arg3 nonWakingHashes:(id)arg4 pausedHashes:(id)arg5 token:(id)arg6 version:(unsigned long long)arg7 expectsResponse:(_Bool)arg8 onInterface:(long long)arg9 withCompletion:(CDUnknownBlockType)arg10;	// IMP=0x00100000000ac6aa
- (void)sendTaskControlMessageWithMetadata:(id)arg1 messageId:(unsigned long long)arg2 onInterface:(long long)arg3;	// IMP=0x00100000000ac630
@property(readonly, nonatomic) _Bool isAttemptingToReconnect;
- (_Bool)sendMessageWithTopicHash:(id)arg1 identifier:(unsigned long long)arg2 payload:(id)arg3 token:(id)arg4 isPlistFormat:(_Bool)arg5 lastRTT:(id)arg6 onInterface:(long long)arg7 withCompletion:(CDUnknownBlockType)arg8;	// IMP=0x00100000000ac41e
- (double)currentKeepAliveIntervalOnInterface:(long long)arg1;	// IMP=0x00100000000ac3c7
- (void)sendMessageAcknowledgeMessageWithResponse:(long long)arg1 messageId:(id)arg2 token:(id)arg3 onInterface:(long long)arg4;	// IMP=0x00100000000ac337
- (_Bool)generationMatches:(unsigned long long)arg1 forInterface:(long long)arg2;	// IMP=0x00100000000ac2e1
- (void)sendActivityTrackingRequestWithMessageID:(unsigned long long)arg1 pushToken:(id)arg2 salt:(unsigned long long)arg3 trackingFlag:(unsigned int)arg4 timestamp:(unsigned long long)arg5 onInterface:(long long)arg6;	// IMP=0x00100000000ac24e
- (void)sendPubSubChannelListWithMetadata:(id)arg1 baseToken:(id)arg2 messageID:(unsigned int)arg3 onInterface:(long long)arg4;	// IMP=0x00100000000ac1be
- (void)sendTokenGenerateMessageWithTopicHash:(id)arg1 baseToken:(id)arg2 appId:(unsigned short)arg3 expirationTTL:(unsigned int)arg4 vapidPublicKeyHash:(id)arg5 type:(long long)arg6 withCompletion:(CDUnknownBlockType)arg7 onInterface:(long long)arg8;	// IMP=0x00100000000abfad
- (void)sendMessageTracingAckWithTopicHash:(id)arg1 tracingUUID:(id)arg2 status:(int)arg3 token:(id)arg4 onInterface:(long long)arg5;	// IMP=0x00100000000abefd
- (id)_sendOutgoingMessage:(id)arg1 topicHash:(id)arg2 lastRTT:(id)arg3 token:(id)arg4 onInterface:(long long)arg5 withCompletion:(CDUnknownBlockType)arg6;	// IMP=0x00100000000ab569
- (void)sendSetActiveState:(_Bool)arg1 forInterval:(unsigned int)arg2 onInterface:(long long)arg3;	// IMP=0x00100000000ab509
- (id)serverHostnameForInterface:(long long)arg1;	// IMP=0x00100000000ab4aa
- (id)serverIPAddressForInterface:(long long)arg1;	// IMP=0x00100000000ab44b
- (void)holdPowerAssertionUntilStreamsQuiesce;	// IMP=0x00100000000ab40e
- (_Bool)hasOpenConnectionOnInterface:(long long)arg1;	// IMP=0x00100000000ab3bd
- (_Bool)isSuspendedOnInterface:(long long)arg1;	// IMP=0x00100000000ab36c
- (_Bool)isConnectedOnInterface:(long long)arg1;	// IMP=0x00100000000ab31b
- (id)tcpInfoDescription;	// IMP=0x00100000000ab2cb
- (_Bool)didPushCauseWake;	// IMP=0x00100000000ab287
- (id)currentKeepAliveStateOnInterface:(long long)arg1;	// IMP=0x00100000000ab228
@property(readonly, nonatomic) unsigned long long countOpenConnections;
@property(readonly, nonatomic) unsigned long long countConnectedInterfaces;
- (_Bool)hasOpenConnection;	// IMP=0x00100000000ab15c
- (long long)preferredInterface;	// IMP=0x00100000000ab118
- (_Bool)isConnected;	// IMP=0x00100000000ab0d4
- (void)sendFlushOnAllConnectionshWithPaddingLength:(unsigned long long)arg1;	// IMP=0x00100000000ab0c2
- (void)handleConnectionFailureOnInterface:(long long)arg1 forceDelayedReconnect:(_Bool)arg2 withReason:(unsigned int)arg3;	// IMP=0x00100000000ab0b0
- (void)performKeepAliveOnInterface:(long long)arg1;	// IMP=0x00100000000aafa5
- (void)adjustConnectionsIfNeeded;	// IMP=0x00100000000aaecf
- (void)forceAdjustConnections;	// IMP=0x00100000000aaea1
- (void)disconnectAllStreamsWithReason:(unsigned int)arg1;	// IMP=0x00100000000aae8f
- (void)disconnectStreamForInterface:(long long)arg1 withReason:(unsigned int)arg2;	// IMP=0x00100000000aae7d
- (id)tcpHandshakeTimeMillisecondsOnInterface:(long long)arg1;	// IMP=0x00100000000aad92
- (id)tlsHandshakeTimeMillisecondsOnInterface:(long long)arg1;	// IMP=0x00100000000aaca7
- (id)dnsResolutionTimeMillisecondsOnInterface:(long long)arg1;	// IMP=0x00100000000aabbc
@property(readonly, nonatomic) unsigned long long serverTimeInNanoSeconds;
- (void)_dumpLogsForInconsistencyIfNecessary;	// IMP=0x00100000000aab72
- (void)interfaceRadioHotnessChanged:(id)arg1;	// IMP=0x00100000000aa9e4
- (void)interfaceReachabilityChanged:(id)arg1;	// IMP=0x00100000000aa9d2
- (void)interfaceLinkQualityChanged:(id)arg1 previousLinkQuality:(int)arg2;	// IMP=0x00100000000aa860
- (void)networkMonitor:(id)arg1 enableWiFiAssertionForPiggybackConnection:(_Bool)arg2;	// IMP=0x00100000000aa787
- (void)networkMonitorWiFiBecameAssociated:(id)arg1;	// IMP=0x00100000000aa6da
- (void)networkMonitor:(id)arg1 evaluateDualModeState:(_Bool)arg2;	// IMP=0x00100000000aa565
- (void)updateKeepAliveInterval:(double)arg1;	// IMP=0x00100000000aa4a4
- (void)_submitKeepAliveSucceededAWDonInterface:(long long)arg1;	// IMP=0x00100000000aa089
- (void)_handleKeepAliveResponseMessage:(id)arg1 onInterface:(long long)arg2;	// IMP=0x00100000000a9b60
- (void)_resetKeepAliveOnInterface:(long long)arg1;	// IMP=0x00100000000a9ae4
- (void)_requestKeepAlive:(_Bool)arg1 orConnection:(_Bool)arg2;	// IMP=0x00100000000a9ac9
- (void)performKeepAlive;	// IMP=0x00100000000a9a8c
- (void)requestConnectionIfNeeded;	// IMP=0x00100000000a99d8
- (void)_requestKeepAlive:(_Bool)arg1 orConnection:(_Bool)arg2 shortInterval:(_Bool)arg3 onInterface:(long long)arg4;	// IMP=0x00100000000a964e
- (void)_startKeepAliveResponseTimerOnInterface:(long long)arg1 shortInterval:(_Bool)arg2;	// IMP=0x00100000000a960a
- (void)_performKeepAliveOnInterface:(long long)arg1 shortInterval:(_Bool)arg2 withAction:(int)arg3;	// IMP=0x00100000000a8ef9
- (void)_delayedPerformKeepAliveOnInterface:(long long)arg1;	// IMP=0x00100000000a8de6
- (void)_delayedPerformKeepAliveNonCellular;	// IMP=0x00100000000a8cb7
- (void)__delayedPerformKeepAliveNonCellular;	// IMP=0x00100000000a8c56
- (void)_delayedPerformKeepAliveWWAN;	// IMP=0x00100000000a8b27
- (void)__delayedPerformKeepAliveWWAN;	// IMP=0x00100000000a8acc
- (void)_handleFlushMessage:(id)arg1 onInterface:(long long)arg2;	// IMP=0x00100000000a88fb
- (void)_performFlushWithPaddingLength:(unsigned long long)arg1;	// IMP=0x00100000000a870c
- (void)_informStateListenerOfOutgoingDataOnInterface:(long long)arg1;	// IMP=0x00100000000a865d
- (void)_invokeInFailureHandlingContext:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a8600
- (void)_resetServerKeepAliveStatsOnInterface:(long long)arg1;	// IMP=0x00100000000a8563
- (void)_handleConnectionAfterSuspensionRecoveryOnInterface:(long long)arg1 withKeepAlive:(_Bool)arg2;	// IMP=0x00100000000a83de
- (void)_delayedSuspendKeepAliveTimerFired:(id)arg1;	// IMP=0x00100000000a82c2
- (void)_handleConnectionRecoverFromSuspensionOnInterface:(long long)arg1;	// IMP=0x00100000000a7f90
- (void)_handleConnectionSuspendedOnInterface:(long long)arg1;	// IMP=0x00100000000a7e8c
- (void)setConnectionStatistics:(id)arg1 onInterface:(long long)arg2;	// IMP=0x00100000000a7c7d
- (void)_submitKeepAliveFailedAWDonInterface:(long long)arg1;	// IMP=0x00100000000a78f2
- (_Bool)_handleRedirectMessage:(id)arg1 onInterface:(long long)arg2;	// IMP=0x00100000000a7732
- (void)clearConsecutiveConnectionFailureReasonOnInterface:(long long)arg1;	// IMP=0x00100000000a762f
- (void)setConnectionFailure:(id)arg1 onInterface:(long long)arg2;	// IMP=0x00100000000a74c0
- (id)consecutiveConnectionFailureReasonOnInterface:(long long)arg1;	// IMP=0x00100000000a73d5
- (void)resetKeepAliveOnInterface:(long long)arg1;	// IMP=0x00100000000a73c3
- (unsigned long long)courierConnection:(id)arg1 dataReceived:(id)arg2 onInterface:(long long)arg3 withGeneration:(unsigned long long)arg4 isWakingMessage:(_Bool)arg5;	// IMP=0x00100000000a5529
- (void)_handleKeepAliveAckMessage:(id)arg1 onInterface:(long long)arg2;	// IMP=0x00100000000a5268
- (void)courierConnection:(id)arg1 failedToFindKeepAliveProxyOnInterface:(long long)arg2;	// IMP=0x00100000000a525b
- (void)courierConnection:(id)arg1 failedToObtainKeepAliveProxyOnInterface:(long long)arg2;	// IMP=0x00100000000a524e
- (void)courierConnection:(id)arg1 failedToForceKeepAliveProxyOnInterface:(long long)arg2;	// IMP=0x00100000000a5241
- (void)courierConnection:(id)arg1 connectionEstablishTimerFiredOnInterface:(long long)arg2;	// IMP=0x00100000000a4f2b
- (void)courierConnection:(id)arg1 keepAliveResponseTimerFiredOnInterface:(long long)arg2;	// IMP=0x00100000000a4ba7
- (void)courierConnectionHasConnected:(id)arg1 context:(id)arg2 enabledPackedFormat:(_Bool)arg3 secureHandshakeEnabled:(_Bool)arg4 onInterface:(long long)arg5;	// IMP=0x00100000000a4889
- (void)courierConnection:(id)arg1 hasDeterminedServerHostname:(id)arg2 onInterface:(long long)arg3;	// IMP=0x00100000000a4765
- (void)courierConnection:(id)arg1 receivedServerBag:(id)arg2;	// IMP=0x00100000000a355e
@property(readonly, nonatomic) double currentKeepAliveInterval;
- (void)courierConnection:(id)arg1 errorOccured:(id)arg2 onInterface:(long long)arg3;	// IMP=0x00100000000a3005
- (void)courierConnection:(id)arg1 parserErrorMessage:(id)arg2 OnInterface:(long long)arg3;	// IMP=0x00100000000a2eb0
- (void)courierConnection:(id)arg1 streamEndedOnInterface:(long long)arg2 withReason:(unsigned int)arg3;	// IMP=0x00100000000a2b75
- (void)courierConnection:(id)arg1 disconnectStreamOnInterface:(long long)arg2 withReason:(unsigned int)arg3;	// IMP=0x00100000000a28ec
- (void)courierConnection:(id)arg1 connectionManager:(id)arg2 handleEvent:(int)arg3 context:(id)arg4 onInterface:(long long)arg5;	// IMP=0x00100000000a1a07
- (void)carrierBundleDidChange;	// IMP=0x00100000000a185a
- (id)protocolConnectionForInterface:(long long)arg1;	// IMP=0x00100000000a1835
@property(readonly, nonatomic) NSArray *activeProtocolConnections;
@property(readonly, nonatomic) NSString *currentLinkQualityString;
- (void)clearDNSResolutionAndTLSHandshakeOnInterface:(long long)arg1;	// IMP=0x00100000000a1608
- (id)dailySuspendToggleRateLimiter;	// IMP=0x00100000000a1591
- (id)hourlySuspendToggleRateLimiter;	// IMP=0x00100000000a151a
- (_Bool)_isInternetReachableOnInterface:(long long)arg1;	// IMP=0x00100000000a14bf
- (_Bool)useServerKeepAliveStatsOnInterface:(long long)arg1;	// IMP=0x00100000000a1467
- (unsigned int)_keepAliveVersionForInterface:(long long)arg1;	// IMP=0x00100000000a1448
- (unsigned int)_connectionTypeForInterface:(long long)arg1;	// IMP=0x00100000000a1437
- (id)copyOperatorName;	// IMP=0x00100000000a1412
- (_Bool)_useShortKeepAliveInterval;	// IMP=0x00100000000a140a
- (_Bool)isCellularWatch;	// IMP=0x00100000000a1391
- (int)_linkQualityForInterface:(long long)arg1;	// IMP=0x00100000000a133b
- (_Bool)_requestKeepAliveProxy;	// IMP=0x00100000000a1333
- (_Bool)_isWiFiLinkQualityBetter;	// IMP=0x00100000000a1235
- (id)pcPersistentInterfaceManager;	// IMP=0x00100000000a121c
- (id)pcInterfaceMonitorOnInterface:(long long)arg1;	// IMP=0x00100000000a11d8
- (id)pcInterfaceMonitorNonCellular;	// IMP=0x00100000000a11c1
- (id)pcInterfaceMonitorWWAN;	// IMP=0x00100000000a11ad
@property(readonly, nonatomic) NSString *ifname;
- (void)_filterMessageTimeoutTimerFired:(id)arg1;	// IMP=0x00100000000a10f5
- (void)_clearFilterMessageTimerOnInterface:(long long)arg1;	// IMP=0x00100000000a10a5
- (void)_startFilterMessageTimerOnInterface:(long long)arg1;	// IMP=0x00100000000a0fec
- (void)_clearKeepAliveResponseTimerOnInterface:(long long)arg1;	// IMP=0x00100000000a0fd3
- (MISSING_TYPE *)_clearConnectionEstablishTimerOnInterface: /* Error: Ran out of types for this method. */;	// IMP=0x00100000000a0fba
- (void)_startConnectionEstablishTimerOnInterface:(long long)arg1;	// IMP=0x00100000000a0f79
- (_Bool)_connectStreamWithInterfacePreference:(long long)arg1;	// IMP=0x001000000009f818
- (void)_clearPostSuspensionFlushState;	// IMP=0x001000000009f7d5
- (void)_useCachedLastIPIfPossible:(long long)arg1;	// IMP=0x001000000009f4e3
- (void)_cacheIPAddress:(id)arg1 onInterface:(long long)arg2;	// IMP=0x001000000009f210
- (void)_disconnectStreamForInterface:(long long)arg1 withReason:(unsigned int)arg2;	// IMP=0x001000000009ed07
- (void)_pendingMessageReconnectTimerFired;	// IMP=0x001000000009ec14
- (void)_clearDelayedReconnectTimer;	// IMP=0x001000000009eb46
- (void)_delayedReconnectTimerFired;	// IMP=0x001000000009ea53
- (void)_handleConnectionFailureOnInterface:(long long)arg1 forceDelayedReconnect:(_Bool)arg2 withReason:(unsigned int)arg3;	// IMP=0x001000000009dd00
- (void)_disconnectAllStreamsWithReason:(unsigned int)arg1;	// IMP=0x001000000009dcb4
- (_Bool)_adjustConnectionWithInterfacePreference:(long long)arg1;	// IMP=0x001000000009d868
- (void)_adjustConnection;	// IMP=0x001000000009d851
- (void)markInitiallyConnectedOnInterface:(long long)arg1;	// IMP=0x001000000009d37b
- (void)dealloc;	// IMP=0x001000000009d2f9
- (id)initWithEnvironment:(id)arg1 courierConnection:(id)arg2 carrierBundleHelper:(id)arg3 networkMonitor:(id)arg4 delegate:(id)arg5;	// IMP=0x001000000009cd68
- (id)initWithEnvironment:(id)arg1 delegate:(id)arg2;	// IMP=0x001000000009cc80

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

