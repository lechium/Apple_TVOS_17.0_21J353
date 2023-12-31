//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

@interface CPLPrequeliteCloudCache
{
    NSString *_perTransactionOtherScopeIdentifier;	// 8 = 0x8
    long long _perTransactionOtherScopeIndex;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00200000000500ef
- (_Bool)popCloudScopedIdentifiersToCheck:(id *)arg1 otherScopeIndex:(long long)arg2 maxCount:(long long)arg3 deletedCount:(long long *)arg4 error:(id *)arg5;	// IMP=0x001000000004f967
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x001000000004f85b
- (id)_relatedIdentifierForRecordWithIdentifier:(id)arg1;	// IMP=0x001000000004f6c0
- (id)statusPerScopeIndex;	// IMP=0x001000000004f65e
- (id)additionalStatusForScopeWithIndex:(long long)arg1 baseRecordCount:(long long)arg2;	// IMP=0x001000000004f497
- (id)statusDictionary;	// IMP=0x001000000004f27c
- (id)status;	// IMP=0x001000000004f005
@property(readonly, nonatomic) unsigned long long countOfUnacknowledgesRecords;
- (unsigned long long)_countOfUnconfirmedRecords;	// IMP=0x001000000004ed4a
- (void)transactionDidFinish;	// IMP=0x001000000004ecf7
- (void)writeTransactionDidFail;	// IMP=0x001000000004ecc8
- (void)writeTransactionDidSucceed;	// IMP=0x001000000004ec99
- (id)allRecordsIsFinal:(_Bool)arg1;	// IMP=0x001000000004e86a
- (id)recordsOfClass:(Class)arg1 isFinal:(_Bool)arg2;	// IMP=0x001000000004e3f7
- (_Bool)remapAllRecordsWithPreviousScopedIdentifier:(id)arg1 newScopedIdentifier:(id)arg2 error:(id *)arg3;	// IMP=0x001000000004df97
- (_Bool)discardStagedChangesWithScopeFilter:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004dd54
- (_Bool)discardStagedChangesForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004dad6
- (_Bool)commitStagedChangesForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004d858
- (_Bool)confirmAllRecordsWithError:(id *)arg1;	// IMP=0x001000000004d6c8
- (_Bool)ackownledgeRecordWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004d56c
- (unsigned long long)countOfRecordsAcknowledgedByClientWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x001000000004d24f
- (id)recordsAcknowledgedByClientWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2;	// IMP=0x001000000004cb93
- (_Bool)hasRecordAcknowledgedByClientWithScopedIdentifier:(id)arg1;	// IMP=0x001000000004c8a5
- (id)recordAcknowledgedByClientWithScopedIdentifier:(id)arg1;	// IMP=0x001000000004c3c0
- (_Bool)hasAnyRecordWithRelatedScopedIdentifier:(id)arg1;	// IMP=0x001000000004c213
- (_Bool)hasRecordWithScopedIdentifier:(id)arg1;	// IMP=0x001000000004c0ea
- (id)relatedScopedIdentifierForRecordWithScopedIdentifier:(id)arg1 isFinal:(_Bool)arg2;	// IMP=0x001000000004bde7
- (id)recordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 isFinal:(_Bool)arg3;	// IMP=0x001000000004bdd5
- (id)recordsWithRelatedScopedIdentifier:(id)arg1 isFinal:(_Bool)arg2;	// IMP=0x001000000004bdbe
- (id)_recordsWithRelatedScopedIdentifier:(id)arg1 class:(Class)arg2 isFinal:(_Bool)arg3;	// IMP=0x001000000004b7d4
- (id)recordWithScopedIdentifier:(id)arg1 isConfirmed:(_Bool *)arg2 isStaged:(_Bool *)arg3;	// IMP=0x001000000004b423
- (id)recordWithScopedIdentifier:(id)arg1 isFinal:(_Bool)arg2 isConfirmed:(_Bool *)arg3;	// IMP=0x001000000004b0aa
- (_Bool)deleteRecordWithScopedIdentifier:(id)arg1 isFinal:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000004afd4
- (_Bool)updateStagedRecord:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004adb2
- (_Bool)updateFinalRecord:(id)arg1 confirmed:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000004ab95
- (_Bool)addRecord:(id)arg1 isFinal:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000004a828
- (_Bool)_deleteRecordWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004a5d5
- (_Bool)_insertStagedRecordWithScopedIdentifier:(id)arg1 className:(id)arg2 relatedIdentifier:(id)arg3 secondaryIdentifier:(id)arg4 otherScopeIndex:(long long)arg5 serializedRecord:(id)arg6 error:(id *)arg7;	// IMP=0x001000000004a2fb
- (_Bool)_insertFinalRecordWithScopedIdentifier:(id)arg1 className:(id)arg2 relatedIdentifier:(id)arg3 secondaryIdentifier:(id)arg4 otherScopeIndex:(long long)arg5 serializedRecord:(id)arg6 confirmed:(_Bool)arg7 error:(id *)arg8;	// IMP=0x0010000000049e7c
- (_Bool)_updateStagedRecordWithScopedIdentifer:(id)arg1 relatedIdentifier:(id)arg2 secondaryIdentifier:(id)arg3 otherScopeIndex:(long long)arg4 serializedRecord:(id)arg5 error:(id *)arg6;	// IMP=0x0010000000049bc2
- (_Bool)_updateFinalRecordWithScopedIdentifer:(id)arg1 relatedIdentifier:(id)arg2 secondaryIdentifier:(id)arg3 otherScopeIndex:(long long)arg4 serializedRecord:(id)arg5 confirmed:(_Bool)arg6 error:(id *)arg7;	// IMP=0x0010000000049777
- (void)_updateOtherScopeIdentifierInRecord:(id)arg1 otherScopeIndex:(long long)arg2;	// IMP=0x00100000000496d1
- (long long)_otherScopeIndexForRecord:(id)arg1;	// IMP=0x00100000000495dd
- (_Bool)_hasRecordWithScopedIdentifier:(id)arg1 isStaged:(_Bool *)arg2;	// IMP=0x00100000000493f2
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x00100000000486ed
- (_Bool)initializeStorage;	// IMP=0x00100000000484c8
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x0010000000048499

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end

