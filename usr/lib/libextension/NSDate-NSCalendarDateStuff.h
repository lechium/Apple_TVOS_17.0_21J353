//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDate.h>

@interface NSDate (NSCalendarDateStuff)
+ (id)dateWithNaturalLanguageString:(id)arg1 locale:(id)arg2;	// IMP=0x0050000000608f6e
+ (id)dateWithNaturalLanguageString:(id)arg1;	// IMP=0x0050000000608f57
+ (id)dateWithNaturalLanguageString:(id)arg1 date:(id)arg2 locale:(id)arg3;	// IMP=0x0050000000608edf
+ (_Bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;	// IMP=0x00500000006266dd
- (id)descriptionWithCalendarFormat:(id)arg1 timeZone:(id)arg2 locale:(id)arg3;	// IMP=0x0010000000606c4d
- (id)dateWithCalendarFormat:(id)arg1 timeZone:(id)arg2;	// IMP=0x0010000000606be8
- (Class)classForCoder;	// IMP=0x00100000006266cc
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000006265f1
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000062652d
- (_Bool)_web_isToday;	// IMP=0x001000000062d351
- (long long)_web_compareDay:(id)arg1;	// IMP=0x001000000062d22e
- (id)_web_RFC1123DateString;	// IMP=0x001000000062d09c
- (id)replacementObjectForPortCoder:(id)arg1;	// IMP=0x00100000007a4936
@end

