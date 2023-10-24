//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CUINamedLayerStack, NSArray, PBSAppInfo, UIImage, _UIAssetManager;

__attribute__((visibility("hidden")))
@interface HBAssetCatalogApplicationIcon : NSObject
{
    PBSAppInfo *_application;	// 8 = 0x8
    _UIAssetManager *_assetManager;	// 16 = 0x10
    UIImage *_layeredImage;	// 24 = 0x18
    CUINamedLayerStack *_layerStack;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000000c6fd
@property(readonly, nonatomic, getter=_layerStack) CUINamedLayerStack *layerStack; // @synthesize layerStack=_layerStack;
@property(readonly, nonatomic, getter=_layeredImage) UIImage *layeredImage; // @synthesize layeredImage=_layeredImage;
@property(readonly, nonatomic, getter=_assetManager) _UIAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(readonly, nonatomic, getter=_application) PBSAppInfo *application; // @synthesize application=_application;
@property(readonly, nonatomic) NSArray *layers;
- (id)copyFlattenedImage;	// IMP=0x000000000000c533
- (id)flattenedImage;	// IMP=0x000000000000c4ed
- (id)copyRadiosityImage;	// IMP=0x000000000000c39b
- (id)radiosityImage;	// IMP=0x000000000000c355
@property(readonly, nonatomic) double scale;
@property(readonly, nonatomic) struct CGSize size;
- (id)initWithApplication:(id)arg1;	// IMP=0x000000000000c0b9

@end

