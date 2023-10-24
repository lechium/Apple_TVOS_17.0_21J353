//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSObject, NSString, VCAudioIOControllerClient, VCAudioRelay, VCAudioRelayIO, VCStreamInputAudio, VCStreamOutput;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCStreamIOAudioController
{
    NSObject<OS_dispatch_queue> *_stateQueue;	// 88 = 0x58
    _Bool _isRunning;	// 96 = 0x60
    _Bool _sourceStarted;	// 97 = 0x61
    _Bool _sinkStarted;	// 98 = 0x62
    VCAudioRelay *_outputThread;	// 104 = 0x68
    VCAudioRelayIO *_outputThreadClient;	// 112 = 0x70
    long long _streamToken;	// 120 = 0x78
    unsigned char _clientDirection;	// 128 = 0x80
    unsigned long long _networkClockID;	// 136 = 0x88
    VCStreamInputAudio *_streamInput;	// 144 = 0x90
    VCAudioIOControllerClient *_runningClient;	// 152 = 0x98
    struct PacketThread_s *_packetThread;	// 160 = 0xa0
    struct opaqueVCAudioBufferList *_inputSamples;	// 168 = 0xa8
    struct __CFAllocator *_audioSampleBufferAllocator;	// 176 = 0xb0
    VCStreamOutput *_streamOutput;	// 184 = 0xb8
    struct os_unfair_lock_s _streamOutputLock;	// 192 = 0xc0
    struct _VCAudioIOControllerClientIO *_sourceIO;	// 200 = 0xc8
    struct __CFAllocator *_backingBufferAllocator;	// 208 = 0xd0
    _Bool _timestampInitialized;	// 216 = 0xd8
    unsigned int _nextExpectedSampleTime;	// 220 = 0xdc
    CDStruct_1b6d18a9 _lastHostTime;	// 224 = 0xe0
    long long _lastSampleCount;	// 248 = 0xf8
}

@property(retain) VCAudioIOControllerClient *runningClient; // @synthesize runningClient=_runningClient;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;	// IMP=0x00000000000cf577
@property(retain) VCStreamOutput *streamOutput;
@property(readonly, nonatomic) NSDictionary *reportingStats;
- (void)invalidate;	// IMP=0x00000000000cf43e
- (_Bool)canSetDirection:(unsigned char)arg1;	// IMP=0x00000000000cf3f5
- (void)updateClient:(id)arg1 settings:(const struct tagVCAudioIOControllerClientSettings *)arg2;	// IMP=0x00000000000cf0ae
- (void)dispatchedUpdateClient:(id)arg1 settings:(const struct tagVCAudioIOControllerClientSettings *)arg2;	// IMP=0x00000000000cec46
- (void)dispatchedStopClient;	// IMP=0x00000000000ceb7a
- (_Bool)dispatchedStartClient:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000ce812
@property(readonly, nonatomic) _Bool supportsVoiceActivityDetection;
- (void)stopClient:(id)arg1;	// IMP=0x00000000000ce25c
- (void)cleanupStreamOutput;	// IMP=0x00000000000ce22f
- (void)cleanupOutputThread;	// IMP=0x00000000000ce1ea
- (_Bool)setupAndStartOutputClientThread;	// IMP=0x00000000000cd957
- (_Bool)startOutputForClient:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000cd6ca
- (_Bool)startInputForClient:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000cca74
- (void)startClient:(id)arg1;	// IMP=0x00000000000cc6a0
- (void)_packetThreadStop;	// IMP=0x00000000000cc661
- (_Bool)_packetThreadStartWithClientFormat:(const struct tagVCAudioFrameFormat *)arg1;	// IMP=0x00000000000cc066
- (void)dealloc;	// IMP=0x00000000000cbdf8
- (id)initWithStreamInputID:(long long)arg1 streamToken:(long long)arg2 networkClockID:(unsigned long long)arg3;	// IMP=0x00000000000cb59c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

