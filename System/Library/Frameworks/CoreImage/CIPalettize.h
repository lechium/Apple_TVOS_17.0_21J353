//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPalettize : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputPaletteImage;	// 80 = 0x50
    NSNumber *inputPerceptual;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x0060000000044f9e
@property(retain, nonatomic) NSNumber *inputPerceptual; // @synthesize inputPerceptual;
@property(retain, nonatomic) CIImage *inputPaletteImage; // @synthesize inputPaletteImage;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000045156
- (id)_kernelApplyPalette;	// IMP=0x0000000000045136

@end

