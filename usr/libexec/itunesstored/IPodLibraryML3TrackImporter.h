//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IPodLibraryML3TrackImporter : NSObject
{
}

- (id)_extendedContentRatingStringForLibraryItem:(id)arg1;	// IMP=0x00400000001d43a9
- (id)_currentTrackChapterDataForTrackPid:(long long)arg1 libraryItem:(id)arg2 usingLibrary:(id)arg3;	// IMP=0x00100000001d4339
- (id)_storeArtworkTokenFromLibraryItem:(id)arg1 metadata:(id)arg2;	// IMP=0x00100000001d4280
- (id)_currentTrackMovieInfoFromMetadata:(id)arg1;	// IMP=0x00100000001d4201
- (id)_stringValueForURLValue:(id)arg1;	// IMP=0x00100000001d41ec
- (id)_absoluteTimeValueForDateValue:(id)arg1;	// IMP=0x00100000001d41b7
- (id)_importPropertiesFromLibraryItem:(id)arg1 fromAccount:(id)arg2 usingLibrary:(id)arg3;	// IMP=0x00100000001d2cb0
- (_Bool)importLibraryItems:(id)arg1 toMusicLibrary:(id)arg2 importedItemPids:(id)arg3;	// IMP=0x00100000001d22e3

@end
