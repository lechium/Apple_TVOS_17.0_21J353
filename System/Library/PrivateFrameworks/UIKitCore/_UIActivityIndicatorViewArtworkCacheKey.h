//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIActivityIndicatorViewArtworkCacheKey : NSObject
{
    long long _style;	// 8 = 0x8
    double _width;	// 16 = 0x10
    long long _spokeCount;	// 24 = 0x18
    long long _spokeFrameRatio;	// 32 = 0x20
    struct CGSize _shadowOffset;	// 40 = 0x28
    struct CGColor *_color;	// 56 = 0x38
    struct CGColor *_shadowColor;	// 64 = 0x40
}

- (void)dealloc;	// IMP=0x0000000000def9e5
- (_Bool)isEqualToCacheKey:(id)arg1;	// IMP=0x0000000000def93c
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000def8d5
- (unsigned long long)hash;	// IMP=0x0000000000def7e4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x0000000000def7d9
- (id)initWithStyle:(long long)arg1 width:(double)arg2 spokeCount:(long long)arg3 spokeFrameRatio:(long long)arg4 shadowOffset:(struct CGSize)arg5 color:(struct CGColor *)arg6 shadowColor:(struct CGColor *)arg7;	// IMP=0x0000000000def728

@end
