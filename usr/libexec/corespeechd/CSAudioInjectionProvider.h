//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CSAudioInjectionDevice, CSAudioInjectionEngine, CSAudioRecordContext, NSHashTable, NSMutableArray, NSMutableDictionary, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface CSAudioInjectionProvider
{
    _Bool _allowZeroInjection;	// 8 = 0x8
    float _didStartDelayInSeconds;	// 12 = 0xc
    NSHashTable *_observers;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSUUID *_uuid;	// 32 = 0x20
    NSMutableArray *_connectedDevices;	// 40 = 0x28
    CSAudioInjectionDevice *_builtInDevice;	// 48 = 0x30
    CSAudioInjectionDevice *_bundleTvRemote;	// 56 = 0x38
    CSAudioInjectionEngine *_builtInAudioInjectionEngine;	// 64 = 0x40
    NSMutableDictionary *_audioInjectionEngines;	// 72 = 0x48
    unsigned long long _latestPluginStreamId;	// 80 = 0x50
    unsigned long long _activateStartTime;	// 88 = 0x58
    unsigned long long _activateEndTime;	// 96 = 0x60
    unsigned long long _deactivateStartTime;	// 104 = 0x68
    unsigned long long _deactivateEndTime;	// 112 = 0x70
    NSString *_atvRemoteDeviceID;	// 120 = 0x78
    CSAudioRecordContext *_audioRecordContext;	// 128 = 0x80
}

+ (void)createSharedAudioSession;	// IMP=0x00200000000a5621
+ (id)defaultInjectionProvider;	// IMP=0x00100000000a55f1
- (void).cxx_destruct;	// IMP=0x00200000000a3b9c
@property(nonatomic) _Bool allowZeroInjection; // @synthesize allowZeroInjection=_allowZeroInjection;
@property(retain, nonatomic) CSAudioRecordContext *audioRecordContext; // @synthesize audioRecordContext=_audioRecordContext;
@property(retain, nonatomic) NSString *atvRemoteDeviceID; // @synthesize atvRemoteDeviceID=_atvRemoteDeviceID;
@property(nonatomic) unsigned long long deactivateEndTime; // @synthesize deactivateEndTime=_deactivateEndTime;
@property(nonatomic) unsigned long long deactivateStartTime; // @synthesize deactivateStartTime=_deactivateStartTime;
@property(nonatomic) unsigned long long activateEndTime; // @synthesize activateEndTime=_activateEndTime;
@property(nonatomic) unsigned long long activateStartTime; // @synthesize activateStartTime=_activateStartTime;
@property(nonatomic) unsigned long long latestPluginStreamId; // @synthesize latestPluginStreamId=_latestPluginStreamId;
@property(retain, nonatomic) NSMutableDictionary *audioInjectionEngines; // @synthesize audioInjectionEngines=_audioInjectionEngines;
@property(retain, nonatomic) CSAudioInjectionEngine *builtInAudioInjectionEngine; // @synthesize builtInAudioInjectionEngine=_builtInAudioInjectionEngine;
@property(retain, nonatomic) CSAudioInjectionDevice *bundleTvRemote; // @synthesize bundleTvRemote=_bundleTvRemote;
@property(retain, nonatomic) CSAudioInjectionDevice *builtInDevice; // @synthesize builtInDevice=_builtInDevice;
@property(retain, nonatomic) NSMutableArray *connectedDevices; // @synthesize connectedDevices=_connectedDevices;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
@property(nonatomic) float didStartDelayInSeconds; // @synthesize didStartDelayInSeconds=_didStartDelayInSeconds;
- (void)audioEngineAudioChunkForTvAvailable:(id)arg1 audioChunk:(id)arg2;	// IMP=0x00100000000a38a8
- (void)audioEngineDidStopRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 reason:(unsigned long long)arg3;	// IMP=0x00100000000a384e
- (void)audioEngineBufferAvailable:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 buffer:(id)arg3 remoteVAD:(id)arg4 atTime:(unsigned long long)arg5 isFileLoadedBuffer:(_Bool)arg6;	// IMP=0x00100000000a3776
- (void)audioEngineDidStartRecord:(id)arg1 audioStreamHandleId:(unsigned long long)arg2 successfully:(_Bool)arg3 error:(id)arg4;	// IMP=0x00100000000a36cd
- (void)configureAlertBehavior:(id)arg1 audioStreamHandleId:(unsigned long long)arg2;	// IMP=0x00100000000a36c7
- (id)metrics;	// IMP=0x00100000000a3494
- (void)enableMiniDucking:(_Bool)arg1;	// IMP=0x00100000000a348e
- (id)fetchGibraltarVoiceTriggerInfoWithRecordDeviceIndicator:(id)arg1;	// IMP=0x00100000000a3486
- (_Bool)isSessionCurrentlyActivated;	// IMP=0x00100000000a347e
- (float)averagePowerForChannel:(unsigned long long)arg1;	// IMP=0x00100000000a3475
- (float)peakPowerForChannel:(unsigned long long)arg1;	// IMP=0x00100000000a346c
- (void)updateMeters;	// IMP=0x00100000000a3466
- (void)setMeteringEnabled:(_Bool)arg1;	// IMP=0x00100000000a3460
- (unsigned long long)alertStartTime;	// IMP=0x00100000000a3458
- (_Bool)playAlertSoundForType:(long long)arg1 recordDevideIndicator:(id)arg2;	// IMP=0x00100000000a3450
- (_Bool)playRecordStartingAlertAndResetEndpointerFromStream:(unsigned long long)arg1 withAlertOverride:(long long)arg2;	// IMP=0x00100000000a33bd
- (_Bool)setAlertSoundFromURL:(id)arg1 forType:(long long)arg2 force:(_Bool)arg3;	// IMP=0x00100000000a33b5
- (id)getPlaybackRouteForStreamID:(unsigned long long)arg1;	// IMP=0x00100000000a33a8
- (_Bool)duckOthersOption;	// IMP=0x00100000000a33a0
- (void)setDuckOthersOption:(_Bool)arg1;	// IMP=0x00100000000a339a
- (_Bool)setRecordMode:(long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000a3392
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00100000000a3305
- (_Bool)deactivateAudioSession:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000a3278
- (_Bool)activateAudioSessionWithReason:(unsigned long long)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000a31f7
- (_Bool)prewarmAudioSessionWithStreamHandleId:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x00100000000a3195
- (_Bool)isNarrowBandWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x00100000000a318d
- (float)recordingSampleRateWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x00100000000a3174
- (id)recordSettingsWithStreamHandleId:(unsigned long long)arg1;	// IMP=0x00100000000a307b
- (id)audioDeviceInfoWithStreamHandleId:(unsigned long long)arg1 recordDeviceIndicator:(id)arg2;	// IMP=0x00100000000a2f8e
- (id)recordDeviceInfoWithStreamHandleId:(unsigned long long)arg1 recordDeviceIndicator:(id)arg2;	// IMP=0x00000000000a2eca
- (id)recordRouteWithRecordDeviceIndicator:(id)arg1;	// IMP=0x00100000000a2dc5
- (_Bool)isRecordingWithRecordDeviceIndicator:(id)arg1;	// IMP=0x00100000000a2c99
- (_Bool)stopAudioStreamWithRecordDeviceIndicator:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000a2ade
- (_Bool)startAudioStreamWithOption:(id)arg1 recordDeviceIndicator:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000a285e
- (_Bool)prepareAudioStreamRecord:(id)arg1 recordDeviceIndicator:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000a27c8
- (_Bool)setCurrentContext:(id)arg1 streamHandleId:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x00100000000a27c0
- (void)setContext:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a2648
- (void)setAudioSessionEventDelegate:(id)arg1;	// IMP=0x00100000000a2642
- (void)unregisterObserver:(id)arg1;	// IMP=0x00100000000a25ae
- (void)registerObserver:(id)arg1;	// IMP=0x00100000000a251a
- (void)willDestroy;	// IMP=0x00100000000a24eb
- (void)disconnectDevice:(id)arg1;	// IMP=0x00100000000a244d
- (void)connectDevice:(id)arg1;	// IMP=0x00100000000a23af
- (id)primaryInputDevice;	// IMP=0x00100000000a237b
- (void)stop;	// IMP=0x00100000000a229e
- (void)_createSpeechDetectionVADIfNeeded;	// IMP=0x00100000000a216e
- (void)_tearDownSpeechDetectionVADIfNeeded;	// IMP=0x00100000000a20f2
- (void)_connectPluginDevice:(id)arg1;	// IMP=0x00100000000a1fdc
- (void)start;	// IMP=0x00100000000a1f8a
- (void)dealloc;	// IMP=0x00100000000a1ed0
- (id)init;	// IMP=0x00100000000a1ca9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

