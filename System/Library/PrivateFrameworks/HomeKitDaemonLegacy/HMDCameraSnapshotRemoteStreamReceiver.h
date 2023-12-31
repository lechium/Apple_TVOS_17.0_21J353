//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDCameraSnapshotIDSStreamReceiver, NSString;
@protocol HMDCameraSnapshotRemoteStreamReceiverDelegate;

__attribute__((visibility("hidden")))
@interface HMDCameraSnapshotRemoteStreamReceiver
{
    id <HMDCameraSnapshotRemoteStreamReceiverDelegate> _delegate;	// 8 = 0x8
    HMDCameraSnapshotIDSStreamReceiver *_relayReceiver;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x00100000008d114e
- (void).cxx_destruct;	// IMP=0x00000000008d0d2c
@property(retain, nonatomic) HMDCameraSnapshotIDSStreamReceiver *relayReceiver; // @synthesize relayReceiver=_relayReceiver;
@property(readonly, nonatomic) __weak id <HMDCameraSnapshotRemoteStreamReceiverDelegate> delegate; // @synthesize delegate=_delegate;
- (void)streamReceiver:(id)arg1 didReceiveFileWithError:(id)arg2;	// IMP=0x00000000008d0ba8
- (void)_callDidSaveImageDelegateWithError:(id)arg1;	// IMP=0x00000000008d0947
- (void)_callGettingImageDelegate:(id)arg1;	// IMP=0x00000000008d0755
- (void)snapShotSendFailed:(id)arg1;	// IMP=0x00000000008d069d
- (void)_getSnapshot:(unsigned long long)arg1;	// IMP=0x00000000008d0487
- (void)getSnapshot:(unsigned long long)arg1;	// IMP=0x00000000008d040b
- (id)logIdentifier;	// IMP=0x00000000008d03bb
- (void)dealloc;	// IMP=0x00000000008d02d6
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 accessory:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 uniqueIdentifier:(id)arg6 snapshotRequestHandler:(id)arg7 residentMessageHandler:(id)arg8 remoteDevice:(id)arg9;	// IMP=0x00000000008d00ea

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

