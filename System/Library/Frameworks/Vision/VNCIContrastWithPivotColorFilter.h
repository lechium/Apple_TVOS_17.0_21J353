//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber;

__attribute__((visibility("hidden")))
@interface VNCIContrastWithPivotColorFilter
{
    NSNumber *_inputContrast;	// 88 = 0x58
    NSNumber *_inputPivot;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000000145def
@property(copy, nonatomic) NSNumber *inputPivot; // @synthesize inputPivot=_inputPivot;
@property(copy, nonatomic) NSNumber *inputContrast; // @synthesize inputContrast=_inputContrast;
- (id)outputImage;	// IMP=0x0000000000145c48
- (id)initWithInputParameters:(id)arg1;	// IMP=0x0000000000145b76
- (id)init;	// IMP=0x0000000000145b2b

@end

