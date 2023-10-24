//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPageCurlWithShadowTransition : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputTargetImage;	// 80 = 0x50
    CIImage *inputBacksideImage;	// 88 = 0x58
    CIVector *inputExtent;	// 96 = 0x60
    NSNumber *inputTime;	// 104 = 0x68
    NSNumber *inputAngle;	// 112 = 0x70
    NSNumber *inputRadius;	// 120 = 0x78
    NSNumber *inputShadowSize;	// 128 = 0x80
    NSNumber *inputShadowAmount;	// 136 = 0x88
    CIVector *inputShadowExtent;	// 144 = 0x90
}

+ (id)customAttributes;	// IMP=0x00600000001344c1
@property(retain, nonatomic) CIImage *inputBacksideImage; // @synthesize inputBacksideImage;
@property(retain, nonatomic) CIImage *inputTargetImage; // @synthesize inputTargetImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000001329ea
- (id)_CIPageCurlNoShadowTransition;	// IMP=0x00000000001329ca
- (id)_CIPageCurlWithShadowTransition;	// IMP=0x00000000001329aa

@end
