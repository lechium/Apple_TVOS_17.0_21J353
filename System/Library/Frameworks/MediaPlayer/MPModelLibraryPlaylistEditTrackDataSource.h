//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MPModelObject, MPModelPlaylistEntry;

__attribute__((visibility("hidden")))
@interface MPModelLibraryPlaylistEditTrackDataSource
{
    MPModelPlaylistEntry *_playlistEntry;	// 8 = 0x8
    MPModelObject *_track;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0000000000209a11
- (void)loadEntriesWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x0000000000209964
- (id)description;	// IMP=0x000000000020991c
- (id)initWithTrackObject:(id)arg1;	// IMP=0x00000000002096da

@end
