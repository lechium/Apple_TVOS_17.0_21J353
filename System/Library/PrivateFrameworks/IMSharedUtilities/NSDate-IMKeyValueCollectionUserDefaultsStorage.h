//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (IMKeyValueCollectionUserDefaultsStorage)
+ (id)__im_dateFromEncodedString:(id)arg1;	// IMP=0x005000000006d14e
+ (id)__im_serialization_dateFormatter;	// IMP=0x005000000006d023
+ (id)__im_iMessageDateFromTimeStamp:(id)arg1;	// IMP=0x005000000006cd88
+ (id)__im_clampDate:(id)arg1;	// IMP=0x005000000006cd31
+ (_Bool)useCourierTime;	// IMP=0x005000000006c86a
+ (id)__im_dateWithCurrentServerTime;	// IMP=0x005000000006c6f1
+ (id)__im_dateWithNanosecondTimeIntervalSinceReferenceDate:(long long)arg1;	// IMP=0x005000000006c6c9
- (_Bool)isArchivable_im;	// IMP=0x001000000003831f
- (id)__im_dateByAddingDays:(long long)arg1;	// IMP=0x001000000006d1d1
- (id)__im_encodeAsString;	// IMP=0x001000000006d0e7
- (_Bool)__im_isEqualToSeconds:(id)arg1;	// IMP=0x001000000006cf4b
- (long long)secondsDifferenceFromDate:(id)arg1;	// IMP=0x001000000006cc8a
- (long long)minutesDifferenceFromDate:(id)arg1;	// IMP=0x001000000006cbe3
- (long long)hoursDifferenceFromDate:(id)arg1;	// IMP=0x001000000006cb3c
- (long long)differenceFromDate:(id)arg1;	// IMP=0x001000000006ca95
- (_Bool)isToday;	// IMP=0x001000000006c940
- (_Bool)__im_isApproximatelyEqualToDate:(id)arg1;	// IMP=0x001000000006c8b2
- (long long)__im_nanosecondTimeIntervalSinceEpochTime;	// IMP=0x001000000006c892
- (long long)__im_nanosecondTimeInterval;	// IMP=0x001000000006c872
@end

