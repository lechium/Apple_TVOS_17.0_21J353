//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

__attribute__((visibility("hidden")))
@interface VKInternedString : NSString
{
    NSString *original;	// 8 = 0x8
}

+ (id)stringWithString:(id)arg1;	// IMP=0x00600000004db62b
+ (void)initialize;	// IMP=0x00600000004db595
- (void).cxx_destruct;	// IMP=0x00000000004db8ef
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000004db8e4
- (unsigned long long)hash;	// IMP=0x00000000004db8c7
- (_Bool)isEqualToString:(id)arg1;	// IMP=0x00000000004db8aa
- (long long)compare:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3 locale:(id)arg4;	// IMP=0x00000000004db88d
- (id)substringWithRange:(struct _NSRange)arg1;	// IMP=0x00000000004db870
- (id)substringToIndex:(unsigned long long)arg1;	// IMP=0x00000000004db853
- (id)substringFromIndex:(unsigned long long)arg1;	// IMP=0x00000000004db836
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;	// IMP=0x00000000004db819
- (unsigned short)characterAtIndex:(unsigned long long)arg1;	// IMP=0x00000000004db7fc
- (unsigned long long)length;	// IMP=0x00000000004db7df
- (void)dealloc;	// IMP=0x00000000004db73a
- (id)initWithString:(id)arg1;	// IMP=0x00000000004db606

@end

