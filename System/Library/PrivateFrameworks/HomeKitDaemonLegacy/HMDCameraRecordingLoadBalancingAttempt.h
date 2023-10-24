//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFTimer, NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraRecordingLoadBalancingAttempt : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSString *_logIdentifier;	// 16 = 0x10
    HMFTimer *_localResponseTimer;	// 24 = 0x18
    CDUnknownBlockType _completion;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x00100000004f938e
- (void).cxx_destruct;	// IMP=0x00000000004f9287
@property(copy) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly) HMFTimer *localResponseTimer; // @synthesize localResponseTimer=_localResponseTimer;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000004f906e
- (void)startWithMessage:(id)arg1 messageDispatcher:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000004f8ec4
- (id)initWithLocalResponseTimer:(id)arg1 logIdentifier:(id)arg2;	// IMP=0x00000000004f8e0f
- (id)initWithLocalResponseTimeout:(double)arg1 logIdentifier:(id)arg2;	// IMP=0x00000000004f8d83

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
