//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TVHKMediaEntityCollection.h"

@class NSString, TVHKDMAPPlaylistIdentifier, TVHKMediaEntityIdentifier, TVHKMediaEntityType;

__attribute__((visibility("hidden")))
@interface TVHKDAAPPlaylistMediaEntityCollection : TVHKMediaEntityCollection
{
    NSString *_imageIdentifier;	// 8 = 0x8
    TVHKMediaEntityType *_type;	// 16 = 0x10
    unsigned long long _playlistType;	// 24 = 0x18
    TVHKMediaEntityIdentifier *_parentPlaylistIdentifier;	// 32 = 0x20
    TVHKDMAPPlaylistIdentifier *_playlistIdentifier;	// 40 = 0x28
}

+ (unsigned long long)_playlistTypeFromDMAPEntity:(id)arg1;	// IMP=0x0060000000022a09
- (void).cxx_destruct;	// IMP=0x0000000000022c11
@property(copy, nonatomic) TVHKDMAPPlaylistIdentifier *playlistIdentifier; // @synthesize playlistIdentifier=_playlistIdentifier;
- (id)type;	// IMP=0x0000000000022bef
- (id)parentPlaylistIdentifier;	// IMP=0x0000000000022728
- (unsigned long long)playlistType;	// IMP=0x0000000000022682
- (id)mediaItemCount;	// IMP=0x00000000000225c9
- (id)isOrganizational;	// IMP=0x0000000000022591
- (id)isAutoGenerated;	// IMP=0x000000000002254b
- (id)imageIdentifier;	// IMP=0x0000000000022494
- (id)identifier;	// IMP=0x0000000000022482
- (id)initWithMediaServerIdentifier:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3;	// IMP=0x000000000002239a
- (id)initWithMediaServerIdentifier:(id)arg1 requestedProperties:(id)arg2 entity:(id)arg3 kind:(id)arg4;	// IMP=0x000000000002232b

@end

