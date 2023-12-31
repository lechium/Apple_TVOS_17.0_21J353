//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCAnsweringMachineConfiguration, NSObject, NSString, NSURL, VCAudioIO;
@protocol OS_dispatch_queue, VCAnsweringMachineDelegate;

__attribute__((visibility("hidden")))
@interface VCAnsweringMachine
{
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 88 = 0x58
    id <VCAnsweringMachineDelegate> _delegate;	// 96 = 0x60
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 104 = 0x68
    struct tagVCAnsweringMachineRealtimeContext _realtimeContext;	// 112 = 0x70
    AVCAnsweringMachineConfiguration *_configuration;	// 200 = 0xc8
    NSString *_uuid;	// 208 = 0xd0
    int _deviceRole;	// 216 = 0xd8
    VCAudioIO *_audioIO;	// 224 = 0xe0
    int _reportingModuleID;	// 232 = 0xe8
    struct tagVCAudioFrameFormat _internalFormat;	// 240 = 0xf0
    NSURL *_recordingURL;	// 288 = 0x120
    _Bool _stopIsAsync;	// 296 = 0x128
    _Bool _didInvalidate;	// 297 = 0x129
}

+ (void)terminateProcess:(id)arg1 terminateSource:(id)arg2 agent:(struct opaqueRTCReporting *)arg3;	// IMP=0x001000000010f43d
@property(readonly, nonatomic) NSURL *recordingURL; // @synthesize recordingURL=_recordingURL;
@property(readonly, nonatomic) AVCAnsweringMachineConfiguration *configuration; // @synthesize configuration=_configuration;
- (void)didSuspendAudioIO:(id)arg1;	// IMP=0x000000000010f463
- (void)didResumeAudioIO:(id)arg1;	// IMP=0x000000000010f45d
- (void)serverDidDie;	// IMP=0x000000000010f457
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;	// IMP=0x000000000010f451
- (void)streamToken:(long long)arg1 didUpdateCapabilities:(unsigned int)arg2;	// IMP=0x000000000010f437
- (void)streamTokenDidCleanupAllRequests:(long long)arg1;	// IMP=0x000000000010f431
- (void)streamToken:(long long)arg1 didFinishRequest:(id)arg2 didSucceed:(_Bool)arg3;	// IMP=0x000000000010f42b
- (void)streamToken:(long long)arg1 didEndProcessingRequest:(id)arg2 stillImageURL:(id)arg3 movieURL:(id)arg4 error:(id)arg5;	// IMP=0x000000000010f2c6
- (void)streamToken:(long long)arg1 didStartProcessingRequest:(id)arg2 error:(id)arg3;	// IMP=0x000000000010f2c0
- (void)mediaRecorder:(id)arg1 shouldProcessRequest:(id)arg2 recipientID:(id)arg3;	// IMP=0x000000000010f2ba
- (void)stopMediaRecording;	// IMP=0x000000000010f170
- (void)cleanupMediaRecorder;	// IMP=0x000000000010f0f1
- (_Bool)setupMediaRecorder;	// IMP=0x000000000010ea84
- (void)cleanupCaptionsCoordinator;	// IMP=0x000000000010ea5a
- (_Bool)setupCaptionsCoordinator;	// IMP=0x000000000010e6e6
- (void)cleanupAnnouncementAssetInjection;	// IMP=0x000000000010e6be
- (_Bool)setUpAnnouncementAssetInjection;	// IMP=0x000000000010e48a
- (id)newInjectorConfigurationForAnnouncementAsset:(id)arg1;	// IMP=0x000000000010e20e
@property(readonly, nonatomic) long long messageAudioToken;
- (_Bool)configureAudioIO;	// IMP=0x000000000010df29
- (struct tagVCAudioIOConfiguration)defaultAudioIOConfiguration;	// IMP=0x000000000010db89
- (struct AudioStreamBasicDescription)defaultAudioFormat;	// IMP=0x000000000010db55
- (int)deviceRoleForCallSource:(unsigned char)arg1;	// IMP=0x000000000010db42
- (void)cleanupRealtimeContext;	// IMP=0x000000000010db07
- (_Bool)setupRealtimeContextWithToken:(long long)arg1;	// IMP=0x000000000010d670
- (void)setupInternalFormat;	// IMP=0x000000000010d5dd
- (struct __CFDictionary *)clientSpecificUserInfo;	// IMP=0x000000000010d572
- (_Bool)setupReportingAgentWithCallID:(unsigned int)arg1;	// IMP=0x000000000010d008
- (struct __CFDictionary *)reportingInitialConfiguration;	// IMP=0x000000000010ce22
- (void)cleanupPeriodicReporting;	// IMP=0x000000000010cdea
- (void)setupPeriodicReporting;	// IMP=0x000000000010cc85
- (_Bool)autoRunOnStart;	// IMP=0x000000000010cc7d
- (id)onStop;	// IMP=0x000000000010ca8b
- (id)onStart;	// IMP=0x000000000010c863
- (void)setUpRealtimeDefaults;	// IMP=0x000000000010c822
- (id)stop;	// IMP=0x000000000010c522
- (id)start;	// IMP=0x000000000010c274
- (void)invalidate;	// IMP=0x000000000010c149
- (void)dealloc;	// IMP=0x000000000010bf8c
- (id)initWithConfiguration:(id)arg1 delegate:(id)arg2 delegateQueue:(id)arg3;	// IMP=0x000000000010b6b2
- (_Bool)setUpInternalStateWithConfiguration:(id)arg1;	// IMP=0x000000000010b353
- (_Bool)setUpConfigurationIndependentInternalState;	// IMP=0x000000000010b162

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

