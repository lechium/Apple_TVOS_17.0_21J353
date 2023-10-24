//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPImageViewStyle, NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface LPMultipleImageView
{
    NSArray *_images;	// 8 = 0x8
    LPImageViewStyle *_style;	// 16 = 0x10
    NSMutableArray *_imageViews;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000002ba8e
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x000000000002b974
- (void)layoutComponentView;	// IMP=0x000000000002b914
- (struct CGSize)layoutImagesForSize:(struct CGSize)arg1 applyingLayout:(_Bool)arg2;	// IMP=0x000000000002b614
- (struct CGSize)_availableSizeForImageNumber:(unsigned long long)arg1 withLayout:(unsigned long long)arg2 withinSize:(struct CGSize)arg3 applyingLayout:(_Bool)arg4;	// IMP=0x000000000002b55c
- (struct CGRect)_computeRectForImageAtIndex:(unsigned long long)arg1 fittingSize:(struct CGSize *)arg2 width:(double *)arg3 height:(double *)arg4 size:(struct CGSize)arg5 multipleImageLayout:(unsigned long long)arg6;	// IMP=0x000000000002b314
- (void)ensureImageViews;	// IMP=0x000000000002ab6d
- (id)initWithHost:(id)arg1 images:(id)arg2 style:(id)arg3;	// IMP=0x000000000002aa2a
- (id)initWithHost:(id)arg1;	// IMP=0x000000000002aa1c

@end

