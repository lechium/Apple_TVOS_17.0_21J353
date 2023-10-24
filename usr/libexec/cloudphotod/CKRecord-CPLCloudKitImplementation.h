//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKRecord.h>

@interface CKRecord (CPLCloudKitImplementation)
+ (id)cpl_recordFromCPLRecordChange:(id)arg1 scopeProvider:(id)arg2 currentUserRecordID:(id)arg3 inZone:(id)arg4 info:(CDStruct_14f26992 *)arg5 error:(id *)arg6;	// IMP=0x00200000000f34d9
+ (id)cpl_expungedSharedRecordFromCPLRecordChange:(id)arg1 inZone:(id)arg2 target:(id)arg3;	// IMP=0x00100000000f3371
+ (id)cpl_expungedRecordFromCPLRecordChange:(id)arg1 inZone:(id)arg2 target:(id)arg3;	// IMP=0x00100000000f3209
+ (Class)cpl_recordChangeClassForRecordType:(id)arg1;	// IMP=0x00100000000f0ced
- (id)cplResourcesWithScopedIdentifier:(id)arg1 coherent:(_Bool *)arg2 forRecord:(id)arg3;	// IMP=0x00200000000f431c
- (id)cplResourceWithType:(unsigned long long)arg1 scopedIdentifier:(id)arg2 isCoherent:(_Bool *)arg3;	// IMP=0x00100000000f38eb
- (id)cpl_recordChangeMissingResourceProperties:(id *)arg1 scopeIdentifier:(id)arg2 scopeProvider:(id)arg3 currentUserRecordID:(id)arg4;	// IMP=0x00100000000f3673
- (void)cpl_setEncryptedObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000f2dfb
- (void)cpl_setNonNilEncryptedObject:(id)arg1 forKey:(id)arg2;	// IMP=0x00100000000f2de2
- (id)cpl_decryptedObjectForKey:(id)arg1 validateClass:(Class)arg2;	// IMP=0x00100000000f2626
- (id)cpl_destinationRecordIDInPrivateScopeWithCurrentUserRecordID:(id)arg1 proposedDestinationRecordID:(id)arg2;	// IMP=0x00100000000f2322
- (void)cpl_updateContributorsOnSharedRecord:(id)arg1;	// IMP=0x00100000000f1dc5
- (void)cpl_updatePrivateRecordSharedToRecordWithID:(id)arg1 currentUserRecordID:(id)arg2 setSparseRecordFlag:(_Bool)arg3 force:(_Bool)arg4;	// IMP=0x00100000000f1be0
- (_Bool)cpl_isSharedWithScopeWithIdentifier:(id)arg1 scopeProvider:(id)arg2 currentUserRecordID:(id)arg3 isSparseRecord:(_Bool *)arg4;	// IMP=0x00100000000f1812
- (_Bool)cpl_supportsSharingScopeIdentifier;	// IMP=0x00100000000f17bf
- (id)cpl_sharingRecordScopedIdentifierWithScopeProvider:(id)arg1 currentUserRecordID:(id)arg2 isSparseRecord:(_Bool *)arg3;	// IMP=0x00100000000f133f
- (_Bool)cpl_isSparseRecord;	// IMP=0x00100000000f12f4
- (_Bool)cpl_inExpunged;	// IMP=0x00100000000f12a9
- (id)cplChangedKeys;	// IMP=0x00100000000f119d
- (void)cplValidateAndWarnIntegrityOfResourceData:(id)arg1 withFingerPrintKey:(id)arg2 andFileSizeKey:(id)arg3 fingerprintScheme:(id)arg4;	// IMP=0x00100000000f0e8c
- (id)cpl_objectForKey:(id)arg1 validateClass:(Class)arg2;	// IMP=0x00100000000f0d41
- (Class)cpl_recordChangeClass;	// IMP=0x00100000000f0cfa
- (id)cplFullDescription;	// IMP=0x00100000000f079b
- (id)initWithCPLArchiver:(id)arg1;	// IMP=0x0010000000115cae
- (id)plistArchiveWithCPLArchiver:(id)arg1;	// IMP=0x0010000000115c07
- (id)selfIfMatchesRecordName:(id)arg1;	// IMP=0x001000000011cd9e
@end
