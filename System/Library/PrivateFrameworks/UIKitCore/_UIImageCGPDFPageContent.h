//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface _UIImageCGPDFPageContent
{
    struct CGPDFPage *_pdfPageRef;	// 40 = 0x28
}

- (void)_drawWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 effect:(id)arg4;	// IMP=0x00000000006a60d3
- (void)_prepareForDrawingWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x00000000006a605b
- (id)description;	// IMP=0x00000000006a602b
- (unsigned long long)hash;	// IMP=0x00000000006a601a
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006a5fae
- (struct CGSize)sizeInPixels;	// IMP=0x00000000006a5f7b
- (struct CGPDFPage *)CGPDFPage;	// IMP=0x00000000006a5f6a
- (_Bool)isCGPDFPage;	// IMP=0x00000000006a5f62
- (_Bool)canEmitVectorDrawingCommands;	// IMP=0x00000000006a5f5a
- (_Bool)canScaleImageToTargetResolution;	// IMP=0x00000000006a5f52
- (id)typeName;	// IMP=0x00000000006a5f45
- (void)dealloc;	// IMP=0x00000000006a5f04
- (id)initWithScale:(double)arg1;	// IMP=0x00000000006a5e7d
- (id)initWithCGPDFPage:(struct CGPDFPage *)arg1 scale:(double)arg2;	// IMP=0x00000000006a5d34

@end
