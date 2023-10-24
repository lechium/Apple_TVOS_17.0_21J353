//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CILenticularHaloGenerator : CIFilter
{
    CIVector *inputCenter;	// 72 = 0x48
    CIColor *inputColor;	// 80 = 0x50
    NSNumber *inputHaloRadius;	// 88 = 0x58
    NSNumber *inputHaloWidth;	// 96 = 0x60
    NSNumber *inputHaloOverlap;	// 104 = 0x68
    NSNumber *inputStriationStrength;	// 112 = 0x70
    NSNumber *inputStriationContrast;	// 120 = 0x78
    NSNumber *inputTime;	// 128 = 0x80
}

+ (id)customAttributes;	// IMP=0x006000000011b0b3
- (id)outputImage;	// IMP=0x000000000011aca1
- (id)_CILenticularHalo;	// IMP=0x000000000011ac81

@end

