//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface TVHKMediaLibraryDAAPBasePlaylistOperation
{
    unsigned int _basePlaylistID;	// 8 = 0x8
    unsigned long long _basePlaylistPersistentID;	// 16 = 0x10
}

@property(nonatomic) unsigned long long basePlaylistPersistentID; // @synthesize basePlaylistPersistentID=_basePlaylistPersistentID;
@property(nonatomic) unsigned int basePlaylistID; // @synthesize basePlaylistID=_basePlaylistID;
- (void)_handleResponse:(id)arg1;	// IMP=0x000000000001f646
- (id)initWithSessionState:(id)arg1 requestSession:(id)arg2;	// IMP=0x000000000001f4dc
- (id)initWithRequest:(id)arg1 requestSession:(id)arg2;	// IMP=0x000000000001f46d

@end

