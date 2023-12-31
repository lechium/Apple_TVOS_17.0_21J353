//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TVHKDAAPMediaItemsFetchOperation, TVHKMediaEntitiesFetchCache, TVHKMediaLibraryRequestSession, TVHKMediaLibrarySessionState, TVHKMediaServerIdentifier, TVHKMediaServerVersion;

__attribute__((visibility("hidden")))
@interface TVHKDAAPShowsBaseFetchOperation
{
    TVHKMediaServerIdentifier *_mediaServerIdentifier;	// 8 = 0x8
    TVHKMediaLibrarySessionState *_sessionState;	// 16 = 0x10
    TVHKMediaLibraryRequestSession *_requestSession;	// 24 = 0x18
    unsigned long long _basePlaylistID;	// 32 = 0x20
    unsigned long long _databaseID;	// 40 = 0x28
    unsigned long long _currentServerRevision;	// 48 = 0x30
    TVHKMediaServerVersion *_serverVersion;	// 56 = 0x38
    TVHKDAAPMediaItemsFetchOperation *_episodesFetchOperation;	// 64 = 0x40
    TVHKMediaEntitiesFetchCache *_fetchCache;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00000000000879b4
@property(retain, nonatomic) TVHKMediaEntitiesFetchCache *fetchCache; // @synthesize fetchCache=_fetchCache;
@property(retain, nonatomic) TVHKDAAPMediaItemsFetchOperation *episodesFetchOperation; // @synthesize episodesFetchOperation=_episodesFetchOperation;
@property(copy, nonatomic) TVHKMediaServerVersion *serverVersion; // @synthesize serverVersion=_serverVersion;
@property(nonatomic) unsigned long long currentServerRevision; // @synthesize currentServerRevision=_currentServerRevision;
@property(nonatomic) unsigned long long databaseID; // @synthesize databaseID=_databaseID;
@property(nonatomic) unsigned long long basePlaylistID; // @synthesize basePlaylistID=_basePlaylistID;
@property(readonly, nonatomic) TVHKMediaLibraryRequestSession *requestSession; // @synthesize requestSession=_requestSession;
@property(readonly, copy, nonatomic) TVHKMediaLibrarySessionState *sessionState; // @synthesize sessionState=_sessionState;
@property(readonly, copy, nonatomic) TVHKMediaServerIdentifier *mediaServerIdentifier; // @synthesize mediaServerIdentifier=_mediaServerIdentifier;
- (id)_episodesFetchRequest;	// IMP=0x00000000000877b0
- (id)_mediaEntitiesWithFetchedEpisodes:(id)arg1 andMediaEntityCache:(id)arg2;	// IMP=0x0000000000087748
- (id)_mediaEntityCacheWithFetchCache:(id)arg1;	// IMP=0x00000000000876e5
- (void)_mediaEntitiesWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x000000000008706a
- (void)cancel;	// IMP=0x0000000000086ffc
- (id)initWithRequest:(id)arg1 mediaServerIdentifier:(id)arg2 sessionState:(id)arg3 requestSession:(id)arg4 fetchCache:(id)arg5;	// IMP=0x0000000000086da3
- (id)_initWithRequest:(id)arg1;	// IMP=0x0000000000086d34

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

