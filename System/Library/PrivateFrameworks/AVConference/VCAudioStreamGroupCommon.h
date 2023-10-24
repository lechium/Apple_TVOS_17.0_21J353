//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VCAudioCaptionsCoordinator, VCAudioIO, VCAudioPowerSpectrumSource;

__attribute__((visibility("hidden")))
@interface VCAudioStreamGroupCommon
{
    _Bool _isMediaPriorityEnabled;	// 88 = 0x58
    struct tagVCAudioStreamGroupStream *_audioStreams;	// 96 = 0x60
    struct opaqueVCAudioBufferList *_sampleBuffer;	// 104 = 0x68
    struct VCAudioStreamGroupSyncDestinationList _syncDestinationList;	// 112 = 0x70
    VCAudioIO *_audioIO;	// 120 = 0x78
    int _processID;	// 128 = 0x80
    _Bool _isGKVoiceChat;	// 132 = 0x84
    unsigned int _preferredIOSampleRate;	// 136 = 0x88
    unsigned int _preferredIOSamplesPerFrame;	// 140 = 0x8c
    unsigned int _audioSessionID;	// 144 = 0x90
    int _deviceRole;	// 148 = 0x94
    int _operatingMode;	// 152 = 0x98
    unsigned int _audioType;	// 156 = 0x9c
    unsigned long long _spatialAudioSourceID;	// 160 = 0xa0
    _Bool _isMuted;	// 168 = 0xa8
    long long _powerSpectrumStreamToken;	// 176 = 0xb0
    long long _parentStreamGroupToken;	// 184 = 0xb8
    unsigned int _streamGroupID;	// 192 = 0xc0
    NSString *_participantUUID;	// 200 = 0xc8
    unsigned char _direction;	// 208 = 0xd0
    unsigned int _audioChannelIndex;	// 212 = 0xd4
    unsigned int _maxChannelCount;	// 216 = 0xd8
    _Bool _isVoiceActivityEnabled;	// 220 = 0xdc
    void *_context;	// 224 = 0xe0
    CDUnknownFunctionPointerType _callback;	// 232 = 0xe8
    VCAudioPowerSpectrumSource *_audioPowerSpectrumSource;	// 240 = 0xf0
    _Bool _isPowerSpectrumEnabled;	// 248 = 0xf8
    unsigned int _processedFramesCount;	// 252 = 0xfc
    struct opaqueCMSimpleQueue *_syncDestinationChangeEventQueue;	// 256 = 0x100
    struct tagVCMemoryPool *_syncDestinationChangeEventPool;	// 264 = 0x108
    VCAudioCaptionsCoordinator *_captionsCoordinator;	// 272 = 0x110
}

+ (_Bool)isSupportedDirection:(unsigned char)arg1;	// IMP=0x00100000000610da
@property(nonatomic) void *context; // @synthesize context=_context;
@property(nonatomic) CDUnknownFunctionPointerType callback; // @synthesize callback=_callback;
@property unsigned int audioChannelIndex; // @synthesize audioChannelIndex=_audioChannelIndex;
@property(readonly) VCAudioIO *audioIO; // @synthesize audioIO=_audioIO;
@property(readonly, nonatomic) int deviceRole; // @synthesize deviceRole=_deviceRole;
@property(nonatomic, setter=setMuted:) _Bool isMuted; // @synthesize isMuted=_isMuted;
- (void)cleanupSyncDestinations;	// IMP=0x00000000000610e8
- (void)serverDidDie;	// IMP=0x00000000000610d4
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;	// IMP=0x0000000000061082
- (void)sendAudioPowerSpectrumSourceRegistration:(_Bool)arg1;	// IMP=0x0000000000060fcb
- (void)audioPowerSpectrumSinkDidUnregister;	// IMP=0x0000000000060fb7
- (void)audioPowerSpectrumSinkDidRegister;	// IMP=0x0000000000060fa0
- (void)didResumeAudioIO:(id)arg1;	// IMP=0x0000000000060dd1
- (void)didSuspendAudioIO:(id)arg1;	// IMP=0x0000000000060c02
- (_Bool)enqueueSyncDestinationChangeEvent:(id)arg1 eventType:(int)arg2;	// IMP=0x00000000000609c5
- (void)collectAndLogChannelMetrics:(CDStruct_b671a7c4 *)arg1 averagePower:(float)arg2;	// IMP=0x000000000006040c
- (_Bool)configureStreams:(id)arg1 withRateControlConfig:(id)arg2;	// IMP=0x000000000005ff85
- (void)stopAudioDump;	// IMP=0x000000000005ff3e
- (void)startAudioDump;	// IMP=0x000000000005ff38
- (id)getAudioDumpName;	// IMP=0x000000000005ff30
- (id)stopCapture;	// IMP=0x000000000005fb91
- (id)startCapture;	// IMP=0x000000000005f983
- (void)updateVoiceActivityEnabled:(_Bool)arg1 isMediaPriorityEnabled:(_Bool)arg2;	// IMP=0x000000000005f93c
- (_Bool)removeSyncDestination:(id)arg1 shouldSchedule:(_Bool)arg2;	// IMP=0x000000000005f7cd
- (_Bool)addSyncDestination:(id)arg1 shouldSchedule:(_Bool)arg2;	// IMP=0x000000000005f56a
- (_Bool)reconfigureAudioIOIfNeededWithDeviceRole:(int)arg1 operatingMode:(int)arg2;	// IMP=0x000000000005f0a3
- (_Bool)configureAudioIOWithDeviceRole:(int)arg1 operatingMode:(int)arg2;	// IMP=0x000000000005e41b
- (void)cleanupStreams;	// IMP=0x000000000005e3e2
- (void)setupStreamsWithStreamInfos:(id)arg1;	// IMP=0x000000000005dd9f
- (void)cleanupPowerSpectrumSource;	// IMP=0x000000000005dd01
- (_Bool)configurePowerSpectrumSource;	// IMP=0x000000000005dc32
@property(setter=setPowerSpectrumEnabled:) _Bool isPowerSpectrumEnabled;
@property(readonly) struct tagVCAudioStreamGroupStream *audioStreams;
- (_Bool)setDeviceRole:(int)arg1 operatingMode:(int)arg2;	// IMP=0x000000000005db9d
- (void)dealloc;	// IMP=0x000000000005da8e
- (void)flushSyncDestinationUpdatesEventQueue;	// IMP=0x000000000005da40
- (unsigned int)audioTypeForCaptureSource:(int)arg1;	// IMP=0x000000000005da23
@property(readonly, copy) NSString *description;
- (id)initWithConfig:(id)arg1 audioCallback:(CDUnknownFunctionPointerType)arg2 context:(void *)arg3 audioDirection:(unsigned char)arg4;	// IMP=0x000000000005d4bf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

