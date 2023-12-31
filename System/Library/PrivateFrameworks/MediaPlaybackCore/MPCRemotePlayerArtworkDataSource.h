//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaPlayer/MPAbstractNetworkArtworkDataSource.h>

__attribute__((visibility("hidden")))
@interface MPCRemotePlayerArtworkDataSource : MPAbstractNetworkArtworkDataSource
{
}

+ (id)bestArtworkSizes;	// IMP=0x00400000001ad935
+ (id)sharedDataSource;	// IMP=0x00400000001ad8d2
- (id)cacheKeyForCatalog:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000001ad685
- (void)getExportableArtworkPropertiesForCatalog:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00000000001ad602
- (_Bool)hasExportableArtworkPropertiesForCatalog:(id)arg1;	// IMP=0x00000000001ad5f0
- (id)requestForCatalog:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000001ad58f
- (id)_urlForCatalog:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x00000000001ad440
- (id)supportedSizesForCatalog:(id)arg1;	// IMP=0x00000000001ad0e6
- (_Bool)areRepresentationsAvailableForCatalog:(id)arg1;	// IMP=0x00000000001ad075

@end

