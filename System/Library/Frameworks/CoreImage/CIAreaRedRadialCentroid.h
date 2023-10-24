//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIAreaRedRadialCentroid
{
    CIImage *inputCenter;	// 88 = 0x58
    NSNumber *inputRadius;	// 96 = 0x60
    NSNumber *inputRadialMode;	// 104 = 0x68
    NSNumber *inputMinWeight;	// 112 = 0x70
}

+ (id)customAttributes;	// IMP=0x0060000000188649
@property(retain, nonatomic) NSNumber *inputMinWeight; // @synthesize inputMinWeight;
@property(retain, nonatomic) NSNumber *inputRadialMode; // @synthesize inputRadialMode;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIImage *inputCenter; // @synthesize inputCenter;
- (id)outputImage;	// IMP=0x0000000000188989
- (id)_kernelCenter;	// IMP=0x0000000000188969
- (id)_kernelDisk;	// IMP=0x0000000000188949
- (id)_kernelGaussian;	// IMP=0x0000000000188929

@end

