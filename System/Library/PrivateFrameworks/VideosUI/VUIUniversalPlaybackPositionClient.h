//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSLock, NSString, SBKUniversalPlaybackPositionStore, VUIUPPClientState;

__attribute__((visibility("hidden")))
@interface VUIUniversalPlaybackPositionClient : NSObject
{
    SBKUniversalPlaybackPositionStore *_uppStore;	// 8 = 0x8
    double _lastSyncTimestamp;	// 16 = 0x10
    _Bool _needsSync;	// 24 = 0x18
    NSLock *_stateLock;	// 32 = 0x20
    VUIUPPClientState *_state;	// 40 = 0x28
}

+ (id)defaultClient;	// IMP=0x00100000001458df
- (void).cxx_destruct;	// IMP=0x00000000001462c1
@property(retain) VUIUPPClientState *state; // @synthesize state=_state;
- (id)allRecords;	// IMP=0x00000000001461de
- (void)_activeAccountDidChange:(id)arg1;	// IMP=0x0000000000146094
- (id)recordForBookmarkKey:(id)arg1;	// IMP=0x0000000000145eb0
- (void)writeItems:(id)arg1;	// IMP=0x0000000000145cb9
- (void)synchronize:(CDUnknownBlockType)arg1;	// IMP=0x0000000000145b2d
- (void)_setNeedsSync;	// IMP=0x0000000000145acc
- (void)dealloc;	// IMP=0x0000000000145a57
- (id)init;	// IMP=0x0000000000145934
- (void)cancelUniversalPlaybackPositionTransaction:(id)arg1;	// IMP=0x0000000000146ac4
- (void)commitUniversalPlaybackPositionTransaction:(id)arg1 domainVersion:(id)arg2 metadataEnumerationBlock:(CDUnknownBlockType)arg3;	// IMP=0x0000000000146456
- (id)beginTransactionWithItemsToSyncEnumerationBlock:(CDUnknownBlockType)arg1;	// IMP=0x00000000001462f4

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
