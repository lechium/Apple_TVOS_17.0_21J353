//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (PGNSStringExtensions)
- (unsigned long long)pg_levenshteinDistanceToString:(id)arg1;	// IMP=0x0070000000386bec
- (id)pg_stringByTrailingCharactersInSet:(id)arg1 options:(unsigned long long)arg2;	// IMP=0x0070000000386a5b
- (id)pg_stringByRemovingDates;	// IMP=0x00700000003867c7
- (id)_pg_stringByRemovingRegExPattern:(id)arg1;	// IMP=0x0070000000386436
- (id)pg_stringByRemovingParentheses;	// IMP=0x00700000003863d0
- (id)pg_stringByRemovingParenthesesAndBrackets;	// IMP=0x00700000003863b7
@end
