//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAttSiriAttendingAudioSrcNode, CSAttSiriAudioSrcNode, CSAttSiriController, CSAttSiriEndpointerNode, CSAttSiriUresNode, CSCachedASRResults, CSPlainAudioFileWriter, MISSING_TYPE, NSArray, NSString;
@protocol CSAttSiriMagusAsrNodeDelegate, CoreEmbeddedSpeechRecognizerProvider, OS_dispatch_queue;

@interface CSAttSiriMagusASRNode : NSObject
{
    _Bool _isReady;	// 8 = 0x8
    _Bool _shouldProcessAudio;	// 9 = 0x9
    _Bool _speechHasAcceptedResultCandidate;	// 10 = 0xa
    _Bool _didDetectedEndpoint;	// 11 = 0xb
    _Bool _isFileLoggingEnabled;	// 12 = 0xc
    _Bool _areAsrResultsDeferred;	// 13 = 0xd
    _Bool _lastRequestMitigated;	// 14 = 0xe
    unsigned long long _type;	// 16 = 0x10
    NSArray *_requiredNodes;	// 24 = 0x18
    CSAttSiriController *_attSiriController;	// 32 = 0x20
    NSString *_mhId;	// 40 = 0x28
    CSAsset *prefetchedAsset;	// 48 = 0x30
    CSAttSiriEndpointerNode *_endpointerNode;	// 56 = 0x38
    CSAttSiriUresNode *_uresNode;	// 64 = 0x40
    CSAttSiriAudioSrcNode *_audioSrcNode;	// 72 = 0x48
    CSAttSiriAttendingAudioSrcNode *_attendingAudioSrcNode;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_queue;	// 88 = 0x58
    id <CoreEmbeddedSpeechRecognizerProvider> _interactiveLocalSpeechRecognizer;	// 96 = 0x60
    id <CoreEmbeddedSpeechRecognizerProvider> _presetLocalSpeechRecognizer;	// 104 = 0x68
    MISSING_TYPE *_cachedASRResults;	// 112 = 0x70
    long long _lastRCId;	// 120 = 0x78
    unsigned long long _eagerResultId;	// 128 = 0x80
    double _processedAudioDurationInMillisec;	// 136 = 0x88
    NSString *_requestId;	// 144 = 0x90
    CSPlainAudioFileWriter *_audioFileWriter;	// 152 = 0x98
    id <CSAttSiriMagusAsrNodeDelegate> _delegate;	// 160 = 0xa0
}

- (void).cxx_destruct;	// IMP=0x00200000000f2a35
@property(nonatomic) __weak id <CSAttSiriMagusAsrNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool lastRequestMitigated; // @synthesize lastRequestMitigated=_lastRequestMitigated;
@property(nonatomic) _Bool areAsrResultsDeferred; // @synthesize areAsrResultsDeferred=_areAsrResultsDeferred;
@property(nonatomic) _Bool isFileLoggingEnabled; // @synthesize isFileLoggingEnabled=_isFileLoggingEnabled;
@property(retain, nonatomic) CSPlainAudioFileWriter *audioFileWriter; // @synthesize audioFileWriter=_audioFileWriter;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(nonatomic) _Bool didDetectedEndpoint; // @synthesize didDetectedEndpoint=_didDetectedEndpoint;
@property(nonatomic) double processedAudioDurationInMillisec; // @synthesize processedAudioDurationInMillisec=_processedAudioDurationInMillisec;
@property(nonatomic) _Bool speechHasAcceptedResultCandidate; // @synthesize speechHasAcceptedResultCandidate=_speechHasAcceptedResultCandidate;
@property(nonatomic) _Bool shouldProcessAudio; // @synthesize shouldProcessAudio=_shouldProcessAudio;
@property(nonatomic) unsigned long long eagerResultId; // @synthesize eagerResultId=_eagerResultId;
@property(nonatomic) long long lastRCId; // @synthesize lastRCId=_lastRCId;
@property(retain, nonatomic) CSCachedASRResults *cachedASRResults; // @synthesize cachedASRResults=_cachedASRResults;
@property(retain, nonatomic) id <CoreEmbeddedSpeechRecognizerProvider> presetLocalSpeechRecognizer; // @synthesize presetLocalSpeechRecognizer=_presetLocalSpeechRecognizer;
@property(retain, nonatomic) id <CoreEmbeddedSpeechRecognizerProvider> interactiveLocalSpeechRecognizer; // @synthesize interactiveLocalSpeechRecognizer=_interactiveLocalSpeechRecognizer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak CSAttSiriAttendingAudioSrcNode *attendingAudioSrcNode; // @synthesize attendingAudioSrcNode=_attendingAudioSrcNode;
@property(nonatomic) __weak CSAttSiriAudioSrcNode *audioSrcNode; // @synthesize audioSrcNode=_audioSrcNode;
@property(nonatomic) __weak CSAttSiriUresNode *uresNode; // @synthesize uresNode=_uresNode;
@property(nonatomic) __weak CSAttSiriEndpointerNode *endpointerNode; // @synthesize endpointerNode=_endpointerNode;
@property(retain, nonatomic) CSAsset *prefetchedAsset; // @synthesize prefetchedAsset;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
@property(nonatomic) __weak CSAttSiriController *attSiriController; // @synthesize attSiriController=_attSiriController;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) NSArray *requiredNodes; // @synthesize requiredNodes=_requiredNodes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (oneway void)sendSpeechCorrectionInfo:(id)arg1 interactionIdentifier:(id)arg2;	// IMP=0x00100000000f276e
- (oneway void)resetCacheAndCompileAllAssets;	// IMP=0x00100000000f2768
- (oneway void)preheatLocalSpeechRecognitionWithLanguage:(id)arg1 source:(unsigned long long)arg2;	// IMP=0x00100000000f2762
- (oneway void)resumeLocalRecognitionWithRequestId:(id)arg1 prefixText:(id)arg2 postfixText:(id)arg3 selectedText:(id)arg4;	// IMP=0x00100000000f275c
- (oneway void)pauseLocalSpeechRecognitionForRequestId:(id)arg1;	// IMP=0x00100000000f2756
- (oneway void)stopSpeechRecognitionWithReason:(unsigned long long)arg1 requestId:(id)arg2;	// IMP=0x00100000000f2750
- (oneway void)startSpeechRecognitionResultsWithSettings:(id)arg1;	// IMP=0x00100000000f274a
- (oneway void)disableLocalSpeechRecognitionForRequestId:(id)arg1;	// IMP=0x00100000000f2744
- (void)stop;	// IMP=0x00100000000f273e
- (void)pause;	// IMP=0x00100000000f2738
- (void)start;	// IMP=0x00100000000f2732
- (void)removeReceiver:(id)arg1;	// IMP=0x00100000000f272c
- (void)addReceiver:(id)arg1;	// IMP=0x00100000000f2726
- (id)init;	// IMP=0x00100000000f2718
- (void)attSiriUresNode:(id)arg1 withUresScore:(float)arg2;	// IMP=0x00100000000f2679
- (id)_createEmptySpeechPackage;	// IMP=0x00100000000f25ee
- (void)_reset;	// IMP=0x00100000000f253a
- (void)_forceAcceptResultCandidateWithRcId:(unsigned long long)arg1 featuresToLog:(id)arg2;	// IMP=0x00100000000f231e
- (void)_queryShouldAcceptEagerResultForDuration:(double)arg1 rcId:(unsigned long long)arg2;	// IMP=0x00100000000f2146
- (id)_speechParametersForMagus:(id)arg1;	// IMP=0x00100000000f1c7f
- (void)_invalidateLocalSpeechRecognizerIfNeeded;	// IMP=0x00100000000f1bd1
- (id)_interactiveLocalSpeechRecognizer;	// IMP=0x00100000000f1a1e
- (void)attSiriNode:(id)arg1 didDetectStartpointAtTime:(double)arg2;	// IMP=0x00100000000f1a18
- (void)attSiriNode:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3 usesAutomaticEndPointing:(_Bool)arg4;	// IMP=0x00100000000f1949
- (void)localSpeechRecognizer:(id)arg1 didSelectRecognitionModelWithModelProperties:(id)arg2;	// IMP=0x00100000000f1943
- (void)localSpeechRecognizer:(id)arg1 didProduceEndpointFeaturesWithWordCount:(long long)arg2 trailingSilenceDuration:(long long)arg3 eosLikelihood:(double)arg4 pauseCounts:(id)arg5 silencePosterior:(double)arg6 processedAudioDurationInMilliseconds:(long long)arg7;	// IMP=0x00100000000f1876
- (void)localSpeechRecognizer:(id)arg1 didCompletionRecognitionWithStatistics:(id)arg2 error:(id)arg3;	// IMP=0x00100000000f1789
- (void)localSpeechRecognizer:(id)arg1 didRecognizePackage:(id)arg2 withMetadata:(id)arg3;	// IMP=0x00100000000f1684
- (void)localSpeechRecognizer:(id)arg1 didRecognizePackage:(id)arg2;	// IMP=0x00100000000f15c5
- (void)localSpeechRecognizer:(id)arg1 didRecognizeRawEagerRecognitionCandidate:(id)arg2;	// IMP=0x00100000000f15bf
- (void)localSpeechRecognizer:(id)arg1 didProcessAudioDuration:(double)arg2;	// IMP=0x00100000000f1522
- (void)localSpeechRecognizer:(id)arg1 didRecognizeTokens:(id)arg2 withMetadata:(id)arg3;	// IMP=0x00100000000f141d
- (void)localSpeechRecognizer:(id)arg1 didRecognizeTokens:(id)arg2;	// IMP=0x00100000000f135e
- (void)_handleStopSpeechRecognitionTask;	// IMP=0x00100000000f1315
- (void)attSiriAudioSrcNodeDidStop:(id)arg1;	// IMP=0x00100000000f12ca
- (void)attSiriAudioSrcNodeLPCMRecordBufferAvailable:(id)arg1 audioChunk:(id)arg2;	// IMP=0x00100000000f123d
- (void)attSiriAudioSrcNodeDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x00100000000f11ef
- (void)deliverCachedASRResultsWithRequestId:(id)arg1 connectionListener:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f1061
- (_Bool)cachedASRResultsAvailable;	// IMP=0x00100000000f0fd3
- (void)stopMagusASRProcessing;	// IMP=0x00100000000f0f13
- (void)startMagusASRProcessingWithSetting:(id)arg1 requestId:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f0e2d
- (void)registerAudioSrcNodeWithType:(unsigned long long)arg1 audioSrcNode:(id)arg2;	// IMP=0x00100000000f0d8d
- (void)dealloc;	// IMP=0x00100000000f0cd9
- (id)initWithEndpointerNode:(id)arg1 uresNode:(id)arg2 targetQueue:(id)arg3 isFileLoggingEnabled:(_Bool)arg4 localSpeechRecognizer:(id)arg5 delegate:(id)arg6;	// IMP=0x00100000000f0af7
- (id)initWithEndpointerNode:(id)arg1 uresNode:(id)arg2 targetQueue:(id)arg3 isFileLoggingEnabled:(_Bool)arg4 delegate:(id)arg5;	// IMP=0x00100000000f0adb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

