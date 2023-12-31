//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCameraStreamSessionID, HMFTimer, NSDictionary, NSMutableArray, NSObject, NSString;
@protocol HMDVideoStreamReconfigureDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDVideoStreamReconfigure : HMFObject
{
    _Bool _reconfigurationMode;	// 8 = 0x8
    NSDictionary *_downlinkQualityInfo;	// 16 = 0x10
    NSMutableArray *_reconfigureEvents;	// 24 = 0x18
    HMFTimer *_upgradeDebouceTimer;	// 32 = 0x20
    HMFTimer *_downgradeDebouceTimer;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_workQueue;	// 48 = 0x30
    NSObject<OS_dispatch_queue> *_delegateQueue;	// 56 = 0x38
    HMDCameraStreamSessionID *_sessionID;	// 64 = 0x40
    id <HMDVideoStreamReconfigureDelegate> _delegate;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x00100000001b4fea
- (void).cxx_destruct;	// IMP=0x00000000001b3daa
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000001b3985
- (void)downlinkQualityChanged:(id)arg1;	// IMP=0x00000000001b38ec
- (void)updateReconfigurationMode:(_Bool)arg1;	// IMP=0x00000000001b388e
- (id)logIdentifier;	// IMP=0x00000000001b3868
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;	// IMP=0x00000000001b3736

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

