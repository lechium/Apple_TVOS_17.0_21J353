//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreServices/SSMemoryEntity.h>

@class FinishDownloadAssetMemoryEntity, NSArray, NSNumber, NSString, StoreDownload;

@interface FinishDownloadMemoryEntity : SSMemoryEntity
{
    FinishDownloadAssetMemoryEntity *_mediaAsset;	// 8 = 0x8
    NSArray *_secondaryAssets;	// 16 = 0x10
    StoreDownload *_storeMetadata;	// 24 = 0x18
}

+ (id)defaultProperties;	// IMP=0x004000000007a014
+ (Class)databaseEntityClass;	// IMP=0x001000000007a003
- (void).cxx_destruct;	// IMP=0x002000000007a361
@property(readonly, nonatomic) NSArray *secondaryAssets; // @synthesize secondaryAssets=_secondaryAssets;
@property(retain, nonatomic) StoreDownload *storeMetadata; // @synthesize storeMetadata=_storeMetadata;
@property(readonly, nonatomic) FinishDownloadAssetMemoryEntity *mediaAsset; // @synthesize mediaAsset=_mediaAsset;
@property(readonly, nonatomic) long long transactionID;
@property(readonly, nonatomic) NSString *title;
@property(readonly, nonatomic) NSString *storeXID;
@property(readonly, nonatomic) NSString *storeTransactionIdentifier;
@property(readonly, nonatomic) NSNumber *storeSagaIdentifier;
@property(readonly, nonatomic) NSNumber *storePublicationVersion;
@property(readonly, nonatomic) NSNumber *storeItemIdentifier;
@property(readonly, nonatomic) NSString *storeFrontIdentifier;
@property(readonly, nonatomic) NSNumber *storeCollectionIdentifier;
@property(readonly, nonatomic) NSString *storeAccountName;
@property(readonly, nonatomic) NSNumber *storeAccountIdentifier;
- (id)secondaryAssetForType:(id)arg1;	// IMP=0x0010000000079cd1
@property(readonly, nonatomic) long long restoreState;
- (id)newITunesMetadataDictionary;	// IMP=0x0010000000079529
- (void)loadAssetsUsingSession:(id)arg1;	// IMP=0x0010000000078fb0
@property(readonly, nonatomic) id libraryItemIdentifier;
@property(readonly, nonatomic) NSString *ITunesMetadataDestinationPath;
@property(readonly, nonatomic, getter=isTvTemplate) _Bool tvTemplate;
@property(readonly, nonatomic, getter=isStoreDownload) _Bool storeDownload;
@property(readonly, nonatomic, getter=isSharedDownload) _Bool sharedDownload;
@property(readonly, nonatomic, getter=isSampleDownload) _Bool sampleDownload;
@property(readonly, nonatomic, getter=isRestoreDownload) _Bool restoreDownload;
@property(readonly, nonatomic, getter=isRentalDownload) _Bool rentalDownload;
@property(readonly, nonatomic, getter=isPodcastDownload) _Bool podcastDownload;
@property(readonly, nonatomic, getter=isHLS) _Bool HLS;
@property(readonly, nonatomic, getter=isDeviceBasedVPP) _Bool deviceBasedVPP;
@property(readonly, nonatomic) _Bool hasRestoreData;
@property(readonly, nonatomic) NSNumber *handlerIdentifier;
@property(readonly, nonatomic) NSString *genreName;
@property(readonly, nonatomic) NSNumber *durationInMilliseconds;
@property(readonly, nonatomic) NSString *downloadPermalink;
@property(readonly, nonatomic) NSString *downloadKind;
@property(readonly, nonatomic) NSString *documentTargetIdentifier;
- (id)destinationDirectoryPathForAsset:(id)arg1;	// IMP=0x0010000000078a24
@property(readonly, nonatomic) NSString *collectionName;
@property(readonly, nonatomic) NSString *clientIdentifier;
@property(readonly, nonatomic) long long priority;
@property(readonly, nonatomic) NSString *bundleVersion;
@property(readonly, nonatomic) NSString *bundleIdentifier;
@property(readonly, nonatomic) long long automaticType;
// Error: Property attributes should begin with the type ('T') attribute, property name: artworkTemplateName
// Property attributes: (null)

@property(readonly, nonatomic) NSString *artistName;

@end

