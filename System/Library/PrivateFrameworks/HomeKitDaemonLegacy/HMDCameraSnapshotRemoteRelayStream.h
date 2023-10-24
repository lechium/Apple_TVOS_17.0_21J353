//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraSnapshotRemoteRelayReceiver, HMDCameraSnapshotRemoteStreamSender, NSObject, NSString;
@protocol HMDCameraSnapshotRemoteRelayStreamDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraSnapshotRemoteRelayStream : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    HMDCameraSnapshotRemoteStreamSender *_streamSender;	// 16 = 0x10
    HMDCameraSnapshotRemoteRelayReceiver *_relayReceiver;	// 24 = 0x18
    id <HMDCameraSnapshotRemoteRelayStreamDelegate> _delegate;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 40 = 0x28
}

+ (id)logCategory;	// IMP=0x00100000005270f3
- (void).cxx_destruct;	// IMP=0x0000000000526c4c
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(readonly, nonatomic) __weak id <HMDCameraSnapshotRemoteRelayStreamDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) HMDCameraSnapshotRemoteRelayReceiver *relayReceiver; // @synthesize relayReceiver=_relayReceiver;
@property(readonly, nonatomic) HMDCameraSnapshotRemoteStreamSender *streamSender; // @synthesize streamSender=_streamSender;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)snapshotStreamSender:(id)arg1 didCompleteSendImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x0000000000526aed
- (void)snapshotStreamSender:(id)arg1 didStartCaptureImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x00000000005269da
- (void)snapshotRelayReceiver:(id)arg1 didSaveSnapshotFile:(id)arg2 error:(id)arg3 sessionID:(id)arg4;	// IMP=0x0000000000526864
- (void)snapshotRelayReceiver:(id)arg1 didStartGettingImage:(id)arg2 sessionID:(id)arg3;	// IMP=0x0000000000526762
- (void)_sendImageSendFailure:(id)arg1;	// IMP=0x00000000005262ed
- (void)_callDidCompleteSendImageDelegate:(id)arg1;	// IMP=0x00000000005260d4
- (void)_callDidStartCaptureImageDelegate:(id)arg1;	// IMP=0x0000000000525ebb
- (void)snapShotSendFailed:(id)arg1;	// IMP=0x0000000000525e03
- (void)snapShotTransferComplete;	// IMP=0x0000000000525d92
- (void)getSnapshot:(unsigned long long)arg1;	// IMP=0x0000000000525d16
- (id)logIdentifier;	// IMP=0x0000000000525c9c
- (void)dealloc;	// IMP=0x0000000000525bb7
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 sourceDevice:(id)arg3 remoteDevice:(id)arg4 accessory:(id)arg5 delegate:(id)arg6 delegateQueue:(id)arg7 uniqueIdentifier:(id)arg8 snapshotRequestHandler:(id)arg9 residentMessageHandler:(id)arg10;	// IMP=0x00000000005258e2

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
