//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <QuartzCore/CALayer.h>

@interface CALayer (GKAdditions)
- (struct CATransform3D)_gkParentSublayerTransform;	// IMP=0x0070000000009f9e
- (id)_gkRecursiveDescription;	// IMP=0x0070000000009f8a
- (id)_gkDescriptionWithChildren:(long long)arg1;	// IMP=0x0070000000009d4d
- (void)mp_moveAndResizeWithinParentLayer:(id)arg1 usingGravity:(id)arg2 geometryFlipped:(_Bool)arg3 retinaScale:(double)arg4 animate:(_Bool)arg5;	// IMP=0x00700000000f0649
- (id)mp_allAnimationsInTree;	// IMP=0x00700000000f0358
- (id)mp_allLayersWithKindOfClass:(Class)arg1;	// IMP=0x00700000000f01b6
- (id)mp_allLayersWhoseNamesContainString:(id)arg1;	// IMP=0x00700000000eff5c
- (void)mp_addLayerAndSublayersToArray:(id)arg1 allowHiddenLayers:(_Bool)arg2;	// IMP=0x00700000000efd53
- (id)mp_allLayersInTree;	// IMP=0x00700000000efcfc
- (id)mp_propertiesToCopy;	// IMP=0x00700000000efc05
- (id)mp_basicPropertiesToCopy;	// IMP=0x00700000000efa22
- (id)mp_deepCopyLayer;	// IMP=0x00700000000ef41c
@end

