//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIPointillize : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputRadius;	// 80 = 0x50
    CIVector *inputCenter;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x00600000001503a5
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x00000000001500d3
- (id)_CIPointillize;	// IMP=0x00000000001500b3

@end
