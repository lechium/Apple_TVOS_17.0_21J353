//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface ADSyncSnapshot : NSObject
{
    NSMutableDictionary *_pluginCache;	// 8 = 0x8
    NSMutableDictionary *_appsCache;	// 16 = 0x10
    NSObject<OS_dispatch_queue> *_queue;	// 24 = 0x18
    NSObject<OS_dispatch_source> *_saveTimer;	// 32 = 0x20
}

+ (id)sharedInstance;	// IMP=0x00400000000b350e
- (void).cxx_destruct;	// IMP=0x00200000000b2bdd
- (void)_save;	// IMP=0x00100000000b2769
- (void)pruneCacheWithCurrentSynapseInfo:(id)arg1;	// IMP=0x00100000000b26dc
- (_Bool)_pruneAppsCacheWithTruth:(id)arg1;	// IMP=0x00100000000b21af
- (void)_readFromDisk;	// IMP=0x00100000000b1b88
- (_Bool)shouldIgnoreSyncKey:(id)arg1;	// IMP=0x00100000000b1b1e
- (void)deleteSavedSnapshots;	// IMP=0x00100000000b1ad3
- (void)noteSendingChunk:(id)arg1;	// IMP=0x00100000000b1869
- (void)_noteSendingPostGen:(id)arg1 validity:(id)arg2 key:(id)arg3 appMetaData:(id)arg4;	// IMP=0x00100000000b14b7
- (void)_scheduleSave;	// IMP=0x00100000000b137f
- (void)_cancelSaveTimer;	// IMP=0x00100000000b1349
- (void)fetchSentAnchorsOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b11e6
- (void)_fetchSentAnchorsOnQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00100000000b1040
- (id)_storePath;	// IMP=0x00100000000b0ff2
- (id)init;	// IMP=0x00100000000b0e7e

@end
