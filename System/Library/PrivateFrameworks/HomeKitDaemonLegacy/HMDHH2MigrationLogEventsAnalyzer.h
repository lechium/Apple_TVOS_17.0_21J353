//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCounterThresholdTTRTrigger, HMDEventCounterGroup, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHH2MigrationLogEventsAnalyzer
{
    HMDCounterThresholdTTRTrigger *_migrationFailureTTRTrigger;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_queue;	// 16 = 0x10
    HMDEventCounterGroup *_counterGroup;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00000000008b4576
@property(readonly, nonatomic) HMDEventCounterGroup *counterGroup; // @synthesize counterGroup=_counterGroup;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(readonly, nonatomic) HMDCounterThresholdTTRTrigger *migrationFailureTTRTrigger; // @synthesize migrationFailureTTRTrigger=_migrationFailureTTRTrigger;
- (void)runDailyTask;	// IMP=0x00000000008b44cd
- (void)didReceiveEventFromDispatcher:(id)arg1;	// IMP=0x00000000008b4439
- (id)initWithDataSource:(id)arg1;	// IMP=0x00000000008b4215

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

