//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIMediaItem.h"

@class NSString, VUIExtrasInfo, VUIFamilySharingEntity, VUIFamilySharingRelationships, VUIVideosPlayable;

__attribute__((visibility("hidden")))
@interface VUIFamilySharingMediaItem : VUIMediaItem
{
    NSString *_artworkURL;	// 8 = 0x8
    NSString *_previewArtworkURL;	// 16 = 0x10
    VUIExtrasInfo *_iTunesExtrasInfo;	// 24 = 0x18
    VUIFamilySharingRelationships *_relationships;	// 32 = 0x20
    VUIVideosPlayable *_videosPlayable;	// 40 = 0x28
    NSString *_buyParams;	// 48 = 0x30
    NSString *_personalizedBuyParams;	// 56 = 0x38
    VUIFamilySharingEntity *_entity;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000000cc578
@property(retain, nonatomic) VUIFamilySharingEntity *entity; // @synthesize entity=_entity;
@property(retain, nonatomic) NSString *personalizedBuyParams; // @synthesize personalizedBuyParams=_personalizedBuyParams;
@property(retain, nonatomic) NSString *buyParams; // @synthesize buyParams=_buyParams;
@property(retain, nonatomic) VUIVideosPlayable *videosPlayable; // @synthesize videosPlayable=_videosPlayable;
@property(retain, nonatomic) VUIFamilySharingRelationships *relationships; // @synthesize relationships=_relationships;
@property(retain, nonatomic) VUIExtrasInfo *iTunesExtrasInfo; // @synthesize iTunesExtrasInfo=_iTunesExtrasInfo;
@property(retain, nonatomic) NSString *previewArtworkURL; // @synthesize previewArtworkURL=_previewArtworkURL;
@property(retain, nonatomic) NSString *artworkURL; // @synthesize artworkURL=_artworkURL;
- (id)audioCapability;	// IMP=0x00000000000cc464
- (id)colorCapability;	// IMP=0x00000000000cc35e
- (id)resolution;	// IMP=0x00000000000cc2fb
- (id)_itunesExtrasDictionary;	// IMP=0x00000000000cc121
- (id)_bestRedownloadOffer;	// IMP=0x00000000000cbf69
- (id)_bestOffer;	// IMP=0x00000000000cbe80
- (_Bool)isFamilySharingContent;	// IMP=0x00000000000cbe78
- (id)contentDescription;	// IMP=0x00000000000cbda4
- (id)contentRating;	// IMP=0x00000000000cbd54
- (id)releaseYear;	// IMP=0x00000000000cbc89
- (id)releaseDate;	// IMP=0x00000000000cbc39
- (id)duration;	// IMP=0x00000000000cbb46
- (id)bookmark;	// IMP=0x00000000000cba61
- (id)genreTitle;	// IMP=0x00000000000cba11
- (id)showTitle;	// IMP=0x00000000000cb9c1
- (id)seasonNumber;	// IMP=0x00000000000cb971
- (id)episodeNumber;	// IMP=0x00000000000cb921
- (id)showCanonicalID;	// IMP=0x00000000000cb914
- (id)seasonCanonicalID;	// IMP=0x00000000000cb907
- (id)seasonIdentifier;	// IMP=0x00000000000cb7c5
- (id)showIdentifier;	// IMP=0x00000000000cb683
- (id)extrasURL;	// IMP=0x00000000000ca7ab
- (id)title;	// IMP=0x00000000000ca5fa
- (id)storeID;	// IMP=0x00000000000ca54a
- (id)initWithAMSEntity:(id)arg1 requestedProperties:(id)arg2;	// IMP=0x00000000000ca427

@end
