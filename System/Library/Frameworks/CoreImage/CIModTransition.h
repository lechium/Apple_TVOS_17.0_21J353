//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIModTransition : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputTargetImage;	// 80 = 0x50
    CIVector *inputCenter;	// 88 = 0x58
    NSNumber *inputTime;	// 96 = 0x60
    NSNumber *inputAngle;	// 104 = 0x68
    NSNumber *inputRadius;	// 112 = 0x70
    NSNumber *inputCompression;	// 120 = 0x78
}

+ (id)customAttributes;	// IMP=0x006000000012aaa1
@property(retain, nonatomic) NSNumber *inputCompression; // @synthesize inputCompression;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) NSNumber *inputAngle; // @synthesize inputAngle;
@property(retain, nonatomic) NSNumber *inputTime; // @synthesize inputTime;
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property(retain, nonatomic) CIImage *inputTargetImage; // @synthesize inputTargetImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000012aeb4
- (id)_kernel;	// IMP=0x000000000012ae94

@end

