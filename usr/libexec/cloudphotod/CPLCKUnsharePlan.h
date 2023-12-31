//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLCKBatchUploadPlanner, CPLCKShareRecordTodo, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface CPLCKUnsharePlan : NSObject
{
    NSMutableArray *_todos;	// 8 = 0x8
    NSMutableDictionary *_todoPerScopedIdentifier;	// 16 = 0x10
    CPLCKShareRecordTodo *_currentTodo;	// 24 = 0x18
    _Bool _wasSplit;	// 32 = 0x20
    NSArray *_ckRecordsToUpdate;	// 40 = 0x28
    NSArray *_ckRecordIDsToDelete;	// 48 = 0x30
    CPLCKBatchUploadPlanner *_planner;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x00200000000b9889
@property(nonatomic) __weak CPLCKBatchUploadPlanner *planner; // @synthesize planner=_planner;
- (id)rejectedScopedIdentifierForRejectedCKRecordID:(id)arg1;	// IMP=0x00100000000b97f8
- (id)scopedIdentifierForCKRecordID:(id)arg1;	// IMP=0x00100000000b978e
- (id)scopeIdentifierFromZoneID:(id)arg1;	// IMP=0x00100000000b9724
- (id)zoneIDFromScopeIdentifier:(id)arg1;	// IMP=0x00100000000b96ba
- (id)cloudKitScopeForScopeIdentifier:(id)arg1;	// IMP=0x00100000000b9650
- (id)finalizedDestinationCKRecordFromProposedCKRecord:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000b9542
- (id)recordNameInDestinationCKRecordFromRecordName:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000b93ab
- (_Bool)shouldCopyCKRecordKeyToDestinationCKRecord:(id)arg1;	// IMP=0x00100000000b9290
- (id)baseDestinationCKRecordForSourceCKRecord:(id)arg1 destinationCKRecordID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000b8e23
- (void)prepareCopyForCKRecordID:(id)arg1 fromCKRecord:(id)arg2;	// IMP=0x00100000000b8b56
- (_Bool)shouldCopyForCKRecordID:(id)arg1 fromCKRecord:(id)arg2;	// IMP=0x00100000000b8b4e
@property(readonly, nonatomic) NSArray *privateRecordIDs;
- (void)updateTargetMappingAfterUploadWithRealSourceRecordIDs:(id)arg1;	// IMP=0x00100000000b8822
- (void)didFinishUploadOfRecordsWithError:(id)arg1;	// IMP=0x00100000000b881c
- (void)willUploadRecords;	// IMP=0x00100000000b8816
- (id)ckRecordIDsToDelete;	// IMP=0x00100000000b87f1
- (id)ckRecordsToUpdate;	// IMP=0x00100000000b87cc
- (void)_prepareRecordsToDelete;	// IMP=0x00100000000b8458
@property(readonly, nonatomic) NSArray *ckRecordIDsToUnshare;
@property(readonly, nonatomic) unsigned long long count;
- (void)removeShareTodoForScopedIdentifier:(id)arg1;	// IMP=0x00100000000b81c8
- (_Bool)hasShareTodoForScopedIdentifier:(id)arg1;	// IMP=0x00100000000b8191
- (void)addShareTodo:(id)arg1;	// IMP=0x00100000000b812b
- (id)initWithPlanner:(id)arg1;	// IMP=0x00100000000b808e

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

