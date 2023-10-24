//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, NSDictionary, NSNumber;

__attribute__((visibility("hidden")))
@interface CIHighlightRecovery : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    NSNumber *inputScale;	// 80 = 0x50
    NSNumber *inputApertureScaling;	// 88 = 0x58
    NSDictionary *inputTuningParameters;	// 96 = 0x60
    NSNumber *inputDraftMode;	// 104 = 0x68
}

@property(retain, nonatomic) NSNumber *inputDraftMode; // @synthesize inputDraftMode;
@property(retain) NSDictionary *inputTuningParameters; // @synthesize inputTuningParameters;
@property(retain) NSNumber *inputApertureScaling; // @synthesize inputApertureScaling;
@property(retain) NSNumber *inputScale; // @synthesize inputScale;
@property(retain) CIImage *inputImage; // @synthesize inputImage;
- (id)outputImage;	// IMP=0x0000000000155d04

@end

