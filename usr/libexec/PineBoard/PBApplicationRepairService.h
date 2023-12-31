//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASDRepairService, NSMutableSet;

@interface PBApplicationRepairService : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    ASDRepairService *_service;	// 16 = 0x10
    NSMutableSet *_requestedBundleIDs;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000014bb5e
@property(readonly, nonatomic) NSMutableSet *requestedBundleIDs; // @synthesize requestedBundleIDs=_requestedBundleIDs;
@property(readonly, nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(readonly, nonatomic) ASDRepairService *service; // @synthesize service=_service;
- (void)_removeBundleID:(id)arg1;	// IMP=0x001000000014baec
- (_Bool)_addBundleID:(id)arg1;	// IMP=0x001000000014ba76
- (void)repairApplication:(id)arg1 background:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000014b576
- (void)repairApplication:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000014b55e
@property(readonly) unsigned long long activeRequestCount;
- (id)description;	// IMP=0x001000000014b48f
- (id)init;	// IMP=0x001000000014b435
- (id)initWithRepairService:(id)arg1;	// IMP=0x001000000014b27d

@end

