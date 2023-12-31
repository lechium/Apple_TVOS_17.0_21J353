//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIPatternCGColor
{
    struct CGColor *_cachedUnflippedColor;	// 16 = 0x10
}

- (_Bool)isPatternColor;	// IMP=0x000000000088e407
- (id)colorSpaceName;	// IMP=0x000000000088e3fa
- (id)description;	// IMP=0x000000000088e369
- (_Bool)getRed:(double *)arg1 green:(double *)arg2 blue:(double *)arg3 alpha:(double *)arg4;	// IMP=0x000000000088e361
- (_Bool)getHue:(double *)arg1 saturation:(double *)arg2 brightness:(double *)arg3 alpha:(double *)arg4;	// IMP=0x000000000088e359
- (_Bool)getWhite:(double *)arg1 alpha:(double *)arg2;	// IMP=0x000000000088e351
- (void)dealloc;	// IMP=0x000000000088e304
- (id)initWithCGColor:(struct CGColor *)arg1;	// IMP=0x000000000088e247

@end

