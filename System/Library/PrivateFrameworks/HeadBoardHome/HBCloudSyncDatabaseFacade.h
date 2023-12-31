//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HBCloudSyncDatabaseServices, HBRawFolder, NSDictionary, NSMutableDictionary, NSOperation, PendingChanges;
@protocol HBCloudSyncOperationDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HBCloudSyncDatabaseFacade : NSObject
{
    struct {
        unsigned int delegateOperationWillBegin:1;
        unsigned int delegateOperationDidFailWithError:1;
        unsigned int delegateOperationDidCompleteSuccessfully:1;
    } _flags;	// 8 = 0x8
    _Bool _syncStateIsDirtyForDevice;	// 12 = 0xc
    id <HBCloudSyncOperationDelegate> _cloudSyncOperationDelegate;	// 16 = 0x10
    HBCloudSyncDatabaseServices *_cloudSyncDBServices;	// 24 = 0x18
    HBRawFolder *_rootFolder;	// 32 = 0x20
    PendingChanges *_pendingChangesToBeProcessed;	// 40 = 0x28
    NSDictionary *_syncedItemsToParentMapping;	// 48 = 0x30
    NSDictionary *_syncedFolderIdsToDisplayNamesMapping;	// 56 = 0x38
    NSMutableDictionary *_appIdentifiersToSyncedAlternateIconNames;	// 64 = 0x40
    NSObject<OS_dispatch_queue> *_cloudSyncFacadeSerialQueue;	// 72 = 0x48
}

+ (id)sharedCloudSyncDatabaseFacade;	// IMP=0x006000000003e0a4
+ (void)initialize;	// IMP=0x006000000003e053
- (void).cxx_destruct;	// IMP=0x00000000000470a7
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *cloudSyncFacadeSerialQueue; // @synthesize cloudSyncFacadeSerialQueue=_cloudSyncFacadeSerialQueue;
@property(nonatomic) _Bool syncStateIsDirtyForDevice; // @synthesize syncStateIsDirtyForDevice=_syncStateIsDirtyForDevice;
@property(retain, nonatomic) NSMutableDictionary *appIdentifiersToSyncedAlternateIconNames; // @synthesize appIdentifiersToSyncedAlternateIconNames=_appIdentifiersToSyncedAlternateIconNames;
@property(copy, nonatomic) NSDictionary *syncedFolderIdsToDisplayNamesMapping; // @synthesize syncedFolderIdsToDisplayNamesMapping=_syncedFolderIdsToDisplayNamesMapping;
@property(copy, nonatomic) NSDictionary *syncedItemsToParentMapping; // @synthesize syncedItemsToParentMapping=_syncedItemsToParentMapping;
@property(retain, nonatomic) PendingChanges *pendingChangesToBeProcessed; // @synthesize pendingChangesToBeProcessed=_pendingChangesToBeProcessed;
@property(retain, nonatomic) HBRawFolder *rootFolder; // @synthesize rootFolder=_rootFolder;
@property(retain, nonatomic) HBCloudSyncDatabaseServices *cloudSyncDBServices; // @synthesize cloudSyncDBServices=_cloudSyncDBServices;
@property(nonatomic) __weak id <HBCloudSyncOperationDelegate> cloudSyncOperationDelegate; // @synthesize cloudSyncOperationDelegate=_cloudSyncOperationDelegate;
- (void)_generateUUIDForAddedFoldersInList:(id)arg1;	// IMP=0x0000000000046ce7
- (id)_applicationsToBeUninstalledFromDeletedRecordIDs:(id)arg1 oldFolder:(id)arg2;	// IMP=0x0000000000046756
- (id)_installableAppRecordsFromNewFolder:(id)arg1 changedRecords:(id)arg2;	// IMP=0x00000000000461e6
- (void)_updateInstallableRecordsList:(id)arg1 fromInstallingProxies:(id)arg2;	// IMP=0x0000000000045e0f
- (id)_deletableItemsListWithHashedIdsFromList:(id)arg1;	// IMP=0x0000000000045b55
- (void)_createAndSaveRecordsToCloudWithFolder:(id)arg1;	// IMP=0x0000000000045578
- (void)_registerForNotificationsToListenForZoneChangesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00000000000454d0
- (void)_setAlternateIconNamesForApps:(id)arg1 rootFolder:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0000000000044b7e
- (_Bool)_saveFolder:(id)arg1 shouldSendNotification:(_Bool)arg2 mergeInPlace:(_Bool)arg3;	// IMP=0x000000000004491f
- (void)_finishAndSaveFolderIfRequired:(id)arg1 operationError:(id)arg2 userInfo:(id)arg3 mergeInPlace:(_Bool)arg4;	// IMP=0x00000000000445c3
- (_Bool)_doDeviceChangesNeedToBeSyncedToCloudBasedOffCloudRecords:(id)arg1 rootFolder:(id)arg2;	// IMP=0x0000000000043987
- (void)_syncDeviceChangesToCloud;	// IMP=0x0000000000042a75
- (void)_updateLocalDeviceStateWithChangedCloudRecords:(id)arg1 deletedRecordIDs:(id)arg2 shouldPerformMigration:(_Bool)arg3 shouldMergeInPlace:(_Bool)arg4;	// IMP=0x0000000000041cdf
- (void)_deleteOldZonesPostMigration;	// IMP=0x0000000000041967
- (void)_saveSubscriptionsPostMigration;	// IMP=0x0000000000041640
- (void)_updateDeviceByFetchingChangesForZoneID:(id)arg1;	// IMP=0x00000000000411bc
- (void)_fetchOneHomeScreenZoneDeletionStatus:(CDUnknownBlockType)arg1;	// IMP=0x0000000000040b72
- (id)_validInstallableAppRecordsFromRecords:(id)arg1;	// IMP=0x0000000000040970
- (id)_deserializeRootFolder;	// IMP=0x0000000000040725
- (void)_unarchiveLastKnownCloudSyncedState;	// IMP=0x00000000000402c9
- (void)_archiveLastKnownCloudSyncedState;	// IMP=0x0000000000040046
- (void)appInstallsBeganPostSync:(id)arg1;	// IMP=0x000000000003fdad
- (void)discardOneHomeScreenZone;	// IMP=0x000000000003fa51
- (void)syncDeviceFolderStructureToCloud;	// IMP=0x000000000003f98f
@property(readonly, nonatomic) NSOperation *currentOperation;
- (void)beginMigrationCheck;	// IMP=0x000000000003f292
- (void)migrateCloudData;	// IMP=0x000000000003ec43
- (void)updateCloudStateFromDevice;	// IMP=0x000000000003ebe2
- (void)updateDeviceStateFromCloud;	// IMP=0x000000000003e487
- (void)resetSyncParameters;	// IMP=0x000000000003e3c1
- (void)dealloc;	// IMP=0x000000000003e20b
- (id)init;	// IMP=0x000000000003e0f9

@end

