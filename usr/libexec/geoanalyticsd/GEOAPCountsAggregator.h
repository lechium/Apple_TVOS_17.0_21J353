//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSLock;

@interface GEOAPCountsAggregator : NSObject
{
    NSDate *_lastDailyAggregation;	// 8 = 0x8
    NSDate *_lastMonthlyAggregation;	// 16 = 0x10
    double _dailyAggregationInterval;	// 24 = 0x18
    NSLock *_runningLock;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000009dc4
- (id)apPersistence;	// IMP=0x0010000000009bf2
- (id)now;	// IMP=0x0010000000009bd9
- (double)retrieveDailyAggregationInterval;	// IMP=0x0010000000009bc2
- (id)retrieveLastMonthlyAggregationTime;	// IMP=0x0010000000009bab
- (void)saveLastMonthlyAggregationTime:(id)arg1;	// IMP=0x0010000000009b94
- (id)retrieveLastDailyAggregationTime;	// IMP=0x0010000000009b7d
- (void)saveLastDailyAggregationTime:(id)arg1;	// IMP=0x0010000000009b66
- (void)aggregateMonthlyCountsAndReportFrom:(id)arg1 until:(id)arg2;	// IMP=0x0010000000009a18
- (_Bool)aggregateDailyCountsAndReportFrom:(id)arg1 until:(id)arg2;	// IMP=0x00100000000098b1
- (void)aggregateDailyUsageCountsAndReportFrom:(id)arg1 until:(id)arg2;	// IMP=0x00100000000079e8
- (void)aggregateMonthlyUsageCountsAndReportFrom:(id)arg1 until:(id)arg2;	// IMP=0x0010000000006aa3
- (void)reportDailySettingsFrom:(id)arg1 until:(id)arg2;	// IMP=0x0010000000006524
- (void)startMonthlyAggregationFromTime:(id)arg1;	// IMP=0x0010000000005e9f
- (void)startDailyAggregationFromTime:(id)arg1;	// IMP=0x0010000000005c9b
- (void)setup;	// IMP=0x00100000000058cc
- (id)init;	// IMP=0x0010000000005880

@end

