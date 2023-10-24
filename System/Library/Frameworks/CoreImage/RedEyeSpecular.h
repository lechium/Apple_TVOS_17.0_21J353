//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface RedEyeSpecular : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIImage *inputSource;	// 80 = 0x50
    CIImage *inputSpecularMask;	// 88 = 0x58
    NSNumber *inputSpecularThreshold;	// 96 = 0x60
    NSNumber *inputSpecIntensity;	// 104 = 0x68
    NSNumber *inputDebugFlag;	// 112 = 0x70
}

@property(retain, nonatomic) NSNumber *inputDebugFlag; // @synthesize inputDebugFlag;
@property(retain, nonatomic) NSNumber *inputSpecIntensity; // @synthesize inputSpecIntensity;
@property(retain, nonatomic) NSNumber *inputSpecularThreshold; // @synthesize inputSpecularThreshold;
@property(retain, nonatomic) CIImage *inputSpecularMask; // @synthesize inputSpecularMask;
@property(retain, nonatomic) CIImage *inputSource; // @synthesize inputSource;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x000000000007a4ab

@end
