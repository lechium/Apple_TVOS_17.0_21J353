//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString;
@protocol ICDHandlerProviding;

@interface CloudService : NSObject
{
    NSString *_requestingBundleID;	// 8 = 0x8
    id <ICDHandlerProviding> _handlerProvider;	// 16 = 0x10
    NSOperationQueue *_operationQueue;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x002000000009690b
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) __weak id <ICDHandlerProviding> handlerProvider; // @synthesize handlerProvider=_handlerProvider;
@property(copy, nonatomic) NSString *requestingBundleID; // @synthesize requestingBundleID=_requestingBundleID;
- (void)_updateSagaLibraryWithReason:(long long)arg1 allowNoisyAuthPrompt:(_Bool)arg2 forConfiguration:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000096680
- (void)listCloudServerOperations;	// IMP=0x001000000009663c
- (void)processPendingKeyInvalidations;	// IMP=0x00100000000965f8
- (void)fetchEnhancedAudioOfflineKeys;	// IMP=0x00100000000965b4
- (void)refreshEnhancedAudioSharedKeys;	// IMP=0x0010000000096570
- (void)importSubscriptionContainerArtworkForPersistentID:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000096378
- (void)resetInvitationURLForCollaborationWithPersistentID:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009613b
- (void)removeCollaborators:(id)arg1 fromCollaborationWithPersistentID:(long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000095e9b
- (void)respondToPendingCollaborator:(id)arg1 onCollaborationWithPersistentID:(long long)arg2 withApproval:(_Bool)arg3 configuration:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000095c10
- (void)joinCollaborationWithGlobalPlaylistID:(id)arg1 invitationURL:(id)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000009598e
- (void)editCollaborationWithPersistentID:(long long)arg1 configuration:(id)arg2 properties:(id)arg3 trackEdits:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000095706
- (void)endCollaborationWithPersistentID:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000954c9
- (void)beginCollaborationUsingPlaylistWithPersistentID:(long long)arg1 sharingMode:(unsigned long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000095283
- (void)updatePinnedSubscribedPlaylistsWithConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000950c5
- (void)disableCloudLibraryWithReason:(long long)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000094f58
- (void)authenticateForConfiguration:(id)arg1 startInitialImport:(_Bool)arg2 enableCloudLibraryPolicy:(long long)arg3 isExplicitUserAction:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x0010000000094e49
- (void)loadMissingArtworkForConfiguration:(id)arg1;	// IMP=0x0010000000094b7b
- (void)loadUpdateProgressForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000949ab
- (void)loadIsUpdateInProgressForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000947d5
- (void)loadArtworkInfoForSubscriptionContainerPersistentIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009459e
- (void)loadScreenshotInfoForSubscriptionPersistentIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000094367
- (void)loadArtworkInfoForSubscriptionItemPersistentIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000094128
- (void)deprioritizeSubscriptionContainerArtworkForPersistentID:(long long)arg1 configuration:(id)arg2;	// IMP=0x0010000000093fcb
- (void)deprioritizeSubscriptionScreenshotForPersistentID:(long long)arg1 configuration:(id)arg2;	// IMP=0x0010000000093e6e
- (void)deprioritizeSubscriptionItemArtworkForPersistentID:(long long)arg1 configuration:(id)arg2;	// IMP=0x0010000000093d11
- (void)importSubscriptionScreenshotForPersistentID:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000093b19
- (void)importSubscriptionItemArtworkForPersistentID:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000093921
- (void)importAlbumArtistHeroImageForPersistentID:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000093609
- (void)importArtistHeroImageForPersistentID:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000932f1
- (void)updateArtistHeroImagesForConfiguration:(id)arg1;	// IMP=0x00100000000930c2
- (void)deprioritizeAlbumArtistHeroImageForPersistentID:(long long)arg1 configuration:(id)arg2;	// IMP=0x0010000000092f65
- (void)deprioritizeArtistHeroImageForPersistentID:(long long)arg1 configuration:(id)arg2;	// IMP=0x0010000000092e08
- (void)setItemProperties:(id)arg1 forPurchaseHistoryID:(unsigned long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000092bfd
- (void);	// IMP=0x0010000000092a18
- (void)loadBooksForStoreIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009261a
- (void)loadScreenshotInfoForPurchaseHistoryIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000923d7
- (void)loadArtworkInfoForPurchaseHistoryIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000092194
- (void)deprioritizeScreenshotForPurchaseHistoryID:(unsigned long long)arg1 configuration:(id)arg2;	// IMP=0x0010000000092029
- (void)deprioritizeItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 configuration:(id)arg2;	// IMP=0x0010000000091ebe
- (void)importScreenshotForPurchaseHistoryID:(unsigned long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000091cfa
- (void)importItemArtworkForPurchaseHistoryID:(unsigned long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000091b36
- (void)loadJaliscoUpdateProgressForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000091946
- (void)loadIsJaliscoUpdateInProgressForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000091770
- (void)isMediaKindDisabledForJaliscoLibrary:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000009155e
- (void)removeJaliscoLibraryForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0010000000091356
- (void)setupInitialJaliscoPoolingForConfiguration:(id)arg1;	// IMP=0x001000000009103a
- (void)favoriteArtistWithPersistentID:(long long)arg1 cloudLibraryID:(id)arg2 time:(id)arg3 configuration:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000090e14
- (void)favoriteAlbumWithPersistentID:(long long)arg1 cloudLibraryID:(id)arg2 time:(id)arg3 configuration:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x0010000000090bee
- (void)favoriteEntityWithPersistentID:(long long)arg1 sagaID:(long long)arg2 entityType:(long long)arg3 time:(id)arg4 configuration:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x00100000000909d7
- (void)favoritePlaylistWithPersistentID:(long long)arg1 globalID:(id)arg2 time:(id)arg3 configuration:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000907b1
- (void)favoriteEntityWithPersistentID:(long long)arg1 storeID:(long long)arg2 entityType:(long long)arg3 time:(id)arg4 configuration:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x001000000009059a
- (void)sdk_addStoreItemWithOpaqueID:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000090497
- (void)sdk_addItemWithSagaID:(long long)arg1 toPlaylistWithPersistentID:(long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x0010000000090269
- (void)sdk_addStoreItemWithOpaqueID:(id)arg1 toPlaylistWithPersistentID:(long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000008ffeb
- (void)sdk_createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 configuration:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000008fd6a
- (void)setAlbumArtistProperties:(id)arg1 forAlbumArtistPersistentID:(long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000008fb5f
- (void)setAlbumProperties:(id)arg1 forAlbumPersistentID:(long long)arg2 cloudLibraryID:(id)arg3 configuration:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000008f915
- (void)setAlbumProperties:(id)arg1 forAlbumPersistentID:(long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000008f70a
- (void)uploadCloudPlaylistPropertiesForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008f55d
- (void)uploadCloudItemPropertiesForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008f3b0
- (void)setItemProperties:(id)arg1 forSagaID:(unsigned long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000008f1a5
- (void)loadLastKnownEnableICMLErrorStatusForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008efd6
- (void)removeItemsWithSagaIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008edf1
- (void)addStorePlaylistWithGlobalID:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008ebaf
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000008e957
- (void)updateSubscribedPlaylistsWithSagaIDs:(id)arg1 ignoreMinRefreshInterval:(_Bool)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000008e74e
- (void)uploadArtworkForPlaylistWithPersistentID:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008e58a
- (void)removePlaylistsWithSagaIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008e3a5
- (void)publishPlaylistWithSagaID:(long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008e182
- (void)addItemWithSagaID:(long long)arg1 toPlaylistWithPersistentID:(long long)arg2 configuration:(id)arg3 completion:(CDUnknownBlockType)arg4;	// IMP=0x001000000008df9e
- (void)addStoreItemWithAdamID:(long long)arg1 referral:(id)arg2 toPlaylistWithPersistentID:(long long)arg3 configuration:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000008dd65
- (void)sdk_setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(long long)arg3 configuration:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000008daee
- (void)setPlaylistProperties:(id)arg1 trackList:(id)arg2 forPlaylistPersistentID:(long long)arg3 configuration:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000008d8c3
- (void)createPlaylistWithPersistentID:(long long)arg1 properties:(id)arg2 trackList:(id)arg3 configuration:(id)arg4 completion:(CDUnknownBlockType)arg5;	// IMP=0x001000000008d620
- (void)addGeniusPlaylistWithPersistentID:(long long)arg1 name:(id)arg2 seedItemSagaIDs:(id)arg3 itemSagaIDs:(id)arg4 configuration:(id)arg5 completion:(CDUnknownBlockType)arg6;	// IMP=0x001000000008d391
- (void)loadGeniusItemsForSagaID:(unsigned long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008d170
- (void)loadScreenshotInfoForSagaIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008cf2d
- (void)loadArtworkInfoForContainerSagaIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008ccea
- (void)loadArtworkInfoForSagaIDs:(id)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008caa7
- (void)deprioritizeContainerArtworkForSagaID:(unsigned long long)arg1 configuration:(id)arg2;	// IMP=0x001000000008c93c
- (void)deprioritizeScreenshotForSagaID:(unsigned long long)arg1 configuration:(id)arg2;	// IMP=0x001000000008c7d1
- (void)deprioritizeItemArtworkForSagaID:(unsigned long long)arg1 configuration:(id)arg2;	// IMP=0x001000000008c666
- (void)importContainerArtworkForSagaID:(unsigned long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008c4a2
- (void)importScreenshotForSagaID:(unsigned long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008c2de
- (void)importItemArtworkForSagaID:(unsigned long long)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008c11a
- (void)loadSagaUpdateProgressForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008bf27
- (void)loadIsSagaUpdateInProgressForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008bd51
- (void)setCloudAddToPlaylistBehavior:(long long)arg1 forConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008bb8d
- (void)deauthenticateForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008b9d9
- (void)updateJaliscoLibraryWithReason:(long long)arg1 forConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008b815
- (void)isSagaAuthenticatedForConfiguration:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x001000000008b720
- (void)setPreferredVideoQuality:(long long)arg1 forConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008b679
- (void)updateSagaLibraryWithReason:(long long)arg1 forConfiguration:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x001000000008b4ae
- (void)setupInitialSagaPoolingForConfiguration:(id)arg1;	// IMP=0x001000000008b28e
- (id)initWithHandlerProvider:(id)arg1;	// IMP=0x001000000008b1ca

@end

