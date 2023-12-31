//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVVoiceController, CSAudioFileReader, CSRemoteRecordClient, CSReusableBufferPool, NSHashTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol CSAudioSessionEventProvidingDelegate, OS_dispatch_queue;

@interface CSAudioRecorder : NSObject
{
    AVVoiceController *_voiceController;	// 8 = 0x8
    struct AudioBufferList _interleavedABL;	// 16 = 0x10
    struct AudioBufferList *_pNonInterleavedABL;	// 40 = 0x28
    CSRemoteRecordClient *_remoteRecordClient;	// 48 = 0x30
    NSMutableDictionary *_opusDecoders;	// 56 = 0x38
    CSAudioFileReader *_audioFileReader;	// 64 = 0x40
    unsigned long long _audioFilePathIndex;	// 72 = 0x48
    _Bool _waitingForDidStart;	// 80 = 0x50
    unsigned long long _pendingTwoShotVTToken;	// 88 = 0x58
    CSReusableBufferPool *_audioBufferPool;	// 96 = 0x60
    NSMutableDictionary *_hasSetAlertDictionary;	// 104 = 0x68
    NSObject<OS_dispatch_queue> *_queue;	// 112 = 0x70
    NSObject<OS_dispatch_queue> *_voiceControllerCreationQueue;	// 120 = 0x78
    NSHashTable *_observers;	// 128 = 0x80
    id <CSAudioSessionEventProvidingDelegate> _sessionEventDelegate;	// 136 = 0x88
    NSMutableSet *_remoteAccessoryStreamIdSet;	// 144 = 0x90
}

+ (void)resetDuckSettings;	// IMP=0x0020000000075ebf
+ (void)createSharedAudioSession;	// IMP=0x0010000000075c09
+ (unsigned long long)_convertDeactivateOption:(unsigned long long)arg1;	// IMP=0x0010000000075bfa
- (void).cxx_destruct;	// IMP=0x0020000000073e70
@property(retain, nonatomic) NSMutableSet *remoteAccessoryStreamIdSet; // @synthesize remoteAccessoryStreamIdSet=_remoteAccessoryStreamIdSet;
@property(nonatomic) __weak id <CSAudioSessionEventProvidingDelegate> sessionEventDelegate; // @synthesize sessionEventDelegate=_sessionEventDelegate;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *voiceControllerCreationQueue; // @synthesize voiceControllerCreationQueue=_voiceControllerCreationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (id)_recordModeString:(long long)arg1;	// IMP=0x0010000000073da3
- (id)_fetchRemoteRecordClientWithDeviceId:(id)arg1 streamHandleId:(unsigned long long)arg2;	// IMP=0x0010000000073b02
- (id)_getRecordSettingsWithRequest:(id)arg1;	// IMP=0x0010000000073713
- (void)audioFileReaderDidStopRecording:(id)arg1 forReason:(long long)arg2;	// IMP=0x00100000000736f9
- (void)audioFileReaderDidStartRecording:(id)arg1 successfully:(_Bool)arg2 error:(id)arg3;	// IMP=0x001000000007366c
- (void)audioFileReaderBufferAvailable:(id)arg1 buffer:(id)arg2 atTime:(unsigned long long)arg3;	// IMP=0x00100000000735fb
- (_Bool)_needResetAudioInjectionIndex:(id)arg1;	// IMP=0x0010000000073539
- (_Bool)_hasLocalPendingTwoShot;	// IMP=0x00100000000734ab
- (void)remoteRecordConnectionDisconnected:(id)arg1;	// IMP=0x001000000007344a
- (void)remoteRecordTwoShotDetectedAtTime:(double)arg1;	// IMP=0x0010000000073444
- (void)remoteRecordLPCMBufferAvailable:(id)arg1 streamHandleId:(unsigned long long)arg2;	// IMP=0x0010000000073314
- (void)remoteRecordDidStopRecordingWithWithStreamHandleId:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x00100000000732c5
- (void)remoteRecordDidStartRecordingWithStreamHandleId:(unsigned long long)arg1 error:(id)arg2;	// IMP=0x0010000000073225
- (void)voiceControllerDidSetAudioSessionActive:(id)arg1 isActivated:(_Bool)arg2;	// IMP=0x001000000007314e
- (void)voiceControllerWillSetAudioSessionActive:(id)arg1 willActivate:(_Bool)arg2;	// IMP=0x0010000000073077
- (void)voiceControllerEndRecordInterruption:(id)arg1;	// IMP=0x0010000000072fb7
- (void)voiceControllerBeginRecordInterruption:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000072ea7
- (void)voiceControllerBeginRecordInterruption:(id)arg1;	// IMP=0x0010000000072de7
- (void)voiceControllerEncoderErrorDidOccur:(id)arg1 error:(id)arg2;	// IMP=0x0010000000072c96
- (void)voiceControllerDidFinishAlertPlayback:(id)arg1 ofType:(int)arg2 error:(id)arg3;	// IMP=0x0010000000072b74
- (void)voiceControllerRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(int)arg2;	// IMP=0x0010000000072aa0
- (void)voiceControllerStreamInvalidated:(id)arg1 forStream:(unsigned long long)arg2;	// IMP=0x00100000000729ca
- (void)voiceControllerDidStopRecording:(id)arg1 forStream:(unsigned long long)arg2 forReason:(long long)arg3;	// IMP=0x00100000000728b8
- (void)voiceControllerAudioCallback:(id)arg1 forStream:(unsigned long long)arg2 buffer:(id)arg3;	// IMP=0x0010000000072748
- (void)voiceControllerDidStartRecording:(id)arg1 forStream:(unsigned long long)arg2 successfully:(_Bool)arg3 error:(id)arg4;	// IMP=0x00100000000724d9
- (void)_audioRecorderDidStopRecordingForReason:(long long)arg1 streamHandleID:(unsigned long long)arg2;	// IMP=0x001000000007234f
- (void)_audioRecorderDidStartRecordingSuccessfully:(_Bool)arg1 streamHandleID:(unsigned long long)arg2 error:(id)arg3;	// IMP=0x00100000000721aa
- (id)metrics;	// IMP=0x001000000007215a
- (float)averagePowerForChannel:(unsigned long long)arg1;	// IMP=0x0010000000072151
- (float)peakPowerForChannel:(unsigned long long)arg1;	// IMP=0x0010000000072148
- (void)updateMeters;	// IMP=0x0010000000072142
- (void)setMeteringEnabled:(_Bool)arg1;	// IMP=0x001000000007213c
- (unsigned long long)alertStartTime;	// IMP=0x00100000000720f8
- (_Bool)playAlertSoundForType:(long long)arg1 recordDevideIndicator:(id)arg2;	// IMP=0x0010000000071f96
- (_Bool)playAlertSoundForType:(long long)arg1 overrideMode:(long long)arg2;	// IMP=0x0010000000071e97
- (_Bool)playRecordStartingAlertAndResetEndpointerFromStream:(unsigned long long)arg1 withAlertOverride:(long long)arg2;	// IMP=0x0010000000071e80
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2 force:(_Bool)arg3;	// IMP=0x0010000000071d12
- (_Bool)_audioIsFromRemoteAccessory:(unsigned long long)arg1;	// IMP=0x0010000000071cad
- (void)_stopTrackingRemoteAccessoryStreamId:(unsigned long long)arg1;	// IMP=0x0010000000071be9
- (void)_trackRemoteAccessoryStreamIdIfNeeded:(id)arg1;	// IMP=0x0010000000071a25
- (void)audioDecoderDidDecodePackets:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 timestamp:(unsigned long long)arg5 arrivalTimestampToAudioRecorder:(unsigned long long)arg6 wasBuffered:(_Bool)arg7 receivedNumChannels:(unsigned int)arg8;	// IMP=0x00100000000718e0
- (id)_compensateChannelDataIfNeeded:(id)arg1 receivedNumChannels:(unsigned int)arg2;	// IMP=0x001000000007170a
- (void)_processAudioBuffer:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 arrivalTimestampToAudioRecorder:(unsigned long long)arg3;	// IMP=0x0010000000070ac2
- (void)_processAudioChain:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 remoteVAD:(id)arg3 atTime:(unsigned long long)arg4 arrivalTimestampToAudioRecorder:(unsigned long long)arg5 numberOfChannels:(int)arg6;	// IMP=0x00100000000709e2
- (_Bool)clearListeningMicIndicatorProperty;	// IMP=0x00100000000709da
- (_Bool)setListeningMicIndicatorProperty;	// IMP=0x00100000000709d2
- (_Bool)_shouldUseRemoteBuiltInMic:(id)arg1;	// IMP=0x0010000000070979
- (id)_updateLanguageCodeForRemoteVTEIResult:(id)arg1;	// IMP=0x0010000000070819
- (_Bool)isDuckingSupportedOnCurrentRouteWithStreamHandleID:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0010000000070811
- (id)fetchGibraltarVoiceTriggerInfoWithRecordDeviceIndicator:(id)arg1;	// IMP=0x001000000007062a
- (id)getPlaybackRouteForStreamID:(unsigned long long)arg1;	// IMP=0x00100000000705c9
- (void)configureAlertBehavior:(id)arg1 audioStreamHandleId:(unsigned long long)arg2;	// IMP=0x001000000007044e
- (void)enableMiniDucking:(_Bool)arg1;	// IMP=0x001000000007033a
- (void)setDuckMixWithOthersForStream:(unsigned long long)arg1 duckOthers:(_Bool)arg2 duckToLevelInDB:(id)arg3 mixWithOthers:(_Bool)arg4;	// IMP=0x001000000006ffd4
- (void)enableSmartRoutingConsiderationForStream:(unsigned long long)arg1 enable:(_Bool)arg2;	// IMP=0x001000000006fd38
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000006fb57
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x001000000006f992
- (_Bool)activateAudioSessionWithReason:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000006f5a8
- (_Bool)setRecordMode:(long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000006f399
- (void)_logResourceNotAvailableErrorIfNeeded:(id)arg1;	// IMP=0x001000000006f2ad
- (_Bool)_shouldLogResourceNotAvailableError;	// IMP=0x001000000006f286
- (_Bool)prewarmAudioSessionWithStreamHandleId:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x001000000006f0a5
- (_Bool)isNarrowBandWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x001000000006eeb3
- (id)recordSettingsWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x001000000006ee54
- (float)recordingSampleRateWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x001000000006eca9
- (id)audioDeviceInfoWithStreamHandleId:(unsigned long long)arg1 recordDeviceIndicator:(id)arg2;	// IMP=0x001000000006e898
- (id)recordDeviceInfoWithStreamHandleId:(unsigned long long)arg1 recordDeviceIndicator:(id)arg2;	// IMP=0x001000000006e585
- (id)recordRouteWithRecordDeviceIndicator:(id)arg1;	// IMP=0x001000000006e44d
- (_Bool)isRecordingWithRecordDeviceIndicator:(id)arg1;	// IMP=0x001000000006e3a3
- (_Bool)isSessionCurrentlyActivated;	// IMP=0x001000000006e262
- (_Bool)stopAudioStreamWithRecordDeviceIndicator:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006dde1
- (_Bool)startAudioStreamWithOption:(id)arg1 recordDeviceIndicator:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006d59e
- (_Bool)_startAudioStreamForAudioInjectionWithAVVCContext:(id)arg1;	// IMP=0x001000000006d039
- (_Bool)_shouldInjectAudio;	// IMP=0x001000000006cfee
- (_Bool)prepareAudioStreamRecord:(id)arg1 recordDeviceIndicator:(id)arg2 error:(id *)arg3;	// IMP=0x001000000006c971
- (_Bool)setCurrentContext:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x000000000006c5ab
- (void)setContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000006c120
- (void)setAnnounceCallsEnabled:(_Bool)arg1 withStreamHandleID:(unsigned long long)arg2;	// IMP=0x001000000006c079
- (id)_getVoiceController;	// IMP=0x001000000006bfc0
- (id)_createVoiceControllerWithError:(id *)arg1;	// IMP=0x001000000006bde2
- (void)_destroyVoiceController;	// IMP=0x001000000006bc35
- (void)dealloc;	// IMP=0x001000000006bb6b
- (void)willDestroy;	// IMP=0x001000000006ba42
- (void)userSessionActivateMonitor:(id)arg1 didReceivedUserSessionActiveHasChanged:(_Bool)arg2;	// IMP=0x001000000006b9f3
- (void)setAudioSessionEventDelegate:(id)arg1;	// IMP=0x001000000006b966
- (void)unregisterObserver:(id)arg1;	// IMP=0x001000000006b8d9
- (void)registerObserver:(id)arg1;	// IMP=0x001000000006b84c
- (id)initWithQueue:(id)arg1 error:(id *)arg2;	// IMP=0x001000000006b34d
- (id)init;	// IMP=0x001000000006b2a2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

