//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDEventCountersManager, NSString;
@protocol HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDLogEventErrorEventsAnalyzer
{
    HMDEventCountersManager *_eventCountersManager;	// 8 = 0x8
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 16 = 0x10
}

+ (id)managedEventCounterRequestGroups;	// IMP=0x0010000000ccb8fa
+ (id)eventCounterNameForError:(id)arg1;	// IMP=0x0010000000ccb817
+ (id)errorEventsRequestGroupKeys;	// IMP=0x0010000000ccb7e7
- (void).cxx_destruct;	// IMP=0x0000000000ccb7b6
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
@property(readonly, nonatomic) HMDEventCountersManager *eventCountersManager; // @synthesize eventCountersManager=_eventCountersManager;
- (void)runDailyTask;	// IMP=0x0000000000ccb782
- (void)resetEventCountersForAllErrorEventRequestGroups;	// IMP=0x0000000000ccb552
- (void)submitErrorAggregationLogEventsForErrorEventGroup:(id)arg1;	// IMP=0x0000000000ccb2b7
- (void)submitAllFormattedErrorAggregationLogEvents;	// IMP=0x0000000000ccaf08
- (id)currentErrorEventsAnalyzedSummary;	// IMP=0x0000000000ccab9f
- (void)_handleAdditionalErrorsForCloudShareTrustManagerFailureLogEvent:(id)arg1 logEventUnderlyingErrorGroupName:(id)arg2;	// IMP=0x0000000000ccaa57
- (void)_handleAdditionalErrorsForAccessoryPairingLogEvent:(id)arg1 logEventUnderlyingErrorGroupName:(id)arg2;	// IMP=0x0000000000cca90c
- (id)eventCounterRequestGroupNameForLogEvent:(id)arg1;	// IMP=0x0000000000cca368
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x0000000000cc9f1a
- (id)initWithEventCountersManager:(id)arg1 logEventSubmitter:(id)arg2 dailyScheduler:(id)arg3;	// IMP=0x0000000000cc9e52

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

