//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCStatisticsCollector, DTMFEventHandler, NSMutableArray, NSNumber, NSObject, NSString, VCAudioIO, VCAudioPayload, VCAudioPowerSpectrumSource, VCAudioTransmitter, VCTelephonyInterface, WRMClient;
@protocol OS_dispatch_semaphore, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface VCAudioStream
{
    int _clientPid;	// 648 = 0x288
    int numBufferBytesAvailable;	// 652 = 0x28c
    NSObject<OS_dispatch_source> *pausedAudioHeartBeat;	// 656 = 0x290
    double dAudioHostTime;	// 664 = 0x298
    _Bool lastVoiceActive;	// 672 = 0x2a0
    double _remoteMediaStallTimeout;	// 680 = 0x2a8
    unsigned int conferenceID;	// 688 = 0x2b0
    unsigned int lastInputAudioTimeStamp;	// 692 = 0x2b4
    unsigned int lastSentAudioSampleTime;	// 696 = 0x2b8
    struct _opaque_pthread_rwlock_t stateLock;	// 704 = 0x2c0
    NSMutableArray *audioPayloads;	// 904 = 0x388
    struct tagVCAudioFrameFormat _vpioFormat;	// 912 = 0x390
    _Bool _useExternalIO;	// 960 = 0x3c0
    int preferredAudioCodec;	// 964 = 0x3c4
    DTMFEventHandler *dtmfEventHandler;	// 968 = 0x3c8
    WRMClient *wrmClient;	// 976 = 0x3d0
    VCAudioPayload *currentAudioPayload;	// 984 = 0x3d8
    VCAudioPayload *currentDTXPayload;	// 992 = 0x3e0
    VCAudioTransmitter *_audioTransmitter;	// 1000 = 0x3e8
    int _reportingModuleID;	// 1008 = 0x3f0
    VCTelephonyInterface *_telephonyInterface;	// 1016 = 0x3f8
    _Bool isValid;	// 1024 = 0x400
    int deviceRole;	// 1028 = 0x404
    VCAudioIO *_audioIO;	// 1032 = 0x408
    _Bool _isMuted;	// 1040 = 0x410
    unsigned int *_reportingSSRCList;	// 1048 = 0x418
    unsigned int _reportingSSRCCount;	// 1056 = 0x420
    _Bool _sendActiveVoiceOnly;	// 1060 = 0x424
    _Bool _currentDTXEnable;	// 1061 = 0x425
    NSNumber *_targetStreamID;	// 1064 = 0x428
    _Bool _rtpEnabledBeforeInterrupt;	// 1072 = 0x430
    _Bool _rtcpEnabledBeforeInterrupt;	// 1073 = 0x431
    unsigned int _pullAudioSamplesCount;	// 1076 = 0x434
    struct _VCAudioStreamSinkContext _sinkContext;	// 1080 = 0x438
    struct _VCAudioStreamSourceContext _sourceContext;	// 1096 = 0x448
    long long _inputAudioPowerSpectrumToken;	// 1312 = 0x520
    long long _outputAudioPowerSpectrumToken;	// 1320 = 0x528
    VCAudioPowerSpectrumSource *_inputAudioPowerSpectrumSource;	// 1328 = 0x530
    VCAudioPowerSpectrumSource *_outputAudioPowerSpectrumSource;	// 1336 = 0x538
    unsigned int _abnormalOWRDCount;	// 1344 = 0x540
    double _lastAbnormalOWRDVerificationTime;	// 1352 = 0x548
    double _lastNetworkHealthPrintTime;	// 1360 = 0x550
    double _packetLossRateAccum;	// 1368 = 0x558
    int _packetLossRateCount;	// 1376 = 0x560
    double _packetLossRate5Secs;	// 1384 = 0x568
    double _timeLastPLR5Secs;	// 1392 = 0x570
    _Bool _anbrEnabled;	// 1400 = 0x578
    _Bool _anbrActive;	// 1401 = 0x579
    struct ifnet_interface_advisory _lastNWConnectionNotification;	// 1408 = 0x580
    unsigned int _awdTimeTransmitter;	// 1504 = 0x5e0
    unsigned int _lastNoVoiceActivityPacketCount;	// 1508 = 0x5e4
    struct opaqueCMSimpleQueue *_syncSourceDelegateQueue;	// 1512 = 0x5e8
    struct __CFArray *_syncSourceDelegates;	// 1520 = 0x5f0
    _Bool _isTelephony;	// 1528 = 0x5f8
    unsigned int _uplinkRateAdaptationMaxAllowedBitrate;	// 1532 = 0x5fc
    _Bool _isVoiceProcessingAt24KSupported;	// 1536 = 0x600
    _Bool _isRamStadSRCEnabled;	// 1537 = 0x601
    unsigned int _preferredMediaBitrate;	// 1540 = 0x604
    AVCStatisticsCollector *_statsCollector;	// 1544 = 0x608
    _Bool _enableAudioPowerSpectrum;	// 1552 = 0x610
    unsigned int _audioSessionId;	// 1556 = 0x614
    struct os_unfair_lock_s _delegateLock;	// 1560 = 0x618
    NSObject<OS_dispatch_semaphore> *_runLock;	// 1568 = 0x620
    unsigned int _cachedConnectionMTU;	// 1576 = 0x628
    unsigned int _constantTransportOverhead;	// 1580 = 0x62c
}

+ (_Bool)shouldUseRandomRTPTimestampForMode:(int)arg1;	// IMP=0x00100000000bfae0
+ (id)capabilities;	// IMP=0x00100000000bd4ed
+ (id)supportedAudioPayloads;	// IMP=0x00100000000bd3d8
+ (void)terminateProcess:(id)arg1 terminateSource:(id)arg2 agent:(struct opaqueRTCReporting *)arg3;	// IMP=0x00100000000ba044
+ (unsigned char)audioIODirectionWithMediaStreamDirection:(long long)arg1;	// IMP=0x00100000000b9e67
+ (int)operatingModeForAudioStreamMode:(long long)arg1;	// IMP=0x00100000000b9df0
+ (id)newPayloadConfigForCodecConfig:(id)arg1 streamConfig:(id)arg2 inputSampleRate:(unsigned int)arg3;	// IMP=0x00100000000b82dd
+ (unsigned int)audioIOTypeForMode:(long long)arg1;	// IMP=0x00100000000b8261
+ (unsigned int)audioChannelCountForMode:(id)arg1;	// IMP=0x00100000000b81f2
+ (_Bool)shouldUseAACELDSBRForMode:(long long)arg1;	// IMP=0x00100000000b81e1
+ (_Bool)isVoLTE:(long long)arg1;	// IMP=0x00100000002a7ef3
+ (_Bool)isTelephony:(long long)arg1;	// IMP=0x00100000002a7ed9
@property(nonatomic) unsigned int lastNoVoiceActivityPacketCount; // @synthesize lastNoVoiceActivityPacketCount=_lastNoVoiceActivityPacketCount;
@property(retain, nonatomic) NSNumber *targetStreamID; // @synthesize targetStreamID=_targetStreamID;
@property(nonatomic, getter=isCurrentDTXEnabled) _Bool currentDTXEnable; // @synthesize currentDTXEnable=_currentDTXEnable;
@property(retain) VCAudioIO *audioIO; // @synthesize audioIO=_audioIO;
@property(retain) VCAudioTransmitter *audioTransmitter; // @synthesize audioTransmitter=_audioTransmitter;
@property(nonatomic) int deviceRole; // @synthesize deviceRole;
@property(nonatomic) _Bool isValid; // @synthesize isValid;
@property(readonly) unsigned int conferenceID; // @synthesize conferenceID;
- (void)didUpdateBasebandCodec:(const struct _VCRemoteCodecInfo *)arg1;	// IMP=0x00000000000c5e61
- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x00000000000c5da6
- (void)collectTxChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x00000000000c5d00
- (void)collectRxChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x00000000000c5b88
- (void)collectRxChannelMetrics:(CDStruct_b671a7c4 *)arg1 interval:(float)arg2;	// IMP=0x00000000000c5b76
- (void)serverDidDie;	// IMP=0x00000000000c5b21
- (void)didResumeAudioIO:(id)arg1;	// IMP=0x00000000000c5a61
- (void)didSuspendAudioIO:(id)arg1;	// IMP=0x00000000000c5940
- (void)unregisterCodecRateModeChangeNotifications;	// IMP=0x00000000000c5926
- (void)registerActiveAudioStreamChangeNotifications;	// IMP=0x00000000000c572b
- (void)registerCodecRateModeChangeNotifications;	// IMP=0x00000000000c567e
- (long long)getSyncSourceSampleRate;	// IMP=0x00000000000c566b
- (void)waitIdleForSyncSourceDelegates;	// IMP=0x00000000000c52c3
- (void)removeSyncSourceDelegate:(id)arg1;	// IMP=0x00000000000c4f02
- (void)addSyncSourceDelegate:(id)arg1;	// IMP=0x00000000000c4aed
- (void)setCanProcessAudio:(_Bool)arg1;	// IMP=0x00000000000c4adb
- (_Bool)canProcessAudio;	// IMP=0x00000000000c4ac9
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;	// IMP=0x00000000000c499f
- (void)pullAudioSamples:(struct opaqueVCAudioBufferList *)arg1;	// IMP=0x00000000000c42e8
- (int)getConnectionTypeForStreamMode:(long long)arg1;	// IMP=0x00000000000c4234
- (void)reportingAlgosAudioStreamEvent:(unsigned short)arg1;	// IMP=0x00000000000c4143
- (void)reportingAudioStreamEvent:(unsigned short)arg1;	// IMP=0x00000000000c3f0b
- (void)addStreamStartingMetricsToReport:(const struct __CFDictionary *)arg1;	// IMP=0x00000000000c3d5b
- (void)updateCodecPayloadAndBitrateForStartEvent:(int *)arg1 bitrate:(unsigned int *)arg2;	// IMP=0x00000000000c378d
- (void)gatherRealtimeStats:(struct __CFDictionary *)arg1;	// IMP=0x00000000000c3741
- (id)getReportingServiceID;	// IMP=0x00000000000c3710
- (struct __CFString *)getReportingClientName;	// IMP=0x00000000000c3614
- (int)getReportingClientType;	// IMP=0x00000000000c353f
- (struct __CFDictionary *)getClientSpecificUserInfo:(id)arg1;	// IMP=0x00000000000c308c
- (_Bool)isStandaloneStreamClientSpecificUserInfoSupported;	// IMP=0x00000000000c3070
- (void)setupReportingAgent:(id)arg1;	// IMP=0x00000000000c2ca7
- (void)setupPeriodicReporting;	// IMP=0x00000000000c2c06
- (void)setStreamIDs:(id)arg1 repairStreamIDs:(id)arg2;	// IMP=0x00000000000c28d5
- (double)rtcpHeartbeatLeeway;	// IMP=0x00000000000c28c7
- (void)onSendRTCPPacket;	// IMP=0x00000000000c26f0
- (void)onRTCPTimeout;	// IMP=0x00000000000c26c7
- (void)onRTPTimeout;	// IMP=0x00000000000c26c1
- (void)onResumeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c2354
- (void)onPauseWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c20ff
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;	// IMP=0x00000000000c20e2
- (void)onStopWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c1f2e
- (void)onStartWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000c19c0
- (void)deregisterAggregationHandlers;	// IMP=0x00000000000c19a4
- (void)registerAggregationHandlers;	// IMP=0x00000000000c189c
- (_Bool)shouldRegisterReportingPeriodicTask;	// IMP=0x00000000000c1876
- (_Bool)shouldReportNetworkInterfaceType;	// IMP=0x00000000000c185f
- (_Bool)shouldResetRTPTimestampOnStart;	// IMP=0x00000000000c1848
- (void)updateRateAdaptationWithNetworkNotification:(struct ifnet_interface_advisory *)arg1;	// IMP=0x00000000000c1828
- (_Bool)onConfigureStreamWithConfiguration:(id)arg1 error:(id *)arg2;	// IMP=0x00000000000bfc56
- (int)getRTPTimeStampRateScaleFactor;	// IMP=0x00000000000bfbe6
- (void)setPreferredMediaBitrateWithConfiguration:(id)arg1;	// IMP=0x00000000000bfb01
- (id)streamIDsFromTransport;	// IMP=0x00000000000bf8a9
- (void)cleanupBeforeReconfigure:(id)arg1;	// IMP=0x00000000000bf5b6
- (void)createReportSSRCListWithStreamConfigs:(id)arg1;	// IMP=0x00000000000bf38c
- (id)createTransportWithStreamConfig:(id)arg1;	// IMP=0x00000000000bee2e
- (_Bool)setupSourceTransport:(id)arg1;	// IMP=0x00000000000bed2e
- (_Bool)validateAudioStreamConfigurations:(id)arg1;	// IMP=0x00000000000be8cc
- (void)onCallIDChanged;	// IMP=0x00000000000be7a2
- (id)supportedPayloads;	// IMP=0x00000000000be789
- (_Bool)shouldUseNWConnectionBackingSocket;	// IMP=0x00000000000be781
@property(readonly, nonatomic) unsigned int actualAudioSendingBitrate;
- (void)setTargetBitrate:(unsigned int)arg1 rateChangeCounter:(unsigned int)arg2;	// IMP=0x00000000000be71e
- (void)setVCStatistics:(struct tagVCStatisticsMessage)arg1;	// IMP=0x00000000000be6dd
- (CDUnknownFunctionPointerType)pullSamplesCallback;	// IMP=0x00000000000bd99f
@property(readonly, nonatomic) void *realtimeSourceContext;
@property(nonatomic) float volume;
@property(nonatomic, getter=isRemoteMuted) _Bool remoteMuted;
@property(nonatomic, getter=isMuted) _Bool muted; // @synthesize muted=_isMuted;
@property(nonatomic) _Bool sendActiveVoiceOnly;
- (void)setStreamDirection:(long long)arg1;	// IMP=0x00000000000bd6fd
- (_Bool)generateReceptionReportList:(struct _RTCP_RECEPTION_REPORT *)arg1 reportCount:(char *)arg2;	// IMP=0x00000000000bd680
- (void)cleanupAudio;	// IMP=0x00000000000bd61c
- (void)prepareAudio;	// IMP=0x00000000000bd5ef
- (void)setFrequencyMeteringEnabled:(_Bool)arg1 meterType:(int)arg2;	// IMP=0x00000000000bd5a5
- (_Bool)isFrequencyMeteringEnabled:(int)arg1;	// IMP=0x00000000000bd590
- (struct _METER_INFO *)meterWithType:(int)arg1;	// IMP=0x00000000000bd56e
- (void)stopSendDTMFEvent;	// IMP=0x00000000000bd371
- (void)sendDTMFEvent:(id)arg1;	// IMP=0x00000000000bd304
- (_Bool)bitrateIsAudioOnly;	// IMP=0x00000000000bd2de
- (_Bool)createAudioTransmitter:(long long)arg1 streamIDs:(id)arg2;	// IMP=0x00000000000bc8ba
- (unsigned int)packetExpirationTimeForStreamConfig:(id)arg1 codecType:(long long)arg2;	// IMP=0x00000000000bc7c8
- (_Bool)createAudioReceiver;	// IMP=0x00000000000bb736
- (void)configureAudioJBAlgos:(struct tagVCAudioReceiverConfig *)arg1;	// IMP=0x00000000000bb5f7
- (int)getPacketsPerBundleForStreamConfig:(id)arg1;	// IMP=0x00000000000bb49b
- (void)dealloc;	// IMP=0x00000000000bae09
- (_Bool)setupAudioStreamWithClientPid:(int)arg1 enableAudioPowerSpectrum:(_Bool)arg2;	// IMP=0x00000000000ba336
- (id)setLocalParticipantInfo:(id)arg1 networkSockets:(id)arg2 withError:(id *)arg3;	// IMP=0x00000000000ba203
- (id)initWithClientPid:(int)arg1 ssrc:(unsigned int)arg2 transportSessionID:(unsigned int)arg3;	// IMP=0x00000000000ba176
- (id)initWithClientPid:(int)arg1 ssrc:(unsigned int)arg2;	// IMP=0x00000000000ba0e7
- (id)initWithClientPid:(int)arg1;	// IMP=0x00000000000ba058
- (void)setupAudioPowerSpectrum;	// IMP=0x00000000000b9f62
- (void)setDeviceRoleForAudioStreamMode:(long long)arg1 direction:(long long)arg2;	// IMP=0x00000000000b9e87
- (void)didEnterState:(int)arg1 oldState:(int)arg2;	// IMP=0x00000000000b9dc5
- (void)willExitState:(int)arg1 newState:(int)arg2;	// IMP=0x00000000000b9da7
- (void)updateSyncSourceState:(int)arg1;	// IMP=0x00000000000b9d2a
- (double)lastReceivedRTCPPacketTime;	// IMP=0x00000000000b9ba0
- (double)lastReceivedRTPPacketTime;	// IMP=0x00000000000b9b8a
- (_Bool)setReceiverPayloads;	// IMP=0x00000000000b91cf
- (void)setDTXPayload:(id)arg1;	// IMP=0x00000000000b8ee6
- (id)addAudioPayload:(int)arg1;	// IMP=0x00000000000b8e6f
- (id)configForPayloadType:(int)arg1;	// IMP=0x00000000000b8d1a
- (unsigned int)preferredAudioBitrateForPayload:(int)arg1;	// IMP=0x00000000000b80a1
- (void)getCodecConfigForPayload:(int)arg1 block:(CDUnknownBlockType)arg2;	// IMP=0x00000000000b7d50
- (id)codecConfigForOpusWithStreamConfig:(id)arg1;	// IMP=0x00000000000b7cd1
- (_Bool)setupPayloads;	// IMP=0x00000000000b7953
- (id)getSupportedPayloads;	// IMP=0x00000000000b75c2
- (void)stopAudioWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b7421
- (void)startAudioWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00000000000b7045
- (_Bool)generateRTCPXRVoIPMetricsReports:(struct tagVCRTCPXRVoIPMetricsReport *)arg1 reportCount:(char *)arg2;	// IMP=0x00000000000b6c5b
- (_Bool)generateRTCPXRSummaryReports:(struct tagVCRTCPXRSummaryReport *)arg1 reportCount:(char *)arg2;	// IMP=0x00000000000b69d2
- (void)_computeInternalFormatForStreamConfigurations:(id)arg1;	// IMP=0x00000000000b6640
- (unsigned int)internalSampleRateForCodecType:(long long)arg1;	// IMP=0x00000000000b6581
- (unsigned int)computePacketTimestampWithInputTimestamp:(unsigned int)arg1 numSamples:(int)arg2 hostTime:(double)arg3;	// IMP=0x00000000000b6324
- (void)rateAdaptation:(id)arg1 targetBitrateDidChange:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;	// IMP=0x00000000002a9a8e
- (void)telephonyInterface:(id)arg1 anbrRecommendation:(unsigned int)arg2 forDirection:(long long)arg3;	// IMP=0x00000000002a993b
- (void)telephonyInterface:(id)arg1 anbrActivationUpdate:(_Bool)arg2;	// IMP=0x00000000002a9910
- (void)handleANBR:(unsigned int)arg1 forDirection:(long long)arg2;	// IMP=0x00000000002a9394
- (int)selectCodecBandwidthForCodecRateMode:(int)arg1;	// IMP=0x00000000002a90b6
- (void)handleDownlinkANBR:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x00000000002a908b
- (void)handleUplinkANBR:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x00000000002a8fde
- (void)handleCodecModeChangeEvent:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x00000000002a8a6a
- (void)notifyCodecModeChangeEvent:(struct _VCAudioCodecModeChangeEvent)arg1 didUpdateBandwidth:(_Bool)arg2 didUpdateBitrate:(_Bool)arg3;	// IMP=0x00000000002a8a13
- (void)queryAnbrBitrate:(unsigned int)arg1 forDirection:(long long)arg2;	// IMP=0x00000000002a875b
- (void)setRemoteCodecTypeAndSampleRate:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x00000000002a86ee
- (void)notifyCodecModeChangeToCT:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x00000000002a86bc
- (void)configureCellularFeatures;	// IMP=0x00000000002a8543
- (_Bool)isVoLTERateAdaptationEnabled;	// IMP=0x00000000002a8462
- (void)setJitterBufferMode:(int)arg1;	// IMP=0x00000000002a838e
- (void)handleWiFiToCelluarHandover;	// IMP=0x00000000002a82db
- (void)handleCellularToWiFiHandover;	// IMP=0x00000000002a8238
- (void)setIsLocalCelluar:(unsigned int)arg1;	// IMP=0x00000000002a7f09

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

