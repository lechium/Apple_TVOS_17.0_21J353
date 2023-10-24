//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface DownloadsTransaction
{
}

+ (double)orderKeyIncrement;	// IMP=0x004000000000410c
+ (unsigned int)orderingBucketSize;	// IMP=0x0010000000004101
- (void)_setPolicy:(id)arg1 forDownloadWithID:(long long)arg2;	// IMP=0x004000000000906f
- (_Bool)_resetDownload:(id)arg1 withValues:(const id *)arg2 isUserIntiated:(_Bool)arg3;	// IMP=0x0010000000008a6a
- (double)_orderKeyAdjacentToOrderKey:(double)arg1 comparisonType:(long long)arg2;	// IMP=0x0010000000008764
- (id)_newTransactionForDownload:(id)arg1 inDatabase:(id)arg2;	// IMP=0x0010000000008622
- (_Bool)_moveDownloadWithID:(long long)arg1 relativeToDownloadWithID:(long long)arg2 comparisonType:(long long)arg3;	// IMP=0x001000000000847c
- (id)_copyEffectiveBundleIDForDownload:(id)arg1;	// IMP=0x00100000000083af
- (id)_addEffectiveClientWithBundleID:(id)arg1 database:(id)arg2;	// IMP=0x00100000000080f4
- (void)setValue:(id)arg1 forExternalProperty:(id)arg2 ofDownloadID:(long long)arg3;	// IMP=0x0010000000008065
- (_Bool)updateDownloadEntityWithIdentifier:(long long)arg1 withDownload:(id)arg2;	// IMP=0x0010000000007e36
- (_Bool)retryDownloadsWithIdentifiers:(id)arg1;	// IMP=0x0010000000007c5c
- (_Bool)retryDownloadWithIdentifier:(long long)arg1;	// IMP=0x0010000000007be4
- (_Bool)restartDownloadsWithIdentifiers:(id)arg1;	// IMP=0x0010000000007942
- (_Bool)resetDownloadsWithIdentifiers:(id)arg1 isUserInitiated:(_Bool)arg2;	// IMP=0x0010000000007647
- (_Bool)resetDownloadsWithIdentifiers:(id)arg1;	// IMP=0x0010000000007630
- (_Bool)resetDownloadsMatchingPredicate:(id)arg1 isUserInitiated:(_Bool)arg2;	// IMP=0x00100000000072e0
- (_Bool)resetDownloadsMatchingPredicate:(id)arg1;	// IMP=0x00100000000072c9
- (void)reconcileSoftwareDownloads:(id)arg1 fromITunesStore:(_Bool)arg2;	// IMP=0x0010000000006bca
- (_Bool)prioritizeDownloadsWithKind:(id)arg1 clientID:(id)arg2;	// IMP=0x00100000000064ef
- (_Bool)prioritizeDownloadWithID:(long long)arg1 aboveDownloadWithID:(long long)arg2 error:(id *)arg3;	// IMP=0x00100000000061e1
- (_Bool)pauseDownloadsWithIdentifiers:(id)arg1;	// IMP=0x0010000000005e47
- (_Bool)moveDownloadWithID:(long long)arg1 beforeDownloadWithID:(long long)arg2;	// IMP=0x0010000000005e2f
- (_Bool)moveDownloadWithID:(long long)arg1 afterDownloadWithID:(long long)arg2;	// IMP=0x0010000000005e17
- (id)insertDownloads:(id)arg1 beforeDownloadWithID:(long long)arg2;	// IMP=0x0010000000005c9a
- (id)insertDownloads:(id)arg1 afterDownloadWithID:(long long)arg2;	// IMP=0x0010000000005b22
- (id)importDownloads:(id)arg1 initialOrderKey:(double)arg2 orderKeyIncrement:(double)arg3;	// IMP=0x0010000000004b09
- (_Bool)finishDownloadsWithIdentifiers:(id)arg1 finalPhase:(id)arg2;	// IMP=0x0010000000004957
- (_Bool)finishDownloadWithID:(long long)arg1 finalPhase:(id)arg2 updatePipeline:(_Bool)arg3;	// IMP=0x001000000000468b
- (_Bool)finishDownloadWithID:(long long)arg1 finalPhase:(id)arg2;	// IMP=0x0010000000004673
- (_Bool)deletePersistentDownloadManagerWithID:(long long)arg1;	// IMP=0x001000000000431d
- (_Bool)deletePersistentDownloadManagerWithClientID:(id)arg1 persistenceID:(id)arg2;	// IMP=0x0010000000004224
- (id)changeset;	// IMP=0x00100000000041fc
- (id)addDownloads:(id)arg1;	// IMP=0x001000000000411a

@end
