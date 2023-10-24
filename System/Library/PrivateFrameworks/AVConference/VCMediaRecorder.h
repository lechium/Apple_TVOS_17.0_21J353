//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableSet, NSObject, NSString, VCMediaRecorderHistory, VideoAttributes;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCMediaRecorder
{
    id _delegate;	// 88 = 0x58
    id _transportDelegate;	// 96 = 0x60
    unsigned int _streamToken;	// 104 = 0x68
    VCMediaRecorderHistory *_mediaRecorderHistory;	// 112 = 0x70
    unsigned int _capabilities;	// 120 = 0x78
    unsigned char _mode;	// 124 = 0x7c
    NSObject<OS_dispatch_queue> *delegateNotificationQueue;	// 128 = 0x80
    int _currentActiveRequestsCount;	// 136 = 0x88
    _Bool _isActive;	// 140 = 0x8c
    _Bool _isClientRegistered;	// 141 = 0x8d
    VideoAttributes *_targetScreenAttributes;	// 144 = 0x90
    NSMutableSet *_requests;	// 152 = 0x98
    _Bool _lastRequest;	// 160 = 0xa0
    unsigned int _currentTimestamp;	// 164 = 0xa4
    double _lastHealthPrintCallAbsoluteSeconds;	// 168 = 0xa8
    unsigned long long _localVideoCallbacksCount;	// 176 = 0xb0
    unsigned long long _localVideoCallbacksClearedCount;	// 184 = 0xb8
    unsigned long long _localAudioCallbacksCount;	// 192 = 0xc0
    unsigned long long _localAudioCallbacksClearedCount;	// 200 = 0xc8
    unsigned long long _remoteAudioCallbacksCount;	// 208 = 0xd0
    unsigned long long _remoteAudioCallbacksClearedCount;	// 216 = 0xd8
    unsigned long long _bufferResets;	// 224 = 0xe0
}

+ (unsigned long long)countForRequestType:(int)arg1;	// IMP=0x0010000000122f36
+ (int)typeForRequest:(id)arg1;	// IMP=0x0010000000122e45
+ (unsigned long long)deviceFreeDiskSpace;	// IMP=0x0010000000122de2
+ (_Bool)deviceHasSufficientFreeSpace;	// IMP=0x0010000000122dbf
+ (id)stringFromMediaType:(unsigned char)arg1;	// IMP=0x0010000000121158
@property(retain, nonatomic) VideoAttributes *targetScreenAttributes; // @synthesize targetScreenAttributes=_targetScreenAttributes;
@property(readonly, nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) unsigned int capabilities; // @synthesize capabilities=_capabilities;
- (void)validateNonzeroAudioRecordingLengthURL:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000122c12
- (void)handleInsufficientFreeSpaceWithRequest:(id)arg1 delegate:(id)arg2;	// IMP=0x0000000000122b9e
- (unsigned long long)directorySize:(id)arg1;	// IMP=0x0000000000122a8d
- (_Bool)isHistorySupported;	// IMP=0x0000000000122a58
- (_Bool)validateNumberOfRequestsWithError:(id *)arg1;	// IMP=0x00000000001229fe
- (void)notifyLocalFinishWithRequest:(id)arg1 didSucceed:(_Bool)arg2;	// IMP=0x0000000000122967
- (void)notifyRemoteFinishWithRequest:(id)arg1 didSucceed:(_Bool)arg2 fileSize:(long long)arg3;	// IMP=0x0000000000122880
- (void)notifyFinishWithRequest:(id)arg1 didSucceed:(_Bool)arg2 fileSize:(long long)arg3;	// IMP=0x00000000001226df
- (void)processRemotePhotoRequest:(id)arg1;	// IMP=0x00000000001221d4
- (void)processRemoteLivePhotoRequest:(id)arg1;	// IMP=0x0000000000121a57
- (void)processRemoteRequest:(id)arg1 withMediaType:(unsigned char)arg2;	// IMP=0x00000000001211a0
- (void)_generateRequest:(unsigned char)arg1 requestState:(unsigned char)arg2 transactionID:(id)arg3 timestamp:(unsigned int)arg4;	// IMP=0x000000000012107c
- (void)reportingMediaRecorderWithRequest:(id)arg1 fileLength:(double)arg2 fileSize:(unsigned long long)arg3;	// IMP=0x0000000000120e8c
- (void)setUpReportingAgent;	// IMP=0x00000000001209dc
- (void)updateActiveStatus;	// IMP=0x000000000012087a
- (void)invalidate;	// IMP=0x0000000000120868
- (void)deregisterClient;	// IMP=0x000000000012078b
- (void)registerClient;	// IMP=0x00000000001206ae
- (void)cleanupActiveRequests;	// IMP=0x0000000000120516
- (_Bool)processClientRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001202c8
- (void)setMediaRecorderDelegate:(id)arg1;	// IMP=0x00000000001202b4
- (id)mediaRecorderDelegate;	// IMP=0x00000000001202a3
- (void)setTransportDelegate:(id)arg1;	// IMP=0x000000000012028f
- (id)transportDelegate;	// IMP=0x000000000012027e
- (void)setFrameRate:(float)arg1;	// IMP=0x0000000000120261
- (void)processRequest:(id)arg1;	// IMP=0x000000000011fcce
- (_Bool)validateIncomingRequest:(id)arg1;	// IMP=0x000000000011f638
- (void)getInitialRemoteScreenAttributes:(id)arg1;	// IMP=0x000000000011f543
@property(nonatomic) int imageType;
@property(nonatomic) int videoCodec;
- (void)dealloc;	// IMP=0x000000000011f1f6
- (id)initWithStreamToken:(unsigned int)arg1 delegate:(id)arg2 reportingAgent:(struct opaqueRTCReporting *)arg3;	// IMP=0x000000000011f08c

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

