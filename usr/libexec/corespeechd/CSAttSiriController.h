//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSAsset, CSAttSiriAFTMNode, CSAttSiriAsrNode, CSAttSiriAttendingAudioSrcNode, CSAttSiriAudioSessionStateClient, CSAttSiriAudioSrcNode, CSAttSiriContConvController, CSAttSiriEndpointerNode, CSAttSiriNLDAClassifierNode, CSAttSiriOSDNode, CSAttSiriRCHandler, CSAttSiriSSRNode, CSAttSiriSpeechDetectionNode, CSAttSiriUresNode, CSAudioRecordContext, CSAudioRouteChangeMonitor, CSAudioStartStreamOption, CSAudioStream, CSConnectionListener, CSOSTransaction, CSSiriClientBehaviorMonitor, CSSiriEnabledMonitor, CSSpeechManager, NSMapTable, NSString;
@protocol OS_dispatch_queue;

@interface CSAttSiriController : NSObject
{
    _Bool _isHearstRouted;	// 8 = 0x8
    _Bool _boronScore;	// 9 = 0x9
    _Bool _pendingActivationProcessing;	// 10 = 0xa
    _Bool _deferredActivation;	// 11 = 0xb
    _Bool _deferredAsrResults;	// 12 = 0xc
    _Bool _shouldSkipAttending;	// 13 = 0xd
    CSConnectionListener *_attSiriSvcListener;	// 16 = 0x10
    CSAttSiriRCHandler *_rcHandler;	// 24 = 0x18
    NSMapTable *_nodesCache;	// 32 = 0x20
    CSAttSiriEndpointerNode *_endpointerNode;	// 40 = 0x28
    CSAttSiriOSDNode *_osdNode;	// 48 = 0x30
    CSAttSiriAsrNode *_asrNode;	// 56 = 0x38
    CSAttSiriUresNode *_uresNode;	// 64 = 0x40
    CSAttSiriAudioSrcNode *_audioSrcNode;	// 72 = 0x48
    CSAttSiriSSRNode *_ssrNode;	// 80 = 0x50
    NSObject<OS_dispatch_queue> *_queue;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_mitigationAssetFetchQueue;	// 96 = 0x60
    CSAudioRecordContext *_audioRecordContext;	// 104 = 0x68
    CSAudioStartStreamOption *_siriClientAudioStartStreamOption;	// 112 = 0x70
    CSOSTransaction *_attSiriTransaction;	// 120 = 0x78
    NSString *_requestMHUUID;	// 128 = 0x80
    CSSiriClientBehaviorMonitor *_siriClientBehaviorMonitor;	// 136 = 0x88
    CSAudioStream *_siriClientStream;	// 144 = 0x90
    CSAsset *_mitigationAsset;	// 152 = 0x98
    CSAsset *_vtAsset;	// 160 = 0xa0
    CSSpeechManager *_speechManager;	// 168 = 0xa8
    CSSiriEnabledMonitor *_siriEnabledMonitor;	// 176 = 0xb0
    CSAttSiriAFTMNode *_aFTMNode;	// 184 = 0xb8
    CSAttSiriNLDAClassifierNode *_nldaClassifierNode;	// 192 = 0xc0
    CSAttSiriSpeechDetectionNode *_speechDetectionNode;	// 200 = 0xc8
    CSAudioRouteChangeMonitor *_audioRouteChangeMonitor;	// 208 = 0xd0
    CSAttSiriContConvController *_ccController;	// 216 = 0xd8
    CSAttSiriAttendingAudioSrcNode *_attendingAudioNode;	// 224 = 0xe0
    unsigned long long _activationStartSampleId;	// 232 = 0xe8
    CSAttSiriAudioSessionStateClient *_siriStateClient;	// 240 = 0xf0
}

- (void).cxx_destruct;	// IMP=0x00200000000f93c2
@property(retain, nonatomic) CSAttSiriAudioSessionStateClient *siriStateClient; // @synthesize siriStateClient=_siriStateClient;
@property(nonatomic) _Bool shouldSkipAttending; // @synthesize shouldSkipAttending=_shouldSkipAttending;
@property(nonatomic) _Bool deferredAsrResults; // @synthesize deferredAsrResults=_deferredAsrResults;
@property(nonatomic) _Bool deferredActivation; // @synthesize deferredActivation=_deferredActivation;
@property(nonatomic) unsigned long long activationStartSampleId; // @synthesize activationStartSampleId=_activationStartSampleId;
@property(nonatomic) _Bool pendingActivationProcessing; // @synthesize pendingActivationProcessing=_pendingActivationProcessing;
@property(nonatomic) _Bool boronScore; // @synthesize boronScore=_boronScore;
@property(retain, nonatomic) CSAttSiriAttendingAudioSrcNode *attendingAudioNode; // @synthesize attendingAudioNode=_attendingAudioNode;
@property(retain, nonatomic) CSAttSiriContConvController *ccController; // @synthesize ccController=_ccController;
@property(nonatomic) _Bool isHearstRouted; // @synthesize isHearstRouted=_isHearstRouted;
@property(retain, nonatomic) CSAudioRouteChangeMonitor *audioRouteChangeMonitor; // @synthesize audioRouteChangeMonitor=_audioRouteChangeMonitor;
@property(retain, nonatomic) CSAttSiriSpeechDetectionNode *speechDetectionNode; // @synthesize speechDetectionNode=_speechDetectionNode;
@property(retain, nonatomic) CSAttSiriNLDAClassifierNode *nldaClassifierNode; // @synthesize nldaClassifierNode=_nldaClassifierNode;
@property(retain, nonatomic) CSAttSiriAFTMNode *aFTMNode; // @synthesize aFTMNode=_aFTMNode;
@property(retain, nonatomic) CSSiriEnabledMonitor *siriEnabledMonitor; // @synthesize siriEnabledMonitor=_siriEnabledMonitor;
@property(retain, nonatomic) CSSpeechManager *speechManager; // @synthesize speechManager=_speechManager;
@property(retain, nonatomic) CSAsset *vtAsset; // @synthesize vtAsset=_vtAsset;
@property(retain, nonatomic) CSAsset *mitigationAsset; // @synthesize mitigationAsset=_mitigationAsset;
@property(retain, nonatomic) CSAudioStream *siriClientStream; // @synthesize siriClientStream=_siriClientStream;
- (void);	// IMP=0x00100000000f919c
@property(retain, nonatomic) CSSiriClientBehaviorMonitor *siriClientBehaviorMonitor; // @synthesize siriClientBehaviorMonitor=_siriClientBehaviorMonitor;
@property(retain, nonatomic) NSString *requestMHUUID; // @synthesize requestMHUUID=_requestMHUUID;
@property(retain, nonatomic) CSOSTransaction *attSiriTransaction; // @synthesize attSiriTransaction=_attSiriTransaction;
@property(retain, nonatomic) CSAudioStartStreamOption *siriClientAudioStartStreamOption; // @synthesize siriClientAudioStartStreamOption=_siriClientAudioStartStreamOption;
@property(retain, nonatomic) CSAudioRecordContext *audioRecordContext; // @synthesize audioRecordContext=_audioRecordContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *mitigationAssetFetchQueue; // @synthesize mitigationAssetFetchQueue=_mitigationAssetFetchQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) CSAttSiriSSRNode *ssrNode; // @synthesize ssrNode=_ssrNode;
@property(retain, nonatomic) CSAttSiriAudioSrcNode *audioSrcNode; // @synthesize audioSrcNode=_audioSrcNode;
@property(retain, nonatomic) CSAttSiriUresNode *uresNode; // @synthesize uresNode=_uresNode;
@property(retain, nonatomic) CSAttSiriAsrNode *asrNode; // @synthesize asrNode=_asrNode;
@property(retain, nonatomic) CSAttSiriOSDNode *osdNode; // @synthesize osdNode=_osdNode;
@property(retain, nonatomic) CSAttSiriEndpointerNode *endpointerNode; // @synthesize endpointerNode=_endpointerNode;
@property(retain, nonatomic) NSMapTable *nodesCache; // @synthesize nodesCache=_nodesCache;
@property(retain, nonatomic) CSAttSiriRCHandler *rcHandler; // @synthesize rcHandler=_rcHandler;
@property(retain, nonatomic) CSConnectionListener *attSiriSvcListener; // @synthesize attSiriSvcListener=_attSiriSvcListener;
- (void)CSPhoneCallStateMonitor:(id)arg1 didRecievePhoneCallStateChange:(unsigned long long)arg2;	// IMP=0x00100000000f8ff1
- (void)_receivedHearstRoutedEvent:(_Bool)arg1;	// IMP=0x00100000000f8eed
- (void)CSAudioRouteChangeMonitor:(id)arg1 didReceiveAudioRouteChangeEvent:(long long)arg2;	// IMP=0x00100000000f8e9e
- (id)getRequestMHUUID;	// IMP=0x00100000000f8de5
- (_Bool)getPendingActivationStatus;	// IMP=0x00100000000f8cd1
- (void)_resetAttendingState;	// IMP=0x00100000000f8ae9
- (void)_startProcessingContinuousConversationRequest:(unsigned long long)arg1;	// IMP=0x00100000000f8893
- (void)_startAudioStreamForContinuousConversation:(id)arg1 withStartStreamOption:(id)arg2;	// IMP=0x00100000000f8771
- (void)_setPendingActivationStatus:(_Bool)arg1;	// IMP=0x00100000000f86d3
- (void)_triggerSiriActivation;	// IMP=0x00100000000f8570
- (void)startSpeechProcessing:(unsigned long long)arg1;	// IMP=0x00100000000f8521
- (id)_startStreamOptionWithMachAbsTime:(unsigned long long)arg1;	// IMP=0x00100000000f849c
- (id)_startStreamOption;	// IMP=0x00100000000f8475
- (void)_handleCCTriggeredRequestStop;	// IMP=0x00100000000f837f
- (void)_handleCCTriggeredRequestStart;	// IMP=0x00100000000f825e
- (void)handleEndOfAttendingForRequestId:(id)arg1;	// IMP=0x00100000000f81d1
- (void)handleOrbTransition;	// IMP=0x00100000000f818d
- (void)gazeEstimates:(struct CGPoint)arg1 landmarks:(id)arg2;	// IMP=0x00100000000f80c3
- (void)gazeTrackerFaceTrackingMetaDataUpdate:(id)arg1 atMachAbsTime:(unsigned long long)arg2;	// IMP=0x00100000000f80aa
- (void)updateSiriOrbLocation:(struct CGRect)arg1;	// IMP=0x00100000000f8091
- (void)siriRequestProcessingCompleted;	// IMP=0x00100000000f808b
- (void)stopAttendingWithContext:(id)arg1;	// IMP=0x00100000000f7f7b
- (void)startAttendingWithContext:(id)arg1;	// IMP=0x00100000000f7e6b
- (void)attSiriAudioSrcNodeDidStopUnexpectedly:(id)arg1;	// IMP=0x00100000000f7e20
- (void)attSiriAttendingAudioSrcNodeDidStopUnexpectedly:(id)arg1;	// IMP=0x00100000000f7dd5
- (void)_releaseAttSiriTransactionIfNeeded;	// IMP=0x00100000000f7d20
- (void)_holdAttSiriTransactionIfNeeded;	// IMP=0x00100000000f7cd2
- (void)_handleStopProcessing;	// IMP=0x00100000000f79cd
- (void)_handleStartProcessingWithRecordContext:(id)arg1 withAudioStartStreamOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000f73f6
- (void)_detachAttendingStreamAndAttachSiriClientStream;	// IMP=0x00100000000f732b
- (void)_detachSiriClientStreamAndAttachAttendingStream;	// IMP=0x00100000000f725d
- (void)_prepareAttendingAudioSrcNodeWithStreamRequest:(id)arg1 audioProviderUUID:(id)arg2;	// IMP=0x00100000000f705f
- (void)_setupAttendingAudioSrcNodeWithStreamRequest:(id)arg1 audioProviderUUID:(id)arg2;	// IMP=0x00100000000f6e4f
- (void)_setupAudioSrcNodeWithSiriClientStream:(id)arg1;	// IMP=0x00100000000f6ca3
- (void)_fetchRequiredAssets;	// IMP=0x00100000000f6c5e
- (_Bool)_shouldFetchMitigationAssets;	// IMP=0x00100000000f6c47
- (void)_fetchVoiceTriggerAssets;	// IMP=0x00100000000f6bc0
- (void)_fetchMitigationAssets;	// IMP=0x00100000000f6b75
- (void)_forceBuildGraph:(_Bool)arg1;	// IMP=0x00100000000f67ab
- (void)_reconfigureRequiredNodes:(id)arg1 enforceAttendingAudioNode:(_Bool)arg2;	// IMP=0x00100000000f61e2
- (void)_tearDownBuildGraph:(id)arg1;	// IMP=0x00100000000f6027
- (void)notifySiriSessionStateChange:(_Bool)arg1;	// IMP=0x00100000000f5fc6
- (void)attSiriNode:(id)arg1 reportedBoronScore:(_Bool)arg2;	// IMP=0x00100000000f5f78
- (void)attSiriNodeDidNotDetectSpeechWithTimeout;	// IMP=0x00100000000f5f2d
- (void)attSiriNode:(id)arg1 didDetectSpeechWithTriggerInfo:(id)arg2;	// IMP=0x00100000000f5ea0
- (void)attSiriNode:(id)arg1 didDetectStartpointAtTime:(double)arg2;	// IMP=0x00100000000f5e9a
- (void)attSiriNode:(id)arg1 didDetectHardEndpointAtTime:(double)arg2 withMetrics:(id)arg3 usesAutomaticEndPointing:(_Bool)arg4;	// IMP=0x00100000000f5e4f
- (void)siriMitigator:(id)arg1 mitigationDecision:(unsigned long long)arg2;	// IMP=0x00100000000f5da2
- (void)CSSiriEnabledMonitor:(id)arg1 didReceiveEnabled:(_Bool)arg2;	// IMP=0x00100000000f5cc8
- (void)siriClientBehaviorMonitor:(id)arg1 preparedSiriClientAudioStream:(id)arg2 successfully:(_Bool)arg3;	// IMP=0x00100000000f5c28
- (void)siriClientBehaviorMonitor:(id)arg1 fetchedSiriClientAudioStream:(id)arg2 successfully:(_Bool)arg3;	// IMP=0x00100000000f5b88
- (void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3;	// IMP=0x00100000000f5b3d
- (void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 reason:(unsigned long long)arg3;	// IMP=0x00100000000f5aee
- (void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(_Bool)arg3 option:(id)arg4 withEventUUID:(id)arg5;	// IMP=0x00100000000f5a01
- (void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3;	// IMP=0x00100000000f58ba
- (_Bool)isCurrentRequestCCTriggered;	// IMP=0x00100000000f57be
- (_Bool)isDeferredActivationEnabled;	// IMP=0x00100000000f5730
- (void)stop;	// IMP=0x00100000000f572a
- (void)pause;	// IMP=0x00100000000f5724
- (void)start;	// IMP=0x00100000000f56d9
- (id)getNodeOfType:(unsigned long long)arg1;	// IMP=0x00100000000f561c
- (id)initWithEndpointerNode:(id)arg1 osdNode:(id)arg2 ssrNode:(id)arg3 asrNode:(id)arg4 uresNode:(id)arg5 needsSSRNode:(_Bool)arg6 aFtmNode:(id)arg7 speechDetectionNode:(id)arg8 orbTransitionNode:(id)arg9 ccController:(id)arg10 isContinuousConverationEnabled:(_Bool)arg11 speechManager:(id)arg12 siriEnabledMonitor:(id)arg13 siriClientBehaviorMonitor:(id)arg14 rcHandler:(id)arg15 supportsAcousticProgressiveChecker:(_Bool)arg16 supportsUnderstandingOnDevice:(_Bool)arg17 requireASROnDevice:(_Bool)arg18 supportsHybridUnderstandingOnDevice:(_Bool)arg19;	// IMP=0x00100000000f4c9d
- (id)init;	// IMP=0x00100000000f4b58

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

