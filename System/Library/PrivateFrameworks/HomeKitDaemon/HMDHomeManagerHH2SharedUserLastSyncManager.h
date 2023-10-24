//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDHomeManager, HMFTimer, NSDate, NSMutableArray, NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDHomeManagerHH2SharedUserLastSyncManager : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _valid;	// 12 = 0xc
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    HMDHomeManager *_homeManager;	// 24 = 0x18
    NSMutableArray *_userLastSyncs;	// 32 = 0x20
    NSMutableDictionary *_homeToUserMap;	// 40 = 0x28
    NSMutableSet *_managedMergeIDs;	// 48 = 0x30
    NSDate *_creationDate;	// 56 = 0x38
    HMFTimer *_delayTimer;	// 64 = 0x40
}

+ (id)shortDescription;	// IMP=0x0010000000a04981
- (void).cxx_destruct;	// IMP=0x0000000000a043ec
@property(readonly, getter=isValid) _Bool valid;
@property(readonly, copy) NSString *description;
- (id)privateDescription;	// IMP=0x0000000000a043be
- (id)shortDescription;	// IMP=0x0000000000a043a4
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000a04243
- (void)_pushAllUserSyncData;	// IMP=0x0000000000a03d82
- (void)removeUserLastSyncData:(id)arg1;	// IMP=0x0000000000a03ce9
- (void)_removeAllUserLastSyncData;	// IMP=0x0000000000a038bb
- (void)_scheduleNextPush;	// IMP=0x0000000000a0358d
- (void)scheduleNextPush;	// IMP=0x0000000000a03532
- (double)_nextInterval;	// IMP=0x0000000000a033a1
- (_Bool)_shouldExpire;	// IMP=0x0000000000a03256
- (_Bool)_shouldPushNow;	// IMP=0x0000000000a02e8f
- (double)_pushInterval;	// IMP=0x0000000000a02de9
- (double)_expireInterval;	// IMP=0x0000000000a02d43
- (double)_interval;	// IMP=0x0000000000a02c9d
- (_Bool)isManagingUserWithMergeID:(id)arg1;	// IMP=0x0000000000a02c77
- (void)configure;	// IMP=0x0000000000a0247a
- (id)initWithHomeManager:(id)arg1 archivePaths:(id)arg2;	// IMP=0x0000000000a02147

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

