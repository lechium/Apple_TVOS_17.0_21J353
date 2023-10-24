//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMDCoreData, HMDCoreDataCloudTransformMergePolicy, NSManagedObjectContext, NSMapTable, NSMutableDictionary, NSMutableSet, NSObject, NSString;
@protocol HMDCoreDataCloudTransformDelegate, HMMLogEventSubmitting, OS_os_log;

__attribute__((visibility("hidden")))
@interface HMDCoreDataCloudTransform : HMFObject
{
    NSObject<OS_os_log> *_logger;	// 8 = 0x8
    struct hmf_unfair_data_lock_s _lock;	// 16 = 0x10
    unsigned long long _importSignpostID;	// 24 = 0x18
    HMDCoreDataCloudTransformMergePolicy *_mergePolicy;	// 32 = 0x20
    _Bool _fakeRecordsEnabled;	// 40 = 0x28
    NSManagedObjectContext *_lazyManagedObjectContext;	// 48 = 0x30
    NSMutableSet *_pendingChangedStoreIdentifiers;	// 56 = 0x38
    NSMutableSet *_cloudImportInProgressStoreIdentifiers;	// 64 = 0x40
    id <HMDCoreDataCloudTransformDelegate> _delegate;	// 72 = 0x48
    HMDCoreData *_coreData;	// 80 = 0x50
    id <HMMLogEventSubmitting> _logEventSubmitter;	// 88 = 0x58
    NSMutableDictionary *_historyTokensByStoreIdentifier;	// 96 = 0x60
    NSMapTable *_cloudChangeListeners;	// 104 = 0x68
}

+ (_Bool)transactionIsCloudStoreReset:(id)arg1 context:(id)arg2;	// IMP=0x001000000063a449
+ (void)wipeCoreDataStorageDueToPCSIdentityLossAndRelaunchHomeKitDaemon;	// IMP=0x001000000063a265
+ (id)logCategory;	// IMP=0x001000000063a235
+ (id)localTransformableEntityFromEntity:(id)arg1;	// IMP=0x0010000000639f39
+ (Class)exportTransformableClassFromEntity:(id)arg1;	// IMP=0x0010000000639e4f
+ (id)exportTransformableEntityFromEntity:(id)arg1;	// IMP=0x0010000000639d5a
+ (Class)importTransformableClassFromEntity:(id)arg1;	// IMP=0x0010000000639cd6
+ (id)sharedInstance;	// IMP=0x0010000000639c73
+ (id)new;	// IMP=0x0010000000639bcb
- (void).cxx_destruct;	// IMP=0x000000000062e5f3
@property(nonatomic) __weak id <HMDCoreDataCloudTransformDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)cloudTransform:(id)arg1 isPermittedForHomeWithModelID:(id)arg2 isImport:(_Bool)arg3;	// IMP=0x000000000062e4c6
- (void)coreData:(id)arg1 cloudKitExportFinishedForStoreWithIdentifier:(id)arg2 duration:(double)arg3 error:(id)arg4;	// IMP=0x000000000062e2a8
- (void)coreData:(id)arg1 cloudKitExportStartedForStoreWithIdentifier:(id)arg2;	// IMP=0x000000000062e1b9
- (void)coreData:(id)arg1 cloudKitImportFinishedForStoreWithIdentifier:(id)arg2 duration:(double)arg3 error:(id)arg4;	// IMP=0x000000000062dc82
- (void)coreData:(id)arg1 cloudKitImportStartedForStoreWithIdentifier:(id)arg2;	// IMP=0x000000000062daa4
- (void)coreData:(id)arg1 persistentStoreWithIdentifierDidChange:(id)arg2;	// IMP=0x000000000062d843
- (id)newCloudMirrorExportStatusMonitor;	// IMP=0x000000000062d7a9
- (void)registerCloudChangeListener:(id)arg1 forEntities:(id)arg2;	// IMP=0x000000000062d61b
- (void)runCompleteMergeTransformForHomeWithModelID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000062d4f0
- (void)runTransformWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x000000000062d3dc
- (_Bool)runTransformWithError:(id *)arg1;	// IMP=0x000000000062d2ac
@property(readonly) NSManagedObjectContext *managedObjectContext;
- (id)initWithCoreData:(id)arg1 fakeRecordsEnabled:(_Bool)arg2 logEventSubmitter:(id)arg3;	// IMP=0x000000000062d0b7
- (id)initWithCoreData:(id)arg1 logEventSubmitter:(id)arg2;	// IMP=0x000000000062d09d
- (id)init;	// IMP=0x000000000062cff5
- (void)countResidentsInHomeWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x000000000008b358

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
