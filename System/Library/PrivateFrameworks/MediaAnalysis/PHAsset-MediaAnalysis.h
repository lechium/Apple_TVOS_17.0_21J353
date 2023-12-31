//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHAsset.h>

@interface PHAsset (MediaAnalysis)
+ (id)vcp_fetchOptionsForLibrary:(id)arg1 forTaskID:(unsigned long long)arg2;	// IMP=0x00800000001dd24f
+ (double)vcp_ocrGatingThreshold;	// IMP=0x00800000001df5c7
+ (_Bool)enableStickerScore;	// IMP=0x00800000001dfd62
+ (id)vcp_fetchAssetsMatchingFingerprint:(id)arg1 forPhotoLibrary:(id)arg2;	// IMP=0x0080000000255e37
+ (_Bool)vcp_usePHFaceExpression;	// IMP=0x00800000002d7ba9
+ (_Bool)vcp_usePHFace;	// IMP=0x00800000002d7ba1
+ (unsigned long long)vcp_fullAnalysisTypesForAssetType:(unsigned long long)arg1;	// IMP=0x00800000002ea441
- (_Bool)vcp_needsProcessingForTask:(unsigned long long)arg1;	// IMP=0x00100000001deab9
- (_Bool)vcp_needsFullAnalysisProcessing;	// IMP=0x00100000001de9b7
- (unsigned long long)vcp_majorDimensionForResource:(id)arg1 withTargetResolution:(unsigned long long)arg2;	// IMP=0x00100000001de2f2
- (unsigned long long)vcp_targetMajorDimensionForImageWithWidth:(unsigned long long)arg1 height:(unsigned long long)arg2 andMinPreferredMinorDimension:(unsigned long long)arg3;	// IMP=0x00100000001ddfdb
- (_Bool)vcp_hasAdjustments:(id)arg1;	// IMP=0x00100000001dde08
- (_Bool)vcp_eligibleForVideoDownload:(id)arg1;	// IMP=0x00100000001dcf5b
- (id)vcp_modificationDate;	// IMP=0x00100000001dce74
- (struct CGSize)vcp_originalSize;	// IMP=0x00100000001dce04
- (id)vcp_typeDescription;	// IMP=0x00100000001dcce0
- (_Bool)vcp_isSdofPhoto;	// IMP=0x00100000001deca2
- (_Bool)vcp_isLivePhoto;	// IMP=0x00100000001dec89
- (_Bool)vcp_isPano;	// IMP=0x00100000001dec74
- (_Bool)vcp_isMontageWithTaskID:(unsigned long long)arg1;	// IMP=0x00100000001ded33
- (_Bool)vcp_isShortMovie;	// IMP=0x00100000001deced
- (_Bool)vcp_isVideoTimelapse;	// IMP=0x00100000001decd4
- (_Bool)vcp_isVideoSlowmo;	// IMP=0x00100000001decbb
- (unsigned long long)vcp_abnormalImageDimensionForSceneNet;	// IMP=0x00100000001df356
- (id)vcp_confidenceForSceneIdentifier:(unsigned int)arg1;	// IMP=0x00100000001df079
- (_Bool)vcp_needSceneProcessing;	// IMP=0x00100000001def7e
- (unsigned long long)vcp_ocrMajorDimensionForResource:(id)arg1;	// IMP=0x00100000001dfafd
- (id)vcp_passedOCRGating;	// IMP=0x00100000001df5d5
- (_Bool)vcp_isDownloadGated;	// IMP=0x00100000001df561
- (_Bool)vcp_needsOCRProcessing;	// IMP=0x00100000001df44a
- (_Bool)vcp_needsPECProcessing;	// IMP=0x00100000001dff27
- (_Bool)vcp_needsStickerGatingProcessing;	// IMP=0x00100000001dfea8
- (_Bool)vcp_needsVisualSearchProcessing;	// IMP=0x00100000001dfd6a
- (id)vcp_animatedStickerScore;	// IMP=0x00100000001dff2f
- (id)vcp_fingerprint:(id)arg1;	// IMP=0x0010000000255a3b
- (_Bool)vcp_needFaceProcessing;	// IMP=0x00100000002d8aa4
- (_Bool)vcp_quickFaceClassificationDone;	// IMP=0x00100000002d8971
- (id)vcp_PHFaces:(id)arg1;	// IMP=0x00100000002d883c
- (int)vcp_queryPHFaces:(unsigned long long *)arg1 results:(id *)arg2;	// IMP=0x00100000002d7f0c
- (struct CGRect)vcp_faceRectFrom:(id)arg1;	// IMP=0x00100000002d7c86
- (unsigned long long)vcp_flagsForPHFace:(id)arg1 withFaceRect:(struct CGRect)arg2;	// IMP=0x00100000002d7bb1
- (unsigned long long)vcp_fullAnalysisTypesForResources:(id)arg1;	// IMP=0x00100000002ea692
- (unsigned long long)vcp_fullAnalysisTypes;	// IMP=0x00100000002ea50f
@end

