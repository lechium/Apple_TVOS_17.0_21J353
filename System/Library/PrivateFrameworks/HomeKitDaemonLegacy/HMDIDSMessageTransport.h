//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDAppleAccountManager, HMDRemoteAccountManager, HMFOperationBudget, NSMutableArray, NSMutableDictionary, NSMutableOrderedSet, NSObject, NSString;
@protocol HMDIDSService, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDIDSMessageTransport
{
    id <HMDIDSService> _service;	// 8 = 0x8
    _Bool _modernTransport;	// 16 = 0x10
    _Bool _forceIDSScreening;	// 17 = 0x11
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    HMDAppleAccountManager *_appleAccountManager;	// 32 = 0x20
    HMDRemoteAccountManager *_remoteAccountManager;	// 40 = 0x28
    NSMutableArray *_messageContexts;	// 48 = 0x30
    HMFOperationBudget *_sendMessageBudget;	// 56 = 0x38
    NSMutableDictionary *_pendingResponses;	// 64 = 0x40
    NSMutableDictionary *_receivedResponses;	// 72 = 0x48
    NSMutableDictionary *_requestedCapabilities;	// 80 = 0x50
    NSMutableDictionary *_destinationAddress;	// 88 = 0x58
    NSMutableDictionary *_pendingResponseTimers;	// 96 = 0x60
    NSMutableOrderedSet *_messageDedupBuffer;	// 104 = 0x68
}

+ (id)queueOneIdentifierWithMessageName:(id)arg1 target:(id)arg2 collapseID:(id)arg3 timeToLive:(double)arg4 now:(id)arg5;	// IMP=0x00100000002e5447
+ (id)logCategory;	// IMP=0x00100000002e5417
+ (struct _HMFRate)sendMessageRate;	// IMP=0x00100000002e52c5
+ (unsigned long long)sendMessageLimit;	// IMP=0x00100000002e51e3
+ (long long)priorityForMessage:(id)arg1;	// IMP=0x00100000002e51d8
+ (unsigned long long)restriction;	// IMP=0x00100000002e51cd
- (void).cxx_destruct;	// IMP=0x00000000002e2e2d
@property(nonatomic) _Bool forceIDSScreening; // @synthesize forceIDSScreening=_forceIDSScreening;
@property(readonly, nonatomic, getter=isModernTransport) _Bool modernTransport; // @synthesize modernTransport=_modernTransport;
@property(readonly, nonatomic) NSMutableOrderedSet *messageDedupBuffer; // @synthesize messageDedupBuffer=_messageDedupBuffer;
@property(readonly, nonatomic) NSMutableDictionary *pendingResponseTimers; // @synthesize pendingResponseTimers=_pendingResponseTimers;
@property(readonly, nonatomic) NSMutableDictionary *destinationAddress; // @synthesize destinationAddress=_destinationAddress;
@property(readonly, nonatomic) NSMutableDictionary *requestedCapabilities; // @synthesize requestedCapabilities=_requestedCapabilities;
@property(readonly, nonatomic) NSMutableDictionary *receivedResponses; // @synthesize receivedResponses=_receivedResponses;
@property(readonly, nonatomic) NSMutableDictionary *pendingResponses; // @synthesize pendingResponses=_pendingResponses;
@property(readonly) HMFOperationBudget *sendMessageBudget; // @synthesize sendMessageBudget=_sendMessageBudget;
@property(readonly) NSMutableArray *messageContexts; // @synthesize messageContexts=_messageContexts;
@property(readonly, nonatomic) HMDRemoteAccountManager *remoteAccountManager; // @synthesize remoteAccountManager=_remoteAccountManager;
@property(readonly, nonatomic) HMDAppleAccountManager *appleAccountManager; // @synthesize appleAccountManager=_appleAccountManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) id <HMDIDSService> service; // @synthesize service=_service;
- (void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(_Bool)arg4 error:(id)arg5 context:(id)arg6;	// IMP=0x00000000002e285b
- (void)legacyHandleIncomingRemoteMessage:(id)arg1 sourceDevice:(id)arg2 senderDeviceHandle:(id)arg3 isSecure:(_Bool)arg4 incomingMessage:(id)arg5 fromID:(id)arg6 context:(id)arg7;	// IMP=0x00000000002e1a8e
- (void)service:(id)arg1 account:(id)arg2 incomingMessage:(id)arg3 fromID:(id)arg4 context:(id)arg5;	// IMP=0x00000000002e0454
- (_Bool)_shouldProcessLegacyIDSMessageFromID:(id)arg1 context:(id)arg2 message:(id *)arg3 service:(id)arg4;	// IMP=0x00000000002dff8d
- (void)_removePendingResponseTransaction:(id)arg1;	// IMP=0x00000000002dfeaf
- (void)_removePendingResponseTimerForTransaction:(id)arg1;	// IMP=0x00000000002dfd39
- (void)_startPendingResponseTimer:(id)arg1 responseTimeout:(double)arg2 identifier:(id)arg3;	// IMP=0x00000000002dfa22
- (void)_pendingResponseTimeoutFor:(id)arg1;	// IMP=0x00000000002df63a
- (void)_restartPendingResponseTimerFor:(id)arg1 withReducedFactor:(unsigned long long)arg2;	// IMP=0x00000000002df394
- (id)sendMessage:(id)arg1 fromHandle:(id)arg2 destination:(id)arg3 priority:(long long)arg4 timeout:(double)arg5 options:(unsigned long long)arg6 queueOneID:(id)arg7 error:(id *)arg8;	// IMP=0x00000000002de6ce
- (void)sendMessage:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000002de5f0
- (int)transportType;	// IMP=0x00000000002de5e5
- (_Bool)isValidMessage:(id)arg1;	// IMP=0x00000000002de506
- (_Bool)canSendMessage:(id)arg1;	// IMP=0x00000000002de30b
- (_Bool)isSecure;	// IMP=0x00000000002de2bd
- (id)deviceForSenderContext:(id)arg1;	// IMP=0x00000000002ddcdb
- (id)logIdentifier;	// IMP=0x00000000002ddc8b
- (long long)qualityOfService;	// IMP=0x00000000002ddc83
- (id)start;	// IMP=0x00000000002dda89
- (id)initWithAccountRegistry:(id)arg1 service:(id)arg2 appleAccountManager:(id)arg3 remoteAccountManager:(id)arg4;	// IMP=0x00000000002dd7a1
- (id)initModernTransportWithAccountRegistry:(id)arg1 service:(id)arg2 appleAccountManager:(id)arg3 remoteAccountManager:(id)arg4;	// IMP=0x00000000002dd77e
- (id)initModernTransportWithAccountRegistry:(id)arg1;	// IMP=0x00000000002dd68f
- (id)initWithAccountRegistry:(id)arg1;	// IMP=0x00000000002dd5a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

