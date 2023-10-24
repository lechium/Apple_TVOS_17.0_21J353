//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFoundation/AVPlayerItem.h>

@class NSString, NSURL;

@interface AVPlayerItem (MediaPlaybackCore)
+ (double)HLSDownloadedDurationThreshold;	// IMP=0x001000000009e133
+ (double)DownloadedDurationThreshold;	// IMP=0x001000000009e125
@property(nonatomic, readonly) NSString *description;
@property(nonatomic, readonly) double time;
@property(nonatomic) _Bool prefersSeekOverSkip;
@property(nonatomic, readonly) _Bool isFullyDownloaded;
@property(nonatomic, readonly) _Bool isAssetLoaded;
@property(nonatomic, readonly) _Bool hasLoadableAsset;
@property(nonatomic) _Bool isVideoContent;
@property(nonatomic, copy) NSString *title;
@property(nonatomic, copy) NSString *contentItemID;
@property(nonatomic, readonly) NSURL *url;
@property(nonatomic, readonly) AVPlayerItem *avPlayerItem;
- (id)initWithUrl:(id)arg1 contentItemID:(id)arg2 isVideoContent:(_Bool)arg3 prefersSeekOverSkip:(_Bool)arg4;	// IMP=0x001000000009e2e4
- (id)mpc_playerItemIdentifier;	// IMP=0x00100000002626d5
- (id)mpc_setupDescription;	// IMP=0x0010000000262302
- (void)mpc_updatePreferredForwardBufferDurationForPlayerAudioFormat:(id)arg1;	// IMP=0x0010000000262280
- (void)mpc_updatePrefersOfflinePlayableVariantForPlayerAudioFormat:(id)arg1 isDownloadedAsset:(_Bool)arg2;	// IMP=0x001000000026223e
- (void)mpc_updatePreferredMaximumAudioSampleRateForPlayerAudioFormat:(id)arg1;	// IMP=0x00100000002621ea
- (void)mpc_updateAVAudioSpatializationFormatsForPlayerAudioFormat:(id)arg1;	// IMP=0x0010000000262175
- (void)mpc_updateAVVariantPreferenceForPlayerAudioFormat:(id)arg1 forceSpatial:(_Bool)arg2;	// IMP=0x001000000026211c
- (void)mpc_updatePreferredForwardBufferDurationForAudioAssetType:(long long)arg1;	// IMP=0x00100000002620aa
- (void)mpc_updatePreferredMaximumAudioSampleRateForAudioAssetType:(long long)arg1;	// IMP=0x0010000000262077
- (void)mpc_updateAVAudioSpatializationFormatsForAudioAssetType:(long long)arg1;	// IMP=0x001000000026202e
- (void)mpc_updateAVVariantPreferenceForAudioAssetType:(long long)arg1 forceSpatial:(_Bool)arg2;	// IMP=0x0010000000261ff2
- (void)mpc_setupWithPlayerAudioFormat:(id)arg1 forceSpatial:(_Bool)arg2 downloadedAsset:(_Bool)arg3;	// IMP=0x0010000000261f5b
- (void)mpc_setupWithAudioAssetType:(long long)arg1 forceSpatial:(_Bool)arg2;	// IMP=0x0010000000261efb
@end
