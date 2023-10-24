//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNMockSpotlightIndexingLogger : NSObject
{
}

- (void)verifiedIndexWithSummmary:(id)arg1;	// IMP=0x000000000003f23f
- (void)didNotFinishIndexingForDeltaSyncWithError:(id)arg1;	// IMP=0x000000000003f239
- (void)didNotFinishIndexingForFullSyncWithError:(id)arg1;	// IMP=0x000000000003f233
- (void)finishedBatchIndexWithUpdateIdentifiers:(id)arg1 deleteIdentifiers:(id)arg2;	// IMP=0x000000000003f22d
- (void)finishedIndexingForDeltaSyncWithUpdateCount:(unsigned long long)arg1 deleteCount:(unsigned long long)arg2;	// IMP=0x000000000003f227
- (void)finishedIndexingForFullSyncWithCount:(unsigned long long)arg1;	// IMP=0x000000000003f221
- (void)failedToCreateUnarchiverForClientStateWithError:(id)arg1;	// IMP=0x000000000003f21b
- (void)failedToUnarchiveClientStateData:(id)arg1;	// IMP=0x000000000003f215
- (void)failedToDeleteAllSearchableItemsWithSpotlight:(id)arg1 willRetry:(_Bool)arg2;	// IMP=0x000000000003f20f
- (void)failedToJournalItemIdentifiersForDeletionWithSpotlight:(id)arg1 identifiers:(id)arg2 willRetry:(_Bool)arg3;	// IMP=0x000000000003f209
- (void)failedToJournalSearchableItemsForIndexingWithSpotlight:(id)arg1 identifiers:(id)arg2 willRetry:(_Bool)arg3;	// IMP=0x000000000003f203
- (void)failedToEndIndexBatchWithSpotlight:(id)arg1 willRetry:(_Bool)arg2;	// IMP=0x000000000003f1fd
- (void)failedToBeginIndexBatchWithSpotlight:(id)arg1;	// IMP=0x000000000003f1f7
- (void)failedToFetchClientStateFromSpotlight:(id)arg1 willRetry:(_Bool)arg2;	// IMP=0x000000000003f1f1
- (void)failedToFetchSearchableForContactIdentifiers:(id)arg1 error:(id)arg2;	// IMP=0x000000000003f1eb
- (void)failedToClearChangeHistory:(id)arg1 toChangeAnchor:(id)arg2 error:(id)arg3;	// IMP=0x000000000003f1e5
- (void)failedToFetchContactForChange:(id)arg1;	// IMP=0x000000000003f1df
- (void)failedToCreateSearchableItemForContactIdentifier:(id)arg1;	// IMP=0x000000000003f1d9
- (void)willResumeIndexingAfterOffset:(long long)arg1;	// IMP=0x000000000003f1d3
- (void)willReindexAsSnapshotAnchorChangedFrom:(id)arg1 to:(id)arg2;	// IMP=0x000000000003f1cd
- (void)willReindexAsIndexVersionChangedFrom:(long long)arg1 to:(long long)arg2;	// IMP=0x000000000003f1c7
- (void)willResumeReindexingAsNotFinished;	// IMP=0x000000000003f1c1
- (void)willReindexAsFailedToFetchClientState;	// IMP=0x000000000003f1bb
- (void)willReindexAsChangeHistoryIsTruncated:(id)arg1;	// IMP=0x000000000003f1b5
- (void)willReindexAsFailedToFetchChangeHistory:(id)arg1 error:(id)arg2;	// IMP=0x000000000003f1af
- (void)willReindexAsFailedToRegisterForChangeHistory:(id)arg1 error:(id)arg2;	// IMP=0x000000000003f1a9
- (void)willClearChangeHistory:(id)arg1 toChangeAnchor:(id)arg2;	// IMP=0x000000000003f1a3
- (void)willBatchIndexForDeltaSyncWithUpdateCount:(unsigned long long)arg1 deleteCount:(unsigned long long)arg2;	// IMP=0x000000000003f19d
- (void)willBatchIndexForFullSyncWithCount:(unsigned long long)arg1 lastOffset:(long long)arg2 doneFullSync:(_Bool)arg3;	// IMP=0x000000000003f197
- (void)willStartIndexingWithClientState:(id)arg1;	// IMP=0x000000000003f191
- (void)deferringReindexAsFailedToPrepareForReindexing;	// IMP=0x000000000003f18b
- (void)willReindexItemsWithIdentifiers:(id)arg1;	// IMP=0x000000000003f185
- (void)noContactChangesToIndex;	// IMP=0x000000000003f17f
- (void)verifyingIndex:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f164
- (void)reindexingSearchableItemsWithIdentifiers:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f149
- (void)reindexingAllSearchableItems:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f12e
- (void)indexingContacts:(CDUnknownBlockType)arg1;	// IMP=0x000000000003f113

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

