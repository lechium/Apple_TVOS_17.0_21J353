//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSString, NSUUID;

@interface SHLCloudLibraryCache : NSObject
{
    NSString *_processID;	// 8 = 0x8
    NSString *_containerID;	// 16 = 0x10
    NSUUID *_transactionID;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0020000000037020
@property(readonly, copy, nonatomic) NSUUID *transactionID; // @synthesize transactionID=_transactionID;
@property(readonly, copy, nonatomic) NSString *containerID; // @synthesize containerID=_containerID;
@property(readonly, copy, nonatomic) NSString *processID; // @synthesize processID=_processID;
- (_Bool)migrateWithError:(id *)arg1;	// IMP=0x0010000000036ee5
@property(readonly, nonatomic) _Bool needsMigration;
- (_Bool)commitTransactionWithError:(id *)arg1;	// IMP=0x0010000000036d94
- (_Bool)undoTransactionWithError:(id *)arg1;	// IMP=0x0010000000036d15
- (_Bool)startTransactionWithError:(id *)arg1;	// IMP=0x0010000000036bb9
- (id)failedTaskPathForIdentifier:(id)arg1;	// IMP=0x0010000000036b3f
- (id)inflightTaskPathForIdentifier:(id)arg1;	// IMP=0x0010000000036ac5
- (id)zonePathForIdentifier:(id)arg1;	// IMP=0x0010000000036a4b
- (id)failedFolderPath;	// IMP=0x00100000000369f4
- (id)inflightFolderPath;	// IMP=0x001000000003699d
- (id)zonesFolderPath;	// IMP=0x0010000000036946
- (id)privateDatabaseTransactionPath;	// IMP=0x0010000000036866
- (id)privateDatabaseFolderPath;	// IMP=0x001000000003680f
- (id)currentDatabaseFolderPath;	// IMP=0x001000000003675c
- (id)cacheDirectory;	// IMP=0x00100000000366dc
- (id)bundleDirectory;	// IMP=0x001000000003665c
- (id)rootDirectory;	// IMP=0x00100000000365d1
- (id)legacyCacheDirectory;	// IMP=0x0010000000036520
- (_Bool)createPrivateDatabaseFolderPathWithError:(id *)arg1;	// IMP=0x0010000000036499
- (_Bool)doesPrivateDatabaseFolderPathExist;	// IMP=0x0010000000036408
- (_Bool)createTaskFolderPaths;	// IMP=0x00100000000362c0
- (_Bool)doesTaskFolderPathsExist;	// IMP=0x00100000000361cb
- (_Bool)createZoneFolderPath;	// IMP=0x0010000000036135
- (_Bool)doesZoneFolderPathExist;	// IMP=0x00100000000360a4
- (_Bool)doesCacheDirectoryExist;	// IMP=0x0010000000036013
- (_Bool)createBundleDirectory;	// IMP=0x0010000000035f7d
- (_Bool)doesLegacyCacheDirectoryExist;	// IMP=0x0010000000035eec
- (_Bool)subscriptionExistsForZoneIdentifier:(id)arg1;	// IMP=0x0010000000035e50
- (_Bool)removeSubscriptionForZoneIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000035da9
- (_Bool)storeSubscription:(id)arg1 forZoneIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000035c4e
- (id)zoneTokenForZoneIdentifier:(id)arg1;	// IMP=0x0010000000035aed
- (id)databaseToken;	// IMP=0x0010000000035985
- (_Bool)removeTokenAtPath:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000035902
- (_Bool)removeTokenForZoneIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000358ac
- (_Bool)removeDatabaseTokenWithError:(id *)arg1;	// IMP=0x0010000000035856
- (_Bool)writeToken:(id)arg1 toPath:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000035773
- (_Bool)storeZoneToken:(id)arg1 forZoneIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000356aa
- (_Bool)storeDatabaseToken:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000355fe
- (_Bool)zoneExistsForIdentifier:(id)arg1;	// IMP=0x0010000000035550
- (_Bool)removeZoneIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000035494
- (_Bool)storeZoneIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000353bd
- (id)taskForFilePath:(id)arg1;	// IMP=0x001000000003524b
- (MISSING_TYPE *)tasksForFolderPath:ofType: /* Error: Ran out of types for this method. */;	// IMP=0x0010000000034e76
- (id)taskOfType:(long long)arg1 identifier:(id)arg2;	// IMP=0x0010000000034d8c
- (id)tasksOfType:(long long)arg1;	// IMP=0x0010000000034c90
- (void)removeAllTasksOfType:(long long)arg1;	// IMP=0x0010000000034afc
- (_Bool)removeTaskOfType:(long long)arg1 forIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000349f6
- (_Bool)storeTask:(id)arg1 ofType:(long long)arg2 error:(id *)arg3;	// IMP=0x00100000000348b3
- (_Bool)resetWithError:(id *)arg1;	// IMP=0x00100000000347a4
- (id)initWithCallingProcessIdentifier:(id)arg1 containerIdentifier:(id)arg2 transactionIdentifier:(id)arg3;	// IMP=0x00100000000346ec

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

