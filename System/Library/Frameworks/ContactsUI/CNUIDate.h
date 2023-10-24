//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CNUIDate : NSObject
{
}

+ (_Bool)isYearlessComponents:(id)arg1;	// IMP=0x0080000000014b90
+ (id)dateByNormalizingToGMT:(id)arg1;	// IMP=0x0080000000014a71
+ (id)dateFromComponents:(id)arg1 destinationCalendar:(id)arg2;	// IMP=0x00800000000147b5
+ (id)yearlessComponentsFromDate:(id)arg1 calendar:(id)arg2;	// IMP=0x0080000000014748
+ (id)yearlessComponentsFromDate:(id)arg1;	// IMP=0x00800000000146cb
+ (id)componentsFromDate:(id)arg1 sourceCalendar:(id)arg2 destinationCalendar:(id)arg3;	// IMP=0x00800000000145f3
+ (id)GMTComponentsFromDate:(id)arg1 sourceCalendar:(id)arg2;	// IMP=0x0080000000014554
+ (id)gregorianCalendarGMT;	// IMP=0x0080000000014494
+ (id)currentCalendarGMT;	// IMP=0x00800000000143d5
+ (void)localeDidChange:(id)arg1;	// IMP=0x00800000000143a0
+ (void)initialize;	// IMP=0x00800000000142fe

@end

