//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface ICCreateGeniusContainerRequest
{
}

+ (id)requestWithDatabaseID:(unsigned int)arg1 playlistName:(id)arg2 seedItemIDs:(id)arg3 itemIDs:(id)arg4;	// IMP=0x00400000000713ea
- (id)_bodyDataForPlaylistName:(id)arg1 seedItemIDs:(id)arg2 itemIDs:(id)arg3;	// IMP=0x0040000000070d6a
- (id)canonicalResponseForResponse:(id)arg1;	// IMP=0x0010000000070c74
- (id)initWithDatabaseID:(unsigned int)arg1 playlistName:(id)arg2 seedItemIDs:(id)arg3 itemIDs:(id)arg4;	// IMP=0x0010000000070b60

@end

