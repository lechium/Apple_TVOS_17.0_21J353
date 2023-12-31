//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCameraSnapshotIDSRelayInitiator, HMDCameraSnapshotLocal, NSString;
@protocol HMDCameraSnapshotRemoteRelaySenderDelegate;

__attribute__((visibility("hidden")))
@interface HMDCameraSnapshotRemoteRelaySender
{
    HMDCameraSnapshotLocal *_snapshotLocal;	// 8 = 0x8
    id <HMDCameraSnapshotRemoteRelaySenderDelegate> _delegate;	// 16 = 0x10
    HMDCameraSnapshotIDSRelayInitiator *_relayInitiator;	// 24 = 0x18
}

+ (id)logCategory;	// IMP=0x0010000000a5dba4
- (void).cxx_destruct;	// IMP=0x0000000000a5d790
@property(readonly, nonatomic) HMDCameraSnapshotIDSRelayInitiator *relayInitiator; // @synthesize relayInitiator=_relayInitiator;
@property(readonly, nonatomic) __weak id <HMDCameraSnapshotRemoteRelaySenderDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HMDCameraSnapshotLocal *snapshotLocal; // @synthesize snapshotLocal=_snapshotLocal;
- (void)relayInitiatorDidSendIDSInvitation:(id)arg1;	// IMP=0x0000000000a5d6da
- (void)relayInitiator:(id)arg1 didSendData:(id)arg2;	// IMP=0x0000000000a5d650
- (void)relayInitiatorDidStartDataSend:(id)arg1;	// IMP=0x0000000000a5d61b
- (void)relayInitiatorIDSSessionDidStart:(id)arg1;	// IMP=0x0000000000a5d5a0
- (void)relayInitiatorDidSendDataSuccessfully:(id)arg1;	// IMP=0x0000000000a5d525
- (void)relayInitiator:(id)arg1 didEndIDSSessionWithError:(id)arg2;	// IMP=0x0000000000a5d4f0
- (void)snapshotLocal:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;	// IMP=0x0000000000a5d1db
- (void)_callDidSaveSnapshotFileDelegate:(id)arg1;	// IMP=0x0000000000a5cfd1
- (void)_callDidCompleteSendImageDelegate:(id)arg1;	// IMP=0x0000000000a5cdb8
- (void)_callDidStartCaptureImageDelegate:(id)arg1;	// IMP=0x0000000000a5cb9f
- (void)snapShotTransferComplete;	// IMP=0x0000000000a5cb2e
- (void)getSnapshot:(unsigned long long)arg1;	// IMP=0x0000000000a5cab2
- (id)logIdentifier;	// IMP=0x0000000000a5ca62
- (void)dealloc;	// IMP=0x0000000000a5c97d
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 device:(id)arg3 accessory:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6 uniqueIdentifier:(id)arg7 snapshotRequestHandler:(id)arg8;	// IMP=0x0000000000a5c777

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

