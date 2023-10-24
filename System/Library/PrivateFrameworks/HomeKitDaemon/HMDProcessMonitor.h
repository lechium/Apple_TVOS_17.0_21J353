//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFTimer, NSArray, NSMutableSet, NSObject, NSString, RBSProcessMonitor;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDProcessMonitor : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    RBSProcessMonitor *_internal;	// 16 = 0x10
    NSMutableSet *_processes;	// 24 = 0x18
    _Bool _activeHomeKitApps;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_xpcListenerQueue;	// 40 = 0x28
    HMFTimer *_spiClientTerminationDelayTimer;	// 48 = 0x30
    NSMutableSet *_pendingTerminatedApplications;	// 56 = 0x38
}

+ (id)logCategory;	// IMP=0x00100000007ec8c4
- (void).cxx_destruct;	// IMP=0x00000000007eb6fe
@property(readonly, nonatomic) NSMutableSet *pendingTerminatedApplications; // @synthesize pendingTerminatedApplications=_pendingTerminatedApplications;
@property(retain, nonatomic) HMFTimer *spiClientTerminationDelayTimer; // @synthesize spiClientTerminationDelayTimer=_spiClientTerminationDelayTimer;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *xpcListenerQueue; // @synthesize xpcListenerQueue=_xpcListenerQueue;
- (void)timerDidFire:(id)arg1;	// IMP=0x00000000007eb5c9
- (void)_processAppStateChange:(id)arg1;	// IMP=0x00000000007eb4b6
- (void)removeFromPendingTerminated:(id)arg1;	// IMP=0x00000000007eb084
- (void)_removeProcess:(id)arg1;	// IMP=0x00000000007eafd3
- (void)removeProcess:(id)arg1;	// IMP=0x00000000007eadb2
- (void)addProcess:(id)arg1;	// IMP=0x00000000007eac72
- (id)processInfoForConnection:(id)arg1;	// IMP=0x00000000007eaa2f
- (id)processInfoForPID:(int)arg1;	// IMP=0x00000000007ea9c8
@property(readonly, copy) NSArray *foregroundProcesses;
@property(readonly, copy) NSArray *processes;
- (void)updateApplicationMonitor;	// IMP=0x00000000007ea691
- (void)dealloc;	// IMP=0x00000000007ea648
- (id)initWithXpcListenerQueue:(id)arg1;	// IMP=0x00000000007ea56f
- (id)init;	// IMP=0x00000000007ea4ca

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

