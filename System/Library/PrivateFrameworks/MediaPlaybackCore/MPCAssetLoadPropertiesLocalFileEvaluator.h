//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPCPlaybackEngine;

__attribute__((visibility("hidden")))
@interface MPCAssetLoadPropertiesLocalFileEvaluator : NSObject
{
    MPCPlaybackEngine *_playbackEngine;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000001a8ea1
@property(readonly, nonatomic) __weak MPCPlaybackEngine *playbackEngine; // @synthesize playbackEngine=_playbackEngine;
- (_Bool)_shouldUpgradeCacheOnPlay:(id)arg1 assetCachingIsAllowed:(_Bool)arg2;	// IMP=0x00000000001a8d08
- (_Bool)_shouldUpgradeDownloadOnPlay:(id)arg1 defaults:(id)arg2;	// IMP=0x00000000001a8b0e
- (long long)_recommendationForEvaluation:(id)arg1 assetCachingIsAllowed:(_Bool)arg2 userDefaults:(id)arg3;	// IMP=0x00000000001a8a7c
- (_Bool)isHLSFileAsset:(id)arg1;	// IMP=0x00000000001a898b
- (long long)_loadedAudioAssetTypeForFileAsset:(id)arg1;	// IMP=0x00000000001a8580
- (id)evaluateAssetLoadProperties:(id)arg1 allowingCachedAssets:(_Bool)arg2 defaults:(id)arg3;	// IMP=0x00000000001a72db
- (id)initWithPlaybackEngine:(id)arg1;	// IMP=0x00000000001a7277

@end

