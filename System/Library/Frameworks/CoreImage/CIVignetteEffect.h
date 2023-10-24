//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIVignetteEffect : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputCenter;	// 80 = 0x50
    NSNumber *inputRadius;	// 88 = 0x58
    NSNumber *inputIntensity;	// 96 = 0x60
    NSNumber *inputFalloff;	// 104 = 0x68
}

+ (id)customAttributes;	// IMP=0x00600000001b1ae1
@property(retain, nonatomic) NSNumber *inputFalloff; // @synthesize inputFalloff;
@property(retain, nonatomic) NSNumber *inputIntensity; // @synthesize inputIntensity;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000001b1e9b
- (id)_negkernel;	// IMP=0x00000000001b1e7b
- (id)_poskernel;	// IMP=0x00000000001b1e5b
- (_Bool)_isIdentity;	// IMP=0x00000000001b1e26

@end

