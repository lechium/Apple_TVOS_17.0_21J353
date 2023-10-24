//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIRoundedRectangleGenerator : CIFilter
{
    CIVector *inputExtent;	// 72 = 0x48
    NSNumber *inputRadius;	// 80 = 0x50
    CIColor *inputColor;	// 88 = 0x58
}

+ (id)customAttributes;	// IMP=0x006000000016b4ca
@property(retain, nonatomic) CIColor *inputColor; // @synthesize inputColor;
@property(retain, nonatomic) NSNumber *inputRadius; // @synthesize inputRadius;
@property(retain, nonatomic) CIVector *inputExtent; // @synthesize inputExtent;
- (id)outputImage;	// IMP=0x000000000016b783

@end

