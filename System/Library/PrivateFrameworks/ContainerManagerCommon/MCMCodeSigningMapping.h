//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MCMSQLiteDB, MCMUserIdentityCache;
@protocol MCMChildParentMapCache, MCMManagedPath, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MCMCodeSigningMapping : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;	// 8 = 0x8
    id <MCMChildParentMapCache> _childParentMapCache;	// 16 = 0x10
    MCMSQLiteDB *_codeSigningMappingDB;	// 24 = 0x18
    MCMUserIdentityCache *_userIdentityCache;	// 32 = 0x20
    id <MCMManagedPath> _library;	// 40 = 0x28
}

+ (id)_moveDBIfNeededFromURL:(id)arg1 queue:(id)arg2 error:(id *)arg3;	// IMP=0x0060000000058eaf
+ (id)codeSignMappingWithError:(id *)arg1;	// IMP=0x0060000000058942
- (void).cxx_destruct;	// IMP=0x0000000000055470
@property(readonly, nonatomic) id <MCMManagedPath> library; // @synthesize library=_library;
@property(readonly, nonatomic) MCMUserIdentityCache *userIdentityCache; // @synthesize userIdentityCache=_userIdentityCache;
@property(retain, nonatomic) MCMSQLiteDB *codeSigningMappingDB; // @synthesize codeSigningMappingDB=_codeSigningMappingDB;
@property(readonly, nonatomic) id <MCMChildParentMapCache> childParentMapCache; // @synthesize childParentMapCache=_childParentMapCache;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (_Bool)_onQueue_removeGroupIdentifier:(id)arg1 forIdentifier:(id)arg2 containerClass:(unsigned long long)arg3 error:(id *)arg4 reconcileHandler:(CDUnknownBlockType)arg5;	// IMP=0x000000000005501f
- (_Bool)_onQueue_addGroupIdentifier:(id)arg1 forIdentifier:(id)arg2 containerClass:(unsigned long long)arg3 error:(id *)arg4 reconcileHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000054c72
- (_Bool)removeGroupIdentifier:(id)arg1 forIdentifier:(id)arg2 containerClass:(unsigned long long)arg3 error:(id *)arg4 reconcileHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000054aa8
- (_Bool)addGroupIdentifier:(id)arg1 forIdentifier:(id)arg2 containerClass:(unsigned long long)arg3 error:(id *)arg4 reconcileHandler:(CDUnknownBlockType)arg5;	// IMP=0x00000000000548de
- (_Bool)_onqueue_enumerateOwnersAndGroupsWithGroupClass:(unsigned long long)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x000000000005475c
- (_Bool)enumerateOwnersAndGroupsWithGroupClass:(unsigned long long)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;	// IMP=0x0000000000054579
- (_Bool)_onQueue_removeAllInvalidPluginCodeSigningEntriesWithNumRemoved:(int *)arg1 error:(id *)arg2;	// IMP=0x00000000000544c3
- (_Bool)removeAllInvalidPluginCodeSigningEntriesWithNumRemoved:(int *)arg1 error:(id *)arg2;	// IMP=0x00000000000543bc
- (_Bool)_onQueue_removeAllAdvanceCopiesWithError:(id *)arg1;	// IMP=0x0000000000054313
- (_Bool)removeAllAdvanceCopiesWithError:(id *)arg1;	// IMP=0x000000000005421a
- (id)_onQueue_removeReferenceForGroupIdentifiers:(id)arg1 containerClass:(unsigned long long)arg2;	// IMP=0x0000000000053ae8
- (void)_onQueue_handleChangeFromOldGroupContainerIds:(id)arg1 toNewGroupContainerIds:(id)arg2 containerClass:(unsigned long long)arg3 reconcileHandler:(CDUnknownBlockType)arg4;	// IMP=0x00000000000536df
- (id)_onQueue_copyReferenceCountSetForContainerClass:(unsigned long long)arg1;	// IMP=0x000000000005350a
- (id)copyReferenceCountSetForContainerClass:(unsigned long long)arg1;	// IMP=0x00000000000533e6
- (_Bool)invalidateCodeSigningInfoForIdentifier:(id)arg1 withError:(id *)arg2;	// IMP=0x00000000000532aa
- (_Bool)invalidateCodeSigningInfoForIdentifierAndItsChildren:(id)arg1 withError:(id *)arg2;	// IMP=0x0000000000053131
- (id)_onQueue_identifiersWithError:(id *)arg1;	// IMP=0x000000000005307a
- (id)identifiersWithError:(id *)arg1;	// IMP=0x0000000000052ec8
- (unsigned long long)invalidateCodeSigningInfoForAppsWithoutDataContainer;	// IMP=0x0000000000052516
- (id)entitlementsForIdentifier:(id)arg1;	// IMP=0x0000000000051f21
- (id)getCodeSigningInfoForIdentifier:(id)arg1;	// IMP=0x0000000000051d9e
- (id)processCodeSigningInfo:(id)arg1 identifier:(id)arg2 options:(id)arg3 error:(id *)arg4;	// IMP=0x0000000000051ae0
- (id)processCallerRegisteredEntitlements:(id)arg1 identifier:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000051555
- (id)systemGroupIdentifiersForIdentifier:(id)arg1;	// IMP=0x00000000000514dc
- (id)appGroupIdentifiersForIdentifier:(id)arg1;	// IMP=0x0000000000051463
- (unsigned long long)dataContainerTypeForIdentifier:(id)arg1;	// IMP=0x000000000005133a
- (_Bool)identifierHasSystemContainer:(id)arg1;	// IMP=0x00000000000512cf
- (_Bool)identifierHasCallerRegisteredEntitlements:(id)arg1;	// IMP=0x00000000000511a4
- (id)codeSigningEntryForIdentifier:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000005102e
- (id)removeCodeSigningDictionaryForIdentifiers:(id)arg1;	// IMP=0x0000000000050d16
- (id)groupContainerIdentifiersAssociatedWithIdentifier:(id)arg1 containerClass:(unsigned long long)arg2;	// IMP=0x0000000000050c43
- (void)_onQueue_iterateGroupIdsWithKey:(id)arg1 fallBackKey:(id)arg2 forAllIdentifiersUsingBlock:(CDUnknownBlockType)arg3;	// IMP=0x00000000000509f6
- (_Bool)_onQueue_invalidateCodeSigningInfoForIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0000000000050930
- (id)_onQueue_invalidateCodeSigningInfoForIdentifierAndItsChildren:(id)arg1;	// IMP=0x0000000000050852
- (_Bool)_onQueue_processCodeSigningInfo:(id)arg1 identifier:(id)arg2 options:(id)arg3 oldEntitlements:(id)arg4 error:(id *)arg5 reconcileHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000004f1cd
- (unsigned long long)_onQueue_dataContainerTypeForIdentifier:(id)arg1;	// IMP=0x000000000004ef94
- (_Bool)_onQueue_identifierHasCallerRegisteredEntitlements:(id)arg1;	// IMP=0x000000000004ed5b
- (id)_onQueue_codeSigningEntryForIdentifier:(id)arg1 withError:(id *)arg2;	// IMP=0x000000000004eb17
- (id)_entitlementsFromCodeSigningEntry:(id)arg1;	// IMP=0x000000000004ea95
- (id)_onQueue_entitlementsForIdentifier:(id)arg1;	// IMP=0x000000000004e995
- (id)_codeSigningInfoForCodeSigningEntry:(id)arg1 externalRequest:(_Bool)arg2;	// IMP=0x000000000004e8ca
- (id)_onQueue_codeSigningInfoForIdentifier:(id)arg1 externalRequest:(_Bool)arg2;	// IMP=0x000000000004e674
- (id)_onQueue_setCodeSigningDictionaryValues:(id)arg1 forIdentifiers:(id)arg2;	// IMP=0x000000000004de0a
- (id)_readCodeSigningMappingFromDiskAtURL:(id)arg1;	// IMP=0x000000000004d9d4
- (void)performAllCodeSigningMigrationAndReconciliationWithContext:(id)arg1;	// IMP=0x000000000004d8c2
- (void)_onQueue_reconcileSystemContainersWithContext:(id)arg1;	// IMP=0x000000000004cff3
- (void)_onQueue_migrateCachedCodeSigningInfoFromBundleContainerToMappingWithInfo:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3;	// IMP=0x000000000004c9f3
- (void)_onQueue_migrateCachedCodeSigningInfoFromBundleContainersToMappingWithContainersLegacy:(id)arg1 containerClass:(unsigned long long)arg2;	// IMP=0x000000000004bdf5
- (void)migrateCachedCodeSigningInfoFromBundleContainersToMapping;	// IMP=0x000000000004bc32
- (void)_onQueue_migrateDataFromLegacyEntitlementsFileToCodeSigningFile;	// IMP=0x000000000004b48d
- (void)_onQueue_migrateAppGroupIdsFromDataContainersToFileUsingContainers:(id)arg1;	// IMP=0x000000000004a8f9
- (void)migrateAppGroupIdsFromDataContainersToFile;	// IMP=0x000000000004a07f
- (void)_onQueue_migrateFromMappingFileToDBIfNecessary;	// IMP=0x0000000000049a8b
- (id)initWithUserIdentityCache:(id)arg1 queue:(id)arg2 mappingDB:(id)arg3 childParentMapCache:(id)arg4 library:(id)arg5;	// IMP=0x00000000000498fc

@end

