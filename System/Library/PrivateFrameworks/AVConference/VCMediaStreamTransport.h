//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCBasebandCongestionDetector, VCMediaStreamConfig;

__attribute__((visibility("hidden")))
@interface VCMediaStreamTransport : NSObject
{
    VCMediaStreamConfig *_streamConfig;	// 8 = 0x8
    unsigned int _localSSRC;	// 16 = 0x10
    struct tagHANDLE *_rtpHandle;	// 24 = 0x18
    _Bool _isSRTPInitialized;	// 32 = 0x20
    AVCBasebandCongestionDetector *_basebandCongestionDetector;	// 40 = 0x28
    int _payloadType;	// 48 = 0x30
    CDStruct_cd00b3f0 _transportStreamInfo;	// 56 = 0x38
    struct tagVCCryptor *_receiverSframeCryptor;	// 80 = 0x50
    struct tagVCCryptor *_transmitterSframeCryptor;	// 88 = 0x58
    _Bool _rtcpXREnabled;	// 96 = 0x60
    _Bool _encryptionInfoReceived;	// 97 = 0x61
}

+ (_Bool)isSameSRTPKey:(id)arg1 newKey:(id)arg2;	// IMP=0x006000000032253a
+ (int)SRTPCipherSuiteForVCMediaStreamCipherSuite:(long long)arg1;	// IMP=0x0060000000322525
+ (int)getSRTPMediaKeyLength:(long long)arg1;	// IMP=0x0060000000322508
@property(readonly, nonatomic) _Bool encryptionInfoReceived; // @synthesize encryptionInfoReceived=_encryptionInfoReceived;
@property(readonly, nonatomic) struct tagVCCryptor *transmitterSframeCryptor; // @synthesize transmitterSframeCryptor=_transmitterSframeCryptor;
@property(readonly, nonatomic) struct tagVCCryptor *receiverSframeCryptor; // @synthesize receiverSframeCryptor=_receiverSframeCryptor;
@property(retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector; // @synthesize basebandCongestionDetector=_basebandCongestionDetector;
@property(readonly, nonatomic) struct tagHANDLE *rtpHandle; // @synthesize rtpHandle=_rtpHandle;
@property(readonly, nonatomic) VCMediaStreamConfig *streamConfig; // @synthesize streamConfig=_streamConfig;
- (unsigned int)getExtendedSequenceNumberForSequenceNumber:(unsigned short)arg1;	// IMP=0x0000000000324c25
- (unsigned int)getRTCPReportNTPTimeMiddle32ForReportId:(unsigned char)arg1;	// IMP=0x0000000000324ab1
- (_Bool)generateRTCPXRVoIPMetricsReport:(struct tagVCRTCPXRVoIPMetricsReport *)arg1 reportCount:(char *)arg2;	// IMP=0x0000000000324908
- (_Bool)generateRTCPXRSummaryReport:(struct tagVCRTCPXRSummaryReport *)arg1 reportCount:(char *)arg2;	// IMP=0x000000000032475a
- (_Bool)generateReceptionReport:(struct _RTCP_RECEPTION_REPORT *)arg1 reportCount:(char *)arg2;	// IMP=0x00000000003245d6
@property(readonly, nonatomic) unsigned short idsStreamId;
@property(nonatomic) long long streamDirection;
- (_Bool)setThrottlingInterval:(double)arg1;	// IMP=0x000000000032454d
- (_Bool)sendIntervalDidElapse:(int *)arg1 remainingTime:(double *)arg2;	// IMP=0x0000000000324533
@property(nonatomic, getter=isDecryptionTimeoutEnabled) _Bool decryptionTimeoutEnabled;
@property(nonatomic) double rtcpTimeoutInterval;
@property(nonatomic, getter=isRTCPTimeoutEnabled) _Bool rtcpTimeoutEnabled;
@property(nonatomic) double rtpTimeoutInterval;
@property(nonatomic, getter=isRTPTimeoutEnabled) _Bool rtpTimeoutEnabled;
@property(readonly, nonatomic, getter=isRTCPSendEnabled) _Bool rtcpSendEnabled;
@property(nonatomic) double rtcpSendInterval;
@property(readonly, nonatomic, getter=isRTCPXREnabled) _Bool rtcpXREnabled;
@property(nonatomic, getter=isRTCPEnabled) _Bool rtcpEnabled;
- (void)handleEncryptionInfoChange:(id)arg1;	// IMP=0x00000000003240b0
@property(readonly, nonatomic) double lastReceivedRTCPPacketTime;
- (id)rxNetworkPayloads;	// IMP=0x0000000000323d04
- (void)registerRTPPayloadMappings;	// IMP=0x00000000003238e4
- (_Bool)setupRTPWithTransportSetupInfo:(struct _VCMediaStreamTransportSetupInfo *)arg1 error:(id *)arg2;	// IMP=0x00000000003237d6
- (_Bool)setupRTPWithIPInfo:(struct _VCMediaStreamTransportSetupInfo *)arg1 error:(id *)arg2;	// IMP=0x0000000000323725
- (_Bool)setupRTPForIDS:(id *)arg1;	// IMP=0x000000000032364f
- (_Bool)setupRTPWithNWConnection:(struct _VCMediaStreamTransportSetupInfo *)arg1 error:(id *)arg2;	// IMP=0x0000000000323572
- (int)setupRTPWithTransportStreams;	// IMP=0x00000000003233b7
- (_Bool)setupRTPWithSockets:(struct _VCMediaStreamTransportSetupInfo *)arg1 error:(id *)arg2;	// IMP=0x00000000003232de
- (int)setupSRTP;	// IMP=0x00000000003228c2
- (int)getCryptoSet:(struct tagSRTPExchangeInfo *)arg1 withMediaKey:(id)arg2;	// IMP=0x000000000032255f
- (void)sendControlPacketWithParameters:(struct _RTCP_SEND_CONTROL_PARAMETERS *)arg1;	// IMP=0x00000000003224f7
- (void)resetPayloadMapping;	// IMP=0x00000000003224e9
- (void)reset;	// IMP=0x00000000003224db
- (_Bool)setupSframeCryptorsWithError:(id *)arg1;	// IMP=0x0000000000322340
- (struct tagVCCryptor *)createSframeCryptorWithStreamConfig:(id)arg1 ssrc:(unsigned int)arg2 error:(id *)arg3;	// IMP=0x00000000003221c0
- (_Bool)isSendingMedia:(id)arg1;	// IMP=0x0000000000322180
- (_Bool)configureWithStreamConfig:(id)arg1 setupInfo:(struct _VCMediaStreamTransportSetupInfo *)arg2 reducedSizeRTCPPackets:(_Bool)arg3 hopByHopEncryptRTCPPackets:(_Bool)arg4 statisticsCollector:(id)arg5 basebandCongestionDetector:(id)arg6 error:(id *)arg7;	// IMP=0x000000000032100a
- (void)onStop;	// IMP=0x0000000000320ff3
- (int)onStart;	// IMP=0x0000000000320fa5
- (void)updateLastGeneratedKeyMaterial;	// IMP=0x0000000000320ca2
- (_Bool)isSameSRTPConfig:(id)arg1;	// IMP=0x0000000000320b92
- (void)dealloc;	// IMP=0x0000000000320acc
- (id)initWithHandle:(struct tagHANDLE *)arg1 localSSRC:(unsigned int)arg2;	// IMP=0x0000000000320a5c

@end

