//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class ICCloudContentTasteUpdateItem, ICCloudContentTasteUpdateResponse, ICConnectionConfiguration, NSError, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface ICCloudContentTasteUpdateOperation : NSOperation
{
    NSObject<OS_dispatch_queue> *_workQueue;	// 8 = 0x8
    ICCloudContentTasteUpdateItem *_contentTasteItem;	// 16 = 0x10
    ICConnectionConfiguration *_configuration;	// 24 = 0x18
    _Bool _invalidateLocalCache;	// 32 = 0x20
    NSString *_operationIdentifier;	// 40 = 0x28
    NSError *_error;	// 48 = 0x30
    ICCloudContentTasteUpdateResponse *_contentTasteUpdateResponse;	// 56 = 0x38
}

- (void).cxx_destruct;	// IMP=0x002000000011dc79
@property(readonly, nonatomic) ICCloudContentTasteUpdateResponse *contentTasteUpdateResponse; // @synthesize contentTasteUpdateResponse=_contentTasteUpdateResponse;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
- (void)_setLikedStateInfo:(id)arg1 forEntity:(id)arg2;	// IMP=0x001000000011d6bb
- (void)_updateContentTasteForGlobalPlaylists:(id)arg1;	// IMP=0x001000000011d008
- (void)_updateContentTasteForMediaItems:(id)arg1;	// IMP=0x001000000011c209
- (void)_updateContentTasteForAlbumArtistItems:(id)arg1;	// IMP=0x001000000011bb2d
- (void)_prepareContentTasteResponse:(id *)arg1 withContentTasteItems:(id *)arg2 fromCachedContentTasteResponseItems:(id)arg3 includedContentTasteItems:(id)arg4;	// IMP=0x001000000011b6e8
- (id)_prepareCachedResponseFromResponse:(id)arg1 byAddingResponseTimeIntervalKey:(_Bool)arg2 withResponseTimeInterval:(id)arg3;	// IMP=0x001000000011b531
- (void)_setCachedContentTasteResponse:(id)arg1;	// IMP=0x001000000011b4ae
- (void)_getStoreAdamIDLikedState:(id *)arg1 playlistGlobalIDLikedState:(id *)arg2 artistGlobalIDLikedState:(id *)arg3;	// IMP=0x001000000011afa0
- (id)_contentTasteUpdateResponseWithServerResponse:(id)arg1 expirationDate:(id)arg2 revisionID:(unsigned long long)arg3 isCachedResponse:(_Bool)arg4;	// IMP=0x001000000011a97f
- (void)_getPBData:(id *)arg1 includedContentTasteItemUpdates:(id *)arg2 fromContentTasteUpdateItems:(id)arg3;	// IMP=0x001000000011a391
- (void)main;	// IMP=0x001000000011a071
@property(readonly, nonatomic) ICCloudContentTasteUpdateItem *requestItem;
@property(readonly, nonatomic) NSString *operationIdentifier;
- (id)initWithContentTasteUpdateItem:(id)arg1 invalidateLocalCache:(_Bool)arg2 configuration:(id)arg3 operationIdentifier:(id)arg4;	// IMP=0x0010000000119f34
- (id)init;	// IMP=0x0010000000119ef2

@end

