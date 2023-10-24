//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CIFilter.h"

@class CIImage, CIVector;

__attribute__((visibility("hidden")))
@interface CIToneCurve : CIFilter
{
    CIImage *inputImage;	// 72 = 0x48
    CIVector *inputPoint0;	// 80 = 0x50
    CIVector *inputPoint1;	// 88 = 0x58
    CIVector *inputPoint2;	// 96 = 0x60
    CIVector *inputPoint3;	// 104 = 0x68
    CIVector *inputPoint4;	// 112 = 0x70
    CIImage *_curveImage;	// 120 = 0x78
}

+ (void)splineCurveTable:(double *)arg1 tableSize:(int)arg2 gamma:(double)arg3 from:(const struct CGPoint *)arg4;	// IMP=0x00100000001aaed7
+ (id)curveImageFromPoints:(const struct CGPoint *)arg1;	// IMP=0x00100000001aaeb9
+ (id)curveImageFromPoints:(const struct CGPoint *)arg1 linear:(_Bool)arg2;	// IMP=0x00100000001aad25
+ (id)customAttributes;	// IMP=0x00100000001aa43e
@property(copy, nonatomic) CIVector *inputPoint4; // @synthesize inputPoint4;
@property(copy, nonatomic) CIVector *inputPoint3; // @synthesize inputPoint3;
@property(copy, nonatomic) CIVector *inputPoint2; // @synthesize inputPoint2;
@property(copy, nonatomic) CIVector *inputPoint1; // @synthesize inputPoint1;
@property(copy, nonatomic) CIVector *inputPoint0; // @synthesize inputPoint0;
@property(retain, nonatomic) CIImage *inputImage; // @synthesize inputImage;
- (id)_initFromProperties:(id)arg1;	// IMP=0x00000000001abb33
- (id)_outputProperties;	// IMP=0x00000000001ab507
- (id)outputImage;	// IMP=0x00000000001aaa8e
- (_Bool)_isIdentity;	// IMP=0x00000000001aa90a
- (id)_kernel16;	// IMP=0x00000000001aa8ea
- (void)dealloc;	// IMP=0x00000000001aa1f2

@end

