//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage;

__attribute__((visibility("hidden")))
@interface CISRGBToneCurveToLinear : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
}

+ (id)customAttributes;	// IMP=0x00600000001917cc
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000001918e9

@end

