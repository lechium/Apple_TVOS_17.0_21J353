//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UICGColorCacheKey : NSObject
{
    struct __CFArray *_colors;	// 8 = 0x8
}

- (void)dealloc;	// IMP=0x0000000000b8f8eb
- (_Bool)isEqualToCacheKey:(id)arg1;	// IMP=0x0000000000b8f7fb
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000b8f794
- (unsigned long long)hash;	// IMP=0x0000000000b8f72a
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000b8f71f
- (id)initWithColors:(struct CGColor *)arg1;	// IMP=0x0000000000b8f5fc

@end

