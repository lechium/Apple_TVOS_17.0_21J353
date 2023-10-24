//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class NSNumber;

__attribute__((visibility("hidden")))
@interface CheapRandomness : CIFilter
{
    NSNumber *inputDither;	// 72 = 0x48
    NSNumber *inputScale;	// 80 = 0x50
}

@property(retain, nonatomic) NSNumber *inputScale; // @synthesize inputScale;
@property(retain, nonatomic) NSNumber *inputDither; // @synthesize inputDither;
- (id)outputImage;	// IMP=0x00000000000769b3

@end

