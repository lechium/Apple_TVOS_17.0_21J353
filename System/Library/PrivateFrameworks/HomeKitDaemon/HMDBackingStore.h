//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CKRecordID, HMBLocalZone, HMCContext, HMCPartition, HMDBackingStoreLocal, HMDCoreData, HMDHome, HMDHomeManager, HMDObjectLookup, NSString, NSUUID;
@protocol HMDBackingStoreDataSource, HMDBackingStoreObjectProtocol;

__attribute__((visibility("hidden")))
@interface HMDBackingStore : HMFObject
{
    _Bool _removedLegacyArchive;	// 8 = 0x8
    CKRecordID *_root;	// 16 = 0x10
    HMDBackingStoreLocal *_local;	// 24 = 0x18
    HMDHomeManager *_homeManager;	// 32 = 0x20
    HMDHome *_home;	// 40 = 0x28
    NSUUID *_uuid;	// 48 = 0x30
    HMDObjectLookup *_lookup;	// 56 = 0x38
    HMCContext *_context;	// 64 = 0x40
    id <HMDBackingStoreObjectProtocol> _delegate;	// 72 = 0x48
    id <HMDBackingStoreDataSource> _dataSource;	// 80 = 0x50
    HMBLocalZone *_localZone;	// 88 = 0x58
    NSString *_contextName;	// 96 = 0x60
    NSString *_contextTransactionAuthor;	// 104 = 0x68
}

+ (id)_saveToLocalStoreWithReason:(id)arg1 homeManager:(id)arg2 shouldIncrementGenerationCounter:(_Bool)arg3 backingStore:(id)arg4;	// IMP=0x0010000000ae7161
+ (void)saveToPersistentStoreWithReason:(id)arg1 homeManager:(id)arg2 shouldIncrementGenerationCounter:(_Bool)arg3 backingStore:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000ae7043
+ (id)currentDevice;	// IMP=0x0010000000ae6f12
+ (id)logCategory;	// IMP=0x0010000000ae6ee2
+ (id)resetBackingStore;	// IMP=0x0010000000ae6dc8
+ (id)flushBackingStore;	// IMP=0x0010000000ae6cae
+ (id)internalAllowedTypes;	// IMP=0x0010000000ae6c7e
+ (id)deeplyProblematicObjectTypes;	// IMP=0x0010000000ae6c4e
+ (id)allowedTypes;	// IMP=0x0010000000ae6c1e
+ (void)start;	// IMP=0x0010000000ae6b06
+ (id)cdlsFetchManagedObjectsWithUUIDStrings:(id)arg1 ofManagedObjectType:(Class)arg2;	// IMP=0x0010000000337b0d
+ (id)cdlsModelIDStringsForManagedObjects:(id)arg1;	// IMP=0x00100000003378c2
+ (id)cdlsFetchObjectWithUUID:(id)arg1 ofModelType:(Class)arg2 error:(id *)arg3;	// IMP=0x00100000003377f5
+ (id)cdlsFetchManagedObjectWithUUID:(id)arg1 ofManagedObjectType:(Class)arg2 error:(id *)arg3;	// IMP=0x00100000003374f4
+ (id)cdlsFetchManagedObjectWithUUID:(id)arg1 ofModelType:(Class)arg2 error:(id *)arg3;	// IMP=0x0010000000337465
+ (id)dependencySortTestInterface:(id)arg1;	// IMP=0x0010000000337458
+ (id)cdlsBackingStoreForHomeManagerWithError:(id *)arg1;	// IMP=0x0010000000337401
+ (id)cdlsBackingStoreWithHandle:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000337371
+ (id)cdlsActiveBackingStores;	// IMP=0x0010000000337341
- (void).cxx_destruct;	// IMP=0x0000000000ae693b
@property(readonly, nonatomic) NSString *contextTransactionAuthor; // @synthesize contextTransactionAuthor=_contextTransactionAuthor;
@property(readonly, nonatomic) NSString *contextName; // @synthesize contextName=_contextName;
@property(retain, nonatomic) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(nonatomic) __weak id <HMDBackingStoreObjectProtocol> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) HMCContext *context; // @synthesize context=_context;
@property(retain, nonatomic) HMDObjectLookup *lookup; // @synthesize lookup=_lookup;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property(nonatomic) __weak HMDHome *home; // @synthesize home=_home;
@property(nonatomic) __weak HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property(retain, nonatomic) HMDBackingStoreLocal *local; // @synthesize local=_local;
@property(readonly, nonatomic) CKRecordID *root; // @synthesize root=_root;
@property(readonly) _Bool isAtomicSaveFeatureEnabled;
@property(readonly) NSString *activeControllerKeyUsername;
- (id)dataForPersistentStoreIncrementingGeneration:(_Bool)arg1 reason:(id)arg2;	// IMP=0x0000000000ae66cf
- (id)createHomeObjectLookupWithHome:(id)arg1;	// IMP=0x0000000000ae6682
- (id)backingStoreOperationQueue;	// IMP=0x0000000000ae662b
- (id)localBackingStore;	// IMP=0x0000000000ae65d4
- (id)createBackingStoreOperation;	// IMP=0x0000000000ae65bb
- (id)createBackingStoreLogAddTransactionOperationWithTransaction:(id)arg1;	// IMP=0x0000000000ae656e
- (id)__fetchWithGroup:(id)arg1 uuids:(id)arg2 error:(id *)arg3;	// IMP=0x0000000000ae643d
- (void)submitBlock:(CDUnknownBlockType)arg1;	// IMP=0x0000000000ae6311
- (void)saveToPersistentStoreWithReason:(id)arg1 incrementGeneration:(_Bool)arg2;	// IMP=0x0000000000ae61e2
- (id)logIdentifier;	// IMP=0x0000000000ae6192
@property(readonly, copy) NSString *description;
- (void)submit:(id)arg1;	// IMP=0x0000000000ae6020
- (void)deleteModelObjects:(id)arg1 destination:(unsigned long long)arg2;	// IMP=0x0000000000ae600e
- (void)updateModelObjects:(id)arg1 destination:(unsigned long long)arg2;	// IMP=0x0000000000ae5ffc
- (void)commit:(id)arg1 run:(_Bool)arg2 save:(_Bool)arg3 archiveInline:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000ae5492
- (void)commit:(id)arg1 run:(_Bool)arg2 save:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000ae5470
- (id)transaction:(id)arg1 options:(id)arg2;	// IMP=0x0000000000ae53ef
- (id)initWithUUID:(id)arg1;	// IMP=0x0000000000ae533a
- (id)initWithUUID:(id)arg1 home:(id)arg2;	// IMP=0x0000000000ae529e
- (id)initWithUUID:(id)arg1 homeManager:(id)arg2;	// IMP=0x0000000000ae527d
- (id)initWithUUID:(id)arg1 homeManager:(id)arg2 home:(id)arg3 dataSource:(id)arg4;	// IMP=0x0000000000ae508a
- (void)cdlsDelete:(id)arg1 destination:(unsigned long long)arg2;	// IMP=0x0000000000333bee
- (void)cdlsUpdate:(id)arg1 destination:(unsigned long long)arg2;	// IMP=0x0000000000333bdf
- (void)cdlsCommit:(id)arg1 run:(_Bool)arg2 save:(_Bool)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0000000000333af6
- (void)_cdlsReplayAllModelsStartingAt:(id)arg1 isInitialGraphLoad:(_Bool)arg2;	// IMP=0x00000000003334ba
- (void)cdlsReplayAllModelsStartingAt:(id)arg1 isInitialGraphLoad:(_Bool)arg2;	// IMP=0x00000000003333ca
- (id)cdlsFetchObjectWithUUID:(id)arg1 ofModelType:(Class)arg2 error:(id *)arg3;	// IMP=0x0000000000333222
- (void)dmKickClients;	// IMP=0x000000000033302a
- (void)handleCoreDataDidSaveNotification:(id)arg1 sourceContext:(id)arg2;	// IMP=0x0000000000332401
- (void)handleCoreDataDidSaveNotification:(id)arg1;	// IMP=0x0000000000332348
- (void)handleCoreDataWillSaveNotification:(id)arg1;	// IMP=0x000000000033203b
@property(readonly, nonatomic) HMDCoreData *coreData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) HMCPartition *partition; // @dynamic partition;
@property(readonly) Class superclass;

@end

