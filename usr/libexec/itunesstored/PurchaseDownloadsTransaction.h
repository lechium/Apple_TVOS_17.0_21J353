//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PurchaseDownloadsTransaction
{
}

- (long long)_nextBatchIdentifier;	// IMP=0x00400000001bd3fe
- (double)_maxOrderIdentifier;	// IMP=0x00100000001bd35f
- (_Bool)_insertPurchases:(id)arg1 forClient:(id)arg2 orderIdentifier:(double)arg3 orderSpacing:(double)arg4;	// IMP=0x00100000001bd020
- (void)_getInsertOrderID:(double *)arg1 nextOrderID:(double *)arg2 afterPurchaseID:(long long)arg3;	// IMP=0x00100000001bcca0
- (_Bool)_cancelDownloadForPurchaseIdentifier:(long long)arg1;	// IMP=0x00100000001bca23
- (_Bool)_addPlaceholderDownloadForPurchase:(id)arg1 clientIdentifier:(id)arg2;	// IMP=0x00100000001bc758
- (id)_addEntityForPurchase:(id)arg1 managerIdentifier:(long long)arg2 orderIdentifier:(double)arg3;	// IMP=0x00100000001bc523
- (id)replacePurchase:(id)arg1 withDownloadQueueResponse:(id)arg2 withClientIdentifier:(id)arg3;	// IMP=0x00100000001ba595
- (id)replacePurchase:(id)arg1 withDownloadQueueResponse:(id)arg2;	// IMP=0x00100000001ba57c
- (_Bool)replaceDownloadsInQuery:(id)arg1 withStoreDownloads:(id)arg2 accountID:(id)arg3;	// IMP=0x00100000001b8be5
- (_Bool)resetPurchasedAutoUpdateForStoreItemID:(id)arg1;	// IMP=0x00100000001b890f
- (_Bool)movePurchasesWithIdentifiers:(id)arg1 afterPurchaseWithIdentifier:(long long)arg2;	// IMP=0x00100000001b85fd
- (_Bool)insertPurchases:(id)arg1 afterPurchaseWithIdentifier:(long long)arg2 forClient:(id)arg3;	// IMP=0x00100000001b84ff
- (id)existingDownloadForPurchase:(id)arg1;	// IMP=0x00100000001b7f0f
- (_Bool)deletePurchaseWithIdentifier:(long long)arg1;	// IMP=0x00100000001b7e76
- (_Bool)cancelPurchaseWithIdentifier:(long long)arg1 applyingProperties:(id)arg2;	// IMP=0x00100000001b7d05
- (_Bool)addPurchases:(id)arg1 forClient:(id)arg2;	// IMP=0x00100000001b7c7e

@end

