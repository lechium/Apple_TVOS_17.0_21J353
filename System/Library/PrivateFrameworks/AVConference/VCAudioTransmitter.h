//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCStatisticsCollector, NSArray, NSDictionary, NSMutableArray, NSString, VCAudioPayload, VCAudioPayloadConfig, VCAudioRedBuilder, VCAudioTier, VCAudioTierPicker, VCPacketBundler, VCRedundancyControllerAudio, VCTransportSession;
@protocol VCAudioTransmitterDelegate;

__attribute__((visibility("hidden")))
@interface VCAudioTransmitter : NSObject
{
    VCPacketBundler *_audioBundler;	// 8 = 0x8
    VCAudioRedBuilder *_redBuilder;	// 16 = 0x10
    VCRedundancyControllerAudio *_redundancyController;	// 24 = 0x18
    struct opaqueVCAudioBufferList *_encodeBuffer;	// 32 = 0x20
    _Bool _lastIsTalking;	// 40 = 0x28
    double _lastTierSwitch;	// 48 = 0x30
    double _audioInterval;	// 56 = 0x38
    int _audioTierChangeRequestCount;	// 64 = 0x40
    int _audioTxBitrate;	// 68 = 0x44
    int _actualAudioSendingBitrate;	// 72 = 0x48
    unsigned int _lastSentAudioSampleTime;	// 76 = 0x4c
    unsigned char _inputMeter;	// 80 = 0x50
    unsigned int _maxAudioPacketSize;	// 84 = 0x54
    unsigned int _constantTransportOverhead;	// 88 = 0x58
    long long _blockSize;	// 96 = 0x60
    float _blockSeconds;	// 104 = 0x68
    double _lastUpdateQualityIndicator;	// 112 = 0x70
    int _qualityIndicator;	// 120 = 0x78
    VCAudioTierPicker *_audioTierPicker;	// 128 = 0x80
    VCAudioTier *_currentAudioTier;	// 136 = 0x88
    VCAudioTier *_requestedAudioTier;	// 144 = 0x90
    char *_lastInputSampleBuffer;	// 152 = 0x98
    unsigned int _lastInputSampleBufferSize;	// 160 = 0xa0
    int _audioHeaderSize;	// 164 = 0xa4
    _Bool _audioTierHysteresis;	// 168 = 0xa8
    void *_packetThread;	// 176 = 0xb0
    unsigned int _targetBitrate;	// 184 = 0xb8
    unsigned int _rateChangeCounter;	// 188 = 0xbc
    unsigned int _currentTargetBitrate;	// 192 = 0xc0
    unsigned int _currentDuplication;	// 196 = 0xc4
    unsigned int _redundancyPercentage;	// 200 = 0xc8
    double _redundancyInterval;	// 208 = 0xd0
    unsigned int _redundancyControllerNumPayloads;	// 216 = 0xd8
    unsigned int _redundancyControllerMaxDelay20ms;	// 220 = 0xdc
    AVCStatisticsCollector *_statisticsCollector;	// 224 = 0xe0
    _Bool _isAudioStalled;	// 232 = 0xe8
    unsigned int _sentAudioBytes;	// 236 = 0xec
    unsigned int _encodedBytes;	// 240 = 0xf0
    unsigned int _totalTxAudioBytes;	// 244 = 0xf4
    unsigned int _estimateTxAudioBytes;	// 248 = 0xf8
    unsigned int _audioFrameCounter;	// 252 = 0xfc
    unsigned int _silenceFrameCounter;	// 256 = 0x100
    unsigned int _vadSegmentCounter;	// 260 = 0x104
    struct tagHANDLE *_rtpHandle;	// 264 = 0x108
    struct tagHANDLE *_afrc;	// 272 = 0x110
    struct tagHANDLE *_mediaQueue;	// 280 = 0x118
    struct tagHANDLE *_rtpVideo;	// 288 = 0x120
    void *_controlInfoGenerator;	// 296 = 0x128
    _Bool _useRateControl;	// 304 = 0x130
    _Bool _isUseCaseWatchContinuity;	// 305 = 0x131
    _Bool _allowAudioSwitching;	// 306 = 0x132
    _Bool _supportsAdaptation;	// 307 = 0x133
    _Bool _needsPacketThread;	// 308 = 0x134
    _Bool _isLocalCellular_LowestConnectionQuality;	// 309 = 0x135
    _Bool _isRemoteCellular_LowestConnectionQuality;	// 310 = 0x136
    _Bool _isConnectedOnIPv6_LowestConnectionQuality;	// 311 = 0x137
    _Bool _isRedEnabled;	// 312 = 0x138
    _Bool _includeRedSequenceOffset;	// 313 = 0x139
    unsigned int _redNumPayloads;	// 316 = 0x13c
    unsigned int _redMaxDelay20ms;	// 320 = 0x140
    _Bool _transmitROC;	// 324 = 0x144
    NSMutableArray *_audioPayloads;	// 328 = 0x148
    VCAudioPayload *_currentDTXPayload;	// 336 = 0x150
    VCAudioPayload *_currentAudioPayload;	// 344 = 0x158
    int _currentRedPayloadType;	// 352 = 0x160
    unsigned int _currentAudioCap;	// 356 = 0x164
    struct tagVCAudioFrameFormat _inputFormat;	// 360 = 0x168
    struct opaqueRTCReporting *_reportingAgent;	// 408 = 0x198
    int _reportingModuleID;	// 416 = 0x1a0
    int _operatingMode;	// 420 = 0x1a4
    VCTransportSession *_transportSession;	// 424 = 0x1a8
    id _delegate;	// 432 = 0x1b0
    _Bool _ignoreSilence;	// 440 = 0x1b8
    unsigned int _tierNetworkBitrate;	// 444 = 0x1bc
    _Bool _sendActiveVoiceOnly;	// 448 = 0x1c0
    unsigned int _qualityIndex;	// 452 = 0x1c4
    int _ratType;	// 456 = 0x1c8
    double _lastReportingCallbackTime;	// 464 = 0x1d0
    double _lastReportingCallbackTimeShort;	// 472 = 0x1d8
    CDStruct_b671a7c4 _currentChannelMetrics;	// 480 = 0x1e0
    _Bool _periodicReportingEnabled;	// 568 = 0x238
    struct tagVCIDSChannelDataFormat _idsChannelDataFormat;	// 576 = 0x240
    unsigned int _maxIDSStreamIdCount;	// 656 = 0x290
    NSArray *_supportedNumRedundantPayload;	// 664 = 0x298
    _Bool _currentDTXEnable;	// 672 = 0x2a0
    unsigned char _mediaControlInfoVersion;	// 673 = 0x2a1
    _Bool _alwaysOnAudioRedundancyEnabled;	// 674 = 0x2a2
    _Bool _cellularAllowRedLowBitratesEnabled;	// 675 = 0x2a3
    _Bool _wifiAllowRedLowBitratesEnabled;	// 676 = 0x2a4
    struct tagVCMemoryPool *_audioBundlePool;	// 680 = 0x2a8
    unsigned long long _remoteIDSParticipantID;	// 688 = 0x2b0
    _Bool _useChannelDataFormat;	// 696 = 0x2b8
    _Bool _useWiFiTiers;	// 697 = 0x2b9
    _Bool _supportsCodecBandwidthUpdate;	// 698 = 0x2ba
    struct ifnet_interface_advisory _lastNWConnectionNotification;	// 704 = 0x2c0
    struct tagVCCryptor *_sframeCryptor;	// 800 = 0x320
    struct tagVCAudioIssueDetector *_audioIssueDetector;	// 808 = 0x328
    _Bool _audioDumpEnabled;	// 816 = 0x330
    struct tagVCAudioDump *_encoderOutAudioDump;	// 824 = 0x338
    struct tagVCAudioDump *_encoderInAudioDump;	// 832 = 0x340
    struct tagVCAudioDumpPayloadInfo _payloadInfo;	// 840 = 0x348
    int _payloadUsed;	// 864 = 0x360
    _Bool _canSendPacket;	// 868 = 0x364
    int _sentBytes;	// 872 = 0x368
    unsigned char _tierPickerMode;	// 876 = 0x36c
    _Bool _ramStadSRCEnabled;	// 877 = 0x36d
    unsigned int _rtpTimestampBase;	// 880 = 0x370
    _Bool _shouldApplyRedAsBoolean;	// 884 = 0x374
    unsigned int _sentAudioBytesShort;	// 888 = 0x378
    unsigned int _packetExpirationTimeInMillisecond;	// 892 = 0x37c
    _Bool _targetBitrateIsAudioOnly;	// 896 = 0x380
}

@property(nonatomic) unsigned char mediaControlInfoVersion; // @synthesize mediaControlInfoVersion=_mediaControlInfoVersion;
@property _Bool periodicReportingEnabled; // @synthesize periodicReportingEnabled=_periodicReportingEnabled;
@property(retain, nonatomic) VCAudioTierPicker *audioTierPicker; // @synthesize audioTierPicker=_audioTierPicker;
@property(nonatomic) _Bool useWiFiTiers; // @synthesize useWiFiTiers=_useWiFiTiers;
@property(nonatomic, getter=isCurrentDTXEnabled) _Bool currentDTXEnable; // @synthesize currentDTXEnable=_currentDTXEnable;
@property(nonatomic) _Bool sendActiveVoiceOnly; // @synthesize sendActiveVoiceOnly=_sendActiveVoiceOnly;
@property(nonatomic) CDStruct_b671a7c4 currentChannelMetrics; // @synthesize currentChannelMetrics=_currentChannelMetrics;
@property(retain, nonatomic) NSArray *supportedNumRedundantPayload; // @synthesize supportedNumRedundantPayload=_supportedNumRedundantPayload;
@property(nonatomic) unsigned int maxIDSStreamIdCount; // @synthesize maxIDSStreamIdCount=_maxIDSStreamIdCount;
@property(nonatomic) int qualityIndicator; // @synthesize qualityIndicator=_qualityIndicator;
@property(nonatomic) _Bool isAudioStalled; // @synthesize isAudioStalled=_isAudioStalled;
@property(nonatomic) unsigned int rateChangeCounter; // @synthesize rateChangeCounter=_rateChangeCounter;
@property(nonatomic) unsigned int targetBitrate; // @synthesize targetBitrate=_targetBitrate;
@property(readonly, nonatomic) _Bool ignoreSilence; // @synthesize ignoreSilence=_ignoreSilence;
@property(readonly, nonatomic) _Bool isRedEnabled; // @synthesize isRedEnabled=_isRedEnabled;
@property(nonatomic) int operatingMode; // @synthesize operatingMode=_operatingMode;
@property(readonly, nonatomic) unsigned int lastSentAudioSampleTime; // @synthesize lastSentAudioSampleTime=_lastSentAudioSampleTime;
@property unsigned char inputMeter; // @synthesize inputMeter=_inputMeter;
@property(readonly, nonatomic) int actualAudioSendingBitrate; // @synthesize actualAudioSendingBitrate=_actualAudioSendingBitrate;
@property(readonly, nonatomic) int audioTxBitrate; // @synthesize audioTxBitrate=_audioTxBitrate;
@property(readonly, nonatomic) VCAudioTier *currentAudioTier; // @synthesize currentAudioTier=_currentAudioTier;
@property(readonly, nonatomic) VCPacketBundler *audioBundler; // @synthesize audioBundler=_audioBundler;
- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x000000000044d2cf
- (void)handleActiveConnectionChangeDefault:(id)arg1;	// IMP=0x000000000044d065
- (void)handleActiveConnectionChangeMultiway:(id)arg1;	// IMP=0x000000000044ce27
- (void)audioIssueDetectorStopAndFinalize;	// IMP=0x000000000044c964
- (void)audioIssueDetectorCreateAndConfigure;	// IMP=0x000000000044c6c5
- (void)reportRTCPPacket;	// IMP=0x000000000044c6ad
- (void)processNWConnectionNotification:(struct ifnet_interface_advisory *)arg1;	// IMP=0x000000000044c45a
- (void)redundancyController:(id)arg1 redundancyPercentageDidChange:(unsigned int)arg2;	// IMP=0x000000000044c11f
- (void)setStreamIDs:(id)arg1;	// IMP=0x000000000044bff9
- (void)setRedNumPayloads:(int)arg1 withMaxDelay:(int)arg2 shouldResetHistory:(_Bool)arg3;	// IMP=0x000000000044bebd
- (void)logTierInfo:(int)arg1;	// IMP=0x000000000044bd70
@property(readonly, nonatomic) unsigned int redMaxDelay20ms;
@property(readonly, nonatomic) unsigned int redNumPayloads;
@property(readonly, nonatomic) unsigned int encodedBytes;
- (unsigned int)sentAudioBytesShort;	// IMP=0x000000000044bd22
@property(readonly, nonatomic) unsigned int sentAudioBytes;
- (void)stop;	// IMP=0x000000000044bab3
- (void)start;	// IMP=0x000000000044b43b
- (void)useAudioTier:(id)arg1;	// IMP=0x000000000044b3a2
- (void)useAudioPayload:(id)arg1 withBitrate:(unsigned int)arg2;	// IMP=0x000000000044b1dd
- (void)updateAudioTxBitrate;	// IMP=0x000000000044ad3a
- (_Bool)setupAudioTierPicker;	// IMP=0x000000000044a932
- (id)packetsPerBundle;	// IMP=0x000000000044a770
- (void)setupAudioHeaderSize;	// IMP=0x000000000044a473
- (_Bool)chooseAudioNetworkBitrate;	// IMP=0x00000000004497eb
- (void)currentPayloadUsed:(int)arg1 payloadUsed:(id *)arg2;	// IMP=0x0000000000449689
- (void)pushAudioSamples:(struct opaqueVCAudioBufferList *)arg1;	// IMP=0x000000000044956d
- (unsigned int)maximumSamplesPerFrame;	// IMP=0x000000000044855e
- (_Bool)allocateLastInputSampleBuffer:(unsigned int)arg1;	// IMP=0x0000000000448480
- (_Bool)setupAudioEncoders;	// IMP=0x00000000004481f6
- (void)removeUnusedAudioPayloads;	// IMP=0x0000000000447eaa
- (float)nextAudioInterval:(int)arg1;	// IMP=0x0000000000447e26
@property(readonly, nonatomic) NSDictionary *dtxMetrics;
- (void)reportRedundancyConfigChange;	// IMP=0x00000000004474a9
- (void)registerReportingTask;	// IMP=0x0000000000447440
- (void)gatherRealtimeStats:(struct __CFDictionary *)arg1;	// IMP=0x0000000000447003
- (void)updateAudioTxRate;	// IMP=0x0000000000446f41
- (_Bool)setupAudio:(id *)arg1;	// IMP=0x0000000000446d00
- (_Bool)setupEncoderBuffer;	// IMP=0x0000000000446b4b
- (void)setCellTech:(int)arg1 remoteCellular:(int)arg2 isIPV6:(int)arg3 audioCap:(unsigned int)arg4;	// IMP=0x0000000000446aec
- (_Bool)sendCodecModeChangeEvent:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x000000000044690d
- (void)handleCodecModeChangeEvent:(struct _VCAudioCodecModeChangeEvent)arg1 didUpdateBandwidth:(_Bool *)arg2 didUpdateBitrate:(_Bool *)arg3;	// IMP=0x0000000000446515
- (_Bool)isCodecModeChangeRequestValid:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x000000000044640f
- (_Bool)shouldUpdateCodecBandwidth:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x0000000000446164
- (_Bool)shouldUpdateCodecBitrate:(struct _VCAudioCodecModeChangeEvent)arg1;	// IMP=0x0000000000445e09
@property id <VCAudioTransmitterDelegate> delegate;
@property(readonly, nonatomic) VCAudioPayloadConfig *currentAudioPayloadConfig;
- (void)dealloc;	// IMP=0x0000000000445c39
- (void)initAudioValues;	// IMP=0x0000000000445bef
- (unsigned int)redundancyControllerModeForOperatingMode:(int)arg1 isRedEnabled:(_Bool)arg2;	// IMP=0x0000000000445bc2
- (id)initWithConfig:(id)arg1;	// IMP=0x0000000000444969
- (void)redundancyController:(id)arg1 redundancyIntervalDidChange:(double)arg2;	// IMP=0x0000000000444914

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

