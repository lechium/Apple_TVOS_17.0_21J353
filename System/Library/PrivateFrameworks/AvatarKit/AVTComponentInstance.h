//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMapTable, NSMutableDictionary, NSString, SCNNode;

__attribute__((visibility("hidden")))
@interface AVTComponentInstance : NSObject
{
    NSArray *_assets;	// 8 = 0x8
    SCNNode *_assetNode;	// 16 = 0x10
    NSString *_materialVariant;	// 24 = 0x18
    NSString *_assetImage;	// 32 = 0x20
    NSString *_assetImageVariant;	// 40 = 0x28
    float _skinnerVariantIntensity;	// 48 = 0x30
    _Bool _didInitializeVariantSkinnerPairs;	// 52 = 0x34
    NSMapTable *_variantSkinnerPairs;	// 56 = 0x38
    NSMutableDictionary *_visibilityRules;	// 64 = 0x40
    NSDictionary *_layers;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x0000000000029cc3
@property(readonly) SCNNode *assetNode; // @synthesize assetNode=_assetNode;
- (id)assetImageForAsset:(id)arg1;	// IMP=0x0000000000029c34
- (_Bool)has3DAsset;	// IMP=0x0000000000029c26
- (void)setVisibilityRules:(id)arg1 dictatedByCategory:(long long)arg2;	// IMP=0x0000000000029ad2
- (void)setSkinnerVariantIntensity:(float)arg1 skeleton:(id)arg2;	// IMP=0x0000000000029859
- (void)_initializeVariantSkinnerPairsIfNeeded;	// IMP=0x00000000000293b6
- (void)setMaterialVariant:(id)arg1;	// IMP=0x0000000000028dd2
- (void)setImageVariant:(id)arg1;	// IMP=0x0000000000028d41
@property(readonly) NSString *assetImage; // @synthesize assetImage=_assetImage;
- (_Bool)has2DAsset;	// IMP=0x0000000000028d19
- (void)updateMaterialsWithComponent:(id)arg1;	// IMP=0x000000000002857f
- (id)initWithComponent:(id)arg1 assetResourceCache:(id)arg2;	// IMP=0x000000000002807d
@property(readonly) CDStruct_10883d13 uvRemappingInfo;
- (id)assetImageWithLayerNamed:(id)arg1;	// IMP=0x0000000000027ecd

@end

