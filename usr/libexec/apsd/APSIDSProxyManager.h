//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable, NSMutableArray, NSMutableDictionary, NSString, PCPersistentTimer;
@protocol APSIDSProxyManagerDelegate, APSIDSService;

@interface APSIDSProxyManager : NSObject
{
    id <APSIDSService> _idsService;	// 8 = 0x8
    id <APSIDSProxyManagerDelegate> _delegate;	// 16 = 0x10
    NSMapTable *_environmentToListener;	// 24 = 0x18
    _Bool _nearby;	// 32 = 0x20
    NSString *_recentDaemonAliveGuid;	// 40 = 0x28
    NSMutableDictionary *_apsOutgoingMessageMap;	// 48 = 0x30
    NSMutableArray *_deviceNotFoundMessageQueue;	// 56 = 0x38
    PCPersistentTimer *_deviceNotFoundTimer;	// 64 = 0x40
}

+ (_Bool)shouldAssertWiFi;	// IMP=0x002000000008f170
+ (id)_idsSendQueue;	// IMP=0x0010000000089edc
- (void).cxx_destruct;	// IMP=0x002000000008fd1d
@property(retain, nonatomic) PCPersistentTimer *deviceNotFoundTimer; // @synthesize deviceNotFoundTimer=_deviceNotFoundTimer;
@property(retain, nonatomic) NSMutableArray *deviceNotFoundMessageQueue; // @synthesize deviceNotFoundMessageQueue=_deviceNotFoundMessageQueue;
@property(copy, nonatomic) NSString *recentDaemonAliveGuid; // @synthesize recentDaemonAliveGuid=_recentDaemonAliveGuid;
@property(readonly, nonatomic, getter=isNearby) _Bool nearby; // @synthesize nearby=_nearby;
@property(nonatomic) __weak id <APSIDSProxyManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)service:(id)arg1 didSwitchActivePairedDevice:(id)arg2 acknowledgementBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000008fb6d
- (void)service:(id)arg1 linkedDevicesChanged:(id)arg2;	// IMP=0x001000000008fabe
- (void)service:(id)arg1 nearbyDevicesChanged:(id)arg2;	// IMP=0x001000000008fa59
- (void)service:(id)arg1 devicesChanged:(id)arg2;	// IMP=0x001000000008f99a
- (void)_updateTimerIfNecessaryWithDevices:(id)arg1;	// IMP=0x001000000008f994
- (void)_retrieveAllDevicesAndDo:(CDUnknownBlockType)arg1;	// IMP=0x001000000008f7ea
- (void)_checkNearbyDevices:(id)arg1;	// IMP=0x001000000008f373
- (void)_assertWiFiIfPossible;	// IMP=0x001000000008f2f1
- (void)__assertWiFiIfPossible;	// IMP=0x001000000008f178
- (void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x001000000008d680
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5;	// IMP=0x001000000008d42d
- (void)removeAllPendingAPSMessages;	// IMP=0x001000000008d393
- (void)sendProxyIsConnected:(_Bool)arg1 guid:(id)arg2 environmentName:(id)arg3;	// IMP=0x001000000008d28c
- (void)sendAppTokenGenerateResponse:(id)arg1 error:(id)arg2 guid:(id)arg3 environmentName:(id)arg4;	// IMP=0x001000000008d113
- (void)sendExpiredNonceWithServerTime:(id)arg1 shouldRollToken:(_Bool)arg2 guid:(id)arg3 environmentName:(id)arg4;	// IMP=0x001000000008cfbe
- (void)sendReversePushResponse:(long long)arg1 messageGUID:(id)arg2 messageId:(unsigned long long)arg3 guid:(id)arg4 environmentName:(id)arg5;	// IMP=0x001000000008ce5c
- (void)sendMessage:(id)arg1 guid:(id)arg2 environmentName:(id)arg3;	// IMP=0x001000000008cd56
- (void)sendTokenGenerateMessageWithTopicHash:(id)arg1 baseToken:(id)arg2 appId:(unsigned short)arg3 expirationTTL:(unsigned int)arg4 vapidPublicKeyHash:(id)arg5 type:(long long)arg6 guid:(id)arg7 environmentName:(id)arg8;	// IMP=0x001000000008ca58
- (void)sendMessageTracingStatus:(int)arg1 topic:(id)arg2 tracingUUID:(id)arg3 token:(id)arg4 guid:(id)arg5 environmentName:(id)arg6;	// IMP=0x001000000008c8ea
- (void)sendResponse:(long long)arg1 messageId:(id)arg2 token:(id)arg3 connectionType:(long long)arg4 generation:(unsigned long long)arg5 guid:(id)arg6 environmentName:(id)arg7;	// IMP=0x001000000008c719
- (void)sendInactiveWithEnvironmentName:(id)arg1 guid:(id)arg2;	// IMP=0x001000000008c694
- (void)sendPubSubChannelListRequest:(long long)arg1 environmentName:(id)arg2 guid:(id)arg3;	// IMP=0x001000000008c538
- (void)sendPubSubUpdateMessage:(id)arg1 connectionType:(long long)arg2 environmentName:(id)arg3 guid:(id)arg4;	// IMP=0x001000000008c3b1
- (void)sendPubSubChannelListResponse:(id)arg1 environmentName:(id)arg2 guid:(id)arg3;	// IMP=0x001000000008c269
- (void)sendPubSubChannelList:(id)arg1 messageID:(unsigned int)arg2 token:(id)arg3 connectionType:(long long)arg4 environmentName:(id)arg5 guid:(id)arg6;	// IMP=0x001000000008c082
- (void)sendFilterWithEnvironmentName:(id)arg1 guid:(id)arg2 enabledTopics:(id)arg3 ignoredTopics:(id)arg4 opportunisticTopics:(id)arg5 nonWakingTopics:(id)arg6 topicSalts:(id)arg7;	// IMP=0x001000000008bdd2
- (void)sendPresenceWithEnvironmentName:(id)arg1 guid:(id)arg2 token:(id)arg3 hwVersion:(id)arg4 swVersion:(id)arg5 swBuild:(id)arg6 certificate:(id)arg7 nonce:(id)arg8 signature:(id)arg9;	// IMP=0x001000000008bb18
- (void)sendReceivedPush:(id)arg1 forConnectionType:(long long)arg2 generation:(unsigned long long)arg3 guid:(id)arg4 environmentName:(id)arg5;	// IMP=0x001000000008b929
- (void)sendLargeMessageSize:(unsigned long long)arg1 guid:(id)arg2 environmentName:(id)arg3;	// IMP=0x001000000008b7ab
- (void)sendMessageSize:(unsigned long long)arg1 guid:(id)arg2 environmentName:(id)arg3;	// IMP=0x001000000008b62d
- (void)sendPushToken:(id)arg1 guid:(id)arg2 environmentName:(id)arg3;	// IMP=0x001000000008b4d0
- (void)_sendDaemonAliveMessage;	// IMP=0x001000000008b400
- (void)_flushDeviceNotFoundMessageQueue;	// IMP=0x001000000008b122
- (void)_deviceNotFoundTimerFired;	// IMP=0x001000000008b03f
- (void)_scheduleDeviceNotFoundTimer;	// IMP=0x001000000008aee1
- (void)sendProxyMessage:(id)arg1 forAPSMessage:(id)arg2;	// IMP=0x001000000008a64c
- (void)sendProxyMessage:(id)arg1;	// IMP=0x001000000008a638
- (id)_recipientDevice;	// IMP=0x001000000008a4c7
- (void)removeListener:(id)arg1 environment:(id)arg2;	// IMP=0x001000000008a3aa
- (void)setListener:(id)arg1 environment:(id)arg2;	// IMP=0x001000000008a2eb
@property(readonly, nonatomic) _Bool canUseProxy;
- (void)dealloc;	// IMP=0x001000000008a1ff
- (id)init;	// IMP=0x0010000000089f33

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

