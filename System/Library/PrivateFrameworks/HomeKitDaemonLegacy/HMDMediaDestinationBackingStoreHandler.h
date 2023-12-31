//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDMediaDestinationManagerMetricsDispatcher, HMMediaDestination, HMMutableMediaDestination;
@protocol HMDMediaDestinationBackingStoreHandlerDelegate;

__attribute__((visibility("hidden")))
@interface HMDMediaDestinationBackingStoreHandler
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    HMMutableMediaDestination *_destination;	// 16 = 0x10
    id <HMDMediaDestinationBackingStoreHandlerDelegate> _delegate;	// 24 = 0x18
    HMDMediaDestinationManagerMetricsDispatcher *_metricsDispatcher;	// 32 = 0x20
}

+ (id)logCategory;	// IMP=0x0060000000311acd
+ (id)backingStoreObjectForMediaDestination:(id)arg1;	// IMP=0x00600000003119f2
- (void).cxx_destruct;	// IMP=0x0000000000311591
@property(readonly) HMDMediaDestinationManagerMetricsDispatcher *metricsDispatcher; // @synthesize metricsDispatcher=_metricsDispatcher;
@property __weak id <HMDMediaDestinationBackingStoreHandlerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;	// IMP=0x000000000031140b
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;	// IMP=0x0000000000310d72
- (void)setAudioGroupIdentifier:(id)arg1;	// IMP=0x0000000000310cfc
- (void)setSupportedOptions:(unsigned long long)arg1;	// IMP=0x0000000000310c98
@property(readonly) HMMediaDestination *destination;
- (void)recoverDueToInvalidRecordInCloudWithHome:(id)arg1 migrationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003109a4
- (void)migrateWithCurrentCloudRecord:(id)arg1 home:(id)arg2 cloudZone:(id)arg3 migrationQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0000000000310596
- (void)recoverDueToNoRecordInCloudWithHome:(id)arg1 migrationQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00000000003103b8
- (void)migrateWithHome:(id)arg1 cloudZone:(id)arg2 migrationQueue:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0000000000310243
- (void)updateAudioGroupIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000030feca
- (void)updateSupportedOptions:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000030fb5f
- (void)mergeDestination:(id)arg1;	// IMP=0x000000000030f9f5
- (id)initWithDestination:(id)arg1 backingStore:(id)arg2 metricsDispatcher:(id)arg3 delegate:(id)arg4;	// IMP=0x000000000030f895

@end

