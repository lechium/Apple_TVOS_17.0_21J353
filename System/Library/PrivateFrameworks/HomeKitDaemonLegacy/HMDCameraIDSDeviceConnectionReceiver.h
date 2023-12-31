//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKitDaemonLegacy/HMDCameraRemoteStreamReceiverSocketProtocol-Protocol.h>

@class IDSSession, NSObject, NSString;
@protocol HMDCameraIDSDeviceConnectionReceiverDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraIDSDeviceConnectionReceiver <HMDCameraRemoteStreamReceiverSocketProtocol>
{
    id <HMDCameraIDSDeviceConnectionReceiverDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 16 = 0x10
}

+ (id)logCategory;	// IMP=0x0010000000260625
- (void).cxx_destruct;	// IMP=0x0000000000260597
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property __weak id <HMDCameraIDSDeviceConnectionReceiverDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x00000000002604f5
- (void)_callSessionEndedWithError:(id)arg1;	// IMP=0x0000000000260333
- (void)_socketOpenedWithError:(id)arg1;	// IMP=0x0000000000260171
@property(readonly, nonatomic) int remoteAudioSocket;
@property(readonly, nonatomic) int remoteVideoSocket;
- (void)setUpRemoteConnectionWithDevice:(id)arg1;	// IMP=0x0000000000260031
@property(readonly) IDSSession *session;
- (void)dealloc;	// IMP=0x000000000025ff44
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;	// IMP=0x000000000025fde1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

