//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDEventCountersManager;

__attribute__((visibility("hidden")))
@interface HMDLogEventReachabilityEventsAnalyzer
{
    HMDEventCountersManager *_eventCountersManager;	// 8 = 0x8
}

+ (id)managedEventCounterRequestGroups;	// IMP=0x001000000082fc9f
- (void).cxx_destruct;	// IMP=0x000000000082fc8c
@property(readonly, nonatomic) HMDEventCountersManager *eventCountersManager; // @synthesize eventCountersManager=_eventCountersManager;
- (void)resetAggregationAnalysisContext;	// IMP=0x000000000082fc37
- (void)populateAggregationAnalysisLogEvent:(id)arg1;	// IMP=0x000000000082fad2
- (void)_handleCameraRecordingReachabilityLogEvent:(id)arg1;	// IMP=0x000000000082f9c6
- (void)_handleRemoteDeviceReachabilityChangedLogEvent:(id)arg1;	// IMP=0x000000000082f97b
- (void)_handleReachabiltiyAddRemoveEvent:(id)arg1;	// IMP=0x000000000082f930
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x000000000082f7df
- (id)initWithEventCountersManager:(id)arg1;	// IMP=0x000000000082f771

@end
