//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HMDPersistentStore : HMFObject
{
}

+ (id)logCategory;	// IMP=0x001000000049dce1
+ (id)controllerUsernameForPairingIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x001000000049d9e3
+ (_Bool)hasControllerKeyWithUsername:(id)arg1 error:(id *)arg2;	// IMP=0x001000000049d751
+ (id)decryptDataWithControllerKey:(id)arg1 totalKeysFound:(unsigned long long *)arg2 deleteExtraKeys:(_Bool)arg3 allowControllerIdentifierToChange:(_Bool)arg4 controllerIdentifierChanged:(_Bool *)arg5 successfulKeyUserName:(id *)arg6 error:(id *)arg7;	// IMP=0x001000000049c5cc
+ (id)encryptDataWithControllerKey:(id)arg1 error:(id *)arg2;	// IMP=0x001000000049c404
+ (id)decryptData:(id)arg1 withKey:(id)arg2 error:(id *)arg3;	// IMP=0x001000000049c025
+ (id)encryptData:(id)arg1 withKey:(id)arg2 error:(id *)arg3;	// IMP=0x001000000049be40
+ (id)unarchiveBulletinBoard;	// IMP=0x001000000049bc3e
+ (void)archiveBulletinBoard:(id)arg1;	// IMP=0x001000000049bb82
+ (id)unarchiveIDSDataSyncJournal;	// IMP=0x001000000049b546
+ (id)archiveIDSDataSyncJournal:(id)arg1;	// IMP=0x001000000049b3f6
+ (void)removeTransactionJournal;	// IMP=0x001000000049b245
+ (id)archiveCloudServerTokenData:(id)arg1;	// IMP=0x001000000049b107
+ (void)removeServerTokenDataFile;	// IMP=0x001000000049af56
+ (_Bool)archiveMetadata:(id)arg1;	// IMP=0x001000000049adb5
+ (id)loadBuiltinPlainMetadataDictionary;	// IMP=0x001000000049ad5d
+ (id)loadPlainMetadataDictionary;	// IMP=0x001000000049ad05
+ (id)unarchiveVendorStore;	// IMP=0x001000000049a893
+ (void)archiveVendorStore:(id)arg1;	// IMP=0x001000000049a635
+ (id)archiveHomeData:(id)arg1 toLocation:(id)arg2;	// IMP=0x001000000049a50c
+ (id)archiveHomeDataLegacy:(id)arg1 toLocation:(id)arg2;	// IMP=0x001000000049a492
+ (id)archiveHomeDataLegacy:(id)arg1;	// IMP=0x001000000049a423
+ (id)archiveHomeDataForTransaction:(id)arg1;	// IMP=0x001000000049a3af
+ (id)serializeHomeData:(id)arg1 localStorage:(_Bool)arg2 remoteDeviceOnSameAccount:(_Bool)arg3;	// IMP=0x001000000049972d
+ (void)resetConfiguration:(unsigned long long)arg1;	// IMP=0x00100000004996cf
+ (void)cleanupKeysInStore;	// IMP=0x0010000000498ed0
+ (id)unarchiveHomeData:(id *)arg1 decryptionFailed:(_Bool *)arg2 fromLocation:(id)arg3 successfulKeyUserName:(id *)arg4 forHH2Migration:(_Bool)arg5;	// IMP=0x00100000004989dc
+ (id)unarchiveHomeData:(id *)arg1 decryptionFailed:(_Bool *)arg2 successfulKeyUserName:(id *)arg3;	// IMP=0x0010000000498996
+ (_Bool)removeLegacyHomeArchive:(id *)arg1;	// IMP=0x00100000004988c1
+ (_Bool)deserializeHomeData:(id *)arg1 usingLocalStorage:(_Bool)arg2 fromData:(id)arg3 forHH2Migration:(_Bool)arg4;	// IMP=0x0010000000497ae0
+ (_Bool)deserializeHomeData:(id *)arg1 localStorage:(_Bool)arg2 fromData:(id)arg3;	// IMP=0x0010000000497a88
+ (_Bool)writeDictionary:(id)arg1 toStorePath:(id)arg2;	// IMP=0x00100000004977e8
+ (id)_writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3;	// IMP=0x00100000004974a9
+ (id)writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3;	// IMP=0x0010000000497399
+ (id)readDataFromPath:(id)arg1;	// IMP=0x001000000049722b
- (id)unarchiveDictionaryFromData:(id)arg1 allowedClasses:(id)arg2 forKey:(id)arg3;	// IMP=0x000000000049e131
- (id)unarchiveDictionaryWithPath:(id)arg1 allowedClasses:(id)arg2 forKey:(id)arg3;	// IMP=0x000000000049e043
- (id)archiveDictionary:(id)arg1 withPath:(id)arg2 forKey:(id)arg3;	// IMP=0x000000000049dddc
- (id)writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3;	// IMP=0x000000000049dd48

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

