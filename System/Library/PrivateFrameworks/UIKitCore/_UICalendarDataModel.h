//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCalendar, NSDateInterval, NSLocale, NSString, NSTimeZone, _UIDatePickerCalendarMonth;

__attribute__((visibility("hidden")))
@interface _UICalendarDataModel : NSObject
{
    NSCalendar *_effectiveCalendar;	// 8 = 0x8
    NSLocale *_effectiveLocale;	// 16 = 0x10
    NSLocale *_locale;	// 24 = 0x18
    NSCalendar *_calendar;	// 32 = 0x20
    NSTimeZone *_timeZone;	// 40 = 0x28
    _UIDatePickerCalendarMonth *_visibleMonth;	// 48 = 0x30
    NSDateInterval *_availableDateRange;	// 56 = 0x38
    NSString *_fontDesign;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x000000000041b9af
@property(retain, nonatomic) NSString *fontDesign; // @synthesize fontDesign=_fontDesign;
@property(copy, nonatomic) NSDateInterval *availableDateRange; // @synthesize availableDateRange=_availableDateRange;
@property(retain, nonatomic) _UIDatePickerCalendarMonth *visibleMonth; // @synthesize visibleMonth=_visibleMonth;
@property(retain, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
@property(copy, nonatomic) NSCalendar *calendar; // @synthesize calendar=_calendar;
@property(copy, nonatomic) NSLocale *locale; // @synthesize locale=_locale;
- (void)_deriveEffectiveLocaleAndCalendarIfNeeded;	// IMP=0x000000000041b7fd
@property(readonly, nonatomic) NSTimeZone *effectiveTimeZone;
@property(readonly, nonatomic) NSLocale *effectiveLocale; // @synthesize effectiveLocale=_effectiveLocale;
@property(readonly, nonatomic) NSCalendar *effectiveCalendar; // @synthesize effectiveCalendar=_effectiveCalendar;
- (id)init;	// IMP=0x000000000041b28d

@end

