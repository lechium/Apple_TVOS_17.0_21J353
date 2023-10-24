//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (RTExtensions)
+ (id)roundingUpDate:(id)arg1 bucketDurationMinute:(int)arg2;	// IMP=0x00600000000362b0
+ (id)dateBisectingDate1:(id)arg1 date2:(id)arg2;	// IMP=0x0060000000036227
+ (id)dateWithHour:(long long)arg1 minute:(long long)arg2 second:(long long)arg3;	// IMP=0x006000000003612e
+ (id)dateWithResolution:(unsigned long long)arg1 calendar:(id)arg2;	// IMP=0x0060000000035daa
+ (id)dateWithResolution:(unsigned long long)arg1;	// IMP=0x0060000000035d1c
+ (id)dateFormatter;	// IMP=0x0060000000035c49
+ (id)stringFromTimestamp:(double)arg1;	// IMP=0x0060000000035bf2
+ (id)endOfDay;	// IMP=0x006000000003576e
+ (id)startOfDay;	// IMP=0x0060000000035665
- (id)dateByRoundingWithTimeQuantization:(long long)arg1;	// IMP=0x0010000000036063
- (id)dateByAddingUnit:(unsigned long long)arg1 value:(long long)arg2;	// IMP=0x0010000000035fe6
- (id)dateReducedToResolution:(unsigned long long)arg1 calendar:(id)arg2;	// IMP=0x0010000000035ea2
- (id)dateReducedToResolution:(unsigned long long)arg1;	// IMP=0x0010000000035e37
- (id)getFormattedDateString;	// IMP=0x0010000000035b35
- (id)stringFromDate;	// IMP=0x0010000000035a7f
- (id)weekdayStringFromDate;	// IMP=0x00100000000359d4
- (unsigned long long)weekday;	// IMP=0x001000000003596b
- (unsigned long long)minute;	// IMP=0x001000000003590c
- (unsigned long long)hour;	// IMP=0x00100000000358ad
- (id)endOfDay;	// IMP=0x00100000000357be
- (id)startOfDay;	// IMP=0x00100000000356b5
- (_Bool)isOnOrAfter:(id)arg1;	// IMP=0x001000000003564b
- (_Bool)isAfterDate:(id)arg1;	// IMP=0x0010000000035631
- (_Bool)isOnOrBefore:(id)arg1;	// IMP=0x0010000000035617
- (_Bool)isBeforeDate:(id)arg1;	// IMP=0x00100000000355fd
- (_Bool)betweenDate:(id)arg1 andDate:(id)arg2;	// IMP=0x001000000003553b
@end

