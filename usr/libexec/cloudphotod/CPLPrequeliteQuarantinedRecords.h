//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CPLPrequeliteQuarantinedRecords
{
}

- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x00200000000796aa
- (unsigned long long)countOfQuarantinedRecordsInScopeWithIdentifier:(id)arg1;	// IMP=0x00100000000795d3
- (unsigned long long)countOfQuarantinedRecords;	// IMP=0x001000000007955f
- (Class)classForQuarantinedRecordWithScopedIdentifier:(id)arg1;	// IMP=0x001000000007940a
- (_Bool)isRecordWithScopedIdentifierQuarantined:(id)arg1;	// IMP=0x00100000000792e1
- (_Bool)removeQuarantinedRecordWithScopedIdentifier:(id)arg1 removed:(_Bool *)arg2 error:(id *)arg3;	// IMP=0x001000000007912b
- (_Bool)addQuarantinedRecordWithScopedIdentifier:(id)arg1 recordClass:(Class)arg2 reason:(id)arg3 error:(id *)arg4;	// IMP=0x0010000000078f26
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x00100000000789f9
- (_Bool)initializeStorage;	// IMP=0x001000000007896e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end

