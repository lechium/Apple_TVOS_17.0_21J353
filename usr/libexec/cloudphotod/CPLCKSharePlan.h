//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CPLCKBatchUploadPlanner, MISSING_TYPE, NSArray, NSMutableArray, NSMutableDictionary, NSString;

@interface CPLCKSharePlan : NSObject
{
    NSMutableArray *_todos;	// 8 = 0x8
    NSMutableDictionary *_todoPerScopedIdentifier;	// 16 = 0x10
    MISSING_TYPE *_currentTodo;	// 24 = 0x18
    CPLCKBatchUploadPlanner *_planner;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000b8052
@property(nonatomic) __weak CPLCKBatchUploadPlanner *planner; // @synthesize planner=_planner;
- (id)rejectedScopedIdentifierForRejectedCKRecordID:(id)arg1;	// IMP=0x00100000000b7fc1
- (id)scopedIdentifierForCKRecordID:(id)arg1;	// IMP=0x00100000000b7f57
- (id)scopeIdentifierFromZoneID:(id)arg1;	// IMP=0x00100000000b7eed
- (id)zoneIDFromScopeIdentifier:(id)arg1;	// IMP=0x00100000000b7e83
- (id)cloudKitScopeForScopeIdentifier:(id)arg1;	// IMP=0x00100000000b7e19
- (id)finalizedDestinationCKRecordFromProposedCKRecord:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000b79f9
- (id)recordNameInDestinationCKRecordFromRecordName:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000b7862
- (_Bool)shouldCopyCKRecordKeyToDestinationCKRecord:(id)arg1;	// IMP=0x00100000000b7784
- (id)baseDestinationCKRecordForSourceCKRecord:(id)arg1 destinationCKRecordID:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000b7399
- (void)prepareCopyForCKRecordID:(id)arg1 fromCKRecord:(id)arg2;	// IMP=0x00100000000b7174
- (_Bool)shouldCopyForCKRecordID:(id)arg1 fromCKRecord:(id)arg2;	// IMP=0x00100000000b716c
@property(readonly, nonatomic) NSArray *sharedCKRecordIDs;
- (void)updateTargetMappingAfterUploadWithRealSourceRecordIDs:(id)arg1;	// IMP=0x00100000000b6e40
- (void)didFinishUploadOfRecordsWithError:(id)arg1;	// IMP=0x00100000000b6e3a
- (void)willUploadRecords;	// IMP=0x00100000000b6e34
@property(readonly, nonatomic) NSArray *ckRecordIDsToShare;
@property(readonly, nonatomic) unsigned long long count;
- (_Bool)hasShareTodoForScopedIdentifier:(id)arg1;	// IMP=0x00100000000b6c67
- (void)addShareTodo:(id)arg1;	// IMP=0x00100000000b6c01
- (id)initWithPlanner:(id)arg1;	// IMP=0x00100000000b6b64

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

