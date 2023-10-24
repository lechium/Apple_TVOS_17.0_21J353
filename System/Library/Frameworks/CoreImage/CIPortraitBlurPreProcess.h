//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPortraitBlurPreProcess : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputBlurmapImage;	// 80 = 0x50
    NSNumber *inputUseMetal;	// 88 = 0x58
}

@property(copy, nonatomic) NSNumber *inputUseMetal; // @synthesize inputUseMetal;
@property(retain) CIImage *inputBlurmapImage; // @synthesize inputBlurmapImage;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000153ab3
- (id)_kernelMetal;	// IMP=0x0000000000153a56
- (id)_kernel;	// IMP=0x0000000000153a36

@end

