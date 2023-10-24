//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ATVUPPClientState, NSLock, NSString, SBKUniversalPlaybackPositionStore;

__attribute__((visibility("hidden")))
@interface TVCKUniversalPlaybackPositionClient : NSObject
{
    SBKUniversalPlaybackPositionStore *_uppStore;	// 8 = 0x8
    id _activeAccountOrNull;	// 16 = 0x10
    double _lastSyncTimestamp;	// 24 = 0x18
    _Bool _needsSync;	// 32 = 0x20
    NSLock *_stateLock;	// 40 = 0x28
    ATVUPPClientState *_state;	// 48 = 0x30
}

+ (id)defaultClient;	// IMP=0x001000000009926f
- (void).cxx_destruct;	// IMP=0x000000000009a02f
@property(retain) ATVUPPClientState *state; // @synthesize state=_state;
- (id)allRecords;	// IMP=0x0000000000099f4c
- (void)_updateBoundActiveStoreAccount;	// IMP=0x0000000000099d46
- (void)tvs_bindActiveStoreAccountBindingToObject:(id)arg1 withKeyPath:(id)arg2 options:(id)arg3;	// IMP=0x0000000000099c56
- (id)ActiveStoreAccountBinding;	// IMP=0x0000000000099c06
- (id)recordForBookmarkKey:(id)arg1;	// IMP=0x000000000009995c
- (id)recordForItemIdentifier:(id)arg1 mediaType:(id)arg2 podcastURL:(id)arg3 podcastGUID:(id)arg4;	// IMP=0x0000000000099843
- (void)writeItems:(id)arg1;	// IMP=0x000000000009964c
- (void)synchronize:(CDUnknownBlockType)arg1;	// IMP=0x00000000000994ba
- (void)_setNeedsSync;	// IMP=0x0000000000099459
- (void)dealloc;	// IMP=0x00000000000993e4
- (id)init;	// IMP=0x00000000000992c4
- (void)cancelUniversalPlaybackPositionTransaction:(id)arg1;	// IMP=0x000000000009a7b4
- (void)commitUniversalPlaybackPositionTransaction:(id)arg1 domainVersion:(id)arg2 metadataEnumerationBlock:(CDUnknownBlockType)arg3;	// IMP=0x000000000009a1cf
- (id)beginTransactionWithItemsToSyncEnumerationBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000009a06d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

