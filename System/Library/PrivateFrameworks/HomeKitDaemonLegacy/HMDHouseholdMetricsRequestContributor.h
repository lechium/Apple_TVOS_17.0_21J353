//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface HMDHouseholdMetricsRequestContributor
{
}

- (void)coalesceLogEvent:(id)arg1 fromSourceEvent:(id)arg2;	// IMP=0x0000000000b41fad
- (void)contributeLogEvent:(id)arg1 toCoreAnalyticsEvent:(id)arg2;	// IMP=0x0000000000b41f1d
- (void)deserializeLogEvent:(id)arg1 fromSerializedMetric:(id)arg2;	// IMP=0x0000000000b41dc3
- (void)contributeLogEvent:(id)arg1 toSerializedMetric:(id)arg2;	// IMP=0x0000000000b41ccb
- (void)populateLogEvent:(id)arg1 forHomeWithUUID:(id)arg2 associatedToDate:(id)arg3;	// IMP=0x0000000000b41c2a
- (void)incrementRequestCountForHomeUUID:(id)arg1 date:(id)arg2;	// IMP=0x0000000000b41be6
- (id)initWithCountersManager:(id)arg1 dateProvider:(id)arg2;	// IMP=0x0000000000b41baa

@end
