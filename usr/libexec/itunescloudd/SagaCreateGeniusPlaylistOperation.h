//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSString;

@interface SagaCreateGeniusPlaylistOperation
{
    long long _playlistPersistentID;	// 8 = 0x8
    NSString *_playlistName;	// 16 = 0x10
    NSArray *_seedItemIDs;	// 24 = 0x18
    NSArray *_itemIDs;	// 32 = 0x20
    unsigned long long _playlistSagaID;	// 40 = 0x28
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00400000000518e2
- (void).cxx_destruct;	// IMP=0x00200000000517d2
@property(readonly, nonatomic) unsigned long long playlistSagaID; // @synthesize playlistSagaID=_playlistSagaID;
- (void)main;	// IMP=0x00100000000513fe
- (_Bool)isPersistent;	// IMP=0x00100000000513f6
- (void)encodeWithCoder:(id)arg1;	// IMP=0x001000000005131d
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000511d6
- (id)initWithConfiguration:(id)arg1 geniusPlaylistPersistentID:(long long)arg2 playlistName:(id)arg3 seedItemIDs:(id)arg4 itemIDs:(id)arg5 clientIdentity:(id)arg6;	// IMP=0x00100000000510c3

@end

