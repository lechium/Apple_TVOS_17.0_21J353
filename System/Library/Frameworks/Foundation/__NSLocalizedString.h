//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSMutableString.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface __NSLocalizedString : NSMutableString
{
    NSMutableString *original;	// 8 = 0x8
    NSDictionary *config;	// 16 = 0x10
}

+ (_Bool)supportsSecureCoding;	// IMP=0x001000000071f8a2
- (unsigned long long)replaceOccurrencesOfString:(id)arg1 withString:(id)arg2 options:(unsigned long long)arg3 range:(struct _NSRange)arg4;	// IMP=0x00000000007201fc
- (void)appendCharacters:(const unsigned short *)arg1 length:(unsigned long long)arg2;	// IMP=0x000000000072018e
- (void)setString:(id)arg1;	// IMP=0x0000000000720149
- (void)appendFormat:(id)arg1;	// IMP=0x000000000072005f
- (void)deleteCharactersInRange:(struct _NSRange)arg1;	// IMP=0x000000000072000b
- (void)appendString:(id)arg1;	// IMP=0x000000000071ffc6
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x000000000071ff72
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;	// IMP=0x000000000071ff19
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000071fed8
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000071fe97
- (const char *)_fastCStringContents:(_Bool)arg1;	// IMP=0x000000000071fe7a
- (const unsigned short *)_fastCharacterContents;	// IMP=0x000000000071fe65
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x000000000071fe48
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;	// IMP=0x000000000071fe2b
- (id)substringWithRange:(struct _NSRange)arg1;	// IMP=0x000000000071fe0e
- (id)substringToIndex:(unsigned long long)arg1;	// IMP=0x000000000071fdf1
- (id)substringFromIndex:(unsigned long long)arg1;	// IMP=0x000000000071fdd4
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x000000000071fdb7
- (unsigned long long)fastestEncoding;	// IMP=0x000000000071fd9a
- (void)dealloc;	// IMP=0x000000000071fd1f
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x000000000071fd02
- (unsigned long long)length;	// IMP=0x000000000071fce5
- (id)baseString;	// IMP=0x000000000071fcd4
- (id)formatConfiguration;	// IMP=0x000000000071fcc3
- (id)initWithString:(id)arg1 withFormatConfiguration:(id)arg2;	// IMP=0x000000000071fc6a
- (void)encodeWithCoder:(id)arg1;	// IMP=0x000000000071fbb9
- (id)initWithCoder:(id)arg1;	// IMP=0x000000000071f8bb
- (Class)classForCoder;	// IMP=0x000000000071f8aa
- (_Bool)_allowsDirectEncoding;	// IMP=0x000000000071f89a

@end

