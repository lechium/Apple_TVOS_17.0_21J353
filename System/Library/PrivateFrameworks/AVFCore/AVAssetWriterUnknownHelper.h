//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface AVAssetWriterUnknownHelper
{
    short _alternateGroupID;	// 24 = 0x18
}

- (_Bool)_isDefunct;	// IMP=0x000000000009b6eb
- (void)cancelWriting;	// IMP=0x000000000009b6d4
- (void)startWriting;	// IMP=0x000000000009b5e8
- (void)addInputGroup:(id)arg1;	// IMP=0x000000000009b234
- (_Bool)canAddInputGroup:(id)arg1;	// IMP=0x000000000009b220
- (_Bool)_canAddInputGroup:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x000000000009aee6
- (void)addInput:(id)arg1;	// IMP=0x000000000009add6
- (_Bool)canAddInput:(id)arg1;	// IMP=0x000000000009adc2
- (_Bool)_canAddInput:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x000000000009ad0c
- (void)setSinglePassMediaDataSize:(long long)arg1;	// IMP=0x000000000009acdb
- (void)setSinglePassFileSize:(long long)arg1;	// IMP=0x000000000009acaa
- (void)setRequiresInProcessOperation:(_Bool)arg1;	// IMP=0x000000000009ac7b
- (void)setProducesCombinableFragments:(_Bool)arg1;	// IMP=0x000000000009ac4c
- (void)setInitialMovieFragmentSequenceNumber:(long long)arg1;	// IMP=0x000000000009ac1b
- (void)setOutputFileTypeProfile:(id)arg1;	// IMP=0x000000000009abea
- (void)setInitialSegmentStartTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000009abbf
- (void)setPreferredOutputSegmentInterval:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000009ab94
- (void)setPreferredRate:(float)arg1;	// IMP=0x000000000009ab5f
- (void)setPreferredVolume:(float)arg1;	// IMP=0x000000000009ab2a
- (void)setPreferredTransform:(struct CGAffineTransform)arg1;	// IMP=0x000000000009aaff
- (void)setMovieTimeScale:(int)arg1;	// IMP=0x000000000009aad0
- (void)setMetadata:(id)arg1;	// IMP=0x000000000009aa9f
- (void)setDirectoryForTemporaryFiles:(id)arg1;	// IMP=0x000000000009aa6e
- (void)setShouldOptimizeForNetworkUse:(_Bool)arg1;	// IMP=0x000000000009aa3f
- (void)setOverallDurationHint:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000009aa14
- (void)setInitialMovieFragmentInterval:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000009a9e9
- (void)setMovieFragmentInterval:(CDStruct_1b6d18a9)arg1;	// IMP=0x000000000009a9be
- (void)setDelegate:(id)arg1;	// IMP=0x000000000009a98d
- (long long)status;	// IMP=0x000000000009a985
- (void)setDefaultPropertyValuesToConfigurationState:(id)arg1 outputURL:(id)arg2 fileType:(id)arg3;	// IMP=0x000000000009a764
- (id)initWithURL:(id)arg1 fileType:(id)arg2;	// IMP=0x000000000009a6f9
- (id)initWithConfigurationState:(id)arg1;	// IMP=0x000000000009a573

@end
