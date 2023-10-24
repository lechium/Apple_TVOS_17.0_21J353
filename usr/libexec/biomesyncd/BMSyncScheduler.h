//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BMCloudKitSyncEngine, BMRapportSyncEngine, BMSyncDatabase, BMSyncDevicePeerStatusTracker;
@protocol OS_dispatch_queue;

@interface BMSyncScheduler : NSObject
{
    BMRapportSyncEngine *_rapportSyncEngine;	// 8 = 0x8
    BMCloudKitSyncEngine *_cloudKitSyncEngine;	// 16 = 0x10
    BMSyncDevicePeerStatusTracker *_peerStatusTracker;	// 24 = 0x18
    BMSyncDatabase *_database;	// 32 = 0x20
    NSObject<OS_dispatch_queue> *_queue;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x002000000003c604
- (void)syncCloudKitNowIfPolicyAllowsWithReason:(unsigned long long)arg1 activity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000003bc5b
- (_Bool)canPerformCloudKitSyncWithReason:(unsigned long long)arg1;	// IMP=0x001000000003ba7c
- (void)syncRapportNowIfPolicyAllowsWithDevices:(id)arg1 reason:(unsigned long long)arg2 activity:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000003b515
- (void)syncRapportNowIfPolicyAllowsWithReason:(unsigned long long)arg1 activity:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x001000000003afe2
- (_Bool)canPerformRapportSyncWithReason:(unsigned long long)arg1;	// IMP=0x001000000003adc1
- (void)syncAllTransportsNowIfPolicyAllowsWithReason:(unsigned long long)arg1 activity:(id)arg2;	// IMP=0x001000000003aa55
- (void)syncNowIfPolicyAllowsWithReason:(unsigned long long)arg1 transportType:(unsigned long long)arg2 activity:(id)arg3;	// IMP=0x001000000003a96f
- (id)initWithRapportSyncEngine:(id)arg1 cloudKitSyncEngine:(id)arg2 peerStatusTracker:(id)arg3 database:(id)arg4 queue:(id)arg5;	// IMP=0x001000000003a868

@end

