//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIHoleDistortion : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputCenter;	// 80 = 0x50
    NSNumber *inputRadius;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x00600000000e1134
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000000e1ed9
- (struct CGRect)computeDOD;	// IMP=0x00000000000e13e8
- (id)_colorKernel;	// IMP=0x00000000000e13c8
- (id)_geomKernel;	// IMP=0x00000000000e13a8
- (_Bool)_isIdentity;	// IMP=0x00000000000e137b

@end

