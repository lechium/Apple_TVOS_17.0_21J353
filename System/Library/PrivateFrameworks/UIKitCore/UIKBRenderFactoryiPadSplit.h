//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface UIKBRenderFactoryiPadSplit
{
}

- (id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2;	// IMP=0x0000000000a4b2a0
- (void)_customizeSymbolStyle:(id)arg1 forKey:(id)arg2 contents:(id)arg3;	// IMP=0x0000000000a4b108
- (id)variantGeometriesForGeometry:(id)arg1 variantCount:(unsigned long long)arg2 rowLimit:(long long)arg3 annotationIndex:(unsigned long long)arg4;	// IMP=0x0000000000a4aea4
- (void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3;	// IMP=0x0000000000a4ad8f
- (double)_row4ControlSegmentWidthLeft;	// IMP=0x0000000000a4ad81
- (void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4;	// IMP=0x0000000000a4ac33
- (double)keyInsetBottom;	// IMP=0x0000000000a4abf2
- (double)symbolFrameInset;	// IMP=0x0000000000a4abe4
- (double)defaultPathWeight;	// IMP=0x0000000000a4abd6
- (id)backgroundTraitsForKeyplane:(id)arg1;	// IMP=0x0000000000a4aa2b
- (_Bool)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2;	// IMP=0x0000000000a4aa23
- (double)dynamicBottomRowMultiplier;	// IMP=0x0000000000a4aa15
- (struct UIEdgeInsets)dynamicInsets;	// IMP=0x0000000000a4a9fb
- (double)variantAnnotationTextFontSize;	// IMP=0x0000000000a4a9ed
- (struct CGPoint)variantAnnotationTextOffset;	// IMP=0x0000000000a4a9dc
- (double)skinnyKeyThreshold;	// IMP=0x0000000000a4a9ce
- (double)symbolImageControlKeyFontSize;	// IMP=0x0000000000a4a9c0
- (double)keyCornerRadius;	// IMP=0x0000000000a4a9b2
- (id)muttitapReverseKeyImageName;	// IMP=0x0000000000a4a979
- (id)multitapCompleteKeyImageName;	// IMP=0x0000000000a4a940
- (struct CGPoint)shiftKeyOffset;	// IMP=0x0000000000a4a90c
- (struct CGPoint)deleteKeyOffset;	// IMP=0x0000000000a4a8d8
- (struct CGPoint)dismissKeyOffset;	// IMP=0x0000000000a4a8ac
- (struct CGPoint)internationalKeyOffset;	// IMP=0x0000000000a4a880

@end
