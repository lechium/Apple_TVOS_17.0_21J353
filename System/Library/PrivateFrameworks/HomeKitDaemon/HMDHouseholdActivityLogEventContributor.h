//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDEventCountersManager, HMMDateProvider, NSString;

__attribute__((visibility("hidden")))
@interface HMDHouseholdActivityLogEventContributor
{
    NSString *_householdGroupName;	// 8 = 0x8
    HMDEventCountersManager *_countersManager;	// 16 = 0x10
    HMMDateProvider *_dateProvider;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x00100000002a3882
- (void).cxx_destruct;	// IMP=0x00000000002a35f2
@property(readonly, nonatomic) HMMDateProvider *dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) HMDEventCountersManager *countersManager; // @synthesize countersManager=_countersManager;
@property(readonly, nonatomic) NSString *householdGroupName; // @synthesize householdGroupName=_householdGroupName;
- (void)deleteCountersAfterDate:(id)arg1;	// IMP=0x00000000002a34fc
- (void)deleteCountersBeforeDate:(id)arg1;	// IMP=0x00000000002a3439
- (void)finishCoalescingLogEvent:(id)arg1;	// IMP=0x00000000002a3433
- (void)coalesceLogEvent:(id)arg1 fromSourceEvent:(id)arg2;	// IMP=0x00000000002a336f
- (void)startCoalescingLogEvent:(id)arg1;	// IMP=0x00000000002a3369
- (void)contributeLogEvent:(id)arg1 toCoreAnalyticsEvent:(id)arg2;	// IMP=0x00000000002a32a5
- (void)deserializeLogEvent:(id)arg1 fromSerializedMetric:(id)arg2;	// IMP=0x00000000002a31e1
- (void)contributeLogEvent:(id)arg1 toSerializedMetric:(id)arg2;	// IMP=0x00000000002a311d
- (void)populateLogEvent:(id)arg1 forHomeWithUUID:(id)arg2 associatedToDate:(id)arg3;	// IMP=0x00000000002a3050
- (id)householdGroupForLogEvent:(id)arg1;	// IMP=0x00000000002a2f9b
- (id)householdGroupForHomeWithUUID:(id)arg1 associatedWithDate:(id)arg2;	// IMP=0x00000000002a2eb3
- (id)initWithHouseholdGroupName:(id)arg1 countersManager:(id)arg2 dateProvider:(id)arg3;	// IMP=0x00000000002a2de7

@end

