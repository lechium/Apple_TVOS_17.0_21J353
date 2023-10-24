//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVDispatchOnce, AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVTrackReaderInspector
{
    struct OpaqueFigFormatReader *_formatReader;	// 32 = 0x20
    struct OpaqueFigTrackReader *_trackReader;	// 40 = 0x28
    AVDispatchOnce *_copySampleCursorServiceOnce;	// 48 = 0x30
    struct OpaqueFigSampleCursorService *_figSampleCursorService;	// 56 = 0x38
    _Bool _sampleCursorTimeAccuracyIsExact;	// 64 = 0x40
    int _trackID;	// 68 = 0x44
    unsigned int _mediaType;	// 72 = 0x48
    AVWeakReference *_weakReferenceToAsset;	// 80 = 0x50
    _Bool _prefersNominalDurations;	// 88 = 0x58
}

- (unsigned long long)hash;	// IMP=0x00000000001007a3
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000100729
- (_Bool)isExcludedFromAutoselectionInTrackGroup;	// IMP=0x0000000000100707
- (id)_trackReferences;	// IMP=0x000000000010045e
- (long long)provisionalAlternateGroupID;	// IMP=0x000000000010043d
- (long long)defaultAlternateGroupID;	// IMP=0x000000000010041c
- (long long)alternateGroupID;	// IMP=0x00000000001003fb
- (id)metadataForFormat:(id)arg1;	// IMP=0x0000000000100243
- (id)availableMetadataFormats;	// IMP=0x0000000000100078
- (id)commonMetadata;	// IMP=0x00000000000ffeb1
- (CDStruct_1b6d18a9)latentBaseDecodeTimeStampOfFirstTrackFragment;	// IMP=0x00000000000ffe02
- (id)segmentsAsPresented;	// IMP=0x00000000000ffdee
- (id)segments;	// IMP=0x00000000000ffdd1
- (id)_segmentsPreferringNominalDurations:(_Bool)arg1;	// IMP=0x00000000000ffd65
- (CDStruct_1b6d18a9)minSampleDuration;	// IMP=0x00000000000ffcfa
- (float)nominalFrameRate;	// IMP=0x00000000000ffcde
- (id)loudnessInfo;	// IMP=0x00000000000ffc5b
- (float)preferredVolume;	// IMP=0x00000000000ffbd0
- (long long)layer;	// IMP=0x00000000000ffbaf
- (struct CGAffineTransform)preferredTransform;	// IMP=0x00000000000ffb6e
- (struct CGSize)dimensions;	// IMP=0x00000000000ffb52
- (struct CGSize)naturalSize;	// IMP=0x00000000000ffae7
- (id)extendedLanguageTag;	// IMP=0x00000000000ffacb
- (id)mediaCharacteristics;	// IMP=0x00000000000ffa7f
- (id)languageCode;	// IMP=0x00000000000ffa63
- (float)peakDataRate;	// IMP=0x00000000000ffa3e
- (float)estimatedDataRate;	// IMP=0x00000000000ffa19
- (int)naturalTimeScale;	// IMP=0x00000000000ff9fd
- (_Bool)hasAudioSampleDependencies;	// IMP=0x00000000000ff97b
- (_Bool)requiresFrameReordering;	// IMP=0x00000000000ff959
- (CDStruct_e83c9415)timeRange;	// IMP=0x00000000000ff6eb
- (long long)totalSampleDataLength;	// IMP=0x00000000000ff6cf
- (int)decodabilityValidationResult;	// IMP=0x00000000000ff670
- (_Bool)isDecodable;	// IMP=0x00000000000ff658
- (int)playabilityValidationResult;	// IMP=0x00000000000ff5f9
- (_Bool)isPlayable;	// IMP=0x00000000000ff5e1
- (_Bool)isSelfContained;	// IMP=0x00000000000ff5bf
- (_Bool)isEnabled;	// IMP=0x00000000000ff59d
- (id)formatDescriptions;	// IMP=0x00000000000ff581
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg1;	// IMP=0x00000000000ff50e
- (struct OpaqueFigSampleCursorService *)_getFigSampleCursorServiceReportingTimeAccuracy:(_Bool *)arg1;	// IMP=0x00000000000ff3bb
- (struct OpaqueFigTrackReader *)_figTrackReader;	// IMP=0x00000000000ff3aa
- (id)mediaType;	// IMP=0x00000000000ff358
- (unsigned int)_figMediaType;	// IMP=0x00000000000ff348
- (int)trackID;	// IMP=0x00000000000ff338
- (id)asset;	// IMP=0x00000000000ff31b
- (void)dealloc;	// IMP=0x00000000000ff289
- (id)_initWithAsset:(id)arg1 trackID:(int)arg2 trackIndex:(long long)arg3;	// IMP=0x00000000000ff0fa

@end

