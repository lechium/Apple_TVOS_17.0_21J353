//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CIEnhancementHistogram;

__attribute__((visibility("hidden")))
@interface CIEnhancementCalculation : NSObject
{
    CDStruct_bfe67ca5 originalFaceColor;	// 8 = 0x8
    CIEnhancementHistogram *lumHist;	// 24 = 0x18
    CIEnhancementHistogram *rgbSumHist;	// 32 = 0x20
    CIEnhancementHistogram *satHist;	// 40 = 0x28
    CIEnhancementHistogram *borderHist;	// 48 = 0x30
    double exposureValue;	// 56 = 0x38
    double maxShadow;	// 64 = 0x40
    double minShadow;	// 72 = 0x48
    double exposureValueAtZeroShadow;	// 80 = 0x50
    double curvePercent;	// 88 = 0x58
    _Bool faceInputSet;	// 96 = 0x60
    double percentFaceChange;	// 104 = 0x68
}

+ (double)bestWarmthForI:(double)arg1 q:(double)arg2 percentChange:(double *)arg3;	// IMP=0x00600000001d24f7
@property(readonly) CIEnhancementHistogram *borderHist; // @synthesize borderHist;
@property(readonly) CIEnhancementHistogram *satHist; // @synthesize satHist;
@property(readonly) CIEnhancementHistogram *rgbSumHist; // @synthesize rgbSumHist;
@property(readonly) CIEnhancementHistogram *lumHist; // @synthesize lumHist;
- (void)printHistogramsDownsampledTo:(unsigned int)arg1;	// IMP=0x00000000001d3a18
- (void)printAnalysis;	// IMP=0x00000000001d3996
- (void)printHistogram:(id)arg1 downsampledTo:(unsigned int)arg2;	// IMP=0x00000000001d3905
- (void)downSampleHistogram:(id)arg1 to:(unsigned int)arg2 storeIn:(double *)arg3;	// IMP=0x00000000001d3841
- (id)rawShadow;	// IMP=0x00000000001d370e
- (id)shadow;	// IMP=0x00000000001d369e
- (int)putShadowsAnalysisInto:(double *)arg1;	// IMP=0x00000000001d3075
- (struct CGPoint)curvePointAtIndex:(unsigned long long)arg1;	// IMP=0x00000000001d2cba
- (unsigned long long)curveCount;	// IMP=0x00000000001d2ca6
- (id)vibrance;	// IMP=0x00000000001d2ba7
@property(readonly) CDStruct_bfe67ca5 originalFaceColor; // @synthesize originalFaceColor;
- (id)faceBalanceWarmth;	// IMP=0x00000000001d2b42
- (id)faceBalanceStrength;	// IMP=0x00000000001d2b2b
- (void)setShadowsMin:(double)arg1 max:(double)arg2 zeroExposure:(double)arg3;	// IMP=0x00000000001d2b0a
- (void)setExposureValue:(double)arg1;	// IMP=0x00000000001d2aff
- (void)setupFaceColor:(id)arg1 redIndex:(int)arg2 greenIndex:(int)arg3 blueIndex:(int)arg4;	// IMP=0x00000000001d2611
- (void)setFaceColorFromChromaI:(double)arg1 andChromaQ:(double)arg2;	// IMP=0x00000000001d25e3
- (void)setSaturationHistogram:(id)arg1;	// IMP=0x00000000001d24da
- (void)setBorderHistogram:(id)arg1;	// IMP=0x00000000001d24bd
- (void)setRGBSumHistogram:(id)arg1;	// IMP=0x00000000001d24a0
- (void)setLuminanceHistogram:(id)arg1;	// IMP=0x00000000001d2483
- (void)setCurvePercent:(double)arg1;	// IMP=0x00000000001d2468
- (void)dealloc;	// IMP=0x00000000001d2410
- (id)init;	// IMP=0x00000000001d23a9

@end
