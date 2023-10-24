//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IDSPushHandler, MISSING_TYPE, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_source;

@interface IDSQuickRelayAllocator : NSObject
{
    IDSPushHandler *_pushHandler;	// 8 = 0x8
    NSMutableDictionary *_requestIDToSession;	// 16 = 0x10
    NSMutableDictionary *_sessionToAllocations;	// 24 = 0x18
    NSMutableArray *_sessionInfoRequiredKeys;	// 32 = 0x20
    NSMutableSet *_pendingRecipientsAcceptedSessions;	// 40 = 0x28
    NSMutableDictionary *_initiatorsAcceptedSessionsWithToken;	// 48 = 0x30
    NSMutableDictionary *_requestIDToAllocateTime;	// 56 = 0x38
    NSMutableDictionary *_allocateResponses;	// 64 = 0x40
    NSMutableDictionary *_requestIDToPreferredLocalInterface;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_responseCleanupTimer;	// 80 = 0x50
    NSMutableDictionary *_sessionIDToURIToResponsePayload;	// 88 = 0x58
    NSMutableDictionary *_duplicateAllocateResponses;	// 96 = 0x60
    NSMutableDictionary *_groupIDToDuplicateResponseCleanupTimers;	// 104 = 0x68
    struct os_unfair_lock_s _lock;	// 112 = 0x70
    NSMutableDictionary *_sessionToLocalParticipantID;	// 120 = 0x78
    NSMutableDictionary *_pushTokenToURIForGroup;	// 128 = 0x80
    NSMutableDictionary *_idsSessionIDToqrSessionID;	// 136 = 0x88
    NSDate *_timeBase;	// 144 = 0x90
}

+ (id)sharedInstance;	// IMP=0x002000000029f82d
- (void).cxx_destruct;	// IMP=0x00200000002c0b47
- (void)setRequestIDToSession:(id)arg1 idsSessionID:(id)arg2;	// IMP=0x00100000002c0a8e
- (MISSING_TYPE *)getCountOfSessionToAllocations;	// IMP=0x00100000002c0a78
- (unsigned long long)getCountOfPendingRecipientsAcceptedSessions;	// IMP=0x00100000002c0a62
- (id)_getQuickRelayIPPreference:(unsigned long long)arg1;	// IMP=0x00100000002c0a38
- (void)_startCleanupTimer;	// IMP=0x00100000002c0887
- (void)_cleanupResponses;	// IMP=0x00100000002c020b
- (void)stopKeepAliveTimer:(id)arg1 relaySessionID:(id)arg2;	// IMP=0x00100000002bff1e
- (void)startKeepAliveTimer:(id)arg1 relaySessionID:(id)arg2;	// IMP=0x00100000002bfbc2
- (id)_getResponse:(id)arg1 relaySessionID:(id)arg2;	// IMP=0x00100000002bf618
- (id)_uuidFromNSStringToNSData:(id)arg1;	// IMP=0x00100000002bf4ea
- (id)_getGroupID:(id)arg1;	// IMP=0x00100000002bf290
- (void)handler:(id)arg1 receivedOfflineMessagePendingForTopic:(id)arg2 messageContext:(id)arg3;	// IMP=0x00100000002bf0f1
- (void)handler:(id)arg1 didReceiveMessage:(id)arg2 forTopic:(id)arg3 fromID:(id)arg4 messageContext:(id)arg5;	// IMP=0x00100000002bee7c
- (unsigned long long)getLocalParticipantIDForRelaySessionID:(id)arg1;	// IMP=0x00100000002bee34
- (void)enablePushHandler:(_Bool)arg1;	// IMP=0x00100000002bea7e
- (id)_parseQuickRelayDefaults:(id)arg1 gropuID:(id)arg2;	// IMP=0x00100000002bda8a
- (id)getSessionInfoFromDefaults:(id)arg1 groupID:(id)arg2;	// IMP=0x00100000002bda78
- (id)_findAllocationForSessionID:(id)arg1 requestIDStr:(id)arg2;	// IMP=0x00100000002bd71b
- (id)_findAllocationListForSessionID:(id)arg1;	// IMP=0x00100000002bd6f0
- (id)_filterSelfAllocationsForSessionID:(id)arg1;	// IMP=0x00100000002bd54a
- (void)_removeAllAllocationsForSessionID:(id)arg1;	// IMP=0x00100000002bcf3f
- (void)_discardAllocation:(id)arg1;	// IMP=0x00100000002bcb50
- (void)_addAllocationForSession:(id)arg1 allocation:(id)arg2;	// IMP=0x00100000002bc837
- (void)invalidateAllocation:(id)arg1;	// IMP=0x00100000002bc713
- (void)_invalidateSession:(id)arg1 isExpiryPurging:(_Bool)arg2;	// IMP=0x00100000002bc4a3
- (void)invalidateSession:(id)arg1 isExpiryPurging:(_Bool)arg2;	// IMP=0x00100000002bc3d6
- (void)cleanUpCachedMappings:(id)arg1;	// IMP=0x00100000002bc290
- (void)reportAWDAllocatorEvent:(unsigned int)arg1 relayProviderType:(long long)arg2 transport:(long long)arg3 localRAT:(unsigned int)arg4 duration:(unsigned long long)arg5 idsSessionID:(id)arg6 reportingDataBlob:(id)arg7 isInitiator:(_Bool)arg8;	// IMP=0x00100000002bb87c
- (long long)getServerProviderForIDSSessionID:(id)arg1;	// IMP=0x00100000002bb6eb
- (void)setInitiatorsAcceptedToken:(id)arg1 pushToken:(id)arg2;	// IMP=0x00100000002bb4da
- (void)requestAllocationForRecipient:(id)arg1;	// IMP=0x00100000002baa3e
- (id)getPushTokenForRelaySessionID:(id)arg1 relaySessionID:(id)arg2;	// IMP=0x00100000002ba635
- (id)getRelaySessionIDForIDSSessionID:(id)arg1 pushToken:(id)arg2;	// IMP=0x00100000002ba1fa
- (id)_uriToParticipantID:(id)arg1;	// IMP=0x00100000002b9b63
- (void)_storeMappingFromPushTokenToURIs:(id)arg1 fromID:(id)arg2 service:(id)arg3 cert:(id)arg4 forGroup:(id)arg5;	// IMP=0x00100000002b96bf
- (id)_findSessionWithID:(id)arg1;	// IMP=0x00100000002b9641
- (void)_startQRConnectionForSession:(id)arg1 isInitiatorsAcceptedSession:(_Bool)arg2 withLocalInterfacePreference:(int)arg3;	// IMP=0x00100000002b8950
- (id)_getStatusMessageFromStatusCode:(unsigned long long)arg1;	// IMP=0x00100000002b88ad
- (void)_sendAWDMetricsForAllocation:(id)arg1 status:(long long)arg2 hasRecipientAccepted:(_Bool)arg3;	// IMP=0x00100000002b824d
- (void)_processAllocationStatusResult:(id)arg1;	// IMP=0x00100000002b789c
- (unsigned int)_getErrorCodeFromAllocationStatus:(int)arg1;	// IMP=0x00100000002b77f4
- (_Bool)_hasSessionInfoRequiredKeys:(id)arg1;	// IMP=0x00100000002b74f6
- (void)_setSessionInfoRequiredKeys;	// IMP=0x00100000002b73af
- (id)_createSessionInfoFromResponsePayload:(id)arg1;	// IMP=0x00100000002b4e18
- (id)_getCombinedSoftwareID:(id)arg1;	// IMP=0x00100000002b4c1e
- (void)_processSelfAllocations:(id)arg1 allocation:(id)arg2;	// IMP=0x00100000002b44b1
- (_Bool)_isDuplicateResponse:(id)arg1 newResponse:(id)arg2;	// IMP=0x00100000002b4157
- (void)_handleIncomingAllocateResponse:(id)arg1 isFromCache:(_Bool)arg2 requestOptions:(id)arg3;	// IMP=0x00100000002afc84
- (id)getAdditionalAllocationForAddress:(id)arg1 selfAddress:(unsigned int)arg2 relaySessionID:(id)arg3 allocateType:(long long)arg4 qrReason:(unsigned short)arg5 previousTime:(unsigned long long)arg6 previousError:(unsigned short)arg7 previousRelayIP:(unsigned int)arg8 previousAccessToken:(id)arg9 requestSelfAllocation:(_Bool)arg10 isSessionIDRemoteDeviceID:(_Bool)arg11 withPreferredRemoteInterface:(int)arg12 withPreferredLocalInterface:(int)arg13;	// IMP=0x00100000002ae68f
- (_Bool)isURIAvailabeInAllocateResponse:(id)arg1 uri:(id)arg2;	// IMP=0x00100000002ae24d
- (id)getURIFromParticipantID:(id)arg1 participantID:(id)arg2;	// IMP=0x00100000002ada96
- (id)getPushTokenFromParticipantID:(id)arg1 participantID:(id)arg2;	// IMP=0x00100000002ad52b
- (id)getPushTokensFromParticipantIDs:(id)arg1 participantIDs:(id)arg2;	// IMP=0x00100000002ace23
- (id)_getPushTokenFromParticipantID:(id)arg1 participantID:(id)arg2;	// IMP=0x00100000002aca73
- (_Bool)_startQRConnectionWithDefaults:(id)arg1;	// IMP=0x00100000002ac760
- (id)setupNewAllocation:(id)arg1 sessionID:(id)arg2 fromIdentity:(id)arg3 fromURI:(id)arg4 fromService:(id)arg5 options:(id)arg6 connectReadyHandler:(CDUnknownBlockType)arg7;	// IMP=0x00100000002ac719
- (id)_tokenURIForToken:(id)arg1 uri:(id)arg2;	// IMP=0x00100000002ac62e
- (id)_setupNewAllocation:(id)arg1 sessionID:(id)arg2 isSessionIDRemoteDeviceID:(_Bool)arg3 fromIdentity:(id)arg4 fromURI:(id)arg5 fromService:(id)arg6 options:(id)arg7 connectReadyHandler:(CDUnknownBlockType)arg8 withPreferredLocalInterface:(int)arg9 forAdditionalAllocation:(_Bool)arg10;	// IMP=0x00100000002a9b76
- (void)_sendIDQueryRequest:(id)arg1 fromIdentity:(id)arg2 fromURI:(id)arg3 fromService:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;	// IMP=0x00100000002a9909
- (id)_getSelfAllocationFromCache:(id)arg1;	// IMP=0x00100000002a9546
- (void)_dispatchIncomingAllocateResponse:(id)arg1 isFromCache:(_Bool)arg2 requestOptions:(id)arg3;	// IMP=0x00100000002a9447
- (_Bool)invalidateLatestResponse:(id)arg1 qrReason:(unsigned short)arg2 previousError:(unsigned short)arg3;	// IMP=0x00100000002a9095
- (_Bool)_addConnectStatus:(id)arg1 relaySessionID:(id)arg2 previousTime:(unsigned long long)arg3 qrReason:(unsigned short)arg4 previousError:(unsigned short)arg5 previousRelayIP:(unsigned int)arg6 previousAccessToken:(id)arg7;	// IMP=0x00100000002a8908
- (id)_getURIForRecipientFromResponse:(id)arg1;	// IMP=0x00100000002a86cb
- (_Bool)_addResponseToCache:(id)arg1 sessionInfo:(id)arg2 modifiedMessage:(id *)arg3;	// IMP=0x00100000002a6dd7
- (void)_notifyURIToParticipantIDMappingChange:(id)arg1;	// IMP=0x00100000002a6a69
- (void)_notifyParticipantID2PushTokenMappingChange:(id)arg1;	// IMP=0x00100000002a6756
- (id)_mergeParticipantID2PushTokenMapping:(id)arg1 sourceResponse:(id)arg2 mappingChange:(_Bool *)arg3;	// IMP=0x00100000002a5d90
- (_Bool)hasParticipantID:(id)arg1 participantID:(id)arg2;	// IMP=0x00100000002a5b7a
- (id)_getResponseForQRSessionID:(id)arg1 sessionID:(id)arg2 index:(long long *)arg3;	// IMP=0x00100000002a595c
- (_Bool)_shouldUseCurrentResponse:(id)arg1 cachedMessage:(id)arg2;	// IMP=0x00100000002a4a2e
- (id)getAllocateResponse:(id)arg1 groupID:(id)arg2;	// IMP=0x00100000002a47dc
- (id)findAllocateResponseForSessionID:(id)arg1 FromURI:(id)arg2;	// IMP=0x00100000002a4292
- (void)_setResponseForQRGroupID:(id)arg1 groupID:(id)arg2;	// IMP=0x00100000002a40d8
- (void)clearResponseFromQRGroupID:(id)arg1;	// IMP=0x00100000002a3f8e
- (id)_getResponseFromQRGroupID:(id)arg1;	// IMP=0x00100000002a3e0b
- (id)setupNewAllocationToDevice:(id)arg1 options:(id)arg2 connectReadyHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000002a3348
- (id)_setupAllocation:(id)arg1 fromURI:(id)arg2 sessionID:(id)arg3 isSessionIDRemoteDeviceID:(_Bool)arg4 options:(id)arg5 prevConnectStatus:(CDStruct_b3ab6eb3 *)arg6 requestUUID:(id)arg7 connectReadyHandler:(CDUnknownBlockType)arg8 withPreferredLocalInterface:(int)arg9;	// IMP=0x00100000002a0b29
- (void)_sendAllocateRequest:(id)arg1;	// IMP=0x00100000002a069e
- (_Bool)_sendKeepAliveRequest:(id)arg1;	// IMP=0x001000000029fc27
- (id)_queryPolicy;	// IMP=0x001000000029fbbd
- (id)_peerIDManager;	// IMP=0x001000000029fba4
- (id)_getIDSAWDLoggingInstance;	// IMP=0x001000000029fb8b
- (void)dealloc;	// IMP=0x001000000029f9cf
- (id)init;	// IMP=0x001000000029f882

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
