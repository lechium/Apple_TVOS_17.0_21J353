//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAttSiriController, CSAudioRecordContext, CSConnectionListener, CSEndpointLatencyInfo, CSEndpointerProxy, NSArray, NSHashTable, NSString;
@protocol CSAttSiriEndpointerNodeDelegate, OS_dispatch_queue;

@interface CSAttSiriEndpointerNode : NSObject
{
    _Bool _isReady;	// 8 = 0x8
    _Bool _isNNVAD;	// 9 = 0x9
    unsigned long long _type;	// 16 = 0x10
    NSArray *_requiredNodes;	// 24 = 0x18
    CSAttSiriController *_attSiriController;	// 32 = 0x20
    NSString *_mhId;	// 40 = 0x28
    CSConnectionListener *_endpointerListener;	// 48 = 0x30
    id <CSAttSiriEndpointerNodeDelegate> _delegate;	// 56 = 0x38
    NSHashTable *_receivers;	// 64 = 0x40
    CSEndpointerProxy *_proxy;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_queue;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_endpointLatencyQueue;	// 88 = 0x58
    CSEndpointLatencyInfo *_endpointLatencyInfo;	// 96 = 0x60
    CSAudioRecordContext *_audioRecordContext;	// 104 = 0x68
    NSString *_requestId;	// 112 = 0x70
    unsigned long long _lastAudioChunkHostTime;	// 120 = 0x78
}

- (void).cxx_destruct;	// IMP=0x002000000001c82c
@property(nonatomic) unsigned long long lastAudioChunkHostTime; // @synthesize lastAudioChunkHostTime=_lastAudioChunkHostTime;
@property(retain, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(retain, nonatomic) CSAudioRecordContext *audioRecordContext; // @synthesize audioRecordContext=_audioRecordContext;
@property(retain, nonatomic) CSEndpointLatencyInfo *endpointLatencyInfo; // @synthesize endpointLatencyInfo=_endpointLatencyInfo;
@property(nonatomic) _Bool isNNVAD; // @synthesize isNNVAD=_isNNVAD;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *endpointLatencyQueue; // @synthesize endpointLatencyQueue=_endpointLatencyQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSEndpointerProxy *proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) NSHashTable *receivers; // @synthesize receivers=_receivers;
@property(nonatomic) __weak id <CSAttSiriEndpointerNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CSConnectionListener *endpointerListener; // @synthesize endpointerListener=_endpointerListener;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
@property(nonatomic) __weak CSAttSiriController *attSiriController; // @synthesize attSiriController=_attSiriController;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) NSArray *requiredNodes; // @synthesize requiredNodes=_requiredNodes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void)endpointer:(id)arg1 detectedTwoShotAtTime:(double)arg2;	// IMP=0x001000000001c63e
- (void)_emitStoppedListeningForSpeechContinuationWithTrpId:(id)arg1;	// IMP=0x001000000001c638
- (void)_sendEndpointEventDelegateAtTime:(double)arg1 eventType:(long long)arg2 endpointerMetrics:(id)arg3;	// IMP=0x001000000001c3f2
- (void)_reportHardEndpointToXPCClientWithTime:(double)arg1 endpointerMetrics:(id)arg2;	// IMP=0x001000000001c0c8
- (void)endpointer:(id)arg1 didDetectStartpointAtTime:(double)arg2;	// IMP=0x001000000001c078
- (void)endpointer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3 endpointerModelType:(long long)arg4;	// IMP=0x001000000001bfc7
- (void)endpointer:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3;	// IMP=0x001000000001bf2a
- (void)attSiriAudioSrcNodeDidStop:(id)arg1;	// IMP=0x001000000001bedf
- (void)attSiriAudioSrcNodeLPCMRecordBufferAvailable:(id)arg1 audioChunk:(id)arg2;	// IMP=0x001000000001bdd7
- (void)attSiriAudioSrcNodeDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x001000000001bdd1
- (void)attSiriNode:(id)arg1 didUpdateAnchorMachAbsTime:(unsigned long long)arg2 numSamplesProcessedBeforeAnchorTime:(unsigned long long)arg3 isAnchorTimeBuffered:(_Bool)arg4;	// IMP=0x001000000001bdb2
- (void)attSiriNode:(id)arg1 didUpdateFirstAudioPacketTimestamp:(id)arg2 firstAudioSampleSensorTimestamp:(unsigned long long)arg3 firstAudioStartSampleCount:(unsigned long long)arg4;	// IMP=0x001000000001bd8e
- (void)attSiriNode:(id)arg1 didUpdateOSDFeatures:(id)arg2 withFrameDurationMs:(double)arg3;	// IMP=0x001000000001bd6d
- (void)processSpeechPackage:(id)arg1 taskName:(id)arg2;	// IMP=0x001000000001bc4c
- (void)didReceiveResultCandidateWithRequestId:(id)arg1 rcId:(unsigned long long)arg2 multiUserSpeechPackage:(id)arg3 topUserSpeechPackage:(id)arg4 duration:(double)arg5 taskName:(id)arg6;	// IMP=0x001000000001bc33
- (void)didReceiveResultCandidateWithRequestId:(id)arg1 rcId:(unsigned long long)arg2 speechPackage:(id)arg3 duration:(double)arg4 metadata:(id)arg5 taskName:(id)arg6;	// IMP=0x001000000001bc1a
- (void)didReceiveResultCandidateWithRequestId:(id)arg1 rcId:(unsigned long long)arg2 inputOrigin:(id)arg3 speechPackage:(id)arg4 duration:(double)arg5 taskName:(id)arg6;	// IMP=0x001000000001bc01
- (void)didReceiveAsrFeaturesWithWordCount:(unsigned long long)arg1 trailingSilenceDuration:(long long)arg2 eosLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 taskName:(id)arg6 processedAudioDurationInMilliseconds:(long long)arg7 fromServer:(_Bool)arg8;	// IMP=0x001000000001bb30
- (void)processTaskString:(id)arg1;	// IMP=0x001000000001bb1a
- (void)processASRFeaturesWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 eosLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 taskName:(id)arg6 processedAudioDurationInMilliseconds:(long long)arg7 fromServer:(_Bool)arg8;	// IMP=0x001000000001ba49
- (void)processServerFeaturesWithWordCount:(long long)arg1 trailingSilenceDuration:(long long)arg2 eosLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 taskName:(id)arg6 processedAudioDurationInMilliseconds:(long long)arg7;	// IMP=0x001000000001b982
- (void)getFirstAudioSampleSensorHostTimeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000001b96c
- (void)getEndPointAnalyzerTypeWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000001b91f
- (void)getPostVoiceTriggerSilenceWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000001b8d5
- (void)getEndpointerModelVersionWithReply:(CDUnknownBlockType)arg1;	// IMP=0x001000000001b872
- (unsigned long long)endPointAnalyzerType;	// IMP=0x001000000001b85c
- (double)postVoiceTriggerSilence;	// IMP=0x001000000001b846
- (_Bool)_shouldSendEndpointerSignalByOperationMode;	// IMP=0x001000000001b81b
- (_Bool)getUsesAutomaticEndpointing;	// IMP=0x001000000001b7f9
- (void)setEndpointerOperationMode:(long long)arg1;	// IMP=0x001000000001b7e3
- (void)setAutomaticEndpointingSuspensionEndTime:(double)arg1;	// IMP=0x001000000001b7cd
- (void)setEndWaitTime:(double)arg1;	// IMP=0x001000000001b7b7
- (void)setStartWaitTime:(double)arg1;	// IMP=0x001000000001b7a1
- (void)logHybridEndpointFeaturesWithEvent:(id)arg1 locale:(id)arg2;	// IMP=0x001000000001b78b
- (void)shouldAcceptEagerResultForDuration:(double)arg1 resultsCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x001000000001b775
- (void)updateEndpointerDelayedTrigger:(_Bool)arg1;	// IMP=0x001000000001b75f
- (void)updateEndpointerThreshold:(float)arg1;	// IMP=0x001000000001b749
- (void)processServerEndpointFeatures:(id)arg1;	// IMP=0x001000000001b733
- (void)processASRFeatures:(id)arg1 fromServer:(_Bool)arg2;	// IMP=0x001000000001b71d
- (id)endpointerModelVersion;	// IMP=0x001000000001b707
- (void)processAudioSamplesAsynchronously:(id)arg1;	// IMP=0x001000000001b6f1
- (void)recordingStoppedForReason:(long long)arg1;	// IMP=0x001000000001b6db
- (void)stopEndpointer;	// IMP=0x001000000001b67d
- (void)setActiveChannel:(unsigned long long)arg1;	// IMP=0x001000000001b667
- (void)setupConnection;	// IMP=0x001000000001b661
- (void)resetForVoiceTriggerTwoShotWithSampleRate:(unsigned long long)arg1;	// IMP=0x001000000001b64b
- (void)resetForNewRequestWithSampleRate:(unsigned long long)arg1 recordContext:(id)arg2 recordOption:(id)arg3 voiceTriggerInfo:(id)arg4;	// IMP=0x001000000001b49b
- (void)registerEndpointerProxyAt:(id)arg1;	// IMP=0x001000000001b47f
- (void)stop;	// IMP=0x001000000001b469
- (void)pause;	// IMP=0x001000000001b463
- (void)start;	// IMP=0x001000000001b45d
- (void)removeReceiver:(id)arg1;	// IMP=0x001000000001b3d0
- (void)addReceiver:(id)arg1;	// IMP=0x001000000001b343
- (id)initWithAttSiriController:(id)arg1;	// IMP=0x001000000001b14a
- (id)init;	// IMP=0x001000000001b136

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(retain, nonatomic) CSAsset *prefetchedAsset;
@property(readonly) Class superclass;

@end

