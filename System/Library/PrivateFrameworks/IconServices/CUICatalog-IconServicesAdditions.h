//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreUI/CUICatalog.h>

@interface CUICatalog (IconServicesAdditions)
+ (id)_IS_assetCatalogURLWithBundleURL:(id)arg1;	// IMP=0x00800000000414dc
+ (id)_IS_coreGlyphsBundleURL;	// IMP=0x00800000000413ec
- (unsigned long long)subtypeForPlatform:(unsigned long long)arg1;	// IMP=0x0010000000041f7e
- (id)idiomsForPlatform:(unsigned long long)arg1;	// IMP=0x0010000000041dd9
- (long long)nativeIdiom;	// IMP=0x0010000000041cf2
- (_Bool)_IS_possibleMultisizedImageExistsWithName:(id)arg1 platform:(unsigned long long)arg2;	// IMP=0x0010000000041c5d
- (_Bool)_IS_possibleLayerStackExistsWithName:(id)arg1 platform:(unsigned long long)arg2;	// IMP=0x0010000000041c19
- (id)_IS_layerStackWithName:(id)arg1 scale:(double)arg2 layoutDirection:(long long)arg3 softCheck:(_Bool)arg4 platform:(unsigned long long)arg5;	// IMP=0x00100000000418ab
- (id)_IS_layerStackWithName:(id)arg1 scale:(double)arg2 layoutDirection:(long long)arg3 platform:(unsigned long long)arg4;	// IMP=0x0010000000041890
- (id)_IS_multisizedImageWithName:(id)arg1 size:(struct CGSize)arg2 scale:(double)arg3 layoutDirection:(long long)arg4 platform:(unsigned long long)arg5;	// IMP=0x001000000004154a
@end

