//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "NSPersistentStore.h"

@class NSData, NSDictionary, NSGenerationalRowCache, NSMutableDictionary, NSObject, NSOperationQueue, NSSQLCoreDispatchManager, NSSQLModel, NSSQLiteAdapter, NSSQLiteConnection, NSSet, NSString, NSURL, _NSSQLCoreConnectionObserver, _PFMutex;
@protocol OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface NSSQLCore : NSPersistentStore
{
    NSSQLModel *_model;	// 8 = 0x8
    NSSQLiteAdapter *_adapter;	// 16 = 0x10
    NSSQLiteConnection *_schemaValidationConnection;	// 24 = 0x18
    NSSQLCoreDispatchManager *_dispatchManager;	// 32 = 0x20
    NSGenerationalRowCache *_generationalRowCache;	// 40 = 0x28
    _NSSQLCoreConnectionObserver *_observer;	// 48 = 0x30
    struct os_unfair_lock_s _sqlCoreStateLock;	// 56 = 0x38
    NSMutableDictionary *_storeMetadata;	// 64 = 0x40
    NSString *_externalDataReferencesDirectory;	// 72 = 0x48
    NSString *_externalDataLinksDirectory;	// 80 = 0x50
    NSString *_fileBackedFuturesPath;	// 88 = 0x58
    int _transactionInMemorySequence;	// 96 = 0x60
    _Bool _metadataIsClean;	// 100 = 0x64
    struct _sqlCoreFlags {
        unsigned int useSyntaxColoredLogging:1;
        unsigned int hasExternalDataReferences:1;
        unsigned int fileProtectionType:3;
        unsigned int notifyFOKChanges:1;
        unsigned int initializationComplete:1;
        unsigned int connectionsAreLocal:1;
        unsigned int isXPCDelegate:1;
        unsigned int queryGenerationInitializationFailed:1;
        unsigned int persistentHistoryTracking:1;
        unsigned int hasAncillaryModels:1;
        unsigned int postRemoteNotify:1;
        unsigned int hasFileBackedFutures:1;
        unsigned int isInMemory:1;
        unsigned int _debugRequestsHandling:1;
        unsigned int historyBatchUpdateModProperties:1;
        unsigned int indexTracking:1;
        unsigned int memoryObserverSuspended:1;
        unsigned int _RESERVED:13;
    } _sqlCoreFlags;	// 104 = 0x68
    NSSQLiteConnection *_queryGenerationTrackingConnection;	// 112 = 0x70
    _PFMutex *_writerSerializationMutex;	// 120 = 0x78
    NSDictionary *_ancillaryModels;	// 128 = 0x80
    NSDictionary *_ancillarySQLModels;	// 136 = 0x88
    NSDictionary *_historyTrackingOptions;	// 144 = 0x90
    NSData *_dbKey;	// 152 = 0x98
    id _usedIndexes;	// 160 = 0xa0
    _Bool _remoteStoresDidChange;	// 168 = 0xa8
    int _remoteNotificationToken;	// 172 = 0xac
    NSObject<OS_dispatch_source> *_cache_event_source;	// 176 = 0xb0
}

+ (_Bool)dropPersistentHistoryforPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x001000000017c6f4
+ (_Bool)_rekeyPersistentStoreAtURL:(id)arg1 options:(id)arg2 withKey:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000178ff5
+ (_Bool)_replacePersistentStoreAtURL:(id)arg1 destinationOptions:(id)arg2 withPersistentStoreFromURL:(id)arg3 sourceOptions:(id)arg4 error:(id *)arg5;	// IMP=0x0010000000178892
+ (_Bool)_destroyPersistentStoreAtURL:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001786a3
+ (id)cachedModelForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x00100000001781c2
+ (_Bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000177e61
+ (id)metadataForPersistentStoreWithURL:(id)arg1 options:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000177949
+ (_Bool)setMetadata:(id)arg1 forPersistentStoreWithURL:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000177931
+ (id)metadataForPersistentStoreWithURL:(id)arg1 error:(id *)arg2;	// IMP=0x001000000017791a
+ (id)_figureOutWhereExternalReferencesEndedUpRelativeTo:(id)arg1;	// IMP=0x0010000000176a53
+ (Class)migrationManagerClass;	// IMP=0x0010000000168d9a
+ (Class)rowCacheClass;	// IMP=0x0010000000168d89
+ (void)initialize;	// IMP=0x0010000000168bb0
+ (void)setTrackSQLiteDatabaseStatistics:(_Bool)arg1;	// IMP=0x0010000000168ba4
+ (_Bool)trackSQLiteDatabaseStatistics;	// IMP=0x0010000000168b98
+ (long long)bufferedAllocationsOverride;	// IMP=0x0010000000168b8b
+ (_Bool)useConcurrentFetching;	// IMP=0x0010000000168b7b
+ (_Bool)coloredLoggingDefault;	// IMP=0x0010000000168b6f
+ (int)debugDefault;	// IMP=0x0010000000168b63
+ (void)setColoredLoggingDefault:(_Bool)arg1;	// IMP=0x0010000000168b57
+ (void)setDebugDefault:(int)arg1;	// IMP=0x0010000000168b4b
- (id)propertyNamesInHistoryChangeDataForEntityDescription:(id)arg1;	// IMP=0x000000000017cd17
- (unsigned long long)entityIDForEntityDescription:(id)arg1;	// IMP=0x000000000017ccd2
- (_Bool)hasAncillaryModels;	// IMP=0x000000000017c6dd
- (id)ancillarySQLModels;	// IMP=0x000000000017c6cc
@property(readonly, nonatomic) NSDictionary *ancillaryModels; // @synthesize ancillaryModels=_ancillaryModels;
- (_Bool)finishDeferredLightweightMigration:(_Bool)arg1 withError:(id *)arg2;	// IMP=0x000000000017c236
- (id)currentChangeToken;	// IMP=0x000000000017bfc0
- (id)_allOrderKeysForDestination:(id)arg1 inRelationship:(id)arg2 error:(id *)arg3;	// IMP=0x000000000017ac8a
- (id)_newOrderedRelationshipInformationForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;	// IMP=0x000000000017ab5e
- (void)accommodatePresentedItemDeletionWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000017aaf4
@property(readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property(readonly, copy) NSURL *presentedItemURL;
- (id)_storeInfoForEntityDescription:(id)arg1;	// IMP=0x000000000017aac8
- (id)_newObjectIDForEntity:(id)arg1 referenceData64:(unsigned long long)arg2;	// IMP=0x000000000017aa0a
- (_Bool)_unload:(id *)arg1;	// IMP=0x000000000017a9ca
- (void)willRemoveFromPersistentStoreCoordinator:(id)arg1;	// IMP=0x000000000017a7dc
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1;	// IMP=0x000000000017a7c7
- (void)_mapsSyncDidUnregisterObjectsWithIDs_112229675:(id)arg1;	// IMP=0x000000000017a72a
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(id)arg1 generation:(id)arg2;	// IMP=0x000000000017a60c
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1;	// IMP=0x000000000017a5f8
- (void)managedObjectContextDidRegisterObjectsWithIDs:(id)arg1 generation:(id)arg2;	// IMP=0x000000000017a4f7
- (void)setExclusiveLockingMode:(_Bool)arg1;	// IMP=0x000000000017a443
@property(readonly, nonatomic) NSSQLModel *model;
- (id)adapter;	// IMP=0x000000000017a128
- (void)setURL:(id)arg1;	// IMP=0x000000000017a08d
- (id)type;	// IMP=0x000000000017a07c
- (_Bool)supportsConcurrentRequestHandling;	// IMP=0x0000000000179f5b
- (id)reopenQueryGenerationWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000179c38
- (void)freeQueryGenerationWithIdentifier:(id)arg1;	// IMP=0x0000000000179bc0
- (id)currentQueryGeneration;	// IMP=0x000000000017982c
- (_Bool)_hasActiveGenerations;	// IMP=0x000000000017960c
- (_Bool)supportsGenerationalQuerying;	// IMP=0x0000000000179550
- (void)setMetadata:(id)arg1;	// IMP=0x0000000000177607
- (id)metadata;	// IMP=0x00000000001775b7
- (void)setIdentifier:(id)arg1;	// IMP=0x0000000000177538
- (id)identifier;	// IMP=0x00000000001774d1
- (id)externalDataReferencesDirectory;	// IMP=0x0000000000176e83
- (id)fileBackedFuturesDirectory;	// IMP=0x0000000000176bf8
- (void)_rebuildIndiciesSynchronously:(_Bool)arg1;	// IMP=0x00000000001765e4
- (id)executeRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001739e7
- (_Bool)_prepareForExecuteRequest:(id)arg1 withContext:(id)arg2 error:(id *)arg3;	// IMP=0x00000000001737b9
- (id)obtainPermanentIDsForObjects:(id)arg1 error:(id *)arg2;	// IMP=0x00000000001737aa
- (id)newValueForRelationship:(id)arg1 forObjectWithID:(id)arg2 withContext:(id)arg3 error:(id *)arg4;	// IMP=0x00000000001726aa
- (id)newValuesForObjectWithID:(id)arg1 withContext:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000172065
- (void)dealloc;	// IMP=0x0000000000171bd9
- (void)_setupObserver;	// IMP=0x0000000000171708
- (_Bool)loadMetadata:(id *)arg1;	// IMP=0x00000000001713c7
- (_Bool)load:(id *)arg1;	// IMP=0x000000000016bc2f
- (id)initWithPersistentStoreCoordinator:(id)arg1 configurationName:(id)arg2 URL:(id)arg3 options:(id)arg4;	// IMP=0x00000000001697ed
- (_Bool)_isCloudKitOptioned;	// IMP=0x0000000000169563
- (id)newObjectIDForEntity:(id)arg1 pk:(long long)arg2;	// IMP=0x00000000001694e0
- (Class)objectIDFactoryForPersistentHistoryEntity:(id)arg1;	// IMP=0x0000000000169462
- (Class)objectIDFactoryForSQLEntity:(id)arg1;	// IMP=0x0000000000169445
- (Class)objectIDFactoryForEntity:(id)arg1;	// IMP=0x00000000001693c4
- (Class)_objectIDClass;	// IMP=0x000000000016939a

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property(readonly, copy) NSURL *primaryPresentedItemURL;
@property(readonly) Class superclass;

@end
