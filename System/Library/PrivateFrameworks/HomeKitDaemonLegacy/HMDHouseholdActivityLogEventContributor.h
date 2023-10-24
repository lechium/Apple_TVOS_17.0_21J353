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

+ (id)logCategory;	// IMP=0x001000000084ddfe
- (void).cxx_destruct;	// IMP=0x000000000084db6e
@property(readonly, nonatomic) HMMDateProvider *dateProvider; // @synthesize dateProvider=_dateProvider;
@property(readonly, nonatomic) HMDEventCountersManager *countersManager; // @synthesize countersManager=_countersManager;
@property(readonly, nonatomic) NSString *householdGroupName; // @synthesize householdGroupName=_householdGroupName;
- (void)deleteCountersAfterDate:(id)arg1;	// IMP=0x000000000084da78
- (void)deleteCountersBeforeDate:(id)arg1;	// IMP=0x000000000084d9b5
- (void)finishCoalescingLogEvent:(id)arg1;	// IMP=0x000000000084d9af
- (void)coalesceLogEvent:(id)arg1 fromSourceEvent:(id)arg2;	// IMP=0x000000000084d8eb
- (void)startCoalescingLogEvent:(id)arg1;	// IMP=0x000000000084d8e5
- (void)contributeLogEvent:(id)arg1 toCoreAnalyticsEvent:(id)arg2;	// IMP=0x000000000084d821
- (void)deserializeLogEvent:(id)arg1 fromSerializedMetric:(id)arg2;	// IMP=0x000000000084d75d
- (void)contributeLogEvent:(id)arg1 toSerializedMetric:(id)arg2;	// IMP=0x000000000084d699
- (void)populateLogEvent:(id)arg1 forHomeWithUUID:(id)arg2 associatedToDate:(id)arg3;	// IMP=0x000000000084d5cc
- (id)householdGroupForLogEvent:(id)arg1;	// IMP=0x000000000084d517
- (id)householdGroupForHomeWithUUID:(id)arg1 associatedWithDate:(id)arg2;	// IMP=0x000000000084d42f
- (id)initWithHouseholdGroupName:(id)arg1 countersManager:(id)arg2 dateProvider:(id)arg3;	// IMP=0x000000000084d363

@end

