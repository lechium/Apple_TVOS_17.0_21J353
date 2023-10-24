//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, NSURL, NSUUID;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface MILaunchServicesOperationManager : NSObject
{
    unsigned int _targetUID;	// 8 = 0x8
    unsigned long long _serialNumber;	// 16 = 0x10
    NSUUID *_instanceID;	// 24 = 0x18
    NSMutableDictionary *_pendingOperations;	// 32 = 0x20
    NSObject<OS_os_transaction> *_pendingOperationTransaction;	// 40 = 0x28
    NSObject<OS_dispatch_queue> *_internalQueue;	// 48 = 0x30
}

+ (void)_reconcileOperations:(id)arg1 unregisterMountPoints:(id *)arg2 registerMountPoints:(id *)arg3 restartUniqueOperations:(id *)arg4;	// IMP=0x002000000001cb2d
+ (id)_discoverOrderedJournalEntriesInInstanceDir:(id)arg1;	// IMP=0x001000000001c75f
+ (id)_operationFromURL:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001c4df
+ (_Bool)_shouldContinueAfterCheckingAttemptCountInDir:(id)arg1;	// IMP=0x001000000001c083
+ (id)_mostRecentInstanceDirURLWithinURL:(id)arg1;	// IMP=0x001000000001b0b6
+ (_Bool)_writeLaunchServicesOperation:(id)arg1 toURL:(id)arg2 error:(id *)arg3;	// IMP=0x001000000001a7c7
+ (_Bool)appReferencesEnabled;	// IMP=0x001000000001a4ca
+ (id)instanceForCurrentUser;	// IMP=0x001000000001a3e2
+ (id)_instanceForUID:(unsigned int)arg1;	// IMP=0x001000000001a2ed
+ (id)registerUsingDiscoveredInfoForAppIdentity:(id)arg1 inDomain:(unsigned long long)arg2 error:(id *)arg3;	// IMP=0x001000000001a080
+ (id)registerInstalledInfo:(id)arg1 forIdentity:(id)arg2 inDomain:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x0010000000019ced
+ (id)registerInstalledInfo:(id)arg1 forAppBundleID:(id)arg2 personas:(id)arg3 inDomain:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x0010000000019c41
+ (id)_registerInstalledInfo:(id)arg1 forAppBundleID:(id)arg2 personas:(id)arg3 inDomain:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x0010000000019b35
+ (id)_appReferenceManagerInstance;	// IMP=0x0010000000019b1c
- (void).cxx_destruct;	// IMP=0x0020000000020e32
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property(retain, nonatomic) NSObject<OS_os_transaction> *pendingOperationTransaction; // @synthesize pendingOperationTransaction=_pendingOperationTransaction;
@property(readonly, nonatomic) NSMutableDictionary *pendingOperations; // @synthesize pendingOperations=_pendingOperations;
@property(readonly, nonatomic) unsigned int targetUID; // @synthesize targetUID=_targetUID;
@property(readonly, nonatomic) NSUUID *instanceID; // @synthesize instanceID=_instanceID;
- (void)operationWithUUID:(id)arg1 didFailToSaveWithError:(id)arg2;	// IMP=0x0010000000020cbe
- (void)operationWithUUIDWasSaved:(id)arg1;	// IMP=0x0010000000020bdd
- (_Bool)unregisterAppsAtMountPoint:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000209aa
- (_Bool)_onQueue_unregisterApplicationsAtMountPoint:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000020685
- (_Bool)unregisterAppForBundleID:(id)arg1 inDomain:(unsigned long long)arg2 operationType:(unsigned int)arg3 precondition:(id)arg4 error:(id *)arg5;	// IMP=0x00100000000200be
- (_Bool)_onQueue_unregisterAppForBundleID:(id)arg1 domain:(unsigned long long)arg2 operationType:(unsigned int)arg3 precondition:(id)arg4 error:(id *)arg5;	// IMP=0x001000000001fc9f
- (_Bool)setPersonaUniqueStrings:(id)arg1 forAppBundleID:(id)arg2 inDomain:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x001000000001f94e
- (_Bool)_onQueue_setPersonaUniqueStrings:(id)arg1 forAppBundleID:(id)arg2 inDomain:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x001000000001f490
- (_Bool)registerUsingDiscoveredInformationForAppBundleID:(id)arg1 inDomain:(unsigned long long)arg2 resultingRecordPromise:(id *)arg3 error:(id *)arg4;	// IMP=0x001000000001ef5d
- (id)registerInstalledInfo:(id)arg1 onMountPoint:(id)arg2 forAppBundleID:(id)arg3 error:(id *)arg4;	// IMP=0x001000000001edeb
- (id)registerInstalledInfo:(id)arg1 forAppBundleID:(id)arg2 personas:(id)arg3 inDomain:(unsigned long long)arg4 error:(id *)arg5;	// IMP=0x001000000001edc8
- (id)_registerApplicationInfo:(id)arg1 onMountPoint:(id)arg2 forAppBundleID:(id)arg3 domain:(unsigned long long)arg4 personas:(id)arg5 error:(id *)arg6;	// IMP=0x001000000001e9f1
- (id)_onQueue_registerApplicationInfo:(id)arg1 onMountPoint:(id)arg2 forAppBundleID:(id)arg3 domain:(unsigned long long)arg4 personas:(id)arg5 error:(id *)arg6;	// IMP=0x001000000001dfdf
- (void)purge;	// IMP=0x001000000001ddb2
- (void)reconcile;	// IMP=0x001000000001dc2a
- (void)_reconcileOperations:(id)arg1;	// IMP=0x001000000001d43f
- (id)_setUpLookAsideAtDirAndFindMostRecentInstance:(id)arg1;	// IMP=0x001000000001b876
- (unsigned long long)_onQueue_nextSerialNumber;	// IMP=0x001000000001b060
@property(readonly, nonatomic) unsigned long long serialNumber; // @synthesize serialNumber=_serialNumber;
- (void)_onQueue_handleLaunchServicesOperationFailureForUUID:(id)arg1 error:(id)arg2;	// IMP=0x001000000001af46
- (void)_onQueue_removePendingLaunchServicesOperationForUUID:(id)arg1;	// IMP=0x001000000001af32
- (void)_onQueue_removePendingLaunchServicesOperationForUUID:(id)arg1 dueToLSSave:(_Bool)arg2;	// IMP=0x001000000001ad76
- (_Bool)_onQueue_addPendingLaunchServicesOperation:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001abe3
- (_Bool)_onQueue_deleteLaunchServicesOperationForSerialNumber:(unsigned long long)arg1 error:(id *)arg2;	// IMP=0x001000000001aab6
- (_Bool)_onQueue_journalLaunchServicesOperation:(id)arg1 error:(id *)arg2;	// IMP=0x001000000001a945
- (id)_storageURLForOperationSerialNumber:(unsigned long long)arg1;	// IMP=0x001000000001a735
- (_Bool)_createStorageBaseDirectoryWithError:(id *)arg1;	// IMP=0x001000000001a63d
@property(readonly, nonatomic) NSURL *lookAsideStorageBaseURL;
@property(readonly, nonatomic) NSURL *instanceStorageBaseURL;
@property(readonly, nonatomic) NSURL *storageBaseURL;
- (id)initWithUID:(unsigned int)arg1;	// IMP=0x001000000001a408
- (id)_lsApplicationWorkspaceInstance;	// IMP=0x0010000000019b03

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
