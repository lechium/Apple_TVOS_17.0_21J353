//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CILensModelCalculator : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputMinMaxImage;	// 80 = 0x50
    CIVector *inputOriginalSize;	// 88 = 0x58
    CIVector *inputFocusRect;	// 96 = 0x60
    NSNumber *inputSimulatedAperture;	// 104 = 0x68
    NSNumber *inputIntrinsicMatrixFocalLength;	// 112 = 0x70
    NSDictionary *inputTuningParameters;	// 120 = 0x78
}

+ (id)customAttributes;	// IMP=0x0060000000119136
@property(retain, nonatomic) NSDictionary *inputTuningParameters; // @synthesize inputTuningParameters;
@property(copy, nonatomic) NSNumber *inputIntrinsicMatrixFocalLength; // @synthesize inputIntrinsicMatrixFocalLength;
@property(copy, nonatomic) NSNumber *inputSimulatedAperture; // @synthesize inputSimulatedAperture;
@property(copy, nonatomic) CIVector *inputFocusRect; // @synthesize inputFocusRect;
@property(copy, nonatomic) CIVector *inputOriginalSize; // @synthesize inputOriginalSize;
@property(retain) CIImage *inputMinMaxImage; // @synthesize inputMinMaxImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000119481
- (id)cpuParams;	// IMP=0x00000000001192c1
- (id)kernel;	// IMP=0x00000000001192a1
- (id)mtlKernel;	// IMP=0x0000000000119234

@end

