//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIColor.h"

__attribute__((visibility("hidden")))
@interface UIDeviceRGBColor : UIColor
{
    double redComponent;	// 8 = 0x8
    double greenComponent;	// 16 = 0x10
    double blueComponent;	// 24 = 0x18
    double alphaComponent;	// 32 = 0x20
    _Atomic struct CGColor *_cachedColor;	// 40 = 0x28
}

- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;	// IMP=0x000000000088e095
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;	// IMP=0x000000000088e037
- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;	// IMP=0x000000000088df7e
- (double)alphaComponent;	// IMP=0x000000000088df6c
- (struct CGColor *)CGColor;	// IMP=0x000000000088df16
- (unsigned long long)hash;	// IMP=0x000000000088de90
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000088dc27
- (_Bool)_isDeepColor;	// IMP=0x000000000088db8a
- (id)description;	// IMP=0x000000000088daec
- (id)colorSpaceName;	// IMP=0x000000000088dabf
- (void)setStroke;	// IMP=0x000000000088da74
- (void)setFill;	// IMP=0x000000000088da29
- (void)set;	// IMP=0x000000000088d9d0
- (struct CGColor *)_createCGColorWithAlpha:(double)arg1;	// IMP=0x000000000088d938
- (id)colorWithAlphaComponent:(double)arg1;	// IMP=0x000000000088d8a1
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000088d896
- (void)dealloc;	// IMP=0x000000000088d855
- (id)initWithCGColor:(struct CGColor *)arg1;	// IMP=0x000000000088d7b5
- (id)initWithRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x000000000088d61c
- (id)initWithHue:(double)arg1 saturation:(double)arg2 brightness:(double)arg3 alpha:(double)arg4;	// IMP=0x000000000088d44e

@end

