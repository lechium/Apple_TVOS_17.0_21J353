//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class TVHKMediaEntityIdentifier;

__attribute__((visibility("hidden")))
@interface TVHKDAAPSeasonsFetchOperation
{
    TVHKMediaEntityIdentifier *_sourceShowIdentifier;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x00000000000b5c07
@property(copy, nonatomic) TVHKMediaEntityIdentifier *sourceShowIdentifier; // @synthesize sourceShowIdentifier=_sourceShowIdentifier;
- (id)_episodesFetchRequest;	// IMP=0x00000000000b5b1e
- (id)_mediaEntitiesWithFetchedEpisodes:(id)arg1 andMediaEntityCache:(id)arg2;	// IMP=0x00000000000b5a86
- (id)_mediaEntityCacheWithFetchCache:(id)arg1;	// IMP=0x00000000000b5a71
- (id)initWithRequest:(id)arg1 mediaServerIdentifier:(id)arg2 sessionState:(id)arg3 requestSession:(id)arg4 fetchCache:(id)arg5;	// IMP=0x00000000000b58ec

@end

