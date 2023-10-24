//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LPImage, LPImagePresentationProperties, LPImageViewStyle, UIImageView, UIView;

__attribute__((visibility("hidden")))
@interface LPImageView
{
    LPImage *_image;	// 8 = 0x8
    LPImage *_filteredImage;	// 16 = 0x10
    LPImagePresentationProperties *_properties;	// 24 = 0x18
    LPImageViewStyle *_style;	// 32 = 0x20
    LPImageViewStyle *_originalStyle;	// 40 = 0x28
    long long _currentScalingMode;	// 48 = 0x30
    long long _platterReason;	// 56 = 0x38
    UIImageView *_imageView;	// 64 = 0x40
    UIView *_overlayView;	// 72 = 0x48
    UIView *_backgroundView;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000045ae5
- (void)_setImageViewScalingMode:(long long)arg1;	// IMP=0x0000000000045a0b
- (id)_createImageViewWithImage:(id)arg1;	// IMP=0x0000000000045451
- (void)_updateScalingMode;	// IMP=0x00000000000453e4
- (id)_createOverlayViewWithOpacity:(double)arg1;	// IMP=0x0000000000045292
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000044e8c
- (struct CGSize)imageSizeThatFits:(struct CGSize)arg1;	// IMP=0x0000000000044c8e
- (long long)scalingModeForSize:(struct CGSize)arg1;	// IMP=0x0000000000044860
- (void)installDarkeningViewIfNeeded;	// IMP=0x0000000000044766
- (_Bool)shouldApplyBackground;	// IMP=0x00000000000446eb
- (void)layoutComponentView;	// IMP=0x00000000000442a1
- (void)updateBorder;	// IMP=0x0000000000043ecd
- (void)updateShadowPath;	// IMP=0x0000000000043822
- (void)updateCornerRadius;	// IMP=0x000000000004331c
- (void)_userInterfaceStyleDidChange:(id)arg1;	// IMP=0x0000000000043198
- (void)ensureImageView;	// IMP=0x0000000000042352
- (long long)_filter;	// IMP=0x00000000000422bd
- (id)initWithHost:(id)arg1 image:(id)arg2 properties:(id)arg3 style:(id)arg4;	// IMP=0x0000000000041fd9
- (id)initWithHost:(id)arg1;	// IMP=0x0000000000041fcb

@end

