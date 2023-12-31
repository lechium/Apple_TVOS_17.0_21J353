//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngineEvent, NSString;
@protocol MPCPlaybackEngineEventStreamSubscription, MPCRTCEventConsumerTestingDelegate, OS_dispatch_group, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MPCRTCEventConsumer : NSObject
{
    NSObject<OS_dispatch_group> *_rtcGroup;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_rtcQueue;	// 16 = 0x10
    MPCPlaybackEngineEvent *_cachedFirstItemAssetLoadEvent;	// 24 = 0x18
    id <MPCRTCEventConsumerTestingDelegate> _testingDelegate;	// 32 = 0x20
    id <MPCPlaybackEngineEventStreamSubscription> _subscription;	// 40 = 0x28
}

+ (id)identifier;	// IMP=0x00100000001c3b8c
+ (id)dateFormatter;	// IMP=0x00100000001c3b5c
+ (id)NSStringFromMPCRTCReportingEventCategory:(long long)arg1;	// IMP=0x00100000001c3aa1
+ (id)rtcIdentifiersFromUniversalIdentifiers:(id)arg1;	// IMP=0x00100000001c38a1
+ (id)rtcIdentifiersFromRadioIdentifiers:(id)arg1;	// IMP=0x00100000001c37ae
+ (id)playerServiceNameWithPlayerID:(id)arg1;	// IMP=0x00100000001c373c
+ (id)identifierStringFromItemIdentifiers:(id)arg1 radioIdentifiers:(id)arg2;	// IMP=0x00100000001c35fa
- (void).cxx_destruct;	// IMP=0x00000000001c04d0
@property(readonly, nonatomic) id <MPCPlaybackEngineEventStreamSubscription> subscription; // @synthesize subscription=_subscription;
@property(nonatomic) __weak id <MPCRTCEventConsumerTestingDelegate> testingDelegate; // @synthesize testingDelegate=_testingDelegate;
- (void)_sendOneMessageWithCategory:(long long)arg1 type:(long long)arg2 payload:(id)arg3;	// IMP=0x00000000001bfd0e
- (void)_sendReportWithSession:(id)arg1 category:(long long)arg2 type:(long long)arg3 payload:(id)arg4;	// IMP=0x00000000001bfbfa
- (id)_rtcUserInfoWithServiceName:(id)arg1;	// IMP=0x00000000001bfafb
- (id)_rtcSessionInfoWithSamplingUUID:(id)arg1;	// IMP=0x00000000001bf910
- (void)_generateConfiguredReportingSessionWithSamplingUUID:(id)arg1 serviceName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000001bf77a
- (void)_updateAssetSelectionEvent:(id)arg1 fromAssetLoadEndEvent:(id)arg2 untilAssetLoadBeginEvent:(id)arg3 cursor:(id)arg4;	// IMP=0x00000000001bf05d
- (void)_performABCSnapshotWithPayloadIfNecessary:(id)arg1;	// IMP=0x00000000001bee0c
- (id)_underlyingErrorFromPayload:(id)arg1;	// IMP=0x00000000001bebe4
- (_Bool)_itemWasPreviouslyLoaded:(id)arg1 cursor:(id)arg2;	// IMP=0x00000000001be855
- (id)_itemAssetTypeFromItemAssetLoadEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x00000000001bdf9f
- (id)_mediaIdentifierFromItemAssetLoadEndEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x00000000001bdbac
- (id)_tapToPlayMetrics:(id)arg1 fromItemStartEvent:(id)arg2;	// IMP=0x00000000001bd7e2
- (id)_accountSnapshotWithCursor:(id)arg1;	// IMP=0x00000000001bd657
- (id)_itemStartIncitingEvent:(id)arg1 fromItemStartEvent:(id)arg2;	// IMP=0x00000000001bd3bf
- (id)_reasonForEndEvent:(id)arg1 cursor:(id)arg2;	// IMP=0x00000000001bce5d
- (id)_payloadForItemSummary:(id)arg1 fromItemEvent:(id)arg2;	// IMP=0x00000000001bc7d3
- (id)_payloadForItemSummary:(id)arg1 fromEvent:(id)arg2;	// IMP=0x00000000001bc672
- (id)_payloadForItemAssetLoad:(id)arg1 fromItemEvent:(id)arg2;	// IMP=0x00000000001bb0fb
- (id)_payloadForQueueLoad:(id)arg1 fromQueueLoadEndEvent:(id)arg2;	// IMP=0x00000000001ba7e7
- (id)_payloadForSessionSummary:(id)arg1 fromEvent:(id)arg2;	// IMP=0x00000000001ba286
- (id)_payloadForSessionStart:(id)arg1 fromEvent:(id)arg2;	// IMP=0x00000000001b92d6
- (void)_sendReportForItemSummaryWithEndReason:(id)arg1 cursor:(id)arg2 event:(id)arg3;	// IMP=0x00000000001b919f
- (void)_sendReportForItemSummary:(id)arg1 event:(id)arg2;	// IMP=0x00000000001b9185
- (void)_sendReportForItemAssetLoad:(id)arg1 event:(id)arg2;	// IMP=0x00000000001b8dba
- (void)_sendQueueLoadEventIfNeeded:(id)arg1 forItemEvent:(id)arg2;	// IMP=0x00000000001b8926
- (void)_sendReportForSessionStart:(id)arg1 event:(id)arg2 withType:(long long)arg3;	// IMP=0x00000000001b886e
- (void)_sendSessionStartIfNeeded:(id)arg1 forItemEvent:(id)arg2;	// IMP=0x00000000001b8776
- (void)_sendReportForSessionSummary:(id)arg1 event:(id)arg2 withType:(long long)arg3;	// IMP=0x00000000001b86be
- (void)_handleReportingForItemStartEvent:(id)arg1 event:(id)arg2;	// IMP=0x00000000001b8625
- (void)unsubscribeFromEventStream:(id)arg1;	// IMP=0x00000000001b860b
- (void)subscribeToEventStream:(id)arg1;	// IMP=0x00000000001b8302
- (id)init;	// IMP=0x00000000001b81f9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

