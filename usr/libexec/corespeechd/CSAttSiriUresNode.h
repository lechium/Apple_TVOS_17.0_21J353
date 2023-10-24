//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAttSiriController, CSAttSiriNLDAClassifierNode, CSAttSiriOSDNode, CSAttSiriOrbTransitionNode, CSAttSiriSSRNode, CSOSTransaction, MISSING_TYPE, NSArray, NSHashTable, NSMutableDictionary, NSString, SLUresMitigator;
@protocol CSAttSiriMitigatorDeletgate, CSAttSiriSignalDataAggregatorProtocol, OS_dispatch_queue;

@interface CSAttSiriUresNode : NSObject
{
    _Bool _isReady;	// 8 = 0x8
    _Bool _supportsUnderstandingOnDevice;	// 9 = 0x9
    _Bool _supportsHybridUnderstandingOnDevice;	// 10 = 0xa
    _Bool _isMedocFeatureEnabled;	// 11 = 0xb
    unsigned long long _type;	// 16 = 0x10
    NSArray *_requiredNodes;	// 24 = 0x18
    NSString *_mhId;	// 32 = 0x20
    CSAsset *_prefetchedAsset;	// 40 = 0x28
    CSAttSiriOSDNode *_osdNode;	// 48 = 0x30
    id <CSAttSiriSignalDataAggregatorProtocol> _gazeNode;	// 56 = 0x38
    CSAttSiriOrbTransitionNode *_mimNode;	// 64 = 0x40
    CSAttSiriNLDAClassifierNode *_nldaClassifierNode;	// 72 = 0x48
    CSAttSiriSSRNode *_ssrNode;	// 80 = 0x50
    id <CSAttSiriMitigatorDeletgate> _mitigatorDelegate;	// 88 = 0x58
    SLUresMitigator *_mitigator;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_queue;	// 104 = 0x68
    NSHashTable *_receivers;	// 112 = 0x70
    NSString *_configFile;	// 120 = 0x78
    NSArray *_supportedInputOrigins;	// 128 = 0x80
    CSOSTransaction *_osTransaction;	// 136 = 0x88
    NSArray *_allowVocabList;	// 144 = 0x90
    unsigned long long _allowListWordCountThreshold;	// 152 = 0x98
    NSMutableDictionary *_requestIdToFeatsMapping;	// 160 = 0xa0
}

+ (float)_extractLrnnScoreForResultCandidate:(id)arg1;	// IMP=0x002000000011d430
- (void).cxx_destruct;	// IMP=0x00200000001192f8
@property(readonly, nonatomic) _Bool isMedocFeatureEnabled; // @synthesize isMedocFeatureEnabled=_isMedocFeatureEnabled;
@property(readonly, nonatomic) _Bool supportsHybridUnderstandingOnDevice; // @synthesize supportsHybridUnderstandingOnDevice=_supportsHybridUnderstandingOnDevice;
@property(readonly, nonatomic) _Bool supportsUnderstandingOnDevice; // @synthesize supportsUnderstandingOnDevice=_supportsUnderstandingOnDevice;
@property(retain, nonatomic) NSMutableDictionary *requestIdToFeatsMapping; // @synthesize requestIdToFeatsMapping=_requestIdToFeatsMapping;
@property(nonatomic) unsigned long long allowListWordCountThreshold; // @synthesize allowListWordCountThreshold=_allowListWordCountThreshold;
@property(retain, nonatomic) NSArray *allowVocabList; // @synthesize allowVocabList=_allowVocabList;
@property(retain, nonatomic) CSOSTransaction *osTransaction; // @synthesize osTransaction=_osTransaction;
@property(retain, nonatomic) NSArray *supportedInputOrigins; // @synthesize supportedInputOrigins=_supportedInputOrigins;
@property(retain, nonatomic) NSString *configFile; // @synthesize configFile=_configFile;
@property(retain, nonatomic) NSHashTable *receivers; // @synthesize receivers=_receivers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) SLUresMitigator *mitigator; // @synthesize mitigator=_mitigator;
@property(nonatomic) __weak id <CSAttSiriMitigatorDeletgate> mitigatorDelegate; // @synthesize mitigatorDelegate=_mitigatorDelegate;
@property(nonatomic, setter=registerSSRNode:) __weak CSAttSiriSSRNode *ssrNode; // @synthesize ssrNode=_ssrNode;
@property(nonatomic, setter=registerNLDAClassifierNode:) __weak CSAttSiriNLDAClassifierNode *nldaClassifierNode; // @synthesize nldaClassifierNode=_nldaClassifierNode;
@property(nonatomic, setter=registerOrbTransitionNode:) __weak CSAttSiriOrbTransitionNode *mimNode; // @synthesize mimNode=_mimNode;
@property(nonatomic, setter=registerGazeNode:) __weak id <CSAttSiriSignalDataAggregatorProtocol> gazeNode; // @synthesize gazeNode=_gazeNode;
@property(nonatomic, setter=registerOSDNode:) __weak CSAttSiriOSDNode *osdNode; // @synthesize osdNode=_osdNode;
@property(retain, nonatomic) CSAsset *prefetchedAsset; // @synthesize prefetchedAsset=_prefetchedAsset;
@property(retain, nonatomic) NSString *mhId; // @synthesize mhId=_mhId;
@property(nonatomic) _Bool isReady; // @synthesize isReady=_isReady;
@property(retain, nonatomic) NSArray *requiredNodes; // @synthesize requiredNodes=_requiredNodes;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)getUresInputFeaturesForRequestId:(id)arg1;	// IMP=0x0010000000118fe7
- (_Bool)_isSpeechRecognizerTaskSupported:(id)arg1;	// IMP=0x0010000000118f7d
- (void)_readAllowListVocabFromFile:(id)arg1;	// IMP=0x0010000000118d85
- (_Bool)_shouldApplyAllowListOverride:(id)arg1 withInputOrigin:(id)arg2;	// IMP=0x0010000000118aff
- (id)_decodeJsonFromFile:(id)arg1;	// IMP=0x0010000000118941
- (void)_updateSupportedInputOrigins;	// IMP=0x0010000000118849
- (MISSING_TYPE *)_updateInputFeats:forSignalsFrom:to: /* Error: Ran out of types for this method. */;	// IMP=0x00100000001186ac
- (_Bool)_shouldRunMitigationForContext:(id)arg1;	// IMP=0x001000000011861e
- (void)_releaseUresProcessingTransaction;	// IMP=0x001000000011852a
- (void)_holdTransactionForUresProcessing;	// IMP=0x0010000000118428
- (void)didReceiveTCUUpdateForTCUId:(id)arg1 withTCUAccepted:(_Bool)arg2 forRequestId:(id)arg3;	// IMP=0x0010000000118389
- (void)didReceiveResultCandidateWithRequestId:(id)arg1 rcId:(unsigned long long)arg2 multiUserSpeechPackage:(id)arg3 topUserSpeechPackage:(id)arg4 duration:(double)arg5 taskName:(id)arg6;	// IMP=0x0010000000118354
- (void)didReceiveResultCandidateWithRequestId:(id)arg1 rcId:(unsigned long long)arg2 speechPackage:(id)arg3 duration:(double)arg4 metadata:(id)arg5 taskName:(id)arg6;	// IMP=0x0010000000118324
- (void)didReceiveResultCandidateWithRequestId:(id)arg1 rcId:(unsigned long long)arg2 inputOrigin:(id)arg3 speechPackage:(id)arg4 duration:(double)arg5 taskName:(id)arg6;	// IMP=0x00100000001182f4
- (void)didReceiveStopRecognitionRequest:(id)arg1;	// IMP=0x00100000001182e2
- (void)didStartRecognitionRequest:(id)arg1 successfully:(_Bool)arg2 isRecognitionModeClassic:(_Bool)arg3 error:(id)arg4;	// IMP=0x00100000001182c6
- (void)didSelectRecognitionModelWithModelRoot:(id)arg1;	// IMP=0x00100000001182b4
- (void)didPrepareRecognitionWithAudioContext:(id)arg1 requestId:(id)arg2 mhId:(id)arg3 voiceTriggerInfo:(id)arg4;	// IMP=0x00100000001182a2
- (id)constructTCUIntendedInfoForRequestId:(id)arg1 withResultCandidate:(id)arg2;	// IMP=0x001000000011829a
- (void)attSiriNode:(id)arg1 didUpdateWithSpeakerInfo:(id)arg2 forReqId:(id)arg3;	// IMP=0x00100000001181db
- (void)attSiriNode:(id)arg1 didUpdateOSDFeatures:(id)arg2 withFrameDurationMs:(double)arg3;	// IMP=0x001000000011813e
- (void)attSiriNode:(id)arg1 didMitigate:(_Bool)arg2 withScore:(float)arg3 taskType:(id)arg4;	// IMP=0x00100000001180a1
- (void)attSiriNode:(id)arg1 didUpdateAttentionState:(unsigned long long)arg2;	// IMP=0x0010000000118052
- (void)didReceiveAsrFeaturesWithWordCount:(unsigned long long)arg1 trailingSilenceDuration:(long long)arg2 eosLikelihood:(double)arg3 pauseCounts:(id)arg4 silencePosterior:(double)arg5 taskName:(id)arg6 processedAudioDurationInMilliseconds:(long long)arg7 fromServer:(_Bool)arg8;	// IMP=0x001000000011803c
- (void)_createMitigatorModelWithConfig:(id)arg1;	// IMP=0x0010000000117e84
- (void)setEndpointerFeatureEoS:(float)arg1;	// IMP=0x0010000000117e34
- (void)getLatestUresFeaturesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0010000000117e2e
- (void)_runLRNNOnlyMitigationForRCId:(unsigned long long)arg1 speechPackage:(id)arg2 requestId:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000117a16
- (void)processResultCandidate:(id)arg1 forRCId:(unsigned long long)arg2 forTask:(id)arg3 forRequestId:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x00100000001178ef
- (_Bool)_supportsHybridSDSD;	// IMP=0x00100000001178d8
- (_Bool)_shouldRunMitigationForRequestContext:(id)arg1 forTask:(id)arg2;	// IMP=0x0010000000117458
- (void)_createModelAndRunInferenceForRcId:(unsigned long long)arg1 withRequestContext:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;	// IMP=0x00100000001171d2
- (void)_storeMitigationDecision:(_Bool)arg1 forRCId:(unsigned long long)arg2 requestContext:(id)arg3;	// IMP=0x0010000000116fee
- (void)_logURESFailureMsgInput:(unsigned long long)arg1 forMhId:(id)arg2;	// IMP=0x0010000000116fe8
- (void)_logURESResultsForInput:(id)arg1 withOutput:(id)arg2 forMhId:(id)arg3;	// IMP=0x0010000000116fe2
- (void)_logURESEndMessageWithScore:(float)arg1 threshold:(float)arg2 assetVersion:(id)arg3 withMhId:(id)arg4;	// IMP=0x0010000000116fdc
- (void)_logLRNNFailMsgForMhId:(id)arg1;	// IMP=0x0010000000116fd6
- (void)_logLatticeRNNResults:(id)arg1 forMhId:(id)arg2;	// IMP=0x0010000000116fd0
- (void)_logFinalMitigationDecisionToSelf:(_Bool)arg1 forMhId:(id)arg2;	// IMP=0x0010000000116fca
- (_Bool)getMitigationDecisionForRCId:(unsigned long long)arg1 forRequestId:(id)arg2;	// IMP=0x0010000000116dcb
- (_Bool)getLastMitigationResultForRequestId:(id)arg1;	// IMP=0x0010000000116cf5
- (void)setASRModelRootDirectory:(id)arg1;	// IMP=0x0010000000116c68
- (void)stopUresProcessingForRequest:(id)arg1;	// IMP=0x0010000000116bdb
- (void)_fetchMitigationConfigForRecordCtx:(id)arg1;	// IMP=0x0010000000116909
- (void)asrStartedForRequestId:(id)arg1 isRecognitionModeClassic:(_Bool)arg2;	// IMP=0x001000000011686a
- (void)startUresRequestWithAudioRecordContext:(id)arg1 forRequestId:(id)arg2 mhId:(id)arg3 voiceTriggerInfo:(id)arg4;	// IMP=0x0010000000116751
- (void)getUresInvocationTypeForRequestId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;	// IMP=0x001000000011669a
- (id)getUresInvocationTypeForRequestId:(id)arg1;	// IMP=0x001000000011659c
- (id)_getRequestCtxForRequestId:(id)arg1;	// IMP=0x0010000000116528
- (void)removeReceiver:(id)arg1;	// IMP=0x0010000000116485
- (void)addReceiver:(id)arg1;	// IMP=0x001000000011638e
- (void)stop;	// IMP=0x0010000000116082
- (void)pause;	// IMP=0x001000000011607c
- (void)start;	// IMP=0x0010000000116076
- (id)initWithSupportsUOD:(_Bool)arg1 supportsHybridUOD:(_Bool)arg2 isMedocFeatureEnabled:(_Bool)arg3;	// IMP=0x0010000000115edb
- (id)init;	// IMP=0x0010000000115e6a

// Remaining properties
@property(nonatomic) __weak CSAttSiriController *attSiriController;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

