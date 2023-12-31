//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCameraMediaConfigGenerator, HMDCameraRemoteStreamSession, HMDCameraResidentMessageHandler, HMDCameraStreamMetrics, NSNumber, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface HMDCameraRemoteStreamControlManager
{
    NSUUID *_profileUniqueIdentifier;	// 8 = 0x8
    HMDCameraResidentMessageHandler *_residentMessageHandler;	// 16 = 0x10
    HMDCameraMediaConfigGenerator *_configGenerator;	// 24 = 0x18
    HMDCameraRemoteStreamSession *_streamSession;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000330c18
- (void).cxx_destruct;	// IMP=0x000000000033000b
@property(retain) HMDCameraRemoteStreamSession *streamSession; // @synthesize streamSession=_streamSession;
@property(readonly) HMDCameraMediaConfigGenerator *configGenerator; // @synthesize configGenerator=_configGenerator;
@property(readonly, copy, nonatomic) HMDCameraResidentMessageHandler *residentMessageHandler; // @synthesize residentMessageHandler=_residentMessageHandler;
@property(readonly, copy, nonatomic) NSUUID *profileUniqueIdentifier; // @synthesize profileUniqueIdentifier=_profileUniqueIdentifier;
- (void)_sendUpdatedConfiguration;	// IMP=0x000000000032fc9b
- (void)_dispatchReconfigureToResident:(id)arg1;	// IMP=0x000000000032fa7f
- (void)_reconfigureStreams;	// IMP=0x000000000032f8fc
- (void)streamingManagerDidUpdateConfiguration:(id)arg1;	// IMP=0x000000000032f7df
- (void)streamingManagerDidNetworkDeteriorate:(id)arg1;	// IMP=0x000000000032f5f1
- (void)streamingManagerDidNetworkImprove:(id)arg1;	// IMP=0x000000000032f403
- (void)streamingManagerDidStopStream:(id)arg1 error:(id)arg2;	// IMP=0x000000000032f2bc
- (void)streamingManagerDidReceiveFirstFrame:(id)arg1;	// IMP=0x000000000032f2aa
- (void)streamingManager:(id)arg1 didStartStreamWithError:(id)arg2;	// IMP=0x000000000032f08f
- (void)deviceConnectionSender:(id)arg1 didEndSessionWithError:(id)arg2;	// IMP=0x000000000032ef9b
- (void)deviceConnectionSender:(id)arg1 didSetUpWithError:(id)arg2;	// IMP=0x000000000032ee87
- (void)deviceConnectionReceiver:(id)arg1 didEndSessionWithError:(id)arg2;	// IMP=0x000000000032ed93
- (void)deviceConnectionReceiver:(id)arg1 didSetUpWithError:(id)arg2;	// IMP=0x000000000032ed7e
- (void)sessionReceiver:(id)arg1 didEndSessionWithError:(id)arg2;	// IMP=0x000000000032ec8a
- (void)sessionReceiver:(id)arg1 didSetUpWithError:(id)arg2;	// IMP=0x000000000032ec75
- (void)_cleanUpStreamSessionWithError:(id)arg1;	// IMP=0x000000000032eac9
- (void)_sendStopMessageToResident;	// IMP=0x000000000032e8c6
- (void)_stopCurrentStreamSessionWithError:(id)arg1;	// IMP=0x000000000032e749
- (void)stopStreamWithError:(id)arg1;	// IMP=0x000000000032e691
- (void)_setUpRemoteConnectionWithDevice:(id)arg1;	// IMP=0x000000000032e559
- (void)setUpRemoteConnectionWithDevice:(id)arg1;	// IMP=0x000000000032e4a1
- (void)_reconfigureStream:(id)arg1;	// IMP=0x000000000032e3e9
- (void)reconfigureStream:(id)arg1;	// IMP=0x000000000032e331
- (void)_streamStarted;	// IMP=0x000000000032e23c
- (void)_dispatchStartRequestToResidentWithVideoSSRC:(id)arg1 audioSSRC:(id)arg2;	// IMP=0x000000000032dce9
- (void)_startStreamWithRemoteSettings:(id)arg1;	// IMP=0x000000000032d60f
- (void)startStreamWithRemoteSettings:(id)arg1;	// IMP=0x000000000032d557
- (void)_relaySessionStarted:(id)arg1;	// IMP=0x000000000032d2ff
- (void)_idsSessionCreatedAndConfigNegotiated;	// IMP=0x000000000032d085
- (void)_setParametersSelected:(id)arg1;	// IMP=0x000000000032c7c6
- (void)_negotiateStream;	// IMP=0x000000000032c3aa
- (void)negotiateStream;	// IMP=0x000000000032c339
- (void)updateAudioVolume:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x000000000032c25b
- (void)updateAudioSetting:(unsigned long long)arg1;	// IMP=0x000000000032c1df
@property(readonly, copy) NSNumber *aspectRatio;
@property(readonly) unsigned long long audioStreamSetting;
@property(readonly, copy) NSNumber *slotIdentifier;
- (void)dealloc;	// IMP=0x000000000032bf56
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 accessory:(id)arg6 streamManagementService:(id)arg7 profileUniqueIdentifier:(id)arg8 residentMessageHandler:(id)arg9 streamSession:(id)arg10;	// IMP=0x000000000032bcd1
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 streamSnapshotHandler:(id)arg3 reachabilityPath:(unsigned long long)arg4 device:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 accessory:(id)arg8 streamManagementService:(id)arg9 remoteCapabilities:(id)arg10 profileUniqueIdentifier:(id)arg11 residentMessageHandler:(id)arg12 remoteAccessDevice:(id)arg13 streamPreference:(id)arg14;	// IMP=0x000000000032b8ad

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) HMDCameraStreamMetrics *streamMetrics;
@property(readonly) Class superclass;

@end

