//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCalendar, NSMutableIndexSet, NSMutableOrderedSet, _UIDatePickerCalendarMonth;

__attribute__((visibility("hidden")))
@interface _UIDatePickerCalendarMonthSet : NSObject
{
    NSCalendar *_calendar;	// 8 = 0x8
    unsigned long long _rangeLength;	// 16 = 0x10
    _UIDatePickerCalendarMonth *_referenceMonth;	// 24 = 0x18
    NSMutableIndexSet *_loadedMonthOffsets;	// 32 = 0x20
    NSMutableOrderedSet *_loadedMonths;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00000000002ee788
- (unsigned long long)indexOfMonth:(id)arg1;	// IMP=0x00000000002ee772
- (id)monthAtIndex:(unsigned long long)arg1;	// IMP=0x00000000002ee75c
- (id)loadedMonths;	// IMP=0x00000000002ee746
- (void)insertMonthsAroundMonth:(id)arg1 loadedIndexRange:(struct _NSRange *)arg2;	// IMP=0x00000000002ee6fb
- (void)reloadWithMonthsAroundMonth:(id)arg1;	// IMP=0x00000000002ee6a7
- (struct _NSRange)_loadOffsetRange:(struct __UISignedRange)arg1;	// IMP=0x00000000002ee0d9
- (unsigned long long)_shiftReferenceMonthToFitOffsetMonthsIfNecessary:(struct __UISignedRange)arg1;	// IMP=0x00000000002edfd5
- (struct __UISignedRange)_offsetRangeForMonth:(id)arg1;	// IMP=0x00000000002edca3
- (id)_monthAtOffset:(long long)arg1;	// IMP=0x00000000002edadd
- (void)_ensureReferenceMonthWithFallbackMonth:(id)arg1;	// IMP=0x00000000002eda98
- (void)_clearLoadedData;	// IMP=0x00000000002eda44
- (id)initWithCalendar:(id)arg1 rangeLength:(unsigned long long)arg2;	// IMP=0x00000000002ed8c2

@end
