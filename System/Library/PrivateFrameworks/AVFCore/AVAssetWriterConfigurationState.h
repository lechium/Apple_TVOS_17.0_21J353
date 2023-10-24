//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVMediaFileType, NSArray, NSString, NSURL;
@protocol AVAssetWriterDelegate;

__attribute__((visibility("hidden")))
@interface AVAssetWriterConfigurationState : NSObject
{
    NSURL *_URL;	// 8 = 0x8
    id <AVAssetWriterDelegate> _delegate;	// 16 = 0x10
    AVMediaFileType *_mediaFileType;	// 24 = 0x18
    CDStruct_1b6d18a9 _movieFragmentInterval;	// 32 = 0x20
    CDStruct_1b6d18a9 _initialMovieFragmentInterval;	// 56 = 0x38
    CDStruct_1b6d18a9 _overallDurationHint;	// 80 = 0x50
    _Bool _shouldOptimizeForNetworkUse;	// 104 = 0x68
    NSURL *_directoryForTemporaryFiles;	// 112 = 0x70
    NSArray *_metadataItems;	// 120 = 0x78
    int _movieTimeScale;	// 128 = 0x80
    struct CGAffineTransform _preferredTransform;	// 136 = 0x88
    float _preferredVolume;	// 184 = 0xb8
    float _preferredRate;	// 188 = 0xbc
    long long _singlePassFileSize;	// 192 = 0xc0
    long long _singlePassMediaDataSize;	// 200 = 0xc8
    NSArray *_inputs;	// 208 = 0xd0
    NSArray *_inputGroups;	// 216 = 0xd8
    CDStruct_1b6d18a9 _preferredOutputSegmentInterval;	// 224 = 0xe0
    CDStruct_1b6d18a9 _initialSegmentStartTime;	// 248 = 0xf8
    NSString *_outputFileTypeProfile;	// 272 = 0x110
    long long _initialMovieFragmentSequenceNumber;	// 280 = 0x118
    _Bool _producesCombinableFragments;	// 288 = 0x120
    _Bool _requiresInProcessOperation;	// 289 = 0x121
}

- (void).cxx_destruct;	// IMP=0x00000000000981fd
@property(nonatomic) _Bool requiresInProcessOperation; // @synthesize requiresInProcessOperation=_requiresInProcessOperation;
@property(nonatomic) _Bool producesCombinableFragments; // @synthesize producesCombinableFragments=_producesCombinableFragments;
@property(nonatomic) long long initialMovieFragmentSequenceNumber; // @synthesize initialMovieFragmentSequenceNumber=_initialMovieFragmentSequenceNumber;
@property(copy, nonatomic) NSString *outputFileTypeProfile; // @synthesize outputFileTypeProfile=_outputFileTypeProfile;
@property(nonatomic) CDStruct_1b6d18a9 initialSegmentStartTime; // @synthesize initialSegmentStartTime=_initialSegmentStartTime;
@property(nonatomic) CDStruct_1b6d18a9 preferredOutputSegmentInterval; // @synthesize preferredOutputSegmentInterval=_preferredOutputSegmentInterval;
@property(copy, nonatomic) NSArray *inputGroups; // @synthesize inputGroups=_inputGroups;
@property(copy, nonatomic) NSArray *inputs; // @synthesize inputs=_inputs;
@property(nonatomic) long long singlePassMediaDataSize; // @synthesize singlePassMediaDataSize=_singlePassMediaDataSize;
@property(nonatomic) long long singlePassFileSize; // @synthesize singlePassFileSize=_singlePassFileSize;
@property(nonatomic) float preferredRate; // @synthesize preferredRate=_preferredRate;
@property(nonatomic) float preferredVolume; // @synthesize preferredVolume=_preferredVolume;
@property(nonatomic) struct CGAffineTransform preferredTransform; // @synthesize preferredTransform=_preferredTransform;
@property(nonatomic) int movieTimeScale; // @synthesize movieTimeScale=_movieTimeScale;
@property(copy, nonatomic) NSArray *metadataItems; // @synthesize metadataItems=_metadataItems;
@property(copy, nonatomic) NSURL *directoryForTemporaryFiles; // @synthesize directoryForTemporaryFiles=_directoryForTemporaryFiles;
@property(nonatomic) _Bool shouldOptimizeForNetworkUse; // @synthesize shouldOptimizeForNetworkUse=_shouldOptimizeForNetworkUse;
@property(nonatomic) CDStruct_1b6d18a9 overallDurationHint; // @synthesize overallDurationHint=_overallDurationHint;
@property(nonatomic) CDStruct_1b6d18a9 initialMovieFragmentInterval; // @synthesize initialMovieFragmentInterval=_initialMovieFragmentInterval;
@property(nonatomic) CDStruct_1b6d18a9 movieFragmentInterval; // @synthesize movieFragmentInterval=_movieFragmentInterval;
@property(copy, nonatomic) AVMediaFileType *mediaFileType; // @synthesize mediaFileType=_mediaFileType;
@property __weak id <AVAssetWriterDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (void)dealloc;	// IMP=0x0000000000097e82

@end
