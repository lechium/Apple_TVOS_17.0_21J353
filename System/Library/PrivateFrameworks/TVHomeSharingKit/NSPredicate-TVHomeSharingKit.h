//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSPredicate.h>

@interface NSPredicate (TVHomeSharingKit)
+ (id)_tvhk_keyPathsInComparisonPredicate:(id)arg1;	// IMP=0x00800000000b5860
+ (id)_tvhk_keyPathsInCompoundPredicate:(id)arg1;	// IMP=0x00800000000b569d
+ (id)_tvhk_keyPathsInPredicate:(id)arg1;	// IMP=0x00800000000b5539
+ (id)tvhk_predicateWithSubpredicates:(id)arg1 compoundPredicateType:(unsigned long long)arg2;	// IMP=0x00800000000b4ee9
+ (id)tvhk_excludeAllPlaylistTypePredicate:(id)arg1;	// IMP=0x00800000000b4cef
+ (id)tvhk_includeAnyPlaylistTypePredicate:(id)arg1;	// IMP=0x00800000000b4af5
+ (id)tvhk_unplayedPredicate;	// IMP=0x00800000000b4aae
+ (id)tvhk_notPlaylistTypePredicateWithPlaylistType:(unsigned long long)arg1;	// IMP=0x00800000000b4a41
+ (id)tvhk_playlistTypePredicateWithPlaylistType:(unsigned long long)arg1;	// IMP=0x00800000000b49d4
+ (id)tvhk_mediaEntityCollectionArtistIdentifierPredicateWithIdentifier:(id)arg1;	// IMP=0x00800000000b49b8
+ (id)tvhk_mediaItemComposerTitlePredicateWithComposerTitle:(id)arg1;	// IMP=0x00800000000b499c
+ (id)tvhk_mediaItemAlbumArtistIdentifierPredicateWithIdentifier:(id)arg1;	// IMP=0x00800000000b4980
+ (id)tvhk_mediaEntityTypePredicateWithMediaEntityType:(id)arg1;	// IMP=0x00800000000b4964
+ (id)tvhk_mediaEntityCompilationAlbumsPredicateWithWantCompilationAlbums:(_Bool)arg1;	// IMP=0x00800000000b48f7
+ (id)tvhk_mediaEntityAlbumIdentifierPredicateWithIdentifier:(id)arg1;	// IMP=0x00800000000b48db
+ (id)tvhk_genreTitlePredicateWithGenreTitle:(id)arg1;	// IMP=0x00800000000b48bf
+ (id)tvhk_identifierPredicateWithIdentifier:(id)arg1;	// IMP=0x00800000000b48a3
+ (id)tvhk_notEqualPredicateWithKeyPath:(id)arg1 value:(id)arg2;	// IMP=0x00800000000b487b
+ (id)tvhk_equalPredicateWithKeyPath:(id)arg1 value:(id)arg2;	// IMP=0x00800000000b4853
+ (id)tvhk_containsPredicateWithKeyPath:(id)arg1 value:(id)arg2;	// IMP=0x00800000000b482b
- (id)tvhk_keyPathsInPredicate;	// IMP=0x00100000000b5512
- (id)tvhk_predicateWithAlbumIdentifierPredicateRemoved:(id *)arg1;	// IMP=0x00100000000b51ee
- (id)tvhk_predicateWithRemovePredicateTest:(CDUnknownBlockType)arg1 removedPredicate:(id *)arg2;	// IMP=0x00100000000b4fbd
@end

