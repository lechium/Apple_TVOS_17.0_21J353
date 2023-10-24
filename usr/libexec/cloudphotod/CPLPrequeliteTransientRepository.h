//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSet, NSString;

@interface CPLPrequeliteTransientRepository
{
    NSSet *_ignoredIdentifiers;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000005dc02
- (_Bool)deleteRecordsForScopeIndex:(long long)arg1 maxCount:(long long)arg2 deletedCount:(long long *)arg3 error:(id *)arg4;	// IMP=0x001000000005daf6
- (id)status;	// IMP=0x001000000005da28
- (unsigned long long)countOfStashedRecords;	// IMP=0x001000000005d978
@property(readonly, nonatomic) unsigned long long countOfUnmingledRecords;
- (_Bool)deleteAllRecordsForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005d6a6
- (_Bool)hasStashedChangesForScopeWithIdentifier:(id)arg1;	// IMP=0x001000000005d5c9
- (_Bool)unstashRecordsForScopeWithIdentifier:(id)arg1 maxCount:(unsigned long long)arg2 hasMore:(_Bool *)arg3 error:(id *)arg4;	// IMP=0x001000000005d3dc
- (_Bool)stashChangeWithScopedIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005d13d
- (_Bool)hasUnmingledOrStashedRecordsWithScopeFilter:(id)arg1;	// IMP=0x001000000005d041
- (_Bool)deleteMingledRecordsForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005ce17
- (_Bool)resetMingledRecordsWithScopeFilter:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005ccda
- (_Bool)resetMingledRecordsForScopeWithIdentifier:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005cb69
- (_Bool)hasOnlyMingledRecordsWithScopeIdentifier:(id)arg1;	// IMP=0x001000000005ca87
- (_Bool)hasUnmingledNonStashedRecordsForScopeWithIdentifier:(id)arg1;	// IMP=0x001000000005c9ad
- (_Bool)hasMingledRecordsForScopeWithIdentifier:(id)arg1;	// IMP=0x001000000005c8d0
- (_Bool)markUnmingledChangeWithScopedIdentifierAsMingled:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005c6dc
- (id)allUnmingledChangesWithScopeIdentifier:(id)arg1;	// IMP=0x001000000005c67e
- (id)allUnmingledChangesWithClass:(Class)arg1 relatedScopedIdentifier:(id)arg2;	// IMP=0x001000000005c3b6
- (id)allUnmingledDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2;	// IMP=0x001000000005c34b
- (id)allUnmingledNonDeletedChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2;	// IMP=0x001000000005c2e0
- (id)allUnmingledChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2;	// IMP=0x001000000005c2c7
- (id)_allUnmingledChangesWithClass:(Class)arg1 scopeIdentifier:(id)arg2 maximumCount:(unsigned long long)arg3;	// IMP=0x001000000005c066
- (id)unmingledChangeWithScopedIdentifier:(id)arg1;	// IMP=0x001000000005bdea
- (_Bool)popChangeBatchOfRemappedRecords:(id *)arg1 scope:(id)arg2 maximumCount:(unsigned long long)arg3 error:(id *)arg4;	// IMP=0x001000000005ba63
- (id)nextBatchOfRemappedRecordsInScope:(id)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x001000000005b7cc
- (id)_recordWithTransientType:(int)arg1 scopedIdentifier:(id)arg2;	// IMP=0x001000000005b637
- (_Bool)hasStashedRecordWithScopedIdentifier:(id)arg1;	// IMP=0x001000000005b4e9
- (_Bool)hasRecordWithScopedIdentifier:(id)arg1;	// IMP=0x001000000005b3a1
- (id)recordWithScopedIdentifier:(id)arg1;	// IMP=0x001000000005b222
- (id)_enumeratorForRecordsWithTransientType:(int)arg1 scopeIndex:(unsigned long long)arg2 class:(Class)arg3 maximumCount:(unsigned long long)arg4;	// IMP=0x001000000005afde
- (id)_enumeratorForRecordsWithTransientType:(int)arg1 scopeIndex:(unsigned long long)arg2 maximumCount:(unsigned long long)arg3;	// IMP=0x001000000005adc9
- (id)_enumeratorForRecordsWithScopeIndex:(unsigned long long)arg1 maximumCount:(unsigned long long)arg2;	// IMP=0x001000000005abd4
- (_Bool)_markChangesWithScopedIdentifiersAsMingled:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005a7fe
- (_Bool)appendBatch:(id)arg1 alreadyMingled:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000005a684
- (_Bool)_appendChange:(id)arg1 alreadyMingled:(_Bool)arg2 error:(id *)arg3;	// IMP=0x0010000000059e0a
- (_Bool)hasUnmingledChangesForScope:(id)arg1;	// IMP=0x0010000000059d26
@property(readonly, nonatomic) _Bool hasUnmingledChanges;
- (_Bool)upgradeStorageToVersion:(long long)arg1;	// IMP=0x0010000000059a21
- (_Bool)initializeStorage;	// IMP=0x00100000000598e7
- (id)initWithAbstractObject:(id)arg1;	// IMP=0x00100000000597ac

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) _Bool isAlive;
@property(readonly, nonatomic) _Bool isEmpty;
@property(readonly, nonatomic) _Bool shouldIncludeInStatus;
@property(readonly) Class superclass;

@end

