//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSString.h"

@class NSAttributedString, NSDictionary;

__attribute__((visibility("hidden")))
@interface __NSCFLocalizedAttributedString : NSString
{
    NSAttributedString *_original;	// 8 = 0x8
    NSString *_apparentString;	// 16 = 0x10
    NSDictionary *_formatConfiguration;	// 24 = 0x18
}

+ (id)stringEncapsulatingBaseAttributedString:(id)arg1;	// IMP=0x00100000006009bb
+ (struct __CFString *)createStringRequiringInflectionWithFormat:(struct __CFString *)arg1 formatOptions:(struct __CFDictionary *)arg2 arguments:(struct __va_list_tag [1])arg3;	// IMP=0x0010000000600233
+ (struct __CFString *)copyStringWithMarkdown:(struct __CFString *)arg1 formatConfiguration:(struct __CFDictionary *)arg2 bundle:(struct __CFBundle *)arg3 tableURL:(struct __CFURL *)arg4;	// IMP=0x00100000006001f3
- (const char *)_fastCStringContents:(_Bool)arg1;	// IMP=0x0000000000600bd7
- (const unsigned short *)_fastCharacterContents;	// IMP=0x0000000000600bc2
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x0000000000600ba5
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;	// IMP=0x0000000000600b88
- (id)substringWithRange:(struct _NSRange)arg1;	// IMP=0x0000000000600b6b
- (id)substringToIndex:(unsigned long long)arg1;	// IMP=0x0000000000600b4e
- (id)substringFromIndex:(unsigned long long)arg1;	// IMP=0x0000000000600b31
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x0000000000600b14
- (unsigned long long)fastestEncoding;	// IMP=0x0000000000600af7
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x0000000000600ada
- (unsigned long long)length;	// IMP=0x0000000000600abd
- (id)__baseAttributedString;	// IMP=0x0000000000600aac
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000600a8f
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000600a84
- (id)formatConfiguration;	// IMP=0x0000000000600a73
- (void)dealloc;	// IMP=0x00000000006009ea
- (id)_initWithAttributedString:(id)arg1;	// IMP=0x00000000006008e5
- (id)initWithAttributedStringMarkdown:(id)arg1 formatConfiguration:(id)arg2 bundle:(struct __CFBundle *)arg3 tableURL:(id)arg4;	// IMP=0x0000000000600376
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0000000000600324
- (Class)classForCoder;	// IMP=0x0000000000600313
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000006002df

@end

