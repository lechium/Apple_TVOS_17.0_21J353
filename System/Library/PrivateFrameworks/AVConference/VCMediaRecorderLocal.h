//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, VCAudioIO, VCMediaRecorderConfiguration;

__attribute__((visibility("hidden")))
@interface VCMediaRecorderLocal
{
    VCMediaRecorderConfiguration *_configuration;	// 232 = 0xe8
    VCAudioIO *_audioIO;	// 240 = 0xf0
    unsigned int _audioSessionId;	// 248 = 0xf8
}

- (void)reactionDidStart:(id)arg1;	// IMP=0x0000000000277598
- (void)cameraAvailabilityDidChange:(_Bool)arg1;	// IMP=0x0000000000277592
- (void)thermalLevelDidChange:(int)arg1;	// IMP=0x000000000027758c
- (id)clientCaptureRule;	// IMP=0x0000000000277584
- (void)avConferencePreviewError:(id)arg1;	// IMP=0x000000000027757e
- (void)sourceFrameRateDidChange:(unsigned int)arg1;	// IMP=0x0000000000277565
- (_Bool)onVideoFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 attribute:(CDStruct_51555cf6)arg3;	// IMP=0x0000000000277533
- (int)supportedVideoCodec;	// IMP=0x00000000002773b3
- (_Bool)configureVideoRecording;	// IMP=0x00000000002773ab
- (void)deregisterForCameraCapture;	// IMP=0x00000000002773a5
- (_Bool)registerForCameraCapture;	// IMP=0x000000000027739d
- (_Bool)startAudio;	// IMP=0x0000000000277250
- (void)cleanupSpatialAudio;	// IMP=0x000000000027724a
- (void)setupSpatialAudio;	// IMP=0x0000000000277244
- (struct tagVCAudioIOConfiguration)defaultAudioIOConfig;	// IMP=0x00000000002770ef
- (void)dealloc;	// IMP=0x0000000000276fbe
- (void)invalidate;	// IMP=0x0000000000276e82
- (id)initWithStreamToken:(long long)arg1 configuration:(id)arg2 reportingAgent:(struct opaqueRTCReporting *)arg3;	// IMP=0x0000000000276abc

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
