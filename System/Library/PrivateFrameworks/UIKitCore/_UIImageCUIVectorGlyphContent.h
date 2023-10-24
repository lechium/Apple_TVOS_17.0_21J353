//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CUINamedVectorGlyph, _UIImageContent;

__attribute__((visibility("hidden")))
@interface _UIImageCUIVectorGlyphContent
{
    CUINamedVectorGlyph *_vectorGlyph;	// 40 = 0x28
    _UIImageContent *_vectorContent;	// 48 = 0x30
    double _glyphScaleFactor;	// 56 = 0x38
    double _vectorScale;	// 64 = 0x40
    struct CGSize _sizeInPixels;	// 72 = 0x48
    struct CGImage *_overrideImageRef;	// 88 = 0x58
    _Atomic int _isMultiColor;	// 96 = 0x60
    _Atomic long long _numberOfHierarchyLayers;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x00000000006a803d
@property(nonatomic) double glyphScaleFactor; // @synthesize glyphScaleFactor=_glyphScaleFactor;
- (void)dealloc;	// IMP=0x00000000006a7fe5
- (void)_drawVectorGlyphWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 paletteColors:(id)arg4;	// IMP=0x00000000006a7ed5
- (struct CGImage *)_provideVectorGlyphCGImageWithSize:(struct CGSize)arg1 scale:(double)arg2 paletteColors:(id)arg3;	// IMP=0x00000000006a7d33
- (void)_drawVectorGlyphWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 hierarchicalColorResolver:(CDUnknownBlockType)arg4;	// IMP=0x00000000006a7b68
- (struct CGImage *)_provideVectorGlyphCGImageWithSize:(struct CGSize)arg1 scale:(double)arg2 hierarchicalColorResolver:(CDUnknownBlockType)arg3;	// IMP=0x00000000006a796b
- (void)_drawVectorGlyphWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 namedColorResolver:(CDUnknownBlockType)arg4;	// IMP=0x00000000006a778d
- (struct CGImage *)_provideVectorGlyphCGImageWithSize:(struct CGSize)arg1 scale:(double)arg2 namedColorResolver:(CDUnknownBlockType)arg3;	// IMP=0x00000000006a757d
- (struct CGImage *)_provideCGImageWithSize:(struct CGSize)arg1 scale:(double)arg2;	// IMP=0x00000000006a7497
- (void)_drawWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 effect:(id)arg4;	// IMP=0x00000000006a7468
- (void)_prepareForDrawingWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x00000000006a73f4
- (struct CGSize)sizeInPixels;	// IMP=0x00000000006a73dc
- (id)_automaticSymbolConfiguration;	// IMP=0x00000000006a7213
- (double)variableValue;	// IMP=0x00000000006a71f6
- (unsigned long long)numberOfHierarchyLayers;	// IMP=0x00000000006a71bb
- (_Bool)containsNamedColorStyle:(id)arg1;	// IMP=0x00000000006a717f
- (_Bool)containsNamedColorStyles;	// IMP=0x00000000006a713d
- (id)contentWithVariableValue:(double)arg1;	// IMP=0x00000000006a7039
- (id)contentWithCGImage:(struct CGImage *)arg1;	// IMP=0x00000000006a6fbb
- (id)vectorGlyph;	// IMP=0x00000000006a6fa6
- (_Bool)isVectorGlyph;	// IMP=0x00000000006a6f91
- (struct CGImage *)CGImage;	// IMP=0x00000000006a6f62
- (_Bool)_canProvideCGImageDirectly;	// IMP=0x00000000006a6f5a
- (_Bool)canEmitVectorDrawingCommands;	// IMP=0x00000000006a6f52
- (_Bool)canScaleImageToTargetResolution;	// IMP=0x00000000006a6f4a
- (_Bool)isCGImage;	// IMP=0x00000000006a6f42
- (id)description;	// IMP=0x00000000006a6eb2
- (unsigned long long)hash;	// IMP=0x00000000006a6e95
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006a6ddd
- (id)outlinePath;	// IMP=0x00000000006a6d90
- (double)vectorScale;	// IMP=0x00000000006a6d82
- (id)typeName;	// IMP=0x00000000006a6d63
- (id)initWithScale:(double)arg1;	// IMP=0x00000000006a6cdc
- (id)initWithCUIVectorGlyph:(id)arg1 scale:(double)arg2;	// IMP=0x00000000006a6b2c

@end

