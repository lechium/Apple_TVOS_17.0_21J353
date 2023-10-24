//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSNumber, NSString;
@protocol HMDAVCAudioStream, HMDAudioStreamInterfaceDataSource, HMDAudioStreamInterfaceDelegate;

__attribute__((visibility("hidden")))
@interface HMDAudioStreamInterface
{
    _Bool _streamStarted;	// 8 = 0x8
    id <HMDAudioStreamInterfaceDelegate> _delegate;	// 16 = 0x10
    unsigned long long _audioStreamSetting;	// 24 = 0x18
    id <HMDAVCAudioStream> _audioStream;	// 32 = 0x20
    id <HMDAudioStreamInterfaceDataSource> _dataSource;	// 40 = 0x28
    CDUnknownBlockType _stopStreamCompletionHandler;	// 48 = 0x30
}

+ (id)logCategory;	// IMP=0x001000000032617b
- (void).cxx_destruct;	// IMP=0x00000000003256e7
@property(copy) CDUnknownBlockType stopStreamCompletionHandler; // @synthesize stopStreamCompletionHandler=_stopStreamCompletionHandler;
@property(readonly) id <HMDAudioStreamInterfaceDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) id <HMDAVCAudioStream> audioStream; // @synthesize audioStream=_audioStream;
@property unsigned long long audioStreamSetting; // @synthesize audioStreamSetting=_audioStreamSetting;
@property _Bool streamStarted; // @synthesize streamStarted=_streamStarted;
@property __weak id <HMDAudioStreamInterfaceDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x00000000003255d3
- (void)streamDidRTCPTimeOut:(id)arg1;	// IMP=0x0000000000325562
- (void)streamDidRTPTimeOut:(id)arg1;	// IMP=0x00000000003254f1
- (void)streamDidServerDie:(id)arg1;	// IMP=0x0000000000325480
- (void)stream:(id)arg1 didResume:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000003253c9
- (void)stream:(id)arg1 didPause:(_Bool)arg2 error:(id)arg3;	// IMP=0x0000000000325312
- (void)streamDidStop:(id)arg1;	// IMP=0x00000000003252a1
- (void)stream:(id)arg1 didStart:(_Bool)arg2 error:(id)arg3;	// IMP=0x00000000003251ea
@property double rtcpSendIntervalSec;
@property double rtcpTimeOutIntervalSec;
@property double rtpTimeOutIntervalSec;
@property(getter=isRTCPTimeOutEnabled) _Bool rtcpTimeOutEnabled;
@property(getter=isRTPTimeOutEnabled) _Bool rtpTimeOutEnabled;
@property(getter=isRTCPEnabled) _Bool rtcpEnabled;
- (void)_callStopped:(id)arg1;	// IMP=0x0000000000324c51
- (void)_callResumed:(id)arg1;	// IMP=0x0000000000324aa0
- (void)_callPaused:(id)arg1;	// IMP=0x00000000003248ef
- (void)_callStarted:(id)arg1;	// IMP=0x0000000000324729
@property(getter=isMuted) _Bool muted;
- (void)startSynchronizationWithVideoStreamToken:(long long)arg1;	// IMP=0x0000000000324473
- (void)_resumeStream;	// IMP=0x0000000000324299
- (void)_pauseStream;	// IMP=0x00000000003241a0
- (void)_stopStreamWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000323f97
- (void)stopStream;	// IMP=0x0000000000323f26
- (void)updateAudioVolume:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000323e48
- (void)_updateAudioSetting:(unsigned long long)arg1;	// IMP=0x0000000000323b34
- (void)updateAudioSetting:(unsigned long long)arg1;	// IMP=0x0000000000323ab8
- (void)_startStreamWithConfig:(id)arg1;	// IMP=0x00000000003237f3
- (void)startStreamWithConfig:(id)arg1;	// IMP=0x000000000032373b
- (id)_createLocalStreamAndRTPSocket:(int *)arg1 localNetworkConfig:(id)arg2;	// IMP=0x000000000032346a
- (int)_createLocalRTPSocketWithRemoteSender:(id)arg1 localNetworkConfig:(id)arg2;	// IMP=0x00000000003232e9
- (id)_createStreamWithRemoteSocketReceiver:(id)arg1;	// IMP=0x0000000000323089
- (id)_createStreamWithRemoteDestinationReceiver:(id)arg1;	// IMP=0x0000000000322de4
- (id)_createAudioStreamWithSessionHandler:(id)arg1 localNetworkConfig:(id)arg2 localRTPSocket:(int *)arg3;	// IMP=0x0000000000322b3b
@property(readonly, copy) NSNumber *syncSource;
- (void)dealloc;	// IMP=0x00000000003229d2
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 sessionHandler:(id)arg5 audioStream:(id)arg6 localRTPSocket:(int)arg7 dataSource:(id)arg8;	// IMP=0x000000000032284d
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4 sessionHandler:(id)arg5 localNetworkConfig:(id)arg6;	// IMP=0x000000000032263b

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
