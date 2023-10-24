//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent, NSString, NSUUID;
@protocol HMDMediaDestinationControllerMetricsEventDispatcherDataSource, HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDMediaDestinationControllerMetricsEventDispatcher : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    id <HMDMediaDestinationControllerMetricsEventDispatcherDataSource> _dataSource;	// 16 = 0x10
    NSUUID *_identifier;	// 24 = 0x18
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 32 = 0x20
    HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent *_trackedStagedDestinationIdentifierEvent;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000003e101a
- (void).cxx_destruct;	// IMP=0x00000000003e0fc9
@property(retain) HMDMediaDestinationControllerStagedDestinationIdentifierCommittedEvent *trackedStagedDestinationIdentifierEvent; // @synthesize trackedStagedDestinationIdentifierEvent=_trackedStagedDestinationIdentifierEvent;
@property(readonly) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
@property __weak id <HMDMediaDestinationControllerMetricsEventDispatcherDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (id)logIdentifier;	// IMP=0x00000000003e0ef9
- (void)runDailyTask;	// IMP=0x00000000003e0ee7
- (id)dataSourceIsTriggeredOnControllerDevice;	// IMP=0x00000000003e0db7
- (id)dataSourceDestinationTypeWithIdentifier:(id)arg1;	// IMP=0x00000000003e0c5c
- (id)dataSourceCurrentDestinationType;	// IMP=0x00000000003e0aeb
- (id)dataSourceCurrentUser;	// IMP=0x00000000003e09bb
- (id)dataSourceCurrentUserPrivilege;	// IMP=0x00000000003e0946
- (void)submitDailySetDestinationEvent;	// IMP=0x00000000003e06b9
- (void)submitStagedDestinationIdentifierCommittedEventWithCommittedDestinationIdentifier:(id)arg1;	// IMP=0x00000000003e044f
- (void)startStagedDestinationIdentifierCommittedEventWithStagedDestinationIdentifier:(id)arg1;	// IMP=0x00000000003e02c0
- (void)submitFailureEventWithEventErrorCode:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x00000000003e0115
- (void)submitTransactionUpdatedDestinationEventWithDestinationIdentifier:(id)arg1 existingDestinationIdentifier:(id)arg2;	// IMP=0x00000000003dffd0
- (void)submitReceivedUpdateDestinationRequestMessageEventWithDestinationIdentifier:(id)arg1 existingDestinationIdentifier:(id)arg2;	// IMP=0x00000000003dfe8b
- (id)initWithIdentifier:(id)arg1 logEventSubmitter:(id)arg2 dataSource:(id)arg3;	// IMP=0x00000000003dfdc4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

