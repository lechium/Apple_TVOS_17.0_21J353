//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIColor.h"

@class CIColor;

__attribute__((visibility("hidden")))
@interface UICIColor : UIColor
{
    CIColor *_ciColor;	// 8 = 0x8
    UIColor *_rgbColor;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000088f7a7
- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;	// IMP=0x000000000088f751
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;	// IMP=0x000000000088f6e3
- (unsigned long long)hash;	// IMP=0x000000000088f6c6
- (_Bool)isEqual:(id)arg1;	// IMP=0x000000000088f661
- (id)CIColor;	// IMP=0x000000000088f64c
- (struct CGColor *)CGColor;	// IMP=0x000000000088f600
- (id)colorWithAlphaComponent:(double)arg1;	// IMP=0x000000000088f573
- (void)setStroke;	// IMP=0x000000000088f536
- (void)setFill;	// IMP=0x000000000088f4f9
- (void)set;	// IMP=0x000000000088f4bc
- (id)_rgbColor;	// IMP=0x000000000088f2d8
- (id)description;	// IMP=0x000000000088f234
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000088f229
- (id)initWithCIColor:(id)arg1;	// IMP=0x000000000088f1a8

@end

