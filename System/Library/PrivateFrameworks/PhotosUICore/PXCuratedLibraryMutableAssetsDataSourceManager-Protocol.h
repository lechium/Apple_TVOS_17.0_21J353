//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/PXMutableAssetsDataSourceManager-Protocol.h>

@class NSIndexSet, NSPredicate, NSString;
@protocol PXDisplayAsset, PXDisplayAssetCollection;

@protocol PXCuratedLibraryMutableAssetsDataSourceManager <PXMutableAssetsDataSourceManager>
@property(nonatomic) long long libraryFilter;
@property(nonatomic) _Bool canIncludeUnsavedSyndicatedAssets;
@property(retain, nonatomic) NSPredicate *allPhotosFilterPredicate;
@property(nonatomic) long long zoomLevel;
- (void)resumeChangeDelivery:(id)arg1;
- (id)pauseChangeDeliveryWithTimeout:(double)arg1 identifier:(NSString *)arg2;
- (void)setTransientKeyAsset:(id <PXDisplayAsset>)arg1 forAssetCollection:(id <PXDisplayAssetCollection>)arg2 zoomLevel:(long long)arg3;
- (_Bool)forceAccurateAllSectionsIfNeeded;
- (_Bool)forceAccurateSection:(long long)arg1 andSectionsBeforeAndAfter:(long long)arg2;
- (_Bool)forceAccurateSectionsIfNeeded:(NSIndexSet *)arg1 inZoomLevel:(long long)arg2;
- (_Bool)forceAccurateSectionsIfNeeded:(NSIndexSet *)arg1;
- (void)loadIfNeeded;
@end

