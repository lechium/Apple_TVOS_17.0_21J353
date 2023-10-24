//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPortraitAntialias : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputMaxBlurInPixels;	// 80 = 0x50
    NSNumber *inputAntiAliasRadius;	// 88 = 0x58
    NSNumber *inputLumaNoiseAmpl;	// 96 = 0x60
    NSNumber *inputLumaNoiseModelCoeff;	// 104 = 0x68
    NSNumber *inputScale;	// 112 = 0x70
    CIVector *inputRect;	// 120 = 0x78
    CIVector *inputSensorSize;	// 128 = 0x80
}

@property(copy, nonatomic) CIVector *inputSensorSize; // @synthesize inputSensorSize;
@property(copy, nonatomic) CIVector *inputRect; // @synthesize inputRect;
@property(copy, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(copy, nonatomic) NSNumber *inputLumaNoiseModelCoeff; // @synthesize inputLumaNoiseModelCoeff;
@property(copy, nonatomic) NSNumber *inputLumaNoiseAmpl; // @synthesize inputLumaNoiseAmpl;
@property(copy, nonatomic) NSNumber *inputAntiAliasRadius; // @synthesize inputAntiAliasRadius;
@property(copy, nonatomic) NSNumber *inputMaxBlurInPixels; // @synthesize inputMaxBlurInPixels;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000156f92
- (id)outputImage:(id)arg1 horizontal:(_Bool)arg2;	// IMP=0x000000000015660f
- (id)noiseColorKernel;	// IMP=0x00000000001565ef
- (id)_noiseGeneratorKernel;	// IMP=0x0000000000156582
- (id)_kernel:(_Bool)arg1 withAddedNoise:(_Bool)arg2;	// IMP=0x000000000015647e

@end

