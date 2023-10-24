//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSAttributedString, NSItemProvider, NSObject, NSString, PXAssetReference, PXGAnimation, UIView;
@protocol PXAnonymousViewController, PXDisplayAsset, PXMemoryAssetsActionFactory;

@protocol PXPhotosViewDelegate <NSObject>

@optional
@property(readonly, nonatomic) id <PXMemoryAssetsActionFactory> memoryAssetsActionFactory;
- (_Bool)allowsContextMenuInteractionForPhotosViewController:(NSObject<PXAnonymousViewController> *)arg1;
- (NSAttributedString *)customNoContentFallbackMessage;
- (NSString *)customNoContentFallbackTitle;
- (unsigned long long)photosViewControllerFilterSortedRecordsStrategy:(NSObject<PXAnonymousViewController> *)arg1;
- (_Bool)photosViewController:(NSObject<PXAnonymousViewController> *)arg1 isAssetEligibleForPlaybackWithSettlingEffect:(id <PXDisplayAsset>)arg2;
- (_Bool)photosViewController:(NSObject<PXAnonymousViewController> *)arg1 isAssetEligibleForAutoPlayback:(id <PXDisplayAsset>)arg2;
- (_Bool)photosViewController:(NSObject<PXAnonymousViewController> *)arg1 canPlayAssetInline:(id <PXDisplayAsset>)arg2;
- (NSItemProvider *)photosViewController:(NSObject<PXAnonymousViewController> *)arg1 dragItemProviderForAssetReference:(PXAssetReference *)arg2;
- (void)photosViewController:(NSObject<PXAnonymousViewController> *)arg1 didDoubleTapAssetReference:(PXAssetReference *)arg2;
- (void)containerWasDeletedForPhotosViewController:(NSObject<PXAnonymousViewController> *)arg1;
- (_Bool)shouldAnimateFromHeaderView:(UIView *)arg1 toHeaderView:(UIView *)arg2;
- (UIView *)headerViewForPhotosViewController:(NSObject<PXAnonymousViewController> *)arg1;
- (PXGAnimation *)photosViewController:(NSObject<PXAnonymousViewController> *)arg1 animationForProposedAnimation:(PXGAnimation *)arg2;
- (_Bool)photosViewController:(NSObject<PXAnonymousViewController> *)arg1 didPickAssetReference:(PXAssetReference *)arg2;
@end

