//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TVServices/TVTopShelfSectionedItem.h>

@interface TVTopShelfSectionedItem (HBTopShelf)
+ (long long)_hb_genericPlaceholderForSectionedImageShape:(unsigned long long)arg1;	// IMP=0x0020000000009106
- (_Bool)_hb_hasPodcastsRelatedMediaTypeWithApplicationIdentifier:(id)arg1;	// IMP=0x0010000000008fdb
- (_Bool)_hb_hasMusicRelatedMediaTypeWithApplicationIdentifier:(id)arg1;	// IMP=0x0010000000008e96
- (_Bool)_hb_hasPhotoRelatedMediaTypeWithApplicationIdentifier:(id)arg1;	// IMP=0x0010000000008e77
- (_Bool)_hb_hasTVRelatedMediaTypeWithApplicationIdentifier:(id)arg1;	// IMP=0x0010000000008d45
- (_Bool)_hb_hasMovieRelatedMediaTypeWithApplicationIdentifier:(id)arg1;	// IMP=0x0010000000008cbb
- (long long)hb_placeholderAssetTypeWithApplicationIdentifier:(id)arg1;	// IMP=0x0010000000008b93
@property(readonly, nonatomic) unsigned long long hb_imageScaleMode;
@property(readonly, nonatomic) struct CGSize hb_imageSize;
@property(readonly, nonatomic) unsigned long long hb_imageShape;
@end

