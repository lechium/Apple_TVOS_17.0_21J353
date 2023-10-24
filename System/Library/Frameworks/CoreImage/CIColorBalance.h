//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIColor, CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIColorBalance : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIColor *inputColor;	// 80 = 0x50
    NSNumber *inputStrength;	// 88 = 0x58
    NSNumber *inputWarmth;	// 96 = 0x60
    NSNumber *inputDamping;	// 104 = 0x68
}

+ (id)customAttributes;	// IMP=0x0060000000041186
@property(retain, nonatomic) NSNumber *inputDamping; // @synthesize inputDamping;
@property(retain, nonatomic) NSNumber *inputWarmth; // @synthesize inputWarmth;
@property(retain, nonatomic) NSNumber *inputStrength; // @synthesize inputStrength;
@property(retain, nonatomic) CIColor *inputColor; // @synthesize inputColor;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000041554
- (id)_kernel;	// IMP=0x0000000000041534

@end

