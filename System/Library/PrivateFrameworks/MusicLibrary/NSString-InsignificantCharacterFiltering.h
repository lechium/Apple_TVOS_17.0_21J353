//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (InsignificantCharacterFiltering)
- (id)MLSortStringWithPrefix;	// IMP=0x0090000000005250
- (id)MLSortString;	// IMP=0x00900000000051ef
- (id)copyWithoutInsignificantCharacters;	// IMP=0x00900000000051d6
- (id)copyWithoutInsignificantPrefixAndCharacters;	// IMP=0x00900000000051ba
- (id)_copyWithoutInsignificantPrefix:(_Bool)arg1 andCharacters:(_Bool)arg2;	// IMP=0x009000000000514e
- (struct _NSRange)_rangeWithoutInsignificantPrefix:(_Bool)arg1 andCharacters:(_Bool)arg2;	// IMP=0x0090000000004f1a
- (id)sanitizedString;	// IMP=0x009000000000532e
- (_Bool)ml_matchesValue:(id)arg1 usingComparison:(int)arg2;	// IMP=0x009000000007f93c
- (id)ml_stringValueForSQL;	// IMP=0x00900000001d375c
- (void)ml_bindToSQLiteStatement:(struct sqlite3_stmt *)arg1 atPosition:(int)arg2;	// IMP=0x00900000001d369b
- (id)relativePathFromBasePath:(id)arg1;	// IMP=0x0090000000204ad7
@end
