//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CPLChangeBatch, CPLEngineChangePipe, CPLEngineIDMapping, CPLEngineLibrary, CPLEngineScheduler, CPLEngineScopeStorage, CPLEngineStore, NSString;

@interface CPLDirectPullChangeSession
{
    _Bool _shouldPullAtLeastOneBatch;	// 8 = 0x8
    CPLChangeBatch *_pendingAckForBatch;	// 16 = 0x10
    CPLChangeBatch *_expandedCloudBatch;	// 24 = 0x18
    CPLChangeBatch *_expandedClientBatch;	// 32 = 0x20
    CPLChangeBatch *_scopeChangesBatch;	// 40 = 0x28
    CPLChangeBatch *_revertedChangesBatch;	// 48 = 0x30
    NSString *_lastSeenLibraryVersion;	// 56 = 0x38
    CPLEngineLibrary *_engineLibrary;	// 64 = 0x40
    CPLEngineStore *_store;	// 72 = 0x48
    CPLEngineScopeStorage *_scopes;	// 80 = 0x50
    CPLEngineChangePipe *_pullQueue;	// 88 = 0x58
    CPLEngineIDMapping *_idMapping;	// 96 = 0x60
    CPLEngineScheduler *_scheduler;	// 104 = 0x68
}

+ (id)selfCrashResetReason;	// IMP=0x00200000000a8fad
- (void).cxx_destruct;	// IMP=0x00200000000a9079
- (void)finalizeWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a828f
- (void)acknowledgeChangeBatch:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000a7148
- (void)getChangeBatchWithCompletionHandler:(CDUnknownBlockType)arg1;	// IMP=0x00100000000a5f22
- (void)beginSessionWithKnownLibraryVersion:(id)arg1 context:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000a56aa
- (id)clientWorkDescription;	// IMP=0x00100000000a569d

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

