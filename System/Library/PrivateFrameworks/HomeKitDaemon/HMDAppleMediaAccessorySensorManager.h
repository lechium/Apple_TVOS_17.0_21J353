//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMFPairingIdentity, HMSetupAccessoryDescription, NSData, NSDate, NSMutableArray, NSString, NSUUID;
@protocol HMDAppleMediaAccessorySensorManagerDataSource, HMDAppleMediaAccessorySensorManagerDataStore, HMDHPSManager, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDAppleMediaAccessorySensorManager : NSObject
{
    struct os_unfair_lock_s _lock;	// 8 = 0x8
    NSUUID *_derivedSensorUUID;	// 16 = 0x10
    NSData *_derivedHAPAccessoryIdentifierData;	// 24 = 0x18
    NSString *_derivedHAPAccessoryIdentifier;	// 32 = 0x20
    _Bool _isCurrentlyPairing;	// 40 = 0x28
    _Bool _hasAttemptedRecovery;	// 41 = 0x29
    _Bool _shouldUseDerivedSensorUUID;	// 42 = 0x2a
    _Bool _hasPendingRetry;	// 43 = 0x2b
    _Bool _shouldAttemptToSetServiceNames;	// 44 = 0x2c
    NSUUID *_sensorAccessoryUUID;	// 48 = 0x30
    NSDate *_pairingStartTime;	// 56 = 0x38
    id <HMDHPSManager> _sensorClient;	// 64 = 0x40
    id <HMDAppleMediaAccessorySensorManagerDataSource> _dataSource;	// 72 = 0x48
    HMSetupAccessoryDescription *_setupDescription;	// 80 = 0x50
    id <HMDAppleMediaAccessorySensorManagerDataStore> _dataStore;	// 88 = 0x58
    NSObject<OS_dispatch_queue> *_workQueue;	// 96 = 0x60
    unsigned long long _pairingRetryCount;	// 104 = 0x68
    NSMutableArray *_renamedServiceIDs;	// 112 = 0x70
    HMFPairingIdentity *_pairingIdentity;	// 120 = 0x78
}

+ (id)logCategory;	// IMP=0x00100000003090e7
- (void).cxx_destruct;	// IMP=0x000000000030190d
- (id)logIdentifier;	// IMP=0x0000000000301868
- (void)managerIsReadyToBePaired;	// IMP=0x0000000000301799
@property(readonly, copy, nonatomic) NSString *derivedHAPAccessoryIdentifier;
- (id)derivedHAPAccessoryIdentifierDataForHostUUID:(id)arg1;	// IMP=0x0000000000301610
@property(readonly, copy, nonatomic) NSUUID *derivedSensorUUID;
- (id)derivedSensorUUIDForHostUUID:(id)arg1;	// IMP=0x0000000000301479
- (void)fetchADKSensorStatusCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000003013b8
- (void)handleCharacteristicsChangedNotification:(id)arg1;	// IMP=0x00000000003012f6
- (void)handleAccessoryAdded:(id)arg1;	// IMP=0x00000000003010e2
- (void)handlePrimaryResidentChanged:(id)arg1;	// IMP=0x00000000003010d8
- (void)localAccessoryAddRequiresConsent:(id)arg1;	// IMP=0x0000000000300cbd
- (void)handleErrorCaseTestMessage:(id)arg1;	// IMP=0x0000000000300801
@property(readonly, nonatomic) NSUUID *messageTargetUUID;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, copy) NSUUID *sensorAccessoryUUID;
- (void)_migrateToDataStoreIfNeeded:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000030058e
- (void)configureWithDataSource:(id)arg1 hpsXPCClient:(id)arg2 dataStore:(id)arg3;	// IMP=0x000000000030048b
- (id)initWithWorkQueue:(id)arg1;	// IMP=0x00000000003003c8

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

