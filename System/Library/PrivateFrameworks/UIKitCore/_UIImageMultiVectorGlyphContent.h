//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UIImageMultiVectorGlyphContent
{
    NSArray *_glyphs;	// 40 = 0x28
    NSArray *_colors;	// 48 = 0x30
    NSArray *_offsets;	// 56 = 0x38
    NSArray *_scaleFactors;	// 64 = 0x40
    struct CGSize _sizeInPixels;	// 72 = 0x48
    struct CGPoint _anchorPoint;	// 88 = 0x58
    struct CGImage *_imageRef;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000006a9160
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006a9023
- (id)description;	// IMP=0x00000000006a8d95
- (void)_drawWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 effect:(id)arg4;	// IMP=0x00000000006a8752
- (void)_prepareForDrawingWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x00000000006a86b6
- (struct CGImage *)CGImage;	// IMP=0x00000000006a84ce
- (double)vectorScale;	// IMP=0x00000000006a84c0
- (struct CGSize)sizeInPixels;	// IMP=0x00000000006a84a8
- (_Bool)containsNamedColorStyles;	// IMP=0x00000000006a84a0
- (_Bool)isVectorGlyph;	// IMP=0x00000000006a8498
- (_Bool)canEmitVectorDrawingCommands;	// IMP=0x00000000006a8490
- (_Bool)canScaleImageToTargetResolution;	// IMP=0x00000000006a8488
- (_Bool)isCGImage;	// IMP=0x00000000006a8480
- (id)typeName;	// IMP=0x00000000006a8473
- (void)dealloc;	// IMP=0x00000000006a842d
- (id)initWithScale:(double)arg1;	// IMP=0x00000000006a83a6
- (id)initWithSize:(struct CGSize)arg1 glyphs:(id)arg2 colors:(id)arg3 offsets:(id)arg4 scaleFactors:(id)arg5 anchorPoint:(struct CGPoint)arg6;	// IMP=0x00000000006a8124

@end

