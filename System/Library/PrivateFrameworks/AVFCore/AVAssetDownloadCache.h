//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVAssetCache.h"

@class AVAssetDownloadCacheInternal;

__attribute__((visibility("hidden")))
@interface AVAssetDownloadCache : AVAssetCache
{
    AVAssetDownloadCacheInternal *_internal;	// 8 = 0x8
}

- (_Bool)isDefunct;	// IMP=0x000000000010d973
- (void)dealloc;	// IMP=0x000000000010d913
- (_Bool)isPlayableOffline;	// IMP=0x000000000010d896
- (id)mediaSelectionOptionsInMediaSelectionGroup:(id)arg1;	// IMP=0x000000000010d5bc
- (id)URL;	// IMP=0x000000000010d547
- (id)_asset;	// IMP=0x000000000010d52e
- (id)initWithAsset:(id)arg1;	// IMP=0x000000000010d48b

@end
