//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIGlassDistortion : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputTexture;	// 80 = 0x50
    CIVector *inputCenter;	// 88 = 0x58
    NSNumber *inputScale;	// 96 = 0x60
}

+ (id)customAttributes;	// IMP=0x00600000000da618
@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property(retain, nonatomic) CIImage *inputTexture; // @synthesize inputTexture;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000000da8d1
- (id)_kernel;	// IMP=0x00000000000da8b1

@end
