//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSDictionary, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface CIPortraitBlur : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputBlurmapImage;	// 80 = 0x50
    CIImage *inputMatteImage;	// 88 = 0x58
    NSNumber *inputLumaNoiseScale;	// 96 = 0x60
    NSNumber *inputScale;	// 104 = 0x68
    NSNumber *inputAperture;	// 112 = 0x70
    NSDictionary *inputTuningParameters;	// 120 = 0x78
    NSString *inputShape;	// 128 = 0x80
    NSNumber *inputDraftMode;	// 136 = 0x88
}

+ (id)customAttributes;	// IMP=0x006000000015175e
@property(retain, nonatomic) NSNumber *inputDraftMode; // @synthesize inputDraftMode;
@property(retain, nonatomic) NSString *inputShape; // @synthesize inputShape;
@property(retain, nonatomic) NSDictionary *inputTuningParameters; // @synthesize inputTuningParameters;
@property(copy, nonatomic) NSNumber *inputAperture; // @synthesize inputAperture;
@property(copy, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(copy, nonatomic) NSNumber *inputLumaNoiseScale; // @synthesize inputLumaNoiseScale;
@property(retain) CIImage *inputMatteImage; // @synthesize inputMatteImage;
@property(retain) CIImage *inputBlurmapImage; // @synthesize inputBlurmapImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000015381a
- (id)outputImageV3;	// IMP=0x0000000000153671
- (id)outputImageV2;	// IMP=0x00000000001535ae
- (id)outputImage:(_Bool)arg1;	// IMP=0x0000000000151ca1
- (id)_ourBlendKernelMetal;	// IMP=0x0000000000151c44
- (id)_ourBlendKernel;	// IMP=0x0000000000151c24
- (id)_kernelsWithShapes;	// IMP=0x0000000000151bc7
- (id)_kernelWithShapesMetal;	// IMP=0x0000000000151b6a
- (id)_kernelMetal;	// IMP=0x0000000000151b0d
- (id)_kernel;	// IMP=0x0000000000151ab0

@end

