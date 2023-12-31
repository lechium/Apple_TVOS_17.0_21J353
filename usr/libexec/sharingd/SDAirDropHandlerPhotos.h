//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface SDAirDropHandlerPhotos
{
    _Bool _shouldExtractMediaFromPhotosBundles;	// 8 = 0x8
    _Bool _hasPhotos;	// 9 = 0x9
    _Bool _hasVideos;	// 10 = 0xa
    NSArray *_unprivatizedURLs;	// 16 = 0x10
    NSArray *_assetIdentifiers;	// 24 = 0x18
}

+ (id)suitableContentsDescriptionWithSenderName:(id)arg1 itemsCount:(long long)arg2 items:(id)arg3 senderIsMe:(_Bool)arg4 isVerifiableIdentity:(_Bool)arg5 hasPhotos:(_Bool)arg6 hasVideos:(_Bool)arg7 isModernProgress:(_Bool)arg8 transferState:(unsigned long long)arg9;	// IMP=0x004000000019ec55
- (void).cxx_destruct;	// IMP=0x002000000019fcfc
@property(copy, nonatomic) NSArray *assetIdentifiers; // @synthesize assetIdentifiers=_assetIdentifiers;
@property(copy, nonatomic) NSArray *unprivatizedURLs; // @synthesize unprivatizedURLs=_unprivatizedURLs;
@property(nonatomic) _Bool hasVideos; // @synthesize hasVideos=_hasVideos;
@property(nonatomic) _Bool hasPhotos; // @synthesize hasPhotos=_hasPhotos;
@property(readonly, nonatomic) _Bool shouldExtractMediaFromPhotosBundles; // @synthesize shouldExtractMediaFromPhotosBundles=_shouldExtractMediaFromPhotosBundles;
- (id)createDestination;	// IMP=0x001000000019fb79
- (void)prepareForAcceptWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x001000000019faee
- (_Bool)transferContainsAssetBundles:(id)arg1;	// IMP=0x001000000019f92f
- (void)updatePossibleActions;	// IMP=0x001000000019f900
- (id)transformPhotosAssetBundlesToFoldersIfNeededInCompletedURLs:(id)arg1;	// IMP=0x001000000019f3ab
- (_Bool)shouldEndAfterOpen;	// IMP=0x001000000019f3a3
- (_Bool)supportsAutoOpen;	// IMP=0x001000000019f39b
- (id)suitableContentsDescription;	// IMP=0x001000000019ea40
- (long long)transferTypes;	// IMP=0x001000000019ea0b
- (_Bool)canHandleTransfer;	// IMP=0x001000000019e9f6
- (id)initWithTransfer:(id)arg1;	// IMP=0x001000000019e9c0

@end

