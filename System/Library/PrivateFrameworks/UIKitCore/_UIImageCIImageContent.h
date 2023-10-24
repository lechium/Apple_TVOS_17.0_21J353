//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CIImage;

__attribute__((visibility("hidden")))
@interface _UIImageCIImageContent
{
    CIImage *_ciImage;	// 40 = 0x28
    _Bool _allowHDR;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x00000000006a50cc
- (void)_drawWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3 effect:(id)arg4;	// IMP=0x00000000006a4e2c
- (void)_prepareForDrawingWithSize:(struct CGSize)arg1 scale:(double)arg2 inContext:(struct CGContext *)arg3;	// IMP=0x00000000006a4dfa
- (id)description;	// IMP=0x00000000006a4dca
- (unsigned long long)hash;	// IMP=0x00000000006a4dad
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000006a4d41
- (struct CGSize)sizeInPixels;	// IMP=0x00000000006a4cfc
- (_Bool)canRenderCIImage;	// IMP=0x00000000006a4c9f
- (_Bool)canScaleImageToTargetResolution;	// IMP=0x00000000006a4c97
- (_Bool)isCIImage;	// IMP=0x00000000006a4c8f
- (id)CIImage;	// IMP=0x00000000006a4c7a
- (id)typeName;	// IMP=0x00000000006a4c6d
- (id)imageRendererFormat;	// IMP=0x00000000006a4beb
- (id)makeSDRVersion;	// IMP=0x00000000006a4b68
- (_Bool)isHDR;	// IMP=0x00000000006a4b58
- (id)initWithScale:(double)arg1;	// IMP=0x00000000006a4ad1
- (id)initWithCIImage:(id)arg1 scale:(double)arg2;	// IMP=0x00000000006a49e8

@end

