//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@class NSString;

@interface NSDate (MTAdditions)
+ (id)mt_lessVerboseDateFormatter;	// IMP=0x001000000002a947
+ (id)mt_verboseDateFormatter;	// IMP=0x001000000002a82f
+ (id)mt_dateFormatterNoYearAbbrevMonth;	// IMP=0x001000000002a717
+ (id)mt_dateFormatterNoYear;	// IMP=0x001000000002a5ff
+ (id)mt_dateFormatterShortStyleWithYear;	// IMP=0x001000000002a52d
+ (id)mt_dateFormatterNoDayWithYear;	// IMP=0x001000000002a415
+ (id)mt_dateFormatterJustYear;	// IMP=0x001000000002a2fd
+ (id)mt_dateFormatterWithYear;	// IMP=0x001000000002a1e5
+ (id)mt_dateFormatterRelativeDay;	// IMP=0x001000000002a0fa
+ (id)dayOfWeekFromDate:(id)arg1 abbreviated:(_Bool)arg2;	// IMP=0x0010000000029836
+ (id)mailLikeDescriptionFromDate:(id)arg1;	// IMP=0x001000000003a7f7
+ (id)shortStandardTimeStringFromDate:(id)arg1;	// IMP=0x001000000003a712
+ (id)amPMStringFromDate:(id)arg1;	// IMP=0x001000000003a5df
+ (id)postTimeStringFromDate:(id)arg1;	// IMP=0x001000000003a53c
+ (id)dayOfWeekFromDate:(id)arg1;	// IMP=0x001000000003a44e
+ (id)monthYearFromDate:(id)arg1;	// IMP=0x001000000003a3c9
+ (id)dateFormatterWithTemplate:(id)arg1;	// IMP=0x001000000003a175
+ (id)longDayStringFromDate:(id)arg1;	// IMP=0x001000000003a087
+ (id)shortTimeStringFromDate:(id)arg1;	// IMP=0x001000000003a067
+ (id)longDateStringFromDate:(id)arg1;	// IMP=0x001000000003a047
+ (id)mediumDateStringFromDate:(id)arg1;	// IMP=0x001000000003a027
+ (id)shortDateStringFromDate:(id)arg1;	// IMP=0x001000000003a007
+ (id)shortDateStringFromDateNoRel:(id)arg1;	// IMP=0x0010000000039fea
+ (id)dateStringFromDate:(id)arg1 withDateStyle:(unsigned long long)arg2 timeStyle:(unsigned long long)arg3 isRelative:(_Bool)arg4;	// IMP=0x0010000000039dec
+ (id)dateFormatter;	// IMP=0x0010000000039d05
+ (id)dateFromRFC1123:(id)arg1;	// IMP=0x001000000003afe1
- (id)mt_dateWithDeltaDays:(long long)arg1;	// IMP=0x001000000002ab77
- (_Bool)isLessThanWeekOld;	// IMP=0x001000000002ab60
- (_Bool)isLessThanDaysOld:(long long)arg1;	// IMP=0x001000000002aa5f
- (_Bool)isSameDayOfWeekAs:(id)arg1;	// IMP=0x001000000002a05b
- (_Bool)inSameYearAs:(id)arg1;	// IMP=0x0010000000029f7a
- (_Bool)isThisYear;	// IMP=0x0010000000029f22
- (id)timeString;	// IMP=0x0010000000029e80
- (id)lessVerboseDisplayStringWithoutTimeAndCurrentYear;	// IMP=0x0010000000029dae
- (id)verboseDisplayStringWithoutTimeAndCurrentYear;	// IMP=0x0010000000029cdc
- (id)verboseDisplayStringWithoutTime;	// IMP=0x0010000000029c76
- (id)lessVerboseDisplayString;	// IMP=0x0010000000029b90
- (id)verboseDisplayString;	// IMP=0x0010000000029aaa
- (id)nanoFriendlyDisplayString;	// IMP=0x0010000000029678
- (id)microFriendlyDisplayString:(_Bool)arg1;	// IMP=0x00100000000294b5
- (id)microUnabbreviatedFriendlyDisplayString;	// IMP=0x00100000000294a1
- (id)microFriendlyDisplayString;	// IMP=0x001000000002948a
- (id)microDateString;	// IMP=0x0010000000029424
- (id)abbreviatedFriendlyDisplayString;	// IMP=0x0010000000029269
- (id)yearString;	// IMP=0x0010000000029203
- (id)friendlyDisplayString;	// IMP=0x0010000000029048
- (_Bool)nextWeek;	// IMP=0x001000000003af81
- (_Bool)thisWeek;	// IMP=0x001000000003af29
- (_Bool)lastWeek;	// IMP=0x001000000003aec9
- (_Bool)inSameWeekAs:(id)arg1;	// IMP=0x001000000003adba
- (id)dateForBeginningOfYear;	// IMP=0x001000000003acb0
- (id)dateForBeginningOfMonth;	// IMP=0x001000000003abb8
- (id)dateForEndOfDay;	// IMP=0x001000000003aaac
- (id)dateForBeginningOfDay;	// IMP=0x001000000003a9a9
- (id)dateForBeginningOfHour;	// IMP=0x001000000003a8b5
- (id)dateAtWeekStart;	// IMP=0x0010000000039c81
- (_Bool)isNextWeek;	// IMP=0x0010000000039c03
- (_Bool)wasLessThanAWeekAgo;	// IMP=0x0010000000039b68
- (_Bool)wasLastWeek;	// IMP=0x0010000000039ae8
- (_Bool)isThisWeek;	// IMP=0x0010000000039a90
- (_Bool)wasYesterday;	// IMP=0x0010000000039a10
- (_Bool)isFuture;	// IMP=0x00100000000399b2
- (_Bool)isToday;	// IMP=0x001000000003995a
- (id)dateWithDeltaWeeks:(long long)arg1;	// IMP=0x00100000000398ba
- (id)dateWithDeltaDays:(long long)arg1;	// IMP=0x001000000003981a
- (_Bool)isEqualToYear:(id)arg1;	// IMP=0x001000000003970e
- (_Bool)isEqualToWeek:(id)arg1;	// IMP=0x0010000000039602
- (_Bool)isEqualToDay:(id)arg1;	// IMP=0x00100000000394e9
- (id)rfc1123String;	// IMP=0x001000000003b2e6
- (id)im_jsonSerializableValue;	// IMP=0x001000000004db4e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

