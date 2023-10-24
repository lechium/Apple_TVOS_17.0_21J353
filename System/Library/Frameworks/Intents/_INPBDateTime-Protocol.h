//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Intents/NSObject-Protocol.h>

@class NSString, _INPBLocalDate, _INPBLocalTime;

@protocol _INPBDateTime <NSObject>
@property(readonly, nonatomic) _Bool hasTimeZoneID;
@property(copy, nonatomic) NSString *timeZoneID;
@property(readonly, nonatomic) _Bool hasTime;
@property(retain, nonatomic) _INPBLocalTime *time;
@property(readonly, nonatomic) _Bool hasDate;
@property(retain, nonatomic) _INPBLocalDate *date;
@property(nonatomic) _Bool hasCalendarSystem;
@property(nonatomic) int calendarSystem;
- (int)StringAsCalendarSystem:(NSString *)arg1;
- (NSString *)calendarSystemAsString:(int)arg1;
@end

