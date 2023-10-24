//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage, NSNumber;

__attribute__((visibility("hidden")))
@interface CIKMeans
{
    CIImage *inputMeans;	// 88 = 0x58
    NSNumber *inputCount;	// 96 = 0x60
    NSNumber *inputPasses;	// 104 = 0x68
    NSNumber *inputPerceptual;	// 112 = 0x70
}

+ (id)customAttributes;	// IMP=0x0060000000186c89
@property(copy, nonatomic) NSNumber *inputPerceptual; // @synthesize inputPerceptual;
@property(retain, nonatomic) CIImage *inputMeans; // @synthesize inputMeans;
@property(copy, nonatomic) NSNumber *inputPasses; // @synthesize inputPasses;
@property(copy, nonatomic) NSNumber *inputCount; // @synthesize inputCount;
- (id)outputImage;	// IMP=0x00000000001876c6
- (id)defuse:(id)arg1 seed:(int)arg2;	// IMP=0x0000000000187449
- (id)_kernelKmeans;	// IMP=0x0000000000187429
- (id)_combine:(id)arg1;	// IMP=0x0000000000186f6d

@end

