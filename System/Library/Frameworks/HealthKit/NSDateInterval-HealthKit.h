//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDateInterval.h>

@class NSDate, NSString;

@interface NSDateInterval (HealthKit)
+ (id)hk_dateIntervalForDayFromDate:(id)arg1 calendar:(id)arg2;	// IMP=0x001000000002ee5e
+ (id)hk_dateIntervalWithAnchor:(id)arg1 startOffset:(double)arg2 endOffset:(double)arg3;	// IMP=0x001000000002ed95
+ (id)hk_instantaneousDateIntervalWithDate:(id)arg1;	// IMP=0x001000000002ed45
+ (id)hk_dateIntervalWithStart:(double)arg1 end:(double)arg2;	// IMP=0x001000000002ec98
+ (id)hk_allTime;	// IMP=0x001000000002ec06
+ (id)hk_sleepWeekIntervalForMorningIndex:(long long)arg1 calendar:(id)arg2;	// IMP=0x0010000000251ea3
+ (id)hk_sleepDayIntervalForMorningIndexRange:(CDStruct_912cb5d2)arg1 calendar:(id)arg2;	// IMP=0x0010000000251dd0
+ (id)hk_sleepDayIntervalForMorningIndex:(long long)arg1 calendar:(id)arg2;	// IMP=0x0010000000251d0f
- (id)hk_prettyString;	// IMP=0x001000000002f092
- (_Bool)hk_containsTime:(double)arg1;	// IMP=0x001000000002efeb
- (_Bool)hk_intersectsDateIntervalWithStartDate:(id)arg1 endDate:(id)arg2;	// IMP=0x001000000002ef56
- (id)_hk_dateForYearMonthDayComponents:(id)arg1 hourMinuteSecondComponents:(id)arg2 calendar:(id)arg3;	// IMP=0x0010000000252283
- (id)hk_dateIntervalByMappingToSleepDayWithMorningIndex:(long long)arg1 calendar:(id)arg2;	// IMP=0x0010000000251f65

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSDate *endDate;
@property(readonly) unsigned long long hash;
@property(readonly, copy, nonatomic) NSDate *startDate;
@property(readonly) Class superclass;
@end

