//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetWriterConfigurationState, AVMediaFileType, AVWeakReference, NSArray, NSError, NSString, NSURL;
@protocol AVAssetWriterDelegate;

__attribute__((visibility("hidden")))
@interface AVAssetWriterHelper : NSObject
{
    AVAssetWriterConfigurationState *_configurationState;	// 8 = 0x8
    AVWeakReference *_weakReferenceToAssetWriter;	// 16 = 0x10
}

@property(retain) AVWeakReference *weakReferenceToAssetWriter; // @synthesize weakReferenceToAssetWriter=_weakReferenceToAssetWriter;
@property(readonly, nonatomic) AVAssetWriterConfigurationState *configurationState; // @synthesize configurationState=_configurationState;
@property(readonly, nonatomic, getter=_isDefunct) _Bool defunct;
- (void)flushSegment;	// IMP=0x00000000000a281e
- (void)flush;	// IMP=0x00000000000a279e
- (void)transitionToFailedStatusWithError:(id)arg1;	// IMP=0x00000000000a25b3
- (_Bool)_transitionToClientInitiatedTerminalStatus:(long long)arg1;	// IMP=0x00000000000a23a6
- (void)finishWritingWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000a2326
- (void)finishWriting;	// IMP=0x00000000000a22a6
- (void)cancelWriting;	// IMP=0x00000000000a22a0
- (void)endSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000a2220
- (void)startSessionAtSourceTime:(CDStruct_1b6d18a9)arg1;	// IMP=0x00000000000a21a0
- (void)startWriting;	// IMP=0x00000000000a2120
- (void)addInputGroup:(id)arg1;	// IMP=0x00000000000a20a0
- (_Bool)canAddInputGroup:(id)arg1;	// IMP=0x00000000000a2098
- (void)addInput:(id)arg1;	// IMP=0x00000000000a2018
- (_Bool)canAddInput:(id)arg1;	// IMP=0x00000000000a2010
- (_Bool)_canApplyTrackReferences:(id)arg1 exceptionReason:(id *)arg2;	// IMP=0x00000000000a1ed0
- (_Bool)canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2;	// IMP=0x00000000000a1e59
- (_Bool)_canApplyOutputSettings:(id)arg1 forMediaType:(id)arg2 sourceFormat:(struct opaqueCMFormatDescription *)arg3 exceptionReason:(id *)arg4;	// IMP=0x00000000000a182b
@property(readonly, nonatomic) NSArray *inputGroups;
@property(readonly, nonatomic) NSArray *inputs;
@property(nonatomic) long long singlePassMediaDataSize;
@property(nonatomic) long long singlePassFileSize;
@property(nonatomic) _Bool requiresInProcessOperation;
@property(nonatomic) _Bool producesCombinableFragments;
@property(nonatomic) long long initialMovieFragmentSequenceNumber;
@property(copy, nonatomic) NSString *outputFileTypeProfile;
@property(nonatomic) CDStruct_1b6d18a9 initialSegmentStartTime;
@property(nonatomic) CDStruct_1b6d18a9 preferredOutputSegmentInterval;
@property(nonatomic) float preferredRate;
@property(nonatomic) float preferredVolume;
@property(nonatomic) struct CGAffineTransform preferredTransform;
@property(copy, nonatomic) NSArray *metadata;
@property(nonatomic) int movieTimeScale;
@property(copy, nonatomic) NSURL *directoryForTemporaryFiles;
@property(nonatomic) _Bool shouldOptimizeForNetworkUse;
@property(nonatomic) CDStruct_1b6d18a9 overallDurationHint;
@property(nonatomic) CDStruct_1b6d18a9 initialMovieFragmentInterval;
@property(nonatomic) CDStruct_1b6d18a9 movieFragmentInterval;
@property __weak id <AVAssetWriterDelegate> delegate;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
@property(readonly, nonatomic) NSArray *availableMediaTypes;
@property(readonly, nonatomic) AVMediaFileType *mediaFileType;
@property(readonly, nonatomic) NSURL *outputURL;
- (void)dealloc;	// IMP=0x00000000000a094b
- (id)initWithConfigurationState:(id)arg1;	// IMP=0x00000000000a085e
- (id)init;	// IMP=0x00000000000a084a

@end
