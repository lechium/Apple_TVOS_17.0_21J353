//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UITextFieldClearButtonCacheKey : NSObject
{
    int _variant;	// 8 = 0x8
    struct CGColor *_color;	// 16 = 0x10
}

- (void)dealloc;	// IMP=0x00000000011c272d
- (_Bool)isEqualToCacheKey:(id)arg1;	// IMP=0x00000000011c26e3
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000011c267c
- (unsigned long long)hash;	// IMP=0x00000000011c2657
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000011c264c
- (id)initWithVariant:(int)arg1 color:(struct CGColor *)arg2;	// IMP=0x00000000011c25f2

@end

