//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKRecordID, CKRecordZone, CKRecordZoneID, CKReference, CPLCloudKitScope, CPLEngineScope, NSString;

@interface CPLCloudKitZoneIdentification : NSObject
{
    _Bool _hasCachedRootRef;	// 8 = 0x8
    CKReference *_cachedRootRef;	// 16 = 0x10
    CPLCloudKitScope *_cloudKitScope;	// 24 = 0x18
    CPLEngineScope *_engineScope;	// 32 = 0x20
}

+ (_Bool)isScopeReadonlyFromCKShare:(id)arg1;	// IMP=0x0020000000118054
+ (long long)_permissionFromCKShare:(id)arg1;	// IMP=0x0010000000117f50
+ (id)prefixForNewScopes;	// IMP=0x0010000000117f48
+ (id)libraryInfoRecordName;	// IMP=0x0010000000117930
+ (_Bool)isSupportedShare:(id)arg1;	// IMP=0x0010000000117780
+ (_Bool)isSupportedShareType:(id)arg1;	// IMP=0x001000000011770c
+ (id)shareType;	// IMP=0x0010000000117704
+ (id)shareRecordName;	// IMP=0x00100000001176fc
+ (id)rootRecordName;	// IMP=0x00100000001176f4
+ (_Bool)supportsCloudKitScope:(id)arg1 engineScope:(id)arg2;	// IMP=0x0000000000116d21
+ (long long)scopeTypeForCloudKitScope:(id)arg1 proposedScopeType:(long long)arg2 fetchedRecords:(id)arg3 currentUserID:(id)arg4;	// IMP=0x0010000000116d19
+ (id)recordsToFetchToIdentifyZoneID:(id)arg1 proposedScopeType:(long long)arg2 currentUserID:(id)arg3;	// IMP=0x0010000000116b0c
+ (id)recordNamesForScopeInfo;	// IMP=0x0010000000116a0e
+ (_Bool)shouldProtectZoneIDFromDeletion:(id)arg1;	// IMP=0x001000000011676e
- (void).cxx_destruct;	// IMP=0x0020000000118082
@property(readonly, nonatomic) CPLEngineScope *engineScope; // @synthesize engineScope=_engineScope;
@property(readonly, nonatomic) CPLCloudKitScope *cloudKitScope; // @synthesize cloudKitScope=_cloudKitScope;
- (_Bool)_isScopeReadonlyFromCKShare:(id)arg1;	// IMP=0x0010000000117fc5
- (id)newScopeIdentifier;	// IMP=0x0010000000117e4a
- (void)validateCreateScopeTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000117e3a
- (void)validateAcceptSharedScopeTask:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x0010000000117e2a
@property(readonly, nonatomic) long long scopeType;
@property(readonly, nonatomic) NSString *scopeIdentifier;
@property(readonly, nonatomic) CKRecordZone *zone;
@property(readonly, nonatomic) CKRecordZoneID *zoneID;
- (id)scopedIdentifierWithIdentifier:(id)arg1;	// IMP=0x0010000000117cd9
- (id)recordIDWithRecordName:(id)arg1;	// IMP=0x0010000000117c5f
- (_Bool)supportsDeletionOfRecordClass:(Class)arg1;	// IMP=0x0010000000117c4a
- (_Bool)supportsDirectDeletionOfRecordClass:(Class)arg1;	// IMP=0x0010000000117c35
- (_Bool)supportsDownloadOfRecordClass:(Class)arg1;	// IMP=0x0010000000117c2d
- (_Bool)supportsUploadOfRecordClass:(Class)arg1;	// IMP=0x0010000000117c25
- (_Bool)supportsDeletionOfRecord:(id)arg1;	// IMP=0x0010000000117c10
- (_Bool)supportsDirectDeletionOfRecord:(id)arg1;	// IMP=0x0010000000117bfb
- (_Bool)supportsDownloadOfChange:(id)arg1;	// IMP=0x0010000000117bc7
- (_Bool)supportsUploadOfChange:(id)arg1;	// IMP=0x0010000000117b93
- (void)setupRootOnRecord:(id)arg1;	// IMP=0x0010000000117b28
@property(readonly, nonatomic) long long databaseScope;
@property(readonly, nonatomic) long long operationType;
- (id)_rootRef;	// IMP=0x00100000001179fd
@property(readonly, nonatomic) NSString *libraryInfoRecordName;
@property(readonly, nonatomic) NSString *shareType;
@property(readonly, nonatomic) NSString *shareRecordName;
@property(readonly, nonatomic) NSString *rootRecordType;
@property(readonly, nonatomic) CKRecordID *rootRecordID;
- (id)proposedStagingZoneIdentificationWithCurrentUserID:(id)arg1;	// IMP=0x0010000000117938
- (_Bool)isSupportedShare:(id)arg1;	// IMP=0x0010000000117892
- (_Bool)isSupportedShareType:(id)arg1;	// IMP=0x001000000011781e
- (id)updatedFlagsFromDeletedCKRecordID:(id)arg1 recordType:(id)arg2;	// IMP=0x00100000001176ec
- (id)updatedScopeChangeFromScopeChange:(id)arg1 currentUserID:(id)arg2 withDeletedCKRecordID:(id)arg3 recordType:(id)arg4;	// IMP=0x00100000001176e4
- (id)updatedFlagsFromCKRecord:(id)arg1;	// IMP=0x00100000001175f4
- (id)scopeFlagsUpdateFromCKRecords:(id)arg1;	// IMP=0x0010000000117489
- (id)updatedScopeChangeFromScopeChange:(id)arg1 currentUserID:(id)arg2 withCKRecord:(id)arg3;	// IMP=0x0010000000117169
- (id)scopeChangeFromCKRecords:(id)arg1 currentUserID:(id)arg2 previousScopeChange:(id)arg3;	// IMP=0x0010000000116e80
- (id)_baseScopeChange;	// IMP=0x0010000000116e0d
- (id)recordsToUpdateFromScopeChange:(id)arg1 currentUserID:(id)arg2;	// IMP=0x0010000000116e00
@property(readonly, nonatomic) CKRecordID *shareRecordIDToDelete;
@property(readonly, nonatomic) _Bool supportsZoneCreation;
@property(readonly, nonatomic) _Bool supportsZoneDelete;
- (id)recordsToFetchForScopeInfoWithCurrentUserID:(id)arg1;	// IMP=0x0010000000116d29
- (id)initWithCloudKitScope:(id)arg1 engineScope:(id)arg2;	// IMP=0x00100000001167bc

@end

