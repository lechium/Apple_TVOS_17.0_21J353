//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CloudLibraryConnection, ICConnectionConfiguration, ICUserIdentity;

@interface SagaImporter : NSObject
{
    _Bool _isCancelled;	// 8 = 0x8
    float _progress;	// 12 = 0xc
    CloudLibraryConnection *_connection;	// 16 = 0x10
    ICConnectionConfiguration *_configuration;	// 24 = 0x18
    ICUserIdentity *_userIdentity;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000b28cc
@property(readonly, copy, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property(readonly, nonatomic) float progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(readonly, nonatomic) ICConnectionConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) CloudLibraryConnection *connection; // @synthesize connection=_connection;
- (id)_importArtistsFromRevision:(unsigned int)arg1 toRevision:(unsigned int)arg2 clientIdentity:(id)arg3 baseDirectory:(id)arg4 outArtistsResponseData:(id *)arg5 outArtistsResponseDataDestinations:(id *)arg6;	// IMP=0x00100000000b1934
- (id)_importAlbumsFromRevision:(unsigned int)arg1 toRevision:(unsigned int)arg2 clientIdentity:(id)arg3 baseDirectory:(id)arg4 outAlbumsResponseData:(id *)arg5 outAlbumsResponseDataDestinations:(id *)arg6;	// IMP=0x00100000000b09ce
- (id)_importPlaylistsFromRevision:(unsigned int)arg1 toRevision:(unsigned int)arg2 clientIdentity:(id)arg3 baseDirectory:(id)arg4 outPlaylistsResponseData:(id *)arg5 outPlaylistsResponseDataDestinations:(id *)arg6;	// IMP=0x00100000000b0184
- (id)_importTracksFromRevision:(unsigned int)arg1 toRevision:(unsigned int)arg2 clientIdentity:(id)arg3 baseDirectory:(id)arg4 outItemsResponseData:(id *)arg5 outTracksResponseDataDestinations:(id *)arg6 outItemsToLyricsTokenMap:(id *)arg7;	// IMP=0x00100000000af169
- (_Bool)_updateGlobalPlaylistsFromContainersPayloadAtPath:(id)arg1 downloadPathForSubscribedContainersPayload:(id)arg2 clientIdentity:(id)arg3;	// IMP=0x00100000000aef02
- (void)_importLyricsWithLyricsTokenMap:(id)arg1 clientIdentity:(id)arg2;	// IMP=0x00100000000aedc3
- (void)_removeUnavailableSubscriptionAssetsInLibrary:(id)arg1;	// IMP=0x00100000000aed3c
- (void)_importTracksFromRevision:(unsigned int)arg1 toRevision:(unsigned int)arg2 clientIdentity:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000adb1a
- (void)importTracksFromRevision:(unsigned int)arg1 toRevision:(unsigned int)arg2 clientIdentity:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000ac050
- (void)cancel;	// IMP=0x00100000000abf81
- (id)initWithConnection:(id)arg1;	// IMP=0x00100000000abe49

@end

