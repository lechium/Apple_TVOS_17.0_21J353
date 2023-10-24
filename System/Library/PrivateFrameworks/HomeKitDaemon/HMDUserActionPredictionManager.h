//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBLocalZone, HMDDatabaseZoneManager, NSObject, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDUserActionPredictionManager : HMFObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMBLocalZone *_localZone;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_workQueue;	// 24 = 0x18
    HMDDatabaseZoneManager *_zoneManager;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000026f7a
@property(readonly) HMDDatabaseZoneManager *zoneManager; // @synthesize zoneManager=_zoneManager;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)zoneManagerDidStop:(id)arg1;	// IMP=0x0000000000026e46
- (void)zoneManagerDidStart:(id)arg1;	// IMP=0x00000000000266f9
- (_Bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;	// IMP=0x00000000000266c1
- (id)_removeZones;	// IMP=0x0000000000026583
@property(retain) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
- (void)removeZones;	// IMP=0x0000000000026478
- (void)configure;	// IMP=0x0000000000026371
- (id)initWithZoneManager:(id)arg1 workQueue:(id)arg2;	// IMP=0x0000000000026242
- (id)initWithHome:(id)arg1;	// IMP=0x0000000000026020

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

