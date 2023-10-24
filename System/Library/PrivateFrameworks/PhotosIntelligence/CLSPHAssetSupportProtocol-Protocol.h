//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosIntelligence/CLSCurationItem-Protocol.h>

@class CLSAssetFaceInformationSummary, CLSAssetProcessedSignals, NSSet, PHAssetAestheticProperties, PHAssetCurationProperties, PHAssetMediaAnalysisProperties;

@protocol CLSPHAssetSupportProtocol <CLSCurationItem>
@property(readonly, nonatomic) CLSAssetProcessedSignals *clsProcessedSignals;
@property(readonly, nonatomic) CLSAssetFaceInformationSummary *clsFaceInformationSummary;
- (short)clsInterestingAudioClassifications;
- (_Bool)clsIsTragicFailure;
- (_Bool)clsIsGuestAsset;
- (NSSet *)clsSceneClassifications;
- (double)clsWallpaperScore;
- (unsigned long long)clsVideoFaceCount;
- (double)clsActivityScore;
- (double)clsVideoScore;
- (long long)playbackStyle;
- (PHAssetCurationProperties *)curationProperties;
- (PHAssetMediaAnalysisProperties *)mediaAnalysisProperties;
- (PHAssetAestheticProperties *)aestheticProperties;
- (unsigned long long)reframeVariation;
- (unsigned long long)pixelHeight;
- (unsigned long long)pixelWidth;
- (double)duration;
- (_Bool)isSpatialMedia;
- (_Bool)representsBurst;
- (_Bool)isSubtype:(unsigned long long)arg1;
- (_Bool)isIncludedInCloudFeeds;
- (_Bool)hasAdjustments;
- (_Bool)isHEICSequence;
- (_Bool)isPSD;
- (_Bool)isPNG;
- (_Bool)isPDF;
- (_Bool)isAnimatedGIF;
- (_Bool)isTrashed;
- (_Bool)isAudio;
- (_Bool)isPhoto;
- (_Bool)isHidden;
@end
