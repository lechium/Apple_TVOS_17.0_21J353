//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIColor, CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CICopyMachineTransition : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputTargetImage;	// 80 = 0x50
    CIVector *inputExtent;	// 88 = 0x58
    CIColor *inputColor;	// 96 = 0x60
    NSNumber *inputTime;	// 104 = 0x68
    NSNumber *inputAngle;	// 112 = 0x70
    NSNumber *inputWidth;	// 120 = 0x78
    NSNumber *inputOpacity;	// 128 = 0x80
}

+ (id)customAttributes;	// IMP=0x006000000005ecd6
@property(retain, nonatomic) NSNumber *inputOpacity; // @synthesize inputOpacity;
@property(retain, nonatomic) NSNumber *inputWidth; // @synthesize inputWidth;
@property(retain, nonatomic) NSNumber *inputAngle; // @synthesize inputAngle;
@property(retain, nonatomic) NSNumber *inputTime; // @synthesize inputTime;
@property(retain, nonatomic) CIColor *inputColor; // @synthesize inputColor;
@property(retain, nonatomic) CIVector *inputExtent; // @synthesize inputExtent;
@property(retain, nonatomic) CIImage *inputTargetImage; // @synthesize inputTargetImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000005f1cc
- (id)_kernel;	// IMP=0x000000000005f1ac

@end

