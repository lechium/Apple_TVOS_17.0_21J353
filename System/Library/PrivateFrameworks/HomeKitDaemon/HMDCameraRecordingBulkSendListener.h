//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSObject, NSString, NSUUID;
@protocol HMDCameraRecordingBulkSendListenerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingBulkSendListener : HMFObject
{
    NSUUID *_UUID;	// 8 = 0x8
    id <HMDCameraRecordingBulkSendListenerDelegate> _delegate;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    CDUnknownBlockType _pendingOpenSessionCallback;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0010000000902a46
- (void).cxx_destruct;	// IMP=0x000000000090241a
@property __weak id <HMDCameraRecordingBulkSendListenerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
- (id)attributeDescriptions;	// IMP=0x000000000090230b
- (id)logIdentifier;	// IMP=0x00000000009022bb
- (void)accessory:(id)arg1 didCloseDataStreamWithError:(id)arg2;	// IMP=0x0000000000902204
- (void)accessoryDidStartListening:(id)arg1;	// IMP=0x000000000090214d
- (void)accessory:(id)arg1 didReceiveBulkSessionCandidate:(id)arg2;	// IMP=0x0000000000902133
- (void)openBulkSendSessionWithAccessory:(id)arg1 callback:(CDUnknownBlockType)arg2;	// IMP=0x0000000000902027
- (void)addPendingBulkSendSessionCallback:(CDUnknownBlockType)arg1;	// IMP=0x0000000000901fc8
@property(readonly, getter=isSessionOpenInProgress) _Bool sessionOpenInProgress;
- (id)initWithWorkQueue:(id)arg1;	// IMP=0x0000000000901f03

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

