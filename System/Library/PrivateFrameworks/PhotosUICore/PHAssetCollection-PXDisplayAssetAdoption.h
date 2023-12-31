//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Photos/PHAssetCollection.h>

@class NSArray, NSDate, NSString;

@interface PHAssetCollection (PXDisplayAssetAdoption)
+ (id)px_fetchAssetCollectionsWithAlbumSubtypes:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x00100000007ee76e
+ (id)px_fetchSmartAlbumCollectionsBySubtypeForAlbumSubtypes:(id)arg1 photoLibrary:(id)arg2;	// IMP=0x00100000007ee38e
+ (id)px_fetchSmartAlbumWithSubtype:(long long)arg1;	// IMP=0x00100000007ee256
+ (id)px_smartAlbumWithSubtype:(long long)arg1;	// IMP=0x00100000007ee206
+ (id)px_regularAlbumWithTitle:(id)arg1;	// IMP=0x00100000007ee103
+ (id)px_otherAlbumsSubtypes;	// IMP=0x00100000007ee0a0
+ (id)px_mediaTypeSmartAlbumSubtypes;	// IMP=0x00100000007ee03d
+ (void)px_getType:(long long *)arg1 subtype:(long long *)arg2 forBuiltInAlbumName:(id)arg3;	// IMP=0x00100000007edccc
+ (id)px_builtInAlbumNameForSubtype:(long long)arg1;	// IMP=0x00100000007edb0d
+ (id)px_albumNameForTransientIdentifier:(id)arg1;	// IMP=0x00100000007edaa1
@property(readonly, nonatomic) _Bool px_isMacSyncedFacesAlbum;
@property(readonly, nonatomic) _Bool px_isMacSyncedRegularAlbum;
@property(readonly, nonatomic) _Bool px_isMacSyncedAlbum;
@property(readonly, nonatomic) _Bool px_isCloudMultipleContributorsEnabled;
@property(readonly, nonatomic) _Bool px_isOwnedSharedAlbum;
@property(readonly, nonatomic) _Bool px_isSharedAlbum;
@property(readonly, nonatomic) _Bool px_isContentSyndicationAlbum;
@property(readonly, nonatomic) _Bool px_isMomentShare;
@property(readonly, nonatomic) _Bool px_isSuggestion;
@property(readonly, nonatomic) _Bool px_isDayGroupHighlight;
@property(readonly, nonatomic) _Bool px_isHighlight;
@property(readonly, nonatomic) _Bool px_isMoment;
@property(readonly, nonatomic) _Bool px_isSharedLibrarySharingSuggestion;
@property(readonly, nonatomic) _Bool px_isSharedLibrarySharingSuggestionsSmartAlbum;
@property(readonly, nonatomic) _Bool px_isUnableToUploadSmartAlbum;
@property(readonly, nonatomic) _Bool px_containsPrivateContent;
@property(readonly, nonatomic) _Bool px_isPrivacySensitiveAlbum;
@property(readonly, nonatomic) _Bool px_isAllLibraryDuplicatesSmartAlbum;
@property(readonly, nonatomic) _Bool px_isSpatialSmartAlbum;
@property(readonly, nonatomic) _Bool px_isPanoramasSmartAlbum;
@property(readonly, nonatomic) _Bool px_isProResSmartAlbum;
@property(readonly, nonatomic) _Bool px_isCinematicSmartAlbum;
@property(readonly, nonatomic) _Bool px_isRAWSmartAlbum;
@property(readonly, nonatomic) _Bool px_isLongExposuresSmartAlbum;
@property(readonly, nonatomic) _Bool px_isAnimatedSmartAlbum;
@property(readonly, nonatomic) _Bool px_isLivePhotosSmartAlbum;
@property(readonly, nonatomic) _Bool px_isDepthEffectSmartAlbum;
@property(readonly, nonatomic) _Bool px_isScreenshotsSmartAlbum;
@property(readonly, nonatomic) _Bool px_isSelfPortraitsSmartAlbum;
@property(readonly, nonatomic) _Bool px_isSlomoVideosSmartAlbum;
@property(readonly, nonatomic) _Bool px_isBurstsSmartAlbum;
@property(readonly, nonatomic) _Bool px_isTimelapsesSmartAlbum;
@property(readonly, nonatomic) _Bool px_isVideosSmartAlbum;
@property(readonly, nonatomic) _Bool px_isScreenRecordingsSmartAlbum;
@property(readonly, nonatomic) _Bool px_isRecentlyEditedSmartAlbum;
@property(readonly, nonatomic) _Bool px_isRecentsSmartAlbum;
@property(readonly, nonatomic) _Bool px_isImportSessionCollection;
@property(readonly, nonatomic) _Bool px_isMomentShareVirtualCollection;
@property(readonly, nonatomic) _Bool px_isContentSyndicationAllPhotosAlbum;
@property(readonly, nonatomic) _Bool px_isContentSyndicationVirtualCollection;
@property(readonly, nonatomic) _Bool px_isSharedAlbumsVirtualCollection;
@property(readonly, nonatomic) _Bool px_isMyAlbumsVirtualCollection;
@property(readonly, nonatomic) _Bool px_isImportHistoryCollection;
@property(readonly, nonatomic) _Bool px_isSharedActivityVirtualCollection;
@property(readonly, nonatomic) _Bool px_isPeopleVirtualCollection;
@property(readonly, nonatomic) _Bool px_isForYouVirtualCollection;
@property(readonly, nonatomic) _Bool px_isMemoriesVirtualCollection;
@property(readonly, nonatomic) _Bool px_isRecentMomentsVirtualCollection;
@property(readonly, nonatomic) _Bool px_isMomentsVirtualCollection;
@property(readonly, nonatomic) _Bool px_isPhotosVirtualCollection;
@property(readonly, nonatomic) _Bool px_isPlacesSmartAlbum;
@property(readonly, nonatomic) _Bool px_isRecentlyDeletedSmartAlbum;
@property(readonly, nonatomic) _Bool px_isRecentlyAddedSmartAlbum;
@property(readonly, nonatomic) _Bool px_isHiddenSmartAlbum;
@property(readonly, nonatomic) _Bool px_isFavoritesSmartAlbum;
@property(readonly, nonatomic) _Bool px_isAllPhotosSmartAlbum;
@property(readonly, nonatomic) _Bool px_isMediaTypeSmartAlbum;
@property(readonly, nonatomic) _Bool px_isRootSmartAlbum;
@property(readonly, nonatomic) _Bool px_isSmartAlbum;
@property(readonly, nonatomic) _Bool px_isUserSmartAlbum;
@property(readonly, nonatomic) _Bool px_isMyPhotoStreamAlbum;
@property(readonly, nonatomic) _Bool px_isImportedAlbum;
@property(readonly, nonatomic) _Bool px_isRegularAlbum;
@property(readonly, nonatomic) _Bool px_allowsImplicitSelectionForProjectOrSharingAction;
@property(readonly, nonatomic) _Bool px_isMemory;
@property(readonly, nonatomic) NSString *localizedDebugDescription;
@property(readonly, nonatomic) NSString *localizedSmartDescription;
- (id)localizedDateDescriptionWithOptions:(unsigned long long)arg1;	// IMP=0x00100000005e7eb0
@property(readonly, nonatomic) NSString *localizedDateDescription;
@property(readonly, nonatomic) _Bool isRecent;
@property(readonly, nonatomic) _Bool isAggregation;
@property(readonly, nonatomic) _Bool px_supportsFastCuration;
@property(readonly, nonatomic) double promotionScore;
@property(readonly, nonatomic) long long px_highlightKind;
@property(readonly, nonatomic) unsigned short px_highlightEnrichmentState;
@property(readonly, nonatomic) _Bool isEnrichmentComplete;
@property(readonly, nonatomic) _Bool isEnriched;
@property(readonly, nonatomic) long long aggregateMediaType;
- (id)px_fetchAncestorThatSupportsExplictlyRemovingAssets;	// IMP=0x00100000007ec2eb
- (id)px_fetchAncestorThatSupportsCustomKeyAssets;	// IMP=0x00100000007ec1e6
- (id)px_fetchContentAssetCollection;	// IMP=0x00100000007ec1dc
- (void)px_assignStoryTitleCategoryIfNeeded;	// IMP=0x00100000007ec1d6
- (_Bool)px_isTransientCollectionWithIdentifier:(id)arg1;	// IMP=0x00100000007ec153
@property(readonly, nonatomic) unsigned long long px_estimatedCuratedAssetsCount;
@property(readonly, nonatomic) unsigned short px_curationType;
- (id)px_debugDictionary;	// IMP=0x00100000007eb793
- (id)px_navigationURLComponents;	// IMP=0x00100000007eb666
- (id)px_navigationWellKnownName;	// IMP=0x00100000007eb631
- (id)px_navigationURLHost;	// IMP=0x00100000007eb624
- (unsigned long long)px_assetsDropMode;	// IMP=0x00100000007eb53a
- (_Bool)px_fetchIsEmptyWithOptions:(id)arg1;	// IMP=0x00100000007eb3f5

// Remaining properties
@property(readonly, nonatomic) _Bool canContainAssets;
@property(readonly, nonatomic) _Bool canContainCollections;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) NSDate *endDate;
@property(readonly, nonatomic) unsigned long long estimatedAssetCount;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) NSArray *localizedLocationNames;
@property(readonly, nonatomic) NSString *localizedSubtitle;
@property(readonly, nonatomic) NSString *localizedTitle;
@property(readonly, nonatomic) _Bool px_allowsMoveToPersonalLibrary;
@property(readonly, nonatomic) _Bool px_allowsMoveToSharedLibrary;
@property(readonly, nonatomic) _Bool px_canAddContent;
@property(readonly, nonatomic) _Bool px_canCreateContent;
@property(readonly, nonatomic) _Bool px_canDeleteContent;
@property(readonly, nonatomic) _Bool px_canRearrangeContent;
@property(readonly, nonatomic) _Bool px_canRemoveContent;
@property(readonly, nonatomic) id px_cheapLogIdentifier;
@property(readonly, nonatomic) _Bool px_isContentSyndicationFolder;
@property(readonly, nonatomic) _Bool px_isDeletable;
@property(readonly, nonatomic) _Bool px_isFolder;
@property(readonly, nonatomic) _Bool px_isInReadWriteCloudLibrary;
@property(readonly, nonatomic) _Bool px_isMacSyncedEventsFolder;
@property(readonly, nonatomic) _Bool px_isMacSyncedFacesFolder;
@property(readonly, nonatomic) _Bool px_isMediaTypesFolder;
@property(readonly, nonatomic) _Bool px_isProject;
@property(readonly, nonatomic) _Bool px_isProjectsFolder;
@property(readonly, nonatomic) _Bool px_isRegularFolder;
@property(readonly, nonatomic) _Bool px_isRenamable;
@property(readonly, nonatomic) _Bool px_isSharedAlbumsAndActivityFolder;
@property(readonly, nonatomic) _Bool px_isSharedAlbumsFolder;
@property(readonly, nonatomic) _Bool px_isSmartFolder;
@property(readonly, nonatomic) _Bool px_isTopLevelFolder;
@property(readonly, nonatomic) _Bool px_isTransientPlacesCollection;
@property(readonly, nonatomic) _Bool px_isUserCreated;
@property(readonly, nonatomic) _Bool px_shouldUseFacesRectForSmartCropping;
@property(readonly, nonatomic) NSDate *startDate;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uuid;
@end

