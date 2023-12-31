//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMutableDictionary, NSMutableSet, NSSet, NSString, VCAudioPowerSpectrumSource, VCSystemAudioCaptureSession, VCVideoRule;
@protocol VCSessionUplinkBandwidthAllocator;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantLocal
{
    NSArray *_uplinkBandwidthAllocators;	// 440 = 0x1b8
    id <VCSessionUplinkBandwidthAllocator> _uplinkBandwidthAllocator;	// 448 = 0x1c0
    _Bool _encryptionInfoReceived;	// 456 = 0x1c8
    unsigned int _currentVCMediaQueueSize;	// 460 = 0x1cc
    unsigned int _currentUplinkTargetBitrate;	// 464 = 0x1d0
    unsigned int _currentRateChangeCounter;	// 468 = 0x1d4
    unsigned int _lastSentAudioSampleTime;	// 472 = 0x1d8
    double _lastSentAudioHostTime;	// 480 = 0x1e0
    struct _opaque_pthread_rwlock_t _audioTimestampRWLock;	// 488 = 0x1e8
    unsigned char _lastAudioPriority;	// 688 = 0x2b0
    unsigned char _lastVideoPriority;	// 689 = 0x2b1
    unsigned short _connectionStatsStreamID;	// 690 = 0x2b2
    unsigned int _uplinkBitrateCapWifi;	// 692 = 0x2b4
    unsigned int _uplinkBitrateCapCell;	// 696 = 0x2b8
    _Atomic unsigned char _videoPriority;	// 700 = 0x2bc
    _Bool _videoPriorityEnabled;	// 701 = 0x2bd
    _Bool _shouldResize;	// 702 = 0x2be
    _Bool _enableRedundancy;	// 703 = 0x2bf
    _Bool _enableVADFiltering;	// 704 = 0x2c0
    _Bool _isVCMediaQueueScheduledForServerBasedStreams;	// 705 = 0x2c1
    NSMutableSet *_localPublishedStreams;	// 712 = 0x2c8
    float _averageSilenceAudioPower;	// 720 = 0x2d0
    unsigned char _audioPriorityRampUp;	// 724 = 0x2d4
    unsigned char _audioPriorityDecaySlow;	// 725 = 0x2d5
    unsigned char _audioPriorityDecayFast;	// 726 = 0x2d6
    float _audioVoiceDetectionSensitivity;	// 728 = 0x2d8
    float _audioSilencePowerAverageMultiplier;	// 732 = 0x2dc
    unsigned char _forcedAudioPriorityValue;	// 736 = 0x2e0
    double _forcedAudioPriorityLastUpdateTime;	// 744 = 0x2e8
    _Bool _forcedAudioPriorityEnabled;	// 752 = 0x2f0
    VCVideoRule *_videoRule;	// 760 = 0x2f8
    _Bool _speechDetected;	// 768 = 0x300
    struct opaqueVCVoiceDetector *_voiceDetector;	// 776 = 0x308
    double _fecRatio;	// 784 = 0x310
    NSMutableSet *_audioPayloadTypes;	// 792 = 0x318
    NSMutableSet *_videoPayloadTypes;	// 800 = 0x320
    VCAudioPowerSpectrumSource *_powerSpectrumSource;	// 808 = 0x328
    int _currentVideoCaptureFrameRate;	// 816 = 0x330
    int _maxSupportedMultiwayCameraFrameRate;	// 820 = 0x334
    long long _maxSupportedMultiwayVideoResolution;	// 824 = 0x338
    unsigned char _remotePresentationState;	// 832 = 0x340
    _Bool _isRemotePresentationLarge;	// 833 = 0x341
    struct _VCSessionParticipantLocalOneToOneSettings _oneToOneSettings;	// 840 = 0x348
    _Bool _isRemoteOnPeace;	// 888 = 0x378
    int _videoCaptureSource;	// 892 = 0x37c
    _Bool _forceMinBitrate;	// 896 = 0x380
    unsigned int _minBitrate;	// 900 = 0x384
    NSMutableDictionary *_streamInputIDToCaptureSourceIDMap;	// 904 = 0x388
    VCSystemAudioCaptureSession *_systemAudioCaptureSession;	// 912 = 0x390
    _Bool _isMixingSystemAudio;	// 920 = 0x398
    double _spatialAudioDisabledLastUpdateTime;	// 928 = 0x3a0
    NSMutableSet *_generatedStreamIDs;	// 936 = 0x3a8
    NSMutableSet *_generatedSSRCs;	// 944 = 0x3b0
    double _initTime;	// 952 = 0x3b8
    NSArray *_remoteParticipants;	// 960 = 0x3c0
    _Bool _isVoiceProcessingEnabled;	// 968 = 0x3c8
    _Bool _isRetransmissionEnabled;	// 969 = 0x3c9
    double _lastVideoEnabledChangedTime;	// 976 = 0x3d0
    NSArray *_peerSubscribedStreams;	// 984 = 0x3d8
}

+ (_Bool)updateUplinkStreamsForPeerSubscribedStreams:(id)arg1 streamGroup:(id)arg2 uplinkBandwidthAllocator:(id)arg3;	// IMP=0x00100000002915f2
+ (_Bool)updateBandwidthAllocator:(id)arg1 activeStream:(id)arg2 peerSubscribedStreams:(id)arg3 streamGroup:(id)arg4;	// IMP=0x00100000002911a1
+ (_Bool)negotiatorCipherSuite:(unsigned int *)arg1 fromMediaStreamConfig:(id)arg2;	// IMP=0x0010000000286598
@property(copy, nonatomic) NSArray *remoteParticipants; // @synthesize remoteParticipants=_remoteParticipants;
@property(nonatomic, setter=setRetransmissionEnabled:) _Bool isRetransmissionEnabled; // @synthesize isRetransmissionEnabled=_isRetransmissionEnabled;
@property(nonatomic) _Bool isRemoteOnPeace; // @synthesize isRemoteOnPeace=_isRemoteOnPeace;
@property(readonly, nonatomic) struct _VCSessionParticipantLocalOneToOneSettings oneToOneSettings; // @synthesize oneToOneSettings=_oneToOneSettings;
@property(readonly, nonatomic) NSSet *videoPayloadTypes; // @synthesize videoPayloadTypes=_videoPayloadTypes;
@property(readonly, nonatomic) NSSet *audioPayloadTypes; // @synthesize audioPayloadTypes=_audioPayloadTypes;
@property(copy, nonatomic) NSArray *peerSubscribedStreams; // @synthesize peerSubscribedStreams=_peerSubscribedStreams;
@property(nonatomic) _Bool enableVADFiltering; // @synthesize enableVADFiltering=_enableVADFiltering;
@property(nonatomic) unsigned int uplinkBitrateCapCell; // @synthesize uplinkBitrateCapCell=_uplinkBitrateCapCell;
@property(nonatomic) unsigned int uplinkBitrateCapWifi; // @synthesize uplinkBitrateCapWifi=_uplinkBitrateCapWifi;
@property(readonly, nonatomic) unsigned short connectionStatsStreamID; // @synthesize connectionStatsStreamID=_connectionStatsStreamID;
@property(nonatomic) _Bool encryptionInfoReceived; // @synthesize encryptionInfoReceived=_encryptionInfoReceived;
- (unsigned int)remainderBitrateSplitForStreamToken:(long long)arg1;	// IMP=0x000000000029531b
- (_Bool)shouldCapStream:(long long)arg1 cappedBitrate:(unsigned int *)arg2;	// IMP=0x0000000000295296
- (id)qualityTierTableForStreamToken:(long long)arg1;	// IMP=0x000000000029520c
- (void)reportCameraCompositionEnabled:(_Bool)arg1;	// IMP=0x0000000000295162
- (void)streamGroup:(id)arg1 didChangeState:(unsigned int)arg2;	// IMP=0x0000000000295113
- (void)streamGroup:(id)arg1 didSuspendStreams:(_Bool)arg2;	// IMP=0x0000000000294cbf
- (void)didReceiveCustomReportPacket:(struct tagRTCPPACKET *)arg1 arrivalNTPTime:(union tagNTP)arg2;	// IMP=0x0000000000294c6d
- (void)didReceiveReportPacket:(struct tagRTCPPACKET *)arg1 arrivalNTPTime:(union tagNTP)arg2;	// IMP=0x0000000000294c1b
- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x00000000002946b9
- (void)serverDidDie;	// IMP=0x000000000029468e
- (void)updateMediaStreamsForStreamGroup:(id)arg1 uplinkBitrateCap:(unsigned int)arg2 rateChangeCounter:(unsigned int)arg3;	// IMP=0x000000000029454d
- (void)dispatchedHandleActiveConnectionChangeForStreamGroups:(id)arg1;	// IMP=0x00000000002942c3
- (void)reportVideoEnabledStatsWithVideoEnabled:(_Bool)arg1;	// IMP=0x000000000029415f
- (void)didStopReacting;	// IMP=0x0000000000294058
- (void)reactionDidStart:(id)arg1;	// IMP=0x0000000000293f3e
- (void)captureSource1080pAvailabilityDidChange:(_Bool)arg1;	// IMP=0x0000000000293e9e
- (void)frameRateIsBeingThrottled:(int)arg1 thermalLevelDidChange:(_Bool)arg2 powerLevelDidChange:(_Bool)arg3;	// IMP=0x0000000000293d83
- (void)captureSourcePortraitBlurEnabledDidChange:(_Bool)arg1;	// IMP=0x0000000000293d57
- (void)captureSourceCenterStageEnabledDidChange:(_Bool)arg1;	// IMP=0x0000000000293d2b
- (void)captureSourcePositionDidChange:(_Bool)arg1;	// IMP=0x0000000000293cff
- (void)cameraAvailabilityDidChange:(_Bool)arg1;	// IMP=0x0000000000293a5b
- (void)thermalLevelDidChange:(int)arg1;	// IMP=0x0000000000293774
- (id)clientCaptureRule;	// IMP=0x000000000029376c
- (void)avConferencePreviewError:(id)arg1;	// IMP=0x000000000029359d
- (CDUnknownBlockType)copyOnVideoFrameBlock;	// IMP=0x0000000000293509
- (void)sourceFrameRateDidChange:(unsigned int)arg1;	// IMP=0x000000000029333b
- (_Bool)onVideoFrame:(struct opaqueCMSampleBuffer *)arg1 frameTime:(CDStruct_1b6d18a9)arg2 attribute:(CDStruct_51555cf6)arg3;	// IMP=0x000000000029330b
- (struct tagVCNetworkStreamIdentifiers)generateSSRC:(_Bool)arg1 streamID:(_Bool)arg2 repairStreamID:(_Bool)arg3;	// IMP=0x0000000000292cb2
- (unsigned int)generateSSRC;	// IMP=0x0000000000292c96
- (unsigned short)generateIDSStreamID;	// IMP=0x0000000000292c72
- (void)dispatchedUpdateVCMediaQueueSize:(unsigned int)arg1;	// IMP=0x0000000000292821
- (void)updateVCMediaQueueSize:(unsigned int)arg1;	// IMP=0x000000000029278a
- (void)updateTargetBitrateOneToOne:(unsigned int)arg1 rateChangeCounter:(unsigned int)arg2;	// IMP=0x0000000000292468
- (void)dispatchedUpdateUplinkTargetBitrate:(unsigned int)arg1 rateChangeCounter:(unsigned int)arg2;	// IMP=0x00000000002922c1
- (void)updateUplinkTargetBitrateForStreamGroups;	// IMP=0x000000000029203a
- (void)updateUplinkTargetBitrate:(unsigned int)arg1 rateChangeCounter:(unsigned int)arg2;	// IMP=0x0000000000291d28
- (void)redundancyController:(id)arg1 redundancyVectorDidChange:(CDStruct_d7e2e0ee)arg2;	// IMP=0x0000000000291d22
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;	// IMP=0x0000000000291d1c
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;	// IMP=0x0000000000291d16
- (_Bool)enableRedundancy:(_Bool)arg1;	// IMP=0x00000000002918be
- (void)updatePeerSubscribedStreams:(id)arg1 streamGroup:(id)arg2;	// IMP=0x0000000000291006
- (void)updateRedundancyEnabledForPeerSubscribedStreams:(id)arg1;	// IMP=0x0000000000290dc4
- (_Bool)checkSubscribedStreamsConsistency:(id)arg1;	// IMP=0x000000000029016e
- (void)generateKeyFrameWithStreamID:(id)arg1 streamGroupID:(unsigned int)arg2 firType:(int)arg3;	// IMP=0x000000000028ffd7
- (void)setupEncodingModeWithVideoStreamConfig:(id)arg1;	// IMP=0x000000000028fe2e
- (id)newStreamInfoWithAudioStreamWithConfiguration:(id)arg1 idsDestination:(id)arg2 isMultiway:(_Bool)arg3 streamGroupID:(unsigned int)arg4;	// IMP=0x000000000028f25f
- (id)newVideoStreamWithConfig:(id)arg1 groupID:(unsigned int)arg2;	// IMP=0x000000000028f1b9
- (_Bool)shouldEnableUplinkRetransmissionForStreamGroupID:(unsigned int)arg1;	// IMP=0x000000000028f14b
- (id)newStreamInfoWithVideoStreamWithConfiguration:(id)arg1 idsDestination:(id)arg2 groupID:(unsigned int)arg3;	// IMP=0x000000000028e6ae
- (id)getAudioDumpName;	// IMP=0x000000000028e6a6
- (void)updateAudioPriorityWithSampleBuffer:(struct opaqueVCAudioBufferList *)arg1;	// IMP=0x000000000028e505
- (void)stopVoiceActivityDetection;	// IMP=0x000000000028e4dd
- (void)startVoiceActivityDetection;	// IMP=0x000000000028e494
- (_Bool)isHighPriorityAudioWithPower:(float)arg1 voiceActive:(_Bool)arg2;	// IMP=0x000000000028e437
- (void)setMuted:(_Bool)arg1;	// IMP=0x000000000028e282
- (void)createOpaqueData;	// IMP=0x000000000028e239
- (_Bool)createParticipantInfo;	// IMP=0x000000000028de95
- (void)addCallInfoBlobToParticipantInfo:(id)arg1;	// IMP=0x000000000028daa5
- (id)setupStreamRTP:(id)arg1;	// IMP=0x000000000028da90
- (id)audioRuleCollectionWithAudioStreamConfig:(id)arg1;	// IMP=0x000000000028d3f5
- (void)updateWindowState:(int)arg1 isLocal:(_Bool)arg2 windowRect:(struct CGRect)arg3;	// IMP=0x000000000028d073
- (_Bool)isRemotePresentationLarge:(struct CGRect)arg1;	// IMP=0x000000000028d043
- (_Bool)containsStreamWithSSRC:(unsigned int)arg1;	// IMP=0x000000000028ceca
- (void)updateSupportedAudioRules:(id)arg1;	// IMP=0x000000000028cc40
- (id)supportedAudioRules;	// IMP=0x000000000028cc2c
- (id)newVideoStreamOneToOneConfigurationWithStreamGroupId:(unsigned int)arg1;	// IMP=0x000000000028ca0e
- (id)newAudioStreamOneToOneConfigurationWithStreamGroupId:(unsigned int)arg1;	// IMP=0x000000000028c7b6
- (void)setupOneToOneEncryptionInfoWithConfiguration:(id)arg1;	// IMP=0x000000000028c5bf
- (void)updateOneToOneBandwidthAllocationTable:(id)arg1 mediaType:(unsigned char)arg2 streamGroupID:(unsigned int)arg3;	// IMP=0x000000000028c36f
- (_Bool)configureOneToOneAudioStreamsWithDeviceRole:(int)arg1;	// IMP=0x000000000028c002
- (_Bool)configureOneToOneVideoStreamsWithDeviceRole:(int)arg1;	// IMP=0x000000000028bbb8
- (_Bool)configureWithOneToOneParticipantConfig:(id)arg1 shouldConfigureGFTStreams:(_Bool)arg2;	// IMP=0x000000000028b23f
- (_Bool)configureMultiwayStreamGroups;	// IMP=0x000000000028aeb1
- (void)setupOneToOneAudioStreamWithConfig:(id)arg1 streamGroupID:(unsigned int)arg2;	// IMP=0x000000000028a7e0
- (_Bool)setupOneToOneVideoStreamWithConfig:(id)arg1 streamGroupID:(unsigned int)arg2;	// IMP=0x0000000000289fe4
- (void)overrideVideoStreamConfigWithDefaults:(id)arg1 streamGroupID:(unsigned int)arg2;	// IMP=0x0000000000289df5
- (void)logRemoteParticipantInfo:(id)arg1;	// IMP=0x0000000000289c52
- (int)negotiateOneToOne:(id)arg1;	// IMP=0x0000000000289425
- (unsigned int)oneToOneVideoStreamRedundancyMode;	// IMP=0x00000000002892f4
- (unsigned int)oneToOneVideoStreamRedundancyPercentage;	// IMP=0x000000000028908c
- (void)updatePayloadTypesWithAudioConfigs:(id)arg1;	// IMP=0x0000000000288fba
- (void)updatePayloadTypesWithVideoConfigs:(id)arg1;	// IMP=0x0000000000288ee8
- (_Bool)initializeMediaNegotiator;	// IMP=0x00000000002884f7
- (id)featureListString:(id)arg1 removingPayload:(int)arg2 andPayload:(int)arg3;	// IMP=0x000000000028846c
- (_Bool)initializeOneToOneStreamGroup:(id)arg1 forLocalConfig:(id)arg2;	// IMP=0x00000000002880d8
- (_Bool)initializeStreamGroupsForLocalConfig:(id)arg1;	// IMP=0x0000000000287e54
- (void)initializeMultiwayVideoStreamGroup:(id)arg1 forLocalConfig:(id)arg2;	// IMP=0x0000000000287c23
- (void)initializeMultiwayAudioStreamGroup:(id)arg1 forLocalConfig:(id)arg2;	// IMP=0x00000000002879ef
- (id)newStreamGroupNegotiationConfigForStreamGroup:(id)arg1;	// IMP=0x000000000028671f
- (void)streamGroupNegotiationVideoConfigForStreamGroup:(id)arg1 streamConfig:(id)arg2 mediaConfig:(id)arg3;	// IMP=0x0000000000286359
- (id)newMediaNegotiatorAudioConfigurationForMediaType:(unsigned int)arg1;	// IMP=0x000000000028612c
- (id)multiwayVideoStreamNegotiatorConfigForStreamConfig:(id)arg1 isSubstream:(_Bool)arg2;	// IMP=0x0000000000285edf
- (id)multiwayAudioStreamNegotiatorConfigForStreamConfig:(id)arg1;	// IMP=0x0000000000285c6a
- (_Bool)completeStreamSetup:(id)arg1;	// IMP=0x0000000000285be7
- (id)newStreamInfoWithAudioStreamWithConfiguration:(id)arg1 streamToken:(long long)arg2 isMultiway:(_Bool)arg3 streamGroupID:(unsigned int)arg4;	// IMP=0x0000000000285795
- (void)updateMultiwayBandwithAllocationTable:(id)arg1 mediaType:(unsigned int)arg2 streamGroupID:(unsigned int)arg3 encoderGroupID:(unsigned int)arg4 minNetworkBitrate:(unsigned int)arg5 maxNetworkBitrate:(unsigned int)arg6;	// IMP=0x0000000000284fdf
- (id)newStreamInfoWithVideoStreamWithConfiguration:(id)arg1 streamGroupID:(unsigned int)arg2;	// IMP=0x0000000000284dad
- (id)newAudioStreamSendGroupWithConfig:(id)arg1 streamGroupID:(unsigned int)arg2;	// IMP=0x0000000000284d6e
- (_Bool)setupAudioStreamsWithStreamConfiguration:(id)arg1 streamGroupConfiguration:(id)arg2;	// IMP=0x00000000002847f5
- (_Bool)setupVideoMediaStreamsWithStreamGroupConfiguration:(id)arg1 streamGroupConfig:(id)arg2 streamGroupID:(unsigned int)arg3 mediaType:(unsigned int)arg4;	// IMP=0x0000000000283ac2
- (_Bool)setupVideoStreamsWithStreamConfiguration:(id)arg1 streamGroupConfiguration:(id)arg2;	// IMP=0x0000000000283795
- (struct opaqueCMFormatDescription *)getCaptionsFormatDescription;	// IMP=0x0000000000283730
- (struct opaqueCMFormatDescription *)getAudioFormatDescriptionForStreamGroupID:(unsigned int)arg1;	// IMP=0x000000000028368b
- (id)newAudioSendGroupConfigWithStreamGroupID:(unsigned int)arg1 streamGroupConfiguration:(id)arg2;	// IMP=0x00000000002830bc
- (id)newVideoSendGroupConfigWithStreamGroupID:(unsigned int)arg1 streamGroupConfiguration:(id)arg2;	// IMP=0x00000000002830b4
- (_Bool)setupAudioStreamsWithStreamConfigurations:(id)arg1 mediaNegotiatorConfig:(id)arg2 streamGroupConfiguration:(id)arg3;	// IMP=0x0000000000282de9
- (_Bool)applyCachedMediaStreamsWithStreamConfigurations:(id)arg1 mediaNegotiatorConfig:(id)arg2;	// IMP=0x000000000028294d
- (_Bool)setupVideoStreamsWithStreamConfigurations:(id)arg1 mediaNegotiatorConfig:(id)arg2 streamGroupConfiguration:(id)arg3;	// IMP=0x00000000002828fc
- (_Bool)applyCachedStreamGroupMediaStreams:(id)arg1 toMultiwayConfig:(id)arg2;	// IMP=0x0000000000282504
- (_Bool)applyCachedMediaStreams:(id)arg1 toMultiwayConfig:(id)arg2;	// IMP=0x00000000002822ee
- (_Bool)isStreamGroupActive:(id)arg1;	// IMP=0x000000000028212e
- (_Bool)isOneToOneStreamGroup:(unsigned int)arg1;	// IMP=0x000000000028206d
- (_Bool)remoteParticipantsSupportStreamGroupID:(unsigned int)arg1;	// IMP=0x0000000000281ea6
- (_Bool)wolfParticipantSupportsStreamGroupID:(unsigned int)arg1;	// IMP=0x0000000000281e02
- (_Bool)webParticipantSupportsStreamGroupID:(unsigned int)arg1;	// IMP=0x0000000000281de8
- (_Bool)nativeParticipantSupportsStreamGroupID:(unsigned int)arg1;	// IMP=0x0000000000281dac
- (_Bool)isActiveMediaType:(unsigned int)arg1;	// IMP=0x0000000000281cc8
- (void)setCellularUniqueTag:(unsigned int)arg1;	// IMP=0x0000000000281bb1
@property(readonly, nonatomic) unsigned int currentUplinkTotalBitrate;
- (void)setMediaSuggestion:(struct VCRateControlMediaSuggestion *)arg1;	// IMP=0x0000000000281a27
- (_Bool)configureAudioIOWithDeviceRole:(int)arg1 operatingMode:(int)arg2;	// IMP=0x00000000002811e3
- (struct tagVCAudioIOConfiguration)audioIOConfigWithDeviceRole:(int)arg1 operatingMode:(int)arg2;	// IMP=0x0000000000280c8e
- (void)updateMediaSettingsWithConfig:(id)arg1;	// IMP=0x00000000002809ef
- (unsigned int)calculateUplinkTotalBitrateForMediaStreams:(id)arg1;	// IMP=0x000000000028084a
@property(readonly, nonatomic) struct __CFString *activeStreamKeys;
- (void)collectAudioChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x00000000002804d3
- (void)collectVideoChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x0000000000280335
- (void)stopAudioIOCompletion;	// IMP=0x0000000000280323
- (void)stopSystemAudioCapture;	// IMP=0x000000000027ffcc
- (void)startSystemAudioCapture;	// IMP=0x000000000027fdf7
- (_Bool)setState:(unsigned int)arg1;	// IMP=0x000000000027fd40
- (void)stopVideoCaptureClient;	// IMP=0x000000000027fd1c
- (_Bool)isOneToOneModeEnabled;	// IMP=0x000000000027fc3f
- (void)setOneToOneModeEnabled:(_Bool)arg1;	// IMP=0x000000000027f983
- (void)startMultiwayStreams;	// IMP=0x000000000027f40e
- (void)resumeStreamsOnOneToOneModeSwitch;	// IMP=0x000000000027eeb8
- (void)suspendStreamsOnOneToOneModeSwitch;	// IMP=0x000000000027ed58
- (void)resetOneToOneSettings;	// IMP=0x000000000027ed2a
- (void)deregisterForVideoCapture;	// IMP=0x000000000027ed24
- (void)registerForVideoCapture:(int)arg1;	// IMP=0x000000000027ed1e
- (struct CGSize)captureEncodingSize;	// IMP=0x000000000027ec22
@property(nonatomic) int currentVideoCaptureFrameRate;
- (void)updateActiveVoiceOnly;	// IMP=0x000000000027e680
- (void)updateVideoPaused:(_Bool)arg1;	// IMP=0x000000000027e44a
- (void)applyScreenEnabledSetting:(_Bool)arg1;	// IMP=0x000000000027e21b
- (id)applyVideoEnabledSetting:(_Bool)arg1;	// IMP=0x000000000027db8e
- (id)startCameraStreamGroups;	// IMP=0x000000000027d9b9
- (id)startMicStreamGroups;	// IMP=0x000000000027d7e2
- (_Bool)reconfigureAudioIOForVideoEnabled:(_Bool)arg1 error:(id *)arg2;	// IMP=0x000000000027d092
- (_Bool)reconfigureOneToOneAudioStream:(id)arg1 error:(id *)arg2;	// IMP=0x000000000027c723
- (int)maxCaptureCameraFrameRate;	// IMP=0x000000000027bad0
- (void)dispatchedSetAudioEnabled:(_Bool)arg1;	// IMP=0x000000000027b9f1
- (long long)maxCaptureResolution;	// IMP=0x000000000027b9e6
- (void)stop;	// IMP=0x000000000027b974
- (void)dispatchedStartOneToOneStreams;	// IMP=0x000000000027b780
- (void)start;	// IMP=0x000000000027b546
- (void)cleanupStreamInputs;	// IMP=0x000000000027b51e
- (_Bool)setupStreamInputsWithConfig:(id)arg1;	// IMP=0x000000000027b516
- (_Bool)setupStreamGroupsWithConfig:(id)arg1 negotiatorConfig:(id)arg2;	// IMP=0x000000000027b18b
- (_Bool)setupStreamGroupMediaSync;	// IMP=0x000000000027b107
- (_Bool)setupStreamGroupWithStreamGroupConfig:(id)arg1 negotiatorConfig:(id)arg2;	// IMP=0x000000000027ac7f
- (int)captureSourceIDFromStreamGroupConfig:(id)arg1;	// IMP=0x000000000027aab6
- (int)captureSourceIDFromStreamGroupID:(unsigned int)arg1;	// IMP=0x000000000027aa33
- (void)setupSystemAudioCapture;	// IMP=0x000000000027a8fb
- (_Bool)setupCameraStreamGroupWithStreamConfigs:(id)arg1 negotiatorConfig:(id)arg2 streamGroupConfiguration:(id)arg3;	// IMP=0x000000000027a5c8
- (_Bool)setupAudioStreamGroupWithStreamConfigs:(id)arg1 negotiatorConfig:(id)arg2 streamGroupConfiguration:(id)arg3;	// IMP=0x000000000027a2f8
- (unsigned int)mediaStateForMediaType:(unsigned int)arg1;	// IMP=0x000000000027a213
- (void)updateAudioSpectrumState;	// IMP=0x000000000027a0d9
- (id)processCachedParticipantData:(id)arg1;	// IMP=0x0000000000279e55
- (id)newUplinkBandwidthAllocators;	// IMP=0x0000000000279989
- (void)logDashboardLinks;	// IMP=0x00000000002797cb
- (void)dealloc;	// IMP=0x000000000027960a
- (id)initWithConfig:(id)arg1 delegate:(id)arg2;	// IMP=0x00000000002775a0

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

