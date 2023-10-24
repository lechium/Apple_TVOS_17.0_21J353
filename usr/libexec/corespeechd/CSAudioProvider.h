//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CSADPPreventStandbyAssertion, CSAudioCircularBuffer, CSAudioPreprocessor, CSAudioRecordContext, CSAudioRecordDeviceIndicator, CSAudioRecorder, CSAudioTimeConverter, CSMicUsageReporter, CSOSTransaction, CSPhoneCallStateMonitor, CSStateCapture, MISSING_TYPE, NSHashTable, NSMutableArray, NSMutableDictionary, NSString, NSUUID;
@protocol CSAudioAlertProvidingDelegate, CSAudioProviderDelegate, CSAudioSessionProvidingDelegate, OS_dispatch_group, OS_dispatch_queue, OS_dispatch_source;

@interface CSAudioProvider : NSObject
{
    _Bool _audioSystemRecovering;	// 8 = 0x8
    _Bool _waitingForAlertFinish;	// 9 = 0x9
    _Bool _currentSessionShouldDuckOnBuiltInSpeaker;	// 10 = 0xa
    NSString *_UUID;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_recordQueue;	// 24 = 0x18
    NSObject<OS_dispatch_queue> *_loggingQueue;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_streamHandleQueue;	// 40 = 0x28
    CSAudioRecorder *_audioRecorder;	// 48 = 0x30
    unsigned long long _streamState;	// 56 = 0x38
    NSHashTable *_startPendingStreams;	// 64 = 0x40
    NSHashTable *_startPendingOnStoppingStreams;	// 72 = 0x48
    NSHashTable *_alertPlaybackFinishWaitingStreams;	// 80 = 0x50
    MISSING_TYPE *_streams;	// 88 = 0x58
    NSHashTable *_stopPendingStreams;	// 96 = 0x60
    NSMutableArray *_pendingStartCompletions;	// 104 = 0x68
    NSMutableArray *_alertPlaybackFinishWaitingCompletions;	// 112 = 0x70
    NSMutableArray *_pendingStopCompletions;	// 120 = 0x78
    NSMutableDictionary *_startPendingOnStoppingStreamToCompletionDict;	// 128 = 0x80
    id <CSAudioProviderDelegate> _providerDelegate;	// 136 = 0x88
    id <CSAudioSessionProvidingDelegate> _sessionDelegate;	// 144 = 0x90
    NSMutableArray *_streamHolders;	// 152 = 0x98
    NSHashTable *_historicalBufferRequestStreams;	// 160 = 0xa0
    CSAudioCircularBuffer *_circularBuffer;	// 168 = 0xa8
    id <CSAudioAlertProvidingDelegate> _alertDelegate;	// 176 = 0xb0
    CSAudioRecordContext *_lastAudioRecorderContext;	// 184 = 0xb8
    CSAudioPreprocessor *_audioPreprocessor;	// 192 = 0xc0
    CSOSTransaction *_recordingTransaction;	// 200 = 0xc8
    NSObject<OS_dispatch_group> *_recordingWillStartGroup;	// 208 = 0xd0
    unsigned long long _audioStreamHandleId;	// 216 = 0xd8
    NSUUID *_alertPlaybackFinishTimeoutToken;	// 224 = 0xe0
    NSUUID *_startRecordingWatchDogToken;	// 232 = 0xe8
    NSUUID *_stopRecordingWatchDogToken;	// 240 = 0xf0
    NSObject<OS_dispatch_source> *_audioPacketWatchdog;	// 248 = 0xf8
    unsigned long long _circularBufferStartHostTime;	// 256 = 0x100
    unsigned long long _circularBufferStartSampleCount;	// 264 = 0x108
    CSAudioTimeConverter *_audioTimeConverter;	// 272 = 0x110
    unsigned long long _estimatedStartHostTime;	// 280 = 0x118
    long long _audioStreamType;	// 288 = 0x120
    CSAudioRecordDeviceIndicator *_recordDeviceIndicator;	// 296 = 0x128
    CSMicUsageReporter *_micUsageReporter;	// 304 = 0x130
    unsigned long long _audioPacketDeliveryCount;	// 312 = 0x138
    CSADPPreventStandbyAssertion *_adpAssertion;	// 320 = 0x140
    CSPhoneCallStateMonitor *_phoneCallStateMonitor;	// 328 = 0x148
    unsigned long long _phoneCallState;	// 336 = 0x150
    NSMutableDictionary *_recordModeLocks;	// 344 = 0x158
    NSMutableDictionary *_listeningMicIndicatorLocks;	// 352 = 0x160
    CSStateCapture *_stateCapture;	// 360 = 0x168
}

- (void).cxx_destruct;	// IMP=0x002000000005863b
@property(retain, nonatomic) CSStateCapture *stateCapture; // @synthesize stateCapture=_stateCapture;
@property(retain, nonatomic) NSMutableDictionary *listeningMicIndicatorLocks; // @synthesize listeningMicIndicatorLocks=_listeningMicIndicatorLocks;
@property(retain, nonatomic) NSMutableDictionary *recordModeLocks; // @synthesize recordModeLocks=_recordModeLocks;
@property(nonatomic) _Bool currentSessionShouldDuckOnBuiltInSpeaker; // @synthesize currentSessionShouldDuckOnBuiltInSpeaker=_currentSessionShouldDuckOnBuiltInSpeaker;
@property(nonatomic) unsigned long long phoneCallState; // @synthesize phoneCallState=_phoneCallState;
@property(retain, nonatomic) CSPhoneCallStateMonitor *phoneCallStateMonitor; // @synthesize phoneCallStateMonitor=_phoneCallStateMonitor;
@property(retain, nonatomic) CSADPPreventStandbyAssertion *adpAssertion; // @synthesize adpAssertion=_adpAssertion;
@property(nonatomic) unsigned long long audioPacketDeliveryCount; // @synthesize audioPacketDeliveryCount=_audioPacketDeliveryCount;
@property(retain, nonatomic) CSMicUsageReporter *micUsageReporter; // @synthesize micUsageReporter=_micUsageReporter;
@property(retain, nonatomic) CSAudioRecordDeviceIndicator *recordDeviceIndicator; // @synthesize recordDeviceIndicator=_recordDeviceIndicator;
@property(nonatomic) long long audioStreamType; // @synthesize audioStreamType=_audioStreamType;
@property(nonatomic) unsigned long long estimatedStartHostTime; // @synthesize estimatedStartHostTime=_estimatedStartHostTime;
@property(retain, nonatomic) CSAudioTimeConverter *audioTimeConverter; // @synthesize audioTimeConverter=_audioTimeConverter;
@property(nonatomic) unsigned long long circularBufferStartSampleCount; // @synthesize circularBufferStartSampleCount=_circularBufferStartSampleCount;
@property(nonatomic) unsigned long long circularBufferStartHostTime; // @synthesize circularBufferStartHostTime=_circularBufferStartHostTime;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *audioPacketWatchdog; // @synthesize audioPacketWatchdog=_audioPacketWatchdog;
@property(retain, nonatomic) NSUUID *stopRecordingWatchDogToken; // @synthesize stopRecordingWatchDogToken=_stopRecordingWatchDogToken;
@property(retain, nonatomic) NSUUID *startRecordingWatchDogToken; // @synthesize startRecordingWatchDogToken=_startRecordingWatchDogToken;
@property(retain, nonatomic) NSUUID *alertPlaybackFinishTimeoutToken; // @synthesize alertPlaybackFinishTimeoutToken=_alertPlaybackFinishTimeoutToken;
@property(nonatomic) unsigned long long audioStreamHandleId; // @synthesize audioStreamHandleId=_audioStreamHandleId;
@property(nonatomic) _Bool waitingForAlertFinish; // @synthesize waitingForAlertFinish=_waitingForAlertFinish;
@property(retain, nonatomic) NSObject<OS_dispatch_group> *recordingWillStartGroup; // @synthesize recordingWillStartGroup=_recordingWillStartGroup;
@property(retain, nonatomic) CSOSTransaction *recordingTransaction; // @synthesize recordingTransaction=_recordingTransaction;
@property(retain, nonatomic) CSAudioPreprocessor *audioPreprocessor; // @synthesize audioPreprocessor=_audioPreprocessor;
@property(nonatomic) _Bool audioSystemRecovering; // @synthesize audioSystemRecovering=_audioSystemRecovering;
@property(retain, nonatomic) CSAudioRecordContext *lastAudioRecorderContext; // @synthesize lastAudioRecorderContext=_lastAudioRecorderContext;
@property(nonatomic) __weak id <CSAudioAlertProvidingDelegate> alertDelegate; // @synthesize alertDelegate=_alertDelegate;
@property(retain, nonatomic) CSAudioCircularBuffer *circularBuffer; // @synthesize circularBuffer=_circularBuffer;
@property(retain, nonatomic) NSHashTable *historicalBufferRequestStreams; // @synthesize historicalBufferRequestStreams=_historicalBufferRequestStreams;
@property(retain, nonatomic) NSMutableArray *streamHolders; // @synthesize streamHolders=_streamHolders;
@property(nonatomic) __weak id <CSAudioSessionProvidingDelegate> sessionDelegate; // @synthesize sessionDelegate=_sessionDelegate;
@property(nonatomic) __weak id <CSAudioProviderDelegate> providerDelegate; // @synthesize providerDelegate=_providerDelegate;
@property(retain, nonatomic) NSMutableDictionary *startPendingOnStoppingStreamToCompletionDict; // @synthesize startPendingOnStoppingStreamToCompletionDict=_startPendingOnStoppingStreamToCompletionDict;
@property(retain, nonatomic) NSMutableArray *pendingStopCompletions; // @synthesize pendingStopCompletions=_pendingStopCompletions;
@property(retain, nonatomic) NSMutableArray *alertPlaybackFinishWaitingCompletions; // @synthesize alertPlaybackFinishWaitingCompletions=_alertPlaybackFinishWaitingCompletions;
@property(retain, nonatomic) NSMutableArray *pendingStartCompletions; // @synthesize pendingStartCompletions=_pendingStartCompletions;
@property(retain, nonatomic) NSHashTable *stopPendingStreams; // @synthesize stopPendingStreams=_stopPendingStreams;
@property(retain, nonatomic) NSHashTable *streams; // @synthesize streams=_streams;
@property(retain, nonatomic) NSHashTable *alertPlaybackFinishWaitingStreams; // @synthesize alertPlaybackFinishWaitingStreams=_alertPlaybackFinishWaitingStreams;
@property(retain, nonatomic) NSHashTable *startPendingOnStoppingStreams; // @synthesize startPendingOnStoppingStreams=_startPendingOnStoppingStreams;
@property(retain, nonatomic) NSHashTable *startPendingStreams; // @synthesize startPendingStreams=_startPendingStreams;
@property(nonatomic) unsigned long long streamState; // @synthesize streamState=_streamState;
@property(retain, nonatomic) CSAudioRecorder *audioRecorder; // @synthesize audioRecorder=_audioRecorder;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *streamHandleQueue; // @synthesize streamHandleQueue=_streamHandleQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *loggingQueue; // @synthesize loggingQueue=_loggingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *recordQueue; // @synthesize recordQueue=_recordQueue;
@property(readonly, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (float)circularBufferInputRecordingDuration;	// IMP=0x001000000005805b
- (int)circularBufferNumInputChannel;	// IMP=0x0010000000057fca
- (void)CSPhoneCallStateMonitor:(id)arg1 didRecievePhoneCallStateChange:(unsigned long long)arg2;	// IMP=0x0010000000057f7b
- (void)_updateRemoteDeviceIdFromAVVCIfNeeded;	// IMP=0x0010000000057d01
- (_Bool)_shouldHandleStartPendingOnStopping:(unsigned long long)arg1 withStopReason:(long long)arg2;	// IMP=0x0010000000057a7d
- (void)_clearDidStopRecordingDelegateWatchDog;	// IMP=0x00100000000579cd
- (void)_scheduleDidStopRecordingDelegateWatchDog:(id)arg1;	// IMP=0x0010000000057847
- (void)_scheduleDidStopRecordingDelegateWatchDog;	// IMP=0x00100000000576b4
- (void)_clearDidStartRecordingDelegateWatchDog;	// IMP=0x0010000000057604
- (void)_schduleDidStartRecordingDelegateWatchDogWithToken:(id)arg1;	// IMP=0x001000000005743e
- (void)_scheduleDidStartRecordingDelegateWatchDog;	// IMP=0x00100000000572ab
- (void)_onAudioPacketWatchdogFire;	// IMP=0x001000000005718d
- (void)_cancelAudioPacketWatchDog;	// IMP=0x001000000005714e
- (void)_scheduleAudioPacketWatchDog;	// IMP=0x0010000000057049
- (void)_holdRecordingExceptionIfNeeded:(_Bool)arg1;	// IMP=0x0010000000056f35
- (void)_releaseRecordingTransactionIfNeeded;	// IMP=0x0010000000056d14
- (void)_holdRecordingTransactionIfNeeded;	// IMP=0x0010000000056c6d
- (id)_streamStateName:(unsigned long long)arg1;	// IMP=0x0010000000056a92
- (void)_handleAudioSystemFailure;	// IMP=0x0010000000056904
- (void)CSAudioServerCrashMonitorDidReceiveServerRestart:(id)arg1;	// IMP=0x00100000000567f4
- (void)CSAudioServerCrashMonitorDidReceiveServerCrash:(id)arg1;	// IMP=0x00100000000566d5
- (void)audioRecorderDisconnected:(id)arg1;	// IMP=0x00100000000565b6
- (void)audioRecorder:(id)arg1 didSetAudioSessionActive:(_Bool)arg2;	// IMP=0x0010000000056511
- (void)audioRecorder:(id)arg1 willSetAudioSessionActive:(_Bool)arg2;	// IMP=0x001000000005646c
- (void)audioRecorderEndRecordInterruption:(id)arg1;	// IMP=0x00100000000563cf
- (void)audioRecorderBeginRecordInterruption:(id)arg1 withContext:(id)arg2;	// IMP=0x0010000000056325
- (void)audioRecorderBeginRecordInterruption:(id)arg1;	// IMP=0x0010000000056288
- (void)audioRecorderBuiltInAudioStreamInvalidated:(id)arg1 error:(id)arg2;	// IMP=0x00100000000561fb
- (void)notifyProviderContextChanged;	// IMP=0x00100000000561b0
- (void)audioRecorderDidFinishAlertPlayback:(id)arg1 ofType:(long long)arg2 error:(id)arg3;	// IMP=0x001000000005610c
- (void)_didReceiveFinishStartAlertPlaybackAt:(unsigned long long)arg1;	// IMP=0x0010000000055e40
- (void)_scheduleAlertFinishTimeout:(double)arg1;	// IMP=0x0010000000055ce9
- (void)audioRecorderRecordHardwareConfigurationDidChange:(id)arg1 toConfiguration:(long long)arg2;	// IMP=0x0010000000055c9a
- (_Bool)isNarrowBand;	// IMP=0x0010000000055c0c
- (_Bool)isRecording;	// IMP=0x0010000000055b7e
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3;	// IMP=0x0010000000055ae0
- (void)_forwardAudioChunkForTV:(id)arg1 toStream:(id)arg2;	// IMP=0x001000000005593a
- (void)audioRecorderBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5 arrivalTimestampToAudioRecorder:(unsigned long long)arg6 numberOfChannels:(int)arg7;	// IMP=0x00100000000555a5
- (void)_deliverPostprocessAudioChunk:(id)arg1 toStream:(id)arg2 lastForwardedSampleCount:(unsigned long long)arg3;	// IMP=0x00100000000554e8
- (void)_forwardAudioChunk:(id)arg1 toStream:(id)arg2;	// IMP=0x0010000000055269
- (void)_processAudioBuffer:(id)arg1 remoteVAD:(id)arg2 atTime:(unsigned long long)arg3 arrivalTimestampToAudioRecorder:(unsigned long long)arg4 numberOfChannels:(int)arg5;	// IMP=0x0010000000054d80
- (void)_deliverHistoricalAudioToStreamsWithRemoteVAD:(id)arg1;	// IMP=0x0010000000054a24
- (void)_fetchHistoricalAudioAndForwardToStream:(id)arg1 remoteVAD:(id)arg2;	// IMP=0x0010000000054100
- (void)audioRecorderWillBeDestroyed:(id)arg1;	// IMP=0x00100000000540b5
- (void)_handleAudioRecorderStreamHandleIdInvalidated:(unsigned long long)arg1;	// IMP=0x0010000000053f0d
- (void)audioRecorderStreamHandleIdInvalidated:(unsigned long long)arg1;	// IMP=0x0010000000053ebe
- (void)audioRecorderDidStopRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(long long)arg3;	// IMP=0x0010000000053e6b
- (void)audioRecorderDidStartRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(_Bool)arg3 error:(id)arg4;	// IMP=0x0010000000053dc9
- (void)audioPreprocessor:(id)arg1 hasAvailableBuffer:(id)arg2 atTime:(unsigned long long)arg3 arrivalTimestampToAudioRecorder:(unsigned long long)arg4 numberOfChannels:(int)arg5;	// IMP=0x0010000000053d20
- (_Bool)_shouldStopRecording;	// IMP=0x0010000000053ae2
- (void)triggerInfoForContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000053a2b
- (float)averagePowerForChannel:(unsigned long long)arg1;	// IMP=0x00100000000539d4
- (float)peakPowerForChannel:(unsigned long long)arg1;	// IMP=0x001000000005397d
- (void)updateMeters;	// IMP=0x0010000000053940
- (void)setMeteringEnabled:(_Bool)arg1;	// IMP=0x00100000000538f6
- (id)audioMetric;	// IMP=0x00100000000538a6
- (void)configureAlertBehavior:(id)arg1;	// IMP=0x00100000000538a0
- (unsigned long long)alertStartTime;	// IMP=0x0010000000053706
- (_Bool)playRecordStartingAlertAndResetEndpointerWithAlertOverride:(long long)arg1;	// IMP=0x001000000005350a
- (_Bool)_didPlayStartAlertSoundForSiri:(id)arg1 audioStream:(id)arg2;	// IMP=0x00100000000534f9
- (_Bool)playAlertSoundForType:(long long)arg1;	// IMP=0x001000000005334b
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2 force:(_Bool)arg3;	// IMP=0x0000000000053177
- (void)setAudioAlertDelegate:(id)arg1;	// IMP=0x00100000000530ea
- (void)setAnnounceCallsEnabled:(_Bool)arg1 withStreamHandleID:(unsigned long long)arg2;	// IMP=0x0010000000053097
- (void)enableMiniDucking:(_Bool)arg1;	// IMP=0x0010000000053049
- (void)setDuckOthersOption:(_Bool)arg1;	// IMP=0x0010000000052f6f
- (void)enableSmartRoutingConsideration:(_Bool)arg1;	// IMP=0x0010000000052f21
- (_Bool)_deactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0010000000052c09
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x0010000000052a00
- (_Bool)_isDuckingOnSpeakerOutputSupportedWithCurrentRoute;	// IMP=0x0010000000052886
- (_Bool)_shouldDuckOnBuiltInSpeaker;	// IMP=0x0010000000052677
- (_Bool)_activateAudioSessionWithReason:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00100000000522ad
- (_Bool)activateAudioSessionWithReason:(unsigned long long)arg1 dynamicAttribute:(unsigned long long)arg2 bundleID:(id)arg3 error:(id *)arg4;	// IMP=0x001000000005207b
- (_Bool)prewarmAudioSessionWithError:(id *)arg1;	// IMP=0x0010000000051e77
- (void)setAudioSessionDelegate:(id)arg1;	// IMP=0x0010000000051dea
- (id)playbackRoute;	// IMP=0x0010000000051d31
- (id)recordSettings;	// IMP=0x0010000000051c78
- (id)audioDeviceInfo;	// IMP=0x0010000000051bbf
- (id)recordDeviceInfo;	// IMP=0x0010000000051b06
- (id)recordRoute;	// IMP=0x0010000000051a4d
- (void)cancelAudioStreamHold:(id)arg1;	// IMP=0x00100000000518be
- (void)_cancelAudioStreamHold:(id)arg1;	// IMP=0x0010000000051520
- (void)_didFireStreamHolderTimeout:(id)arg1;	// IMP=0x00100000000513e2
- (void)_holdAudioStreamWithHolder:(id)arg1 option:(id)arg2;	// IMP=0x0010000000051100
- (id)holdAudioStreamWithDescription:(id)arg1 option:(id)arg2;	// IMP=0x0010000000050ea1
- (void)_saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(id)arg3;	// IMP=0x0010000000050db4
- (void)saveRecordingBufferFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 toURL:(id)arg3;	// IMP=0x0010000000050d12
- (void)saveRecordingBufferToEndFrom:(unsigned long long)arg1 toURL:(id)arg2;	// IMP=0x0010000000050c72
- (id)_audioChunkFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 channelIdx:(unsigned long long)arg3;	// IMP=0x0010000000050c1b
- (id)_audioChunkFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;	// IMP=0x0010000000050bca
- (id)audioChunkToEndFrom:(unsigned long long)arg1 channelIdx:(unsigned long long)arg2;	// IMP=0x0010000000050b08
- (id)audioChunkToEndFrom:(unsigned long long)arg1;	// IMP=0x0010000000050a4b
- (id)audioChunkFrom:(unsigned long long)arg1 to:(unsigned long long)arg2 channelIdx:(unsigned long long)arg3;	// IMP=0x001000000005097c
- (id)audioChunkFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;	// IMP=0x00100000000508ba
- (void)_stopAudioStream:(id)arg1 option:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000506f8
- (void)stopAudioStream:(id)arg1 option:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000050613
- (void)_handleDidStopAudioStreamWithReason:(long long)arg1;	// IMP=0x0010000000050092
- (void)_postEpilogueAudioStream;	// IMP=0x0010000000050035
- (void)_preEpilogueAudioStream;	// IMP=0x001000000004ffea
- (void)_handleDidStartAudioStreamWithResult:(_Bool)arg1 error:(id)arg2;	// IMP=0x001000000004fd09
- (void)_resetCircularBufferStartTime;	// IMP=0x001000000004fcd7
- (void)_switchToListeningMode;	// IMP=0x001000000004fc3f
- (void)_switchToRecordingMode;	// IMP=0x001000000004fbd5
- (void)_forceReleaseAllRecordModeLocks;	// IMP=0x001000000004fb7d
- (void)_forceReleaseRecordModeLockFrom:(unsigned long long)arg1;	// IMP=0x001000000004f80e
- (void)_releaseRecordModeLock:(id)arg1;	// IMP=0x001000000004f67a
- (id)_acquireRecordModeLockFrom:(unsigned long long)arg1;	// IMP=0x001000000004f547
- (_Bool)_clearListeningMicIndicatorProperty;	// IMP=0x001000000004f484
- (_Bool)_setListeningMicIndicatorProperty;	// IMP=0x001000000004f3c1
- (void)_clearListeningMicIndicatorPropertyIfNeeded;	// IMP=0x001000000004f355
- (void)_setListeningMicIndicatorPropertyIfNeeded;	// IMP=0x001000000004f2e9
- (void)_forceReleaseAllListeningMicIndicatorLocks;	// IMP=0x001000000004f291
- (void)_forceReleaseListeningMicIndicatorLockFrom:(unsigned long long)arg1;	// IMP=0x001000000004ef60
- (void)_releaseListeningMicIndicatorLock:(id)arg1;	// IMP=0x001000000004ee0b
- (id)_acquireListeningMicIndicatorLockFrom:(unsigned long long)arg1;	// IMP=0x001000000004eca3
- (void)_startAudioStream:(id)arg1 option:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004d2d6
- (void)prepareAudioStream:(id)arg1 request:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004d0b4
- (_Bool)prepareAudioStreamSync:(id)arg1 request:(id)arg2 error:(id *)arg3;	// IMP=0x001000000004cdcc
- (void)startAudioStream:(id)arg1 option:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004cb67
- (void)_createCircularBufferIfNeededWithNumChannel:(unsigned long long)arg1 playbackRoute:(id)arg2;	// IMP=0x001000000004c90b
- (void)_prepareAudioStream:(id)arg1 request:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004c7f2
- (_Bool)_prepareAudioStreamSync:(id)arg1 request:(id)arg2 error:(id *)arg3;	// IMP=0x001000000004c173
- (void)attachTandemStream:(id)arg1 toPrimaryStream:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004c097
- (void)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000004bf51
- (id)audioStreamWithRequest:(id)arg1 streamName:(id)arg2 error:(id *)arg3;	// IMP=0x001000000004bdbe
- (id)_audioStreamWithRequest:(id)arg1 streamName:(id)arg2 error:(id *)arg3;	// IMP=0x001000000004bad4
- (_Bool)setCurrentContext:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004b88d
- (_Bool)supportsDuckingOnCurrentRouteWithError:(id *)arg1;	// IMP=0x001000000004b6c9
- (_Bool)_canSetContext;	// IMP=0x001000000004b64a
- (unsigned long long)audioStreamId;	// IMP=0x001000000004b63d
- (void)_setLatestRecordContext:(id)arg1;	// IMP=0x001000000004b554
- (void)setLatestRecordContext:(id)arg1 streamType:(long long)arg2;	// IMP=0x001000000004b4b4
- (void)setAudioProviderDelegate:(id)arg1;	// IMP=0x001000000004b427
- (void)start;	// IMP=0x001000000004b0d7
- (void)dealloc;	// IMP=0x001000000004b024
- (id)initWithAudioStreamHandleId:(unsigned long long)arg1 audioStreamType:(long long)arg2 audioRecordContext:(id)arg3 audioRecorder:(id)arg4;	// IMP=0x001000000004b001
- (id)initWithAudioStreamHandleId:(unsigned long long)arg1 audioStreamType:(long long)arg2 audioRecordContext:(id)arg3 audioRecorder:(id)arg4 phoneCallStateMonitor:(id)arg5;	// IMP=0x001000000004a9ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

