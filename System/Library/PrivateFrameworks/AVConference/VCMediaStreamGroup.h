//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCStatisticsCollector, NSArray, NSDictionary, NSObject, NSString, TimingCollection, VCMediaKeyIndex, VCMediaRecorder, VCNetworkFeedbackController, VCSecurityKeyManager;
@protocol OS_dispatch_queue, VCMediaCaptureController;

__attribute__((visibility("hidden")))
@interface VCMediaStreamGroup
{
    NSArray *_mediaStreamInfoArray;	// 88 = 0x58
    NSArray *_mediaStreams;	// 96 = 0x60
    NSDictionary *_streamIDToMediaStreamMap;	// 104 = 0x68
    NSDictionary *_groupEntries;	// 112 = 0x70
    NSString *_participantUUID;	// 120 = 0x78
    NSString *_sessionUUID;	// 128 = 0x80
    NSObject<OS_dispatch_queue> *_stateQueue;	// 136 = 0x88
    VCNetworkFeedbackController *_networkFeedbackController;	// 144 = 0x90
    AVCStatisticsCollector *_statisticsCollector;	// 152 = 0x98
    TimingCollection *_perfTimers;	// 160 = 0xa0
    double _creationTime;	// 168 = 0xa8
    double _firstMediaPacketTime;	// 176 = 0xb0
    double _firstMediaKeyIndexTime;	// 184 = 0xb8
    _Bool _firstMediaFrameGapDetected;	// 192 = 0xc0
    VCMediaKeyIndex *_firstMediaKeyIndex;	// 200 = 0xc8
    _Bool _areStreamsSuspended;	// 208 = 0xd0
    id _delegate;	// 216 = 0xd8
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 224 = 0xe0
    _Bool _encryptionInfoReceived;	// 232 = 0xe8
    unsigned int _state;	// 236 = 0xec
    unsigned long long _idsParticipantID;	// 240 = 0xf0
    unsigned int _rtpTimestampRate;	// 248 = 0xf8
    VCMediaRecorder *_mediaRecorder;	// 256 = 0x100
    unsigned int _streamGroupID;	// 264 = 0x108
    long long _streamToken;	// 272 = 0x110
    unsigned int _mediaType;	// 280 = 0x118
    unsigned int _mediaSubtype;	// 284 = 0x11c
    unsigned int _syncGroupID;	// 288 = 0x120
    id _captureController;	// 296 = 0x128
    VCSecurityKeyManager *_securityKeyManager;	// 304 = 0x130
    _Bool _hasRepairedStreams;	// 312 = 0x138
    struct tagVCJBTargetEstimatorSynchronizer *_jbTargetEstimatorSynchronizer;	// 320 = 0x140
}

@property(retain, nonatomic) VCMediaRecorder *mediaRecorder; // @synthesize mediaRecorder=_mediaRecorder;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property(readonly, nonatomic) _Bool hasRepairedStreams; // @synthesize hasRepairedStreams=_hasRepairedStreams;
@property(nonatomic) _Bool encryptionInfoReceived; // @synthesize encryptionInfoReceived=_encryptionInfoReceived;
@property(readonly, nonatomic) NSArray *mediaStreamInfoArray; // @synthesize mediaStreamInfoArray=_mediaStreamInfoArray;
@property(readonly, nonatomic) NSDictionary *streamIDToMediaStreamMap; // @synthesize streamIDToMediaStreamMap=_streamIDToMediaStreamMap;
@property(readonly, nonatomic) long long streamToken; // @synthesize streamToken=_streamToken;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_state;
@property(nonatomic) unsigned int syncGroupID; // @synthesize syncGroupID=_syncGroupID;
@property(nonatomic) unsigned int mediaSubtype; // @synthesize mediaSubtype=_mediaSubtype;
@property(nonatomic) unsigned int mediaType; // @synthesize mediaType=_mediaType;
@property(readonly, nonatomic) unsigned int streamGroupID; // @synthesize streamGroupID=_streamGroupID;
- (void)didReceiveRTCPPackets:(struct _RTCPPacketList *)arg1;	// IMP=0x00000000003ed5ea
- (void)mediaStream:(id)arg1 didReceiveRTPGapForMediaKeyIndex:(id)arg2;	// IMP=0x00000000003ed48d
- (void)mediaStream:(id)arg1 didReceiveNewMediaKeyIndex:(id)arg2;	// IMP=0x00000000003ed37c
- (void)unregisterMediaStreamNotificationDelegate;	// IMP=0x00000000003ed277
- (void)registerMediaStreamNotificationDelegate;	// IMP=0x00000000003ed16e
- (void)didEncryptionKeyRollTimeout;	// IMP=0x00000000003ed168
- (void)resetDecryptionTimeout;	// IMP=0x00000000003ed065
- (_Bool)handleEncryptionInfoChange:(id)arg1;	// IMP=0x00000000003ecf41
- (id)stopCapture;	// IMP=0x00000000003ecf39
- (id)startCapture;	// IMP=0x00000000003ecf31
- (void)vcMediaStreamServerDidDie:(id)arg1;	// IMP=0x00000000003ecf2b
- (_Bool)removeSyncDestination:(id)arg1;	// IMP=0x00000000003ecf23
- (_Bool)addSyncDestination:(id)arg1;	// IMP=0x00000000003ecf1b
- (_Bool)containsStreamWithSSRC:(unsigned int)arg1;	// IMP=0x00000000003ecc86
- (void)handleActiveConnectionChange:(id)arg1;	// IMP=0x00000000003ecb61
- (id)resume;	// IMP=0x00000000003ec92e
- (id)pause;	// IMP=0x00000000003ec6f8
- (id)stop;	// IMP=0x00000000003ec3b9
- (id)start;	// IMP=0x00000000003ebfcd
- (id)resumeMediaStreams;	// IMP=0x00000000003ebb8a
- (id)pauseMediaStreams;	// IMP=0x00000000003eb744
- (id)setPauseOnMediaStreams:(_Bool)arg1;	// IMP=0x00000000003eb597
- (_Bool)shouldSetPause:(_Bool)arg1 onStream:(id)arg2;	// IMP=0x00000000003eb56d
- (id)stopMediaStreams;	// IMP=0x00000000003eb078
- (id)startMediaStreams;	// IMP=0x00000000003eabc3
@property(nonatomic) id <VCMediaCaptureController> captureController;
- (void)finalizePerfTimersForFirstMediaFrameWithTime:(double)arg1;	// IMP=0x00000000003eab3c
- (void)setupPerfTimersWithMediaKeyIndex:(id)arg1 perfTimerIndexToStart:(int)arg2;	// IMP=0x00000000003eaa39
- (void)setTotalMediaStallSaveIntervalWithTime:(double)arg1;	// IMP=0x00000000003ea9af
- (void)setFirstMKIToFirstMediaReceivedTimerForMKIReceivedTime;	// IMP=0x00000000003ea94a
- (void)setParticipantJoinedToFirstMKITimer;	// IMP=0x00000000003ea7ce
- (_Bool)containsStreamWithIDSStreamID:(unsigned short)arg1;	// IMP=0x00000000003ea56c
- (void)callDelegateWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000003ea22e
- (void)collectAndLogChannelMetrics:(CDStruct_b671a7c4 *)arg1;	// IMP=0x00000000003ea228
- (_Bool)configureStreams;	// IMP=0x00000000003e9d3e
- (_Bool)setupStreamsWithConfig:(id)arg1;	// IMP=0x00000000003e9ad8
@property(readonly, copy) NSString *description;
- (void)dealloc;	// IMP=0x00000000003e98d9
- (id)initWithConfig:(id)arg1;	// IMP=0x00000000003e8d19
- (void)didPause:(_Bool)arg1;	// IMP=0x00000000003ed779
- (void)didStop;	// IMP=0x00000000003ed74f
- (void)willStop;	// IMP=0x00000000003ed749
- (void)didStart;	// IMP=0x00000000003ed71f
- (id)willStart;	// IMP=0x00000000003ed717

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
