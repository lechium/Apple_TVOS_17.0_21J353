//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;
@protocol HMMLogEventSubmitting;

__attribute__((visibility("hidden")))
@interface HMDWidgetTimelineRefresherEventsAnalyzer
{
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 8 = 0x8
    NSDictionary *_widgetRefreshReasonCounterGroupByKind;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002ea290
@property(readonly, nonatomic) NSDictionary *widgetRefreshReasonCounterGroupByKind; // @synthesize widgetRefreshReasonCounterGroupByKind=_widgetRefreshReasonCounterGroupByKind;
@property(readonly, nonatomic) id <HMMLogEventSubmitting> logEventSubmitter; // @synthesize logEventSubmitter=_logEventSubmitter;
- (void)resetAggregationAnalysisContext;	// IMP=0x00000000002ea22a
- (void)populateAggregationAnalysisLogEvent:(id)arg1;	// IMP=0x00000000002ea137
- (void)runDailyTask;	// IMP=0x00000000002ea0b9
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x00000000002e9eaa
- (id)initWithEventCountersManager:(id)arg1 logEventSubmitter:(id)arg2 dailyScheduler:(id)arg3;	// IMP=0x00000000002e9ba6

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

