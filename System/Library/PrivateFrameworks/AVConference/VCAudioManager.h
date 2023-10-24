//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class ATSpatialStreamDescriptions, AVAudioDevice, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSObject, NSString, VCAudioRelay, VCAudioRelayIO, VCAudioSessionMediaProperties, VCAudioUnitProperties, VCAudioUnitSpatialContext;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCAudioManager
{
    struct tagHANDLE *_hAUIO;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 96 = 0x60
    unsigned int _state;	// 104 = 0x68
    VCAudioSessionMediaProperties *_currentAudioSessionMediaProperties;	// 112 = 0x70
    VCAudioUnitProperties *_currentAudioUnitProperties;	// 120 = 0x78
    NSDictionary *_vpOperatingModeToAudioSessionMediaFormatMapping;	// 128 = 0x80
    NSMutableArray *_allClients;	// 136 = 0x88
    NSMutableArray *_startingIOClients;	// 144 = 0x90
    AVAudioDevice *_inputDevice;	// 152 = 0x98
    AVAudioDevice *_outputDevice;	// 160 = 0xa0
    _Bool _isGKVoiceChat;	// 168 = 0xa8
    _Bool _isMicrophoneMuted;	// 169 = 0xa9
    _Bool _isMixingVoiceWithMediaEnabled;	// 170 = 0xaa
    _Bool _isInDaemon;	// 171 = 0xab
    _Bool _isInputMeteringEnabled;	// 172 = 0xac
    _Bool _isOutputMeteringEnabled;	// 173 = 0xad
    _Bool _isSpeakerPhoneEnabled;	// 174 = 0xae
    _Bool _isSuspended;	// 175 = 0xaf
    _Bool _followSystemInput;	// 176 = 0xb0
    _Bool _followSystemOutput;	// 177 = 0xb1
    struct _VCAudioIOControllerIOState _sinkData;	// 184 = 0xb8
    struct _VCAudioIOControllerIOState _sourceData;	// 384 = 0x180
    int _interruptThreadState;	// 584 = 0x248
    VCAudioRelay *_interruptThread;	// 592 = 0x250
    VCAudioRelayIO *_interruptThreadClient;	// 600 = 0x258
    _Bool _isInterrupting;	// 608 = 0x260
    struct _opaque_pthread_mutex_t _interruptingMutex;	// 616 = 0x268
    struct _opaque_pthread_mutex_t _inputDeviceMutex;	// 680 = 0x2a8
    struct _opaque_pthread_mutex_t _outputDeviceMutex;	// 744 = 0x2e8
    _Bool _spatialAudioDisabled;	// 808 = 0x328
    void **_audioSession;	// 816 = 0x330
    int _playbackMode;	// 824 = 0x338
    NSMutableDictionary *_spatialContexts;	// 832 = 0x340
    NSMutableDictionary *_audioSessionSinkMuted;	// 840 = 0x348
    VCAudioUnitSpatialContext *_currentSpatialContext;	// 848 = 0x350
    CDUnknownBlockType _mutedTalkerNotificationHandler;	// 856 = 0x358
    NSArray *_stateStrings;	// 864 = 0x360
    ATSpatialStreamDescriptions *_spatialStreamDescriptions;	// 872 = 0x368
    _Bool _isMediaPlaybackOnExternalDevice;	// 880 = 0x370
}

+ (unsigned char)audioIOType:(id)arg1 shouldEnableAudioInput:(_Bool)arg2;	// IMP=0x001000000001499f
+ (void)terminateProcess:(id)arg1 terminateSource:(id)arg2 agent:(struct opaqueRTCReporting *)arg3;	// IMP=0x001000000000c16e
+ (id)sharedSystemAudioInputInstance;	// IMP=0x001000000000c114
+ (id)sharedSystemAudioOutputInstance;	// IMP=0x001000000000c0ba
+ (id)sharedVoiceChatInstance;	// IMP=0x001000000000c063
@property(retain, nonatomic) NSDictionary *vpOperatingModeToAudioSessionMediaFormatMapping; // @synthesize vpOperatingModeToAudioSessionMediaFormatMapping=_vpOperatingModeToAudioSessionMediaFormatMapping;
@property(nonatomic) _Bool isInDaemon; // @synthesize isInDaemon=_isInDaemon;
@property(retain, nonatomic) VCAudioUnitProperties *currentAudioUnitProperties; // @synthesize currentAudioUnitProperties=_currentAudioUnitProperties;
@property(retain, nonatomic) VCAudioSessionMediaProperties *currentAudioSessionMediaProperties; // @synthesize currentAudioSessionMediaProperties=_currentAudioSessionMediaProperties;
@property(nonatomic, getter=isSpeakerPhoneEnabled) _Bool speakerPhoneEnabled; // @synthesize speakerPhoneEnabled=_isSpeakerPhoneEnabled;
@property(nonatomic, getter=isMixingVoiceWithMediaEnabled) _Bool mixingVoiceWithMediaEnabled; // @synthesize mixingVoiceWithMediaEnabled=_isMixingVoiceWithMediaEnabled;
@property(nonatomic, getter=isMicrophoneMuted) _Bool microphoneMuted; // @synthesize microphoneMuted=_isMicrophoneMuted;
@property(nonatomic) _Bool isGKVoiceChat; // @synthesize isGKVoiceChat=_isGKVoiceChat;
- (int)setVolume:(float)arg1 withRampTime:(float)arg2;	// IMP=0x0000000000020aaa
- (void)setupDynamicDuckingVolumeHandlerForAUIO:(struct tagHANDLE *)arg1;	// IMP=0x0000000000020aa4
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;	// IMP=0x0000000000020938
- (void)serverDidDie;	// IMP=0x000000000002079c
- (void)didSessionResume;	// IMP=0x000000000002078a
- (void)didSessionPause;	// IMP=0x0000000000020778
- (void)didSessionEnd;	// IMP=0x0000000000020384
- (void)didSessionStop;	// IMP=0x000000000001ff6e
- (void)stopInterruptThread;	// IMP=0x000000000001fd86
- (void)startInterruptThread;	// IMP=0x000000000001f82f
- (void)cleanupInterruptThread;	// IMP=0x000000000001f7ea
- (_Bool)setupInterruptThread;	// IMP=0x000000000001f455
- (void)stopAudioSession;	// IMP=0x000000000001f441
- (_Bool)resetAudioSessionWithProperties:(id)arg1 interruptSuccessful:(_Bool *)arg2;	// IMP=0x000000000001f1cb
- (_Bool)startAudioSessionWithProperties:(id)arg1;	// IMP=0x000000000001f1b6
- (void)refreshRemoteCodecType:(unsigned int)arg1 sampleRate:(double)arg2;	// IMP=0x000000000001f086
- (void)refreshOutputMetering;	// IMP=0x000000000001effb
- (void)refreshInputMetering;	// IMP=0x000000000001ef70
- (void)updateClient:(id)arg1 settings:(const struct tagVCAudioIOControllerClientSettings *)arg2;	// IMP=0x000000000001e9ca
- (void)updateVoiceProcessingWithClient:(id)arg1 settings:(const struct tagVCAudioIOControllerClientSettings *)arg2 isClientRegistered:(_Bool)arg3;	// IMP=0x000000000001e74e
- (void)updateSpatialAudioWithClient:(id)arg1 settings:(const struct tagVCAudioIOControllerClientSettings *)arg2 isClientRegistered:(_Bool)arg3;	// IMP=0x000000000001e39a
@property(readonly, nonatomic) _Bool supportsVoiceActivityDetection;
- (void)updateDirectionWithClient:(id)arg1 settings:(const struct tagVCAudioIOControllerClientSettings *)arg2 isClientRegistered:(_Bool)arg3;	// IMP=0x000000000001e27c
- (void)stopClient:(id)arg1;	// IMP=0x000000000001d9d1
- (void)startClient:(id)arg1;	// IMP=0x000000000001cfb0
- (_Bool)updateStateWithAudioIOClient:(id)arg1;	// IMP=0x000000000001c166
- (id)preferredClientWithNewClient:(id)arg1;	// IMP=0x000000000001bfda
- (_Bool)stateInterruptedWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int *)arg4;	// IMP=0x000000000001b9cd
- (void)stateTransitionInterruptedToStarted;	// IMP=0x000000000001b99f
- (void)stateTransitionInterruptedToRunning;	// IMP=0x000000000001b959
- (_Bool)stateInterruptedShouldGoToRunning:(id)arg1;	// IMP=0x000000000001b926
- (_Bool)stateInterruptedShouldGoToStarted:(id)arg1;	// IMP=0x000000000001b8ba
- (_Bool)stateRunningWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int *)arg4;	// IMP=0x000000000001af9a
- (void)stateTransitionRunningToInterrupted;	// IMP=0x000000000001af6c
- (void)stateRunningToSessionStarted;	// IMP=0x000000000001af3e
- (_Bool)stateRunningShouldTransitionToInterrupted:(id)arg1;	// IMP=0x000000000001af0b
- (_Bool)stateRunningShouldTransitionToStarted:(id)arg1;	// IMP=0x000000000001ae9f
- (_Bool)stateSessionStartedWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int *)arg4;	// IMP=0x000000000001a8a4
- (void)enterStateStarted;	// IMP=0x000000000001a40c
- (_Bool)stateIdleWithAudioUnitProperties:(id)arg1 sessionProperties:(id)arg2 client:(id)arg3 newState:(unsigned int *)arg4;	// IMP=0x000000000001a370
- (void)resetChannelMask;	// IMP=0x000000000001a346
- (void)startVADWithAudioUnitProperties:(id)arg1;	// IMP=0x000000000001a2ae
- (_Bool)setupVAD;	// IMP=0x000000000001a0a6
- (void)activateSpatialContext:(id)arg1 shouldApplySpatialMetadata:(_Bool)arg2;	// IMP=0x000000000001a034
- (void)applySpatialMetadata:(struct OpaqueCMBlockBuffer *)arg1;	// IMP=0x0000000000019c2e
- (void)applySessionContextToAudioUnitProperties:(id)arg1 preferredClient:(id)arg2;	// IMP=0x0000000000019964
- (void)setSpatialMetadata:(struct OpaqueCMBlockBuffer *)arg1 audioSessionId:(unsigned int)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x000000000001967a
- (void)unregisterAudioSessionId:(unsigned int)arg1;	// IMP=0x000000000001923b
- (int)registerAudioSessionId:(unsigned int)arg1 maxChannelCountMic:(unsigned int)arg2 maxChannelCountSpeaker:(unsigned int)arg3 spatialMetadata:(struct OpaqueCMBlockBuffer *)arg4;	// IMP=0x0000000000018bff
- (int)unregisterFromMutedTalkerNotification;	// IMP=0x0000000000018907
- (int)registerForMutedTalkerNotification:(CDUnknownBlockType)arg1;	// IMP=0x0000000000018475
- (int)unregisterForMutedTalkerNotificationWithAUIO:(struct tagHANDLE *)arg1;	// IMP=0x0000000000018252
- (int)registerForMutedTalkerNotificationWithAUIO:(struct tagHANDLE *)arg1;	// IMP=0x0000000000017e08
- (void)applyControllerFormatToClients:(id)arg1;	// IMP=0x0000000000017b72
- (void)activateStartingClient:(id)arg1 applyControllerFormat:(_Bool)arg2;	// IMP=0x0000000000017a21
- (void)completeStartForAllStartingClients;	// IMP=0x00000000000176c5
- (void)unregisterClientIO:(struct _VCAudioIOControllerClientIO *)arg1 controllerIO:(struct _VCAudioIOControllerIOState *)arg2;	// IMP=0x00000000000171cd
- (void)registerClientIO:(struct _VCAudioIOControllerClientIO *)arg1 controllerIO:(struct _VCAudioIOControllerIOState *)arg2;	// IMP=0x0000000000016ae4
- (_Bool)audioCallbacksRunning;	// IMP=0x0000000000016ab8
- (void)stopAUIO;	// IMP=0x00000000000168cd
- (_Bool)resetAudioLimiterWithProperties:(id)arg1;	// IMP=0x0000000000016625
- (_Bool)resetAUIOWithProperties:(id)arg1;	// IMP=0x0000000000016383
- (_Bool)shouldResetAudioSessionWithProperties:(id)arg1;	// IMP=0x0000000000015dd5
- (_Bool)shouldResetAudioUnitWithProperties:(id)arg1;	// IMP=0x00000000000149e9
- (_Bool)startAUIOWithProperties:(id)arg1;	// IMP=0x0000000000013666
- (void)setMediaPlaybackOnExternalDevice:(_Bool)arg1;	// IMP=0x00000000000135c0
- (void)updateCurrentOutputDevice:(id)arg1;	// IMP=0x0000000000013167
@property(retain) AVAudioDevice *currentOutputDevice; // @synthesize currentOutputDevice=_outputDevice;
- (void)setCurrentOutputDeviceInternal:(id)arg1;	// IMP=0x0000000000012607
@property(retain) AVAudioDevice *currentInputDevice; // @synthesize currentInputDevice=_inputDevice;
- (void)updateCurrentInputDevice:(id)arg1;	// IMP=0x0000000000011675
- (void)setCurrentInputDeviceInternal:(id)arg1;	// IMP=0x0000000000011624
- (void)setupIODevicesForAUIO:(struct tagHANDLE *)arg1;	// IMP=0x00000000000115d6
- (id)newAudioSessionMediaPropertiesWithPreferredClient:(id)arg1 audioUnitProperties:(id)arg2;	// IMP=0x00000000000115c5
- (id)newAudioSessionMediaPropertiesForSystemAudioWithPreferredClient:(id)arg1 audioUnitProperties:(id)arg2 isInput:(_Bool)arg3;	// IMP=0x00000000000115ac
- (id)newAudioUnitPropertiesForSystemAudioWithPreferredClient:(id)arg1 isInput:(_Bool)arg2;	// IMP=0x0000000000010eed
- (id)newAudioUnitPropertiesWithPreferredClient:(id)arg1;	// IMP=0x0000000000010677
- (_Bool)computeAllowAudioRecordingWithPreferredClient:(id)arg1;	// IMP=0x00000000000104c8
- (unsigned int)computeSamplePerFrameWithPreferredClient:(id)arg1 sampleRate:(unsigned int)arg2;	// IMP=0x00000000000102ec
- (void)computeFormatDescription:(struct AudioStreamBasicDescription *)arg1 withPreferredClient:(id)arg2;	// IMP=0x0000000000010120
- (unsigned int)vpOperationModeForConferenceOperatingMode:(int)arg1 deviceRole:(int)arg2;	// IMP=0x000000000000ff93
- (void)_cleanupDeadClients;	// IMP=0x000000000000fbcd
- (_Bool)removeClient:(id)arg1;	// IMP=0x000000000000fabb
- (void)waitIdleForClient:(id)arg1;	// IMP=0x000000000000f422
- (_Bool)addClient:(id)arg1;	// IMP=0x000000000000f0b9
- (void)removeAllClientsForIO:(struct _VCAudioIOControllerIOState *)arg1;	// IMP=0x000000000000f048
- (void)flushEventQueue:(struct opaqueCMSimpleQueue *)arg1;	// IMP=0x000000000000ec88
- (int)prewarmingClientOperatingMode;	// IMP=0x000000000000eb6b
- (void)resetAudioTimestamps;	// IMP=0x000000000000eb3e
- (void)computeHardwarePreferences;	// IMP=0x000000000000eb38
- (void)setOutputMetering;	// IMP=0x000000000000e9e0
- (void)setInputMetering;	// IMP=0x000000000000e888
- (void)applyAudioSessionMute;	// IMP=0x000000000000e43e
- (void)setMute:(_Bool)arg1 forClient:(id)arg2;	// IMP=0x000000000000e10d
- (void)dealloc;	// IMP=0x000000000000d724
@property(readonly, copy) NSString *description;
- (id)initWithAudioSessionMode:(int)arg1;	// IMP=0x000000000000c48a
- (void)getPreferredFormat:(struct AudioStreamBasicDescription *)arg1 blockSize:(double *)arg2 vpOperatingMode:(unsigned int *)arg3 forOperatingMode:(int)arg4 deviceRole:(int)arg5 suggestedFormat:(struct AudioStreamBasicDescription *)arg6;	// IMP=0x000000000000c1d0
@property(readonly, nonatomic) struct _VCAudioIOControllerIOState *sourceIO;
@property(readonly, nonatomic) struct _VCAudioIOControllerIOState *sinkIO;
- (id)autorelease;	// IMP=0x000000000000c1a7
- (oneway void)release;	// IMP=0x000000000000c1a1
- (unsigned long long)retainCount;	// IMP=0x000000000000c194
- (id)retain;	// IMP=0x000000000000c18b
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000000c182

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSDictionary *reportingStats;
@property(readonly) Class superclass;

@end

