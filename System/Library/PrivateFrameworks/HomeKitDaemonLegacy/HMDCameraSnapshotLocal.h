//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDAccessory, HMDCameraSnapshotSessionID, HMDSnapshotFile, NSObject, NSString;
@protocol HMDCameraSnapshotLocalDelegate, HMDSnapshotRequestHandlerProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraSnapshotLocal : HMFObject
{
    HMDCameraSnapshotSessionID *_sessionID;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HMDAccessory *_accessory;	// 24 = 0x18
    id <HMDCameraSnapshotLocalDelegate> _delegate;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 40 = 0x28
    HMDSnapshotFile *_snapshotFile;	// 48 = 0x30
    id <HMDSnapshotRequestHandlerProtocol> _snapshotRequestHandler;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x00100000002224ea
- (void).cxx_destruct;	// IMP=0x000000000022235f
@property(readonly, nonatomic) id <HMDSnapshotRequestHandlerProtocol> snapshotRequestHandler; // @synthesize snapshotRequestHandler=_snapshotRequestHandler;
@property(retain, nonatomic) HMDSnapshotFile *snapshotFile; // @synthesize snapshotFile=_snapshotFile;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <HMDCameraSnapshotLocalDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID; // @synthesize sessionID=_sessionID;
- (void)_handleSnapshotFile:(id)arg1 error:(id)arg2;	// IMP=0x0000000000222063
- (void)_getSnapshot:(unsigned long long)arg1;	// IMP=0x0000000000221f40
- (void)getSnapshot:(unsigned long long)arg1;	// IMP=0x0000000000221ec4
- (id)logIdentifier;	// IMP=0x0000000000221e74
- (void)dealloc;	// IMP=0x0000000000221d8f
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 accessory:(id)arg3 delegate:(id)arg4 delegateQueue:(id)arg5 snapshotRequestHandler:(id)arg6;	// IMP=0x0000000000221c59

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

