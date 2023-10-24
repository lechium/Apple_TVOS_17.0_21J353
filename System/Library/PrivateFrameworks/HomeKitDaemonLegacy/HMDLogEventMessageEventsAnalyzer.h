//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDEventCounterGroup, HMDEventCountersManager, NSObject, NSString, NSUserDefaults;
@protocol HMMLogEventSubmitting, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDLogEventMessageEventsAnalyzer
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _isPrimaryResident;	// 12 = 0xc
    double _lastRemoteMessageEventsPeriodicSubmissionTime;	// 16 = 0x10
    double _lastXPCMessageEventsPeriodicSubmissionTime;	// 24 = 0x18
    HMDEventCountersManager *_eventCountersManager;	// 32 = 0x20
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 40 = 0x28
    NSUserDefaults *_userDefaults;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_workQueue;	// 56 = 0x38
    unsigned long long _periodicLoggingInterval;	// 64 = 0x40
    HMDEventCounterGroup *_residentSyncGroup;	// 72 = 0x48
    HMDEventCounterGroup *_homeManagerMessagesGroup;	// 80 = 0x50
    CDUnknownBlockType _dateFactory;	// 88 = 0x58
}

+ (id)managedEventCounterRequestGroups;	// IMP=0x00100000002259e3
- (void).cxx_destruct;	// IMP=0x0000000000225475
@property(copy) CDUnknownBlockType dateFactory; // @synthesize dateFactory=_dateFactory;
@property _Bool isPrimaryResident; // @synthesize isPrimaryResident=_isPrimaryResident;
@property(readonly, nonatomic) HMDEventCounterGroup *homeManagerMessagesGroup; // @synthesize homeManagerMessagesGroup=_homeManagerMessagesGroup;
@property(readonly, nonatomic) HMDEventCounterGroup *residentSyncGroup; // @synthesize residentSyncGroup=_residentSyncGroup;
@property(readonly) unsigned long long periodicLoggingInterval; // @synthesize periodicLoggingInterval=_periodicLoggingInterval;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, nonatomic) HMDEventCountersManager *eventCountersManager; // @synthesize eventCountersManager=_eventCountersManager;
- (void)runDailyTask;	// IMP=0x0000000000225363
- (void)resetAggregationAnalysisContext;	// IMP=0x00000000002251f3
- (void)populateAggregationAnalysisLogEvent:(id)arg1;	// IMP=0x0000000000224c87
@property double lastRemoteMessageEventsPeriodicSubmissionTime; // @synthesize lastRemoteMessageEventsPeriodicSubmissionTime=_lastRemoteMessageEventsPeriodicSubmissionTime;
@property double lastXPCMessageEventsPeriodicSubmissionTime; // @synthesize lastXPCMessageEventsPeriodicSubmissionTime=_lastXPCMessageEventsPeriodicSubmissionTime;
- (void)handlePrimaryResidentChangedNotification:(id)arg1;	// IMP=0x0000000000224ad1
- (void)_handleXPCMessageCounterLogEvent:(id)arg1;	// IMP=0x000000000022482a
- (void)_updateResidentSyncCountersWithRemoteMessageLogEvent:(id)arg1;	// IMP=0x0000000000224824
- (void)_updatePeriodicSubmissionGroupRemoteMessageEventCountersForMessageName:(id)arg1 peerInformation:(id)arg2 transportType:(int)arg3 messageDirectionSending:(_Bool)arg4 identifier:(id)arg5;	// IMP=0x0000000000224587
- (void)_updateDailySubmissionGroupRemoteMessageEventCountersForTransportType:(int)arg1 messageDirectionSending:(_Bool)arg2;	// IMP=0x00000000002244e2
- (void)_handleRemoteMessageLogEvent:(id)arg1;	// IMP=0x000000000022410f
- (id)periodicRemoteMessageCounterEventNameWithMessageName:(id)arg1 peerInformation:(id)arg2;	// IMP=0x000000000022409e
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x000000000022400a
- (void)submitPeriodicRemoteMessageCountersNow:(double)arg1;	// IMP=0x0000000000223e51
- (void)submitPeriodicRemoteMessageCountersLogEventIfNeeded;	// IMP=0x0000000000223d12
- (void)submitPeriodicXPCMessageCountersLogEventsNow:(double)arg1;	// IMP=0x0000000000223bc9
- (void)submitPeriodicXPCMessageCountersLogEventsIfNeeded;	// IMP=0x0000000000223a8a
- (void)submitPeriodicAggregateCountersForRemoteMessageCounterRequestGroup:(id)arg1;	// IMP=0x0000000000223638
- (id)messageDirectionStringForRemoteMessageCounterRequestGroup:(id)arg1;	// IMP=0x00000000002234fb
- (id)transportTypeStringForRemoteMessageCounterRequestGroup:(id)arg1;	// IMP=0x00000000002233a5
- (void)submitPeriodicAggregateCountersForXPCMessageCounterRequestGroup:(id)arg1;	// IMP=0x0000000000222f6c
- (id)initWithDataSource:(id)arg1;	// IMP=0x0000000000222c96

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
