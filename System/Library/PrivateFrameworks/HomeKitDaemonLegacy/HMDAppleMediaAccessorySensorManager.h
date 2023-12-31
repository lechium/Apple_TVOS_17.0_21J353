//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFPairingIdentity, HMSetupAccessoryDescription, NSDate, NSMutableArray, NSString, NSUUID;
@protocol HMDAppleMediaAccessorySensorManagerDataSource, HMDAppleMediaAccessorySensorManagerDataStore, HMDHPSManager, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessorySensorManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    _Bool _isCurrentlyPairing;	// 12 = 0xc
    _Bool _hasAttemptedRecovery;	// 13 = 0xd
    _Bool _shouldUseDerivedSensorUUID;	// 14 = 0xe
    _Bool _hasPendingRetry;	// 15 = 0xf
    _Bool _shouldAttemptToSetServiceNames;	// 16 = 0x10
    NSUUID *_sensorAccessoryUUID;	// 24 = 0x18
    NSDate *_pairingStartTime;	// 32 = 0x20
    id <HMDHPSManager> _sensorClient;	// 40 = 0x28
    id <HMDAppleMediaAccessorySensorManagerDataSource> _dataSource;	// 48 = 0x30
    HMSetupAccessoryDescription *_setupDescription;	// 56 = 0x38
    id <HMDAppleMediaAccessorySensorManagerDataStore> _dataStore;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_workQueue;	// 72 = 0x48
    unsigned long long _pairingRetryCount;	// 80 = 0x50
    NSMutableArray *_renamedServiceIDs;	// 88 = 0x58
    HMFPairingIdentity *_pairingIdentity;	// 96 = 0x60
}

+ (id)logCategory;	// IMP=0x00100000007a6d1e
- (void).cxx_destruct;	// IMP=0x00000000007a1478
- (id)logIdentifier;	// IMP=0x00000000007a13d3
- (void)managerIsReadyToBePaired;	// IMP=0x00000000007a1304
- (void)fetchADKSensorStatusCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000007a1243
- (void)handleCharacteristicsChangedNotification:(id)arg1;	// IMP=0x00000000007a1181
- (void)handleAccessoryAdded:(id)arg1;	// IMP=0x00000000007a0f6d
- (void)handlePrimaryResidentChanged:(id)arg1;	// IMP=0x00000000007a0f63
- (void)localAccessoryAddRequiresConsent:(id)arg1;	// IMP=0x00000000007a0c60
- (void)handleErrorCaseTestMessage:(id)arg1;	// IMP=0x00000000007a07db
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, copy) NSUUID *sensorAccessoryUUID;
- (void)_migrateToDataStoreIfNeeded:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000000007a0714
- (void)configureWithDataSource:(id)arg1 hpsXPCClient:(id)arg2 dataStore:(id)arg3;	// IMP=0x00000000007a0611
- (id)initWithWorkQueue:(id)arg1;	// IMP=0x00000000007a054e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

