//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMBCloudZone, HMBLocalZone, HMDDatabaseZoneManager, HMDPersonCoreDataManager, HMFTimer, NSObject, NSSet, NSString, NSUUID;
@protocol HMDPersonManagerSettings, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDPersonManager : HMFObject
{
    _Bool _syncsPersonData;	// 8 = 0x8
    NSString *_logIdentifier;	// 16 = 0x10
    NSUUID *_UUID;	// 24 = 0x18
    HMDPersonCoreDataManager *_coreDataManager;	// 32 = 0x20
    HMBLocalZone *_localZone;	// 40 = 0x28
    HMBCloudZone *_cloudZone;	// 48 = 0x30
    HMFTimer *_unassociatedFaceCropsCleanupTimer;	// 56 = 0x38
    unsigned long long _fetchBatchLimit;	// 64 = 0x40
    CDUnknownBlockType _unassociatedFaceCropsCleanupTimerFactory;	// 72 = 0x48
    NSObject<OS_dispatch_queue> *_workQueue;	// 80 = 0x50
    HMDDatabaseZoneManager *_zoneManager;	// 88 = 0x58
    NSSet *_dataInterfaces;	// 96 = 0x60
}

+ (id)logCategory;	// IMP=0x00100000005091b4
+ (id)zoneNameForZoneUUID:(id)arg1;	// IMP=0x0010000000509100
- (void).cxx_destruct;	// IMP=0x00000000005070aa
@property(readonly) NSSet *dataInterfaces; // @synthesize dataInterfaces=_dataInterfaces;
@property(readonly) HMDDatabaseZoneManager *zoneManager; // @synthesize zoneManager=_zoneManager;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(copy) CDUnknownBlockType unassociatedFaceCropsCleanupTimerFactory; // @synthesize unassociatedFaceCropsCleanupTimerFactory=_unassociatedFaceCropsCleanupTimerFactory;
@property unsigned long long fetchBatchLimit; // @synthesize fetchBatchLimit=_fetchBatchLimit;
@property(retain) HMFTimer *unassociatedFaceCropsCleanupTimer; // @synthesize unassociatedFaceCropsCleanupTimer=_unassociatedFaceCropsCleanupTimer;
@property(retain) HMBCloudZone *cloudZone; // @synthesize cloudZone=_cloudZone;
@property(retain) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(readonly) HMDPersonCoreDataManager *coreDataManager; // @synthesize coreDataManager=_coreDataManager;
@property(readonly) _Bool syncsPersonData; // @synthesize syncsPersonData=_syncsPersonData;
@property(readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
@property(readonly, copy) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (void)timerDidFire:(id)arg1;	// IMP=0x0000000000506e36
- (id)attributeDescriptions;	// IMP=0x0000000000506d6a
@property(readonly, copy) id <HMDPersonManagerSettings> settings;
- (id)createBatchChange;	// IMP=0x0000000000506a03
- (id)removeFaceprintsWithUUIDs:(id)arg1;	// IMP=0x00000000005066dc
- (id)disassociateFaceCropsWithUUIDs:(id)arg1;	// IMP=0x000000000050631d
- (id)associateFaceCropsWithUUIDs:(id)arg1 toPersonWithUUID:(id)arg2 forSource:(long long)arg3;	// IMP=0x0000000000505d4a
- (id)addOrUpdateFaceprints:(id)arg1;	// IMP=0x00000000005059dc
- (id)faceprintsForFaceCropsWithUUIDs:(id)arg1;	// IMP=0x0000000000505601
- (void)enumerateFaceprintsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000005054ef
- (id)faceCropsForPersonsWithUUIDs:(id)arg1;	// IMP=0x00000000005052d6
- (void)enumeratePersonFaceCropsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000005051c4
- (id)faceCropsWithUUIDs:(id)arg1;	// IMP=0x00000000005050a3
- (void)enumerateUnassociatedFaceCropsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000504f91
- (void)enumerateFaceCropsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000504dbd
- (id)personsWithUUIDs:(id)arg1;	// IMP=0x0000000000504d01
- (id)performCloudPull;	// IMP=0x0000000000504b0b
@property(readonly, getter=isCurrentDeviceAvailableResident) _Bool currentDeviceAvailableResident;
@property(readonly, getter=isDataAvailable) _Bool dataAvailable;
- (void)coreDataManager:(id)arg1 didRemovePersonsWithUUIDs:(id)arg2;	// IMP=0x0000000000504790
- (void)coreDataManager:(id)arg1 didUpdatePersons:(id)arg2;	// IMP=0x00000000005044dd
- (void)zoneManagerDidStop:(id)arg1;	// IMP=0x00000000005043c2
- (void)zoneManagerDidStart:(id)arg1;	// IMP=0x00000000005040b1
- (_Bool)manager:(id)arg1 shouldShareWithUser:(id)arg2;	// IMP=0x0000000000504079
- (id)localZone:(id)arg1 didProcessModelDeletion:(id)arg2;	// IMP=0x0000000000503fbf
- (id)localZone:(id)arg1 didProcessModelUpdate:(id)arg2;	// IMP=0x0000000000503f05
- (id)localZone:(id)arg1 didProcessModelCreation:(id)arg2;	// IMP=0x0000000000503e4b
- (void)handleDataSyncInProgressChangedNotification:(id)arg1;	// IMP=0x0000000000503dda
- (void)handleResidentWasRemovedNotification:(id)arg1;	// IMP=0x0000000000503d22
- (void)handleResidentWasUpdatedNotification:(id)arg1;	// IMP=0x0000000000503c6a
- (void)handleResidentWasAddedNotification:(id)arg1;	// IMP=0x0000000000503bb2
- (void)handleUserPrivilegeDidChangeNotification:(id)arg1;	// IMP=0x0000000000503b41
- (id)_removePersonZones;	// IMP=0x00000000005039b0
- (void)_cleanUpExpiredUnassociatedFaceCrops;	// IMP=0x0000000000503619
- (void)_createZones;	// IMP=0x000000000050347b
- (void)_notifyDataInterfacesOfCurrentIsDataSyncInProgress;	// IMP=0x00000000005032c9
- (void)_notifyDataInterfacesOfCurrentIsCurrentDeviceAvailableResident;	// IMP=0x0000000000503117
- (void)_handleDeletedModel:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x00000000005025b4
- (void)_handleCreatedOrUpdatedModel:(id)arg1 mirrorOutputFuture:(id)arg2;	// IMP=0x0000000000501b19
- (id)_removeFaceprintsForFaceCropsWithUUIDs:(id)arg1;	// IMP=0x0000000000501a48
- (id)_faceCropsModelsWithUUIDs:(id)arg1;	// IMP=0x000000000050198c
- (id)_unassociatedFaceCropsModelsWithUUIDs:(id)arg1;	// IMP=0x00000000005018d0
- (_Bool)isDataSyncInProgress;	// IMP=0x000000000050183b
- (void)_createOrRemoveZonesForSettings:(id)arg1;	// IMP=0x000000000050160d
- (id)faceCropUUIDsForPersonWithUUID:(id)arg1;	// IMP=0x0000000000501484
- (id)removeFaceCropsWithUUIDs:(id)arg1;	// IMP=0x000000000050120a
- (id)addOrUpdateFaceCrops:(id)arg1;	// IMP=0x0000000000500f49
- (id)addOrUpdatePersons:(id)arg1 andRemovePersonsWithUUIDs:(id)arg2;	// IMP=0x0000000000500d77
- (id)removePersonsWithUUIDs:(id)arg1;	// IMP=0x0000000000500cea
- (id)addOrUpdatePersons:(id)arg1;	// IMP=0x0000000000500c5d
- (void)enumeratePersonsUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000500bf4
- (id)addUnassociatedFaceCropWithData:(id)arg1;	// IMP=0x0000000000500b06
- (void)handleFaceMisclassificationForFaceCropData:(id)arg1 personUUID:(id)arg2;	// IMP=0x0000000000500a28
- (id)faceCropsForPersonWithUUID:(id)arg1;	// IMP=0x0000000000500875
- (id)personFaceCropWithUnassociatedFaceCropUUID:(id)arg1;	// IMP=0x00000000005006a8
- (id)unassociatedFaceCropWithUUID:(id)arg1;	// IMP=0x00000000005005f5
- (id)personWithUUID:(id)arg1;	// IMP=0x000000000050057b
@property(readonly) _Bool sharesFaceClassifications;
- (_Bool)syncsDataToAllUsers;	// IMP=0x000000000050056b
- (id)removeAllAssociatedDataDueToHomeGraphObjectRemoval:(_Bool)arg1;	// IMP=0x0000000000500384
- (void)configureWithHome:(id)arg1;	// IMP=0x00000000004ffd40
- (void)dealloc;	// IMP=0x00000000004ffc50
- (id)initWithUUID:(id)arg1 zoneManager:(id)arg2 coreDataManager:(id)arg3 dataInterfaces:(id)arg4 workQueue:(id)arg5;	// IMP=0x00000000004ffa07

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

