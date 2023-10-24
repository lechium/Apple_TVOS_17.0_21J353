//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface RedEyeChannel : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputChannel;	// 80 = 0x50
    NSNumber *inputParam1;	// 88 = 0x58
    NSNumber *inputParam2;	// 96 = 0x60
    NSNumber *inputParam3;	// 104 = 0x68
    NSNumber *inputParam4;	// 112 = 0x70
}

- (id)parameterNamesForChannel:(int)arg1;	// IMP=0x00000000001e8510
- (id)filterNameForChannel:(int)arg1;	// IMP=0x00000000001e84ed
- (id)outputImage;	// IMP=0x00000000001e81aa

@end

