//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAttSiriController, CSAttSiriEndpointerNode, CSAttSiriMagusASRNode, CSAttSiriSSRNode, CSAttSiriUresNode, CSAudioProcessWaitingBuffer, CSAudioRecordContext, CSConnectionListener, CSEndpointDelayReporter, CSOSTransaction, CSPlainAudioFileWriter, CSSpeechRecognitionSelfHelper, CSUncompressedAudioLogging, LBLocalSpeechRecognitionSettings, NSArray, NSString, NSUUID;
@protocol CoreEmbeddedSpeechRecognizerProvider, OS_dispatch_queue;

@interface CSAttSiriAsrNode : NSObject
{
    _Bool _isReady;	// 8 = 0x8
    _Bool _speechHasAcceptedResultCandidate;	// 9 = 0x9
    _Bool _shouldProcessAudio;	// 10 = 0xa
    _Bool _isFileLoggingEnabled;	// 11 = 0xb
    _Bool _didDetectedEndpoint;	// 12 = 0xc
    _Bool _shouldStopProcessASROnEndpoint;	// 13 = 0xd
    _Bool _disableEndpointer;	// 14 = 0xe
    _Bool _onDeviceDictationSampled;	// 15 = 0xf
    _Bool _onDeviceAssistantSampled;	// 16 = 0x10
    unsigned int _activeChannel;	// 20 = 0x14
    unsigned long long _type;	// 24 = 0x18
    NSArray *_requiredNodes;	// 32 = 0x20
    CSAttSiriController *_attSiriController;	// 40 = 0x28
    NSString *_mhId;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_targetQueue;	// 56 = 0x38
    CSAttSiriEndpointerNode *_endpointerNode;	// 64 = 0x40
    CSAttSiriUresNode *_uresNode;	// 72 = 0x48
    CSAttSiriSSRNode *_ssrNode;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_localSpeechRecognizerQueue;	// 88 = 0x58
    id <CoreEmbeddedSpeechRecognizerProvider> _interactiveLocalSpeechRecognizer;	// 96 = 0x60
    id <CoreEmbeddedSpeechRecognizerProvider> _presetLocalSpeechRecognizer;	// 104 = 0x68
    NSString *_localSpeechRecognizerTaskString;	// 112 = 0x70
    unsigned long long _localSpeechRecognizerState;	// 120 = 0x78
    CSAudioProcessWaitingBuffer *_audioWaitingBuffer;	// 128 = 0x80
    double _localSpeechRecognizerDeliverAudioDuration;	// 136 = 0x88
    NSString *_language;	// 144 = 0x90
    NSString *_requestId;	// 152 = 0x98
    unsigned long long _eagerResultId;	// 160 = 0xa0
    LBLocalSpeechRecognitionSettings *_speechRecognitionSettings;	// 168 = 0xa8
    CSAudioRecordContext *_recordContext;	// 176 = 0xb0
    long long _endpointMode;	// 184 = 0xb8
    CSOSTransaction *_asrResultDeliveryTransaction;	// 192 = 0xc0
    CSOSTransaction *_recordingTransaction;	// 200 = 0xc8
    NSString *_siriSessionUUID;	// 208 = 0xd0
    NSUUID *_recordingToken;	// 216 = 0xd8
    unsigned long long _voiceTriggerFireMachTime;	// 224 = 0xe0
    CSPlainAudioFileWriter *_audioFileWriter;	// 232 = 0xe8
    double _endpointStartTimeInSec;	// 240 = 0xf0
    unsigned long long _audioSampleCountToSkip;	// 248 = 0xf8
    double _detectedEndpointTime;	// 256 = 0x100
    double _lastEndpointHintDuration;	// 264 = 0x108
    long long _lastEndpointHintRCId;	// 272 = 0x110
    unsigned long long _lastEndpointEagerResultTime;	// 280 = 0x118
    NSArray *_lastEndpointHintFeatures;	// 288 = 0x120
    CSEndpointDelayReporter *_endpointDelayReporter;	// 296 = 0x128
    unsigned long long _recordingStartTime;	// 304 = 0x130
    unsigned long long _firstPartialResultTime;	// 312 = 0x138
    double _firstWordDuration;	// 320 = 0x140
    double _leadingSilenceDuration;	// 328 = 0x148
    CSUncompressedAudioLogging *_audioLogging;	// 336 = 0x150
    CSSpeechRecognitionSelfHelper *_asrSelfHelper;	// 344 = 0x158
    CSAttSiriMagusASRNode *_magusASR;	// 352 = 0x160
    CSConnectionListener *_localSRBridgeListener;	// 360 = 0x168
}

+ (long long)endpointModeFromEndpointMetrics:(id)arg1;	// IMP=0x00200000000c98c4
- (void).cxx_destruct;	// IMP=0x00200000000c5eef
@property(retain, nonatomic) CSConnectionListener *localSRBridgeListener; // @synthesize localSRBridgeListener=_localSRBridgeListener;
@property(retain, nonatomic) CSAttSiriMagusASRNode *magusASR; // @synthesize magusASR=_magusASR;
// Error: Property attributes should begin with the type ('T') attribute, property name: asrSelfHelper
// Property attributes: (null)

@property(nonatomic) _Bool onDeviceAssistantSampled; // @synthesize onDeviceAssistantSampled=_onDeviceAssistantSampled;
@property(nonatomic) _Bool onDeviceDictationSampled; // @synthesize onDeviceDictationSampled=_onDeviceDictationSampled;
@property(retain, nonatomic) CSUncompressedAudioLogging *audioLogging; // @synthesize audioLogging=_audioLogging;
@property(nonatomic) double leadingSilenceDuration; // @synthesize leadingSilenceDuration=_leadingSilenceDuration;
@property(nonatomic) double firstWordDuration; // @synthesize firstWordDuration=_firstWordDuration;
@property(nonatomic) unsigned long long firstPartialResultTime; // @synthesize firstPartialResultTime=_firstPartialResultTime;
@property(nonatomic) unsigned long long recordingStartTime; // @synthesize recordingStartTime=_recordingStartTime;
@property(retain, nonatomic) CSEndpointDelayReporter *endpointDelayReporter; // @synthesize endpointDelayReporter=_endpointDelayReporter;
@property(nonatomic) _Bool disableEndpointer; // @synthesize disableEndpointer=_disableEndpointer;
@property(retain, nonatomic) NSArray *lastEndpointHintFeatures; // @synthesize lastEndpointHintFeatures=_lastEndpointHintFeatures;
@property(nonatomic) unsigned long long lastEndpointEagerResultTime; // @synthesize lastEndpointEagerResultTime=_lastEndpointEagerResultTime;
@property(nonatomic) long long lastEndpointHintRCId; // @synthesize lastEndpointHintRCId=_lastEndpointHintRCId;
@property(nonatomic) double lastEndpointHintDuration; // @synthesize lastEndpointHintDuration=_lastEndpointHintDuration;
@property(nonatomic) _Bool shouldStopProcessASROnEndpoint; // @synthesize shouldStopProcessASROnEndpoint=_shouldStopProcessASROnEndpoint;
@property(nonatomic) double detectedEndpointTime; // @synthesize detectedEndpointTime=_detectedEndpointTime;
@property(nonatomic) _Bool didDetectedEndpoint; // @synthesize didDetectedEndpoint=_didDetectedEndpoint;
@property(nonatomic) unsigned long long audioSampleCountToSkip; // @synthesize audioSampleCountToSkip=_audioSampleCountToSkip;
@property(nonatomic) double endpointStartTimeInSec; // @synthesize endpointStartTimeInSec=_endpointStartTimeInSec;
@property(nonatomic) _Bool isFileLoggingEnabled; // @synthesize isFileLoggingEnabled=_isFileLoggingEnabled;
@property(retain, nonatomic) CSPlainAudioFileWriter *audioFileWriter; // @synthesize audioFileWriter=_audioFileWriter;
@property(nonatomic) unsigned long long voiceTriggerFireMachTime; // @synthesize voiceTriggerFireMachTime=_voiceTriggerFireMachTime;
@property(retain, nonatomic) NSUUID *recordingToken; // @synthesize recordingToken=_recordingToken;
@property(retain, nonatomic) NSString *siriSessionUUID; // @synthesize siriSessionUUID=_siriSessionUUID;
@property(retain, nonatomic) CSOSTransaction *recordingTransaction; // @synthesize recordingTransaction=_recordingTransaction;
@property(retain, nonatomic) CSOSTransaction *asrResultDeliveryTransaction; // @synthesize asrResultDeliveryTransaction=_asrResultDeliveryTransaction;
@property(nonatomic) long long endpointMode; // @synthesize endpointMode=_endpointMode;
@property(nonatomic) _Bool shouldProcessAudio; // @synthesize shouldProcessAudio=_shouldProcessAudio;
@property(retain, nonatomic) CSAudioRecordContext *recordContext; // @synthesize recordContext=_recordContext;
@property(retain, nonatomic) LBLocalSpeechRecognitionSettings *speechRecognitionSettings; // @synthesize speechRecognitionSettings=_speechRecognitionSettings;
@property(nonatomic) _Bool speechHasAcceptedResultCandidate; // @synthesize speechHasAcceptedResultCandidate=_speechHasAcceptedResultCandidate;
@property(nonatomic) unsigned long long eagerResultId; // @synthesize eagerResultId=_eagerResultId;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) NSString *language; // @synthesize language=_language;
@property(nonatomic) unsigned int activeChannel; // @synthesize activeChannel=_activeChannel;
@property(nonatomic) double localSpeechRecognizerDeliverAudioDuration; // @synthesize localSpeechRecognizerDeliverAudioDuration=_localSpeechRecognizerDeliverAudioDuration;
@property(retain, nonatomic) CSAudioProcessWaitingBuffer *audioWaitingBuffer; // @synthesize audioWaitingBuffer=_audioWaitingBuffer;
@property(nonatomic) unsigned long long localSpeechRecognizerState; // @synthesize localSpeechRecognizerState=_localSpeechRecognizerState;
@property(retain, nonatomic) NSString *localSpeechRecognizerTaskString; // @synthesize localSpeechRecognizerTaskString=_localSpeechRecognizerTaskString;
@property(retain, nonatomic) id <CoreEmbeddedSpeechRecognizerProvider> presetLocalSpeechRecognizer; // @synthesize presetLocalSpeechRecognizer=_presetLocalSpeechRecognizer;
@property(retain, nonatomic) id <CoreEmbeddedSpeechRecognizerProvider> interactiveLocalSpeechRecognizer; // @synthesize interactiveLocalSpeechRecognizer=_interactiveLocalSpeechRecognizer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *localSpeechRecognizerQueue; // @synthesize localSpeechRecognizerQueue=_localSpeechRecognizerQueue;
@property(nonatomic, setter=registerSSRNode:) __weak CSAttSiriSSRNode *ssrNode; // @synthesize ssrNode=_ssrNode;
@property(nonatomic, setter=registerUresNode:) __weak CSAttSiriUresNode *uresNode; // @synthesize uresNode=_uresNode;
@property(nonatomic, setter=registerEndpointerNode:) __weak CSAttSiriEndpointerNode *endpointerNode; // @synthesize endpointerNode=_endpointerNode;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *targetQueue; // @synthesize targetQueue=_targetQueue;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
@property(nonatomic) __weak CSAttSiriController *attSiriController; // @synthesize attSiriController=_attSiriController;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) NSArray *requiredNodes; // @synthesize requiredNodes=_requiredNodes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)attSiriMagusASRNodeFinalMigitationDecisionMade;	// IMP=0x00100000000c5977
- (void)_setupRecognizerStateForMagusAsrNode;	// IMP=0x00100000000c5944
- (void)_markTimeToFirstWordMetric;	// IMP=0x00100000000c53a0
- (id)_fetchRecognizerLanguageWithSiriLanguage:(id)arg1 UILanguage:(id)arg2 taskString:(id)arg3;	// IMP=0x00100000000c5264
- (double)_getFirstTokenDurationFromSpeechPackage:(id)arg1;	// IMP=0x00100000000c5135
- (double)_getLeadingSilenceDurationFromSpeechPackage:(id)arg1;	// IMP=0x00100000000c5021
- (double)_getUserSpeakingEndedTimeFromSpeechPackage:(id)arg1;	// IMP=0x00100000000c4eff
- (id)_sourceStringFromPreheatSource:(unsigned long long)arg1;	// IMP=0x00100000000c4ec9
- (id)_stateToString:(unsigned long long)arg1;	// IMP=0x00100000000c4eaa
- (void)_setLocalSpeechRecognizerState:(unsigned long long)arg1;	// IMP=0x00100000000c4d8c
- (void)_clearAudioProcessWaitingBufferIfNeeded;	// IMP=0x00100000000c4d47
- (id)_getAsrInputoriginFromContext:(id)arg1;	// IMP=0x00100000000c4c94
- (id)_fetchInputOriginWithRecordContext:(id)arg1;	// IMP=0x00100000000c4b41
- (unsigned long long)fetchCurrentState;	// IMP=0x00100000000c4873
- (void)localSpeechRecognizer:(id)arg1 didSelectRecognitionModelWithModelProperties:(id)arg2;	// IMP=0x00100000000c472f
- (void)localSpeechRecognizer:(id)arg1 didProduceEndpointFeaturesWithWordCount:(long long)arg2 trailingSilenceDuration:(long long)arg3 eosLikelihood:(double)arg4 pauseCounts:(id)arg5 silencePosterior:(double)arg6 processedAudioDurationInMilliseconds:(long long)arg7;	// IMP=0x00100000000c4662
- (void)localSpeechRecognizer:(id)arg1 didCompletionRecognitionWithStatistics:(id)arg2 error:(id)arg3;	// IMP=0x00100000000c4575
- (void)_handleDidRecognizedSpeechPackageForEagerRecognitionCandidate:(id)arg1 multiUserSpeechPackage:(id)arg2 requestId:(id)arg3 rcId:(unsigned long long)arg4 metadata:(id)arg5;	// IMP=0x00100000000c4021
- (void)_handleDidRecognizedFinalSpeechPackage:(id)arg1 multiUserSpeechPackage:(id)arg2 requestId:(id)arg3 metadata:(id)arg4;	// IMP=0x00100000000c3de5
- (void)localSpeechRecognizer:(id)arg1 didRecognizeMultiUserSpeechPackage:(id)arg2;	// IMP=0x00100000000c3d2e
- (void)localSpeechRecognizer:(id)arg1 didRecognizePackage:(id)arg2 withMetadata:(id)arg3;	// IMP=0x00100000000c3c49
- (void)localSpeechRecognizer:(id)arg1 didRecognizePackage:(id)arg2;	// IMP=0x00100000000c3b92
- (void)localSpeechRecognizer:(id)arg1 didRecognizeVoiceCommandCandidatePackage:(id)arg2 withMetadata:(id)arg3;	// IMP=0x00100000000c3aad
- (void)localSpeechRecognizer:(id)arg1 didRecognizeFinalResultCandidatePackage:(id)arg2;	// IMP=0x00100000000c39f6
- (void)_handleShouldAcceptEagerResultWithRequestId:(id)arg1 rcId:(unsigned long long)arg2 duration:(double)arg3 shouldAccept:(_Bool)arg4 featuresToLog:(id)arg5;	// IMP=0x00100000000c390e
- (void)_queryShouldAcceptEagerResultForDuration:(double)arg1 requestId:(id)arg2 rcId:(unsigned long long)arg3;	// IMP=0x00100000000c3696
- (void)localSpeechRecognizer:(id)arg1 didRecognizeRawEagerRecognitionCandidate:(id)arg2;	// IMP=0x00100000000c3690
- (void)localSpeechRecognizer:(id)arg1 didProcessAudioDuration:(double)arg2;	// IMP=0x00100000000c35f3
- (void)localSpeechRecognizer:(id)arg1 didRecognizeTokens:(id)arg2 withMetadata:(id)arg3;	// IMP=0x00100000000c350e
- (void)localSpeechRecognizer:(id)arg1 didRecognizePartialPackage:(id)arg2 withMetadata:(id)arg3;	// IMP=0x00100000000c3429
- (void)localSpeechRecognizer:(id)arg1 didRecognizeTokens:(id)arg2;	// IMP=0x00100000000c3372
- (void)_resetLocalSpeechRecognizerParameters;	// IMP=0x00100000000c334e
- (void)_invalidateLocalSpeechRecognizer;	// IMP=0x00100000000c3305
- (id)_interactiveLocalSpeechRecognizer;	// IMP=0x00100000000c312a
- (void)_releaseRecordingTransactionIfNeededWithToken:(id)arg1;	// IMP=0x00100000000c2fc4
- (void)_scheduleRecordingTransactionReleaseTimer;	// IMP=0x00100000000c2e53
- (void)_handleStopSpeechRecognitionTaskIfNeeded:(_Bool)arg1;	// IMP=0x00100000000c2bdd
- (void)_processAudioChunk:(id)arg1 withReadyTimestamp:(id)arg2;	// IMP=0x00100000000c291f
- (void)_startLocalSpeechRecognizerIfNeeded;	// IMP=0x00100000000c1283
- (void)_deliverCachedAsrResults;	// IMP=0x00100000000c1061
- (_Bool)_shouldDisableLocalSpeechRecognizerWithOption:(id)arg1 audioRecordContext:(id)arg2;	// IMP=0x00100000000c0ec8
- (void)_stopPreviousRecognitionTaskIfNeededWithNewRequestId:(id)arg1 stopUresProcessing:(_Bool)arg2;	// IMP=0x00100000000c0dbb
- (void)prepareToStartSpeechRequestWithStartStreamOption:(id)arg1 audioRecordContext:(id)arg2 voiceTriggerInfo:(id)arg3;	// IMP=0x00100000000c0cd6
- (void)_preheatWithLanguage:(id)arg1 preheatSource:(unsigned long long)arg2;	// IMP=0x00100000000c0b45
- (void)_preheatWithLanguage:(id)arg1 preheatSource:(unsigned long long)arg2 shouldDownloadMissingAsset:(_Bool)arg3;	// IMP=0x00100000000c0abb
- (void)preheatWithLanguage:(id)arg1 shouldDownloadMissingAsset:(_Bool)arg2;	// IMP=0x00100000000c0a1c
- (void)start;	// IMP=0x00100000000c095c
- (void)_clearEndpointHint;	// IMP=0x00100000000c092c
- (void)_enforceEndpointHintWithRequestId:(id)arg1 rcId:(unsigned long long)arg2 shouldAccept:(_Bool)arg3 featuresToLog:(id)arg4;	// IMP=0x00100000000c0682
- (void)attSiriNode:(id)arg1 didDetectStartpointAtTime:(double)arg2;	// IMP=0x00100000000c067c
- (void)attSiriNode:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3 usesAutomaticEndPointing:(_Bool)arg4;	// IMP=0x00100000000c05df
- (void)attSiriAudioSrcNodeDidStop:(id)arg1;	// IMP=0x00100000000c0594
- (void)attSiriAudioSrcNodeLPCMRecordBufferAvailable:(id)arg1 audioChunk:(id)arg2;	// IMP=0x00100000000c0507
- (void)attSiriAudioSrcNodeDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x00100000000c04b9
- (oneway void)sendSpeechCorrectionInfo:(id)arg1 interactionIdentifier:(id)arg2;	// IMP=0x00100000000c0402
- (oneway void)resetCacheAndCompileAllAssets;	// IMP=0x00100000000c03ed
- (oneway void)resumeLocalRecognitionWithRequestId:(id)arg1 prefixText:(id)arg2 postfixText:(id)arg3 selectedText:(id)arg4;	// IMP=0x00100000000c025c
- (oneway void)pauseLocalSpeechRecognitionForRequestId:(id)arg1;	// IMP=0x00100000000c0178
- (void)_disableLocalSpeechRecognitionForRequestId:(id)arg1 force:(_Bool)arg2;	// IMP=0x00100000000c000e
- (oneway void)disableLocalSpeechRecognitionForRequestId:(id)arg1;	// IMP=0x00100000000bff81
- (oneway void)stopSpeechRecognitionWithReason:(unsigned long long)arg1 requestId:(id)arg2;	// IMP=0x00100000000bfe4c
- (void)_startDeliverLocalSpeechRecognitionResultsWithRequestId:(id)arg1;	// IMP=0x00100000000bfb07
- (oneway void)startSpeechRecognitionResultsWithSettings:(id)arg1;	// IMP=0x00100000000bfa57
- (oneway void)preheatLocalSpeechRecognitionWithLanguage:(id)arg1 source:(unsigned long long)arg2;	// IMP=0x00100000000bf9b7
- (void)stopASRProcessforMagus;	// IMP=0x00100000000bf96c
- (void)abortASRResultsForMagus;	// IMP=0x00100000000bf921
- (void)registerAudioSrcNodeWithNodeType:(unsigned long long)arg1 audioSourceNode:(id)arg2;	// IMP=0x00100000000bf85b
- (void)_startMagusASRNode:(id)arg1 requestId:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x00100000000bf6de
- (void)startASRProcessForMagusWithMHUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000bf5a5
- (void)_handleStopDeliverLocalSpeechRecognitionWithStopUresProcessing:(_Bool)arg1;	// IMP=0x00100000000bf4f5
- (void)_setRecordingStartTimeWithStartStreamOption:(id)arg1 audioRecordContext:(id)arg2 voiceTriggerInfo:(id)arg3;	// IMP=0x00100000000bf395
- (void)_adjustEndpointStartTimeWithVoiceTriggerEvent:(id)arg1;	// IMP=0x00100000000bef49
- (void)removeReceiver:(id)arg1;	// IMP=0x00100000000bed9c
- (void)addReceiver:(id)arg1;	// IMP=0x00100000000bed96
- (void)stopWithReason:(unsigned long long)arg1;	// IMP=0x00100000000becc0
- (void)stop;	// IMP=0x00100000000becac
- (void)pause;	// IMP=0x00100000000beca6
- (id)initWithLocalSpeechRecognizer:(id)arg1 isFileLoggingEnabled:(_Bool)arg2;	// IMP=0x00100000000beae5
- (id)init;	// IMP=0x00100000000bea7c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) CSAsset *prefetchedAsset;
@property(readonly) Class superclass;

@end

