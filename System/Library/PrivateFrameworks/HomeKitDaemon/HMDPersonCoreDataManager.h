//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMCContext, HMDHome, HMDPersonResidentSyncManager, NSNotificationCenter, NSObject, NSString, NSUUID;
@protocol HMDPersonCoreDataManagerDelegate, HMDPersonDataSource, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDPersonCoreDataManager : HMFObject
{
    id <HMDPersonCoreDataManagerDelegate> _delegate;	// 8 = 0x8
    NSObject<OS_dispatch_queue> *_workQueue;	// 16 = 0x10
    NSUUID *_UUID;	// 24 = 0x18
    HMDHome *_home;	// 32 = 0x20
    NSUUID *_userUUID;	// 40 = 0x28
    HMCContext *_context;	// 48 = 0x30
    HMDPersonResidentSyncManager *_residentSyncManager;	// 56 = 0x38
    NSNotificationCenter *_notificationCenter;	// 64 = 0x40
    id <HMDPersonDataSource> _dataSource;	// 72 = 0x48
}

+ (id)logCategory;	// IMP=0x0010000000c2a792
- (void).cxx_destruct;	// IMP=0x0000000000c298d0
@property __weak id <HMDPersonDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly) NSNotificationCenter *notificationCenter; // @synthesize notificationCenter=_notificationCenter;
@property(readonly) HMDPersonResidentSyncManager *residentSyncManager; // @synthesize residentSyncManager=_residentSyncManager;
@property(readonly) HMCContext *context; // @synthesize context=_context;
@property(copy) NSUUID *userUUID; // @synthesize userUUID=_userUUID;
@property __weak HMDHome *home; // @synthesize home=_home;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property __weak id <HMDPersonCoreDataManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)logIdentifier;	// IMP=0x0000000000c29764
- (void)handleManagedObjectContextDidSaveNotification:(id)arg1;	// IMP=0x0000000000c28e78
- (void)handleManagedObjectContextWillSaveNotification:(id)arg1;	// IMP=0x0000000000c28bdb
- (_Bool)isRelevantPerson:(id)arg1;	// IMP=0x0000000000c28724
- (_Bool)isRelevantManagedObjectContext:(id)arg1;	// IMP=0x0000000000c28516
- (_Bool)shouldDispatchToPrimaryResident;	// IMP=0x0000000000c283b7
- (id)personModelWithModelID:(id)arg1;	// IMP=0x0000000000c28224
- (id)personWithModelID:(id)arg1;	// IMP=0x0000000000c27f22
- (void)insertOrUpdatePersonUsingPerson:(id)arg1;	// IMP=0x0000000000c27766
- (id)persons;	// IMP=0x0000000000c2733a
- (id)deletedPersonUUIDsUserInfoKey;	// IMP=0x0000000000c272ce
- (id)removeAllAssociatedData;	// IMP=0x0000000000c26f5a
- (id)addOrUpdatePersons:(id)arg1 andRemovePersonsWithUUIDs:(id)arg2;	// IMP=0x0000000000c26c08
- (void)enumeratePersonsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000c26a96
- (id)personWithUUID:(id)arg1;	// IMP=0x0000000000c26951
- (void)configureWithDataSource:(id)arg1;	// IMP=0x0000000000c26805
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2 home:(id)arg3 userUUID:(id)arg4 context:(id)arg5 residentSyncManager:(id)arg6 notificationCenter:(id)arg7;	// IMP=0x0000000000c2667c
- (id)initWithUUID:(id)arg1 workQueue:(id)arg2 home:(id)arg3 userUUID:(id)arg4;	// IMP=0x0000000000c264d1

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

