//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class UIImageSymbolConfiguration, UILayoutGuide, _UIImageViewAnimationProperties, _UIImageViewImageLoadingProperties, _UIImageViewImageProperties, _UIImageViewUncommonProperties;

__attribute__((visibility("hidden")))
@interface _UIImageViewExtendedStorage
{
    _UIImageViewImageProperties *_highlightedImageProperties;	// 24 = 0x18
    _UIImageViewAnimationProperties *_animationProperties;	// 32 = 0x20
    _UIImageViewImageLoadingProperties *_imageLoadingProperties;	// 40 = 0x28
    _UIImageViewUncommonProperties *_uncommonProperties;	// 48 = 0x30
    _Bool highlighted;	// 56 = 0x38
    _Bool masksTemplateImages;	// 57 = 0x39
    _Bool adjustsImageSizeForAccessibilityContentSizeCategory;	// 58 = 0x3a
    UIImageSymbolConfiguration *preferredSymbolConfiguration;	// 64 = 0x40
    UILayoutGuide *imageContentGuide;	// 72 = 0x48
}

+ (id)storageFromSimpleStorage:(id)arg1;	// IMP=0x0060000000d63c1f
- (void).cxx_destruct;	// IMP=0x0000000000d64914
- (void)setAdjustsImageSizeForAccessibilityContentSizeCategory:(_Bool)arg1;	// IMP=0x0000000000d64904
- (_Bool)adjustsImageSizeForAccessibilityContentSizeCategory;	// IMP=0x0000000000d648f4
- (void)setMasksTemplateImages:(_Bool)arg1;	// IMP=0x0000000000d648e4
- (_Bool)masksTemplateImages;	// IMP=0x0000000000d648d4
- (void)setHighlighted:(_Bool)arg1;	// IMP=0x0000000000d648c4
- (_Bool)isHighlighted;	// IMP=0x0000000000d648b4
- (void)setImageContentGuide:(id)arg1;	// IMP=0x0000000000d648a0
- (id)imageContentGuide;	// IMP=0x0000000000d6488f
- (void)setPreferredSymbolConfiguration:(id)arg1;	// IMP=0x0000000000d6487b
- (id)preferredSymbolConfiguration;	// IMP=0x0000000000d6486a
- (void)setStoppingLoad:(_Bool)arg1;	// IMP=0x0000000000d647fd
- (_Bool)isStoppingLoad;	// IMP=0x0000000000d647e0
- (void)setEnqueueingLoad:(_Bool)arg1;	// IMP=0x0000000000d64773
- (_Bool)isEnqueueingLoad;	// IMP=0x0000000000d64756
- (void)setStartingLoad:(_Bool)arg1;	// IMP=0x0000000000d646e9
- (_Bool)isStartingLoad;	// IMP=0x0000000000d646cc
- (void)setPlaceholderView:(id)arg1;	// IMP=0x0000000000d6463f
- (id)placeholderView;	// IMP=0x0000000000d64622
- (void)setImageBeingSetByLoader:(id)arg1;	// IMP=0x0000000000d64595
- (id)imageBeingSetByLoader;	// IMP=0x0000000000d64578
- (void)setLoadingDelegate:(id)arg1;	// IMP=0x0000000000d644eb
- (id)loadingDelegate;	// IMP=0x0000000000d644ce
- (void)setImageLoader:(id)arg1;	// IMP=0x0000000000d64441
- (id)imageLoader;	// IMP=0x0000000000d64424
- (void)setDrawMode:(unsigned int)arg1;	// IMP=0x0000000000d643b8
- (unsigned int)drawMode;	// IMP=0x0000000000d6439b
- (void)setCIRenderer:(id)arg1;	// IMP=0x0000000000d6430e
- (id)CIRenderer;	// IMP=0x0000000000d642f1
- (void)setTemplateImageRenderingEffects:(unsigned long long)arg1;	// IMP=0x0000000000d64282
- (unsigned long long)templateImageRenderingEffects;	// IMP=0x0000000000d64265
- (void)setDefaultRenderingMode:(long long)arg1;	// IMP=0x0000000000d641f6
- (long long)defaultRenderingMode;	// IMP=0x0000000000d641d9
- (void)setOverridingSymbolConfiguration:(id)arg1;	// IMP=0x0000000000d6414c
- (id)overridingSymbolConfiguration;	// IMP=0x0000000000d6412f
- (void)setAnimationRepeatCount:(long long)arg1;	// IMP=0x0000000000d640c0
- (long long)animationRepeatCount;	// IMP=0x0000000000d640a3
- (void)setAnimationDuration:(double)arg1;	// IMP=0x0000000000d6402f
- (double)animationDuration;	// IMP=0x0000000000d64012
- (void)setHighlightedAnimationImages:(id)arg1;	// IMP=0x0000000000d63f85
- (id)highlightedAnimationImages;	// IMP=0x0000000000d63f68
- (void)setAnimationImages:(id)arg1;	// IMP=0x0000000000d63edb
- (id)animationImages;	// IMP=0x0000000000d63ebe
- (void)setResolvedHighlightedImage:(id)arg1;	// IMP=0x0000000000d63e31
- (id)resolvedHighlightedImage;	// IMP=0x0000000000d63e14
- (void)setHighlightedImage:(id)arg1;	// IMP=0x0000000000d63d87
- (id)highlightedImage;	// IMP=0x0000000000d63d6a
- (id)uncommonProperties;	// IMP=0x0000000000d63d29
- (id)imageLoadingProperties;	// IMP=0x0000000000d63ce8
- (id)animationProperties;	// IMP=0x0000000000d63ca7
- (id)highlightedImageProperties;	// IMP=0x0000000000d63c66

@end
