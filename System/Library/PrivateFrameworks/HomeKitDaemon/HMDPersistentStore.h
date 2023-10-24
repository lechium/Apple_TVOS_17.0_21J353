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

+ (id)logCategory;	// IMP=0x001000000054b7e9
+ (id)controllerUsernameForPairingIdentity:(id)arg1 error:(id *)arg2;	// IMP=0x001000000054b4eb
+ (_Bool)hasControllerKeyWithUsername:(id)arg1 error:(id *)arg2;	// IMP=0x001000000054b259
+ (id)decryptDataWithControllerKey:(id)arg1 totalKeysFound:(unsigned long long *)arg2 deleteExtraKeys:(_Bool)arg3 allowControllerIdentifierToChange:(_Bool)arg4 controllerIdentifierChanged:(_Bool *)arg5 successfulKeyUserName:(id *)arg6 error:(id *)arg7;	// IMP=0x001000000054a0d4
+ (id)encryptDataWithControllerKey:(id)arg1 error:(id *)arg2;	// IMP=0x0010000000549f0c
+ (id)decryptData:(id)arg1 withKey:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000549b2d
+ (id)encryptData:(id)arg1 withKey:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000549948
+ (id)unarchiveBulletinBoard;	// IMP=0x0010000000549746
+ (void)archiveBulletinBoard:(id)arg1;	// IMP=0x001000000054968a
+ (id)unarchiveIDSDataSyncJournal;	// IMP=0x001000000054904e
+ (id)archiveIDSDataSyncJournal:(id)arg1;	// IMP=0x0010000000548efe
+ (void)removeTransactionJournal;	// IMP=0x0010000000548d4d
+ (id)archiveCloudServerTokenData:(id)arg1;	// IMP=0x0010000000548c0f
+ (void)removeServerTokenDataFile;	// IMP=0x0010000000548a5e
+ (_Bool)archiveMetadata:(id)arg1;	// IMP=0x00100000005488bd
+ (id)loadBuiltinPlainMetadataDictionary;	// IMP=0x0010000000548865
+ (id)loadPlainMetadataDictionary;	// IMP=0x001000000054880d
+ (id)unarchiveVendorStore;	// IMP=0x001000000054839b
+ (void)archiveVendorStore:(id)arg1;	// IMP=0x001000000054813d
+ (id)archiveHomeData:(id)arg1 toLocation:(id)arg2;	// IMP=0x0010000000548014
+ (id)archiveHomeDataLegacy:(id)arg1 toLocation:(id)arg2;	// IMP=0x0010000000547f9a
+ (id)archiveHomeDataLegacy:(id)arg1;	// IMP=0x0010000000547f2b
+ (id)archiveHomeDataForTransaction:(id)arg1;	// IMP=0x0010000000547eb7
+ (id)serializeHomeData:(id)arg1 localStorage:(_Bool)arg2 remoteDeviceOnSameAccount:(_Bool)arg3;	// IMP=0x00100000005472d2
+ (void)resetConfiguration:(unsigned long long)arg1;	// IMP=0x0010000000547274
+ (void)cleanupKeysInStore;	// IMP=0x0010000000547145
+ (id)unarchiveHomeData:(id *)arg1 decryptionFailed:(_Bool *)arg2 fromLocation:(id)arg3 successfulKeyUserName:(id *)arg4 forHH2Migration:(_Bool)arg5;	// IMP=0x0010000000546c51
+ (id)unarchiveHomeData:(id *)arg1 decryptionFailed:(_Bool *)arg2 successfulKeyUserName:(id *)arg3;	// IMP=0x0010000000546c0b
+ (_Bool)removeLegacyHomeArchive:(id *)arg1;	// IMP=0x0010000000546b36
+ (_Bool)deserializeHomeData:(id *)arg1 usingLocalStorage:(_Bool)arg2 fromData:(id)arg3 forHH2Migration:(_Bool)arg4;	// IMP=0x0010000000545e29
+ (_Bool)deserializeHomeData:(id *)arg1 localStorage:(_Bool)arg2 fromData:(id)arg3;	// IMP=0x0010000000545dd1
+ (_Bool)writeDictionary:(id)arg1 toStorePath:(id)arg2;	// IMP=0x0010000000545b31
+ (id)_writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3;	// IMP=0x00100000005457f2
+ (id)writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3;	// IMP=0x00100000005456e2
+ (id)readDataFromPath:(id)arg1;	// IMP=0x0010000000545574
- (id)unarchiveDictionaryFromData:(id)arg1 allowedClasses:(id)arg2 forKey:(id)arg3;	// IMP=0x000000000054bc39
- (id)unarchiveDictionaryWithPath:(id)arg1 allowedClasses:(id)arg2 forKey:(id)arg3;	// IMP=0x000000000054bb4b
- (id)archiveDictionary:(id)arg1 withPath:(id)arg2 forKey:(id)arg3;	// IMP=0x000000000054b8e4
- (id)writeData:(id)arg1 toStorePath:(id)arg2 dataLabel:(id)arg3;	// IMP=0x000000000054b850

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
