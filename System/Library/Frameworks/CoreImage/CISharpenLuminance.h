//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CISharpenLuminance : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputSharpness;	// 80 = 0x50
    NSNumber *inputRadius;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x006000000019560d
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) NSNumber *inputSharpness; // @synthesize inputSharpness;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000001958f1
- (id)_kernel;	// IMP=0x00000000001958d1
- (_Bool)_isIdentity;	// IMP=0x0000000000195865

@end

